; FUN_004f9050  004f9050
004f9050  PUSH EBP
004f9051  MOV EBP,ESP
004f9053  SUB ESP,0x8
004f9056  MOV dword ptr [EBP + -0x8],ECX
004f9059  MOV EAX,dword ptr [EBP + -0x8]
004f905c  MOV CX,word ptr [EAX + 0x8]
004f9060  MOV word ptr [EBP + -0x4],CX
004f9064  MOV EDX,dword ptr [EBP + -0x8]
004f9067  MOV AX,word ptr [EDX + 0x8]
004f906b  ADD AX,0x1
004f906f  MOV ECX,dword ptr [EBP + -0x8]
004f9072  MOV word ptr [ECX + 0x8],AX
004f9076  MOV EDX,dword ptr [EBP + -0x8]
004f9079  MOVSX EAX,word ptr [EDX + 0x8]
004f907d  MOV ECX,dword ptr [EBP + -0x8]
004f9080  MOVSX EDX,word ptr [ECX + 0x6]
004f9084  CMP EAX,EDX
004f9086  JNZ 0x004f9091
004f9088  MOV EAX,dword ptr [EBP + -0x8]
004f908b  MOV word ptr [EAX + 0x8],0x0
004f9091  MOV ECX,dword ptr [EBP + -0x8]
004f9094  MOVSX EDX,word ptr [ECX + 0x8]
004f9098  MOVSX EAX,word ptr [EBP + -0x4]
004f909c  CMP EDX,EAX
004f909e  JZ 0x004f90f9
004f90a0  MOV ECX,dword ptr [EBP + -0x8]
004f90a3  MOVSX EDX,word ptr [ECX + 0x8]
004f90a7  MOV EAX,dword ptr [EBP + -0x8]
004f90aa  MOV ECX,dword ptr [EAX + 0x30]
004f90ad  MOVZX EDX,byte ptr [ECX + EDX*0x1]
004f90b1  TEST EDX,EDX
004f90b3  JNZ 0x004f90ca
004f90b5  MOV EAX,dword ptr [EBP + -0x8]
004f90b8  MOVSX ECX,word ptr [EAX + 0x8]
004f90bc  MOV EDX,dword ptr [EBP + -0x8]
004f90bf  MOV EAX,dword ptr [EDX + 0x34]
004f90c2  MOVZX ECX,byte ptr [EAX + ECX*0x1]
004f90c6  TEST ECX,ECX
004f90c8  JZ 0x004f90f9
004f90ca  MOV EDX,dword ptr [EBP + -0x8]
004f90cd  MOV AX,word ptr [EDX + 0x8]
004f90d1  ADD AX,0x1
004f90d5  MOV ECX,dword ptr [EBP + -0x8]
004f90d8  MOV word ptr [ECX + 0x8],AX
004f90dc  MOV EDX,dword ptr [EBP + -0x8]
004f90df  MOVSX EAX,word ptr [EDX + 0x8]
004f90e3  MOV ECX,dword ptr [EBP + -0x8]
004f90e6  MOVSX EDX,word ptr [ECX + 0x6]
004f90ea  CMP EAX,EDX
004f90ec  JNZ 0x004f90f7
004f90ee  MOV EAX,dword ptr [EBP + -0x8]
004f90f1  MOV word ptr [EAX + 0x8],0x0
004f90f7  JMP 0x004f9091
004f90f9  MOV ECX,dword ptr [EBP + -0x8]
004f90fc  MOV AX,word ptr [ECX + 0x8]
004f9100  MOV ESP,EBP
004f9102  POP EBP
004f9103  RET
