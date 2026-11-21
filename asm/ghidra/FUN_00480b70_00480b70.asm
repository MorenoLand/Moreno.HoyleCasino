; FUN_00480b70  00480b70
00480b70  PUSH EBP
00480b71  MOV EBP,ESP
00480b73  SUB ESP,0x14
00480b76  MOV dword ptr [EBP + -0x14],ECX
00480b79  MOV EAX,[0x007947e0]
00480b7e  MOV ECX,dword ptr [EAX + 0x4efc]
00480b84  MOV dword ptr [EBP + -0xc],ECX
00480b87  MOV EDX,dword ptr [EBP + -0x14]
00480b8a  MOV EAX,dword ptr [EBP + -0xc]
00480b8d  MOV dword ptr [EDX + 0xf4],EAX
00480b93  MOV ECX,dword ptr [0x007947e0]
00480b99  MOV EDX,dword ptr [ECX + 0x4f00]
00480b9f  MOV dword ptr [EBP + -0x10],EDX
00480ba2  MOV EAX,dword ptr [EBP + -0x14]
00480ba5  MOV ECX,dword ptr [EBP + -0x10]
00480ba8  MOV dword ptr [EAX + 0xf8],ECX
00480bae  MOV ECX,dword ptr [0x00791eb8]
00480bb4  CALL 0x004fbca0
00480bb9  PUSH 0x0
00480bbb  MOV ECX,dword ptr [EBP + -0x14]
00480bbe  CALL 0x00480710
00480bc3  MOV EDX,dword ptr [0x007947e0]
00480bc9  MOV byte ptr [EDX + 0x4f04],0x1
00480bd0  PUSH 0x0
00480bd2  PUSH 0x0
00480bd4  CALL 0x0064c8a0
00480bd9  ADD ESP,0x8
00480bdc  MOV dword ptr [EBP + -0x8],EAX
00480bdf  MOV dword ptr [EBP + -0x4],EDX
00480be2  PUSH 0x0
00480be4  CALL 0x005dcb00
00480be9  ADD ESP,0x4
00480bec  MOV ECX,dword ptr [EBP + -0x8]
00480bef  MOV dword ptr [EAX + 0x4dc],ECX
00480bf5  MOV EDX,dword ptr [EBP + -0x4]
00480bf8  MOV dword ptr [EAX + 0x4e0],EDX
00480bfe  MOV ESP,EBP
00480c00  POP EBP
00480c01  RET
