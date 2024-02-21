@echo off

echo "CMake not may be older than 3.15"
set CMAKE_EXE="C:\Program Files\CMake\bin\cmake.exe"

if not exist %CMAKE_EXE% (
	echo "not found cmake.exe"
	goto INSTALL_CMAKE
)

echo "Visual Studio 2022"
call "C:\Program Files\Microsoft Visual Studio\2022\Enterprise\VC\Auxiliary\Build\vcvarsall.bat" x86_amd64

echo "set DIR names"
SET SDL_DIR=SDL2_DEV
SET BUILD_DIR=build-SDL2

if not exist %SDL_DIR%\Lib (
	mkdir %SDL_DIR%\Lib
)
echo "SDL_DIR" %SDL_DIR%

if not exist %BUILD_DIR% (
	mkdir %BUILD_DIR%
)
echo "BUILD_DIR" %BUILD_DIR%

cd %BUILD_DIR%

%CMAKE_EXE% -G "Visual Studio 17 2022" -A x64 -DSDL_LIBC=ON -DSDL_STATIC=ON -DSDL_SHARED=ON -DLIB_C=ON-DFORCE_STATIC_VCRT=ON -DEPIC_EXTENSIONS=ON ../%SDL_DIR% 

echo "SDL2 build..."
"C:\Program Files\Microsoft Visual Studio\2022\Enterprise\MSBuild\Current\Bin\MSBuild.exe" sdl2.sln /t:SDL2 /p:Configuration="Release"

echo "SDL2main build..."
"C:\Program Files\Microsoft Visual Studio\2022\Enterprise\MSBuild\Current\Bin\MSBuild.exe" sdl2.sln /t:SDL2main /p:Configuration="Release"

echo "SDL2-static build..."
"C:\Program Files\Microsoft Visual Studio\2022\Enterprise\MSBuild\Current\Bin\MSBuild.exe" sdl2.sln /t:SDL2-static /p:Configuration="Release"

rem "C:\Program Files\Microsoft Visual Studio\2022\Enterprise\MSBuild\Current\Bin\MSBuild.exe" sdl2.sln /t:sdl_headers_copy /p:Configuration="Release"

echo "SDL2 install..."
rem "C:\Program Files\Microsoft Visual Studio\2022\Enterprise\MSBuild\Current\Bin\MSBuild.exe" sdl2.sln /t:INSTALL /p:Configuration="Release"

echo "copy libs/inc"
xcopy include\*.* ..\SDL2extern\include\ /V /S /E /Y
xcopy Release\*.* ..\SDL2extern\Lib\ /V /S /E /Y

echo "copy dlls to plugin binary/win64"
if not exist ..\..\..\Binaries\Win64\ (
	mkdir ..\..\..\Binaries\Win64\
)
xcopy Release\*.dll ..\..\..\Binaries\Win64\ /V /S /E /Y

echo "copy to Project binary/win64"
if not exist ..\..\..\..\..\Binaries\Win64\ (
	mkdir ..\..\..\..\..\Binaries\Win64\
)
xcopy Release\*.dll ..\..\..\..\..\Binaries\Win64\ /V /S /E /Y

cd ..

xcopy %SDL_DIR%\include\*.* SDL2extern\include\SDL2\  /V /S /E /Y

echo "SUCCESS"
goto ENDE

:INSTALL_MERCURIAL
cls
echo "Please install Mercurial x64"
pause

:INSTALL_CMAKE
cls
echo "Please install cmake > 3.6 x64"
pause

:ENDE
echo "finish."

