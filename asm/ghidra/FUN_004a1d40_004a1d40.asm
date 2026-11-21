; FUN_004a1d40  004a1d40
004a1d40  PUSH EBP
004a1d41  MOV EBP,ESP
004a1d43  SUB ESP,0x10
004a1d46  MOV dword ptr [EBP + -0xc],ECX
004a1d49  MOV EAX,dword ptr [EBP + -0xc]
004a1d4c  MOV word ptr [EAX + 0x4],0x0
004a1d52  MOV ECX,dword ptr [EBP + -0xc]
004a1d55  CMP dword ptr [ECX],0x0
004a1d58  JZ 0x004a1d8d
004a1d5a  MOV EDX,dword ptr [EBP + -0xc]
004a1d5d  MOV EAX,dword ptr [EDX]
004a1d5f  MOV dword ptr [EBP + -0x8],EAX
004a1d62  MOV ECX,dword ptr [EBP + -0x8]
004a1d65  MOV dword ptr [EBP + -0x4],ECX
004a1d68  CMP dword ptr [EBP + -0x4],0x0
004a1d6c  JZ 0x004a1d7d
004a1d6e  PUSH 0x3
004a1d70  MOV ECX,dword ptr [EBP + -0x4]
004a1d73  CALL 0x004a1da0
004a1d78  MOV dword ptr [EBP + -0x10],EAX
004a1d7b  JMP 0x004a1d84
004a1d7d  MOV dword ptr [EBP + -0x10],0x0
004a1d84  MOV EDX,dword ptr [EBP + -0xc]
004a1d87  MOV dword ptr [EDX],0x0
004a1d8d  MOV ESP,EBP
004a1d8f  POP EBP
004a1d90  RET
