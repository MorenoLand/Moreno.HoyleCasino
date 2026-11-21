; FUN_005ace90  005ace90
005ace90  PUSH EBP
005ace91  MOV EBP,ESP
005ace93  PUSH ECX
005ace94  MOV dword ptr [EBP + -0x4],ECX
005ace97  MOV ECX,dword ptr [EBP + -0x4]
005ace9a  CALL 0x005aaa00
005ace9f  MOV EAX,dword ptr [EBP + 0x8]
005acea2  AND EAX,0x1
005acea5  JZ 0x005aceb3
005acea7  MOV ECX,dword ptr [EBP + -0x4]
005aceaa  PUSH ECX
005aceab  CALL 0x00686cae
005aceb0  ADD ESP,0x4
005aceb3  MOV EAX,dword ptr [EBP + -0x4]
005aceb6  MOV ESP,EBP
005aceb8  POP EBP
005aceb9  RET 0x4
