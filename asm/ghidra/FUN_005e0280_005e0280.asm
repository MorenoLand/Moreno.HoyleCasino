; FUN_005e0280  005e0280
005e0280  PUSH EBP
005e0281  MOV EBP,ESP
005e0283  SUB ESP,0x5c
005e0286  MOV dword ptr [EBP + -0x8],ECX
005e0289  MOV dword ptr [EBP + -0x4],0x1
005e0290  JMP 0x005e029b
005e0292  MOV EAX,dword ptr [EBP + -0x4]
005e0295  ADD EAX,0x1
005e0298  MOV dword ptr [EBP + -0x4],EAX
005e029b  CMP dword ptr [EBP + -0x4],0x13
005e029f  JGE 0x005e02bf
005e02a1  MOV ECX,dword ptr [EBP + -0x4]
005e02a4  PUSH ECX
005e02a5  MOV ECX,dword ptr [EBP + 0x8]
005e02a8  CALL 0x005fb550
005e02ad  MOV dword ptr [EBP + -0xc],EAX
005e02b0  MOV EDX,dword ptr [EBP + -0xc]
005e02b3  MOV EAX,dword ptr [EDX]
005e02b5  MOV ECX,dword ptr [EBP + -0xc]
005e02b8  MOV EDX,dword ptr [EAX + 0x70]
005e02bb  CALL EDX
005e02bd  JMP 0x005e0292
005e02bf  MOV dword ptr [EBP + -0x4],0x0
005e02c6  JMP 0x005e02d1
005e02c8  MOV EAX,dword ptr [EBP + -0x4]
005e02cb  ADD EAX,0x1
005e02ce  MOV dword ptr [EBP + -0x4],EAX
005e02d1  CMP dword ptr [EBP + -0x4],0x4
005e02d5  JGE 0x005e02f5
005e02d7  MOV ECX,dword ptr [EBP + -0x4]
005e02da  PUSH ECX
005e02db  MOV ECX,dword ptr [EBP + 0x8]
005e02de  CALL 0x005fb2b0
005e02e3  MOV dword ptr [EBP + -0x10],EAX
005e02e6  MOV EDX,dword ptr [EBP + -0x10]
005e02e9  MOV EAX,dword ptr [EDX]
005e02eb  MOV ECX,dword ptr [EBP + -0x10]
005e02ee  MOV EDX,dword ptr [EAX + 0x70]
005e02f1  CALL EDX
005e02f3  JMP 0x005e02c8
005e02f5  PUSH 0x0
005e02f7  MOV ECX,dword ptr [EBP + 0x8]
005e02fa  CALL 0x005fb860
005e02ff  MOV dword ptr [EBP + -0x14],EAX
005e0302  MOV EAX,dword ptr [EBP + -0x14]
005e0305  MOV EDX,dword ptr [EAX]
005e0307  MOV ECX,dword ptr [EBP + -0x14]
005e030a  MOV EAX,dword ptr [EDX + 0x70]
005e030d  CALL EAX
005e030f  MOV dword ptr [EBP + -0x4],0x0
005e0316  JMP 0x005e0321
005e0318  MOV ECX,dword ptr [EBP + -0x4]
005e031b  ADD ECX,0x1
005e031e  MOV dword ptr [EBP + -0x4],ECX
005e0321  CMP dword ptr [EBP + -0x4],0x14
005e0325  JGE 0x005e0348
005e0327  MOV EDX,dword ptr [EBP + 0x10]
005e032a  ADD EDX,dword ptr [EBP + -0x4]
005e032d  PUSH EDX
005e032e  MOV ECX,dword ptr [EBP + 0x8]
005e0331  CALL 0x005fb350
005e0336  MOV dword ptr [EBP + -0x18],EAX
005e0339  MOV EAX,dword ptr [EBP + -0x18]
005e033c  MOV EDX,dword ptr [EAX]
005e033e  MOV ECX,dword ptr [EBP + -0x18]
005e0341  MOV EAX,dword ptr [EDX + 0x70]
005e0344  CALL EAX
005e0346  JMP 0x005e0318
005e0348  PUSH 0x17
005e034a  MOV ECX,dword ptr [EBP + 0x8]
005e034d  CALL 0x005fb300
005e0352  MOV dword ptr [EBP + -0x1c],EAX
005e0355  MOV ECX,dword ptr [EBP + -0x1c]
005e0358  MOV EDX,dword ptr [ECX]
005e035a  MOV ECX,dword ptr [EBP + -0x1c]
005e035d  MOV EAX,dword ptr [EDX + 0x70]
005e0360  CALL EAX
005e0362  MOV ECX,dword ptr [EBP + 0xc]
005e0365  MOV dword ptr [EBP + -0x20],ECX
005e0368  CMP dword ptr [EBP + -0x20],0x3
005e036c  JA 0x005e059d
005e0372  MOV EDX,dword ptr [EBP + -0x20]
005e0375  JMP dword ptr [EDX*0x4 + 0x5e05a4]
005e059d  MOV ESP,EBP
005e059f  POP EBP
005e05a0  RET 0xc
