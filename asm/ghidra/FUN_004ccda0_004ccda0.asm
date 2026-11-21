; FUN_004ccda0  004ccda0
004ccda0  PUSH EBP
004ccda1  MOV EBP,ESP
004ccda3  PUSH ECX
004ccda4  MOV dword ptr [EBP + -0x4],ECX
004ccda7  PUSH 0x2
004ccda9  PUSH 0x2
004ccdab  CALL 0x0062fbf0
004ccdb0  ADD ESP,0x4
004ccdb3  NEG EAX
004ccdb5  SBB EAX,EAX
004ccdb7  AND EAX,0xfffffff4
004ccdba  ADD EAX,0x402
004ccdbf  PUSH EAX
004ccdc0  MOV EAX,dword ptr [EBP + 0x8]
004ccdc3  PUSH EAX
004ccdc4  MOV ECX,dword ptr [EBP + -0x4]
004ccdc7  CALL 0x004cc7e0
004ccdcc  MOV ESP,EBP
004ccdce  POP EBP
004ccdcf  RET 0x4
