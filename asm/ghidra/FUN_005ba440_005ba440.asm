; FUN_005ba440  005ba440
005ba440  PUSH EBP
005ba441  MOV EBP,ESP
005ba443  SUB ESP,0x30
005ba446  MOV dword ptr [EBP + -0x28],ECX
005ba449  MOV EAX,dword ptr [EBP + -0x28]
005ba44c  CMP dword ptr [EAX + 0x4],0x0
005ba450  JNZ 0x005ba45b
005ba452  MOV dword ptr [EBP + -0x2c],0x0
005ba459  JMP 0x005ba46d
005ba45b  MOV ECX,dword ptr [EBP + -0x28]
005ba45e  MOV EDX,dword ptr [EBP + -0x28]
005ba461  MOV EAX,dword ptr [ECX + 0x8]
005ba464  SUB EAX,dword ptr [EDX + 0x4]
005ba467  SAR EAX,0x2
005ba46a  MOV dword ptr [EBP + -0x2c],EAX
005ba46d  CMP dword ptr [EBP + -0x2c],0x0
005ba471  JNZ 0x005ba47c
005ba473  MOV dword ptr [EBP + -0x30],0x0
005ba47a  JMP 0x005ba4da
005ba47c  MOV ECX,dword ptr [EBP + -0x28]
005ba47f  MOV EDX,dword ptr [ECX + 0x4]
005ba482  MOV dword ptr [EBP + -0x18],EDX
005ba485  MOV dword ptr [EBP + -0xc],0x0
005ba48c  CMP dword ptr [EBP + -0x28],0x0
005ba490  JZ 0x005ba4a8
005ba492  MOV EAX,dword ptr [EBP + -0x28]
005ba495  MOV ECX,dword ptr [EAX + 0x4]
005ba498  CMP ECX,dword ptr [EBP + -0x18]
005ba49b  JA 0x005ba4a8
005ba49d  MOV EDX,dword ptr [EBP + -0x28]
005ba4a0  MOV EAX,dword ptr [EBP + -0x18]
005ba4a3  CMP EAX,dword ptr [EDX + 0x8]
005ba4a6  JBE 0x005ba4ae
005ba4a8  CALL dword ptr [0x006b2274]
005ba4ae  MOV ECX,dword ptr [EBP + -0x28]
005ba4b1  MOV dword ptr [EBP + -0xc],ECX
005ba4b4  MOV EDX,dword ptr [EBP + -0x18]
005ba4b7  MOV dword ptr [EBP + -0x8],EDX
005ba4ba  CMP dword ptr [EBP + 0xc],0x0
005ba4be  JZ 0x005ba4c8
005ba4c0  MOV EAX,dword ptr [EBP + 0xc]
005ba4c3  CMP EAX,dword ptr [EBP + -0xc]
005ba4c6  JZ 0x005ba4ce
005ba4c8  CALL dword ptr [0x006b2274]
005ba4ce  MOV ECX,dword ptr [EBP + 0x10]
005ba4d1  SUB ECX,dword ptr [EBP + -0x8]
005ba4d4  SAR ECX,0x2
005ba4d7  MOV dword ptr [EBP + -0x30],ECX
005ba4da  MOV EDX,dword ptr [EBP + -0x30]
005ba4dd  MOV dword ptr [EBP + -0x4],EDX
005ba4e0  MOV EAX,dword ptr [EBP + 0x14]
005ba4e3  PUSH EAX
005ba4e4  PUSH 0x1
005ba4e6  MOV ECX,dword ptr [EBP + 0x10]
005ba4e9  PUSH ECX
005ba4ea  MOV EDX,dword ptr [EBP + 0xc]
005ba4ed  PUSH EDX
005ba4ee  MOV ECX,dword ptr [EBP + -0x28]
005ba4f1  CALL 0x005bafc0
005ba4f6  MOV EAX,dword ptr [EBP + -0x28]
005ba4f9  MOV ECX,dword ptr [EAX + 0x4]
005ba4fc  MOV dword ptr [EBP + -0x1c],ECX
005ba4ff  MOV dword ptr [EBP + -0x14],0x0
005ba506  CMP dword ptr [EBP + -0x28],0x0
005ba50a  JZ 0x005ba522
005ba50c  MOV EDX,dword ptr [EBP + -0x28]
005ba50f  MOV EAX,dword ptr [EDX + 0x4]
005ba512  CMP EAX,dword ptr [EBP + -0x1c]
005ba515  JA 0x005ba522
005ba517  MOV ECX,dword ptr [EBP + -0x28]
005ba51a  MOV EDX,dword ptr [EBP + -0x1c]
005ba51d  CMP EDX,dword ptr [ECX + 0x8]
005ba520  JBE 0x005ba528
005ba522  CALL dword ptr [0x006b2274]
005ba528  MOV EAX,dword ptr [EBP + -0x28]
005ba52b  MOV dword ptr [EBP + -0x14],EAX
005ba52e  MOV ECX,dword ptr [EBP + -0x1c]
005ba531  MOV dword ptr [EBP + -0x10],ECX
005ba534  MOV EDX,dword ptr [EBP + -0x14]
005ba537  MOV EAX,dword ptr [EBP + -0x10]
005ba53a  MOV dword ptr [EBP + -0x24],EDX
005ba53d  MOV dword ptr [EBP + -0x20],EAX
005ba540  MOV ECX,dword ptr [EBP + -0x4]
005ba543  PUSH ECX
005ba544  LEA ECX,[EBP + -0x24]
005ba547  CALL 0x005beeb0
005ba54c  MOV EDX,dword ptr [EBP + -0x24]
005ba54f  MOV EAX,dword ptr [EBP + -0x20]
005ba552  MOV ECX,dword ptr [EBP + 0x8]
005ba555  MOV dword ptr [ECX],EDX
005ba557  MOV dword ptr [ECX + 0x4],EAX
005ba55a  MOV EAX,dword ptr [EBP + 0x8]
005ba55d  MOV ESP,EBP
005ba55f  POP EBP
005ba560  RET 0x10
