; FUN_0063a4d0  0063a4d0
0063a4d0  PUSH EBP
0063a4d1  MOV EBP,ESP
0063a4d3  PUSH -0x1
0063a4d5  PUSH 0x6abb0e
0063a4da  MOV EAX,FS:[0x0]
0063a4e0  PUSH EAX
0063a4e1  SUB ESP,0x18
0063a4e4  MOV EAX,[0x00781870]
0063a4e9  XOR EAX,EBP
0063a4eb  PUSH EAX
0063a4ec  LEA EAX,[EBP + -0xc]
0063a4ef  MOV FS:[0x0],EAX
0063a4f5  MOV dword ptr [EBP + -0x20],ECX
0063a4f8  MOV ECX,dword ptr [EBP + -0x20]
0063a4fb  CALL 0x0063aac0
0063a500  MOV dword ptr [EBP + -0x14],EAX
0063a503  PUSH 0x37c
0063a508  PUSH 0x0
0063a50a  MOV EAX,dword ptr [EBP + -0x14]
0063a50d  PUSH EAX
0063a50e  CALL 0x00686fa2
0063a513  ADD ESP,0xc
0063a516  MOV ECX,dword ptr [EBP + -0x14]
0063a519  MOV dword ptr [ECX],0x0
0063a51f  MOV EDX,dword ptr [EBP + -0x14]
0063a522  MOV byte ptr [EDX + 0x4],0x0
0063a526  MOV EAX,dword ptr [EBP + -0x14]
0063a529  MOV byte ptr [EAX + 0x38],0x0
0063a52d  MOV ECX,dword ptr [EBP + -0x14]
0063a530  MOV dword ptr [ECX + 0x54],0x0
0063a537  MOV EDX,dword ptr [EBP + -0x14]
0063a53a  MOV byte ptr [EDX + 0x58],0x1
0063a53e  MOV EAX,dword ptr [EBP + -0x14]
0063a541  MOV byte ptr [EAX + 0x59],0x1
0063a545  MOV ECX,dword ptr [EBP + -0x14]
0063a548  MOV byte ptr [ECX + 0x5a],0x1
0063a54c  MOV EDX,dword ptr [EBP + -0x14]
0063a54f  MOV byte ptr [EDX + 0x5b],0x3
0063a553  MOV EAX,dword ptr [EBP + -0x14]
0063a556  MOV byte ptr [EAX + 0x5c],0x5
0063a55a  MOV ECX,dword ptr [0x0162ee84]
0063a560  MOV EDX,dword ptr [ECX]
0063a562  MOV ECX,dword ptr [0x0162ee84]
0063a568  MOV EAX,dword ptr [EDX + 0xb8]
0063a56e  CALL EAX
0063a570  MOV ECX,dword ptr [EBP + -0x14]
0063a573  MOV byte ptr [ECX + 0x378],AL
0063a579  MOV EDX,dword ptr [EBP + -0x14]
0063a57c  MOV byte ptr [EDX + 0x25d],0x1
0063a583  MOV EAX,dword ptr [EBP + -0x14]
0063a586  MOV dword ptr [EAX + 0x260],0x5
0063a590  PUSH 0x0
0063a592  MOV ECX,dword ptr [0x0162ee84]
0063a598  MOV EDX,dword ptr [ECX]
0063a59a  MOV ECX,dword ptr [0x0162ee84]
0063a5a0  MOV EAX,dword ptr [EDX + 0x180]
0063a5a6  CALL EAX
0063a5a8  MOV ECX,dword ptr [EBP + -0x14]
0063a5ab  MOV dword ptr [ECX + 0x264],EAX
0063a5b1  MOV EDX,dword ptr [0x0162ee84]
0063a5b7  MOV EAX,dword ptr [EDX]
0063a5b9  MOV ECX,dword ptr [0x0162ee84]
0063a5bf  MOV EDX,dword ptr [EAX + 0x1a0]
0063a5c5  CALL EDX
0063a5c7  MOV ECX,dword ptr [EBP + -0x14]
0063a5ca  MOV dword ptr [ECX + 0x36c],EAX
0063a5d0  MOV EDX,dword ptr [0x0162ee84]
0063a5d6  MOV EAX,dword ptr [EDX]
0063a5d8  MOV ECX,dword ptr [0x0162ee84]
0063a5de  MOV EDX,dword ptr [EAX + 0x1b8]
0063a5e4  CALL EDX
0063a5e6  MOV ECX,dword ptr [EBP + -0x14]
0063a5e9  MOV dword ptr [ECX + 0x370],EAX
0063a5ef  MOV EDX,dword ptr [EBP + -0x14]
0063a5f2  MOV dword ptr [EDX + 0x374],0xffffffff
0063a5fc  MOV dword ptr [EBP + -0x10],0x0
0063a603  JMP 0x0063a60e
0063a605  MOV EAX,dword ptr [EBP + -0x10]
0063a608  ADD EAX,0x1
0063a60b  MOV dword ptr [EBP + -0x10],EAX
0063a60e  MOV ECX,dword ptr [0x0162ee84]
0063a614  MOV EDX,dword ptr [ECX]
0063a616  MOV ECX,dword ptr [0x0162ee84]
0063a61c  MOV EAX,dword ptr [EDX + 0xec]
0063a622  CALL EAX
0063a624  CMP dword ptr [EBP + -0x10],EAX
0063a627  JGE 0x0063a65a
0063a629  MOV ECX,dword ptr [EBP + -0x14]
0063a62c  ADD ECX,dword ptr [EBP + -0x10]
0063a62f  MOV byte ptr [ECX + 0x268],0x1
0063a636  MOV EDX,dword ptr [EBP + -0x10]
0063a639  PUSH EDX
0063a63a  MOV EAX,[0x0162ee84]
0063a63f  MOV EDX,dword ptr [EAX]
0063a641  MOV ECX,dword ptr [0x0162ee84]
0063a647  MOV EAX,dword ptr [EDX + 0x100]
0063a64d  CALL EAX
0063a64f  MOV ECX,dword ptr [EBP + -0x14]
0063a652  ADD ECX,dword ptr [EBP + -0x10]
0063a655  MOV byte ptr [ECX + 0x5d],AL
0063a658  JMP 0x0063a605
0063a65a  MOV EDX,dword ptr [EBP + -0x14]
0063a65d  MOV byte ptr [EDX + 0x368],0x0
0063a664  MOV EAX,[0x0162ee84]
0063a669  MOV EDX,dword ptr [EAX]
0063a66b  MOV ECX,dword ptr [0x0162ee84]
0063a671  MOV EAX,dword ptr [EDX + 0xdc]
0063a677  CALL EAX
0063a679  MOVZX ECX,AL
0063a67c  TEST ECX,ECX
0063a67e  JZ 0x0063a6d4
0063a680  MOV EDX,dword ptr [EBP + -0x20]
0063a683  CMP dword ptr [EDX + 0x24],0x0
0063a687  JNZ 0x0063a6d4
0063a689  PUSH 0xb04
0063a68e  CALL 0x00686d82
0063a693  ADD ESP,0x4
0063a696  MOV dword ptr [EBP + -0x1c],EAX
0063a699  MOV dword ptr [EBP + -0x4],0x0
0063a6a0  CMP dword ptr [EBP + -0x1c],0x0
0063a6a4  JZ 0x0063a6b7
0063a6a6  MOV EAX,dword ptr [EBP + -0x20]
0063a6a9  PUSH EAX
0063a6aa  MOV ECX,dword ptr [EBP + -0x1c]
0063a6ad  CALL 0x0066f8b0
0063a6b2  MOV dword ptr [EBP + -0x24],EAX
0063a6b5  JMP 0x0063a6be
0063a6b7  MOV dword ptr [EBP + -0x24],0x0
0063a6be  MOV ECX,dword ptr [EBP + -0x24]
0063a6c1  MOV dword ptr [EBP + -0x18],ECX
0063a6c4  MOV dword ptr [EBP + -0x4],0xffffffff
0063a6cb  MOV EDX,dword ptr [EBP + -0x20]
0063a6ce  MOV EAX,dword ptr [EBP + -0x18]
0063a6d1  MOV dword ptr [EDX + 0x24],EAX
0063a6d4  MOV dword ptr [EBP + -0x10],0x0
0063a6db  JMP 0x0063a6e6
0063a6dd  MOV ECX,dword ptr [EBP + -0x10]
0063a6e0  ADD ECX,0x1
0063a6e3  MOV dword ptr [EBP + -0x10],ECX
0063a6e6  MOV EDX,dword ptr [0x0162ee84]
0063a6ec  MOV EAX,dword ptr [EDX]
0063a6ee  MOV ECX,dword ptr [0x0162ee84]
0063a6f4  MOV EDX,dword ptr [EAX + 0x168]
0063a6fa  CALL EDX
0063a6fc  CMP dword ptr [EBP + -0x10],EAX
0063a6ff  JGE 0x0063a710
0063a701  MOV EAX,dword ptr [EBP + -0x14]
0063a704  ADD EAX,dword ptr [EBP + -0x10]
0063a707  MOV byte ptr [EAX + 0x15d],0x0
0063a70e  JMP 0x0063a6dd
0063a710  MOV ECX,dword ptr [EBP + -0xc]
0063a713  MOV dword ptr FS:[0x0],ECX
0063a71a  POP ECX
0063a71b  MOV ESP,EBP
0063a71d  POP EBP
0063a71e  RET
