; FUN_005caaa0  005caaa0
005caaa0  PUSH EBP
005caaa1  MOV EBP,ESP
005caaa3  SUB ESP,0xc
005caaa6  MOV dword ptr [EBP + -0xc],ECX
005caaa9  MOV dword ptr [EBP + -0x8],0x0
005caab0  MOV dword ptr [EBP + -0x4],0x0
005caab7  MOV EAX,dword ptr [EBP + -0xc]
005caaba  FLD double ptr [0x006b3e40]
005caac0  FCOMP double ptr [EAX + 0x1e0]
005caac6  FNSTSW AX
005caac8  TEST AH,0x44
005caacb  JP 0x005caad6
005caacd  MOV dword ptr [EBP + -0x4],0x19
005caad4  JMP 0x005caae7
005caad6  MOV ECX,dword ptr [EBP + -0xc]
005caad9  FLD double ptr [ECX + 0x1e0]
005caadf  CALL 0x00686cc0
005caae4  MOV dword ptr [EBP + -0x8],EAX
005caae7  LEA EDX,[EBP + -0x8]
005caaea  PUSH EDX
005caaeb  MOV ECX,dword ptr [EBP + -0xc]
005caaee  CALL 0x005caea0
005caaf3  MOV ESP,EBP
005caaf5  POP EBP
005caaf6  RET
