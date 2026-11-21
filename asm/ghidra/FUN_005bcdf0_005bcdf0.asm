; FUN_005bcdf0  005bcdf0
005bcdf0  PUSH EBP
005bcdf1  MOV EBP,ESP
005bcdf3  SUB ESP,0x1c
005bcdf6  MOV dword ptr [EBP + -0x18],ECX
005bcdf9  MOV byte ptr [EBP + -0x5],0x1
005bcdfd  MOV EAX,dword ptr [EBP + 0x8]
005bce00  PUSH EAX
005bce01  MOV ECX,dword ptr [EBP + -0x18]
005bce04  CALL 0x005c15c0
005bce09  MOVZX ECX,AL
005bce0c  TEST ECX,ECX
005bce0e  JZ 0x005bce17
005bce10  MOV AL,0x1
005bce12  JMP 0x005bce9d
005bce17  MOV EDX,dword ptr [EBP + 0x8]
005bce1a  MOV dword ptr [EBP + -0x1c],EDX
005bce1d  CMP dword ptr [EBP + -0x1c],0x5e
005bce21  JZ 0x005bce25
005bce23  JMP 0x005bce96
005bce25  MOV EAX,dword ptr [EBP + -0x18]
005bce28  MOV EDX,dword ptr [EAX]
005bce2a  MOV ECX,dword ptr [EBP + -0x18]
005bce2d  MOV EAX,dword ptr [EDX + 0x28]
005bce30  CALL EAX
005bce32  MOVZX ECX,AL
005bce35  TEST ECX,ECX
005bce37  JZ 0x005bce4d
005bce39  MOV EDX,dword ptr [EBP + -0x18]
005bce3c  MOV EAX,dword ptr [EDX]
005bce3e  MOV ECX,dword ptr [EBP + -0x18]
005bce41  MOV EDX,dword ptr [EAX + 0x24]
005bce44  CALL EDX
005bce46  MOVZX EAX,AL
005bce49  TEST EAX,EAX
005bce4b  JZ 0x005bce4f
005bce4d  JMP 0x005bce9a
005bce4f  MOV ECX,dword ptr [EBP + -0x18]
005bce52  MOV EDX,dword ptr [ECX + 0x4]
005bce55  MOV EAX,dword ptr [EDX + 0x8]
005bce58  MOV dword ptr [EBP + -0xc],EAX
005bce5b  MOV ECX,dword ptr [EBP + -0x18]
005bce5e  MOV EDX,dword ptr [ECX + 0x4]
005bce61  MOV dword ptr [EBP + -0x14],EDX
005bce64  MOV ECX,dword ptr [EBP + -0x14]
005bce67  CALL 0x005c9140
005bce6c  MOV EAX,dword ptr [EBP + -0x14]
005bce6f  MOV ECX,dword ptr [EAX + 0x4]
005bce72  MOV dword ptr [EBP + -0x10],ECX
005bce75  MOV EDX,dword ptr [EBP + -0xc]
005bce78  CMP EDX,dword ptr [EBP + -0x10]
005bce7b  JLE 0x005bce7f
005bce7d  JMP 0x005bce9a
005bce7f  MOV EAX,dword ptr [EBP + -0x18]
005bce82  MOV ECX,dword ptr [EAX + 0x4]
005bce85  CALL 0x005c8fc0
005bce8a  PUSH 0x1
005bce8c  MOV ECX,dword ptr [EBP + -0x18]
005bce8f  CALL 0x005bceb0
005bce94  JMP 0x005bce9a
005bce96  MOV byte ptr [EBP + -0x5],0x0
005bce9a  MOV AL,byte ptr [EBP + -0x5]
005bce9d  MOV ESP,EBP
005bce9f  POP EBP
005bcea0  RET 0x4
