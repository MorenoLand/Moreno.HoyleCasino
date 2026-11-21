; FUN_0042d890  0042d890
0042d890  PUSH EBP
0042d891  MOV EBP,ESP
0042d893  SUB ESP,0xc
0042d896  MOV dword ptr [EBP + -0xc],ECX
0042d899  MOV dword ptr [EBP + -0x8],0xfc5
0042d8a0  MOV dword ptr [EBP + -0x4],0xfc7
0042d8a7  MOV EAX,dword ptr [EBP + -0xc]
0042d8aa  MOV ECX,dword ptr [EAX + 0x20]
0042d8ad  MOV EDX,dword ptr [EBP + ECX*0x4 + -0x8]
0042d8b1  PUSH EDX
0042d8b2  MOV EAX,dword ptr [EBP + -0xc]
0042d8b5  MOV ECX,dword ptr [EAX + 0x20]
0042d8b8  MOV EDX,dword ptr [0x007906dc]
0042d8be  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x148]
0042d8c5  CALL 0x005eaf00
0042d8ca  MOV EAX,[0x007906dc]
0042d8cf  MOV ECX,dword ptr [EAX + 0x164]
0042d8d5  CALL 0x005f54a0
0042d8da  MOVZX ECX,AL
0042d8dd  TEST ECX,ECX
0042d8df  JZ 0x0042d914
0042d8e1  PUSH 0x5
0042d8e3  MOV EDX,dword ptr [EBP + -0xc]
0042d8e6  MOV EAX,dword ptr [EDX + 0x20]
0042d8e9  MOV ECX,dword ptr [0x007906dc]
0042d8ef  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x148]
0042d8f6  MOV EAX,dword ptr [EBP + -0xc]
0042d8f9  MOV ECX,dword ptr [EAX + 0x20]
0042d8fc  MOV EAX,[0x007906dc]
0042d901  MOV ECX,dword ptr [EAX + ECX*0x4 + 0x148]
0042d908  MOV EDX,dword ptr [EDX]
0042d90a  MOV EAX,dword ptr [EDX + 0xb0]
0042d910  CALL EAX
0042d912  JMP 0x0042d947
0042d914  PUSH 0x0
0042d916  MOV ECX,dword ptr [EBP + -0xc]
0042d919  MOV EDX,dword ptr [ECX + 0x20]
0042d91c  MOV EAX,[0x007906dc]
0042d921  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x148]
0042d928  MOV EDX,dword ptr [EBP + -0xc]
0042d92b  MOV EAX,dword ptr [EDX + 0x20]
0042d92e  MOV EDX,dword ptr [0x007906dc]
0042d934  MOV EAX,dword ptr [EDX + EAX*0x4 + 0x148]
0042d93b  MOV EDX,dword ptr [ECX]
0042d93d  MOV ECX,EAX
0042d93f  MOV EAX,dword ptr [EDX + 0xb0]
0042d945  CALL EAX
0042d947  MOV ECX,dword ptr [EBP + -0xc]
0042d94a  MOV EDX,dword ptr [ECX + 0x20]
0042d94d  MOV EAX,[0x007906dc]
0042d952  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x148]
0042d959  MOV EDX,dword ptr [EBP + -0xc]
0042d95c  MOV EAX,dword ptr [EDX + 0x20]
0042d95f  MOV EDX,dword ptr [0x007906dc]
0042d965  MOV EAX,dword ptr [EDX + EAX*0x4 + 0x148]
0042d96c  MOV EDX,dword ptr [ECX]
0042d96e  MOV ECX,EAX
0042d970  MOV EAX,dword ptr [EDX + 0x74]
0042d973  CALL EAX
0042d975  PUSH 0x0
0042d977  MOV ECX,dword ptr [EBP + 0x8]
0042d97a  PUSH ECX
0042d97b  MOV ECX,dword ptr [EBP + -0xc]
0042d97e  CALL 0x006010d0
0042d983  MOV ESP,EBP
0042d985  POP EBP
0042d986  RET 0x8
