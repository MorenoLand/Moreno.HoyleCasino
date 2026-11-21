; FUN_00600010  00600010
00600010  PUSH EBP
00600011  MOV EBP,ESP
00600013  PUSH ECX
00600014  MOV dword ptr [EBP + -0x4],ECX
00600017  MOV EAX,dword ptr [EBP + -0x4]
0060001a  MOV dword ptr [EAX + 0x1e0],0x0
00600024  MOV ECX,dword ptr [EBP + -0x4]
00600027  MOV dword ptr [ECX + 0x1e4],0x1
00600031  MOV EDX,dword ptr [EBP + -0x4]
00600034  MOV dword ptr [EDX + 0x1e8],0x2
0060003e  MOV EAX,dword ptr [EBP + -0x4]
00600041  MOV dword ptr [EAX + 0x1ec],0x3
0060004b  MOV ECX,dword ptr [EBP + -0x4]
0060004e  MOV dword ptr [ECX + 0x1f0],0x4
00600058  MOV EDX,dword ptr [EBP + -0x4]
0060005b  MOV dword ptr [EDX + 0x1f4],0x5
00600065  MOV EAX,dword ptr [EBP + -0x4]
00600068  MOV dword ptr [EAX + 0x1f8],0x6
00600072  MOV ECX,dword ptr [EBP + -0x4]
00600075  MOV dword ptr [ECX + 0x1fc],0x7
0060007f  MOV EDX,dword ptr [EBP + -0x4]
00600082  MOV EAX,dword ptr [EDX]
00600084  MOV ECX,dword ptr [EBP + -0x4]
00600087  MOV EDX,dword ptr [EAX + 0xec]
0060008d  CALL EDX
0060008f  MOV ESP,EBP
00600091  POP EBP
00600092  RET
