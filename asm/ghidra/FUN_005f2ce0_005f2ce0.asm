; FUN_005f2ce0  005f2ce0
005f2ce0  PUSH EBP
005f2ce1  MOV EBP,ESP
005f2ce3  SUB ESP,0x8
005f2ce6  MOV dword ptr [EBP + -0x8],ECX
005f2ce9  PUSH 0x0
005f2ceb  MOV EAX,dword ptr [EBP + 0x8]
005f2cee  PUSH EAX
005f2cef  MOV ECX,dword ptr [EBP + -0x8]
005f2cf2  CALL 0x005f2a60
005f2cf7  MOV dword ptr [EBP + -0x4],EAX
005f2cfa  CMP dword ptr [EBP + -0x4],0x0
005f2cfe  JZ 0x005f2d08
005f2d00  MOV ECX,dword ptr [EBP + -0x4]
005f2d03  CALL 0x005fd560
005f2d08  MOV ESP,EBP
005f2d0a  POP EBP
005f2d0b  RET 0x4
