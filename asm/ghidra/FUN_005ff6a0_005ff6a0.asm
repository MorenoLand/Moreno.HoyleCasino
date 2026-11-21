; FUN_005ff6a0  005ff6a0
005ff6a0  PUSH EBP
005ff6a1  MOV EBP,ESP
005ff6a3  SUB ESP,0xc
005ff6a6  MOV dword ptr [EBP + -0x8],ECX
005ff6a9  MOV ECX,dword ptr [EBP + -0x8]
005ff6ac  CALL 0x00606140
005ff6b1  MOV EAX,dword ptr [EBP + -0x8]
005ff6b4  CMP dword ptr [EAX + 0x210],0x0
005ff6bb  JZ 0x005ff706
005ff6bd  MOV dword ptr [EBP + -0x4],0x0
005ff6c4  JMP 0x005ff6cf
005ff6c6  MOV ECX,dword ptr [EBP + -0x4]
005ff6c9  ADD ECX,0x1
005ff6cc  MOV dword ptr [EBP + -0x4],ECX
005ff6cf  MOV EDX,dword ptr [EBP + -0x8]
005ff6d2  MOV ECX,dword ptr [EDX + 0x210]
005ff6d8  CALL 0x0060c9a0
005ff6dd  CMP dword ptr [EBP + -0x4],EAX
005ff6e0  JGE 0x005ff706
005ff6e2  MOV EAX,dword ptr [EBP + -0x4]
005ff6e5  PUSH EAX
005ff6e6  MOV ECX,dword ptr [EBP + -0x8]
005ff6e9  MOV ECX,dword ptr [ECX + 0x210]
005ff6ef  CALL 0x0060ca40
005ff6f4  MOV dword ptr [EBP + -0xc],EAX
005ff6f7  MOV EDX,dword ptr [EBP + -0xc]
005ff6fa  MOV EAX,dword ptr [EDX]
005ff6fc  MOV ECX,dword ptr [EBP + -0xc]
005ff6ff  MOV EDX,dword ptr [EAX + 0x74]
005ff702  CALL EDX
005ff704  JMP 0x005ff6c6
005ff706  MOV EAX,dword ptr [EBP + -0x8]
005ff709  PUSH EAX
005ff70a  MOV ECX,dword ptr [EBP + -0x8]
005ff70d  MOV ECX,dword ptr [ECX + 0x214]
005ff713  CALL 0x005ff960
005ff718  PUSH 0x64
005ff71a  MOV EDX,dword ptr [EBP + -0x8]
005ff71d  MOV EAX,dword ptr [EDX]
005ff71f  MOV ECX,dword ptr [EBP + -0x8]
005ff722  MOV EDX,dword ptr [EAX + 0x6c]
005ff725  CALL EDX
005ff727  MOV ESP,EBP
005ff729  POP EBP
005ff72a  RET
