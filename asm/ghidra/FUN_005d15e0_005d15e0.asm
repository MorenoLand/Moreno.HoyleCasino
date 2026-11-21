; FUN_005d15e0  005d15e0
005d15e0  PUSH EBP
005d15e1  MOV EBP,ESP
005d15e3  PUSH -0x1
005d15e5  PUSH 0x6a8e0b
005d15ea  MOV EAX,FS:[0x0]
005d15f0  PUSH EAX
005d15f1  SUB ESP,0x1c
005d15f4  MOV EAX,[0x00781870]
005d15f9  XOR EAX,EBP
005d15fb  PUSH EAX
005d15fc  LEA EAX,[EBP + -0xc]
005d15ff  MOV FS:[0x0],EAX
005d1605  MOV dword ptr [EBP + -0x20],ECX
005d1608  MOV EAX,dword ptr [EBP + -0x20]
005d160b  MOV dword ptr [EAX],0x6d34e4
005d1611  MOV dword ptr [EBP + -0x4],0x0
005d1618  MOV dword ptr [0x007947dc],0x0
005d1622  MOV ECX,dword ptr [EBP + -0x20]
005d1625  MOV EDX,dword ptr [ECX + 0x88]
005d162b  MOV dword ptr [EBP + -0x14],EDX
005d162e  MOV EAX,dword ptr [EBP + -0x14]
005d1631  MOV dword ptr [EBP + -0x10],EAX
005d1634  CMP dword ptr [EBP + -0x10],0x0
005d1638  JZ 0x005d164d
005d163a  PUSH 0x1
005d163c  MOV ECX,dword ptr [EBP + -0x10]
005d163f  MOV EDX,dword ptr [ECX]
005d1641  MOV ECX,dword ptr [EBP + -0x10]
005d1644  MOV EAX,dword ptr [EDX]
005d1646  CALL EAX
005d1648  MOV dword ptr [EBP + -0x24],EAX
005d164b  JMP 0x005d1654
005d164d  MOV dword ptr [EBP + -0x24],0x0
005d1654  MOV ECX,dword ptr [EBP + -0x20]
005d1657  MOV EDX,dword ptr [ECX + 0x8c]
005d165d  MOV dword ptr [EBP + -0x1c],EDX
005d1660  MOV EAX,dword ptr [EBP + -0x1c]
005d1663  MOV dword ptr [EBP + -0x18],EAX
005d1666  CMP dword ptr [EBP + -0x18],0x0
005d166a  JZ 0x005d167f
005d166c  PUSH 0x1
005d166e  MOV ECX,dword ptr [EBP + -0x18]
005d1671  MOV EDX,dword ptr [ECX]
005d1673  MOV ECX,dword ptr [EBP + -0x18]
005d1676  MOV EAX,dword ptr [EDX]
005d1678  CALL EAX
005d167a  MOV dword ptr [EBP + -0x28],EAX
005d167d  JMP 0x005d1686
005d167f  MOV dword ptr [EBP + -0x28],0x0
005d1686  MOV dword ptr [EBP + -0x4],0xffffffff
005d168d  MOV ECX,dword ptr [EBP + -0x20]
005d1690  CALL 0x005d7bd0
005d1695  MOV ECX,dword ptr [EBP + -0xc]
005d1698  MOV dword ptr FS:[0x0],ECX
005d169f  POP ECX
005d16a0  MOV ESP,EBP
005d16a2  POP EBP
005d16a3  RET
