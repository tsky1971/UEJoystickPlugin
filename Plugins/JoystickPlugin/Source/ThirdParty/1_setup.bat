@echo off

if not exist "C:\Program Files\Git\bin" goto INSTALL_GITFORWINDOWS

if not exist SDL2_DEV (
	"C:\Program Files\Git\bin\git.exe" clone git@github.com:libsdl-org/SDL.git SDL2_DEV
	cd SDL2_DEV
	"C:\Program Files\Git\bin\git.exe" checkout release-2.28.x
	cd ..
) else (
	cd SDL2_DEV
	"C:\Program Files\Git\bin\git.exe" pull
	cd ..
)

if not exist SDL3_DEV (
	"C:\Program Files\Git\bin\git.exe" clone git@github.com:libsdl-org/SDL.git SDL3_DEV
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
