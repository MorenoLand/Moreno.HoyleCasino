; FUN_0044bfd0  0044bfd0
0044bfd0  PUSH EBP
0044bfd1  MOV EBP,ESP
0044bfd3  SUB ESP,0x8
0044bfd6  MOV dword ptr [EBP + -0x8],ECX
0044bfd9  CMP dword ptr [EBP + 0x8],0x0
0044bfdd  JNZ 0x0044bfe3
0044bfdf  XOR AL,AL
0044bfe1  JMP 0x0044bff8
0044bfe3  MOV EAX,dword ptr [EBP + 0x8]
0044bfe6  MOV dword ptr [EBP + -0x4],EAX
0044bfe9  MOV ECX,dword ptr [EBP + -0x4]
0044bfec  MOV byte ptr [ECX],0x1
0044bfef  MOV EDX,dword ptr [EBP + -0x4]
0044bff2  MOV byte ptr [EDX + 0x1],0x1
0044bff6  MOV AL,0x1
0044bff8  MOV ESP,EBP
0044bffa  POP EBP
0044bffb  RET 0x4
