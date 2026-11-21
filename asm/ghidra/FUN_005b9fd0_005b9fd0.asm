; FUN_005b9fd0  005b9fd0
005b9fd0  PUSH EBP
005b9fd1  MOV EBP,ESP
005b9fd3  SUB ESP,0x8
005b9fd6  MOV dword ptr [EBP + -0x8],ECX
005b9fd9  MOV EAX,dword ptr [EBP + -0x8]
005b9fdc  MOV ECX,dword ptr [EAX + 0x4]
005b9fdf  MOV dword ptr [EBP + -0x4],ECX
005b9fe2  MOV EDX,dword ptr [EBP + 0x8]
005b9fe5  MOV dword ptr [EDX],0x0
005b9feb  CMP dword ptr [EBP + -0x8],0x0
005b9fef  JZ 0x005ba007
005b9ff1  MOV EAX,dword ptr [EBP + -0x8]
005b9ff4  MOV ECX,dword ptr [EAX + 0x4]
005b9ff7  CMP ECX,dword ptr [EBP + -0x4]
005b9ffa  JA 0x005ba007
005b9ffc  MOV EDX,dword ptr [EBP + -0x8]
005b9fff  MOV EAX,dword ptr [EBP + -0x4]
005ba002  CMP EAX,dword ptr [EDX + 0x8]
005ba005  JBE 0x005ba00d
005ba007  CALL dword ptr [0x006b2274]
005ba00d  MOV ECX,dword ptr [EBP + 0x8]
005ba010  MOV EDX,dword ptr [EBP + -0x8]
005ba013  MOV dword ptr [ECX],EDX
005ba015  MOV EAX,dword ptr [EBP + 0x8]
005ba018  MOV ECX,dword ptr [EBP + -0x4]
005ba01b  MOV dword ptr [EAX + 0x4],ECX
005ba01e  MOV EAX,dword ptr [EBP + 0x8]
005ba021  MOV ESP,EBP
005ba023  POP EBP
005ba024  RET 0x4
