; CPrintDialog  005acb70
005acb70  PUSH EBP
005acb71  MOV EBP,ESP
005acb73  PUSH ECX
005acb74  MOV dword ptr [EBP + -0x4],ECX
005acb77  PUSH 0x0
005acb79  MOV ECX,dword ptr [EBP + -0x4]
005acb7c  CALL 0x005fc0d0
005acb81  MOV EAX,dword ptr [EBP + -0x4]
005acb84  MOV dword ptr [EAX],0x6cfe5c
005acb8a  MOV ECX,dword ptr [EBP + -0x4]
005acb8d  MOV EDX,dword ptr [EBP + 0x8]
005acb90  MOV dword ptr [ECX + 0x20],EDX
005acb93  MOV EAX,dword ptr [EBP + -0x4]
005acb96  MOV ESP,EBP
005acb98  POP EBP
005acb99  RET 0x4
