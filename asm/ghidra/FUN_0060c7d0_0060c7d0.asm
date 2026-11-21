; FUN_0060c7d0  0060c7d0
0060c7d0  PUSH EBP
0060c7d1  MOV EBP,ESP
0060c7d3  PUSH ECX
0060c7d4  MOV dword ptr [EBP + -0x4],ECX
0060c7d7  MOV EAX,dword ptr [EBP + -0x4]
0060c7da  MOV ECX,dword ptr [EBP + -0x4]
0060c7dd  MOV EDX,dword ptr [EAX + 0x4]
0060c7e0  CMP EDX,dword ptr [ECX + 0x8]
0060c7e3  JNZ 0x0060c7ed
0060c7e5  MOV ECX,dword ptr [EBP + -0x4]
0060c7e8  CALL 0x0060c720
0060c7ed  MOV EAX,dword ptr [EBP + -0x4]
0060c7f0  MOV ECX,dword ptr [EAX + 0x4]
0060c7f3  SHL ECX,0x2
0060c7f6  PUSH ECX
0060c7f7  MOV EDX,dword ptr [EBP + -0x4]
0060c7fa  MOV EAX,dword ptr [EDX + 0xc]
0060c7fd  PUSH EAX
0060c7fe  MOV ECX,dword ptr [EBP + -0x4]
0060c801  MOV EDX,dword ptr [ECX + 0xc]
0060c804  ADD EDX,0x4
0060c807  PUSH EDX
0060c808  CALL dword ptr [0x006b22d8]
0060c80e  ADD ESP,0xc
0060c811  MOV EAX,dword ptr [EBP + -0x4]
0060c814  MOV ECX,dword ptr [EAX + 0xc]
0060c817  MOV EDX,dword ptr [EBP + 0x8]
0060c81a  MOV dword ptr [ECX],EDX
0060c81c  MOV EAX,dword ptr [EBP + -0x4]
0060c81f  MOV ECX,dword ptr [EAX + 0x4]
0060c822  ADD ECX,0x1
0060c825  MOV EDX,dword ptr [EBP + -0x4]
0060c828  MOV dword ptr [EDX + 0x4],ECX
0060c82b  MOV ESP,EBP
0060c82d  POP EBP
0060c82e  RET 0x4
