; FUN_005cef60  005cef60
005cef60  PUSH EBP
005cef61  MOV EBP,ESP
005cef63  PUSH ECX
005cef64  MOV dword ptr [EBP + -0x4],ECX
005cef67  MOV ECX,dword ptr [EBP + -0x4]
005cef6a  CALL 0x005f85d0
005cef6f  MOV EAX,dword ptr [EBP + -0x4]
005cef72  MOVZX ECX,byte ptr [EAX + 0x1bc]
005cef79  TEST ECX,ECX
005cef7b  JNZ 0x005cef9f
005cef7d  MOV EDX,dword ptr [0x007960d8]
005cef83  MOV EAX,dword ptr [EDX]
005cef85  MOV ECX,dword ptr [0x007960d8]
005cef8b  MOV EDX,dword ptr [EAX + 0x10]
005cef8e  CALL EDX
005cef90  MOV EAX,[0x007960d8]
005cef95  MOV ECX,dword ptr [EAX + 0x10]
005cef98  CALL 0x00613e70
005cef9d  JMP 0x005cef6f
005cef9f  MOV ESP,EBP
005cefa1  POP EBP
005cefa2  RET
