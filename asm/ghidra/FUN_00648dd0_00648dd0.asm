; FUN_00648dd0  00648dd0
00648dd0  PUSH EBP
00648dd1  MOV EBP,ESP
00648dd3  PUSH ECX
00648dd4  MOV dword ptr [EBP + -0x4],ECX
00648dd7  MOV EAX,dword ptr [EBP + 0x8]
00648dda  MOV byte ptr [EAX + 0x4],0x1
00648dde  MOV ECX,dword ptr [EBP + -0x4]
00648de1  MOV byte ptr [ECX + 0x8],0x0
00648de5  MOV EDX,dword ptr [EBP + -0x4]
00648de8  MOV byte ptr [EDX + 0x9],0x0
00648dec  MOV EAX,dword ptr [EBP + -0x4]
00648def  MOV ECX,dword ptr [EAX + 0x184]
00648df5  PUSH ECX
00648df6  MOV EDX,dword ptr [EBP + 0x8]
00648df9  PUSH EDX
00648dfa  MOV EAX,[0x0162ee80]
00648dff  MOV EDX,dword ptr [EAX]
00648e01  MOV ECX,dword ptr [0x0162ee80]
00648e07  MOV EAX,dword ptr [EDX + 0x120]
00648e0d  CALL EAX
00648e0f  MOV ESP,EBP
00648e11  POP EBP
00648e12  RET 0x4
