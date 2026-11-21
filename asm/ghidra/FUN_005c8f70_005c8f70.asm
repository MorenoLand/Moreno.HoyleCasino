; FUN_005c8f70  005c8f70
005c8f70  PUSH EBP
005c8f71  MOV EBP,ESP
005c8f73  SUB ESP,0x8
005c8f76  MOV dword ptr [EBP + -0x8],ECX
005c8f79  MOV ECX,dword ptr [EBP + -0x8]
005c8f7c  CALL 0x005c9140
005c8f81  MOV dword ptr [EBP + -0x4],0x0
005c8f88  JMP 0x005c8f93
005c8f8a  MOV EAX,dword ptr [EBP + -0x4]
005c8f8d  ADD EAX,0x1
005c8f90  MOV dword ptr [EBP + -0x4],EAX
005c8f93  MOV ECX,dword ptr [EBP + -0x8]
005c8f96  MOV EDX,dword ptr [ECX + 0x10]
005c8f99  MOV EAX,dword ptr [EBP + -0x4]
005c8f9c  CMP EAX,dword ptr [EDX + 0x8]
005c8f9f  JGE 0x005c8fad
005c8fa1  MOV ECX,dword ptr [EBP + -0x8]
005c8fa4  ADD ECX,dword ptr [EBP + -0x4]
005c8fa7  MOV byte ptr [ECX + 0x34],0x0
005c8fab  JMP 0x005c8f8a
005c8fad  MOV ESP,EBP
005c8faf  POP EBP
005c8fb0  RET
