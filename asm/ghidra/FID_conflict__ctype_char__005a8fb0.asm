; FID_conflict:~ctype<char>  005a8fb0
005a8fb0  PUSH EBP
005a8fb1  MOV EBP,ESP
005a8fb3  PUSH -0x1
005a8fb5  PUSH 0x6a7a2a
005a8fba  MOV EAX,FS:[0x0]
005a8fc0  PUSH EAX
005a8fc1  PUSH ECX
005a8fc2  MOV EAX,[0x00781870]
005a8fc7  XOR EAX,EBP
005a8fc9  PUSH EAX
005a8fca  LEA EAX,[EBP + -0xc]
005a8fcd  MOV FS:[0x0],EAX
005a8fd3  MOV dword ptr [EBP + -0x10],ECX
005a8fd6  MOV EAX,dword ptr [EBP + -0x10]
005a8fd9  MOV dword ptr [EAX],0x6cfa34
005a8fdf  MOV dword ptr [EBP + -0x4],0x0
005a8fe6  MOV ECX,dword ptr [EBP + -0x10]
005a8fe9  CALL 0x005a9510
005a8fee  MOV dword ptr [EBP + -0x4],0xffffffff
005a8ff5  MOV ECX,dword ptr [EBP + -0x10]
005a8ff8  CALL 0x005cc230
005a8ffd  MOV ECX,dword ptr [EBP + -0xc]
005a9000  MOV dword ptr FS:[0x0],ECX
005a9007  POP ECX
005a9008  MOV ESP,EBP
005a900a  POP EBP
005a900b  RET
