; FUN_005b4ed0  005b4ed0
005b4ed0  PUSH EBP
005b4ed1  MOV EBP,ESP
005b4ed3  PUSH ECX
005b4ed4  MOV dword ptr [EBP + -0x4],ECX
005b4ed7  MOV EAX,dword ptr [EBP + -0x4]
005b4eda  CMP dword ptr [EAX + 0x5b8],-0x1
005b4ee1  JNZ 0x005b4ee9
005b4ee3  XOR EAX,EAX
005b4ee5  JMP 0x005b4efb
005b4ee9  MOV ECX,dword ptr [EBP + -0x4]
005b4eec  MOV EDX,dword ptr [ECX + 0x5b8]
005b4ef2  PUSH EDX
005b4ef3  CALL 0x005dcb00
005b4ef8  ADD ESP,0x4
005b4efb  MOV ESP,EBP
005b4efd  POP EBP
005b4efe  RET
