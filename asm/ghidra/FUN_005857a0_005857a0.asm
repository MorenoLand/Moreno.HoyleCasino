; FUN_005857a0  005857a0
005857a0  PUSH EBP
005857a1  MOV EBP,ESP
005857a3  SUB ESP,0x8
005857a6  MOV dword ptr [EBP + -0x8],ECX
005857a9  MOV EAX,dword ptr [EBP + -0x8]
005857ac  MOV ECX,dword ptr [EAX + 0x4]
005857af  MOV byte ptr [ECX],0x0
005857b2  MOV EDX,dword ptr [EBP + -0x8]
005857b5  MOV EAX,dword ptr [EDX + 0x4]
005857b8  MOV byte ptr [EAX + 0x1],0x1
005857bc  MOV ECX,dword ptr [EBP + -0x8]
005857bf  MOV EDX,dword ptr [ECX + 0x4]
005857c2  MOV byte ptr [EDX + 0x2],0x1
005857c6  MOV EAX,dword ptr [EBP + -0x8]
005857c9  MOV ECX,dword ptr [EAX + 0x4]
005857cc  MOV byte ptr [ECX + 0x3],0x0
005857d0  MOV EDX,dword ptr [EBP + -0x8]
005857d3  MOV EAX,dword ptr [EDX + 0x4]
005857d6  MOV byte ptr [EAX + 0x4],0x0
005857da  MOV ECX,dword ptr [EBP + -0x8]
005857dd  MOV EDX,dword ptr [ECX + 0x4]
005857e0  MOV dword ptr [EDX + 0x1c],0x0
005857e7  MOV EAX,dword ptr [EBP + -0x8]
005857ea  MOV ECX,dword ptr [EAX + 0x4]
005857ed  MOV dword ptr [ECX + 0x20],0x0
005857f4  MOV dword ptr [EBP + -0x4],0x0
005857fb  JMP 0x00585806
005857fd  MOV EDX,dword ptr [EBP + -0x4]
00585800  ADD EDX,0x1
00585803  MOV dword ptr [EBP + -0x4],EDX
00585806  CMP dword ptr [EBP + -0x4],0x14
0058580a  JGE 0x0058581c
0058580c  MOV EAX,dword ptr [EBP + -0x8]
0058580f  MOV ECX,dword ptr [EAX + 0x4]
00585812  MOV EDX,dword ptr [EBP + -0x4]
00585815  MOV byte ptr [ECX + EDX*0x1 + 0x5],0x0
0058581a  JMP 0x005857fd
0058581c  MOV ECX,dword ptr [EBP + -0x8]
0058581f  CALL 0x00585830
00585824  MOV ESP,EBP
00585826  POP EBP
00585827  RET
