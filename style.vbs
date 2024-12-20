'------------------------------------- Action! -------------------------------------'
' @file		hidden_console.vbs
' @brief	keep that bat console quiet!
' @details	x
'
' @section 	Demo Example
'		BAT file opens console & app, leaving console hidden
'
' @section 	Reference
'		https://superuser.com/
'			questions/62525/run-a-batch-file-in-a-completely-hidden-way
'------------------------------------- Action! -------------------------------------'

'------------------------------------- Action! -------------------------------------'
Set WinScriptHost = CreateObject("WScript.Shell")
WinScriptHost.Run Chr(34) & "D:\Documents\Ref\Computer\Microsoft\Applications\BAT Files\Access\BAT File Hidden Launch\hidden_console.bat" & Chr(34), 0
Set WinScriptHost = Nothing

