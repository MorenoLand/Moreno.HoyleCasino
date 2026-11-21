; FUN_0060f980  0060f980
0060f980  PUSH EBP
0060f981  MOV EBP,ESP
0060f983  SUB ESP,0x8
0060f986  MOV dword ptr [EBP + -0x8],ECX
0060f989  MOV EAX,dword ptr [EBP + 0x8]
0060f98c  PUSH EAX
0060f98d  MOV ECX,dword ptr [EBP + -0x8]
0060f990  CALL 0x005f5300
0060f995  MOV word ptr [EBP + -0x4],0x0
0060f99b  JMP 0x0060f9a9
0060f99d  MOV CX,word ptr [EBP + -0x4]
0060f9a1  ADD CX,0x1
0060f9a5  MOV word ptr [EBP + -0x4],CX
0060f9a9  MOVSX EDX,word ptr [EBP + -0x4]
0060f9ad  MOV EAX,dword ptr [EBP + -0x8]
0060f9b0  MOVSX ECX,word ptr [EAX + 0x184]
0060f9b7  CMP EDX,ECX
0060f9b9  JGE 0x0060f9fb
0060f9bb  MOVSX EDX,word ptr [EBP + -0x4]
0060f9bf  MOV EAX,dword ptr [EBP + -0x8]
0060f9c2  MOV ECX,dword ptr [EAX + 0x18c]
0060f9c8  CMP dword ptr [ECX + EDX*0x4],0x0
0060f9cc  JZ 0x0060f9f9
0060f9ce  MOV EDX,dword ptr [EBP + 0x8]
0060f9d1  PUSH EDX
0060f9d2  MOVSX EAX,word ptr [EBP + -0x4]
0060f9d6  MOV ECX,dword ptr [EBP + -0x8]
0060f9d9  MOV EDX,dword ptr [ECX + 0x18c]
0060f9df  MOV EAX,dword ptr [EDX + EAX*0x4]
0060f9e2  MOVSX ECX,word ptr [EBP + -0x4]
0060f9e6  MOV EDX,dword ptr [EBP + -0x8]
0060f9e9  MOV EDX,dword ptr [EDX + 0x18c]
0060f9ef  MOV ECX,dword ptr [EDX + ECX*0x4]
0060f9f2  MOV EAX,dword ptr [EAX]
0060f9f4  MOV EDX,dword ptr [EAX + 0x6c]
0060f9f7  CALL EDX
0060f9f9  JMP 0x0060f99d
0060f9fb  MOV ESP,EBP
0060f9fd  POP EBP
0060f9fe  RET 0x4
