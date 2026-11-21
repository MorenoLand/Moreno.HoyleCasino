; FUN_005be290  005be290
005be290  PUSH EBP
005be291  MOV EBP,ESP
005be293  SUB ESP,0x8
005be296  MOV dword ptr [EBP + -0x4],ECX
005be299  MOV EAX,dword ptr [EBP + -0x4]
005be29c  CMP dword ptr [EAX + 0x54],0x0
005be2a0  JZ 0x005be2b4
005be2a2  MOV ECX,dword ptr [EBP + -0x4]
005be2a5  CMP dword ptr [ECX + 0x54],0x4
005be2a9  JZ 0x005be2b4
005be2ab  MOV dword ptr [EBP + -0x8],0x0
005be2b2  JMP 0x005be2bb
005be2b4  MOV dword ptr [EBP + -0x8],0x1
005be2bb  MOV AL,byte ptr [EBP + -0x8]
005be2be  MOV ESP,EBP
005be2c0  POP EBP
005be2c1  RET
