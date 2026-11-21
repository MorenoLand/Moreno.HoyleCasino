; FUN_0062a380  0062a380
0062a380  PUSH EBP
0062a381  MOV EBP,ESP
0062a383  PUSH ECX
0062a384  MOV dword ptr [EBP + -0x4],ECX
0062a387  MOV EAX,dword ptr [EBP + 0x8]
0062a38a  PUSH EAX
0062a38b  MOV ECX,dword ptr [EBP + -0x4]
0062a38e  CALL 0x005f5300
0062a393  MOV ECX,dword ptr [EBP + -0x4]
0062a396  CMP dword ptr [ECX + 0x48],0x0
0062a39a  JZ 0x0062a3b5
0062a39c  MOV EDX,dword ptr [EBP + 0x8]
0062a39f  PUSH EDX
0062a3a0  MOV EAX,dword ptr [EBP + -0x4]
0062a3a3  MOV ECX,dword ptr [EAX + 0x48]
0062a3a6  MOV EDX,dword ptr [EBP + -0x4]
0062a3a9  MOV EAX,dword ptr [EDX + 0x48]
0062a3ac  MOV EDX,dword ptr [ECX]
0062a3ae  MOV ECX,EAX
0062a3b0  MOV EAX,dword ptr [EDX + 0x6c]
0062a3b3  CALL EAX
0062a3b5  MOV ECX,dword ptr [EBP + 0x8]
0062a3b8  ADD ECX,0x1
0062a3bb  PUSH ECX
0062a3bc  MOV EDX,dword ptr [EBP + -0x4]
0062a3bf  MOV EAX,dword ptr [EDX + 0x4c]
0062a3c2  MOV ECX,dword ptr [EBP + -0x4]
0062a3c5  MOV ECX,dword ptr [ECX + 0x4c]
0062a3c8  MOV EDX,dword ptr [EAX]
0062a3ca  MOV EAX,dword ptr [EDX + 0x6c]
0062a3cd  CALL EAX
0062a3cf  MOV ECX,dword ptr [EBP + 0x8]
0062a3d2  ADD ECX,0x1
0062a3d5  PUSH ECX
0062a3d6  MOV EDX,dword ptr [EBP + -0x4]
0062a3d9  MOV EAX,dword ptr [EDX + 0x50]
0062a3dc  MOV ECX,dword ptr [EBP + -0x4]
0062a3df  MOV ECX,dword ptr [ECX + 0x50]
0062a3e2  MOV EDX,dword ptr [EAX]
0062a3e4  MOV EAX,dword ptr [EDX + 0x6c]
0062a3e7  CALL EAX
0062a3e9  MOV ECX,dword ptr [EBP + -0x4]
0062a3ec  CMP dword ptr [ECX + 0x54],0x0
0062a3f0  JZ 0x0062a40e
0062a3f2  MOV EDX,dword ptr [EBP + 0x8]
0062a3f5  ADD EDX,0x1
0062a3f8  PUSH EDX
0062a3f9  MOV EAX,dword ptr [EBP + -0x4]
0062a3fc  MOV ECX,dword ptr [EAX + 0x54]
0062a3ff  MOV EDX,dword ptr [EBP + -0x4]
0062a402  MOV EAX,dword ptr [EDX + 0x54]
0062a405  MOV EDX,dword ptr [ECX]
0062a407  MOV ECX,EAX
0062a409  MOV EAX,dword ptr [EDX + 0x6c]
0062a40c  CALL EAX
0062a40e  MOV ESP,EBP
0062a410  POP EBP
0062a411  RET 0x4
