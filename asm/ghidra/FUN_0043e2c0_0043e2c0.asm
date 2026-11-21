; FUN_0043e2c0  0043e2c0
0043e2c0  PUSH EBP
0043e2c1  MOV EBP,ESP
0043e2c3  SUB ESP,0x8
0043e2c6  MOV dword ptr [EBP + -0x8],ECX
0043e2c9  PUSH 0x0
0043e2cb  MOV ECX,dword ptr [EBP + -0x8]
0043e2ce  CALL 0x005fc0d0
0043e2d3  MOV EAX,dword ptr [EBP + -0x8]
0043e2d6  MOV dword ptr [EAX],0x6b82dc
0043e2dc  MOV dword ptr [EBP + -0x4],0x0
0043e2e3  JMP 0x0043e2ee
0043e2e5  MOV ECX,dword ptr [EBP + -0x4]
0043e2e8  ADD ECX,0x1
0043e2eb  MOV dword ptr [EBP + -0x4],ECX
0043e2ee  CMP dword ptr [EBP + -0x4],0xa
0043e2f2  JGE 0x0043e304
0043e2f4  MOV EDX,dword ptr [EBP + -0x4]
0043e2f7  MOV EAX,dword ptr [EBP + -0x8]
0043e2fa  MOV dword ptr [EAX + EDX*0x4 + 0x20],0x0
0043e302  JMP 0x0043e2e5
0043e304  MOV EAX,dword ptr [EBP + -0x8]
0043e307  MOV ESP,EBP
0043e309  POP EBP
0043e30a  RET
