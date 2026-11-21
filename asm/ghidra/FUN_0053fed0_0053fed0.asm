; FUN_0053fed0  0053fed0
0053fed0  PUSH EBP
0053fed1  MOV EBP,ESP
0053fed3  SUB ESP,0x8
0053fed6  MOV dword ptr [EBP + -0x8],ECX
0053fed9  CMP dword ptr [EBP + 0x8],0x0
0053fedd  JNZ 0x0053fee3
0053fedf  XOR AL,AL
0053fee1  JMP 0x0053ff13
0053fee3  MOV EAX,dword ptr [EBP + 0x8]
0053fee6  MOV dword ptr [EBP + -0x4],EAX
0053fee9  MOV ECX,dword ptr [EBP + -0x4]
0053feec  MOV dword ptr [ECX + 0x4],0x0
0053fef3  MOV EDX,dword ptr [EBP + -0x4]
0053fef6  MOV dword ptr [EDX + 0x8],0x0
0053fefd  MOV EAX,dword ptr [EBP + -0x4]
0053ff00  MOV dword ptr [EAX + 0xc],0x0
0053ff07  MOV ECX,dword ptr [EBP + -0x4]
0053ff0a  MOV dword ptr [ECX + 0x10],0x0
0053ff11  MOV AL,0x1
0053ff13  MOV ESP,EBP
0053ff15  POP EBP
0053ff16  RET 0x4
