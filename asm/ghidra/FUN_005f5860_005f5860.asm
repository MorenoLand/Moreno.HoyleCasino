; FUN_005f5860  005f5860
005f5860  PUSH EBP
005f5861  MOV EBP,ESP
005f5863  PUSH ECX
005f5864  MOV dword ptr [EBP + -0x4],ECX
005f5867  MOV EAX,dword ptr [EBP + -0x4]
005f586a  CMP dword ptr [EAX + 0x4],0x0
005f586e  JZ 0x005f588f
005f5870  MOV ECX,dword ptr [EBP + -0x4]
005f5873  MOV EDX,dword ptr [ECX]
005f5875  MOV ECX,dword ptr [EBP + -0x4]
005f5878  MOV EAX,dword ptr [EDX + 0xac]
005f587e  CALL EAX
005f5880  MOV ECX,dword ptr [EBP + -0x4]
005f5883  PUSH ECX
005f5884  MOV EDX,dword ptr [EBP + -0x4]
005f5887  MOV ECX,dword ptr [EDX + 0x4]
005f588a  CALL 0x005f8ce0
005f588f  MOV EAX,dword ptr [EBP + -0x4]
005f5892  MOV ECX,dword ptr [EBP + 0x8]
005f5895  MOV dword ptr [EAX + 0x4],ECX
005f5898  MOV EDX,dword ptr [EBP + -0x4]
005f589b  CMP dword ptr [EDX + 0x28],0x0
005f589f  JZ 0x005f58c0
005f58a1  MOV EAX,dword ptr [EBP + -0x4]
005f58a4  PUSH EAX
005f58a5  MOV ECX,dword ptr [EBP + -0x4]
005f58a8  MOV ECX,dword ptr [ECX + 0x4]
005f58ab  CALL 0x005f8ba0
005f58b0  MOV EDX,dword ptr [EBP + -0x4]
005f58b3  MOV EAX,dword ptr [EDX]
005f58b5  MOV ECX,dword ptr [EBP + -0x4]
005f58b8  MOV EDX,dword ptr [EAX + 0xac]
005f58be  CALL EDX
005f58c0  MOV ESP,EBP
005f58c2  POP EBP
005f58c3  RET 0x4
