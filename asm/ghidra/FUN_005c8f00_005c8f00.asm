; FUN_005c8f00  005c8f00
005c8f00  PUSH EBP
005c8f01  MOV EBP,ESP
005c8f03  SUB ESP,0x14
005c8f06  MOV dword ptr [EBP + -0x10],ECX
005c8f09  MOV EAX,dword ptr [EBP + -0x10]
005c8f0c  MOV ECX,dword ptr [EAX + 0x8]
005c8f0f  MOV dword ptr [EBP + -0x8],ECX
005c8f12  MOV EDX,dword ptr [EBP + -0x10]
005c8f15  MOV EAX,dword ptr [EDX + 0xc]
005c8f18  MOV dword ptr [EBP + -0xc],EAX
005c8f1b  MOV EAX,dword ptr [EBP + -0x8]
005c8f1e  CDQ
005c8f1f  IDIV dword ptr [EBP + -0xc]
005c8f22  ADD EAX,0x1
005c8f25  MOV dword ptr [EBP + -0x4],EAX
005c8f28  MOV ECX,dword ptr [EBP + -0x10]
005c8f2b  MOV EDX,dword ptr [ECX + 0x10]
005c8f2e  MOV EAX,dword ptr [EBP + -0x4]
005c8f31  CMP EAX,dword ptr [EDX + 0xc]
005c8f34  JLE 0x005c8f59
005c8f36  MOVZX ECX,byte ptr [EBP + 0x8]
005c8f3a  TEST ECX,ECX
005c8f3c  JZ 0x005c8f47
005c8f3e  MOV dword ptr [EBP + -0x14],0x1
005c8f45  JMP 0x005c8f53
005c8f47  MOV EDX,dword ptr [EBP + -0x10]
005c8f4a  MOV EAX,dword ptr [EDX + 0x10]
005c8f4d  MOV ECX,dword ptr [EAX + 0xc]
005c8f50  MOV dword ptr [EBP + -0x14],ECX
005c8f53  MOV EDX,dword ptr [EBP + -0x14]
005c8f56  MOV dword ptr [EBP + -0x4],EDX
005c8f59  MOV EAX,dword ptr [EBP + -0x4]
005c8f5c  PUSH EAX
005c8f5d  MOV ECX,dword ptr [EBP + -0x10]
005c8f60  CALL 0x005c8ed0
005c8f65  MOV ESP,EBP
005c8f67  POP EBP
005c8f68  RET 0x4
