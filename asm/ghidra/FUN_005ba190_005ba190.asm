; FUN_005ba190  005ba190
005ba190  PUSH EBP
005ba191  MOV EBP,ESP
005ba193  PUSH ECX
005ba194  MOV dword ptr [EBP + -0x4],ECX
005ba197  MOV EAX,dword ptr [EBP + -0x4]
005ba19a  CMP dword ptr [EAX],0x0
005ba19d  JNZ 0x005ba1a5
005ba19f  CALL dword ptr [0x006b2274]
005ba1a5  MOV ECX,dword ptr [EBP + -0x4]
005ba1a8  MOV EDX,dword ptr [ECX]
005ba1aa  MOV EAX,dword ptr [EBP + -0x4]
005ba1ad  MOV ECX,dword ptr [EAX + 0x4]
005ba1b0  CMP ECX,dword ptr [EDX + 0x8]
005ba1b3  JC 0x005ba1bb
005ba1b5  CALL dword ptr [0x006b2274]
005ba1bb  MOV EDX,dword ptr [EBP + -0x4]
005ba1be  MOV EAX,dword ptr [EDX + 0x4]
005ba1c1  ADD EAX,0x4
005ba1c4  MOV ECX,dword ptr [EBP + -0x4]
005ba1c7  MOV dword ptr [ECX + 0x4],EAX
005ba1ca  MOV EAX,dword ptr [EBP + -0x4]
005ba1cd  MOV ESP,EBP
005ba1cf  POP EBP
005ba1d0  RET
