; FUN_005ceb60  005ceb60
005ceb60  PUSH EBP
005ceb61  MOV EBP,ESP
005ceb63  PUSH -0x1
005ceb65  PUSH 0x6a8c51
005ceb6a  MOV EAX,FS:[0x0]
005ceb70  PUSH EAX
005ceb71  PUSH ECX
005ceb72  MOV EAX,[0x00781870]
005ceb77  XOR EAX,EBP
005ceb79  PUSH EAX
005ceb7a  LEA EAX,[EBP + -0xc]
005ceb7d  MOV FS:[0x0],EAX
005ceb83  MOV dword ptr [EBP + -0x10],ECX
005ceb86  PUSH 0x0
005ceb88  PUSH 0x0
005ceb8a  MOV ECX,dword ptr [EBP + -0x10]
005ceb8d  CALL 0x005f71f0
005ceb92  MOV dword ptr [EBP + -0x4],0x0
005ceb99  MOV EAX,dword ptr [EBP + -0x10]
005ceb9c  MOV dword ptr [EAX],0x6d2e6c
005ceba2  PUSH 0x0
005ceba4  PUSH 0x4e4
005ceba9  MOV ECX,dword ptr [EBP + -0x10]
005cebac  CALL 0x005f83d0
005cebb1  MOV dword ptr [EBP + -0x4],0xffffffff
005cebb8  MOV EAX,dword ptr [EBP + -0x10]
005cebbb  MOV ECX,dword ptr [EBP + -0xc]
005cebbe  MOV dword ptr FS:[0x0],ECX
005cebc5  POP ECX
005cebc6  MOV ESP,EBP
005cebc8  POP EBP
005cebc9  RET
