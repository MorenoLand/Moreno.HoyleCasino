; FUN_005f29b0  005f29b0
005f29b0  PUSH EBP
005f29b1  MOV EBP,ESP
005f29b3  SUB ESP,0xc
005f29b6  MOV dword ptr [EBP + -0x8],ECX
005f29b9  MOV dword ptr [EBP + -0x4],0x0
005f29c0  JMP 0x005f29cb
005f29c2  MOV EAX,dword ptr [EBP + -0x4]
005f29c5  ADD EAX,0x1
005f29c8  MOV dword ptr [EBP + -0x4],EAX
005f29cb  MOV ECX,dword ptr [EBP + -0x8]
005f29ce  ADD ECX,0x18
005f29d1  CALL 0x0060c9a0
005f29d6  CMP dword ptr [EBP + -0x4],EAX
005f29d9  JGE 0x005f29fc
005f29db  MOV ECX,dword ptr [EBP + -0x4]
005f29de  PUSH ECX
005f29df  MOV ECX,dword ptr [EBP + -0x8]
005f29e2  ADD ECX,0x18
005f29e5  CALL 0x0060ca40
005f29ea  MOV dword ptr [EBP + -0xc],EAX
005f29ed  MOV EDX,dword ptr [EBP + -0xc]
005f29f0  MOV EAX,dword ptr [EDX]
005f29f2  MOV ECX,dword ptr [EBP + -0xc]
005f29f5  MOV EDX,dword ptr [EAX + 0x74]
005f29f8  CALL EDX
005f29fa  JMP 0x005f29c2
005f29fc  MOV ESP,EBP
005f29fe  POP EBP
005f29ff  RET
