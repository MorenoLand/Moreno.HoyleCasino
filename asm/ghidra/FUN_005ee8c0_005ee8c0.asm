; FUN_005ee8c0  005ee8c0
005ee8c0  PUSH EBP
005ee8c1  MOV EBP,ESP
005ee8c3  PUSH ECX
005ee8c4  MOV dword ptr [EBP + -0x4],ECX
005ee8c7  MOV AL,byte ptr [EBP + 0x10]
005ee8ca  PUSH EAX
005ee8cb  MOV CL,byte ptr [EBP + 0xc]
005ee8ce  PUSH ECX
005ee8cf  MOV DL,byte ptr [EBP + 0x8]
005ee8d2  PUSH EDX
005ee8d3  MOV ECX,dword ptr [EBP + -0x4]
005ee8d6  CALL 0x005f6580
005ee8db  MOV EAX,dword ptr [EBP + -0x4]
005ee8de  MOV CL,byte ptr [EBP + 0x8]
005ee8e1  MOV byte ptr [EAX + 0x88],CL
005ee8e7  MOV EDX,dword ptr [EBP + -0x4]
005ee8ea  MOV AL,byte ptr [EBP + 0xc]
005ee8ed  MOV byte ptr [EDX + 0x89],AL
005ee8f3  MOV ECX,dword ptr [EBP + -0x4]
005ee8f6  MOV DL,byte ptr [EBP + 0x10]
005ee8f9  MOV byte ptr [ECX + 0x8a],DL
005ee8ff  MOV EAX,dword ptr [EBP + -0x4]
005ee902  MOV EDX,dword ptr [EAX]
005ee904  MOV ECX,dword ptr [EBP + -0x4]
005ee907  MOV EAX,dword ptr [EDX + 0xac]
005ee90d  CALL EAX
005ee90f  MOV ESP,EBP
005ee911  POP EBP
005ee912  RET 0xc
