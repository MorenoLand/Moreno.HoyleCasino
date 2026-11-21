; FUN_0043bcd0  0043bcd0
0043bcd0  PUSH EBP
0043bcd1  MOV EBP,ESP
0043bcd3  SUB ESP,0xc
0043bcd6  MOV dword ptr [EBP + -0xc],ECX
0043bcd9  CMP dword ptr [EBP + 0x8],0x3
0043bcdd  JLE 0x0043bce1
0043bcdf  JMP 0x0043bd1d
0043bce1  MOV EAX,dword ptr [EBP + 0xc]
0043bce4  PUSH EAX
0043bce5  MOV ECX,dword ptr [EBP + 0x8]
0043bce8  PUSH ECX
0043bce9  MOV ECX,dword ptr [EBP + -0xc]
0043bcec  CALL 0x005cb780
0043bcf1  PUSH 0x0
0043bcf3  PUSH 0x0
0043bcf5  CALL 0x0064c8a0
0043bcfa  ADD ESP,0x8
0043bcfd  MOV dword ptr [EBP + -0x8],EAX
0043bd00  MOV dword ptr [EBP + -0x4],EDX
0043bd03  MOV EDX,dword ptr [EBP + 0x8]
0043bd06  MOV EAX,dword ptr [EBP + -0xc]
0043bd09  MOV ECX,dword ptr [EBP + -0x8]
0043bd0c  MOV dword ptr [EAX + EDX*0x8 + 0xf0],ECX
0043bd13  MOV ECX,dword ptr [EBP + -0x4]
0043bd16  MOV dword ptr [EAX + EDX*0x8 + 0xf4],ECX
0043bd1d  MOV ESP,EBP
0043bd1f  POP EBP
0043bd20  RET 0x8
