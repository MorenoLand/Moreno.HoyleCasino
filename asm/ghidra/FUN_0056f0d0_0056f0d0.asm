; FUN_0056f0d0  0056f0d0
0056f0d0  PUSH EBP
0056f0d1  MOV EBP,ESP
0056f0d3  SUB ESP,0xc
0056f0d6  MOV dword ptr [EBP + -0xc],ECX
0056f0d9  MOV dword ptr [EBP + -0x8],0x1
0056f0e0  MOV dword ptr [EBP + -0x4],0x0
0056f0e7  JMP 0x0056f0f2
0056f0e9  MOV EAX,dword ptr [EBP + -0x4]
0056f0ec  ADD EAX,0x1
0056f0ef  MOV dword ptr [EBP + -0x4],EAX
0056f0f2  CMP dword ptr [EBP + -0x4],0x4
0056f0f6  JGE 0x0056f11c
0056f0f8  MOV ECX,dword ptr [EBP + -0x4]
0056f0fb  MOV EDX,dword ptr [EBP + -0xc]
0056f0fe  CMP dword ptr [EDX + ECX*0x4 + 0xac],0x1
0056f106  JZ 0x0056f11a
0056f108  MOV EAX,dword ptr [EBP + -0x4]
0056f10b  MOV ECX,dword ptr [EBP + -0xc]
0056f10e  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xac]
0056f115  MOV dword ptr [EBP + -0x8],EDX
0056f118  JMP 0x0056f11c
0056f11a  JMP 0x0056f0e9
0056f11c  MOV EAX,dword ptr [EBP + -0x8]
0056f11f  MOV ESP,EBP
0056f121  POP EBP
0056f122  RET
