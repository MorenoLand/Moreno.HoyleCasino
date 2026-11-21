; FUN_00563d30  00563d30
00563d30  PUSH EBP
00563d31  MOV EBP,ESP
00563d33  PUSH -0x1
00563d35  PUSH 0x6a5a97
00563d3a  MOV EAX,FS:[0x0]
00563d40  PUSH EAX
00563d41  SUB ESP,0xc
00563d44  MOV EAX,[0x00781870]
00563d49  XOR EAX,EBP
00563d4b  PUSH EAX
00563d4c  LEA EAX,[EBP + -0xc]
00563d4f  MOV FS:[0x0],EAX
00563d55  MOV dword ptr [EBP + -0x18],ECX
00563d58  MOV ECX,dword ptr [EBP + -0x18]
00563d5b  CALL 0x005e9e20
00563d60  MOV dword ptr [EBP + -0x4],0x0
00563d67  MOV EAX,dword ptr [EBP + -0x18]
00563d6a  MOV dword ptr [EAX],0x6c99d0
00563d70  MOV dword ptr [EBP + -0x10],0x0
00563d77  JMP 0x00563d82
00563d79  MOV ECX,dword ptr [EBP + -0x10]
00563d7c  ADD ECX,0x1
00563d7f  MOV dword ptr [EBP + -0x10],ECX
00563d82  CMP dword ptr [EBP + -0x10],0x31
00563d86  JGE 0x00563dee
00563d88  MOV EDX,dword ptr [EBP + -0x10]
00563d8b  MOV EAX,dword ptr [EBP + -0x18]
00563d8e  MOV dword ptr [EAX + EDX*0x4 + 0x4],0x0
00563d96  MOV dword ptr [EBP + -0x14],0x0
00563d9d  JMP 0x00563da8
00563d9f  MOV ECX,dword ptr [EBP + -0x14]
00563da2  ADD ECX,0x1
00563da5  MOV dword ptr [EBP + -0x14],ECX
00563da8  CMP dword ptr [EBP + -0x14],0x5
00563dac  JGE 0x00563dca
00563dae  MOV EDX,dword ptr [EBP + -0x10]
00563db1  IMUL EDX,EDX,0x14
00563db4  MOV EAX,dword ptr [EBP + -0x18]
00563db7  LEA ECX,[EAX + EDX*0x1 + 0xc8]
00563dbe  MOV EDX,dword ptr [EBP + -0x14]
00563dc1  MOV dword ptr [ECX + EDX*0x4],0x0
00563dc8  JMP 0x00563d9f
00563dca  MOV EAX,dword ptr [EBP + -0x10]
00563dcd  MOV ECX,dword ptr [EBP + -0x18]
00563dd0  MOV dword ptr [ECX + EAX*0x4 + 0x49c],0x0
00563ddb  MOV EDX,dword ptr [EBP + -0x10]
00563dde  MOV EAX,dword ptr [EBP + -0x18]
00563de1  MOV dword ptr [EAX + EDX*0x4 + 0x848],0x0
00563dec  JMP 0x00563d79
00563dee  MOV ECX,dword ptr [EBP + -0x18]
00563df1  MOV dword ptr [ECX + 0x844],0xffffffff
00563dfb  MOV EDX,dword ptr [EBP + -0x18]
00563dfe  MOV dword ptr [EDX + 0x560],0x0
00563e08  MOV ECX,dword ptr [EBP + -0x18]
00563e0b  CALL 0x00563fb0
00563e10  MOV dword ptr [EBP + -0x4],0xffffffff
00563e17  MOV EAX,dword ptr [EBP + -0x18]
00563e1a  MOV ECX,dword ptr [EBP + -0xc]
00563e1d  MOV dword ptr FS:[0x0],ECX
00563e24  POP ECX
00563e25  MOV ESP,EBP
00563e27  POP EBP
00563e28  RET
