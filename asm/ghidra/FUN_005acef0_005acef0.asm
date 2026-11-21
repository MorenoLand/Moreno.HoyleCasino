; FUN_005acef0  005acef0
005acef0  PUSH EBP
005acef1  MOV EBP,ESP
005acef3  PUSH ECX
005acef4  MOV dword ptr [EBP + -0x4],ECX
005acef7  MOV ECX,dword ptr [EBP + -0x4]
005acefa  CALL 0x005abda0
005aceff  MOV EAX,dword ptr [EBP + 0x8]
005acf02  AND EAX,0x1
005acf05  JZ 0x005acf13
005acf07  MOV ECX,dword ptr [EBP + -0x4]
005acf0a  PUSH ECX
005acf0b  CALL 0x00686cae
005acf10  ADD ESP,0x4
005acf13  MOV EAX,dword ptr [EBP + -0x4]
005acf16  MOV ESP,EBP
005acf18  POP EBP
005acf19  RET 0x4
