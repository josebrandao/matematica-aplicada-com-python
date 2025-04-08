@echo off
setlocal

REM Caminho para o MinGW (ajuste se estiver diferente)
set MINGW_DIR=C:\2\mingw\bin

echo Adicionando MinGW ao PATH do usuário...
setx PATH "%PATH%;%MINGW_DIR%"

echo.
echo ✅ MinGW adicionado ao PATH com sucesso!
echo 🔄 Feche e reabra o terminal (CMD ou PowerShell) para aplicar as mudanças.
pause
