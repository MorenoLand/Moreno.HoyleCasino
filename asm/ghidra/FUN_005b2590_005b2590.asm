; FUN_005b2590  005b2590
005b2590  PUSH EBP
005b2591  MOV EBP,ESP
005b2593  PUSH ECX
005b2594  MOV dword ptr [EBP + -0x4],ECX
005b2597  CMP dword ptr [EBP + 0x8],0x0
005b259b  JNZ 0x005b25a1
005b259d  XOR AL,AL
005b259f  JMP 0x005b25ff
005b25a1  MOV EAX,dword ptr [EBP + 0x8]
005b25a4  MOV dword ptr [EAX],0x4
005b25aa  MOV ECX,dword ptr [EBP + 0x8]
005b25ad  MOV dword ptr [ECX + 0x4],0x1
005b25b4  MOV EDX,dword ptr [EBP + 0x8]
005b25b7  MOV dword ptr [EDX + 0x8],0x4
005b25be  MOV EAX,dword ptr [EBP + 0x8]
005b25c1  MOV dword ptr [EAX + 0xc],0x1
005b25c8  MOVZX ECX,byte ptr [0x00795f95]
005b25cf  TEST ECX,ECX
005b25d1  JZ 0x005b25df
005b25d3  MOV EDX,dword ptr [EBP + 0x8]
005b25d6  MOV dword ptr [EDX + 0x10],0x1
005b25dd  JMP 0x005b25e9
005b25df  MOV EAX,dword ptr [EBP + 0x8]
005b25e2  MOV dword ptr [EAX + 0x10],0x4
005b25e9  MOV ECX,dword ptr [EBP + 0x8]
005b25ec  MOV dword ptr [ECX + 0x14],0x0
005b25f3  MOV EDX,dword ptr [EBP + 0x8]
005b25f6  MOV dword ptr [EDX + 0x18],0x3
005b25fd  MOV AL,0x1
005b25ff  MOV ESP,EBP
005b2601  POP EBP
005b2602  RET 0x8
