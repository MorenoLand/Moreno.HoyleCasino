; FUN_0044f910  0044f910
0044f910  PUSH EBP
0044f911  MOV EBP,ESP
0044f913  PUSH ECX
0044f914  MOV dword ptr [EBP + -0x4],ECX
0044f917  MOV EAX,dword ptr [EBP + -0x4]
0044f91a  MOVSX ECX,word ptr [EAX + 0x2b6]
0044f921  CMP ECX,0x5
0044f924  JGE 0x0044f957
0044f926  MOV EDX,dword ptr [EBP + -0x4]
0044f929  MOVSX EAX,word ptr [EDX + 0x2b8]
0044f930  CMP EAX,0x5
0044f933  JGE 0x0044f957
0044f935  MOV ECX,dword ptr [EBP + -0x4]
0044f938  MOVSX EDX,word ptr [ECX + 0x2bc]
0044f93f  CMP EDX,0x5
0044f942  JGE 0x0044f957
0044f944  MOV EAX,dword ptr [EBP + -0x4]
0044f947  MOVSX ECX,word ptr [EAX + 0x2ba]
0044f94e  CMP ECX,0x5
0044f951  JL 0x0044fa17
0044f957  MOV EDX,dword ptr [EBP + -0x4]
0044f95a  MOVSX EAX,word ptr [EDX + 0x2b6]
0044f961  CMP EAX,0x5
0044f964  JL 0x0044f986
0044f966  MOV ECX,dword ptr [EBP + -0x4]
0044f969  MOV dword ptr [ECX + 0x2d0],0x3
0044f973  MOV EDX,dword ptr [EBP + -0x4]
0044f976  MOVSX EAX,word ptr [EDX + 0x2b6]
0044f97d  MOV ECX,dword ptr [EBP + -0x4]
0044f980  MOV dword ptr [ECX + 0x2d4],EAX
0044f986  MOV EDX,dword ptr [EBP + -0x4]
0044f989  MOVSX EAX,word ptr [EDX + 0x2b8]
0044f990  CMP EAX,0x5
0044f993  JL 0x0044f9b5
0044f995  MOV ECX,dword ptr [EBP + -0x4]
0044f998  MOV dword ptr [ECX + 0x2d0],0x0
0044f9a2  MOV EDX,dword ptr [EBP + -0x4]
0044f9a5  MOVSX EAX,word ptr [EDX + 0x2b8]
0044f9ac  MOV ECX,dword ptr [EBP + -0x4]
0044f9af  MOV dword ptr [ECX + 0x2d4],EAX
0044f9b5  MOV EDX,dword ptr [EBP + -0x4]
0044f9b8  MOVSX EAX,word ptr [EDX + 0x2bc]
0044f9bf  CMP EAX,0x5
0044f9c2  JL 0x0044f9e4
0044f9c4  MOV ECX,dword ptr [EBP + -0x4]
0044f9c7  MOV dword ptr [ECX + 0x2d0],0x1
0044f9d1  MOV EDX,dword ptr [EBP + -0x4]
0044f9d4  MOVSX EAX,word ptr [EDX + 0x2bc]
0044f9db  MOV ECX,dword ptr [EBP + -0x4]
0044f9de  MOV dword ptr [ECX + 0x2d4],EAX
0044f9e4  MOV EDX,dword ptr [EBP + -0x4]
0044f9e7  MOVSX EAX,word ptr [EDX + 0x2ba]
0044f9ee  CMP EAX,0x5
0044f9f1  JL 0x0044fa13
0044f9f3  MOV ECX,dword ptr [EBP + -0x4]
0044f9f6  MOV dword ptr [ECX + 0x2d0],0x2
0044fa00  MOV EDX,dword ptr [EBP + -0x4]
0044fa03  MOVSX EAX,word ptr [EDX + 0x2ba]
0044fa0a  MOV ECX,dword ptr [EBP + -0x4]
0044fa0d  MOV dword ptr [ECX + 0x2d4],EAX
0044fa13  MOV AL,0x1
0044fa15  JMP 0x0044fa19
0044fa17  XOR AL,AL
0044fa19  MOV ESP,EBP
0044fa1b  POP EBP
0044fa1c  RET
