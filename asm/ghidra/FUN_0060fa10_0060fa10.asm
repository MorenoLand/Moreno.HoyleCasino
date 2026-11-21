; FUN_0060fa10  0060fa10
0060fa10  PUSH EBP
0060fa11  MOV EBP,ESP
0060fa13  SUB ESP,0x8
0060fa16  MOV dword ptr [EBP + -0x8],ECX
0060fa19  MOV ECX,dword ptr [EBP + -0x8]
0060fa1c  CALL 0x005eb5a0
0060fa21  MOV word ptr [EBP + -0x4],0x0
0060fa27  JMP 0x0060fa35
0060fa29  MOV AX,word ptr [EBP + -0x4]
0060fa2d  ADD AX,0x1
0060fa31  MOV word ptr [EBP + -0x4],AX
0060fa35  MOVSX ECX,word ptr [EBP + -0x4]
0060fa39  MOV EDX,dword ptr [EBP + -0x8]
0060fa3c  MOVSX EAX,word ptr [EDX + 0x184]
0060fa43  CMP ECX,EAX
0060fa45  JGE 0x0060fa85
0060fa47  MOVSX ECX,word ptr [EBP + -0x4]
0060fa4b  MOV EDX,dword ptr [EBP + -0x8]
0060fa4e  MOV EAX,dword ptr [EDX + 0x18c]
0060fa54  CMP dword ptr [EAX + ECX*0x4],0x0
0060fa58  JZ 0x0060fa83
0060fa5a  MOVSX ECX,word ptr [EBP + -0x4]
0060fa5e  MOV EDX,dword ptr [EBP + -0x8]
0060fa61  MOV EAX,dword ptr [EDX + 0x18c]
0060fa67  MOV ECX,dword ptr [EAX + ECX*0x4]
0060fa6a  MOVSX EDX,word ptr [EBP + -0x4]
0060fa6e  MOV EAX,dword ptr [EBP + -0x8]
0060fa71  MOV EAX,dword ptr [EAX + 0x18c]
0060fa77  MOV EDX,dword ptr [EAX + EDX*0x4]
0060fa7a  MOV EAX,dword ptr [ECX]
0060fa7c  MOV ECX,EDX
0060fa7e  MOV EDX,dword ptr [EAX + 0x70]
0060fa81  CALL EDX
0060fa83  JMP 0x0060fa29
0060fa85  MOV ESP,EBP
0060fa87  POP EBP
0060fa88  RET
