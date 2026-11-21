; FUN_005bb990  005bb990
005bb990  PUSH EBP
005bb991  MOV EBP,ESP
005bb993  PUSH -0x1
005bb995  PUSH 0x6a8029
005bb99a  MOV EAX,FS:[0x0]
005bb9a0  PUSH EAX
005bb9a1  PUSH ECX
005bb9a2  MOV EAX,[0x00781870]
005bb9a7  XOR EAX,EBP
005bb9a9  PUSH EAX
005bb9aa  LEA EAX,[EBP + -0xc]
005bb9ad  MOV FS:[0x0],EAX
005bb9b3  MOV dword ptr [EBP + -0x10],ECX
005bb9b6  MOV EAX,dword ptr [EBP + 0x8]
005bb9b9  PUSH EAX
005bb9ba  MOV ECX,dword ptr [EBP + -0x10]
005bb9bd  CALL dword ptr [0x006b2210]
005bb9c3  MOV dword ptr [EBP + -0x4],0x0
005bb9ca  MOV ECX,dword ptr [EBP + -0x10]
005bb9cd  MOV dword ptr [ECX],0x6d1bec
005bb9d3  MOV EDX,dword ptr [EBP + 0x8]
005bb9d6  ADD EDX,0xc
005bb9d9  PUSH EDX
005bb9da  MOV ECX,dword ptr [EBP + -0x10]
005bb9dd  ADD ECX,0xc
005bb9e0  CALL dword ptr [0x006b20f8]
005bb9e6  MOV dword ptr [EBP + -0x4],0xffffffff
005bb9ed  MOV EAX,dword ptr [EBP + -0x10]
005bb9f0  MOV dword ptr [EAX],0x6d1be0
005bb9f6  MOV EAX,dword ptr [EBP + -0x10]
005bb9f9  MOV ECX,dword ptr [EBP + -0xc]
005bb9fc  MOV dword ptr FS:[0x0],ECX
005bba03  POP ECX
005bba04  MOV ESP,EBP
005bba06  POP EBP
005bba07  RET 0x4
