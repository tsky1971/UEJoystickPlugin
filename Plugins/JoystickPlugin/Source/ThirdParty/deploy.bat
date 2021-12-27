@echo on

echo "set DIR names"
SET SDL_DIR=SDL2_DEV
SET BUILD_DIR=build-SDL2

if not exist %SDL_DIR%\Lib (
	goto ERROR_LIB
)
echo "SDL_DIR" %SDL_DIR%

if not exist %BUILD_DIR% (
	goto ERROR_SRC
)
echo "BUILD_DIR" %BUILD_DIR%

cd %BUILD_DIR%

echo "copy libs/inc"
copy include\*.* ..\SDL2extern\include\
copy Release\*.* ..\SDL2extern\Lib\

echo "copy dlls to plugin binary/win64"
if not exist ..\..\..\Binaries\Win64\ (
	mkdir ..\..\..\Binaries\Win64\
)
copy Release\*.dll ..\..\..\Binaries\Win64\

echo "copy to Project binary/win64"
if not exist ..\..\..\..\..\Binaries\Win64\ (
	mkdir ..\..\..\..\..\Binaries\Win64\
)
copy Release\*.dll ..\..\..\..\..\Binaries\Win64\

cd ..

copy %SDL_DIR%\inc

goto OK

:ERROR_LIB
echo "compile first"

:ERROR_SRC
echo "get source first"

lude\*.* SDL2extern\include\

:OK
echo "SUCCESS"
pause
