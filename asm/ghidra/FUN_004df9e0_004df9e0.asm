; FUN_004df9e0  004df9e0
004df9e0  PUSH EBP
004df9e1  MOV EBP,ESP
004df9e3  SUB ESP,0x8
004df9e6  PUSH ESI
004df9e7  MOV dword ptr [EBP + -0x8],ECX
004df9ea  MOV EAX,dword ptr [EBP + -0x8]
004df9ed  MOVSX ECX,word ptr [EAX + 0x64]
004df9f1  TEST ECX,ECX
004df9f3  JNZ 0x004dfa09
004df9f5  MOV EDX,dword ptr [EBP + -0x8]
004df9f8  MOV AX,word ptr [EDX + 0x210]
004df9ff  JMP 0x004dfabd
004dfa09  MOV EAX,dword ptr [EBP + -0x8]
004dfa0c  MOVSX ECX,word ptr [EAX + 0x64]
004dfa10  CMP ECX,0x1
004dfa13  JNZ 0x004dfa4d
004dfa15  MOV EDX,dword ptr [EBP + -0x8]
004dfa18  MOV AX,word ptr [EDX + 0x210]
004dfa1f  MOV word ptr [EBP + -0x4],AX
004dfa23  PUSH 0x5
004dfa25  CALL 0x0062fbf0
004dfa2a  ADD ESP,0x4
004dfa2d  MOVSX ECX,word ptr [EBP + -0x4]
004dfa31  SUB ECX,EAX
004dfa33  MOV word ptr [EBP + -0x4],CX
004dfa37  MOVSX EDX,word ptr [EBP + -0x4]
004dfa3b  TEST EDX,EDX
004dfa3d  JGE 0x004dfa45
004dfa3f  MOV word ptr [EBP + -0x4],0x0
004dfa45  MOV AX,word ptr [EBP + -0x4]
004dfa49  JMP 0x004dfabd
004dfa4d  MOV EAX,dword ptr [EBP + -0x8]
004dfa50  MOVSX ECX,word ptr [EAX + 0x64]
004dfa54  CMP ECX,0x2
004dfa57  JNZ 0x004dfa76
004dfa59  MOV EDX,dword ptr [EBP + -0x8]
004dfa5c  MOVSX ESI,word ptr [EDX + 0x210]
004dfa63  PUSH 0x3
004dfa65  CALL 0x0062fbf0
004dfa6a  ADD ESP,0x4
004dfa6d  ADD ESI,EAX
004dfa6f  MOV AX,SI
004dfa72  JMP 0x004dfabd
004dfa76  MOV EAX,dword ptr [EBP + -0x8]
004dfa79  MOVSX ECX,word ptr [EAX + 0x64]
004dfa7d  CMP ECX,0x3
004dfa80  JNZ 0x004dfa9f
004dfa82  MOV EDX,dword ptr [EBP + -0x8]
004dfa85  MOVSX ESI,word ptr [EDX + 0x210]
004dfa8c  PUSH 0x6
004dfa8e  CALL 0x0062fbf0
004dfa93  ADD ESP,0x4
004dfa96  ADD ESI,EAX
004dfa98  MOV AX,SI
004dfa9b  JMP 0x004dfabd
004dfa9f  XOR EAX,EAX
004dfaa1  JNZ 0x004dfaba
004dfaa3  PUSH 0x1f68
004dfaa8  PUSH 0x6bf384
004dfaad  PUSH 0x6b2b64
004dfab2  CALL 0x005e9f20
004dfab7  ADD ESP,0xc
004dfaba  XOR AX,AX
004dfabd  POP ESI
004dfabe  MOV ESP,EBP
004dfac0  POP EBP
004dfac1  RET
