; FUN_005fb5a0  005fb5a0
005fb5a0  PUSH EBP
005fb5a1  MOV EBP,ESP
005fb5a3  SUB ESP,0x8
005fb5a6  MOV dword ptr [EBP + -0x8],ECX
005fb5a9  MOV EAX,dword ptr [EBP + 0x8]
005fb5ac  PUSH EAX
005fb5ad  MOV ECX,dword ptr [EBP + -0x8]
005fb5b0  CALL 0x005fb550
005fb5b5  MOV dword ptr [EBP + -0x4],EAX
005fb5b8  CMP dword ptr [EBP + -0x4],0x0
005fb5bc  JZ 0x005fb5d2
005fb5be  MOV ECX,dword ptr [EBP + 0xc]
005fb5c1  PUSH ECX
005fb5c2  MOV EDX,dword ptr [EBP + -0x4]
005fb5c5  MOV EAX,dword ptr [EDX]
005fb5c7  MOV ECX,dword ptr [EBP + -0x4]
005fb5ca  MOV EDX,dword ptr [EAX + 0xb4]
005fb5d0  CALL EDX
005fb5d2  MOV ESP,EBP
005fb5d4  POP EBP
005fb5d5  RET 0x8
