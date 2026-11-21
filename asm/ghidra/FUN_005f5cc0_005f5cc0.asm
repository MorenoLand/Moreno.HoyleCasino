; FUN_005f5cc0  005f5cc0
005f5cc0  PUSH EBP
005f5cc1  MOV EBP,ESP
005f5cc3  PUSH ECX
005f5cc4  MOV dword ptr [EBP + -0x4],ECX
005f5cc7  MOV ECX,dword ptr [EBP + -0x4]
005f5cca  CALL 0x005eacb0
005f5ccf  MOV EAX,dword ptr [EBP + -0x4]
005f5cd2  CMP dword ptr [EAX + 0x4],0x0
005f5cd6  JZ 0x005f5ce7
005f5cd8  MOV ECX,dword ptr [EBP + -0x4]
005f5cdb  PUSH ECX
005f5cdc  MOV EDX,dword ptr [EBP + -0x4]
005f5cdf  MOV ECX,dword ptr [EDX + 0x4]
005f5ce2  CALL 0x005f8e20
005f5ce7  MOV ESP,EBP
005f5ce9  POP EBP
005f5cea  RET
