; FUN_005ace30  005ace30
005ace30  PUSH EBP
005ace31  MOV EBP,ESP
005ace33  PUSH ECX
005ace34  MOV dword ptr [EBP + -0x4],ECX
005ace37  MOV ECX,dword ptr [EBP + -0x4]
005ace3a  CALL 0x005a8fb0
005ace3f  MOV EAX,dword ptr [EBP + 0x8]
005ace42  AND EAX,0x1
005ace45  JZ 0x005ace53
005ace47  MOV ECX,dword ptr [EBP + -0x4]
005ace4a  PUSH ECX
005ace4b  CALL 0x00686cae
005ace50  ADD ESP,0x4
005ace53  MOV EAX,dword ptr [EBP + -0x4]
005ace56  MOV ESP,EBP
005ace58  POP EBP
005ace59  RET 0x4
