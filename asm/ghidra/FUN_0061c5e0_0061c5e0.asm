; FUN_0061c5e0  0061c5e0
0061c5e0  PUSH EBP
0061c5e1  MOV EBP,ESP
0061c5e3  SUB ESP,0x20
0061c5e6  MOV dword ptr [EBP + -0x10],0x0
0061c5ed  MOV dword ptr [EBP + -0xc],0x1000000
0061c5f4  MOV EAX,dword ptr [EBP + 0x8]
0061c5f7  MOV dword ptr [EBP + -0x14],EAX
0061c5fa  MOV dword ptr [EBP + -0x8],0x0
0061c601  JMP 0x0061c60c
0061c603  MOV ECX,dword ptr [EBP + -0x8]
0061c606  ADD ECX,0x1
0061c609  MOV dword ptr [EBP + -0x8],ECX
0061c60c  CMP dword ptr [EBP + -0x8],0x100
0061c613  JGE 0x0061c6c7
0061c619  MOV EDX,dword ptr [EBP + -0x14]
0061c61c  MOVZX EAX,byte ptr [EDX]
0061c61f  MOVZX ECX,byte ptr [EBP + 0xc]
0061c623  SUB EAX,ECX
0061c625  MOV dword ptr [EBP + -0x18],EAX
0061c628  MOV EDX,dword ptr [EBP + -0x14]
0061c62b  MOVZX EAX,byte ptr [EDX + 0x1]
0061c62f  MOVZX ECX,byte ptr [EBP + 0x10]
0061c633  SUB EAX,ECX
0061c635  MOV dword ptr [EBP + -0x20],EAX
0061c638  MOV EDX,dword ptr [EBP + -0x14]
0061c63b  MOVZX EAX,byte ptr [EDX + 0x2]
0061c63f  MOVZX ECX,byte ptr [EBP + 0x14]
0061c643  SUB EAX,ECX
0061c645  MOV dword ptr [EBP + -0x4],EAX
0061c648  MOV EDX,dword ptr [EBP + -0x14]
0061c64b  ADD EDX,0x3
0061c64e  MOV dword ptr [EBP + -0x14],EDX
0061c651  CMP dword ptr [EBP + -0x18],-0x64
0061c655  JL 0x0061c65d
0061c657  CMP dword ptr [EBP + -0x18],0x64
0061c65b  JLE 0x0061c65f
0061c65d  JMP 0x0061c603
0061c65f  CMP dword ptr [EBP + -0x20],-0x64
0061c663  JL 0x0061c66b
0061c665  CMP dword ptr [EBP + -0x20],0x64
0061c669  JLE 0x0061c66d
0061c66b  JMP 0x0061c603
0061c66d  CMP dword ptr [EBP + -0x4],-0x64
0061c671  JL 0x0061c679
0061c673  CMP dword ptr [EBP + -0x4],0x64
0061c677  JLE 0x0061c67b
0061c679  JMP 0x0061c603
0061c67b  MOV EAX,dword ptr [EBP + -0x18]
0061c67e  IMUL EAX,dword ptr [EBP + -0x18]
0061c682  MOV ECX,dword ptr [EBP + -0x20]
0061c685  IMUL ECX,dword ptr [EBP + -0x20]
0061c689  ADD EAX,ECX
0061c68b  MOV EDX,dword ptr [EBP + -0x4]
0061c68e  IMUL EDX,dword ptr [EBP + -0x4]
0061c692  ADD EAX,EDX
0061c694  MOV dword ptr [EBP + -0x1c],EAX
0061c697  JNS 0x0061c6a1
0061c699  MOV EAX,dword ptr [EBP + -0x1c]
0061c69c  NEG EAX
0061c69e  MOV dword ptr [EBP + -0x1c],EAX
0061c6a1  MOV ECX,dword ptr [EBP + -0x1c]
0061c6a4  CMP ECX,dword ptr [EBP + -0xc]
0061c6a7  JGE 0x0061c6b5
0061c6a9  MOV EDX,dword ptr [EBP + -0x8]
0061c6ac  MOV dword ptr [EBP + -0x10],EDX
0061c6af  MOV EAX,dword ptr [EBP + -0x1c]
0061c6b2  MOV dword ptr [EBP + -0xc],EAX
0061c6b5  CMP dword ptr [EBP + -0x1c],0x1
0061c6b9  JGE 0x0061c6c2
0061c6bb  MOV dword ptr [EBP + -0x8],0x100
0061c6c2  JMP 0x0061c603
0061c6c7  MOV AL,byte ptr [EBP + -0x10]
0061c6ca  MOV ESP,EBP
0061c6cc  POP EBP
0061c6cd  RET
