@echo off
setlocal

REM Caminhos do Python
set PYTHON_DIR=C:\Users\joses\AppData\Local\Programs\Python\Python313
set PYTHON_SCRIPTS=%PYTHON_DIR%\Scripts

REM Adiciona ao PATH de usuário
echo Adicionando Python ao PATH do usuário...
setx PATH "%PATH%;%PYTHON_DIR%;%PYTHON_SCRIPTS%"

echo.
echo ✅ Python 3.13 adicionado ao PATH com sucesso!
echo 🔄 Feche e reabra o terminal (CMD ou PowerShell) para aplicar as mudanças.
pause
