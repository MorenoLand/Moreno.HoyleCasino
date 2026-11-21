; FUN_005da4a0  005da4a0
005da4a0  PUSH EBP
005da4a1  MOV EBP,ESP
005da4a3  SUB ESP,0xc
005da4a6  MOV dword ptr [EBP + -0xc],ECX
005da4a9  LEA EAX,[EBP + -0x8]
005da4ac  PUSH EAX
005da4ad  LEA ECX,[EBP + -0x4]
005da4b0  PUSH ECX
005da4b1  MOV EDX,dword ptr [EBP + -0xc]
005da4b4  MOV EAX,dword ptr [EDX]
005da4b6  MOV ECX,dword ptr [EBP + -0xc]
005da4b9  MOV EDX,dword ptr [EAX + 0x26c]
005da4bf  CALL EDX
005da4c1  MOV EAX,dword ptr [EBP + -0x4]
005da4c4  MOV ESP,EBP
005da4c6  POP EBP
005da4c7  RET
