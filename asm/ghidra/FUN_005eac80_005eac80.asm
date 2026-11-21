; FUN_005eac80  005eac80
005eac80  PUSH EBP
005eac81  MOV EBP,ESP
005eac83  PUSH ECX
005eac84  MOV dword ptr [EBP + -0x4],ECX
005eac87  MOV EAX,dword ptr [EBP + -0x4]
005eac8a  CMP dword ptr [EAX + 0x28],0x0
005eac8e  JZ 0x005eaca7
005eac90  MOV ECX,dword ptr [EBP + -0x4]
005eac93  CALL 0x005f54a0
005eac98  MOVZX ECX,AL
005eac9b  TEST ECX,ECX
005eac9d  JZ 0x005eaca7
005eac9f  MOV ECX,dword ptr [EBP + -0x4]
005eaca2  CALL 0x005f58d0
005eaca7  MOV ESP,EBP
005eaca9  POP EBP
005eacaa  RET
