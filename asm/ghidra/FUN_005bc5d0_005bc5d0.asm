; FUN_005bc5d0  005bc5d0
005bc5d0  PUSH EBP
005bc5d1  MOV EBP,ESP
005bc5d3  SUB ESP,0x10
005bc5d6  XOR EAX,EAX
005bc5d8  MOV byte ptr [EBP + -0x1],AL
005bc5db  MOV CL,byte ptr [EBP + -0x3]
005bc5de  MOV byte ptr [EBP + -0x2],CL
005bc5e1  MOV EDX,dword ptr [EBP + 0xc]
005bc5e4  MOV dword ptr [EBP + -0x8],EDX
005bc5e7  MOV EAX,dword ptr [EBP + 0x8]
005bc5ea  MOV dword ptr [EBP + -0x10],EAX
005bc5ed  MOV CL,byte ptr [EBP + -0x1]
005bc5f0  PUSH ECX
005bc5f1  MOV DL,byte ptr [EBP + -0x2]
005bc5f4  PUSH EDX
005bc5f5  MOV EAX,dword ptr [EBP + 0x14]
005bc5f8  PUSH EAX
005bc5f9  MOV ECX,dword ptr [EBP + 0x10]
005bc5fc  PUSH ECX
005bc5fd  MOV EDX,dword ptr [EBP + -0x8]
005bc600  PUSH EDX
005bc601  MOV EAX,dword ptr [EBP + -0x10]
005bc604  PUSH EAX
005bc605  CALL 0x005bc620
005bc60a  ADD ESP,0x18
005bc60d  MOV ESP,EBP
005bc60f  POP EBP
005bc610  RET
