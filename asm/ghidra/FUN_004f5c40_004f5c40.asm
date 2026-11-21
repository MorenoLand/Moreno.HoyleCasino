; FUN_004f5c40  004f5c40
004f5c40  PUSH EBP
004f5c41  MOV EBP,ESP
004f5c43  SUB ESP,0xc
004f5c46  MOV dword ptr [EBP + -0xc],ECX
004f5c49  MOV EAX,dword ptr [EBP + -0xc]
004f5c4c  MOV CX,word ptr [EAX + 0x8]
004f5c50  MOV word ptr [EBP + -0x4],CX
004f5c54  MOV EDX,dword ptr [EBP + 0x8]
004f5c57  PUSH EDX
004f5c58  MOV ECX,dword ptr [EBP + -0xc]
004f5c5b  CALL 0x004f58c0
004f5c60  MOV word ptr [EBP + -0x8],AX
004f5c64  MOVSX EAX,word ptr [EBP + -0x4]
004f5c68  MOV ECX,dword ptr [EBP + -0xc]
004f5c6b  MOV EDX,dword ptr [ECX + 0x5c]
004f5c6e  MOV AX,word ptr [EDX + EAX*0x2]
004f5c72  SUB AX,0x1
004f5c76  MOVSX ECX,word ptr [EBP + -0x4]
004f5c7a  MOV EDX,dword ptr [EBP + -0xc]
004f5c7d  MOV EDX,dword ptr [EDX + 0x5c]
004f5c80  MOV word ptr [EDX + ECX*0x2],AX
004f5c84  MOVSX EAX,word ptr [EBP + -0x4]
004f5c88  MOV ECX,dword ptr [EBP + -0xc]
004f5c8b  MOV EDX,dword ptr [ECX + 0x50]
004f5c8e  MOV AX,word ptr [EDX + EAX*0x2]
004f5c92  SUB AX,0x1
004f5c96  MOVSX ECX,word ptr [EBP + -0x4]
004f5c9a  MOV EDX,dword ptr [EBP + -0xc]
004f5c9d  MOV EDX,dword ptr [EDX + 0x50]
004f5ca0  MOV word ptr [EDX + ECX*0x2],AX
004f5ca4  MOVZX EAX,byte ptr [EBP + 0xc]
004f5ca8  TEST EAX,EAX
004f5caa  JZ 0x004f5cba
004f5cac  MOVSX ECX,word ptr [EBP + -0x4]
004f5cb0  MOV EDX,dword ptr [EBP + -0xc]
004f5cb3  MOV EAX,dword ptr [EDX + 0x38]
004f5cb6  MOV byte ptr [ECX + EAX*0x1],0x0
004f5cba  MOV AX,word ptr [EBP + -0x8]
004f5cbe  MOV ESP,EBP
004f5cc0  POP EBP
004f5cc1  RET 0x8
