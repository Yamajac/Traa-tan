[Variables]
Mascot=Traatan
TraaTanTalks=On
Array=Mine|Scape
ArraySize=2

Paint="C:\Program Files\paint.net\PaintDotNet.exe"
Scape="rs-launch://www.runescape.com/k=5/l=$(Language:0)/jav_config.ws"
Mine="C:\Program Files (x86)\Minecraft\MinecraftLauncher.exe"
Stream="C:\Program Files (x86)\obs-studio\bin\64bit\obs64.exe"



; Thanks @Aggy in RM Discord
[Programs]
Measure=String
RegExpSubstitute=1
; Replace "Programs" with name of new array
Substitute="(.+?(?=\||(?:$))){[Programs:MinValue]}((?:^)|\|)(.+?(?=\||(?:$)))(.*)":"\3"
; Array Values seperated with "|"
String=#Array#
; Current Index
MinValue=0
; Array Size, maybe one day it'll be auto-made
MaxValue=#ArraySize#
