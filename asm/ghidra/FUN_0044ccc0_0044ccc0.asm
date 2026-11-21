; FUN_0044ccc0  0044ccc0
0044ccc0  PUSH EBP
0044ccc1  MOV EBP,ESP
0044ccc3  PUSH ECX
0044ccc4  MOV dword ptr [EBP + -0x4],ECX
0044ccc7  MOV EAX,dword ptr [EBP + -0x4]
0044ccca  CMP dword ptr [EAX + 0xc4],-0x1
0044ccd1  JNZ 0x0044ccd7
0044ccd3  XOR EAX,EAX
0044ccd5  JMP 0x0044cce9
0044ccd7  MOV ECX,dword ptr [EBP + -0x4]
0044ccda  MOV EDX,dword ptr [ECX + 0xc4]
0044cce0  PUSH EDX
0044cce1  CALL 0x005dcb00
0044cce6  ADD ESP,0x4
0044cce9  MOV ESP,EBP
0044cceb  POP EBP
0044ccec  RET
