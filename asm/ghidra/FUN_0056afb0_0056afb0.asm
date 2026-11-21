; FUN_0056afb0  0056afb0
0056afb0  PUSH EBP
0056afb1  MOV EBP,ESP
0056afb3  SUB ESP,0x4d0
0056afb9  MOV dword ptr [EBP + 0xfffffb30],ECX
0056afbf  MOV dword ptr [EBP + -0x8],0x0
0056afc6  JMP 0x0056afd1
0056afc8  MOV EAX,dword ptr [EBP + -0x8]
0056afcb  ADD EAX,0x1
0056afce  MOV dword ptr [EBP + -0x8],EAX
0056afd1  CMP dword ptr [EBP + -0x8],0x5
0056afd5  JGE 0x0056b019
0056afd7  MOV dword ptr [EBP + 0xfffffb34],0x0
0056afe1  JMP 0x0056aff2
0056afe3  MOV ECX,dword ptr [EBP + 0xfffffb34]
0056afe9  ADD ECX,0x1
0056afec  MOV dword ptr [EBP + 0xfffffb34],ECX
0056aff2  CMP dword ptr [EBP + 0xfffffb34],0x3c
0056aff9  JGE 0x0056b017
0056affb  MOV EDX,dword ptr [EBP + 0xfffffb34]
0056b001  IMUL EDX,EDX,0x14
0056b004  LEA EAX,[EBP + EDX*0x1 + 0xfffffb40]
0056b00b  MOV ECX,dword ptr [EBP + -0x8]
0056b00e  MOV dword ptr [EAX + ECX*0x4],0x0
0056b015  JMP 0x0056afe3
0056b017  JMP 0x0056afc8
0056b019  MOV dword ptr [EBP + -0x8],0x0
0056b020  JMP 0x0056b02b
0056b022  MOV EDX,dword ptr [EBP + -0x8]
0056b025  ADD EDX,0x1
0056b028  MOV dword ptr [EBP + -0x8],EDX
0056b02b  CMP dword ptr [EBP + -0x8],0x5
0056b02f  JGE 0x0056b123
0056b035  MOV EAX,dword ptr [EBP + 0x8]
0056b038  IMUL EAX,EAX,0xa
0056b03b  MOV ECX,dword ptr [EBP + 0xfffffb30]
0056b041  LEA EDX,[ECX + EAX*0x1 + 0xf6]
0056b048  MOV EAX,dword ptr [EBP + -0x8]
0056b04b  MOV CX,word ptr [EDX + EAX*0x2]
0056b04f  MOV word ptr [EBP + 0xfffffb38],CX
0056b056  MOVZX EDX,word ptr [EBP + 0xfffffb38]
0056b05d  TEST EDX,EDX
0056b05f  JNZ 0x0056b063
0056b061  JMP 0x0056b022
0056b063  MOV AX,word ptr [EBP + 0xfffffb38]
0056b06a  PUSH EAX
0056b06b  CALL 0x00641280
0056b070  ADD ESP,0x4
0056b073  MOV dword ptr [EBP + 0xfffffb3c],EAX
0056b079  MOV CX,word ptr [EBP + 0xfffffb38]
0056b080  PUSH ECX
0056b081  CALL 0x00641290
0056b086  ADD ESP,0x4
0056b089  MOV dword ptr [EBP + -0xc],EAX
0056b08c  CMP dword ptr [EBP + 0xfffffb3c],0x0
0056b093  JGE 0x0056b09f
0056b095  MOV dword ptr [EBP + 0xfffffb3c],0x0
0056b09f  CMP dword ptr [EBP + 0xfffffb3c],0x3b
0056b0a6  JLE 0x0056b0b2
0056b0a8  MOV dword ptr [EBP + 0xfffffb3c],0x3b
0056b0b2  CMP dword ptr [EBP + -0xc],0x0
0056b0b6  JGE 0x0056b0bf
0056b0b8  MOV dword ptr [EBP + -0xc],0x0
0056b0bf  CMP dword ptr [EBP + -0xc],0x4
0056b0c3  JLE 0x0056b0cc
0056b0c5  MOV dword ptr [EBP + -0xc],0x4
0056b0cc  MOV EDX,dword ptr [EBP + 0xfffffb3c]
0056b0d2  IMUL EDX,EDX,0x14
0056b0d5  LEA EAX,[EBP + EDX*0x1 + 0xfffffb40]
0056b0dc  MOV ECX,dword ptr [EBP + -0xc]
0056b0df  MOV EDX,dword ptr [EAX + ECX*0x4]
0056b0e2  MOV dword ptr [EBP + -0x4],EDX
0056b0e5  CMP dword ptr [EBP + -0x4],0x1
0056b0e9  JL 0x0056b0ef
0056b0eb  XOR AL,AL
0056b0ed  JMP 0x0056b125
0056b0ef  MOV EAX,dword ptr [EBP + 0xfffffb3c]
0056b0f5  IMUL EAX,EAX,0x14
0056b0f8  LEA ECX,[EBP + EAX*0x1 + 0xfffffb40]
0056b0ff  MOV EDX,dword ptr [EBP + -0xc]
0056b102  MOV EAX,dword ptr [ECX + EDX*0x4]
0056b105  ADD EAX,0x1
0056b108  MOV ECX,dword ptr [EBP + 0xfffffb3c]
0056b10e  IMUL ECX,ECX,0x14
0056b111  LEA EDX,[EBP + ECX*0x1 + 0xfffffb40]
0056b118  MOV ECX,dword ptr [EBP + -0xc]
0056b11b  MOV dword ptr [EDX + ECX*0x4],EAX
0056b11e  JMP 0x0056b022
0056b123  MOV AL,0x1
0056b125  MOV ESP,EBP
0056b127  POP EBP
0056b128  RET 0x4
