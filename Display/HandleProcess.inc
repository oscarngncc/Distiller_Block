;This file is responsible for constructing the detect-running-application 

;;;; Process Plugin
[MeasurePluginHandleProcess]
UpdateDivider=8
Measure=Plugin
DynamicVariables=1
Plugin=PluginHandleProcess


;;;; Counter Responsible for updating meter
[Counter]
Measure=Calc
DynamicVariables=1
UpdateDivider=8
Formula=[MeasurePluginHandleProcess:]
IfEqualValue=1
IfEqualAction=[!UpdateGroup MeasureDetectProcess][!Redraw]
IfAboveValue=1.5
IfAboveAction=[!Refresh]


;;;; Handling Transparency of Processes
[MeasureDetectProcess_0]
Measure=String
Group=MeasureDetectProcess
DynamicVariables=1
String=#PValue0#
IfMatch=Default.png
IfMatchAction=[!SetOption ProcessImg_14 ImageAlpha 1 ][!SetOption ProcessBg_14 ImageAlpha 1]
IfNotMatchAction=[!SetOption ProcessImg_14 ImageAlpha #bg_alpha# ][!SetOption ProcessBg_14 ImageAlpha #bg_alpha#]


[MeasureDetectProcess_1]
Measure=String
Group=MeasureDetectProcess
DynamicVariables=1
String=#PValue1#
IfMatch=Default.png
IfMatchAction=[!SetOption ProcessImg_13 ImageAlpha 1 ][!SetOption ProcessBg_13 ImageAlpha 1]
IfNotMatchAction=[!SetOption ProcessImg_13 ImageAlpha #bg_alpha# ][!SetOption ProcessBg_13 ImageAlpha #bg_alpha#]

[MeasureDetectProcess_2]
Measure=String
Group=MeasureDetectProcess
DynamicVariables=1
String=#PValue2#
IfMatch=Default.png
IfMatchAction=[!SetOption ProcessImg_12 ImageAlpha 1 ][!SetOption ProcessBg_12 ImageAlpha 1]
IfNotMatchAction=[!SetOption ProcessImg_12 ImageAlpha #bg_alpha# ][!SetOption ProcessBg_12 ImageAlpha #bg_alpha#]

[MeasureDetectProcess_3]
Measure=String
Group=MeasureDetectProcess
DynamicVariables=1
String=#PValue3#
IfMatch=Default.png
IfMatchAction=[!SetOption ProcessImg_11 ImageAlpha 1 ][!SetOption ProcessBg_11 ImageAlpha 1]
IfNotMatchAction=[!SetOption ProcessImg_11 ImageAlpha #bg_alpha# ][!SetOption ProcessBg_11 ImageAlpha #bg_alpha#]

[MeasureDetectProcess_4]
Measure=String
Group=MeasureDetectProcess
DynamicVariables=1
String=#PValue4#
IfMatch=Default.png
IfMatchAction=[!SetOption ProcessImg_10 ImageAlpha 1 ][!SetOption ProcessBg_10 ImageAlpha 1]
IfNotMatchAction=[!SetOption ProcessImg_10 ImageAlpha #bg_alpha# ][!SetOption ProcessBg_10 ImageAlpha #bg_alpha#]

[MeasureDetectProcess_5]
Measure=String
Group=MeasureDetectProcess
DynamicVariables=1
String=#PValue5#
IfMatch=Default.png
IfMatchAction=[!SetOption ProcessImg_9 ImageAlpha 1 ][!SetOption ProcessBg_9 ImageAlpha 1]
IfNotMatchAction=[!SetOption ProcessImg_9 ImageAlpha #bg_alpha# ][!SetOption ProcessBg_9 ImageAlpha #bg_alpha#]

[MeasureDetectProcess_6]
Measure=String
Group=MeasureDetectProcess
DynamicVariables=1
String=#PValue6#
IfMatch=Default.png
IfMatchAction=[!SetOption ProcessImg_8 ImageAlpha 1 ][!SetOption ProcessBg_8 ImageAlpha 1]
IfNotMatchAction=[!SetOption ProcessImg_8 ImageAlpha #bg_alpha# ][!SetOption ProcessBg_8 ImageAlpha #bg_alpha#]

[MeasureDetectProcess_7]
Measure=String
Group=MeasureDetectProcess
DynamicVariables=1
String=#PValue7#
IfMatch=Default.png
IfMatchAction=[!SetOption ProcessImg_7 ImageAlpha 1 ][!SetOption ProcessBg_7 ImageAlpha 1]
IfNotMatchAction=[!SetOption ProcessImg_7 ImageAlpha #bg_alpha# ][!SetOption ProcessBg_7 ImageAlpha #bg_alpha#]

[MeasureDetectProcess_8]
Measure=String
Group=MeasureDetectProcess
DynamicVariables=1
String=#PValue8#
IfMatch=Default.png
IfMatchAction=[!SetOption ProcessImg_6 ImageAlpha 1 ][!SetOption ProcessBg_6 ImageAlpha 1]
IfNotMatchAction=[!SetOption ProcessImg_6 ImageAlpha #bg_alpha# ][!SetOption ProcessBg_6 ImageAlpha #bg_alpha#]

[MeasureDetectProcess_9]
Measure=String
Group=MeasureDetectProcess
DynamicVariables=1
String=#PValue9#
IfMatch=Default.png
IfMatchAction=[!SetOption ProcessImg_5 ImageAlpha 1 ][!SetOption ProcessBg_5 ImageAlpha 1]
IfNotMatchAction=[!SetOption ProcessImg_5 ImageAlpha #bg_alpha# ][!SetOption ProcessBg_5 ImageAlpha #bg_alpha#]

[MeasureDetectProcess_10]
Measure=String
Group=MeasureDetectProcess
DynamicVariables=1
String=#PValue10#
IfMatch=Default.png
IfMatchAction=[!SetOption ProcessImg_4 ImageAlpha 1 ][!SetOption ProcessBg_4 ImageAlpha 1]
IfNotMatchAction=[!SetOption ProcessImg_4 ImageAlpha #bg_alpha# ][!SetOption ProcessBg_4 ImageAlpha #bg_alpha#]

[MeasureDetectProcess_11]
Measure=String
Group=MeasureDetectProcess
DynamicVariables=1
String=#PValue11#
IfMatch=Default.png
IfMatchAction=[!SetOption ProcessImg_3 ImageAlpha 1 ][!SetOption ProcessBg_3 ImageAlpha 1]
IfNotMatchAction=[!SetOption ProcessImg_3 ImageAlpha #bg_alpha# ][!SetOption ProcessBg_3 ImageAlpha #bg_alpha#]

[MeasureDetectProcess_12]
Measure=String
Group=MeasureDetectProcess
DynamicVariables=1
String=#PValue12#
IfMatch=Default.png
IfMatchAction=[!SetOption ProcessImg_2 ImageAlpha 1 ][!SetOption ProcessBg_2 ImageAlpha 1]
IfNotMatchAction=[!SetOption ProcessImg_2 ImageAlpha #bg_alpha# ][!SetOption ProcessBg_2 ImageAlpha #bg_alpha#]

[MeasureDetectProcess_13]
Measure=String
Group=MeasureDetectProcess
DynamicVariables=1
String=#PValue13#
IfMatch=Default.png
IfMatchAction=[!SetOption ProcessImg_1 ImageAlpha 1 ][!SetOption ProcessBg_1 ImageAlpha 1]
IfNotMatchAction=[!SetOption ProcessImg_1 ImageAlpha #bg_alpha# ][!SetOption ProcessBg_1 ImageAlpha #bg_alpha#]

[MeasureDetectProcess_14]
Measure=String
Group=MeasureDetectProcess
DynamicVariables=1
String=#PValue14#
IfMatch=Default.png
IfMatchAction=[!SetOption ProcessImg_0 ImageAlpha 1 ][!SetOption ProcessBg_0 ImageAlpha 1]
IfNotMatchAction=[!SetOption ProcessImg_0 ImageAlpha #bg_alpha# ][!SetOption ProcessBg_0 ImageAlpha #bg_alpha#]


;==========================
;Style
;==========================

[ProcessStyle]
ImagePath=..\@Resources\Image\
ImageName=#ProcImgBackground#
ImageAlpha=1

[ProcessImgStyle]
ImagePath=..\@Resources\Icon\
ImageAlpha=1
W=40
H=14
PreserveAspectRatio=2
X=5
ColorMatrix1=#R_Matrix#
ColorMatrix2=#G_Matrix#
ColorMatrix3=#B_Matrix#
ColorMatrix5=#W_Matrix#


;==========================
;Meter for Process Background
;ProcessBg_LastValue will actually display the first process
;==========================

[ProcessBg_0]
DynamicVariables=1
Meter=Image
MeterStyle=ProcessStyle
X = 0
Y = 0

[ProcessBg_1]
DynamicVariables=1
Meter=Image
MeterStyle=ProcessStyle
X = 0
Y = 15

[ProcessBg_2]
DynamicVariables=1
Meter=Image
MeterStyle=ProcessStyle
X = 0
Y = 30

[ProcessBg_3]
DynamicVariables=1
Meter=Image
MeterStyle=ProcessStyle
X = 0
Y = 45

[ProcessBg_4]
DynamicVariables=1
Meter=Image
MeterStyle=ProcessStyle
X = 0
Y = 60

[ProcessBg_5]
DynamicVariables=1
Meter=Image
MeterStyle=ProcessStyle
X = 0
Y = 75

[ProcessBg_6]
DynamicVariables=1
Meter=Image
MeterStyle=ProcessStyle
X = 0
Y = 90

[ProcessBg_7]
DynamicVariables=1
Meter=Image
MeterStyle=ProcessStyle
X = 0
Y = 105

[ProcessBg_8]
DynamicVariables=1
Meter=Image
MeterStyle=ProcessStyle
X = 0
Y = 120

[ProcessBg_9]
DynamicVariables=1
Meter=Image
MeterStyle=ProcessStyle
X = 0
Y = 135


[ProcessBg_10]
DynamicVariables=1
Meter=Image
MeterStyle=ProcessStyle
X = 0
Y = 150

[ProcessBg_11]
DynamicVariables=1
Meter=Image
MeterStyle=ProcessStyle
X = 0
Y = 165

[ProcessBg_12]
DynamicVariables=1
Meter=Image
MeterStyle=ProcessStyle
X = 0
Y = 180

[ProcessBg_13]
DynamicVariables=1
Meter=Image
MeterStyle=ProcessStyle
X = 0
Y = 195

[ProcessBg_14]
DynamicVariables=1
Meter=Image
MeterStyle=ProcessStyle
X = 0
Y = 210

;==========================
;Meter for Process Image
;==========================

[ProcessImg_0]
DynamicVariables=1
Meter=Image
MeterStyle=ProcessImgStyle
ImageName=#PValue14#
Y=0



[ProcessImg_1]
DynamicVariables=1
Meter=Image
MeterStyle=ProcessImgStyle
ImageName=#PValue13#
Y=15


[ProcessImg_2]
DynamicVariables=1
Meter=Image
MeterStyle=ProcessImgStyle
ImageName=#PValue12#
Y=30


[ProcessImg_3]
DynamicVariables=1
Meter=Image
MeterStyle=ProcessImgStyle
ImageName=#PValue11#
Y=45


[ProcessImg_4]
DynamicVariables=1
Meter=Image
MeterStyle=ProcessImgStyle
ImageName=#PValue10#
Y=60


[ProcessImg_5]
DynamicVariables=1
Meter=Image
MeterStyle=ProcessImgStyle
ImageName=#PValue9#
Y=75


[ProcessImg_6]
DynamicVariables=1
Meter=Image
MeterStyle=ProcessImgStyle
ImageName=#PValue8#
Y=90


[ProcessImg_7]
DynamicVariables=1
Meter=Image
MeterStyle=ProcessImgStyle
ImageName=#PValue7#
Y=105


[ProcessImg_8]
DynamicVariables=1
Meter=Image
MeterStyle=ProcessImgStyle
ImageName=#PValue6#
Y=120


[ProcessImg_9]
DynamicVariables=1
Meter=Image
MeterStyle=ProcessImgStyle
ImageName=#PValue5#
Y=135

[ProcessImg_10]
DynamicVariables=1
Meter=Image
MeterStyle=ProcessImgStyle
ImageName=#PValue4#
Y=150

[ProcessImg_11]
DynamicVariables=1
Meter=Image
MeterStyle=ProcessImgStyle
ImageName=#PValue3#
Y=165

[ProcessImg_12]
DynamicVariables=1
Meter=Image
MeterStyle=ProcessImgStyle
ImageName=#PValue2#
Y=180

[ProcessImg_13]
DynamicVariables=1
Meter=Image
MeterStyle=ProcessImgStyle
ImageName=#PValue1#
Y=195

[ProcessImg_14]
DynamicVariables=1
Meter=Image
MeterStyle=ProcessImgStyle
ImageName=#PValue0#
Y=210


;==========================
;String Meter for WinAppCount 
;==========================
[TotalWinAppMeasure]
Measure=String
Group=MeasureDetectProcess
DynamicVariables=1
String=#WinAppCount#
IfMatch=0
IfNotMatchAction=[!SetOption TotalWinAppStringMeter FontColor #textcolor#]
IfMatchAction=[!SetOption TotalWinAppStringMeter FontColor 255,255,255,1]

[TotalWinAppStringMeter]
DynamicVariables=1
Meter=String
FontColor=255,255,255,1
Text=#WinAppCount#

FontWeight=550
FontSize=9
X=49
Y=210

