@echo off
setlocal enabledelayedexpansion

rem Detect gcc
where gcc >nul 2>nul
if %ERRORLEVEL% neq 0 (
  echo gcc not found. Please install MinGW-w64 or use clang.
  exit /b 1
)

rem Build the program under test
echo Compiling checking_zero_matrix.c ...
gcc -std=c11 -O2 -Wall -Wextra -o checking_zero_matrix.exe checking_zero_matrix.c
if %ERRORLEVEL% neq 0 (
  echo Build failed.
  exit /b 1
)

set /a passed=0
set /a failed=0

call :case "1x1 zero" "1 1\n0\n" "This is a Zero Matrix"
call :case "2x3 all zero" "2 3\n0 0 0\n0 0 0\n" "This is a Zero Matrix"
call :case "non-zero at end" "2 2\n0 0\n0 5\n" "This is Not a Zero Matrix"
call :case "negative non-zero" "1 2\n0 -1\n" "This is Not a Zero Matrix"
call :case "non-square with non-zero in middle" "3 2\n0 0\n0 7\n0 0\n" "This is Not a Zero Matrix"

echo ======================================
echo Tests passed: %passed%  Failed: %failed%
if %failed% neq 0 (
  exit /b 1
) else (
  exit /b 0
)

:case
set name=%~1
set input=%~2
set expected=%~3

echo Running: %name%

rem Create temp input file
set "tmpin=%TEMP%\zm_input_%RANDOM%.txt"
set "tmpout=%TEMP%\zm_output_%RANDOM%.txt"

echo !input!>"!tmpin!"

rem Run program with redirected stdin and capture stdout
cmd /c "type "!tmpin!" | checking_zero_matrix.exe" >"!tmpout!" 2>&1

set /p actual=<"!tmpout!"

if "!actual!"=="!expected!" (
  echo   PASS
  set /a passed+=1
) else (
  echo   FAIL
  echo     expected: !expected!
  echo     actual:   !actual!
  set /a failed+=1
)

del /q "!tmpin!" >nul 2>nul
del /q "!tmpout!" >nul 2>nul

exit /b 0
