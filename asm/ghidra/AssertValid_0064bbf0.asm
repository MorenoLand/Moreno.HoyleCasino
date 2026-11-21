; AssertValid  0064bbf0
0064bbf0  PUSH EBP
0064bbf1  MOV EBP,ESP
0064bbf3  PUSH ECX
0064bbf4  MOV dword ptr [EBP + -0x4],ECX
0064bbf7  MOV ECX,dword ptr [EBP + -0x4]
0064bbfa  CALL 0x005eb5a0
0064bbff  MOV EAX,dword ptr [EBP + -0x4]
0064bc02  CMP dword ptr [EAX + 0x180],0x0
0064bc09  JZ 0x0064bc24
0064bc0b  MOV ECX,dword ptr [EBP + -0x4]
0064bc0e  MOV EDX,dword ptr [ECX + 0x180]
0064bc14  MOV EAX,dword ptr [EBP + -0x4]
0064bc17  MOV ECX,dword ptr [EAX + 0x180]
0064bc1d  MOV EDX,dword ptr [EDX]
0064bc1f  MOV EAX,dword ptr [EDX + 0x70]
0064bc22  CALL EAX
0064bc24  MOV ECX,dword ptr [EBP + -0x4]
0064bc27  CMP dword ptr [ECX + 0x17c],0x0
0064bc2e  JZ 0x0064bc49
0064bc30  MOV EDX,dword ptr [EBP + -0x4]
0064bc33  MOV EAX,dword ptr [EDX + 0x17c]
0064bc39  MOV ECX,dword ptr [EBP + -0x4]
0064bc3c  MOV ECX,dword ptr [ECX + 0x17c]
0064bc42  MOV EDX,dword ptr [EAX]
0064bc44  MOV EAX,dword ptr [EDX + 0x70]
0064bc47  CALL EAX
0064bc49  MOV ESP,EBP
0064bc4b  POP EBP
0064bc4c  RET
