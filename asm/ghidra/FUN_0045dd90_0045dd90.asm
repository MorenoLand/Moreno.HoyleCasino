; FUN_0045dd90  0045dd90
0045dd90  PUSH EBP
0045dd91  MOV EBP,ESP
0045dd93  SUB ESP,0x8
0045dd96  MOV dword ptr [EBP + -0x8],ECX
0045dd99  MOV dword ptr [EBP + -0x4],0x0
0045dda0  JMP 0x0045ddab
0045dda2  MOV EAX,dword ptr [EBP + -0x4]
0045dda5  ADD EAX,0x1
0045dda8  MOV dword ptr [EBP + -0x4],EAX
0045ddab  CMP dword ptr [EBP + -0x4],0x5
0045ddaf  JGE 0x0045ddd7
0045ddb1  MOV ECX,dword ptr [EBP + -0x4]
0045ddb4  MOV EDX,dword ptr [0x00790740]
0045ddba  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x18]
0045ddbe  CMP EAX,dword ptr [EBP + 0x8]
0045ddc1  JZ 0x0045ddd5
0045ddc3  MOV ECX,dword ptr [EBP + -0x4]
0045ddc6  MOV EDX,dword ptr [0x00790740]
0045ddcc  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x18]
0045ddd0  CALL 0x005cd330
0045ddd5  JMP 0x0045dda2
0045ddd7  MOV ESP,EBP
0045ddd9  POP EBP
0045ddda  RET 0x4
