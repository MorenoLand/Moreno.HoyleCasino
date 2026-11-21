; FUN_005bbc50  005bbc50
005bbc50  PUSH EBP
005bbc51  MOV EBP,ESP
005bbc53  PUSH ECX
005bbc54  MOV dword ptr [EBP + -0x4],ECX
005bbc57  MOV EAX,dword ptr [EBP + -0x4]
005bbc5a  MOV dword ptr [EAX],0x6d1c0c
005bbc60  MOV ECX,dword ptr [EBP + -0x4]
005bbc63  CALL dword ptr [0x006b2278]
005bbc69  MOV ECX,dword ptr [EBP + 0x8]
005bbc6c  AND ECX,0x1
005bbc6f  JZ 0x005bbc7d
005bbc71  MOV EDX,dword ptr [EBP + -0x4]
005bbc74  PUSH EDX
005bbc75  CALL 0x00686cae
005bbc7a  ADD ESP,0x4
005bbc7d  MOV EAX,dword ptr [EBP + -0x4]
005bbc80  MOV ESP,EBP
005bbc82  POP EBP
005bbc83  RET 0x4
