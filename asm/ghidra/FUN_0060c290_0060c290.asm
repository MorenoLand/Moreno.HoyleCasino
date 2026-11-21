; FUN_0060c290  0060c290
0060c290  PUSH EBP
0060c291  MOV EBP,ESP
0060c293  PUSH ECX
0060c294  MOV dword ptr [EBP + -0x4],ECX
0060c297  MOV ECX,dword ptr [EBP + -0x4]
0060c29a  CALL 0x005f62b0
0060c29f  MOV EAX,dword ptr [EBP + -0x4]
0060c2a2  CMP dword ptr [EAX + 0x1dc],0x0
0060c2a9  JZ 0x0060c2c4
0060c2ab  MOV ECX,dword ptr [EBP + -0x4]
0060c2ae  MOV EDX,dword ptr [ECX + 0x1dc]
0060c2b4  MOV EAX,dword ptr [EBP + -0x4]
0060c2b7  MOV ECX,dword ptr [EAX + 0x1dc]
0060c2bd  MOV EDX,dword ptr [EDX]
0060c2bf  MOV EAX,dword ptr [EDX + 0x70]
0060c2c2  CALL EAX
0060c2c4  MOV ECX,dword ptr [EBP + -0x4]
0060c2c7  CMP dword ptr [ECX + 0x1e4],0x0
0060c2ce  JZ 0x0060c2f5
0060c2d0  PUSH 0x0
0060c2d2  MOV EDX,dword ptr [EBP + -0x4]
0060c2d5  MOV ECX,dword ptr [EDX + 0x4]
0060c2d8  CALL 0x005f9590
0060c2dd  PUSH 0x0
0060c2df  MOV EAX,dword ptr [EBP + -0x4]
0060c2e2  MOV ECX,dword ptr [EAX + 0x1e4]
0060c2e8  CALL 0x005f5df0
0060c2ed  MOV ECX,dword ptr [EBP + -0x4]
0060c2f0  CALL 0x005f0bb0
0060c2f5  MOV ESP,EBP
0060c2f7  POP EBP
0060c2f8  RET
