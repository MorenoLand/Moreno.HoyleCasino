; FUN_005f3c30  005f3c30
005f3c30  PUSH EBP
005f3c31  MOV EBP,ESP
005f3c33  PUSH ECX
005f3c34  MOV dword ptr [EBP + -0x4],ECX
005f3c37  MOV EAX,dword ptr [EBP + -0x4]
005f3c3a  MOV ECX,dword ptr [EBP + -0x4]
005f3c3d  MOV EDX,dword ptr [ECX + 0x34]
005f3c40  MOV dword ptr [EAX + 0x30],EDX
005f3c43  MOV EAX,dword ptr [EBP + -0x4]
005f3c46  MOV ECX,dword ptr [EBP + 0x8]
005f3c49  MOV dword ptr [EAX + 0x34],ECX
005f3c4c  MOV EDX,dword ptr [EBP + -0x4]
005f3c4f  MOV dword ptr [EDX + 0x2c],0xffffffff
005f3c56  MOV EAX,dword ptr [EBP + -0x4]
005f3c59  MOV ECX,dword ptr [EAX + 0x34]
005f3c5c  PUSH ECX
005f3c5d  MOV EDX,dword ptr [EBP + -0x4]
005f3c60  MOV EAX,dword ptr [EDX]
005f3c62  MOV ECX,dword ptr [EBP + -0x4]
005f3c65  MOV EDX,dword ptr [EAX + 0x90]
005f3c6b  CALL EDX
005f3c6d  MOV ESP,EBP
005f3c6f  POP EBP
005f3c70  RET 0x4
