; FUN_0042c390  0042c390
0042c390  PUSH EBP
0042c391  MOV EBP,ESP
0042c393  PUSH ECX
0042c394  MOV dword ptr [EBP + -0x4],ECX
0042c397  MOV EAX,dword ptr [EBP + -0x4]
0042c39a  CMP dword ptr [EAX + 0xae4],0x0
0042c3a1  JZ 0x0042c3cc
0042c3a3  PUSH 0x0
0042c3a5  MOV ECX,dword ptr [EBP + -0x4]
0042c3a8  MOV ECX,dword ptr [ECX + 0xae4]
0042c3ae  CALL 0x005f5d50
0042c3b3  MOV EDX,dword ptr [EBP + -0x4]
0042c3b6  MOV EAX,dword ptr [EDX + 0xae4]
0042c3bc  MOV ECX,dword ptr [EBP + -0x4]
0042c3bf  MOV ECX,dword ptr [ECX + 0xae4]
0042c3c5  MOV EDX,dword ptr [EAX]
0042c3c7  MOV EAX,dword ptr [EDX + 0x70]
0042c3ca  CALL EAX
0042c3cc  MOV ECX,dword ptr [EBP + -0x4]
0042c3cf  CMP dword ptr [ECX + 0xae8],0x0
0042c3d6  JZ 0x0042c403
0042c3d8  PUSH 0x0
0042c3da  MOV EDX,dword ptr [EBP + -0x4]
0042c3dd  MOV ECX,dword ptr [EDX + 0xae8]
0042c3e3  CALL 0x005f5d50
0042c3e8  MOV EAX,dword ptr [EBP + -0x4]
0042c3eb  MOV ECX,dword ptr [EAX + 0xae8]
0042c3f1  MOV EDX,dword ptr [EBP + -0x4]
0042c3f4  MOV EAX,dword ptr [EDX + 0xae8]
0042c3fa  MOV EDX,dword ptr [ECX]
0042c3fc  MOV ECX,EAX
0042c3fe  MOV EAX,dword ptr [EDX + 0x70]
0042c401  CALL EAX
0042c403  MOV ESP,EBP
0042c405  POP EBP
0042c406  RET
