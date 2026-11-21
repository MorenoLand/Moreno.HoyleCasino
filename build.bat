@echo off
setlocal
cd /d "%~dp0"
set PATH=D:\msys64\mingw32\bin;%PATH%
if not exist build\obj mkdir build\obj
if not exist build\sources.rsp (
    powershell -NoProfile -Command "Get-ChildItem src -Recurse -Filter *.c | ForEach-Object { '\"' + $_.FullName + '\"' } | Set-Content build\sources.rsp"
)
echo [1/3] source objects
pushd build\obj
i686-w64-mingw32-gcc -c -O1 -w -I..\..\recomp\rt -I..\..\src "@..\sources.rsp"
if errorlevel 1 goto fail
popd
echo [2/3] runtime objects
for %%f in (rt api api_special boot override api_gen) do (
    i686-w64-mingw32-gcc -c -O1 -w -D_WIN32_WINNT=0x0501 -Irecomp\rt -Isrc recomp\rt\%%f.c -o build\obj\%%f.o
    if errorlevel 1 goto fail
)
i686-w64-mingw32-gcc -c -O1 -w -Irecomp\rt build\image_blob.c -o build\obj\image_blob.o
if errorlevel 1 goto fail
echo [3/3] link
i686-w64-mingw32-gcc -o bin\hoyle.exe build\obj\*.o -static-libgcc -mconsole -lwinmm -lole32 -lgdi32 -luser32 -lshell32 -ladvapi32 -lcomdlg32 -lwinspool
if errorlevel 1 goto fail
echo ok
exit /b 0
:fail
echo failed
exit /b 1
