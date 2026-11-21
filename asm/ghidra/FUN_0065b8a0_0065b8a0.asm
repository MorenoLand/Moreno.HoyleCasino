; FUN_0065b8a0  0065b8a0
0065b8a0  PUSH EBP
0065b8a1  MOV EBP,ESP
0065b8a3  PUSH ECX
0065b8a4  PUSH ESI
0065b8a5  MOV dword ptr [EBP + -0x4],ECX
0065b8a8  MOV EAX,dword ptr [EBP + -0x4]
0065b8ab  MOV dword ptr [EAX + 0x1b8],0x3
0065b8b5  MOV ECX,dword ptr [EBP + -0x4]
0065b8b8  MOV EDX,dword ptr [ECX + 0x1b8]
0065b8be  ADD EDX,0x14
0065b8c1  MOV EAX,dword ptr [EBP + -0x4]
0065b8c4  MOV dword ptr [EAX + 0x1c0],EDX
0065b8ca  MOV ECX,dword ptr [EBP + -0x4]
0065b8cd  MOV dword ptr [ECX + 0x1bc],0x2
0065b8d7  MOV EDX,dword ptr [EBP + -0x4]
0065b8da  MOV EAX,dword ptr [EDX + 0x1bc]
0065b8e0  ADD EAX,0xc
0065b8e3  MOV ECX,dword ptr [EBP + -0x4]
0065b8e6  MOV dword ptr [ECX + 0x1c4],EAX
0065b8ec  PUSH 0x30
0065b8ee  MOV EDX,dword ptr [EBP + -0x4]
0065b8f1  MOV ECX,dword ptr [EDX + 0x190]
0065b8f7  CALL 0x005ef310
0065b8fc  MOV EAX,dword ptr [EBP + -0x4]
0065b8ff  MOV ECX,dword ptr [EBP + -0x4]
0065b902  MOV EDX,dword ptr [EAX + 0x1c0]
0065b908  SUB EDX,dword ptr [ECX + 0x1b8]
0065b90e  ADD EDX,0x1
0065b911  PUSH EDX
0065b912  MOV EAX,dword ptr [EBP + -0x4]
0065b915  MOV ECX,dword ptr [EAX + 0x190]
0065b91b  CALL 0x005ecc60
0065b920  MOV ECX,dword ptr [EBP + -0x4]
0065b923  MOV EDX,dword ptr [EBP + -0x4]
0065b926  MOV EAX,dword ptr [ECX + 0x1c4]
0065b92c  SUB EAX,dword ptr [EDX + 0x1bc]
0065b932  ADD EAX,0x1
0065b935  PUSH EAX
0065b936  MOV ECX,dword ptr [EBP + -0x4]
0065b939  MOV ECX,dword ptr [ECX + 0x190]
0065b93f  CALL 0x005eccb0
0065b944  MOV EDX,dword ptr [EBP + -0x4]
0065b947  MOV EAX,dword ptr [EDX]
0065b949  MOV ECX,dword ptr [EBP + -0x4]
0065b94c  MOV EDX,dword ptr [EAX + 0x54]
0065b94f  CALL EDX
0065b951  MOV ESI,EAX
0065b953  MOV EAX,dword ptr [EBP + -0x4]
0065b956  ADD ESI,dword ptr [EAX + 0x1bc]
0065b95c  MOV ECX,dword ptr [EBP + -0x4]
0065b95f  CALL 0x005eb470
0065b964  ADD ESI,EAX
0065b966  PUSH ESI
0065b967  MOV ECX,dword ptr [EBP + -0x4]
0065b96a  MOV EDX,dword ptr [ECX]
0065b96c  MOV ECX,dword ptr [EBP + -0x4]
0065b96f  MOV EAX,dword ptr [EDX + 0x4c]
0065b972  CALL EAX
0065b974  MOV ESI,EAX
0065b976  MOV ECX,dword ptr [EBP + -0x4]
0065b979  ADD ESI,dword ptr [ECX + 0x1b8]
0065b97f  MOV ECX,dword ptr [EBP + -0x4]
0065b982  CALL 0x005eb470
0065b987  ADD ESI,EAX
0065b989  PUSH ESI
0065b98a  MOV EDX,dword ptr [EBP + -0x4]
0065b98d  MOV EAX,dword ptr [EDX + 0x190]
0065b993  MOV ECX,dword ptr [EBP + -0x4]
0065b996  MOV ECX,dword ptr [ECX + 0x190]
0065b99c  MOV EDX,dword ptr [EAX]
0065b99e  MOV EAX,dword ptr [EDX + 0x44]
0065b9a1  CALL EAX
0065b9a3  JMP 0x0065ba6a
0065ba6a  POP ESI
0065ba6b  MOV ESP,EBP
0065ba6d  POP EBP
0065ba6e  RET
