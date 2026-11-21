; FUN_005b4e50  005b4e50
005b4e50  PUSH EBP
005b4e51  MOV EBP,ESP
005b4e53  SUB ESP,0x8
005b4e56  MOV dword ptr [EBP + -0x4],ECX
005b4e59  CMP dword ptr [EBP + 0x8],-0x1
005b4e5d  JNZ 0x005b4e66
005b4e5f  OR EAX,0xffffffff
005b4e62  JMP 0x005b4e8c
005b4e66  CMP dword ptr [EBP + 0x8],0x4
005b4e6a  JNZ 0x005b4e75
005b4e6c  MOV dword ptr [EBP + -0x8],0x0
005b4e73  JMP 0x005b4e89
005b4e75  MOV EAX,dword ptr [EBP + 0x8]
005b4e78  IMUL EAX,EAX,0x118
005b4e7e  MOV ECX,dword ptr [EBP + -0x4]
005b4e81  MOVSX EDX,byte ptr [ECX + EAX*0x1 + 0x67]
005b4e86  MOV dword ptr [EBP + -0x8],EDX
005b4e89  MOV EAX,dword ptr [EBP + -0x8]
005b4e8c  MOV ESP,EBP
005b4e8e  POP EBP
005b4e8f  RET 0x4
