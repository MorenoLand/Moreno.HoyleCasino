; FUN_0044c670  0044c670
0044c670  PUSH EBP
0044c671  MOV EBP,ESP
0044c673  SUB ESP,0x8
0044c676  MOV dword ptr [EBP + -0x8],ECX
0044c679  MOV ECX,dword ptr [EBP + -0x8]
0044c67c  CALL 0x005e9e20
0044c681  MOV EAX,dword ptr [EBP + -0x8]
0044c684  MOV dword ptr [EAX],0x6b9328
0044c68a  MOV ECX,dword ptr [EBP + -0x8]
0044c68d  MOV dword ptr [ECX + 0x4],0x0
0044c694  MOV dword ptr [EBP + -0x4],0x0
0044c69b  JMP 0x0044c6a6
0044c69d  MOV EDX,dword ptr [EBP + -0x4]
0044c6a0  ADD EDX,0x1
0044c6a3  MOV dword ptr [EBP + -0x4],EDX
0044c6a6  CMP dword ptr [EBP + -0x4],0xc
0044c6aa  JGE 0x0044c6bc
0044c6ac  MOV EAX,dword ptr [EBP + -0x4]
0044c6af  MOV ECX,dword ptr [EBP + -0x8]
0044c6b2  MOV dword ptr [ECX + EAX*0x4 + 0x8],0x0
0044c6ba  JMP 0x0044c69d
0044c6bc  MOV EAX,dword ptr [EBP + -0x8]
0044c6bf  MOV ESP,EBP
0044c6c1  POP EBP
0044c6c2  RET
