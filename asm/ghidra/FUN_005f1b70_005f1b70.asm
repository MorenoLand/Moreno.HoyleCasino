; FUN_005f1b70  005f1b70
005f1b70  PUSH EBP
005f1b71  MOV EBP,ESP
005f1b73  SUB ESP,0x10
005f1b76  MOV dword ptr [EBP + -0xc],ECX
005f1b79  MOV EAX,dword ptr [EBP + -0xc]
005f1b7c  CMP dword ptr [EAX + 0x4],0x0
005f1b80  JZ 0x005f1bb1
005f1b82  MOV ECX,dword ptr [EBP + -0xc]
005f1b85  MOV EDX,dword ptr [ECX + 0x4]
005f1b88  MOV dword ptr [EBP + -0x8],EDX
005f1b8b  MOV EAX,dword ptr [EBP + -0x8]
005f1b8e  MOV dword ptr [EBP + -0x4],EAX
005f1b91  CMP dword ptr [EBP + -0x4],0x0
005f1b95  JZ 0x005f1baa
005f1b97  PUSH 0x1
005f1b99  MOV ECX,dword ptr [EBP + -0x4]
005f1b9c  MOV EDX,dword ptr [ECX]
005f1b9e  MOV ECX,dword ptr [EBP + -0x4]
005f1ba1  MOV EAX,dword ptr [EDX]
005f1ba3  CALL EAX
005f1ba5  MOV dword ptr [EBP + -0x10],EAX
005f1ba8  JMP 0x005f1bb1
005f1baa  MOV dword ptr [EBP + -0x10],0x0
005f1bb1  MOV ECX,dword ptr [EBP + -0xc]
005f1bb4  MOV EDX,dword ptr [EBP + 0x8]
005f1bb7  MOV dword ptr [ECX + 0x4],EDX
005f1bba  MOV EAX,dword ptr [EBP + -0xc]
005f1bbd  CMP dword ptr [EAX + 0x4],0x0
005f1bc1  JZ 0x005f1bd2
005f1bc3  MOV ECX,dword ptr [EBP + -0xc]
005f1bc6  PUSH ECX
005f1bc7  MOV EDX,dword ptr [EBP + -0xc]
005f1bca  MOV ECX,dword ptr [EDX + 0x4]
005f1bcd  CALL 0x005fc220
005f1bd2  MOV ESP,EBP
005f1bd4  POP EBP
005f1bd5  RET 0x4
