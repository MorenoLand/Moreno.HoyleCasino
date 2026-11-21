; FUN_0053fe70  0053fe70
0053fe70  PUSH EBP
0053fe71  MOV EBP,ESP
0053fe73  SUB ESP,0xc
0053fe76  MOV dword ptr [EBP + -0xc],ECX
0053fe79  PUSH -0x1
0053fe7b  MOV ECX,dword ptr [0x007947e0]
0053fe81  CALL 0x005de600
0053fe86  MOV ECX,EAX
0053fe88  CALL 0x0063aae0
0053fe8d  MOV dword ptr [EBP + -0x4],EAX
0053fe90  MOV EAX,dword ptr [EBP + 0x8]
0053fe93  MOV dword ptr [EBP + -0x8],EAX
0053fe96  CMP dword ptr [EBP + 0x8],0x0
0053fe9a  JZ 0x0053fea2
0053fe9c  CMP dword ptr [EBP + -0x4],0x0
0053fea0  JNZ 0x0053fea6
0053fea2  XOR AL,AL
0053fea4  JMP 0x0053febe
0053fea6  MOV ECX,dword ptr [EBP + -0x4]
0053fea9  MOV EDX,dword ptr [EBP + -0x8]
0053feac  MOV AL,byte ptr [EDX]
0053feae  MOV byte ptr [ECX],AL
0053feb0  MOV ECX,dword ptr [EBP + -0x4]
0053feb3  MOV EDX,dword ptr [EBP + -0x8]
0053feb6  MOV AL,byte ptr [EDX + 0x1]
0053feb9  MOV byte ptr [ECX + 0x1],AL
0053febc  MOV AL,0x1
0053febe  MOV ESP,EBP
0053fec0  POP EBP
0053fec1  RET 0x4
