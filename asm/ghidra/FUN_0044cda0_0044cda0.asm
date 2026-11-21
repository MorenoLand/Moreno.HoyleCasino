; FUN_0044cda0  0044cda0
0044cda0  PUSH EBP
0044cda1  MOV EBP,ESP
0044cda3  SUB ESP,0x8
0044cda6  MOV dword ptr [EBP + -0x8],ECX
0044cda9  MOV dword ptr [EBP + -0x4],0x0
0044cdb0  JMP 0x0044cdbb
0044cdb2  MOV EAX,dword ptr [EBP + -0x4]
0044cdb5  ADD EAX,0x1
0044cdb8  MOV dword ptr [EBP + -0x4],EAX
0044cdbb  CMP dword ptr [EBP + -0x4],0x5
0044cdbf  JGE 0x0044cddc
0044cdc1  MOV ECX,dword ptr [EBP + -0x4]
0044cdc4  PUSH ECX
0044cdc5  MOV EDX,dword ptr [EBP + 0x8]
0044cdc8  PUSH EDX
0044cdc9  MOV ECX,dword ptr [EBP + -0x8]
0044cdcc  CALL 0x0044cd70
0044cdd1  MOVZX EAX,AX
0044cdd4  TEST EAX,EAX
0044cdd6  JNZ 0x0044cdda
0044cdd8  JMP 0x0044cddc
0044cdda  JMP 0x0044cdb2
0044cddc  MOV CX,word ptr [EBP + 0xc]
0044cde0  PUSH ECX
0044cde1  MOV EDX,dword ptr [EBP + -0x4]
0044cde4  PUSH EDX
0044cde5  MOV EAX,dword ptr [EBP + 0x8]
0044cde8  PUSH EAX
0044cde9  MOV ECX,dword ptr [EBP + -0x8]
0044cdec  CALL 0x0044cd40
0044cdf1  MOV ESP,EBP
0044cdf3  POP EBP
0044cdf4  RET 0x8
