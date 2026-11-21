; FUN_0068f800  0068f800
0068f800  PUSH EBP
0068f801  MOV EBP,ESP
0068f803  SUB ESP,0x14
0068f806  MOV dword ptr [EBP + -0x14],ECX
0068f809  MOV EAX,dword ptr [EBP + -0x14]
0068f80c  CMP dword ptr [EAX],0x0
0068f80f  JNZ 0x0068f817
0068f811  CALL dword ptr [0x006b2274]
0068f817  MOV ECX,dword ptr [EBP + -0x14]
0068f81a  MOV EDX,dword ptr [ECX + 0x4]
0068f81d  MOVSX EAX,byte ptr [EDX + 0x45]
0068f821  TEST EAX,EAX
0068f823  JZ 0x0068f84d
0068f825  MOV ECX,dword ptr [EBP + -0x14]
0068f828  MOV EDX,dword ptr [ECX + 0x4]
0068f82b  MOV EAX,dword ptr [EBP + -0x14]
0068f82e  MOV ECX,dword ptr [EDX + 0x8]
0068f831  MOV dword ptr [EAX + 0x4],ECX
0068f834  MOV EDX,dword ptr [EBP + -0x14]
0068f837  MOV EAX,dword ptr [EDX + 0x4]
0068f83a  MOVSX ECX,byte ptr [EAX + 0x45]
0068f83e  TEST ECX,ECX
0068f840  JZ 0x0068f848
0068f842  CALL dword ptr [0x006b2274]
0068f848  JMP 0x0068f8e6
0068f84d  MOV EDX,dword ptr [EBP + -0x14]
0068f850  MOV EAX,dword ptr [EDX + 0x4]
0068f853  MOV dword ptr [EBP + -0x8],EAX
0068f856  MOV ECX,dword ptr [EBP + -0x8]
0068f859  MOV EDX,dword ptr [ECX]
0068f85b  MOVSX EAX,byte ptr [EDX + 0x45]
0068f85f  TEST EAX,EAX
0068f861  JNZ 0x0068f898
0068f863  MOV ECX,dword ptr [EBP + -0x14]
0068f866  MOV EDX,dword ptr [ECX + 0x4]
0068f869  MOV dword ptr [EBP + -0xc],EDX
0068f86c  MOV EAX,dword ptr [EBP + -0xc]
0068f86f  MOV ECX,dword ptr [EAX]
0068f871  MOV dword ptr [EBP + -0x10],ECX
0068f874  MOV EDX,dword ptr [EBP + -0x10]
0068f877  MOV EAX,dword ptr [EDX + 0x8]
0068f87a  MOVSX ECX,byte ptr [EAX + 0x45]
0068f87e  TEST ECX,ECX
0068f880  JNZ 0x0068f88d
0068f882  MOV EDX,dword ptr [EBP + -0x10]
0068f885  MOV EAX,dword ptr [EDX + 0x8]
0068f888  MOV dword ptr [EBP + -0x10],EAX
0068f88b  JMP 0x0068f874
0068f88d  MOV ECX,dword ptr [EBP + -0x14]
0068f890  MOV EDX,dword ptr [EBP + -0x10]
0068f893  MOV dword ptr [ECX + 0x4],EDX
0068f896  JMP 0x0068f8e6
0068f898  MOV EAX,dword ptr [EBP + -0x14]
0068f89b  MOV ECX,dword ptr [EAX + 0x4]
0068f89e  MOV EDX,dword ptr [ECX + 0x4]
0068f8a1  MOV dword ptr [EBP + -0x4],EDX
0068f8a4  MOV EAX,dword ptr [EBP + -0x4]
0068f8a7  MOVSX ECX,byte ptr [EAX + 0x45]
0068f8ab  TEST ECX,ECX
0068f8ad  JNZ 0x0068f8c7
0068f8af  MOV EDX,dword ptr [EBP + -0x14]
0068f8b2  MOV EAX,dword ptr [EBP + -0x4]
0068f8b5  MOV ECX,dword ptr [EDX + 0x4]
0068f8b8  CMP ECX,dword ptr [EAX]
0068f8ba  JNZ 0x0068f8c7
0068f8bc  MOV EDX,dword ptr [EBP + -0x14]
0068f8bf  MOV EAX,dword ptr [EBP + -0x4]
0068f8c2  MOV dword ptr [EDX + 0x4],EAX
0068f8c5  JMP 0x0068f898
0068f8c7  MOV ECX,dword ptr [EBP + -0x14]
0068f8ca  MOV EDX,dword ptr [ECX + 0x4]
0068f8cd  MOVSX EAX,byte ptr [EDX + 0x45]
0068f8d1  TEST EAX,EAX
0068f8d3  JZ 0x0068f8dd
0068f8d5  CALL dword ptr [0x006b2274]
0068f8db  JMP 0x0068f8e6
0068f8dd  MOV ECX,dword ptr [EBP + -0x14]
0068f8e0  MOV EDX,dword ptr [EBP + -0x4]
0068f8e3  MOV dword ptr [ECX + 0x4],EDX
0068f8e6  MOV ESP,EBP
0068f8e8  POP EBP
0068f8e9  RET
