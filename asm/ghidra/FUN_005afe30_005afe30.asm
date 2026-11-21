; FUN_005afe30  005afe30
005afe30  PUSH EBP
005afe31  MOV EBP,ESP
005afe33  SUB ESP,0x2c
005afe36  MOV dword ptr [EBP + -0x2c],ECX
005afe39  MOV dword ptr [EBP + -0x28],0x149
005afe40  MOV dword ptr [EBP + -0x24],0xdb
005afe47  MOV dword ptr [EBP + -0x20],0x86
005afe4e  MOV dword ptr [EBP + -0x1c],0xdb
005afe55  MOV dword ptr [EBP + -0x18],0x1ca
005afe5c  MOV dword ptr [EBP + -0x14],0x93
005afe63  MOV dword ptr [EBP + -0x10],0x5
005afe6a  MOV dword ptr [EBP + -0xc],0x93
005afe71  CMP dword ptr [EBP + 0xc],0x4
005afe75  JGE 0x005afe8f
005afe77  MOV EAX,dword ptr [EBP + 0xc]
005afe7a  MOV ECX,dword ptr [EBP + EAX*0x8 + -0x28]
005afe7e  MOV EDX,dword ptr [EBP + EAX*0x8 + -0x24]
005afe82  MOV EAX,dword ptr [EBP + 0x8]
005afe85  MOV dword ptr [EAX],ECX
005afe87  MOV dword ptr [EAX + 0x4],EDX
005afe8a  MOV EAX,dword ptr [EBP + 0x8]
005afe8d  JMP 0x005afec9
005afe8f  MOV dword ptr [EBP + -0x8],0x0
005afe96  MOV dword ptr [EBP + -0x4],0x0
005afe9d  XOR ECX,ECX
005afe9f  JNZ 0x005afeb8
005afea1  PUSH 0xae
005afea6  PUSH 0x6d01a8
005afeab  PUSH 0x6b2f58
005afeb0  CALL 0x005e9f20
005afeb5  ADD ESP,0xc
005afeb8  MOV EAX,dword ptr [EBP + 0x8]
005afebb  MOV ECX,dword ptr [EBP + -0x8]
005afebe  MOV dword ptr [EAX],ECX
005afec0  MOV EDX,dword ptr [EBP + -0x4]
005afec3  MOV dword ptr [EAX + 0x4],EDX
005afec6  MOV EAX,dword ptr [EBP + 0x8]
005afec9  MOV ESP,EBP
005afecb  POP EBP
005afecc  RET 0x8
