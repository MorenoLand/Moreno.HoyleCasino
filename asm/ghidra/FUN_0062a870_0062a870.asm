; FUN_0062a870  0062a870
0062a870  PUSH EBP
0062a871  MOV EBP,ESP
0062a873  PUSH -0x1
0062a875  PUSH 0x6ab6c8
0062a87a  MOV EAX,FS:[0x0]
0062a880  PUSH EAX
0062a881  SUB ESP,0x8
0062a884  MOV EAX,[0x00781870]
0062a889  XOR EAX,EBP
0062a88b  PUSH EAX
0062a88c  LEA EAX,[EBP + -0xc]
0062a88f  MOV FS:[0x0],EAX
0062a895  MOV dword ptr [EBP + -0x14],ECX
0062a898  MOV ECX,dword ptr [EBP + -0x14]
0062a89b  CALL 0x0062aea0
0062a8a0  MOV dword ptr [EBP + -0x4],0x0
0062a8a7  MOV EAX,dword ptr [EBP + -0x14]
0062a8aa  MOV dword ptr [EAX],0x6d96d8
0062a8b0  MOV ECX,dword ptr [EBP + -0x14]
0062a8b3  MOV dword ptr [ECX + 0x8],0x0
0062a8ba  MOV EDX,dword ptr [EBP + -0x14]
0062a8bd  MOV dword ptr [EDX + 0x10],0xa
0062a8c4  PUSH 0x28
0062a8c6  CALL 0x00686d82
0062a8cb  ADD ESP,0x4
0062a8ce  MOV dword ptr [EBP + -0x10],EAX
0062a8d1  MOV EAX,dword ptr [EBP + -0x14]
0062a8d4  MOV ECX,dword ptr [EBP + -0x10]
0062a8d7  MOV dword ptr [EAX + 0xc],ECX
0062a8da  MOV EDX,dword ptr [EBP + -0x14]
0062a8dd  MOV dword ptr [EDX + 0x1c],0x0
0062a8e4  MOV dword ptr [EBP + -0x4],0xffffffff
0062a8eb  MOV EAX,dword ptr [EBP + -0x14]
0062a8ee  MOV ECX,dword ptr [EBP + -0xc]
0062a8f1  MOV dword ptr FS:[0x0],ECX
0062a8f8  POP ECX
0062a8f9  MOV ESP,EBP
0062a8fb  POP EBP
0062a8fc  RET
