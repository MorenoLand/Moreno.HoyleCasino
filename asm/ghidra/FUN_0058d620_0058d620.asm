; FUN_0058d620  0058d620
0058d620  PUSH EBP
0058d621  MOV EBP,ESP
0058d623  SUB ESP,0x10
0058d626  MOV dword ptr [EBP + -0xc],ECX
0058d629  MOV ECX,dword ptr [EBP + -0xc]
0058d62c  CALL 0x006001b0
0058d631  MOV EAX,dword ptr [EBP + -0xc]
0058d634  CMP dword ptr [EAX + 0x208],0x0
0058d63b  JZ 0x0058d695
0058d63d  MOV ECX,dword ptr [EBP + -0xc]
0058d640  MOV EDX,dword ptr [ECX + 0x208]
0058d646  MOV EAX,dword ptr [EBP + -0xc]
0058d649  MOV ECX,dword ptr [EAX + 0x208]
0058d64f  MOV EDX,dword ptr [EDX]
0058d651  MOV EAX,dword ptr [EDX + 0x70]
0058d654  CALL EAX
0058d656  MOV ECX,dword ptr [EBP + -0xc]
0058d659  MOV EDX,dword ptr [ECX + 0x208]
0058d65f  MOV dword ptr [EBP + -0x8],EDX
0058d662  MOV EAX,dword ptr [EBP + -0x8]
0058d665  MOV dword ptr [EBP + -0x4],EAX
0058d668  CMP dword ptr [EBP + -0x4],0x0
0058d66c  JZ 0x0058d681
0058d66e  PUSH 0x1
0058d670  MOV ECX,dword ptr [EBP + -0x4]
0058d673  MOV EDX,dword ptr [ECX]
0058d675  MOV ECX,dword ptr [EBP + -0x4]
0058d678  MOV EAX,dword ptr [EDX]
0058d67a  CALL EAX
0058d67c  MOV dword ptr [EBP + -0x10],EAX
0058d67f  JMP 0x0058d688
0058d681  MOV dword ptr [EBP + -0x10],0x0
0058d688  MOV ECX,dword ptr [EBP + -0xc]
0058d68b  MOV dword ptr [ECX + 0x208],0x0
0058d695  MOV ESP,EBP
0058d697  POP EBP
0058d698  RET
