; FUN_005bba10  005bba10
005bba10  PUSH EBP
005bba11  MOV EBP,ESP
005bba13  PUSH -0x1
005bba15  PUSH 0x6a8059
005bba1a  MOV EAX,FS:[0x0]
005bba20  PUSH EAX
005bba21  PUSH ECX
005bba22  MOV EAX,[0x00781870]
005bba27  XOR EAX,EBP
005bba29  PUSH EAX
005bba2a  LEA EAX,[EBP + -0xc]
005bba2d  MOV FS:[0x0],EAX
005bba33  MOV dword ptr [EBP + -0x10],ECX
005bba36  MOV EAX,dword ptr [EBP + 0x8]
005bba39  PUSH EAX
005bba3a  MOV ECX,dword ptr [EBP + -0x10]
005bba3d  CALL dword ptr [0x006b2210]
005bba43  MOV dword ptr [EBP + -0x4],0x0
005bba4a  MOV ECX,dword ptr [EBP + -0x10]
005bba4d  MOV dword ptr [ECX],0x6d1bec
005bba53  MOV EDX,dword ptr [EBP + 0x8]
005bba56  ADD EDX,0xc
005bba59  PUSH EDX
005bba5a  MOV ECX,dword ptr [EBP + -0x10]
005bba5d  ADD ECX,0xc
005bba60  CALL dword ptr [0x006b20f8]
005bba66  MOV dword ptr [EBP + -0x4],0xffffffff
005bba6d  MOV EAX,dword ptr [EBP + -0x10]
005bba70  MOV ECX,dword ptr [EBP + -0xc]
005bba73  MOV dword ptr FS:[0x0],ECX
005bba7a  POP ECX
005bba7b  MOV ESP,EBP
005bba7d  POP EBP
005bba7e  RET 0x4
