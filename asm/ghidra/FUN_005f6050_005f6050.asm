; FUN_005f6050  005f6050
005f6050  PUSH EBP
005f6051  MOV EBP,ESP
005f6053  SUB ESP,0x10
005f6056  MOV dword ptr [EBP + -0xc],ECX
005f6059  MOV EAX,dword ptr [EBP + -0xc]
005f605c  CMP dword ptr [EAX + 0x18c],0x0
005f6063  JZ 0x005f6097
005f6065  MOV ECX,dword ptr [EBP + -0xc]
005f6068  MOV EDX,dword ptr [ECX + 0x18c]
005f606e  MOV dword ptr [EBP + -0x8],EDX
005f6071  MOV EAX,dword ptr [EBP + -0x8]
005f6074  MOV dword ptr [EBP + -0x4],EAX
005f6077  CMP dword ptr [EBP + -0x4],0x0
005f607b  JZ 0x005f6090
005f607d  PUSH 0x1
005f607f  MOV ECX,dword ptr [EBP + -0x4]
005f6082  MOV EDX,dword ptr [ECX]
005f6084  MOV ECX,dword ptr [EBP + -0x4]
005f6087  MOV EAX,dword ptr [EDX]
005f6089  CALL EAX
005f608b  MOV dword ptr [EBP + -0x10],EAX
005f608e  JMP 0x005f6097
005f6090  MOV dword ptr [EBP + -0x10],0x0
005f6097  MOV ECX,dword ptr [EBP + -0xc]
005f609a  MOV EDX,dword ptr [EBP + 0x8]
005f609d  MOV dword ptr [ECX + 0x18c],EDX
005f60a3  MOV EAX,dword ptr [EBP + -0xc]
005f60a6  CMP dword ptr [EAX + 0x18c],0x0
005f60ad  JZ 0x005f60cc
005f60af  MOV ECX,dword ptr [EBP + -0xc]
005f60b2  PUSH ECX
005f60b3  MOV EDX,dword ptr [EBP + -0xc]
005f60b6  MOV EAX,dword ptr [EDX + 0x18c]
005f60bc  MOV ECX,dword ptr [EBP + -0xc]
005f60bf  MOV ECX,dword ptr [ECX + 0x18c]
005f60c5  MOV EDX,dword ptr [EAX]
005f60c7  MOV EAX,dword ptr [EDX + 0x4]
005f60ca  CALL EAX
005f60cc  MOV ESP,EBP
005f60ce  POP EBP
005f60cf  RET 0x4
