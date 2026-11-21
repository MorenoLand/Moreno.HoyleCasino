; FUN_0068e850  0068e850
0068e850  PUSH EBP
0068e851  MOV EBP,ESP
0068e853  SUB ESP,0x58
0068e856  MOV dword ptr [EBP + -0x58],ECX
0068e859  MOV EAX,dword ptr [EBP + -0x58]
0068e85c  MOV ECX,dword ptr [EAX + 0x4]
0068e85f  MOV dword ptr [EBP + -0x24],ECX
0068e862  MOV EDX,dword ptr [EBP + -0x24]
0068e865  MOV EAX,dword ptr [EDX]
0068e867  MOV dword ptr [EBP + -0x28],EAX
0068e86a  MOV dword ptr [EBP + -0x8],0x0
0068e871  MOV ECX,dword ptr [EBP + -0x28]
0068e874  MOV dword ptr [EBP + -0x4],ECX
0068e877  CMP dword ptr [EBP + -0x58],0x0
0068e87b  JNZ 0x0068e883
0068e87d  CALL dword ptr [0x006b2274]
0068e883  MOV EDX,dword ptr [EBP + -0x58]
0068e886  MOV dword ptr [EBP + -0x8],EDX
0068e889  CMP dword ptr [EBP + 0xc],0x0
0068e88d  JZ 0x0068e897
0068e88f  MOV EAX,dword ptr [EBP + 0xc]
0068e892  CMP EAX,dword ptr [EBP + -0x8]
0068e895  JZ 0x0068e89d
0068e897  CALL dword ptr [0x006b2274]
0068e89d  MOV ECX,dword ptr [EBP + 0x10]
0068e8a0  XOR EDX,EDX
0068e8a2  CMP ECX,dword ptr [EBP + -0x4]
0068e8a5  SETZ DL
0068e8a8  MOVZX EAX,DL
0068e8ab  TEST EAX,EAX
0068e8ad  JZ 0x0068e947
0068e8b3  MOV ECX,dword ptr [EBP + -0x58]
0068e8b6  MOV EDX,dword ptr [ECX + 0x4]
0068e8b9  MOV dword ptr [EBP + -0x2c],EDX
0068e8bc  MOV dword ptr [EBP + -0x10],0x0
0068e8c3  MOV EAX,dword ptr [EBP + -0x2c]
0068e8c6  MOV dword ptr [EBP + -0xc],EAX
0068e8c9  CMP dword ptr [EBP + -0x58],0x0
0068e8cd  JNZ 0x0068e8d5
0068e8cf  CALL dword ptr [0x006b2274]
0068e8d5  MOV ECX,dword ptr [EBP + -0x58]
0068e8d8  MOV dword ptr [EBP + -0x10],ECX
0068e8db  CMP dword ptr [EBP + 0x14],0x0
0068e8df  JZ 0x0068e8e9
0068e8e1  MOV EDX,dword ptr [EBP + 0x14]
0068e8e4  CMP EDX,dword ptr [EBP + -0x10]
0068e8e7  JZ 0x0068e8ef
0068e8e9  CALL dword ptr [0x006b2274]
0068e8ef  MOV EAX,dword ptr [EBP + 0x18]
0068e8f2  XOR ECX,ECX
0068e8f4  CMP EAX,dword ptr [EBP + -0xc]
0068e8f7  SETZ CL
0068e8fa  MOVZX EDX,CL
0068e8fd  TEST EDX,EDX
0068e8ff  JZ 0x0068e947
0068e901  MOV ECX,dword ptr [EBP + -0x58]
0068e904  CALL 0x0068f520
0068e909  MOV EAX,dword ptr [EBP + -0x58]
0068e90c  MOV ECX,dword ptr [EAX + 0x4]
0068e90f  MOV dword ptr [EBP + -0x38],ECX
0068e912  MOV EDX,dword ptr [EBP + -0x38]
0068e915  MOV EAX,dword ptr [EDX]
0068e917  MOV dword ptr [EBP + -0x3c],EAX
0068e91a  MOV ECX,dword ptr [EBP + 0x8]
0068e91d  MOV dword ptr [ECX],0x0
0068e923  MOV EDX,dword ptr [EBP + 0x8]
0068e926  MOV EAX,dword ptr [EBP + -0x3c]
0068e929  MOV dword ptr [EDX + 0x4],EAX
0068e92c  CMP dword ptr [EBP + -0x58],0x0
0068e930  JNZ 0x0068e938
0068e932  CALL dword ptr [0x006b2274]
0068e938  MOV ECX,dword ptr [EBP + 0x8]
0068e93b  MOV EDX,dword ptr [EBP + -0x58]
0068e93e  MOV dword ptr [ECX],EDX
0068e940  MOV EAX,dword ptr [EBP + 0x8]
0068e943  JMP 0x0068e9be
0068e947  CMP dword ptr [EBP + 0xc],0x0
0068e94b  JZ 0x0068e955
0068e94d  MOV EAX,dword ptr [EBP + 0xc]
0068e950  CMP EAX,dword ptr [EBP + 0x14]
0068e953  JZ 0x0068e95b
0068e955  CALL dword ptr [0x006b2274]
0068e95b  MOV ECX,dword ptr [EBP + 0x10]
0068e95e  XOR EDX,EDX
0068e960  CMP ECX,dword ptr [EBP + 0x18]
0068e963  SETZ DL
0068e966  MOVZX EAX,DL
0068e969  NEG EAX
0068e96b  SBB EAX,EAX
0068e96d  ADD EAX,0x1
0068e970  MOVZX ECX,AL
0068e973  TEST ECX,ECX
0068e975  JZ 0x0068e9ad
0068e977  MOV EDX,dword ptr [EBP + 0xc]
0068e97a  MOV EAX,dword ptr [EBP + 0x10]
0068e97d  MOV dword ptr [EBP + -0x44],EDX
0068e980  MOV dword ptr [EBP + -0x40],EAX
0068e983  LEA ECX,[EBP + 0xc]
0068e986  CALL 0x0068edc0
0068e98b  MOV ECX,dword ptr [EBP + -0x44]
0068e98e  MOV dword ptr [EBP + -0x18],ECX
0068e991  MOV EDX,dword ptr [EBP + -0x40]
0068e994  MOV dword ptr [EBP + -0x14],EDX
0068e997  MOV EAX,dword ptr [EBP + -0x14]
0068e99a  PUSH EAX
0068e99b  MOV ECX,dword ptr [EBP + -0x18]
0068e99e  PUSH ECX
0068e99f  LEA EDX,[EBP + -0x20]
0068e9a2  PUSH EDX
0068e9a3  MOV ECX,dword ptr [EBP + -0x58]
0068e9a6  CALL 0x0068ef90
0068e9ab  JMP 0x0068e947
0068e9ad  MOV EAX,dword ptr [EBP + 0x8]
0068e9b0  MOV ECX,dword ptr [EBP + 0xc]
0068e9b3  MOV dword ptr [EAX],ECX
0068e9b5  MOV EDX,dword ptr [EBP + 0x10]
0068e9b8  MOV dword ptr [EAX + 0x4],EDX
0068e9bb  MOV EAX,dword ptr [EBP + 0x8]
0068e9be  MOV ESP,EBP
0068e9c0  POP EBP
0068e9c1  RET 0x14
