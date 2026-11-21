; FUN_005ea390  005ea390
005ea390  PUSH EBP
005ea391  MOV EBP,ESP
005ea393  SUB ESP,0xc
005ea396  PUSH 0x0
005ea398  PUSH 0x75ee04
005ea39d  PUSH 0x75edec
005ea3a2  PUSH 0x0
005ea3a4  MOV EAX,[0x007960d8]
005ea3a9  MOV ECX,dword ptr [EAX + 0x10]
005ea3ac  PUSH ECX
005ea3ad  CALL 0x00686ede
005ea3b2  ADD ESP,0x14
005ea3b5  MOV dword ptr [EBP + -0x4],EAX
005ea3b8  CMP dword ptr [EBP + -0x4],0x0
005ea3bc  JNZ 0x005ea3c0
005ea3be  JMP 0x005ea3f6
005ea3c0  MOV EDX,dword ptr [EBP + 0x8]
005ea3c3  MOV EAX,dword ptr [EDX]
005ea3c5  MOV dword ptr [EBP + -0xc],EAX
005ea3c8  MOV ECX,dword ptr [EBP + 0x8]
005ea3cb  MOV EDX,dword ptr [ECX + 0x4]
005ea3ce  MOV dword ptr [EBP + -0x8],EDX
005ea3d1  LEA EAX,[EBP + -0xc]
005ea3d4  PUSH EAX
005ea3d5  MOV ECX,dword ptr [EBP + -0x4]
005ea3d8  MOV EDX,dword ptr [ECX + 0x8c]
005ea3de  PUSH EDX
005ea3df  CALL dword ptr [0x006b2450]
005ea3e5  MOV EAX,dword ptr [EBP + 0x8]
005ea3e8  MOV ECX,dword ptr [EBP + -0xc]
005ea3eb  MOV dword ptr [EAX],ECX
005ea3ed  MOV EDX,dword ptr [EBP + 0x8]
005ea3f0  MOV EAX,dword ptr [EBP + -0x8]
005ea3f3  MOV dword ptr [EDX + 0x4],EAX
005ea3f6  MOV ESP,EBP
005ea3f8  POP EBP
005ea3f9  RET
