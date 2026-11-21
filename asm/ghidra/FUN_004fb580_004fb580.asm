; FUN_004fb580  004fb580
004fb580  PUSH EBP
004fb581  MOV EBP,ESP
004fb583  SUB ESP,0x14
004fb586  MOV dword ptr [EBP + -0x14],ECX
004fb589  CMP dword ptr [0x00791eb8],0x0
004fb590  JZ 0x004fb5a0
004fb592  MOV EAX,[0x00791eb8]
004fb597  CMP dword ptr [EAX + 0xa4],0x0
004fb59e  JNZ 0x004fb5a5
004fb5a0  JMP 0x004fb633
004fb5a5  MOV dword ptr [EBP + -0x8],0x7
004fb5ac  JMP 0x004fb5b7
004fb5ae  MOV ECX,dword ptr [EBP + -0x8]
004fb5b1  SUB ECX,0x1
004fb5b4  MOV dword ptr [EBP + -0x8],ECX
004fb5b7  CMP dword ptr [EBP + -0x8],0x0
004fb5bb  JL 0x004fb633
004fb5bd  MOV EDX,dword ptr [EBP + -0x8]
004fb5c0  PUSH EDX
004fb5c1  MOV ECX,dword ptr [0x00791364]
004fb5c7  CALL 0x0047e390
004fb5cc  MOV dword ptr [EBP + -0x4],EAX
004fb5cf  CMP dword ptr [EBP + -0x4],0x0
004fb5d3  JZ 0x004fb614
004fb5d5  MOV EAX,dword ptr [EBP + -0x4]
004fb5d8  MOV ECX,dword ptr [EAX + 0x4]
004fb5db  PUSH ECX
004fb5dc  CALL 0x005dcb00
004fb5e1  ADD ESP,0x4
004fb5e4  MOV dword ptr [EBP + -0x10],EAX
004fb5e7  MOV ECX,dword ptr [EBP + -0x10]
004fb5ea  CALL 0x0063aac0
004fb5ef  MOV EDX,dword ptr [EAX]
004fb5f1  MOV dword ptr [EBP + -0xc],EDX
004fb5f4  XOR EAX,EAX
004fb5f6  CMP dword ptr [EBP + -0xc],0x0
004fb5fa  SETZ AL
004fb5fd  MOVZX ECX,AL
004fb600  TEST ECX,ECX
004fb602  JNZ 0x004fb614
004fb604  PUSH 0x0
004fb606  MOV EDX,dword ptr [EBP + -0x8]
004fb609  PUSH EDX
004fb60a  MOV ECX,dword ptr [EBP + -0x14]
004fb60d  CALL 0x005d9180
004fb612  JMP 0x004fb62e
004fb614  CMP dword ptr [EBP + -0x4],0x0
004fb618  JZ 0x004fb62e
004fb61a  PUSH 0x0
004fb61c  MOV ECX,dword ptr [EBP + -0x4]
004fb61f  CALL 0x004c6d90
004fb624  PUSH 0x0
004fb626  MOV ECX,dword ptr [EBP + -0x4]
004fb629  CALL 0x004c7030
004fb62e  JMP 0x004fb5ae
004fb633  MOV ESP,EBP
004fb635  POP EBP
004fb636  RET
