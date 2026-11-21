; FUN_0053fdd0  0053fdd0
0053fdd0  PUSH EBP
0053fdd1  MOV EBP,ESP
0053fdd3  PUSH ECX
0053fdd4  MOV dword ptr [EBP + -0x4],ECX
0053fdd7  CMP dword ptr [EBP + 0x8],0x0
0053fddb  JNZ 0x0053fde1
0053fddd  XOR AL,AL
0053fddf  JMP 0x0053fe28
0053fde1  MOV EAX,dword ptr [EBP + 0x8]
0053fde4  MOV dword ptr [EAX],0x4
0053fdea  MOV ECX,dword ptr [EBP + 0x8]
0053fded  MOV dword ptr [ECX + 0x4],0x1
0053fdf4  MOV EDX,dword ptr [EBP + 0x8]
0053fdf7  MOV dword ptr [EDX + 0x8],0x4
0053fdfe  MOV EAX,dword ptr [EBP + 0x8]
0053fe01  MOV dword ptr [EAX + 0xc],0x1
0053fe08  MOV ECX,dword ptr [EBP + 0x8]
0053fe0b  MOV dword ptr [ECX + 0x10],0x4
0053fe12  MOV EDX,dword ptr [EBP + 0x8]
0053fe15  MOV dword ptr [EDX + 0x14],0x0
0053fe1c  MOV EAX,dword ptr [EBP + 0x8]
0053fe1f  MOV dword ptr [EAX + 0x18],0x3
0053fe26  MOV AL,0x1
0053fe28  MOV ESP,EBP
0053fe2a  POP EBP
0053fe2b  RET 0x8
