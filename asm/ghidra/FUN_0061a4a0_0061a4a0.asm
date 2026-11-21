; FUN_0061a4a0  0061a4a0
0061a4a0  PUSH EBP
0061a4a1  MOV EBP,ESP
0061a4a3  SUB ESP,0xa4
0061a4a9  PUSH EBX
0061a4aa  PUSH ESI
0061a4ab  PUSH EDI
0061a4ac  MOV dword ptr [EBP + -0x8],0x4
0061a4b3  MOV EAX,dword ptr [EBP + 0xc]
0061a4b6  MOVZX ECX,byte ptr [EAX]
0061a4b9  MOV dword ptr [EBP + -0x14],ECX
0061a4bc  MOV EDX,dword ptr [EBP + 0xc]
0061a4bf  MOV AX,word ptr [EDX + 0x1]
0061a4c3  MOV word ptr [EBP + -0x18],AX
0061a4c7  MOV ECX,dword ptr [EBP + 0xc]
0061a4ca  ADD ECX,0x3
0061a4cd  MOV dword ptr [EBP + 0xc],ECX
0061a4d0  MOVZX EDX,word ptr [EBP + -0x18]
0061a4d4  CMP dword ptr [EBP + 0x10],EDX
0061a4d7  JL 0x0061a5aa
0061a4dd  MOVZX EAX,word ptr [EBP + -0x18]
0061a4e1  TEST EAX,EAX
0061a4e3  JLE 0x0061a5aa
0061a4e9  MOVZX ECX,word ptr [EBP + -0x18]
0061a4ed  MOV EDX,dword ptr [EBP + 0x10]
0061a4f0  SUB EDX,ECX
0061a4f2  MOV dword ptr [EBP + 0x10],EDX
0061a4f5  MOV EAX,dword ptr [EBP + -0x14]
0061a4f8  MOV dword ptr [EBP + 0xffffff60],EAX
0061a4fe  MOV ECX,dword ptr [EBP + 0xffffff60]
0061a504  SUB ECX,0x2
0061a507  MOV dword ptr [EBP + 0xffffff60],ECX
0061a50d  CMP dword ptr [EBP + 0xffffff60],0x86
0061a517  JA 0x0061a588
0061a519  MOV EDX,dword ptr [EBP + 0xffffff60]
0061a51f  MOVZX EAX,byte ptr [EDX + 0x61b304]
0061a526  JMP dword ptr [EAX*0x4 + 0x61b2e4]
0061a588  MOV EAX,dword ptr [EBP + 0xc]
0061a58b  MOVZX ECX,byte ptr [EAX]
0061a58e  MOV dword ptr [EBP + -0x14],ECX
0061a591  MOV EDX,dword ptr [EBP + 0xc]
0061a594  MOV AX,word ptr [EDX + 0x1]
0061a598  MOV word ptr [EBP + -0x18],AX
0061a59c  MOV ECX,dword ptr [EBP + 0xc]
0061a59f  ADD ECX,0x3
0061a5a2  MOV dword ptr [EBP + 0xc],ECX
0061a5a5  JMP 0x0061a4d0
0061a5aa  CMP dword ptr [EBP + 0x14],0x0
0061a5ae  JLE 0x0061b2dc
0061a5b4  MOVZX EDX,word ptr [EBP + -0x18]
0061a5b8  TEST EDX,EDX
0061a5ba  JLE 0x0061b2dc
0061a5c0  MOVZX EAX,word ptr [EBP + -0x18]
0061a5c4  SUB EAX,dword ptr [EBP + 0x10]
0061a5c7  MOV word ptr [EBP + -0x18],AX
0061a5cb  MOV ECX,dword ptr [EBP + -0x14]
0061a5ce  MOV dword ptr [EBP + 0xffffff5c],ECX
0061a5d4  MOV EDX,dword ptr [EBP + 0xffffff5c]
0061a5da  SUB EDX,0x1
0061a5dd  MOV dword ptr [EBP + 0xffffff5c],EDX
0061a5e3  CMP dword ptr [EBP + 0xffffff5c],0x87
0061a5ed  JA 0x0061b2a8
0061a5f3  MOV EAX,dword ptr [EBP + 0xffffff5c]
0061a5f9  MOVZX ECX,byte ptr [EAX + 0x61b3c0]
0061a600  JMP dword ptr [ECX*0x4 + 0x61b38c]
0061b2a8  CMP dword ptr [EBP + 0x14],0x0
0061b2ac  JZ 0x0061b2d7
0061b2ae  MOVZX EAX,word ptr [EBP + -0x18]
0061b2b2  MOV ECX,dword ptr [EBP + 0x14]
0061b2b5  SUB ECX,EAX
0061b2b7  MOV dword ptr [EBP + 0x14],ECX
0061b2ba  MOV EDX,dword ptr [EBP + 0xc]
0061b2bd  MOVZX EAX,byte ptr [EDX]
0061b2c0  MOV dword ptr [EBP + -0x14],EAX
0061b2c3  MOV ECX,dword ptr [EBP + 0xc]
0061b2c6  MOV DX,word ptr [ECX + 0x1]
0061b2ca  MOV word ptr [EBP + -0x18],DX
0061b2ce  MOV EAX,dword ptr [EBP + 0xc]
0061b2d1  ADD EAX,0x3
0061b2d4  MOV dword ptr [EBP + 0xc],EAX
0061b2d7  JMP 0x0061a5aa
0061b2dc  POP EDI
0061b2dd  POP ESI
0061b2de  POP EBX
0061b2df  MOV ESP,EBP
0061b2e1  POP EBP
0061b2e2  RET
