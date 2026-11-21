; FUN_004fd9c0  004fd9c0
004fd9c0  PUSH EBP
004fd9c1  MOV EBP,ESP
004fd9c3  SUB ESP,0x8
004fd9c6  MOV dword ptr [EBP + -0x8],ECX
004fd9c9  CMP dword ptr [EBP + 0x8],0x0
004fd9cd  JNZ 0x004fd9d3
004fd9cf  XOR AL,AL
004fd9d1  JMP 0x004fda0a
004fd9d3  MOV EAX,dword ptr [EBP + 0x8]
004fd9d6  MOV dword ptr [EBP + -0x4],EAX
004fd9d9  MOV ECX,dword ptr [0x00791364]
004fd9df  CALL 0x0047f950
004fd9e4  MOV ECX,dword ptr [EBP + -0x4]
004fd9e7  MOV word ptr [ECX],AX
004fd9ea  PUSH 0x0
004fd9ec  MOV EDX,dword ptr [0x0162ee84]
004fd9f2  MOV EAX,dword ptr [EDX]
004fd9f4  MOV ECX,dword ptr [0x0162ee84]
004fd9fa  MOV EDX,dword ptr [EAX + 0x164]
004fda00  CALL EDX
004fda02  MOV ECX,dword ptr [EBP + -0x4]
004fda05  MOV dword ptr [ECX + 0x4],EAX
004fda08  MOV AL,0x1
004fda0a  MOV ESP,EBP
004fda0c  POP EBP
004fda0d  RET 0x4
