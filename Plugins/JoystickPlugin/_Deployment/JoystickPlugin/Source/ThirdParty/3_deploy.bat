@echo on

echo "set DIR names"
SET SDL_DIR=SDL3_DEV
SET BUILD_DIR=build-SDL3

SET DEPLOY_DIR=SDL3cglab

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
copy Release\*.dll ..\%DEPLOY_DIR%\bin\
copy include\*.* ..\%DEPLOY_DIR%\include\
copy Release\*.* ..\%DEPLOY_DIR%\Lib\

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

:OK
echo "SUCCESS"
pause
