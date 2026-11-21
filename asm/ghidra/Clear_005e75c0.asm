; Clear  005e75c0
005e75c0  PUSH EBP
005e75c1  MOV EBP,ESP
005e75c3  PUSH ECX
005e75c4  MOV dword ptr [EBP + -0x4],ECX
005e75c7  MOV EAX,dword ptr [EBP + -0x4]
005e75ca  CMP dword ptr [EAX],0x0
005e75cd  JZ 0x005e75e2
005e75cf  MOV ECX,dword ptr [EBP + -0x4]
005e75d2  MOV ECX,dword ptr [ECX]
005e75d4  CALL 0x005f8990
005e75d9  MOV EDX,dword ptr [EBP + -0x4]
005e75dc  MOV dword ptr [EDX],0x0
005e75e2  MOV ESP,EBP
005e75e4  POP EBP
005e75e5  RET
