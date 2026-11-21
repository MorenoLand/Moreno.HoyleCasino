; FUN_0043bb00  0043bb00
0043bb00  PUSH EBP
0043bb01  MOV EBP,ESP
0043bb03  PUSH -0x1
0043bb05  PUSH 0x69e847
0043bb0a  MOV EAX,FS:[0x0]
0043bb10  PUSH EAX
0043bb11  SUB ESP,0x10
0043bb14  MOV EAX,[0x00781870]
0043bb19  XOR EAX,EBP
0043bb1b  PUSH EAX
0043bb1c  LEA EAX,[EBP + -0xc]
0043bb1f  MOV FS:[0x0],EAX
0043bb25  MOV dword ptr [EBP + -0x1c],ECX
0043bb28  MOV ECX,dword ptr [EBP + -0x1c]
0043bb2b  CALL 0x005cb4b0
0043bb30  MOV dword ptr [EBP + -0x4],0x0
0043bb37  MOV EAX,dword ptr [EBP + -0x1c]
0043bb3a  MOV dword ptr [EAX],0x6b8084
0043bb40  MOV dword ptr [EBP + -0x10],0x0
0043bb47  JMP 0x0043bb52
0043bb49  MOV ECX,dword ptr [EBP + -0x10]
0043bb4c  ADD ECX,0x1
0043bb4f  MOV dword ptr [EBP + -0x10],ECX
0043bb52  CMP dword ptr [EBP + -0x10],0x4
0043bb56  JGE 0x0043bb86
0043bb58  PUSH 0x0
0043bb5a  PUSH 0x0
0043bb5c  CALL 0x0064c8a0
0043bb61  ADD ESP,0x8
0043bb64  MOV dword ptr [EBP + -0x18],EAX
0043bb67  MOV dword ptr [EBP + -0x14],EDX
0043bb6a  MOV EDX,dword ptr [EBP + -0x10]
0043bb6d  MOV EAX,dword ptr [EBP + -0x1c]
0043bb70  MOV ECX,dword ptr [EBP + -0x18]
0043bb73  MOV dword ptr [EAX + EDX*0x8 + 0xf0],ECX
0043bb7a  MOV ECX,dword ptr [EBP + -0x14]
0043bb7d  MOV dword ptr [EAX + EDX*0x8 + 0xf4],ECX
0043bb84  JMP 0x0043bb49
0043bb86  MOV EDX,dword ptr [EBP + -0x1c]
0043bb89  MOV dword ptr [EDX + 0x110],0xffffffff
0043bb93  MOV dword ptr [EBP + -0x4],0xffffffff
0043bb9a  MOV EAX,dword ptr [EBP + -0x1c]
0043bb9d  MOV ECX,dword ptr [EBP + -0xc]
0043bba0  MOV dword ptr FS:[0x0],ECX
0043bba7  POP ECX
0043bba8  MOV ESP,EBP
0043bbaa  POP EBP
0043bbab  RET
