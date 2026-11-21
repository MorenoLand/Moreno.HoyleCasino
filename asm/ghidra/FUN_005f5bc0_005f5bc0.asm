; FUN_005f5bc0  005f5bc0
005f5bc0  PUSH EBP
005f5bc1  MOV EBP,ESP
005f5bc3  PUSH ECX
005f5bc4  MOV dword ptr [EBP + -0x4],ECX
005f5bc7  MOV ECX,dword ptr [EBP + -0x4]
005f5bca  CALL 0x005f4ad0
005f5bcf  MOV EAX,dword ptr [EBP + 0x8]
005f5bd2  AND EAX,0x1
005f5bd5  JZ 0x005f5be3
005f5bd7  MOV ECX,dword ptr [EBP + -0x4]
005f5bda  PUSH ECX
005f5bdb  CALL 0x00686cae
005f5be0  ADD ESP,0x4
005f5be3  MOV EAX,dword ptr [EBP + -0x4]
005f5be6  MOV ESP,EBP
005f5be8  POP EBP
005f5be9  RET 0x4
