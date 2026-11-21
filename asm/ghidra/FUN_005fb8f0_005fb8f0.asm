; FUN_005fb8f0  005fb8f0
005fb8f0  PUSH EBP
005fb8f1  MOV EBP,ESP
005fb8f3  SUB ESP,0x8
005fb8f6  MOV dword ptr [EBP + -0x8],ECX
005fb8f9  MOV EAX,dword ptr [EBP + 0x8]
005fb8fc  PUSH EAX
005fb8fd  MOV ECX,dword ptr [EBP + -0x8]
005fb900  CALL 0x005fb810
005fb905  MOV dword ptr [EBP + -0x4],EAX
005fb908  CMP dword ptr [EBP + -0x4],0x0
005fb90c  JZ 0x005fb922
005fb90e  MOV ECX,dword ptr [EBP + 0xc]
005fb911  PUSH ECX
005fb912  MOV EDX,dword ptr [EBP + -0x4]
005fb915  MOV EAX,dword ptr [EDX]
005fb917  MOV ECX,dword ptr [EBP + -0x4]
005fb91a  MOV EDX,dword ptr [EAX + 0xb4]
005fb920  CALL EDX
005fb922  MOV ESP,EBP
005fb924  POP EBP
005fb925  RET 0x8
