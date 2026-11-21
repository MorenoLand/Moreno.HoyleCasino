; FUN_004dc490  004dc490
004dc490  PUSH EBP
004dc491  MOV EBP,ESP
004dc493  PUSH ECX
004dc494  MOV dword ptr [EBP + -0x4],ECX
004dc497  MOV EAX,dword ptr [EBP + -0x4]
004dc49a  MOV ECX,dword ptr [EAX + 0x3c]
004dc49d  MOV EDX,dword ptr [EBP + -0x4]
004dc4a0  MOV EAX,dword ptr [EDX + 0x3c]
004dc4a3  MOV EDX,dword ptr [ECX]
004dc4a5  MOV ECX,EAX
004dc4a7  MOV EAX,dword ptr [EDX + 0x70]
004dc4aa  CALL EAX
004dc4ac  MOV ECX,dword ptr [EBP + -0x4]
004dc4af  MOV EDX,dword ptr [ECX + 0x40]
004dc4b2  MOV EAX,dword ptr [EBP + -0x4]
004dc4b5  MOV ECX,dword ptr [EAX + 0x40]
004dc4b8  MOV EDX,dword ptr [EDX]
004dc4ba  MOV EAX,dword ptr [EDX + 0x70]
004dc4bd  CALL EAX
004dc4bf  MOV ESP,EBP
004dc4c1  POP EBP
004dc4c2  RET
