; FUN_0059c930  0059c930
0059c930  PUSH EBP
0059c931  MOV EBP,ESP
0059c933  SUB ESP,0xc
0059c936  MOV dword ptr [EBP + -0xc],ECX
0059c939  MOV EAX,dword ptr [EBP + 0x8]
0059c93c  MOV ECX,dword ptr [EBP + -0xc]
0059c93f  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x4]
0059c943  MOV EAX,dword ptr [EBP + 0xc]
0059c946  MOV ECX,dword ptr [EDX + EAX*0x4 + 0x8]
0059c94a  MOV dword ptr [EBP + -0x4],ECX
0059c94d  MOV EDX,dword ptr [EBP + 0xc]
0059c950  PUSH EDX
0059c951  MOV EAX,dword ptr [EBP + 0x8]
0059c954  PUSH EAX
0059c955  MOV ECX,dword ptr [0x007935d0]
0059c95b  CALL 0x005a26f0
0059c960  MOV word ptr [EBP + -0x8],AX
0059c964  MOV ECX,dword ptr [EBP + 0x8]
0059c967  PUSH ECX
0059c968  MOV ECX,dword ptr [EBP + -0xc]
0059c96b  CALL 0x0059b960
0059c970  PUSH EAX
0059c971  MOV ECX,dword ptr [EBP + -0x4]
0059c974  CALL 0x005eaf00
0059c979  MOV EDX,dword ptr [EBP + 0xc]
0059c97c  PUSH EDX
0059c97d  MOV AX,word ptr [EBP + -0x8]
0059c981  PUSH EAX
0059c982  MOV ECX,dword ptr [EBP + 0x8]
0059c985  PUSH ECX
0059c986  MOV ECX,dword ptr [EBP + -0xc]
0059c989  CALL 0x0059b8a0
0059c98e  PUSH EAX
0059c98f  MOV EDX,dword ptr [EBP + -0x4]
0059c992  MOV EAX,dword ptr [EDX]
0059c994  MOV ECX,dword ptr [EBP + -0x4]
0059c997  MOV EDX,dword ptr [EAX + 0xb0]
0059c99d  CALL EDX
0059c99f  MOV EAX,dword ptr [EBP + 0xc]
0059c9a2  PUSH EAX
0059c9a3  MOV ECX,dword ptr [EBP + 0x8]
0059c9a6  PUSH ECX
0059c9a7  MOV ECX,dword ptr [EBP + -0xc]
0059c9aa  CALL 0x0059b9f0
0059c9af  PUSH EAX
0059c9b0  MOV EDX,dword ptr [EBP + 0xc]
0059c9b3  PUSH EDX
0059c9b4  MOV EAX,dword ptr [EBP + 0x8]
0059c9b7  PUSH EAX
0059c9b8  MOV ECX,dword ptr [EBP + -0xc]
0059c9bb  CALL 0x0059b9a0
0059c9c0  PUSH EAX
0059c9c1  MOV ECX,dword ptr [EBP + -0x4]
0059c9c4  MOV EDX,dword ptr [ECX]
0059c9c6  MOV ECX,dword ptr [EBP + -0x4]
0059c9c9  MOV EAX,dword ptr [EDX + 0x44]
0059c9cc  CALL EAX
0059c9ce  MOV ECX,dword ptr [EBP + 0xc]
0059c9d1  ADD ECX,0x5
0059c9d4  PUSH ECX
0059c9d5  MOV EDX,dword ptr [EBP + -0x4]
0059c9d8  MOV EAX,dword ptr [EDX]
0059c9da  MOV ECX,dword ptr [EBP + -0x4]
0059c9dd  MOV EDX,dword ptr [EAX + 0x6c]
0059c9e0  CALL EDX
0059c9e2  MOV EAX,dword ptr [EBP + -0x4]
0059c9e5  MOV EDX,dword ptr [EAX]
0059c9e7  MOV ECX,dword ptr [EBP + -0x4]
0059c9ea  MOV EAX,dword ptr [EDX + 0x74]
0059c9ed  CALL EAX
0059c9ef  MOV ESP,EBP
0059c9f1  POP EBP
0059c9f2  RET 0x8
