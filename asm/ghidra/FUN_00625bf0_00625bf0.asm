; FUN_00625bf0  00625bf0
00625bf0  PUSH EBP
00625bf1  MOV EBP,ESP
00625bf3  PUSH ECX
00625bf4  MOV dword ptr [EBP + -0x4],ECX
00625bf7  MOV ECX,dword ptr [EBP + -0x4]
00625bfa  CALL 0x005ff310
00625bff  MOV EAX,dword ptr [EBP + -0x4]
00625c02  MOV dword ptr [EAX],0x6d8f5c
00625c08  MOV ECX,dword ptr [EBP + -0x4]
00625c0b  MOV byte ptr [ECX + 0x21c],0x1
00625c12  MOV EDX,dword ptr [EBP + -0x4]
00625c15  MOV byte ptr [EDX + 0x21d],0x0
00625c1c  MOV EAX,dword ptr [EBP + -0x4]
00625c1f  MOV ESP,EBP
00625c21  POP EBP
00625c22  RET
