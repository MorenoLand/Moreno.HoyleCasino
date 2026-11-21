; FUN_005cab00  005cab00
005cab00  PUSH EBP
005cab01  MOV EBP,ESP
005cab03  SUB ESP,0xc
005cab06  MOV dword ptr [EBP + -0xc],ECX
005cab09  MOV dword ptr [EBP + -0x8],0x0
005cab10  MOV dword ptr [EBP + -0x4],0x0
005cab17  MOV EAX,dword ptr [EBP + -0xc]
005cab1a  FLD double ptr [0x006b3e40]
005cab20  FCOMP double ptr [EAX + 0x1e0]
005cab26  FNSTSW AX
005cab28  TEST AH,0x44
005cab2b  JP 0x005cab36
005cab2d  MOV dword ptr [EBP + -0x4],0xffffffe7
005cab34  JMP 0x005cab4a
005cab36  MOV ECX,dword ptr [EBP + -0xc]
005cab39  FLD double ptr [ECX + 0x1e0]
005cab3f  CALL 0x00686cc0
005cab44  IMUL EAX,EAX,-0x1
005cab47  MOV dword ptr [EBP + -0x8],EAX
005cab4a  LEA EDX,[EBP + -0x8]
005cab4d  PUSH EDX
005cab4e  MOV ECX,dword ptr [EBP + -0xc]
005cab51  CALL 0x005caea0
005cab56  MOV ESP,EBP
005cab58  POP EBP
005cab59  RET
