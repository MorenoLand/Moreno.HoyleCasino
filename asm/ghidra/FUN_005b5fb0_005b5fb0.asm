; FUN_005b5fb0  005b5fb0
005b5fb0  PUSH EBP
005b5fb1  MOV EBP,ESP
005b5fb3  PUSH ECX
005b5fb4  MOV dword ptr [EBP + -0x4],ECX
005b5fb7  CMP dword ptr [EBP + 0x8],-0x1
005b5fbb  JNZ 0x005b5fd5
005b5fbd  PUSH -0x1
005b5fbf  MOV ECX,dword ptr [0x0162ee84]
005b5fc5  CALL 0x006375b0
005b5fca  MOV ECX,EAX
005b5fcc  CALL 0x0063aae0
005b5fd1  JMP 0x005b5fea
005b5fd5  PUSH -0x1
005b5fd7  MOV EAX,[0x0162ee84]
005b5fdc  MOV ECX,dword ptr [EAX + 0x58]
005b5fdf  MOV EDX,dword ptr [EBP + 0x8]
005b5fe2  MOV ECX,dword ptr [ECX + EDX*0x4]
005b5fe5  CALL 0x0063aae0
005b5fea  MOV ESP,EBP
005b5fec  POP EBP
005b5fed  RET 0x4
