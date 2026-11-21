; FUN_005a1560  005a1560
005a1560  PUSH EBP
005a1561  MOV EBP,ESP
005a1563  PUSH ECX
005a1564  MOV dword ptr [EBP + -0x4],ECX
005a1567  CMP dword ptr [EBP + 0x8],0x0
005a156b  JNZ 0x005a1571
005a156d  XOR AL,AL
005a156f  JMP 0x005a15b8
005a1571  MOV EAX,dword ptr [EBP + 0x8]
005a1574  MOV dword ptr [EAX],0x4
005a157a  MOV ECX,dword ptr [EBP + 0x8]
005a157d  MOV dword ptr [ECX + 0x4],0x1
005a1584  MOV EDX,dword ptr [EBP + 0x8]
005a1587  MOV dword ptr [EDX + 0x8],0x4
005a158e  MOV EAX,dword ptr [EBP + 0x8]
005a1591  MOV dword ptr [EAX + 0xc],0x1
005a1598  MOV ECX,dword ptr [EBP + 0x8]
005a159b  MOV dword ptr [ECX + 0x10],0x4
005a15a2  MOV EDX,dword ptr [EBP + 0x8]
005a15a5  MOV dword ptr [EDX + 0x14],0x0
005a15ac  MOV EAX,dword ptr [EBP + 0x8]
005a15af  MOV dword ptr [EAX + 0x18],0x3
005a15b6  MOV AL,0x1
005a15b8  MOV ESP,EBP
005a15ba  POP EBP
005a15bb  RET 0x8
