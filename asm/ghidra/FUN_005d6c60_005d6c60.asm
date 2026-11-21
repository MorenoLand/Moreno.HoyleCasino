; FUN_005d6c60  005d6c60
005d6c60  PUSH EBP
005d6c61  MOV EBP,ESP
005d6c63  SUB ESP,0x24
005d6c66  MOV dword ptr [EBP + -0x24],ECX
005d6c69  MOV dword ptr [EBP + -0x1c],0x1388
005d6c70  MOV dword ptr [EBP + -0x18],0x2710
005d6c77  MOV dword ptr [EBP + -0x14],0xc350
005d6c7e  MOV dword ptr [EBP + -0x10],0x186a0
005d6c85  MOV dword ptr [EBP + -0xc],0xf4240
005d6c8c  MOV dword ptr [EBP + -0x8],0x5f5e100
005d6c93  MOV dword ptr [EBP + -0x4],0x3b9aca00
005d6c9a  MOV ECX,dword ptr [EBP + -0x24]
005d6c9d  CALL 0x005d52e0
005d6ca2  MOV AL,byte ptr [EAX + 0x2a]
005d6ca5  MOV byte ptr [EBP + -0x1d],AL
005d6ca8  MOV ECX,dword ptr [EBP + -0x24]
005d6cab  CALL 0x005d5a50
005d6cb0  MOVSX ECX,byte ptr [EBP + -0x1d]
005d6cb4  XOR EDX,EDX
005d6cb6  CMP EAX,dword ptr [EBP + ECX*0x4 + -0x18]
005d6cba  SETGE DL
005d6cbd  MOV AL,DL
005d6cbf  MOV ESP,EBP
005d6cc1  POP EBP
005d6cc2  RET
