; FUN_0045eeb0  0045eeb0
0045eeb0  PUSH EBP
0045eeb1  MOV EBP,ESP
0045eeb3  SUB ESP,0xc
0045eeb6  MOV dword ptr [EBP + -0xc],ECX
0045eeb9  PUSH -0x1
0045eebb  MOV ECX,dword ptr [0x007947e0]
0045eec1  CALL 0x005de600
0045eec6  MOV ECX,EAX
0045eec8  CALL 0x0063aae0
0045eecd  MOV dword ptr [EBP + -0x4],EAX
0045eed0  MOV EAX,dword ptr [EBP + 0x8]
0045eed3  MOV dword ptr [EBP + -0x8],EAX
0045eed6  CMP dword ptr [EBP + 0x8],0x0
0045eeda  JZ 0x0045eee2
0045eedc  CMP dword ptr [EBP + -0x4],0x0
0045eee0  JNZ 0x0045eee6
0045eee2  XOR AL,AL
0045eee4  JMP 0x0045ef22
0045eee6  MOV ECX,dword ptr [EBP + -0x4]
0045eee9  MOV EDX,dword ptr [EBP + -0x8]
0045eeec  MOV AL,byte ptr [EDX]
0045eeee  MOV byte ptr [ECX],AL
0045eef0  MOV ECX,dword ptr [EBP + -0x4]
0045eef3  MOV EDX,dword ptr [EBP + -0x8]
0045eef6  MOV AL,byte ptr [EDX + 0x1]
0045eef9  MOV byte ptr [ECX + 0x1],AL
0045eefc  MOV ECX,dword ptr [EBP + -0x4]
0045eeff  MOV EDX,dword ptr [EBP + -0x8]
0045ef02  MOV AL,byte ptr [EDX + 0x2]
0045ef05  MOV byte ptr [ECX + 0x2],AL
0045ef08  MOV ECX,dword ptr [EBP + -0x4]
0045ef0b  MOV EDX,dword ptr [EBP + -0x8]
0045ef0e  MOV AL,byte ptr [EDX + 0x3]
0045ef11  MOV byte ptr [ECX + 0x3],AL
0045ef14  MOV ECX,dword ptr [EBP + -0x4]
0045ef17  MOV EDX,dword ptr [EBP + -0x8]
0045ef1a  MOV AL,byte ptr [EDX + 0x4]
0045ef1d  MOV byte ptr [ECX + 0x4],AL
0045ef20  MOV AL,0x1
0045ef22  MOV ESP,EBP
0045ef24  POP EBP
0045ef25  RET 0x4
