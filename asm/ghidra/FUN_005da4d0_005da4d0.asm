; FUN_005da4d0  005da4d0
005da4d0  PUSH EBP
005da4d1  MOV EBP,ESP
005da4d3  SUB ESP,0xc
005da4d6  MOV dword ptr [EBP + -0xc],ECX
005da4d9  LEA EAX,[EBP + -0x8]
005da4dc  PUSH EAX
005da4dd  LEA ECX,[EBP + -0x4]
005da4e0  PUSH ECX
005da4e1  MOV EDX,dword ptr [EBP + -0xc]
005da4e4  MOV EAX,dword ptr [EDX]
005da4e6  MOV ECX,dword ptr [EBP + -0xc]
005da4e9  MOV EDX,dword ptr [EAX + 0x26c]
005da4ef  CALL EDX
005da4f1  MOV EAX,dword ptr [EBP + -0x8]
005da4f4  MOV ESP,EBP
005da4f6  POP EBP
005da4f7  RET
