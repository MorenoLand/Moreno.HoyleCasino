; FUN_005dc9d0  005dc9d0
005dc9d0  PUSH EBP
005dc9d1  MOV EBP,ESP
005dc9d3  PUSH ECX
005dc9d4  MOV dword ptr [EBP + -0x4],ECX
005dc9d7  MOV EAX,dword ptr [EBP + -0x4]
005dc9da  CMP dword ptr [EAX + 0x5c],0x0
005dc9de  JNZ 0x005dc9e2
005dc9e0  JMP 0x005dc9ed
005dc9e2  MOV ECX,dword ptr [EBP + -0x4]
005dc9e5  MOV ECX,dword ptr [ECX + 0x5c]
005dc9e8  CALL 0x005e86b0
005dc9ed  MOV ESP,EBP
005dc9ef  POP EBP
005dc9f0  RET
