; FUN_005cd330  005cd330
005cd330  PUSH EBP
005cd331  MOV EBP,ESP
005cd333  PUSH ECX
005cd334  MOV dword ptr [EBP + -0x4],ECX
005cd337  MOV EAX,dword ptr [EBP + -0x4]
005cd33a  CMP dword ptr [EAX + 0xadc],0x0
005cd341  JZ 0x005cd35c
005cd343  MOV ECX,dword ptr [EBP + -0x4]
005cd346  MOV EDX,dword ptr [ECX + 0xadc]
005cd34c  MOV EAX,dword ptr [EBP + -0x4]
005cd34f  MOV ECX,dword ptr [EAX + 0xadc]
005cd355  MOV EDX,dword ptr [EDX]
005cd357  MOV EAX,dword ptr [EDX + 0x70]
005cd35a  CALL EAX
005cd35c  MOV ESP,EBP
005cd35e  POP EBP
005cd35f  RET
