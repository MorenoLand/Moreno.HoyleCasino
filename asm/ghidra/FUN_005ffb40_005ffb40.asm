; FUN_005ffb40  005ffb40
005ffb40  PUSH EBP
005ffb41  MOV EBP,ESP
005ffb43  SUB ESP,0x14
005ffb46  MOV dword ptr [EBP + -0x10],ECX
005ffb49  MOV EAX,dword ptr [EBP + 0x8]
005ffb4c  PUSH EAX
005ffb4d  MOV ECX,dword ptr [EBP + -0x10]
005ffb50  CALL 0x005ff920
005ffb55  MOV dword ptr [EBP + -0x4],EAX
005ffb58  CMP dword ptr [EBP + -0x4],0x0
005ffb5c  JNZ 0x005ffb60
005ffb5e  JMP 0x005ffb9b
005ffb60  MOV ECX,dword ptr [EBP + -0x4]
005ffb63  PUSH ECX
005ffb64  MOV ECX,dword ptr [EBP + -0x10]
005ffb67  ADD ECX,0x48
005ffb6a  CALL 0x0060c890
005ffb6f  MOV EDX,dword ptr [EBP + -0x4]
005ffb72  MOV dword ptr [EBP + -0xc],EDX
005ffb75  MOV EAX,dword ptr [EBP + -0xc]
005ffb78  MOV dword ptr [EBP + -0x8],EAX
005ffb7b  CMP dword ptr [EBP + -0x8],0x0
005ffb7f  JZ 0x005ffb94
005ffb81  PUSH 0x1
005ffb83  MOV ECX,dword ptr [EBP + -0x8]
005ffb86  MOV EDX,dword ptr [ECX]
005ffb88  MOV ECX,dword ptr [EBP + -0x8]
005ffb8b  MOV EAX,dword ptr [EDX]
005ffb8d  CALL EAX
005ffb8f  MOV dword ptr [EBP + -0x14],EAX
005ffb92  JMP 0x005ffb9b
005ffb94  MOV dword ptr [EBP + -0x14],0x0
005ffb9b  MOV ESP,EBP
005ffb9d  POP EBP
005ffb9e  RET 0x4
