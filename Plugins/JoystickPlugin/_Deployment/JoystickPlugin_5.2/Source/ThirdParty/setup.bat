@echo off

if not exist "C:\Program Files\Git\bin" goto INSTALL_GITFORWINDOWS
if not exist SDL2_DEV (
	"C:\Program Files\Git\bin\git.exe" clone https://github.com/tsky1971/SDL.git SDL2_DEV
) else (
	cd SDL2_DEV
	git pull
	cd ..
)

unzip cmake.zip

goto ENDE

:INSTALL_GITFORWINDOWS
echo "Please install Git for Windows x64"
pause

:ENDE
echo "finish."
pause
