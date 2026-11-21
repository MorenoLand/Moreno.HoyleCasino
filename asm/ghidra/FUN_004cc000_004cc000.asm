; FUN_004cc000  004cc000
004cc000  PUSH EBP
004cc001  MOV EBP,ESP
004cc003  SUB ESP,0x14
004cc006  MOV dword ptr [EBP + -0x4],ECX
004cc009  MOV EAX,dword ptr [EBP + -0x4]
004cc00c  MOVSX ECX,word ptr [EAX + 0x64]
004cc010  TEST ECX,ECX
004cc012  JNZ 0x004cc034
004cc014  MOV EDX,dword ptr [EBP + -0x4]
004cc017  MOVSX EAX,word ptr [EDX + 0x11e]
004cc01e  MOV dword ptr [EBP + -0x8],EAX
004cc021  FILD dword ptr [EBP + -0x8]
004cc024  FDIV double ptr [0x006b4b00]
004cc02a  JMP 0x004cc0c3
004cc034  MOV ECX,dword ptr [EBP + -0x4]
004cc037  MOVSX EDX,word ptr [ECX + 0x64]
004cc03b  CMP EDX,0x1
004cc03e  JNZ 0x004cc05a
004cc040  MOV EAX,dword ptr [EBP + -0x4]
004cc043  MOVSX ECX,word ptr [EAX + 0x11e]
004cc04a  MOV dword ptr [EBP + -0xc],ECX
004cc04d  FILD dword ptr [EBP + -0xc]
004cc050  FDIV double ptr [0x006bf718]
004cc056  JMP 0x004cc0c3
004cc05a  MOV EDX,dword ptr [EBP + -0x4]
004cc05d  MOVSX EAX,word ptr [EDX + 0x64]
004cc061  CMP EAX,0x2
004cc064  JNZ 0x004cc080
004cc066  MOV ECX,dword ptr [EBP + -0x4]
004cc069  MOVSX EDX,word ptr [ECX + 0x11e]
004cc070  MOV dword ptr [EBP + -0x10],EDX
004cc073  FILD dword ptr [EBP + -0x10]
004cc076  FDIV double ptr [0x006bf710]
004cc07c  JMP 0x004cc0c3
004cc080  MOV EAX,dword ptr [EBP + -0x4]
004cc083  MOVSX ECX,word ptr [EAX + 0x64]
004cc087  CMP ECX,0x3
004cc08a  JNZ 0x004cc0a6
004cc08c  MOV EDX,dword ptr [EBP + -0x4]
004cc08f  MOVSX EAX,word ptr [EDX + 0x11e]
004cc096  MOV dword ptr [EBP + -0x14],EAX
004cc099  FILD dword ptr [EBP + -0x14]
004cc09c  FDIV double ptr [0x006bf708]
004cc0a2  JMP 0x004cc0c3
004cc0a6  XOR ECX,ECX
004cc0a8  JNZ 0x004cc0c1
004cc0aa  PUSH 0x96b
004cc0af  PUSH 0x6bf384
004cc0b4  PUSH 0x6b2b64
004cc0b9  CALL 0x005e9f20
004cc0be  ADD ESP,0xc
004cc0c1  FLDZ
004cc0c3  MOV ESP,EBP
004cc0c5  POP EBP
004cc0c6  RET
