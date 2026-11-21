; FUN_004ccba0  004ccba0
004ccba0  PUSH EBP
004ccba1  MOV EBP,ESP
004ccba3  PUSH ECX
004ccba4  MOV dword ptr [EBP + -0x4],ECX
004ccba7  PUSH 0x2
004ccba9  PUSH 0x2
004ccbab  CALL 0x0062fbf0
004ccbb0  ADD ESP,0x4
004ccbb3  NEG EAX
004ccbb5  SBB EAX,EAX
004ccbb7  AND EAX,0xfffffbef
004ccbbc  ADD EAX,0x80d
004ccbc1  PUSH EAX
004ccbc2  MOV EAX,dword ptr [EBP + 0x8]
004ccbc5  PUSH EAX
004ccbc6  MOV ECX,dword ptr [EBP + -0x4]
004ccbc9  CALL 0x004cc7e0
004ccbce  MOV ESP,EBP
004ccbd0  POP EBP
004ccbd1  RET 0x4
