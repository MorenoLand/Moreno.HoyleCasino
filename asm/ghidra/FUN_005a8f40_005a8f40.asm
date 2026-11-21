; FUN_005a8f40  005a8f40
005a8f40  PUSH EBP
005a8f41  MOV EBP,ESP
005a8f43  SUB ESP,0xc
005a8f46  MOV dword ptr [EBP + -0xc],ECX
005a8f49  MOV ECX,dword ptr [EBP + -0xc]
005a8f4c  CALL 0x005cc1d0
005a8f51  MOV EAX,dword ptr [EBP + -0xc]
005a8f54  MOV dword ptr [EAX],0x6cfa34
005a8f5a  MOV dword ptr [EBP + -0x4],0x0
005a8f61  JMP 0x005a8f6c
005a8f63  MOV ECX,dword ptr [EBP + -0x4]
005a8f66  ADD ECX,0x1
005a8f69  MOV dword ptr [EBP + -0x4],ECX
005a8f6c  CMP dword ptr [EBP + -0x4],0x4
005a8f70  JGE 0x005a8fa8
005a8f72  MOV dword ptr [EBP + -0x8],0x0
005a8f79  JMP 0x005a8f84
005a8f7b  MOV EDX,dword ptr [EBP + -0x8]
005a8f7e  ADD EDX,0x1
005a8f81  MOV dword ptr [EBP + -0x8],EDX
005a8f84  CMP dword ptr [EBP + -0x8],0x1e
005a8f88  JGE 0x005a8fa6
005a8f8a  MOV EAX,dword ptr [EBP + -0x4]
005a8f8d  IMUL EAX,EAX,0x78
005a8f90  MOV ECX,dword ptr [EBP + -0xc]
005a8f93  LEA EDX,[ECX + EAX*0x1 + 0xae0]
005a8f9a  MOV EAX,dword ptr [EBP + -0x8]
005a8f9d  MOV dword ptr [EDX + EAX*0x4],0x0
005a8fa4  JMP 0x005a8f7b
005a8fa6  JMP 0x005a8f63
005a8fa8  MOV EAX,dword ptr [EBP + -0xc]
005a8fab  MOV ESP,EBP
005a8fad  POP EBP
005a8fae  RET
