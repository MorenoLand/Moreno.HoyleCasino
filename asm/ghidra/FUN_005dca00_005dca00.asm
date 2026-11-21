; FUN_005dca00  005dca00
005dca00  PUSH EBP
005dca01  MOV EBP,ESP
005dca03  PUSH ECX
005dca04  MOV dword ptr [EBP + -0x4],ECX
005dca07  MOV ECX,dword ptr [EBP + -0x4]
005dca0a  CALL 0x005d7bd0
005dca0f  MOV EAX,dword ptr [EBP + 0x8]
005dca12  AND EAX,0x1
005dca15  JZ 0x005dca23
005dca17  MOV ECX,dword ptr [EBP + -0x4]
005dca1a  PUSH ECX
005dca1b  CALL 0x00686cae
005dca20  ADD ESP,0x4
005dca23  MOV EAX,dword ptr [EBP + -0x4]
005dca26  MOV ESP,EBP
005dca28  POP EBP
005dca29  RET 0x4
