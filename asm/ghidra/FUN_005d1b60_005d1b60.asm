; FUN_005d1b60  005d1b60
005d1b60  PUSH EBP
005d1b61  MOV EBP,ESP
005d1b63  SUB ESP,0x8
005d1b66  MOV dword ptr [EBP + -0x4],ECX
005d1b69  MOV EAX,dword ptr [EBP + 0xc]
005d1b6c  MOV dword ptr [EBP + -0x8],EAX
005d1b6f  MOV ECX,dword ptr [EBP + -0x8]
005d1b72  SUB ECX,0x186a1
005d1b78  MOV dword ptr [EBP + -0x8],ECX
005d1b7b  CMP dword ptr [EBP + -0x8],0x36
005d1b7f  JA 0x005d1cf1
005d1b85  MOV EDX,dword ptr [EBP + -0x8]
005d1b88  MOVZX EAX,byte ptr [EDX + 0x5d1d1c]
005d1b8f  JMP dword ptr [EAX*0x4 + 0x5d1d08]
005d1cf1  MOV ECX,dword ptr [EBP + 0xc]
005d1cf4  PUSH ECX
005d1cf5  MOV EDX,dword ptr [EBP + 0x8]
005d1cf8  PUSH EDX
005d1cf9  MOV ECX,dword ptr [EBP + -0x4]
005d1cfc  CALL 0x005d8670
005d1d01  MOV ESP,EBP
005d1d03  POP EBP
005d1d04  RET 0x8
