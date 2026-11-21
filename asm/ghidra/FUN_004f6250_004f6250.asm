; FUN_004f6250  004f6250
004f6250  PUSH EBP
004f6251  MOV EBP,ESP
004f6253  SUB ESP,0xc
004f6256  MOV dword ptr [EBP + -0xc],ECX
004f6259  MOV EAX,dword ptr [EBP + -0xc]
004f625c  MOV CX,word ptr [EAX + 0x8]
004f6260  MOV word ptr [EBP + -0x4],CX
004f6264  MOV EDX,dword ptr [EBP + 0x8]
004f6267  PUSH EDX
004f6268  MOV ECX,dword ptr [EBP + -0xc]
004f626b  CALL 0x004f6020
004f6270  MOV word ptr [EBP + -0x8],AX
004f6274  MOVSX EAX,word ptr [EBP + -0x4]
004f6278  MOV ECX,dword ptr [EBP + -0xc]
004f627b  MOV EDX,dword ptr [ECX + 0x5c]
004f627e  MOV AX,word ptr [EDX + EAX*0x2]
004f6282  SUB AX,0x1
004f6286  MOVSX ECX,word ptr [EBP + -0x4]
004f628a  MOV EDX,dword ptr [EBP + -0xc]
004f628d  MOV EDX,dword ptr [EDX + 0x5c]
004f6290  MOV word ptr [EDX + ECX*0x2],AX
004f6294  MOVSX EAX,word ptr [EBP + -0x4]
004f6298  MOV ECX,dword ptr [EBP + -0xc]
004f629b  MOV EDX,dword ptr [ECX + 0x50]
004f629e  MOV AX,word ptr [EDX + EAX*0x2]
004f62a2  SUB AX,0x1
004f62a6  MOVSX ECX,word ptr [EBP + -0x4]
004f62aa  MOV EDX,dword ptr [EBP + -0xc]
004f62ad  MOV EDX,dword ptr [EDX + 0x50]
004f62b0  MOV word ptr [EDX + ECX*0x2],AX
004f62b4  MOVZX EAX,byte ptr [EBP + 0xc]
004f62b8  TEST EAX,EAX
004f62ba  JZ 0x004f62ca
004f62bc  MOVSX ECX,word ptr [EBP + -0x4]
004f62c0  MOV EDX,dword ptr [EBP + -0xc]
004f62c3  MOV EAX,dword ptr [EDX + 0x38]
004f62c6  MOV byte ptr [ECX + EAX*0x1],0x0
004f62ca  MOV AX,word ptr [EBP + -0x8]
004f62ce  MOV ESP,EBP
004f62d0  POP EBP
004f62d1  RET 0x8
