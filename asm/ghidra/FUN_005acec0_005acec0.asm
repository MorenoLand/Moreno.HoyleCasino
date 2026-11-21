; FUN_005acec0  005acec0
005acec0  PUSH EBP
005acec1  MOV EBP,ESP
005acec3  PUSH ECX
005acec4  MOV dword ptr [EBP + -0x4],ECX
005acec7  MOV ECX,dword ptr [EBP + -0x4]
005aceca  CALL 0x005ab490
005acecf  MOV EAX,dword ptr [EBP + 0x8]
005aced2  AND EAX,0x1
005aced5  JZ 0x005acee3
005aced7  MOV ECX,dword ptr [EBP + -0x4]
005aceda  PUSH ECX
005acedb  CALL 0x00686cae
005acee0  ADD ESP,0x4
005acee3  MOV EAX,dword ptr [EBP + -0x4]
005acee6  MOV ESP,EBP
005acee8  POP EBP
005acee9  RET 0x4
