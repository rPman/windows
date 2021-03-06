@echo off

rem set LUWRAIN_HOME to current dir
for /r %%i in (.) do (
  set LUWRAIN_HOME=%%i
  goto :endPWD
)
:endPWD
rem cut path last chars '\' and '.'
set LUWRAIN_HOME=%LUWRAIN_HOME:~0,-2%

set LUWRAIN_LANG=ru
set LUWRAIN_MAIN_CLASS=org.luwrain.core.Init

set LUWRAIN_USER_DATA_DIR=%APPDATA%\luwrain
set LUWRAIN_USER_HOME_DIR=%USERPROFILE%\Documents
set LUWRAIN_DATA_DIR=%LUWRAIN_HOME%\data
set LUWRAIN_REGISTRY_DIR=%APPDATA%\luwrain\registry

set LUWRAIN_JAVA_OPTS=-server

rem check if user data dir not exist and init it
if not exist "%LUWRAIN_USER_DATA_DIR%" (
  xcopy sqlite "%LUWRAIN_USER_DATA_DIR%\sqlite" /E /C /I /H /R /Y /Q > nul
  xcopy registry "%LUWRAIN_USER_DATA_DIR%\registry" /E /C /I /H /R /Y /Q > nul
)

set CLASS_PATH=
rem collect *.jar files from lib and jar to CLASS_PATH
goto :go
:loop
  set CLASS_PATH=%CLASS_PATH%%1;
goto :eof
:go
for %%a in (jar\*.jar;lib\*.jar) do call :loop %%a

rem let's go
java %LUWRAIN_JAVA_OPTS% -cp %CLASS_PATH% %LUWRAIN_MAIN_CLASS% --registry-dir="%LUWRAIN_REGISTRY_DIR%" --lang=%LUWRAIN_LANG% --os=org.luwrain.windows.Windows --data-dir="%LUWRAIN_DATA_DIR%" --user-home-dir="%LUWRAIN_USER_HOME_DIR%" --user-data-dir="%LUWRAIN_USER_DATA_DIR%"
