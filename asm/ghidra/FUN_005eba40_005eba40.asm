; FUN_005eba40  005eba40
005eba40  PUSH EBP
005eba41  MOV EBP,ESP
005eba43  SUB ESP,0x14
005eba46  MOV dword ptr [EBP + -0x14],ECX
005eba49  MOV EAX,dword ptr [EBP + -0x14]
005eba4c  CMP dword ptr [EAX + 0x174],0x0
005eba53  JZ 0x005ebaba
005eba55  MOV dword ptr [EBP + -0x4],0x0
005eba5c  JMP 0x005eba67
005eba5e  MOV ECX,dword ptr [EBP + -0x4]
005eba61  ADD ECX,0x1
005eba64  MOV dword ptr [EBP + -0x4],ECX
005eba67  CMP dword ptr [EBP + -0x4],0x100
005eba6e  JGE 0x005ebaba
005eba70  MOV EDX,dword ptr [EBP + -0x4]
005eba73  PUSH EDX
005eba74  MOV EAX,dword ptr [EBP + -0x14]
005eba77  MOV ECX,dword ptr [EAX + 0x174]
005eba7d  CALL 0x00616b10
005eba82  MOV dword ptr [EBP + -0x8],EAX
005eba85  MOV ECX,dword ptr [EBP + -0x8]
005eba88  PUSH ECX
005eba89  LEA EDX,[EBP + -0x10]
005eba8c  PUSH EDX
005eba8d  CALL 0x00617a30
005eba92  ADD ESP,0x8
005eba95  MOV CX,word ptr [EAX]
005eba98  MOV word ptr [EBP + -0xb],CX
005eba9c  MOV DL,byte ptr [EAX + 0x2]
005eba9f  MOV byte ptr [EBP + -0x9],DL
005ebaa2  MOV EAX,dword ptr [EBP + -0x4]
005ebaa5  IMUL EAX,EAX,0x3
005ebaa8  ADD EAX,dword ptr [EBP + 0x8]
005ebaab  MOV CX,word ptr [EBP + -0xb]
005ebaaf  MOV word ptr [EAX],CX
005ebab2  MOV DL,byte ptr [EBP + -0x9]
005ebab5  MOV byte ptr [EAX + 0x2],DL
005ebab8  JMP 0x005eba5e
005ebaba  MOV ESP,EBP
005ebabc  POP EBP
005ebabd  RET 0x4
