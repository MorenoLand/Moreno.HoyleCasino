; FUN_005d4cc0  005d4cc0
005d4cc0  PUSH EBP
005d4cc1  MOV EBP,ESP
005d4cc3  PUSH ECX
005d4cc4  MOV dword ptr [EBP + -0x4],ECX
005d4cc7  MOV ECX,dword ptr [EBP + -0x4]
005d4cca  CALL 0x005d4bb0
005d4ccf  MOV EAX,dword ptr [EBP + 0x8]
005d4cd2  AND EAX,0x1
005d4cd5  JZ 0x005d4ce3
005d4cd7  MOV ECX,dword ptr [EBP + -0x4]
005d4cda  PUSH ECX
005d4cdb  CALL 0x00686cae
005d4ce0  ADD ESP,0x4
005d4ce3  MOV EAX,dword ptr [EBP + -0x4]
005d4ce6  MOV ESP,EBP
005d4ce8  POP EBP
005d4ce9  RET 0x4
