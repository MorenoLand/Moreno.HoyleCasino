; FUN_005d6bd0  005d6bd0
005d6bd0  PUSH EBP
005d6bd1  MOV EBP,ESP
005d6bd3  SUB ESP,0x24
005d6bd6  MOV dword ptr [EBP + -0x24],ECX
005d6bd9  MOV dword ptr [EBP + -0x1c],0x1388
005d6be0  MOV dword ptr [EBP + -0x18],0x2710
005d6be7  MOV dword ptr [EBP + -0x14],0xc350
005d6bee  MOV dword ptr [EBP + -0x10],0x186a0
005d6bf5  MOV dword ptr [EBP + -0xc],0xf4240
005d6bfc  MOV dword ptr [EBP + -0x8],0x5f5e100
005d6c03  MOV dword ptr [EBP + -0x4],0x3b9aca00
005d6c0a  MOV ECX,dword ptr [EBP + -0x24]
005d6c0d  CALL 0x005d52e0
005d6c12  MOV AL,byte ptr [EAX + 0x2a]
005d6c15  MOV byte ptr [EBP + -0x1d],AL
005d6c18  MOVSX ECX,byte ptr [EBP + -0x1d]
005d6c1c  CMP ECX,0x7
005d6c1f  JNZ 0x005d6c28
005d6c21  MOV EAX,0x5f5e100
005d6c26  JMP 0x005d6c5b
005d6c28  MOV ECX,dword ptr [EBP + -0x24]
005d6c2b  CALL 0x005d52e0
005d6c30  MOV DL,byte ptr [EAX + 0x2a]
005d6c33  MOV byte ptr [EBP + -0x1e],DL
005d6c36  MOVSX EAX,byte ptr [EBP + -0x1e]
005d6c3a  TEST EAX,EAX
005d6c3c  JNZ 0x005d6c45
005d6c3e  MOV EAX,0x9c4
005d6c43  JMP 0x005d6c5b
005d6c45  MOV ECX,dword ptr [EBP + -0x24]
005d6c48  CALL 0x005d52e0
005d6c4d  MOV CL,byte ptr [EAX + 0x2a]
005d6c50  MOV byte ptr [EBP + -0x1f],CL
005d6c53  MOVSX EDX,byte ptr [EBP + -0x1f]
005d6c57  MOV EAX,dword ptr [EBP + EDX*0x4 + -0x20]
005d6c5b  MOV ESP,EBP
005d6c5d  POP EBP
005d6c5e  RET
