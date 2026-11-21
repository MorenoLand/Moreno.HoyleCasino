; FUN_00425be0  00425be0
00425be0  PUSH EBP
00425be1  MOV EBP,ESP
00425be3  SUB ESP,0x8
00425be6  MOV dword ptr [EBP + -0x8],ECX
00425be9  MOV ECX,dword ptr [EBP + -0x8]
00425bec  CALL 0x005e9e20
00425bf1  MOV EAX,dword ptr [EBP + -0x8]
00425bf4  MOV dword ptr [EAX],0x6b6780
00425bfa  MOV ECX,dword ptr [EBP + -0x8]
00425bfd  MOV dword ptr [ECX + 0x4],0x0
00425c04  MOV dword ptr [EBP + -0x4],0x0
00425c0b  JMP 0x00425c16
00425c0d  MOV EDX,dword ptr [EBP + -0x4]
00425c10  ADD EDX,0x1
00425c13  MOV dword ptr [EBP + -0x4],EDX
00425c16  CMP dword ptr [EBP + -0x4],0x8
00425c1a  JGE 0x00425c2c
00425c1c  MOV EAX,dword ptr [EBP + -0x4]
00425c1f  MOV ECX,dword ptr [EBP + -0x8]
00425c22  MOV dword ptr [ECX + EAX*0x4 + 0x8],0x0
00425c2a  JMP 0x00425c0d
00425c2c  MOV EAX,dword ptr [EBP + -0x8]
00425c2f  MOV ESP,EBP
00425c31  POP EBP
00425c32  RET
