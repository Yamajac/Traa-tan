[TopBar]
@IncludeTopBar="Launcher_topbar.inc"

[Variables]
Base=0
Delete=0
Substitute1="(.+?(?=\||(?:$))){[ProgramIndex"
Substitute2="]}((?:^)|\|)(.+?(?=\||(?:$)))(.*)":"\3"
NewItem="default"

[SmallerArray]
Measure=Calc
Formula=#ArraySize#-1
[BiggerArray]
Measure=Calc
Formula=#ArraySize#+1
[ProgramDeleter]
Measure=String
String=#Array#
DynamicVariables=1
Substitute="[&ProgramName[#Delete]]|":"","|[&ProgramName[#Delete]]":""

[NameInput]
Measure=Plugin
Plugin=InputText
SolidColor=76A0E8FF
FontColor=255,255,255,255
FontFace=Seqoe UI
StringStyle=Italic
FontSize=#FontSize#
X=5
Y=5
H=25
W=240
DefaultValue="Enter Name"
DynamicVariables=1
Command1=[!SetVariable NewItem "$UserInput$"][!CommandMeasure PathInput "ExecuteBatch 1"]

[PathInput]
Measure=Plugin
Plugin=InputText
SolidColor=76A0E8FF
FontColor=255,255,255,255
FontFace=Seqoe UI
StringStyle=Italic
FontSize=#FontSize#
X=5
Y=5
H=25
W=240
DefaultValue="Enter Path"
DynamicVariables=1
Command1=[!SetOption NewItemPath String """"$UserInput$""""][!UpdateMeasure NewItemPath][!UpdateMeasure Adder][!CommandMeasure Adder "Execute 1"]

[NewItemPath]
Measure=String
DynamicVariables=1
Substitute='"':"" ;"

[Adder]
Measure=Plugin
Plugin=ActionTimer
ActionList1=Wait 10 | AddProgram
DynamicVariables=1
AddProgram=[!WriteKeyValue Variables #NewItem# """"[NewItemPath]"""" "#@#Includes\Launcher Options.inc"][!WriteKeyValue Variables Array "#Array#|#NewItem#" "#@#Includes\Launcher Options.inc"][!WriteKeyValue Variables ArraySize [BiggerArray] "#@#Includes\Launcher Options.inc"][!WriteKeyValue ProgramIndex#ARRAYSIZE# Measure Calc "#SKINSPATH#Traa-tan\Settings\Tabs\Launcher_programs.inc"][!WriteKeyValue ProgramIndex#ARRAYSIZE# DynamicVariables 1 "#SKINSPATH#Traa-tan\Settings\Tabs\Launcher_programs.inc"][!WriteKeyValue ProgramIndex#ARRAYSIZE# Group Index "#SKINSPATH#Traa-tan\Settings\Tabs\Launcher_programs.inc"][!WriteKeyValue ProgramIndex#ARRAYSIZE# Formula #*Base*#+#ARRAYSIZE# "#SKINSPATH#Traa-tan\Settings\Tabs\Launcher_programs.inc"][!WriteKeyValue ProgramName#ARRAYSIZE# Measure String "#SKINSPATH#Traa-tan\Settings\Tabs\Launcher_programs.inc"][!WriteKeyValue ProgramName#ARRAYSIZE# DynamicVariables 1 "#SKINSPATH#Traa-tan\Settings\Tabs\Launcher_programs.inc"][!WriteKeyValue ProgramName#ARRAYSIZE# String #*Array*# "#SKINSPATH#Traa-tan\Settings\Tabs\Launcher_programs.inc"][!WriteKeyValue ProgramName#ARRAYSIZE# RegExpSubstitute 1 "#SKINSPATH#Traa-tan\Settings\Tabs\Launcher_programs.inc"][!WriteKeyValue ProgramName#ARRAYSIZE# Substitute #*Substitute1*##ARRAYSIZE##*Substitute2*# "#SKINSPATH#Traa-tan\Settings\Tabs\Launcher_programs.inc"][!WriteKeyValue #ARRAYSIZE# Meter String "#SKINSPATH#Traa-tan\Settings\Tabs\Launcher_programs.inc"][!WriteKeyValue #ARRAYSIZE# MeterStyle ProgramPath "#SKINSPATH#Traa-tan\Settings\Tabs\Launcher_programs.inc"][!WriteKeyValue #ARRAYSIZE# Hidden 0 "#SKINSPATH#Traa-tan\Settings\Tabs\Launcher_programs.inc"][!Refresh "Traa-tan\Launcher"][!Refresh]

[AddProgram]
Meter=String
MeterStyle=ProgramPath
Y=10
Text=Add Program
ToolTipText=Add a new program to the Traa-Tan Launcher
DynamicVariables=1
LeftMouseUpAction=[!CommandMeasure NameInput "ExecuteBatch 1"]




; Programs in Launcher
[ProgramIndex0]
Measure=Calc
DynamicVariables=1
Group=Index
Formula=#Base#
[ProgramName0]
Measure=String
String=#Array#
RegExpSubstitute=1
Substitute=#Substitute1#0#Substitute2#
[0]
Meter=String
MeterStyle=ProgramPath
[ProgramIndex1]
Measure=Calc
DynamicVariables=1
Group=Index
Formula=(#Base#+1)
[ProgramName1]
Measure=String
DynamicVariables=1
String=#Array#
RegExpSubstitute=1
Substitute=#Substitute1#1#Substitute2#
[1]
Meter=String
MeterStyle=ProgramPath
[ProgramIndex2]
Measure=Calc
DynamicVariables=1
Group=Index
Formula=#Base#+2
[ProgramName2]
Measure=String
DynamicVariables=1
String=#Array#
RegExpSubstitute=1
Substitute=#Substitute1#2#Substitute2#
[2]
Meter=String
MeterStyle=ProgramPath
Hidden=1
[ProgramIndex3]
Measure=Calc
DynamicVariables=1
Group=Index
Formula=#Base#+3
[ProgramName3]
Measure=String
DynamicVariables=1
String=#Array#
RegExpSubstitute=1
Substitute=#Substitute1#3#Substitute2#
[3]
Meter=String
MeterStyle=ProgramPath
hidden=1
[ProgramIndex4]
Measure=Calc
DynamicVariables=1
Group=Index
Formula=#Base#+4
[ProgramName4]
Measure=String
DynamicVariables=1
String=#Array#
RegExpSubstitute=1
Substitute=#Substitute1#4#Substitute2#
[4]
Meter=String
MeterStyle=ProgramPath
hidden=1
[ProgramIndex5]
Measure=Calc
DynamicVariables=1
Group=Index
Formula=#Base#+5
[ProgramName5]
Measure=String
DynamicVariables=1
String=#Array#
RegExpSubstitute=1
Substitute=#Substitute1#5#Substitute2#
[5]
Meter=String
MeterStyle=ProgramPath
Hidden=1
