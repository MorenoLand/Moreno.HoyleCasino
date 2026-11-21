; FUN_0042cbd0  0042cbd0
0042cbd0  PUSH EBP
0042cbd1  MOV EBP,ESP
0042cbd3  SUB ESP,0xc
0042cbd6  MOV dword ptr [EBP + -0xc],ECX
0042cbd9  MOV dword ptr [EBP + -0x4],0x0
0042cbe0  JMP 0x0042cbeb
0042cbe2  MOV EAX,dword ptr [EBP + -0x4]
0042cbe5  ADD EAX,0x1
0042cbe8  MOV dword ptr [EBP + -0x4],EAX
0042cbeb  CMP dword ptr [EBP + -0x4],0x5
0042cbef  JGE 0x0042cc1d
0042cbf1  MOV dword ptr [EBP + -0x8],0x0
0042cbf8  JMP 0x0042cc03
0042cbfa  MOV ECX,dword ptr [EBP + -0x8]
0042cbfd  ADD ECX,0x1
0042cc00  MOV dword ptr [EBP + -0x8],ECX
0042cc03  CMP dword ptr [EBP + -0x8],0x4
0042cc07  JGE 0x0042cc1b
0042cc09  MOV EDX,dword ptr [EBP + -0x8]
0042cc0c  PUSH EDX
0042cc0d  MOV EAX,dword ptr [EBP + -0x4]
0042cc10  PUSH EAX
0042cc11  MOV ECX,dword ptr [EBP + -0xc]
0042cc14  CALL 0x0042cad0
0042cc19  JMP 0x0042cbfa
0042cc1b  JMP 0x0042cbe2
0042cc1d  MOV ESP,EBP
0042cc1f  POP EBP
0042cc20  RET
