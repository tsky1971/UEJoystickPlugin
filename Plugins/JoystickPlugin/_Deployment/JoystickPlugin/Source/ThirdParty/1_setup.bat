@echo off

if not exist "C:\Program Files\Git\bin" goto INSTALL_GITFORWINDOWS

if not exist SDL3_DEV (
	"C:\Program Files\Git\bin\git.exe" clone https://github.com/tsky1971/SDL.git SDL3_DEV
    cd SDL3_DEV
    "C:\Program Files\Git\bin\git.exe" checkout SDL3_Saitek_Rudder_Patch
    cd ..
) else (
	cd SDL3_DEV
	"C:\Program Files\Git\bin\git.exe" pull
	cd ..
)

goto ENDE

:INSTALL_GITFORWINDOWS
echo "Please install Git for Windows x64"
pause

:ENDE
echo "finish."
pause
