; FUN_005eccb0  005eccb0
005eccb0  PUSH EBP
005eccb1  MOV EBP,ESP
005eccb3  PUSH ECX
005eccb4  MOV dword ptr [EBP + -0x4],ECX
005eccb7  MOV EAX,dword ptr [EBP + -0x4]
005eccba  MOV EDX,dword ptr [EAX]
005eccbc  MOV ECX,dword ptr [EBP + -0x4]
005eccbf  MOV EAX,dword ptr [EDX + 0xac]
005eccc5  CALL EAX
005eccc7  MOV ECX,dword ptr [EBP + -0x4]
005eccca  MOV EDX,dword ptr [EBP + 0x8]
005ecccd  MOV dword ptr [ECX + 0x6c],EDX
005eccd0  MOV EAX,dword ptr [EBP + -0x4]
005eccd3  MOV ECX,dword ptr [EAX + 0x6c]
005eccd6  PUSH ECX
005eccd7  MOV ECX,dword ptr [EBP + -0x4]
005eccda  CALL 0x005f5570
005eccdf  MOV EDX,dword ptr [EBP + -0x4]
005ecce2  MOV EAX,dword ptr [EDX]
005ecce4  MOV ECX,dword ptr [EBP + -0x4]
005ecce7  MOV EDX,dword ptr [EAX + 0xac]
005ecced  CALL EDX
005eccef  MOV ESP,EBP
005eccf1  POP EBP
005eccf2  RET 0x4
