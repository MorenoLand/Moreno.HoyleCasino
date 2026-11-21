; FUN_005bfbc0  005bfbc0
005bfbc0  PUSH EBP
005bfbc1  MOV EBP,ESP
005bfbc3  SUB ESP,0xc
005bfbc6  MOV dword ptr [EBP + -0x8],ECX
005bfbc9  MOV EAX,dword ptr [EBP + 0x8]
005bfbcc  MOV dword ptr [EBP + -0x4],EAX
005bfbcf  MOV ECX,dword ptr [EBP + -0x4]
005bfbd2  MOV EDX,dword ptr [ECX]
005bfbd4  MOV dword ptr [EBP + -0xc],EDX
005bfbd7  MOV EAX,dword ptr [EBP + -0x4]
005bfbda  MOV ECX,dword ptr [EAX]
005bfbdc  PUSH ECX
005bfbdd  MOV EDX,dword ptr [EBP + -0x8]
005bfbe0  MOV ECX,dword ptr [EDX + 0x8]
005bfbe3  CALL 0x005c99e0
005bfbe8  MOV EAX,dword ptr [EBP + -0x8]
005bfbeb  CMP dword ptr [EAX + 0x18],0x0
005bfbef  JG 0x005bfbf9
005bfbf1  MOV ECX,dword ptr [EBP + -0x8]
005bfbf4  CALL 0x005bf2a0
005bfbf9  MOV ESP,EBP
005bfbfb  POP EBP
005bfbfc  RET 0x4
