; FUN_005b51a0  005b51a0
005b51a0  PUSH EBP
005b51a1  MOV EBP,ESP
005b51a3  SUB ESP,0x20
005b51a6  MOV dword ptr [EBP + -0x20],ECX
005b51a9  MOV EAX,dword ptr [EBP + 0xc]
005b51ac  MOV ECX,dword ptr [EBP + -0x20]
005b51af  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x580]
005b51b6  MOV dword ptr [EBP + -0x1c],EDX
005b51b9  MOV EAX,dword ptr [EBP + 0xc]
005b51bc  SHL EAX,0x5
005b51bf  MOV ECX,dword ptr [EBP + -0x1c]
005b51c2  LEA EDX,[ECX + EAX*0x1 + 0x48]
005b51c6  XOR EAX,EAX
005b51c8  SHL EAX,0x3
005b51cb  MOV ECX,dword ptr [EDX + EAX*0x1]
005b51ce  MOV EDX,dword ptr [EDX + EAX*0x1 + 0x4]
005b51d2  MOV dword ptr [EBP + -0x8],ECX
005b51d5  MOV dword ptr [EBP + -0x4],EDX
005b51d8  PUSH 0x0
005b51da  PUSH 0x0
005b51dc  CALL 0x0064c8a0
005b51e1  ADD ESP,0x8
005b51e4  MOV dword ptr [EBP + -0x18],EAX
005b51e7  MOV dword ptr [EBP + -0x14],EDX
005b51ea  MOV EAX,dword ptr [EBP + -0x18]
005b51ed  MOV dword ptr [EBP + -0x10],EAX
005b51f0  MOV ECX,dword ptr [EBP + -0x14]
005b51f3  MOV dword ptr [EBP + -0xc],ECX
005b51f6  MOV EAX,dword ptr [EBP + -0x8]
005b51f9  CDQ
005b51fa  SUB EAX,EDX
005b51fc  SAR EAX,0x1
005b51fe  MOV dword ptr [EBP + -0x10],EAX
005b5201  MOV EDX,dword ptr [EBP + -0x8]
005b5204  AND EDX,0x80000001
005b520a  JNS 0x005b5211
005b520c  DEC EDX
005b520d  OR EDX,0xfffffffe
005b5210  INC EDX
005b5211  CMP EDX,0x1
005b5214  JNZ 0x005b521d
005b5216  MOV dword ptr [EBP + -0xc],0x32
005b521d  MOV EAX,dword ptr [EBP + 0x8]
005b5220  MOV ECX,dword ptr [EBP + -0x10]
005b5223  MOV dword ptr [EAX],ECX
005b5225  MOV EDX,dword ptr [EBP + -0xc]
005b5228  MOV dword ptr [EAX + 0x4],EDX
005b522b  MOV EAX,dword ptr [EBP + 0x8]
005b522e  MOV ESP,EBP
005b5230  POP EBP
005b5231  RET 0x8
