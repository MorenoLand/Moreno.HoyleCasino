; FUN_005ca780  005ca780
005ca780  PUSH EBP
005ca781  MOV EBP,ESP
005ca783  PUSH ECX
005ca784  MOV dword ptr [EBP + -0x4],ECX
005ca787  MOV EAX,dword ptr [EBP + -0x4]
005ca78a  MOV ECX,dword ptr [EBP + 0x8]
005ca78d  MOV dword ptr [EAX + 0x2c],ECX
005ca790  MOV EDX,dword ptr [EBP + -0x4]
005ca793  MOV byte ptr [EDX + 0x28],0x1
005ca797  MOV ECX,dword ptr [EBP + -0x4]
005ca79a  CALL 0x005ca7b0
005ca79f  MOV ESP,EBP
005ca7a1  POP EBP
005ca7a2  RET 0x4
