; FUN_004c70f0  004c70f0
004c70f0  PUSH EBP
004c70f1  MOV EBP,ESP
004c70f3  SUB ESP,0x8
004c70f6  MOV dword ptr [EBP + -0x4],ECX
004c70f9  MOV EAX,dword ptr [EBP + -0x4]
004c70fc  MOV ECX,dword ptr [EBP + 0x8]
004c70ff  MOV dword ptr [EAX + 0x8c],ECX
004c7105  MOV EDX,dword ptr [EBP + -0x4]
004c7108  MOV EAX,dword ptr [EDX + 0x8c]
004c710e  MOV dword ptr [EBP + -0x8],EAX
004c7111  MOV ECX,dword ptr [EBP + -0x8]
004c7114  ADD ECX,0x1
004c7117  MOV dword ptr [EBP + -0x8],ECX
004c711a  CMP dword ptr [EBP + -0x8],0x8
004c711e  JA 0x004c71fb
004c7124  MOV EDX,dword ptr [EBP + -0x8]
004c7127  JMP dword ptr [EDX*0x4 + 0x4c7204]
004c712e  MOV EAX,dword ptr [EBP + -0x4]
004c7131  MOV dword ptr [EAX + 0x10],0x77
004c7138  MOV ECX,dword ptr [EBP + -0x4]
004c713b  MOV dword ptr [ECX + 0x14],0xd5
004c7142  JMP 0x004c71fb
004c7147  MOV EDX,dword ptr [EBP + -0x4]
004c714a  MOV dword ptr [EDX + 0x10],0xe
004c7151  MOV EAX,dword ptr [EBP + -0x4]
004c7154  MOV dword ptr [EAX + 0x14],0x1e
004c715b  JMP 0x004c71fb
004c7160  MOV ECX,dword ptr [EBP + -0x4]
004c7163  MOV dword ptr [ECX + 0x10],0xda
004c716a  MOV EDX,dword ptr [EBP + -0x4]
004c716d  MOV dword ptr [EDX + 0x14],0x1e
004c7174  JMP 0x004c71fb
004c7179  MOV EAX,dword ptr [EBP + -0x4]
004c717c  MOV dword ptr [EAX + 0x10],0x212
004c7183  MOV ECX,dword ptr [EBP + -0x4]
004c7186  MOV dword ptr [ECX + 0x14],0x1e
004c718d  JMP 0x004c71fb
004c718f  MOV EDX,dword ptr [EBP + -0x4]
004c7192  MOV dword ptr [EDX + 0x10],0x212
004c7199  MOV EAX,dword ptr [EBP + -0x4]
004c719c  MOV dword ptr [EAX + 0x14],0xaa
004c71a3  JMP 0x004c71fb
004c71a5  MOV ECX,dword ptr [EBP + -0x4]
004c71a8  MOV dword ptr [ECX + 0x10],0x212
004c71af  MOV EDX,dword ptr [EBP + -0x4]
004c71b2  MOV dword ptr [EDX + 0x14],0x136
004c71b9  JMP 0x004c71fb
004c71bb  MOV EAX,dword ptr [EBP + -0x4]
004c71be  MOV dword ptr [EAX + 0x10],0x141
004c71c5  MOV ECX,dword ptr [EBP + -0x4]
004c71c8  MOV dword ptr [ECX + 0x14],0x136
004c71cf  JMP 0x004c71fb
004c71d1  MOV EDX,dword ptr [EBP + -0x4]
004c71d4  MOV dword ptr [EDX + 0x10],0xe
004c71db  MOV EAX,dword ptr [EBP + -0x4]
004c71de  MOV dword ptr [EAX + 0x14],0x136
004c71e5  JMP 0x004c71fb
004c71e7  MOV ECX,dword ptr [EBP + -0x4]
004c71ea  MOV dword ptr [ECX + 0x10],0xe
004c71f1  MOV EDX,dword ptr [EBP + -0x4]
004c71f4  MOV dword ptr [EDX + 0x14],0xaa
004c71fb  MOV ESP,EBP
004c71fd  POP EBP
004c71fe  RET 0x4
