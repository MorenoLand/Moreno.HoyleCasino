; FUN_0062a070  0062a070
0062a070  PUSH EBP
0062a071  MOV EBP,ESP
0062a073  PUSH -0x1
0062a075  PUSH 0x6ab6a2
0062a07a  MOV EAX,FS:[0x0]
0062a080  PUSH EAX
0062a081  SUB ESP,0x1c
0062a084  MOV EAX,[0x00781870]
0062a089  XOR EAX,EBP
0062a08b  PUSH EAX
0062a08c  LEA EAX,[EBP + -0xc]
0062a08f  MOV FS:[0x0],EAX
0062a095  MOV dword ptr [EBP + -0x20],ECX
0062a098  MOV ECX,dword ptr [EBP + -0x20]
0062a09b  CALL 0x005f5010
0062a0a0  MOV EAX,dword ptr [EBP + 0x5c]
0062a0a3  PUSH EAX
0062a0a4  MOV ECX,dword ptr [EBP + -0x20]
0062a0a7  CALL 0x005f53e0
0062a0ac  MOV ECX,dword ptr [EBP + -0x20]
0062a0af  CMP dword ptr [ECX + 0x48],0x0
0062a0b3  JNZ 0x0062a0fc
0062a0b5  PUSH 0x184
0062a0ba  CALL 0x00686d82
0062a0bf  ADD ESP,0x4
0062a0c2  MOV dword ptr [EBP + -0x14],EAX
0062a0c5  MOV dword ptr [EBP + -0x4],0x0
0062a0cc  CMP dword ptr [EBP + -0x14],0x0
0062a0d0  JZ 0x0062a0df
0062a0d2  MOV ECX,dword ptr [EBP + -0x14]
0062a0d5  CALL 0x005f5bf0
0062a0da  MOV dword ptr [EBP + -0x24],EAX
0062a0dd  JMP 0x0062a0e6
0062a0df  MOV dword ptr [EBP + -0x24],0x0
0062a0e6  MOV EDX,dword ptr [EBP + -0x24]
0062a0e9  MOV dword ptr [EBP + -0x10],EDX
0062a0ec  MOV dword ptr [EBP + -0x4],0xffffffff
0062a0f3  MOV EAX,dword ptr [EBP + -0x20]
0062a0f6  MOV ECX,dword ptr [EBP + -0x10]
0062a0f9  MOV dword ptr [EAX + 0x48],ECX
0062a0fc  MOV EDX,dword ptr [EBP + -0x20]
0062a0ff  MOV EAX,dword ptr [EDX + 0x48]
0062a102  MOV ECX,dword ptr [EBP + -0x20]
0062a105  MOV EDX,dword ptr [ECX + 0x4]
0062a108  MOV dword ptr [EAX + 0x4],EDX
0062a10b  PUSH -0x1
0062a10d  MOV EAX,dword ptr [EBP + 0x14]
0062a110  PUSH EAX
0062a111  MOV ECX,dword ptr [EBP + 0x10]
0062a114  PUSH ECX
0062a115  MOV EDX,dword ptr [EBP + 0xc]
0062a118  PUSH EDX
0062a119  MOV EAX,dword ptr [EBP + 0x8]
0062a11c  PUSH EAX
0062a11d  MOV ECX,dword ptr [EBP + -0x20]
0062a120  MOV ECX,dword ptr [ECX + 0x48]
0062a123  CALL 0x005eae80
0062a128  MOV EDX,dword ptr [EBP + -0x20]
0062a12b  MOV EAX,dword ptr [EDX + 0x50]
0062a12e  MOV ECX,dword ptr [EBP + -0x20]
0062a131  MOV EDX,dword ptr [ECX + 0x4]
0062a134  MOV dword ptr [EAX + 0x4],EDX
0062a137  PUSH -0x1
0062a139  MOV EAX,dword ptr [EBP + 0x14]
0062a13c  ADD EAX,0x1
0062a13f  PUSH EAX
0062a140  MOV ECX,dword ptr [EBP + 0x10]
0062a143  ADD ECX,dword ptr [EBP + 0x20]
0062a146  PUSH ECX
0062a147  MOV EDX,dword ptr [EBP + 0xc]
0062a14a  ADD EDX,dword ptr [EBP + 0x1c]
0062a14d  PUSH EDX
0062a14e  MOV EAX,dword ptr [EBP + 0x18]
0062a151  PUSH EAX
0062a152  MOV ECX,dword ptr [EBP + -0x20]
0062a155  MOV ECX,dword ptr [ECX + 0x50]
0062a158  CALL 0x005eae80
0062a15d  MOV EDX,dword ptr [EBP + -0x20]
0062a160  MOV EAX,dword ptr [EDX + 0x4c]
0062a163  MOV ECX,dword ptr [EBP + -0x20]
0062a166  MOV EDX,dword ptr [ECX + 0x4]
0062a169  MOV dword ptr [EAX + 0x4],EDX
0062a16c  PUSH -0x1
0062a16e  MOV EAX,dword ptr [EBP + 0x14]
0062a171  ADD EAX,0x1
0062a174  PUSH EAX
0062a175  MOV ECX,dword ptr [EBP + 0x10]
0062a178  ADD ECX,dword ptr [EBP + 0x2c]
0062a17b  PUSH ECX
0062a17c  MOV EDX,dword ptr [EBP + 0xc]
0062a17f  ADD EDX,dword ptr [EBP + 0x28]
0062a182  PUSH EDX
0062a183  MOV EAX,dword ptr [EBP + 0x24]
0062a186  PUSH EAX
0062a187  MOV ECX,dword ptr [EBP + -0x20]
0062a18a  MOV ECX,dword ptr [ECX + 0x4c]
0062a18d  CALL 0x005eae80
0062a192  MOV EDX,dword ptr [EBP + -0x20]
0062a195  CMP dword ptr [EDX + 0x54],0x0
0062a199  JNZ 0x0062a1e2
0062a19b  PUSH 0x1d0
0062a1a0  CALL 0x00686d82
0062a1a5  ADD ESP,0x4
0062a1a8  MOV dword ptr [EBP + -0x1c],EAX
0062a1ab  MOV dword ptr [EBP + -0x4],0x1
0062a1b2  CMP dword ptr [EBP + -0x1c],0x0
0062a1b6  JZ 0x0062a1c5
0062a1b8  MOV ECX,dword ptr [EBP + -0x1c]
0062a1bb  CALL 0x005ec5a0
0062a1c0  MOV dword ptr [EBP + -0x28],EAX
0062a1c3  JMP 0x0062a1cc
0062a1c5  MOV dword ptr [EBP + -0x28],0x0
0062a1cc  MOV EAX,dword ptr [EBP + -0x28]
0062a1cf  MOV dword ptr [EBP + -0x18],EAX
0062a1d2  MOV dword ptr [EBP + -0x4],0xffffffff
0062a1d9  MOV ECX,dword ptr [EBP + -0x20]
0062a1dc  MOV EDX,dword ptr [EBP + -0x18]
0062a1df  MOV dword ptr [ECX + 0x54],EDX
0062a1e2  MOV EAX,dword ptr [EBP + -0x20]
0062a1e5  MOV ECX,dword ptr [EAX + 0x54]
0062a1e8  MOV EDX,dword ptr [EBP + -0x20]
0062a1eb  MOV EAX,dword ptr [EDX + 0x4]
0062a1ee  MOV dword ptr [ECX + 0x4],EAX
0062a1f1  PUSH -0x1
0062a1f3  MOV ECX,dword ptr [EBP + 0x58]
0062a1f6  PUSH ECX
0062a1f7  MOV EDX,dword ptr [EBP + 0x14]
0062a1fa  ADD EDX,0x1
0062a1fd  PUSH EDX
0062a1fe  MOV EAX,dword ptr [EBP + 0x10]
0062a201  ADD EAX,dword ptr [EBP + 0x48]
0062a204  PUSH EAX
0062a205  MOV ECX,dword ptr [EBP + 0xc]
0062a208  ADD ECX,dword ptr [EBP + 0x44]
0062a20b  PUSH ECX
0062a20c  MOV EDX,dword ptr [EBP + 0x40]
0062a20f  PUSH EDX
0062a210  MOV EAX,dword ptr [EBP + 0x3c]
0062a213  PUSH EAX
0062a214  MOV ECX,dword ptr [EBP + 0x34]
0062a217  PUSH ECX
0062a218  MOV EDX,dword ptr [EBP + 0x30]
0062a21b  PUSH EDX
0062a21c  MOV EAX,dword ptr [EBP + -0x20]
0062a21f  MOV ECX,dword ptr [EAX + 0x54]
0062a222  CALL 0x005ec8f0
0062a227  MOV ECX,dword ptr [EBP + -0x20]
0062a22a  MOV EDX,dword ptr [EBP + 0x34]
0062a22d  MOV dword ptr [ECX + 0x68],EDX
0062a230  MOV EAX,dword ptr [EBP + -0x20]
0062a233  MOV ECX,dword ptr [EBP + 0x38]
0062a236  MOV dword ptr [EAX + 0x6c],ECX
0062a239  MOV EDX,dword ptr [EBP + -0x20]
0062a23c  MOV EAX,dword ptr [EBP + 0x4c]
0062a23f  MOV dword ptr [EDX + 0x5c],EAX
0062a242  MOV ECX,dword ptr [EBP + -0x20]
0062a245  MOV EDX,dword ptr [EBP + 0x50]
0062a248  MOV dword ptr [ECX + 0x60],EDX
0062a24b  MOV EAX,dword ptr [EBP + -0x20]
0062a24e  MOV ECX,dword ptr [EBP + 0x54]
0062a251  MOV dword ptr [EAX + 0x64],ECX
0062a254  MOV EDX,dword ptr [EBP + -0x20]
0062a257  MOV EAX,dword ptr [EBP + -0x20]
0062a25a  MOV ECX,dword ptr [EAX + 0x5c]
0062a25d  MOV dword ptr [EDX + 0x58],ECX
0062a260  MOV ECX,dword ptr [EBP + -0xc]
0062a263  MOV dword ptr FS:[0x0],ECX
0062a26a  POP ECX
0062a26b  MOV ESP,EBP
0062a26d  POP EBP
0062a26e  RET 0x58
