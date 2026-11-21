; FUN_005ee890  005ee890
005ee890  PUSH EBP
005ee891  MOV EBP,ESP
005ee893  PUSH ECX
005ee894  MOV dword ptr [EBP + -0x4],ECX
005ee897  MOV EAX,dword ptr [EBP + -0x4]
005ee89a  CMP dword ptr [EAX + 0x5c],0x0
005ee89e  JZ 0x005ee8a8
005ee8a0  MOV ECX,dword ptr [EBP + -0x4]
005ee8a3  MOV EAX,dword ptr [ECX + 0x5c]
005ee8a6  JMP 0x005ee8ad
005ee8a8  MOV EAX,0x6b27f8
005ee8ad  MOV ESP,EBP
005ee8af  POP EBP
005ee8b0  RET
