; FUN_0045ee60  0045ee60
0045ee60  PUSH EBP
0045ee61  MOV EBP,ESP
0045ee63  SUB ESP,0x8
0045ee66  MOV dword ptr [EBP + -0x8],ECX
0045ee69  CMP dword ptr [EBP + 0x8],0x0
0045ee6d  JNZ 0x0045ee73
0045ee6f  XOR AL,AL
0045ee71  JMP 0x0045ee9d
0045ee73  MOV EAX,dword ptr [EBP + 0x8]
0045ee76  MOV dword ptr [EBP + -0x4],EAX
0045ee79  MOV ECX,dword ptr [EBP + -0x4]
0045ee7c  MOV byte ptr [ECX],0x1
0045ee7f  MOV EDX,dword ptr [EBP + -0x4]
0045ee82  MOV byte ptr [EDX + 0x1],0x1
0045ee86  MOV EAX,dword ptr [EBP + -0x4]
0045ee89  MOV byte ptr [EAX + 0x2],0x1
0045ee8d  MOV ECX,dword ptr [EBP + -0x4]
0045ee90  MOV byte ptr [ECX + 0x3],0x1
0045ee94  MOV EDX,dword ptr [EBP + -0x4]
0045ee97  MOV byte ptr [EDX + 0x4],0x0
0045ee9b  MOV AL,0x1
0045ee9d  MOV ESP,EBP
0045ee9f  POP EBP
0045eea0  RET 0x4
