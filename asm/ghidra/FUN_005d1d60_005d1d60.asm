; FUN_005d1d60  005d1d60
005d1d60  PUSH EBP
005d1d61  MOV EBP,ESP
005d1d63  SUB ESP,0xc
005d1d66  MOV dword ptr [EBP + -0x8],ECX
005d1d69  MOV dword ptr [EBP + -0x4],0x0
005d1d70  JMP 0x005d1d7b
005d1d72  MOV EAX,dword ptr [EBP + -0x4]
005d1d75  ADD EAX,0x1
005d1d78  MOV dword ptr [EBP + -0x4],EAX
005d1d7b  CMP dword ptr [EBP + -0x4],0x9
005d1d7f  JGE 0x005d1da5
005d1d81  MOV ECX,dword ptr [EBP + -0x4]
005d1d84  PUSH ECX
005d1d85  MOV EDX,dword ptr [0x0162ee84]
005d1d8b  MOV ECX,dword ptr [EDX + 0x14]
005d1d8e  CALL 0x005fb300
005d1d93  MOV dword ptr [EBP + -0xc],EAX
005d1d96  MOV EAX,dword ptr [EBP + -0xc]
005d1d99  MOV EDX,dword ptr [EAX]
005d1d9b  MOV ECX,dword ptr [EBP + -0xc]
005d1d9e  MOV EAX,dword ptr [EDX + 0x74]
005d1da1  CALL EAX
005d1da3  JMP 0x005d1d72
005d1da5  MOV ESP,EBP
005d1da7  POP EBP
005d1da8  RET
