; FUN_0060c910  0060c910
0060c910  PUSH EBP
0060c911  MOV EBP,ESP
0060c913  SUB ESP,0x18
0060c916  MOV dword ptr [EBP + -0x14],ECX
0060c919  MOV dword ptr [EBP + -0x4],0x0
0060c920  MOV EAX,dword ptr [EBP + -0x14]
0060c923  MOV ECX,dword ptr [EAX + 0xc]
0060c926  MOV dword ptr [EBP + -0x8],ECX
0060c929  JMP 0x0060c93d
0060c92b  MOV EDX,dword ptr [EBP + -0x4]
0060c92e  ADD EDX,0x1
0060c931  MOV dword ptr [EBP + -0x4],EDX
0060c934  MOV EAX,dword ptr [EBP + -0x8]
0060c937  ADD EAX,0x4
0060c93a  MOV dword ptr [EBP + -0x8],EAX
0060c93d  MOV ECX,dword ptr [EBP + -0x14]
0060c940  MOV EDX,dword ptr [EBP + -0x4]
0060c943  CMP EDX,dword ptr [ECX + 0x4]
0060c946  JGE 0x0060c981
0060c948  MOV EAX,dword ptr [EBP + -0x8]
0060c94b  MOV ECX,dword ptr [EAX]
0060c94d  MOV dword ptr [EBP + -0x10],ECX
0060c950  MOV EDX,dword ptr [EBP + -0x10]
0060c953  MOV dword ptr [EBP + -0xc],EDX
0060c956  CMP dword ptr [EBP + -0xc],0x0
0060c95a  JZ 0x0060c96f
0060c95c  PUSH 0x1
0060c95e  MOV EAX,dword ptr [EBP + -0xc]
0060c961  MOV EDX,dword ptr [EAX]
0060c963  MOV ECX,dword ptr [EBP + -0xc]
0060c966  MOV EAX,dword ptr [EDX]
0060c968  CALL EAX
0060c96a  MOV dword ptr [EBP + -0x18],EAX
0060c96d  JMP 0x0060c976
0060c96f  MOV dword ptr [EBP + -0x18],0x0
0060c976  MOV ECX,dword ptr [EBP + -0x8]
0060c979  MOV dword ptr [ECX],0x0
0060c97f  JMP 0x0060c92b
0060c981  MOV EDX,dword ptr [EBP + -0x14]
0060c984  MOV dword ptr [EDX + 0x4],0x0
0060c98b  MOV AL,0x1
0060c98d  MOV ESP,EBP
0060c98f  POP EBP
0060c990  RET
