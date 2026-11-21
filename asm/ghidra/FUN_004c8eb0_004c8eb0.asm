; FUN_004c8eb0  004c8eb0
004c8eb0  PUSH EBP
004c8eb1  MOV EBP,ESP
004c8eb3  SUB ESP,0x8
004c8eb6  MOV dword ptr [EBP + -0x8],ECX
004c8eb9  MOV word ptr [EBP + -0x4],0x0
004c8ebf  JMP 0x004c8ecd
004c8ec1  MOV AX,word ptr [EBP + -0x4]
004c8ec5  ADD AX,0x1
004c8ec9  MOV word ptr [EBP + -0x4],AX
004c8ecd  MOVSX ECX,word ptr [EBP + -0x4]
004c8ed1  CMP ECX,0x2
004c8ed4  JGE 0x004c8f14
004c8ed6  MOVSX EDX,word ptr [EBP + -0x4]
004c8eda  MOV EAX,dword ptr [EBP + -0x8]
004c8edd  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x48]
004c8ee1  MOVSX EDX,word ptr [EBP + -0x4]
004c8ee5  MOV EAX,dword ptr [EBP + -0x8]
004c8ee8  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x48]
004c8eec  MOV EAX,dword ptr [ECX]
004c8eee  MOV ECX,EDX
004c8ef0  MOV EDX,dword ptr [EAX + 0x70]
004c8ef3  CALL EDX
004c8ef5  MOVSX EAX,word ptr [EBP + -0x4]
004c8ef9  MOV ECX,dword ptr [EBP + -0x8]
004c8efc  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x50]
004c8f00  MOVSX EAX,word ptr [EBP + -0x4]
004c8f04  MOV ECX,dword ptr [EBP + -0x8]
004c8f07  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x50]
004c8f0b  MOV EDX,dword ptr [EDX]
004c8f0d  MOV EAX,dword ptr [EDX + 0x70]
004c8f10  CALL EAX
004c8f12  JMP 0x004c8ec1
004c8f14  MOV word ptr [EBP + -0x4],0x0
004c8f1a  JMP 0x004c8f28
004c8f1c  MOV CX,word ptr [EBP + -0x4]
004c8f20  ADD CX,0x1
004c8f24  MOV word ptr [EBP + -0x4],CX
004c8f28  MOVSX EDX,word ptr [EBP + -0x4]
004c8f2c  CMP EDX,0x3
004c8f2f  JGE 0x004c8f50
004c8f31  MOVSX EAX,word ptr [EBP + -0x4]
004c8f35  MOV ECX,dword ptr [EBP + -0x8]
004c8f38  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x58]
004c8f3c  MOVSX EAX,word ptr [EBP + -0x4]
004c8f40  MOV ECX,dword ptr [EBP + -0x8]
004c8f43  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x58]
004c8f47  MOV EDX,dword ptr [EDX]
004c8f49  MOV EAX,dword ptr [EDX + 0x70]
004c8f4c  CALL EAX
004c8f4e  JMP 0x004c8f1c
004c8f50  MOV ESP,EBP
004c8f52  POP EBP
004c8f53  RET
