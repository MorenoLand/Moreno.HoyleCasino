; FUN_005f0c50  005f0c50
005f0c50  PUSH EBP
005f0c51  MOV EBP,ESP
005f0c53  SUB ESP,0x8
005f0c56  MOV dword ptr [EBP + -0x4],ECX
005f0c59  MOV EAX,dword ptr [EBP + -0x4]
005f0c5c  MOV ECX,dword ptr [EAX + 0x14]
005f0c5f  MOV dword ptr [EBP + -0x8],ECX
005f0c62  CMP dword ptr [EBP + -0x8],0x0
005f0c66  JZ 0x005f0c70
005f0c68  CMP dword ptr [EBP + -0x8],0x1
005f0c6c  JZ 0x005f0c90
005f0c6e  JMP 0x005f0cae
005f0c70  PUSH 0x1
005f0c72  MOV EDX,dword ptr [EBP + -0x4]
005f0c75  MOV ECX,dword ptr [EDX + 0x20]
005f0c78  CALL 0x005f0bd0
005f0c7d  PUSH 0x1e
005f0c7f  PUSH 0x1
005f0c81  MOV EAX,dword ptr [EBP + -0x4]
005f0c84  MOV EDX,dword ptr [EAX]
005f0c86  MOV ECX,dword ptr [EBP + -0x4]
005f0c89  MOV EAX,dword ptr [EDX + 0x8]
005f0c8c  CALL EAX
005f0c8e  JMP 0x005f0cae
005f0c90  PUSH 0x0
005f0c92  MOV ECX,dword ptr [EBP + -0x4]
005f0c95  MOV ECX,dword ptr [ECX + 0x20]
005f0c98  CALL 0x005f0bd0
005f0c9d  PUSH 0x1e
005f0c9f  PUSH 0x0
005f0ca1  MOV EDX,dword ptr [EBP + -0x4]
005f0ca4  MOV EAX,dword ptr [EDX]
005f0ca6  MOV ECX,dword ptr [EBP + -0x4]
005f0ca9  MOV EDX,dword ptr [EAX + 0x8]
005f0cac  CALL EDX
005f0cae  MOV ESP,EBP
005f0cb0  POP EBP
005f0cb1  RET
