; FUN_005fc2e0  005fc2e0
005fc2e0  PUSH EBP
005fc2e1  MOV EBP,ESP
005fc2e3  PUSH ECX
005fc2e4  MOV dword ptr [EBP + -0x4],ECX
005fc2e7  MOV EAX,dword ptr [EBP + -0x4]
005fc2ea  MOV ECX,dword ptr [EBP + 0x8]
005fc2ed  MOV dword ptr [EAX + 0x1c],ECX
005fc2f0  CMP dword ptr [EBP + 0xc],-0x1
005fc2f4  JLE 0x005fc307
005fc2f6  MOV EDX,dword ptr [EBP + 0xc]
005fc2f9  PUSH EDX
005fc2fa  MOV EAX,dword ptr [EBP + -0x4]
005fc2fd  MOV EDX,dword ptr [EAX]
005fc2ff  MOV ECX,dword ptr [EBP + -0x4]
005fc302  MOV EAX,dword ptr [EDX + 0x1c]
005fc305  CALL EAX
005fc307  MOV ESP,EBP
005fc309  POP EBP
005fc30a  RET 0x8
