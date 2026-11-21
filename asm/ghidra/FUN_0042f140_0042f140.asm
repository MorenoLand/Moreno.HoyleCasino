; FUN_0042f140  0042f140
0042f140  PUSH EBP
0042f141  MOV EBP,ESP
0042f143  PUSH ECX
0042f144  MOV dword ptr [EBP + -0x4],ECX
0042f147  MOV EAX,dword ptr [EBP + -0x4]
0042f14a  MOV byte ptr [EAX + 0x5],0x0
0042f14e  MOV ECX,dword ptr [EBP + -0x4]
0042f151  MOV byte ptr [ECX + 0x6],0x0
0042f155  MOV EDX,dword ptr [EBP + -0x4]
0042f158  MOV byte ptr [EDX + 0x7],0x0
0042f15c  MOV EAX,dword ptr [EBP + -0x4]
0042f15f  MOV byte ptr [EAX + 0x8],0x0
0042f163  MOV ECX,dword ptr [EBP + -0x4]
0042f166  MOV byte ptr [ECX + 0x9],0x0
0042f16a  MOV EDX,dword ptr [EBP + -0x4]
0042f16d  MOV byte ptr [EDX + 0xa],0x0
0042f171  MOV EAX,dword ptr [EBP + -0x4]
0042f174  MOV byte ptr [EAX + 0xb],0x0
0042f178  MOV ECX,dword ptr [EBP + -0x4]
0042f17b  MOV byte ptr [ECX + 0xc],0x0
0042f17f  MOV EDX,dword ptr [EBP + -0x4]
0042f182  MOV byte ptr [EDX + 0xd],0x0
0042f186  MOV EAX,dword ptr [EBP + -0x4]
0042f189  MOV byte ptr [EAX + 0xe],0x0
0042f18d  MOV ECX,dword ptr [EBP + -0x4]
0042f190  MOV byte ptr [ECX + 0xf],0x0
0042f194  MOV EDX,dword ptr [EBP + -0x4]
0042f197  MOV byte ptr [EDX + 0x10],0x0
0042f19b  MOV EAX,dword ptr [EBP + -0x4]
0042f19e  MOV byte ptr [EAX + 0x11],0x0
0042f1a2  MOV ECX,dword ptr [EBP + -0x4]
0042f1a5  MOV byte ptr [ECX + 0x12],0x0
0042f1a9  MOV EDX,dword ptr [EBP + -0x4]
0042f1ac  MOV byte ptr [EDX + 0x13],0x0
0042f1b0  MOV EAX,dword ptr [EBP + -0x4]
0042f1b3  MOV byte ptr [EAX + 0x14],0x0
0042f1b7  MOV ECX,dword ptr [EBP + -0x4]
0042f1ba  MOV byte ptr [ECX + 0x15],0x0
0042f1be  MOV EDX,dword ptr [EBP + -0x4]
0042f1c1  MOV byte ptr [EDX + 0x16],0x0
0042f1c5  MOV EAX,dword ptr [EBP + -0x4]
0042f1c8  MOV byte ptr [EAX + 0x17],0x0
0042f1cc  CMP dword ptr [EBP + 0x8],0x0
0042f1d0  JNZ 0x0042f1fe
0042f1d2  MOV ECX,dword ptr [0x007906d4]
0042f1d8  CALL 0x00434620
0042f1dd  MOV ECX,dword ptr [EBP + 0x8]
0042f1e0  PUSH ECX
0042f1e1  PUSH 0x1
0042f1e3  MOV EDX,dword ptr [0x007906d0]
0042f1e9  MOV EAX,dword ptr [EDX + 0x4]
0042f1ec  MOV ECX,dword ptr [0x007906d0]
0042f1f2  MOV ECX,dword ptr [ECX + 0x4]
0042f1f5  MOV EDX,dword ptr [EAX]
0042f1f7  MOV EAX,dword ptr [EDX + 0x8]
0042f1fa  CALL EAX
0042f1fc  JMP 0x0042f220
0042f1fe  MOV ECX,dword ptr [EBP + 0x8]
0042f201  PUSH ECX
0042f202  PUSH 0x1f4
0042f207  MOV EDX,dword ptr [0x007906d0]
0042f20d  MOV EAX,dword ptr [EDX + 0x4]
0042f210  MOV ECX,dword ptr [0x007906d0]
0042f216  MOV ECX,dword ptr [ECX + 0x4]
0042f219  MOV EDX,dword ptr [EAX]
0042f21b  MOV EAX,dword ptr [EDX + 0x8]
0042f21e  CALL EAX
0042f220  MOV ESP,EBP
0042f222  POP EBP
0042f223  RET 0x4
