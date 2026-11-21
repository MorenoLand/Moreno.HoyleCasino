; FUN_0058b140  0058b140
0058b140  PUSH EBP
0058b141  MOV EBP,ESP
0058b143  SUB ESP,0x8
0058b146  MOV dword ptr [EBP + -0x8],ECX
0058b149  MOV ECX,dword ptr [EBP + -0x8]
0058b14c  CALL 0x005eaaf0
0058b151  MOV EAX,dword ptr [EBP + -0x8]
0058b154  MOV dword ptr [EAX],0x6cd28c
0058b15a  MOV ECX,dword ptr [EBP + -0x8]
0058b15d  MOV dword ptr [ECX + 0x178],0x0
0058b167  MOV EDX,dword ptr [EBP + -0x8]
0058b16a  MOV dword ptr [EDX + 0x224],0x0
0058b174  MOV dword ptr [EBP + -0x4],0x0
0058b17b  JMP 0x0058b186
0058b17d  MOV EAX,dword ptr [EBP + -0x4]
0058b180  ADD EAX,0x1
0058b183  MOV dword ptr [EBP + -0x4],EAX
0058b186  CMP dword ptr [EBP + -0x4],0x15
0058b18a  JGE 0x0058b1b0
0058b18c  MOV ECX,dword ptr [EBP + -0x4]
0058b18f  MOV EDX,dword ptr [EBP + -0x8]
0058b192  MOV dword ptr [EDX + ECX*0x4 + 0x17c],0x0
0058b19d  MOV EAX,dword ptr [EBP + -0x4]
0058b1a0  MOV ECX,dword ptr [EBP + -0x8]
0058b1a3  MOV dword ptr [ECX + EAX*0x4 + 0x1d0],0x0
0058b1ae  JMP 0x0058b17d
0058b1b0  MOV EAX,dword ptr [EBP + -0x8]
0058b1b3  MOV ESP,EBP
0058b1b5  POP EBP
0058b1b6  RET
