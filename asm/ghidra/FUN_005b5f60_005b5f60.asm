; FUN_005b5f60  005b5f60
005b5f60  PUSH EBP
005b5f61  MOV EBP,ESP
005b5f63  SUB ESP,0xc
005b5f66  MOV dword ptr [EBP + -0x8],ECX
005b5f69  MOV EAX,dword ptr [EBP + 0x10]
005b5f6c  PUSH EAX
005b5f6d  MOV ECX,dword ptr [EBP + 0xc]
005b5f70  PUSH ECX
005b5f71  MOV EDX,dword ptr [EBP + 0x8]
005b5f74  PUSH EDX
005b5f75  MOV ECX,dword ptr [EBP + -0x8]
005b5f78  CALL 0x005b5c60
005b5f7d  PUSH EAX
005b5f7e  CALL 0x00641280
005b5f83  ADD ESP,0x4
005b5f86  MOV dword ptr [EBP + -0x4],EAX
005b5f89  CMP dword ptr [EBP + -0x4],0xa
005b5f8d  JLE 0x005b5f98
005b5f8f  MOV dword ptr [EBP + -0xc],0xa
005b5f96  JMP 0x005b5f9e
005b5f98  MOV EAX,dword ptr [EBP + -0x4]
005b5f9b  MOV dword ptr [EBP + -0xc],EAX
005b5f9e  MOV EAX,dword ptr [EBP + -0xc]
005b5fa1  MOV ESP,EBP
005b5fa3  POP EBP
005b5fa4  RET 0xc
