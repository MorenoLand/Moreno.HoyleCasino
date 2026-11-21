; FUN_005df5e0  005df5e0
005df5e0  PUSH EBP
005df5e1  MOV EBP,ESP
005df5e3  SUB ESP,0xc
005df5e6  MOV dword ptr [EBP + -0xc],ECX
005df5e9  MOV dword ptr [EBP + -0x8],0x0
005df5f0  MOV dword ptr [EBP + -0x4],0x1e0
005df5f7  MOV EAX,dword ptr [EBP + 0x8]
005df5fa  MOV ECX,dword ptr [EBP + -0x8]
005df5fd  MOV dword ptr [EAX],ECX
005df5ff  MOV EDX,dword ptr [EBP + -0x4]
005df602  MOV dword ptr [EAX + 0x4],EDX
005df605  MOV EAX,dword ptr [EBP + 0x8]
005df608  MOV ESP,EBP
005df60a  POP EBP
005df60b  RET 0x4
