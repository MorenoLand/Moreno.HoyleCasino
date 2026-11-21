; FUN_005f56a0  005f56a0
005f56a0  PUSH EBP
005f56a1  MOV EBP,ESP
005f56a3  PUSH ECX
005f56a4  MOV dword ptr [EBP + -0x4],ECX
005f56a7  MOV EAX,dword ptr [EBP + 0x8]
005f56aa  MOV ECX,dword ptr [EAX + 0xc]
005f56ad  PUSH ECX
005f56ae  MOV EDX,dword ptr [EBP + 0x8]
005f56b1  MOV EAX,dword ptr [EDX + 0x8]
005f56b4  PUSH EAX
005f56b5  MOV ECX,dword ptr [EBP + -0x4]
005f56b8  MOV EDX,dword ptr [ECX]
005f56ba  MOV ECX,dword ptr [EBP + -0x4]
005f56bd  MOV EAX,dword ptr [EDX + 0x80]
005f56c3  CALL EAX
005f56c5  MOV ESP,EBP
005f56c7  POP EBP
005f56c8  RET 0x4
