; FUN_004fb2c0  004fb2c0
004fb2c0  PUSH EBP
004fb2c1  MOV EBP,ESP
004fb2c3  SUB ESP,0x28
004fb2c6  MOV dword ptr [EBP + -0x28],ECX
004fb2c9  MOV EAX,dword ptr [EBP + 0x8]
004fb2cc  PUSH EAX
004fb2cd  CALL 0x005dcb00
004fb2d2  ADD ESP,0x4
004fb2d5  MOV dword ptr [EBP + -0x14],EAX
004fb2d8  MOV ECX,dword ptr [EBP + -0x14]
004fb2db  MOV EDX,dword ptr [ECX + 0x8]
004fb2de  MOV dword ptr [EBP + -0x4],EDX
004fb2e1  CMP dword ptr [EBP + 0xc],0x0
004fb2e5  JZ 0x004fb2f6
004fb2e7  MOV EAX,dword ptr [EBP + 0xc]
004fb2ea  MOV ECX,dword ptr [EAX + 0x8]
004fb2ed  MOV dword ptr [EBP + -0x18],ECX
004fb2f0  CMP dword ptr [EBP + -0x18],-0x1
004fb2f4  JNZ 0x004fb30b
004fb2f6  MOV EDX,dword ptr [EBP + 0xc]
004fb2f9  PUSH EDX
004fb2fa  MOV EAX,dword ptr [EBP + 0x8]
004fb2fd  PUSH EAX
004fb2fe  MOV ECX,dword ptr [EBP + -0x28]
004fb301  CALL 0x0064da20
004fb306  JMP 0x004fb3f0
004fb30b  PUSH 0x0
004fb30d  MOV ECX,dword ptr [EBP + 0xc]
004fb310  PUSH ECX
004fb311  MOV EDX,dword ptr [EBP + 0x8]
004fb314  PUSH EDX
004fb315  MOV EAX,dword ptr [EBP + -0x28]
004fb318  MOV EDX,dword ptr [EAX]
004fb31a  MOV ECX,dword ptr [EBP + -0x28]
004fb31d  MOV EAX,dword ptr [EDX + 0x140]
004fb323  CALL EAX
004fb325  MOVZX ECX,AL
004fb328  TEST ECX,ECX
004fb32a  JNZ 0x004fb341
004fb32c  MOV EDX,dword ptr [EBP + 0xc]
004fb32f  PUSH EDX
004fb330  MOV EAX,dword ptr [EBP + 0x8]
004fb333  PUSH EAX
004fb334  MOV ECX,dword ptr [EBP + -0x28]
004fb337  CALL 0x0064da20
004fb33c  JMP 0x004fb3f0
004fb341  CMP dword ptr [EBP + 0xc],0x0
004fb345  JNZ 0x004fb35c
004fb347  MOV ECX,dword ptr [EBP + 0xc]
004fb34a  PUSH ECX
004fb34b  MOV EDX,dword ptr [EBP + 0x8]
004fb34e  PUSH EDX
004fb34f  MOV ECX,dword ptr [EBP + -0x28]
004fb352  CALL 0x0064da20
004fb357  JMP 0x004fb3f0
004fb35c  MOV EAX,dword ptr [EBP + 0xc]
004fb35f  PUSH EAX
004fb360  MOV ECX,dword ptr [EBP + 0x8]
004fb363  PUSH ECX
004fb364  MOV ECX,dword ptr [EBP + -0x28]
004fb367  CALL 0x0064da20
004fb36c  MOV EDX,dword ptr [EBP + 0xc]
004fb36f  MOV EAX,dword ptr [EDX + 0x8]
004fb372  MOV dword ptr [EBP + -0x1c],EAX
004fb375  MOV ECX,dword ptr [EBP + -0x4]
004fb378  CMP ECX,dword ptr [EBP + -0x1c]
004fb37b  JZ 0x004fb3f0
004fb37d  MOV EDX,dword ptr [EBP + 0xc]
004fb380  MOV EAX,dword ptr [EDX + 0x8]
004fb383  MOV dword ptr [EBP + -0x8],EAX
004fb386  MOV dword ptr [EBP + -0xc],0x0
004fb38d  MOV dword ptr [EBP + -0x10],0x0
004fb394  JMP 0x004fb39f
004fb396  MOV ECX,dword ptr [EBP + -0x10]
004fb399  ADD ECX,0x1
004fb39c  MOV dword ptr [EBP + -0x10],ECX
004fb39f  MOV ECX,dword ptr [0x00791364]
004fb3a5  CALL 0x0047f950
004fb3aa  CMP dword ptr [EBP + -0x10],EAX
004fb3ad  JGE 0x004fb3f0
004fb3af  MOV EDX,dword ptr [EBP + -0x10]
004fb3b2  PUSH EDX
004fb3b3  MOV ECX,dword ptr [0x00791364]
004fb3b9  CALL 0x0047e390
004fb3be  MOV dword ptr [EBP + -0xc],EAX
004fb3c1  MOV EAX,dword ptr [EBP + -0xc]
004fb3c4  MOV ECX,dword ptr [EAX + 0x4]
004fb3c7  PUSH ECX
004fb3c8  CALL 0x005dcb00
004fb3cd  ADD ESP,0x4
004fb3d0  MOV dword ptr [EBP + -0x20],EAX
004fb3d3  MOV EDX,dword ptr [EBP + -0x20]
004fb3d6  MOV EAX,dword ptr [EDX + 0x8]
004fb3d9  MOV dword ptr [EBP + -0x24],EAX
004fb3dc  MOV ECX,dword ptr [EBP + -0x24]
004fb3df  CMP ECX,dword ptr [EBP + -0x8]
004fb3e2  JNZ 0x004fb3ee
004fb3e4  MOV ECX,dword ptr [EBP + -0xc]
004fb3e7  CALL 0x004c6550
004fb3ec  JMP 0x004fb3f0
004fb3ee  JMP 0x004fb396
004fb3f0  MOV ESP,EBP
004fb3f2  POP EBP
004fb3f3  RET 0x8
