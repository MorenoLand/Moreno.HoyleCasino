; FUN_0043f1b0  0043f1b0
0043f1b0  PUSH EBP
0043f1b1  MOV EBP,ESP
0043f1b3  SUB ESP,0x10
0043f1b6  MOV dword ptr [EBP + -0x10],0x0
0043f1bd  JMP 0x0043f1c8
0043f1bf  MOV EAX,dword ptr [EBP + -0x10]
0043f1c2  ADD EAX,0x1
0043f1c5  MOV dword ptr [EBP + -0x10],EAX
0043f1c8  CMP dword ptr [EBP + -0x10],0xa
0043f1cc  JGE 0x0043f1de
0043f1ce  MOV ECX,dword ptr [EBP + -0x10]
0043f1d1  MOV EDX,dword ptr [EBP + 0x8]
0043f1d4  MOV dword ptr [EDX + ECX*0x4 + 0x20],0x0
0043f1dc  JMP 0x0043f1bf
0043f1de  MOV dword ptr [EBP + -0x4],0x0
0043f1e5  MOV EAX,dword ptr [EBP + 0xc]
0043f1e8  MOV dword ptr [EBP + -0xc],EAX
0043f1eb  LEA ECX,[EBP + 0x10]
0043f1ee  MOV dword ptr [EBP + -0x8],ECX
0043f1f1  CMP dword ptr [EBP + -0xc],-0x1
0043f1f5  JZ 0x0043f227
0043f1f7  CMP dword ptr [EBP + -0x4],0xa
0043f1fb  JGE 0x0043f227
0043f1fd  MOV EDX,dword ptr [EBP + -0x4]
0043f200  MOV EAX,dword ptr [EBP + 0x8]
0043f203  MOV ECX,dword ptr [EBP + -0xc]
0043f206  MOV dword ptr [EAX + EDX*0x4 + 0x20],ECX
0043f20a  MOV EDX,dword ptr [EBP + -0x4]
0043f20d  ADD EDX,0x1
0043f210  MOV dword ptr [EBP + -0x4],EDX
0043f213  MOV EAX,dword ptr [EBP + -0x8]
0043f216  ADD EAX,0x4
0043f219  MOV dword ptr [EBP + -0x8],EAX
0043f21c  MOV ECX,dword ptr [EBP + -0x8]
0043f21f  MOV EDX,dword ptr [ECX + -0x4]
0043f222  MOV dword ptr [EBP + -0xc],EDX
0043f225  JMP 0x0043f1f1
0043f227  MOV dword ptr [EBP + -0x8],0x0
0043f22e  MOV ESP,EBP
0043f230  POP EBP
0043f231  RET
