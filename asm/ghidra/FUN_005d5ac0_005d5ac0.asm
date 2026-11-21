; FUN_005d5ac0  005d5ac0
005d5ac0  PUSH EBP
005d5ac1  MOV EBP,ESP
005d5ac3  SUB ESP,0xc
005d5ac6  MOV dword ptr [EBP + -0xc],ECX
005d5ac9  LEA EAX,[EBP + -0x8]
005d5acc  PUSH EAX
005d5acd  MOV ECX,dword ptr [EBP + -0xc]
005d5ad0  CALL 0x005d5a90
005d5ad5  MOV ECX,dword ptr [EAX]
005d5ad7  MOV EDX,dword ptr [EAX + 0x4]
005d5ada  MOV EAX,dword ptr [EBP + 0x8]
005d5add  MOV dword ptr [EAX],ECX
005d5adf  MOV dword ptr [EAX + 0x4],EDX
005d5ae2  MOV ESP,EBP
005d5ae4  POP EBP
005d5ae5  RET 0x4
