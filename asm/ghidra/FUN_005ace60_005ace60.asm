; FUN_005ace60  005ace60
005ace60  PUSH EBP
005ace61  MOV EBP,ESP
005ace63  PUSH ECX
005ace64  MOV dword ptr [EBP + -0x4],ECX
005ace67  MOV ECX,dword ptr [EBP + -0x4]
005ace6a  CALL 0x005a9ef0
005ace6f  MOV EAX,dword ptr [EBP + 0x8]
005ace72  AND EAX,0x1
005ace75  JZ 0x005ace83
005ace77  MOV ECX,dword ptr [EBP + -0x4]
005ace7a  PUSH ECX
005ace7b  CALL 0x00686cae
005ace80  ADD ESP,0x4
005ace83  MOV EAX,dword ptr [EBP + -0x4]
005ace86  MOV ESP,EBP
005ace88  POP EBP
005ace89  RET 0x4
