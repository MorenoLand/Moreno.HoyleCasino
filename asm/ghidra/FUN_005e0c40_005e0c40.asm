; FUN_005e0c40  005e0c40
005e0c40  PUSH EBP
005e0c41  MOV EBP,ESP
005e0c43  SUB ESP,0x8
005e0c46  MOV dword ptr [EBP + -0x8],ECX
005e0c49  MOV EAX,dword ptr [EBP + 0xc]
005e0c4c  MOV dword ptr [EAX],0x0
005e0c52  MOV ECX,dword ptr [EBP + 0xc]
005e0c55  MOV dword ptr [ECX + 0x4],0x0
005e0c5c  MOV EDX,dword ptr [EBP + 0x10]
005e0c5f  MOV dword ptr [EDX],0x0
005e0c65  MOV EAX,dword ptr [EBP + 0x10]
005e0c68  MOV dword ptr [EAX + 0x4],0x0
005e0c6f  MOV ECX,dword ptr [EBP + 0x8]
005e0c72  ADD ECX,0x10
005e0c75  PUSH ECX
005e0c76  MOV ECX,dword ptr [EBP + -0x8]
005e0c79  CALL 0x005e0b90
005e0c7e  MOV dword ptr [EBP + -0x4],EAX
005e0c81  CMP dword ptr [EBP + -0x4],0x0
005e0c85  JNZ 0x005e0c89
005e0c87  JMP 0x005e0cb7
005e0c89  MOV EDX,dword ptr [EBP + -0x4]
005e0c8c  MOV EAX,dword ptr [EDX + 0x4c4]
005e0c92  MOV ECX,dword ptr [EDX + 0x4c8]
005e0c98  MOV EDX,dword ptr [EBP + 0xc]
005e0c9b  MOV dword ptr [EDX],EAX
005e0c9d  MOV dword ptr [EDX + 0x4],ECX
005e0ca0  MOV EAX,dword ptr [EBP + -0x4]
005e0ca3  MOV ECX,dword ptr [EAX + 0x4d4]
005e0ca9  MOV EDX,dword ptr [EAX + 0x4d8]
005e0caf  MOV EAX,dword ptr [EBP + 0x10]
005e0cb2  MOV dword ptr [EAX],ECX
005e0cb4  MOV dword ptr [EAX + 0x4],EDX
005e0cb7  MOV ESP,EBP
005e0cb9  POP EBP
005e0cba  RET 0xc
