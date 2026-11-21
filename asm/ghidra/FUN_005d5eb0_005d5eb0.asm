; FUN_005d5eb0  005d5eb0
005d5eb0  PUSH EBP
005d5eb1  MOV EBP,ESP
005d5eb3  SUB ESP,0xc
005d5eb6  MOV dword ptr [EBP + -0xc],ECX
005d5eb9  MOV EAX,dword ptr [EBP + 0xc]
005d5ebc  PUSH EAX
005d5ebd  MOV ECX,dword ptr [EBP + 0x8]
005d5ec0  PUSH ECX
005d5ec1  CALL 0x0064c8a0
005d5ec6  ADD ESP,0x8
005d5ec9  MOV dword ptr [EBP + -0x8],EAX
005d5ecc  MOV dword ptr [EBP + -0x4],EDX
005d5ecf  MOV EDX,dword ptr [EBP + -0x4]
005d5ed2  PUSH EDX
005d5ed3  MOV EAX,dword ptr [EBP + -0x8]
005d5ed6  PUSH EAX
005d5ed7  MOV ECX,dword ptr [EBP + -0xc]
005d5eda  CALL 0x005d5e10
005d5edf  MOV ESP,EBP
005d5ee1  POP EBP
005d5ee2  RET 0x8
