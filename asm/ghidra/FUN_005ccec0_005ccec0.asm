; FUN_005ccec0  005ccec0
005ccec0  PUSH EBP
005ccec1  MOV EBP,ESP
005ccec3  SUB ESP,0x10
005ccec6  PUSH ESI
005ccec7  MOV dword ptr [EBP + -0x10],ECX
005cceca  MOV dword ptr [EBP + -0x4],0x0
005cced1  JMP 0x005ccedc
005cced3  MOV EAX,dword ptr [EBP + -0x4]
005cced6  ADD EAX,0x1
005cced9  MOV dword ptr [EBP + -0x4],EAX
005ccedc  CMP dword ptr [EBP + -0x4],0x5
005ccee0  JGE 0x005ccfbc
005ccee6  MOV dword ptr [EBP + -0xc],0x0
005cceed  JMP 0x005ccef8
005cceef  MOV ECX,dword ptr [EBP + -0xc]
005ccef2  ADD ECX,0x1
005ccef5  MOV dword ptr [EBP + -0xc],ECX
005ccef8  CMP dword ptr [EBP + -0xc],0x4
005ccefc  JGE 0x005ccfb7
005ccf02  MOV dword ptr [EBP + -0x8],0x0
005ccf09  JMP 0x005ccf14
005ccf0b  MOV EDX,dword ptr [EBP + -0x8]
005ccf0e  ADD EDX,0x1
005ccf11  MOV dword ptr [EBP + -0x8],EDX
005ccf14  CMP dword ptr [EBP + -0x8],0x1e
005ccf18  JGE 0x005ccfb2
005ccf1e  MOV EAX,dword ptr [EBP + -0x4]
005ccf21  IMUL EAX,EAX,0x1e0
005ccf27  MOV ECX,dword ptr [EBP + -0x10]
005ccf2a  LEA EDX,[ECX + EAX*0x1 + 0x17c]
005ccf31  MOV EAX,dword ptr [EBP + -0xc]
005ccf34  IMUL EAX,EAX,0x78
005ccf37  ADD EDX,EAX
005ccf39  MOV ECX,dword ptr [EBP + -0x8]
005ccf3c  CMP dword ptr [EDX + ECX*0x4],0x0
005ccf40  JZ 0x005ccfad
005ccf42  MOV EDX,dword ptr [EBP + 0x8]
005ccf45  PUSH EDX
005ccf46  MOV EAX,dword ptr [EBP + -0x4]
005ccf49  IMUL EAX,EAX,0x1e0
005ccf4f  MOV ECX,dword ptr [EBP + -0x10]
005ccf52  LEA EDX,[ECX + EAX*0x1 + 0x17c]
005ccf59  MOV EAX,dword ptr [EBP + -0xc]
005ccf5c  IMUL EAX,EAX,0x78
005ccf5f  ADD EDX,EAX
005ccf61  MOV ECX,dword ptr [EBP + -0x8]
005ccf64  MOV EDX,dword ptr [EDX + ECX*0x4]
005ccf67  MOV EAX,dword ptr [EBP + -0xc]
005ccf6a  IMUL EAX,EAX,0x78
005ccf6d  MOV ECX,dword ptr [EBP + -0x4]
005ccf70  IMUL ECX,ECX,0x1e0
005ccf76  MOV ESI,dword ptr [EBP + -0x10]
005ccf79  LEA ECX,[ESI + ECX*0x1 + 0x17c]
005ccf80  ADD ECX,EAX
005ccf82  MOV EAX,dword ptr [EBP + -0x8]
005ccf85  MOV ECX,dword ptr [ECX + EAX*0x4]
005ccf88  MOV EDX,dword ptr [EDX]
005ccf8a  MOV EAX,dword ptr [EDX + 0x84]
005ccf90  CALL EAX
005ccf92  MOVZX ECX,AL
005ccf95  TEST ECX,ECX
005ccf97  JZ 0x005ccfad
005ccf99  MOV EDX,dword ptr [EBP + 0xc]
005ccf9c  MOV EAX,dword ptr [EBP + -0x4]
005ccf9f  MOV dword ptr [EDX],EAX
005ccfa1  MOV ECX,dword ptr [EBP + 0x10]
005ccfa4  MOV EDX,dword ptr [EBP + -0xc]
005ccfa7  MOV dword ptr [ECX],EDX
005ccfa9  MOV AL,0x1
005ccfab  JMP 0x005ccfbe
005ccfad  JMP 0x005ccf0b
005ccfb2  JMP 0x005cceef
005ccfb7  JMP 0x005cced3
005ccfbc  XOR AL,AL
005ccfbe  POP ESI
005ccfbf  MOV ESP,EBP
005ccfc1  POP EBP
005ccfc2  RET 0xc
