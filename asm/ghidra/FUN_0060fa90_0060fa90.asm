; FUN_0060fa90  0060fa90
0060fa90  PUSH EBP
0060fa91  MOV EBP,ESP
0060fa93  SUB ESP,0x8
0060fa96  MOV dword ptr [EBP + -0x8],ECX
0060fa99  MOV ECX,dword ptr [EBP + -0x8]
0060fa9c  CALL 0x005eb570
0060faa1  MOV word ptr [EBP + -0x4],0x0
0060faa7  JMP 0x0060fab5
0060faa9  MOV AX,word ptr [EBP + -0x4]
0060faad  ADD AX,0x1
0060fab1  MOV word ptr [EBP + -0x4],AX
0060fab5  MOVSX ECX,word ptr [EBP + -0x4]
0060fab9  MOV EDX,dword ptr [EBP + -0x8]
0060fabc  MOVSX EAX,word ptr [EDX + 0x184]
0060fac3  CMP ECX,EAX
0060fac5  JGE 0x0060fb05
0060fac7  MOVSX ECX,word ptr [EBP + -0x4]
0060facb  MOV EDX,dword ptr [EBP + -0x8]
0060face  MOV EAX,dword ptr [EDX + 0x18c]
0060fad4  CMP dword ptr [EAX + ECX*0x4],0x0
0060fad8  JZ 0x0060fb03
0060fada  MOVSX ECX,word ptr [EBP + -0x4]
0060fade  MOV EDX,dword ptr [EBP + -0x8]
0060fae1  MOV EAX,dword ptr [EDX + 0x18c]
0060fae7  MOV ECX,dword ptr [EAX + ECX*0x4]
0060faea  MOVSX EDX,word ptr [EBP + -0x4]
0060faee  MOV EAX,dword ptr [EBP + -0x8]
0060faf1  MOV EAX,dword ptr [EAX + 0x18c]
0060faf7  MOV EDX,dword ptr [EAX + EDX*0x4]
0060fafa  MOV EAX,dword ptr [ECX]
0060fafc  MOV ECX,EDX
0060fafe  MOV EDX,dword ptr [EAX + 0x74]
0060fb01  CALL EDX
0060fb03  JMP 0x0060faa9
0060fb05  MOV ESP,EBP
0060fb07  POP EBP
0060fb08  RET
