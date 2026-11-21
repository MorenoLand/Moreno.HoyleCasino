; FUN_005cecc0  005cecc0
005cecc0  PUSH EBP
005cecc1  MOV EBP,ESP
005cecc3  PUSH -0x1
005cecc5  PUSH 0x6a8c74
005cecca  MOV EAX,FS:[0x0]
005cecd0  PUSH EAX
005cecd1  PUSH ECX
005cecd2  MOV EAX,[0x00781870]
005cecd7  XOR EAX,EBP
005cecd9  PUSH EAX
005cecda  LEA EAX,[EBP + -0xc]
005cecdd  MOV FS:[0x0],EAX
005cece3  MOV dword ptr [EBP + -0x10],ECX
005cece6  PUSH 0x0
005cece8  PUSH 0x1
005cecea  MOV ECX,dword ptr [EBP + -0x10]
005ceced  CALL 0x005f71f0
005cecf2  MOV dword ptr [EBP + -0x4],0x0
005cecf9  MOV EAX,dword ptr [EBP + -0x10]
005cecfc  MOV dword ptr [EAX],0x6d2eb4
005ced02  PUSH 0x0
005ced04  PUSH 0x4e7
005ced09  MOV ECX,dword ptr [EBP + -0x10]
005ced0c  CALL 0x005f83d0
005ced11  MOV ECX,dword ptr [EBP + -0x10]
005ced14  MOV byte ptr [ECX + 0x1bc],0x0
005ced1b  MOV dword ptr [EBP + -0x4],0xffffffff
005ced22  MOV EAX,dword ptr [EBP + -0x10]
005ced25  MOV ECX,dword ptr [EBP + -0xc]
005ced28  MOV dword ptr FS:[0x0],ECX
005ced2f  POP ECX
005ced30  MOV ESP,EBP
005ced32  POP EBP
005ced33  RET
