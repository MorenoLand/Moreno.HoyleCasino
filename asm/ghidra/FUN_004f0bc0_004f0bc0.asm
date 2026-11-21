; FUN_004f0bc0  004f0bc0
004f0bc0  PUSH EBP
004f0bc1  MOV EBP,ESP
004f0bc3  PUSH ECX
004f0bc4  MOV dword ptr [EBP + -0x4],ECX
004f0bc7  MOV EAX,dword ptr [EBP + -0x4]
004f0bca  MOVSX ECX,word ptr [EAX + 0x64]
004f0bce  CMP ECX,0x1
004f0bd1  JNZ 0x004f0be6
004f0bd3  MOV EDX,dword ptr [EBP + -0x4]
004f0bd6  MOVSX EAX,word ptr [EDX + 0x3c8]
004f0bdd  CDQ
004f0bde  SUB EAX,EDX
004f0be0  SAR EAX,0x1
004f0be2  JMP 0x004f0bf0
004f0be6  MOV EAX,dword ptr [EBP + -0x4]
004f0be9  MOV AX,word ptr [EAX + 0x3c8]
004f0bf0  MOV ESP,EBP
004f0bf2  POP EBP
004f0bf3  RET
