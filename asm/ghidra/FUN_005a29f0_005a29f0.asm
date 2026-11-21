; FUN_005a29f0  005a29f0
005a29f0  PUSH EBP
005a29f1  MOV EBP,ESP
005a29f3  SUB ESP,0xc
005a29f6  MOV dword ptr [EBP + -0xc],ECX
005a29f9  MOV EAX,dword ptr [EBP + 0x8]
005a29fc  IMUL EAX,EAX,0x3
005a29ff  MOV dword ptr [EBP + -0x4],EAX
005a2a02  MOV dword ptr [EBP + -0x8],0x0
005a2a09  JMP 0x005a2a14
005a2a0b  MOV ECX,dword ptr [EBP + -0x8]
005a2a0e  ADD ECX,0x1
005a2a11  MOV dword ptr [EBP + -0x8],ECX
005a2a14  CMP dword ptr [EBP + -0x8],0x3
005a2a18  JGE 0x005a2a30
005a2a1a  MOV EDX,dword ptr [EBP + -0x8]
005a2a1d  ADD EDX,dword ptr [EBP + -0x4]
005a2a20  MOV EAX,dword ptr [EBP + -0xc]
005a2a23  CMP dword ptr [EAX + EDX*0x8 + 0x38],0x0
005a2a28  JLE 0x005a2a2e
005a2a2a  MOV AL,0x1
005a2a2c  JMP 0x005a2a32
005a2a2e  JMP 0x005a2a0b
005a2a30  XOR AL,AL
005a2a32  MOV ESP,EBP
005a2a34  POP EBP
005a2a35  RET 0x4
