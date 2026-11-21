; FUN_0068f520  0068f520
0068f520  PUSH EBP
0068f521  MOV EBP,ESP
0068f523  SUB ESP,0x10
0068f526  MOV dword ptr [EBP + -0x10],ECX
0068f529  MOV EAX,dword ptr [EBP + -0x10]
0068f52c  MOV ECX,dword ptr [EAX + 0x4]
0068f52f  MOV EDX,dword ptr [ECX + 0x4]
0068f532  PUSH EDX
0068f533  MOV ECX,dword ptr [EBP + -0x10]
0068f536  CALL 0x0068f8f0
0068f53b  MOV EAX,dword ptr [EBP + -0x10]
0068f53e  MOV ECX,dword ptr [EAX + 0x4]
0068f541  MOV EDX,dword ptr [EBP + -0x10]
0068f544  MOV EAX,dword ptr [EDX + 0x4]
0068f547  MOV dword ptr [ECX + 0x4],EAX
0068f54a  MOV ECX,dword ptr [EBP + -0x10]
0068f54d  MOV dword ptr [ECX + 0x8],0x0
0068f554  MOV EDX,dword ptr [EBP + -0x10]
0068f557  MOV EAX,dword ptr [EDX + 0x4]
0068f55a  MOV dword ptr [EBP + -0xc],EAX
0068f55d  MOV ECX,dword ptr [EBP + -0xc]
0068f560  MOV EDX,dword ptr [EBP + -0x10]
0068f563  MOV EAX,dword ptr [EDX + 0x4]
0068f566  MOV dword ptr [ECX],EAX
0068f568  MOV ECX,dword ptr [EBP + -0x10]
0068f56b  MOV EDX,dword ptr [ECX + 0x4]
0068f56e  MOV EAX,dword ptr [EBP + -0x10]
0068f571  MOV ECX,dword ptr [EAX + 0x4]
0068f574  MOV dword ptr [EDX + 0x8],ECX
0068f577  MOV ESP,EBP
0068f579  POP EBP
0068f57a  RET
