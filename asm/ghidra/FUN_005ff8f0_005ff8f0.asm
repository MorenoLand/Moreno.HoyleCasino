; FUN_005ff8f0  005ff8f0
005ff8f0  PUSH EBP
005ff8f1  MOV EBP,ESP
005ff8f3  SUB ESP,0x8
005ff8f6  MOV dword ptr [EBP + -0x8],ECX
005ff8f9  MOV EAX,dword ptr [EBP + 0x8]
005ff8fc  PUSH EAX
005ff8fd  MOV ECX,dword ptr [EBP + -0x8]
005ff900  CALL 0x006062a0
005ff905  MOV byte ptr [EBP + -0x1],AL
005ff908  MOV ECX,dword ptr [EBP + -0x8]
005ff90b  PUSH ECX
005ff90c  MOV ECX,dword ptr [EBP + 0x8]
005ff90f  CALL 0x005ff7a0
005ff914  MOV AL,byte ptr [EBP + -0x1]
005ff917  MOV ESP,EBP
005ff919  POP EBP
005ff91a  RET 0x4
