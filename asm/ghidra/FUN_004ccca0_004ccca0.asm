; FUN_004ccca0  004ccca0
004ccca0  PUSH EBP
004ccca1  MOV EBP,ESP
004ccca3  PUSH ECX
004ccca4  MOV dword ptr [EBP + -0x4],ECX
004ccca7  PUSH 0x2
004ccca9  PUSH 0x2
004cccab  CALL 0x0062fbf0
004cccb0  ADD ESP,0x4
004cccb3  NEG EAX
004cccb5  SBB EAX,EAX
004cccb7  AND EAX,0xfffffbd6
004cccbc  ADD EAX,0x81a
004cccc1  PUSH EAX
004cccc2  MOV EAX,dword ptr [EBP + 0x8]
004cccc5  PUSH EAX
004cccc6  MOV ECX,dword ptr [EBP + -0x4]
004cccc9  CALL 0x004cc7e0
004cccce  MOV ESP,EBP
004cccd0  POP EBP
004cccd1  RET 0x4
