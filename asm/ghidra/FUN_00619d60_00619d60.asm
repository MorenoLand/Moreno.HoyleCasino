; FUN_00619d60  00619d60
00619d60  PUSH EBP
00619d61  MOV EBP,ESP
00619d63  SUB ESP,0x5c
00619d66  PUSH ESI
00619d67  MOV dword ptr [EBP + -0xc],0x4
00619d6e  MOV EAX,dword ptr [EBP + 0xc]
00619d71  MOVZX ECX,byte ptr [EAX]
00619d74  MOV dword ptr [EBP + -0x24],ECX
00619d77  MOV EDX,dword ptr [EBP + 0xc]
00619d7a  MOV AX,word ptr [EDX + 0x1]
00619d7e  MOV word ptr [EBP + -0x2c],AX
00619d82  MOV ECX,dword ptr [EBP + 0xc]
00619d85  ADD ECX,0x3
00619d88  MOV dword ptr [EBP + 0xc],ECX
00619d8b  MOVZX EDX,word ptr [EBP + -0x2c]
00619d8f  CMP dword ptr [EBP + 0x10],EDX
00619d92  JL 0x00619e56
00619d98  MOVZX EAX,word ptr [EBP + -0x2c]
00619d9c  TEST EAX,EAX
00619d9e  JLE 0x00619e56
00619da4  MOVZX ECX,word ptr [EBP + -0x2c]
00619da8  MOV EDX,dword ptr [EBP + 0x10]
00619dab  SUB EDX,ECX
00619dad  MOV dword ptr [EBP + 0x10],EDX
00619db0  MOV EAX,dword ptr [EBP + -0x24]
00619db3  MOV dword ptr [EBP + -0x58],EAX
00619db6  MOV ECX,dword ptr [EBP + -0x58]
00619db9  SUB ECX,0x2
00619dbc  MOV dword ptr [EBP + -0x58],ECX
00619dbf  CMP dword ptr [EBP + -0x58],0x86
00619dc6  JA 0x00619e34
00619dc8  MOV EDX,dword ptr [EBP + -0x58]
00619dcb  MOVZX EAX,byte ptr [EDX + 0x61a368]
00619dd2  JMP dword ptr [EAX*0x4 + 0x61a348]
00619e34  MOV EAX,dword ptr [EBP + 0xc]
00619e37  MOVZX ECX,byte ptr [EAX]
00619e3a  MOV dword ptr [EBP + -0x24],ECX
00619e3d  MOV EDX,dword ptr [EBP + 0xc]
00619e40  MOV AX,word ptr [EDX + 0x1]
00619e44  MOV word ptr [EBP + -0x2c],AX
00619e48  MOV ECX,dword ptr [EBP + 0xc]
00619e4b  ADD ECX,0x3
00619e4e  MOV dword ptr [EBP + 0xc],ECX
00619e51  JMP 0x00619d8b
00619e56  MOV byte ptr [EBP + -0x2d],0x0
00619e5a  CMP dword ptr [EBP + 0x14],0x0
00619e5e  JLE 0x0061a33f
00619e64  MOVZX EDX,word ptr [EBP + -0x2c]
00619e68  TEST EDX,EDX
00619e6a  JLE 0x0061a33f
00619e70  MOVZX EAX,word ptr [EBP + -0x2c]
00619e74  SUB EAX,dword ptr [EBP + 0x10]
00619e77  MOV word ptr [EBP + -0x2c],AX
00619e7b  MOV ECX,dword ptr [EBP + -0x24]
00619e7e  MOV dword ptr [EBP + -0x5c],ECX
00619e81  MOV EDX,dword ptr [EBP + -0x5c]
00619e84  SUB EDX,0x1
00619e87  MOV dword ptr [EBP + -0x5c],EDX
00619e8a  CMP dword ptr [EBP + -0x5c],0x87
00619e91  JA 0x0061a30b
00619e97  MOV EAX,dword ptr [EBP + -0x5c]
00619e9a  MOVZX ECX,byte ptr [EAX + 0x61a414]
00619ea1  JMP dword ptr [ECX*0x4 + 0x61a3f0]
0061a30b  CMP dword ptr [EBP + 0x14],0x0
0061a30f  JZ 0x0061a33a
0061a311  MOVZX EDX,word ptr [EBP + -0x2c]
0061a315  MOV EAX,dword ptr [EBP + 0x14]
0061a318  SUB EAX,EDX
0061a31a  MOV dword ptr [EBP + 0x14],EAX
0061a31d  MOV ECX,dword ptr [EBP + 0xc]
0061a320  MOVZX EDX,byte ptr [ECX]
0061a323  MOV dword ptr [EBP + -0x24],EDX
0061a326  MOV EAX,dword ptr [EBP + 0xc]
0061a329  MOV CX,word ptr [EAX + 0x1]
0061a32d  MOV word ptr [EBP + -0x2c],CX
0061a331  MOV EDX,dword ptr [EBP + 0xc]
0061a334  ADD EDX,0x3
0061a337  MOV dword ptr [EBP + 0xc],EDX
0061a33a  JMP 0x00619e5a
0061a33f  MOV AL,byte ptr [EBP + -0x2d]
0061a342  POP ESI
0061a343  MOV ESP,EBP
0061a345  POP EBP
0061a346  RET
