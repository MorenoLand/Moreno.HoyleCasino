; FUN_0045ebf0  0045ebf0
0045ebf0  PUSH EBP
0045ebf1  MOV EBP,ESP
0045ebf3  PUSH -0x1
0045ebf5  PUSH 0x69f30b
0045ebfa  MOV EAX,FS:[0x0]
0045ec00  PUSH EAX
0045ec01  SUB ESP,0x14
0045ec04  MOV EAX,[0x00781870]
0045ec09  XOR EAX,EBP
0045ec0b  PUSH EAX
0045ec0c  LEA EAX,[EBP + -0xc]
0045ec0f  MOV FS:[0x0],EAX
0045ec15  MOV dword ptr [EBP + -0x1c],ECX
0045ec18  PUSH 0x84
0045ec1d  CALL 0x00686d82
0045ec22  ADD ESP,0x4
0045ec25  MOV dword ptr [EBP + -0x18],EAX
0045ec28  MOV dword ptr [EBP + -0x4],0x0
0045ec2f  CMP dword ptr [EBP + -0x18],0x0
0045ec33  JZ 0x0045ec42
0045ec35  MOV ECX,dword ptr [EBP + -0x18]
0045ec38  CALL 0x0045d1f0
0045ec3d  MOV dword ptr [EBP + -0x20],EAX
0045ec40  JMP 0x0045ec49
0045ec42  MOV dword ptr [EBP + -0x20],0x0
0045ec49  MOV EAX,dword ptr [EBP + -0x20]
0045ec4c  MOV dword ptr [EBP + -0x14],EAX
0045ec4f  MOV dword ptr [EBP + -0x4],0xffffffff
0045ec56  MOV ECX,dword ptr [EBP + -0x14]
0045ec59  MOV dword ptr [EBP + -0x10],ECX
0045ec5c  MOV EDX,dword ptr [EBP + -0x1c]
0045ec5f  MOV EAX,dword ptr [EDX + 0x4]
0045ec62  PUSH EAX
0045ec63  MOV ECX,dword ptr [EBP + -0x10]
0045ec66  CALL 0x0045e8c0
0045ec6b  MOV EAX,dword ptr [EBP + -0x10]
0045ec6e  MOV ECX,dword ptr [EBP + -0xc]
0045ec71  MOV dword ptr FS:[0x0],ECX
0045ec78  POP ECX
0045ec79  MOV ESP,EBP
0045ec7b  POP EBP
0045ec7c  RET
