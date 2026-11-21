; FUN_005ab660  005ab660
005ab660  PUSH EBP
005ab661  MOV EBP,ESP
005ab663  SUB ESP,0x18
005ab666  MOV dword ptr [EBP + -0x10],ECX
005ab669  MOV EAX,dword ptr [EBP + 0x8]
005ab66c  MOVZX ECX,byte ptr [EAX + 0x4]
005ab670  TEST ECX,ECX
005ab672  JZ 0x005ab679
005ab674  JMP 0x005ab7e2
005ab679  MOV ECX,dword ptr [0x00793604]
005ab67f  CALL 0x005b4f00
005ab684  CMP EAX,-0x1
005ab687  JZ 0x005ab6fa
005ab689  MOV ECX,dword ptr [0x00793604]
005ab68f  CALL 0x005b4f00
005ab694  CMP EAX,0x4
005ab697  JZ 0x005ab6fa
005ab699  MOV ECX,dword ptr [0x00793604]
005ab69f  CALL 0x005b4f00
005ab6a4  PUSH EAX
005ab6a5  CALL 0x005dcb00
005ab6aa  ADD ESP,0x4
005ab6ad  MOV dword ptr [EBP + -0xc],EAX
005ab6b0  MOV ECX,dword ptr [EBP + -0xc]
005ab6b3  CALL 0x0063aac0
005ab6b8  MOV EDX,dword ptr [EAX]
005ab6ba  MOV dword ptr [EBP + -0x4],EDX
005ab6bd  CMP dword ptr [EBP + -0x4],0x2
005ab6c1  JZ 0x005ab6df
005ab6c3  MOV ECX,dword ptr [EBP + -0xc]
005ab6c6  CALL 0x0063aac0
005ab6cb  MOV EAX,dword ptr [EAX]
005ab6cd  MOV dword ptr [EBP + -0x8],EAX
005ab6d0  CMP dword ptr [EBP + -0x8],0x3
005ab6d4  JZ 0x005ab6df
005ab6d6  MOV dword ptr [EBP + -0x14],0x0
005ab6dd  JMP 0x005ab6e6
005ab6df  MOV dword ptr [EBP + -0x14],0x1
005ab6e6  MOVZX ECX,byte ptr [EBP + -0x14]
005ab6ea  TEST ECX,ECX
005ab6ec  JZ 0x005ab6fa
005ab6ee  MOV EDX,dword ptr [0x007935f8]
005ab6f4  CMP dword ptr [EDX + 0x34],0x0
005ab6f8  JNZ 0x005ab6ff
005ab6fa  JMP 0x005ab7e2
005ab6ff  MOV EAX,dword ptr [EBP + 0x8]
005ab702  MOV ECX,dword ptr [EAX + 0x18]
005ab705  MOV dword ptr [EBP + -0x18],ECX
005ab708  CMP dword ptr [EBP + -0x18],0x1
005ab70c  JZ 0x005ab719
005ab70e  CMP dword ptr [EBP + -0x18],0x2
005ab712  JZ 0x005ab78f
005ab714  JMP 0x005ab7e2
005ab719  MOV EDX,dword ptr [EBP + 0x8]
005ab71c  MOV EAX,dword ptr [EDX + 0x1c]
005ab71f  AND EAX,0x18
005ab722  JZ 0x005ab78d
005ab724  MOV ECX,dword ptr [EBP + -0x10]
005ab727  MOV EDX,dword ptr [ECX]
005ab729  MOV ECX,dword ptr [EBP + -0x10]
005ab72c  MOV EAX,dword ptr [EDX + 0xa8]
005ab732  CALL EAX
005ab734  MOVZX ECX,AL
005ab737  TEST ECX,ECX
005ab739  JNZ 0x005ab78d
005ab73b  MOV EDX,dword ptr [EBP + -0x10]
005ab73e  MOV EAX,dword ptr [EBP + 0x8]
005ab741  MOV ECX,dword ptr [EAX + 0x8]
005ab744  MOV dword ptr [EDX + 0x48],ECX
005ab747  MOV EDX,dword ptr [EBP + -0x10]
005ab74a  MOV EAX,dword ptr [EBP + 0x8]
005ab74d  MOV ECX,dword ptr [EAX + 0xc]
005ab750  MOV dword ptr [EDX + 0x4c],ECX
005ab753  MOV EDX,dword ptr [EBP + -0x10]
005ab756  MOV byte ptr [EDX + 0x8],0x1
005ab75a  MOV EAX,dword ptr [EBP + -0x10]
005ab75d  MOV byte ptr [EAX + 0x9],0x1
005ab761  MOV ECX,dword ptr [EBP + 0x8]
005ab764  MOV EDX,dword ptr [ECX + 0x1c]
005ab767  AND EDX,0x8
005ab76a  JZ 0x005ab778
005ab76c  MOV EAX,dword ptr [EBP + -0x10]
005ab76f  MOV dword ptr [EAX + 0x58],0x8
005ab776  JMP 0x005ab78d
005ab778  MOV ECX,dword ptr [EBP + 0x8]
005ab77b  MOV EDX,dword ptr [ECX + 0x1c]
005ab77e  AND EDX,0x10
005ab781  JZ 0x005ab78d
005ab783  MOV EAX,dword ptr [EBP + -0x10]
005ab786  MOV dword ptr [EAX + 0x58],0x10
005ab78d  JMP 0x005ab7e2
005ab78f  MOV ECX,dword ptr [EBP + 0x8]
005ab792  MOV EDX,dword ptr [EBP + -0x10]
005ab795  MOV EAX,dword ptr [ECX + 0x1c]
005ab798  AND EAX,dword ptr [EDX + 0x58]
005ab79b  JZ 0x005ab7e2
005ab79d  MOV ECX,dword ptr [EBP + -0x10]
005ab7a0  MOV EDX,dword ptr [ECX]
005ab7a2  MOV ECX,dword ptr [EBP + -0x10]
005ab7a5  MOV EAX,dword ptr [EDX + 0xa8]
005ab7ab  CALL EAX
005ab7ad  MOVZX ECX,AL
005ab7b0  TEST ECX,ECX
005ab7b2  JZ 0x005ab7e2
005ab7b4  MOV EDX,dword ptr [EBP + -0x10]
005ab7b7  MOV EAX,dword ptr [EBP + 0x8]
005ab7ba  MOV ECX,dword ptr [EAX + 0x8]
005ab7bd  MOV dword ptr [EDX + 0x50],ECX
005ab7c0  MOV EDX,dword ptr [EBP + -0x10]
005ab7c3  MOV EAX,dword ptr [EBP + 0x8]
005ab7c6  MOV ECX,dword ptr [EAX + 0xc]
005ab7c9  MOV dword ptr [EDX + 0x54],ECX
005ab7cc  MOV ECX,dword ptr [EBP + -0x10]
005ab7cf  CALL 0x005ab4b0
005ab7d4  MOV EDX,dword ptr [EBP + -0x10]
005ab7d7  MOV byte ptr [EDX + 0x8],0x0
005ab7db  MOV EAX,dword ptr [EBP + -0x10]
005ab7de  MOV byte ptr [EAX + 0x9],0x0
005ab7e2  MOV ESP,EBP
005ab7e4  POP EBP
005ab7e5  RET 0x4
