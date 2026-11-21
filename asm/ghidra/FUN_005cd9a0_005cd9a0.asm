; FUN_005cd9a0  005cd9a0
005cd9a0  PUSH EBP
005cd9a1  MOV EBP,ESP
005cd9a3  PUSH ECX
005cd9a4  MOV dword ptr [EBP + -0x4],ECX
005cd9a7  MOV EAX,dword ptr [EBP + 0x8]
005cd9aa  CMP dword ptr [EAX + 0x18],0x1
005cd9ae  JNZ 0x005cd9c7
005cd9b0  PUSH 0x1
005cd9b2  MOV ECX,dword ptr [EBP + -0x4]
005cd9b5  MOV EDX,dword ptr [ECX + 0x194]
005cd9bb  PUSH EDX
005cd9bc  MOV ECX,dword ptr [0x0162ee84]
005cd9c2  CALL 0x005f4510
005cd9c7  MOV ESP,EBP
005cd9c9  POP EBP
005cd9ca  RET 0x4
