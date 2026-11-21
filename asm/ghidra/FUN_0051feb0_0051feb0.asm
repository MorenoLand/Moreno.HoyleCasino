; FUN_0051feb0  0051feb0
0051feb0  PUSH EBP
0051feb1  MOV EBP,ESP
0051feb3  SUB ESP,0xc
0051feb6  MOV dword ptr [EBP + -0x8],ECX
0051feb9  MOV EAX,dword ptr [EBP + 0xc]
0051febc  MOV dword ptr [EBP + -0xc],EAX
0051febf  MOV ECX,dword ptr [EBP + -0xc]
0051fec2  SUB ECX,0x186a1
0051fec8  MOV dword ptr [EBP + -0xc],ECX
0051fecb  CMP dword ptr [EBP + -0xc],0x36
0051fecf  JA 0x0051ffa2
0051fed5  MOV EDX,dword ptr [EBP + -0xc]
0051fed8  MOVZX EAX,byte ptr [EDX + 0x51ffcc]
0051fedf  JMP dword ptr [EAX*0x4 + 0x51ffb8]
0051ffa2  MOV EAX,dword ptr [EBP + 0xc]
0051ffa5  PUSH EAX
0051ffa6  MOV ECX,dword ptr [EBP + 0x8]
0051ffa9  PUSH ECX
0051ffaa  MOV ECX,dword ptr [EBP + -0x8]
0051ffad  CALL 0x005d8670
0051ffb2  MOV ESP,EBP
0051ffb4  POP EBP
0051ffb5  RET 0x8
