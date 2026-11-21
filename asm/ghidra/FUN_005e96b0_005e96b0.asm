; FUN_005e96b0  005e96b0
005e96b0  PUSH EBP
005e96b1  MOV EBP,ESP
005e96b3  SUB ESP,0x10
005e96b6  MOV dword ptr [EBP + -0xc],ECX
005e96b9  MOV dword ptr [EBP + -0x4],0x0
005e96c0  MOV dword ptr [EBP + -0x8],0x0
005e96c7  CMP dword ptr [EBP + 0x8],0x1f4
005e96ce  JL 0x005e9741
005e96d0  MOV EAX,dword ptr [EBP + 0x8]
005e96d3  SUB EAX,0x1f4
005e96d8  MOV dword ptr [EBP + -0x8],EAX
005e96db  MOV ECX,dword ptr [EBP + -0x8]
005e96de  MOV dword ptr [EBP + -0x10],ECX
005e96e1  CMP dword ptr [EBP + -0x10],0x3
005e96e5  JA 0x005e9713
005e96e7  MOV EDX,dword ptr [EBP + -0x10]
005e96ea  JMP dword ptr [EDX*0x4 + 0x5e9784]
005e96f1  MOV dword ptr [EBP + -0x8],0x3
005e96f8  JMP 0x005e9713
005e96fa  MOV dword ptr [EBP + -0x8],0x4
005e9701  JMP 0x005e9713
005e9703  MOV dword ptr [EBP + -0x8],0x6
005e970a  JMP 0x005e9713
005e970c  MOV dword ptr [EBP + -0x8],0x8
005e9713  PUSH 0x1
005e9715  MOV EAX,[0x0162ee84]
005e971a  MOV ECX,dword ptr [EAX + 0x14]
005e971d  CALL 0x005fb2b0
005e9722  MOV dword ptr [EBP + -0x4],EAX
005e9725  CMP dword ptr [EBP + -0x4],0x0
005e9729  JZ 0x005e973f
005e972b  MOV ECX,dword ptr [EBP + -0x8]
005e972e  PUSH ECX
005e972f  MOV EDX,dword ptr [EBP + -0x4]
005e9732  MOV EAX,dword ptr [EDX]
005e9734  MOV ECX,dword ptr [EBP + -0x4]
005e9737  MOV EDX,dword ptr [EAX + 0xb0]
005e973d  CALL EDX
005e973f  JMP 0x005e977d
005e9741  CMP dword ptr [EBP + 0x8],0x64
005e9745  JL 0x005e977d
005e9747  MOV EAX,dword ptr [EBP + 0x8]
005e974a  SUB EAX,0x64
005e974d  MOV dword ptr [EBP + -0x8],EAX
005e9750  PUSH 0x0
005e9752  MOV ECX,dword ptr [0x0162ee84]
005e9758  MOV ECX,dword ptr [ECX + 0x14]
005e975b  CALL 0x005fb2b0
005e9760  MOV dword ptr [EBP + -0x4],EAX
005e9763  CMP dword ptr [EBP + -0x4],0x0
005e9767  JZ 0x005e977d
005e9769  MOV EDX,dword ptr [EBP + -0x8]
005e976c  PUSH EDX
005e976d  MOV EAX,dword ptr [EBP + -0x4]
005e9770  MOV EDX,dword ptr [EAX]
005e9772  MOV ECX,dword ptr [EBP + -0x4]
005e9775  MOV EAX,dword ptr [EDX + 0xb0]
005e977b  CALL EAX
005e977d  MOV ESP,EBP
005e977f  POP EBP
005e9780  RET 0x4
