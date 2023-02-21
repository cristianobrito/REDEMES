@echo off
color 0e
title Jogo de adivinhação - criado por seJma
set /a guessnum=0
set /a answer=%RANDOM%
set variable1=surf33
echo -------------------------------------------------
echo Bem-vindo(a) ao jogo de adivinhação!
echo.
echo Tente adivinhar meu número!
echo -------------------------------------------------
echo.
:top
echo.
set /p guess=
echo.
if %guess% GTR %answer% ECHO Menor!
if %guess% LSS %answer% ECHO Maior!
if %guess%==%answer% GOTO EQUAL
/a guessnum=+1
if %guess%==%variable1% ECHO Descobriu? A resposta é: %answer%
goto top
:equal
echo Parabéns, você acertou!!!
echo.
echo Você fez %guessnum% tentativas.
echo.
pause