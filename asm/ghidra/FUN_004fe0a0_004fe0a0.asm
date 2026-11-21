; FUN_004fe0a0  004fe0a0
004fe0a0  PUSH EBP
004fe0a1  MOV EBP,ESP
004fe0a3  SUB ESP,0x8
004fe0a6  MOV dword ptr [EBP + -0x4],ECX
004fe0a9  MOV EAX,dword ptr [EBP + 0x8]
004fe0ac  MOV dword ptr [EBP + -0x8],EAX
004fe0af  MOV ECX,dword ptr [EBP + -0x8]
004fe0b2  SUB ECX,0x30e78a
004fe0b8  MOV dword ptr [EBP + -0x8],ECX
004fe0bb  CMP dword ptr [EBP + -0x8],0x6
004fe0bf  JA 0x004fe0f9
004fe0c1  MOV EDX,dword ptr [EBP + -0x8]
004fe0c4  JMP dword ptr [EDX*0x4 + 0x4fe104]
004fe0cb  XOR EAX,EAX
004fe0cd  JMP 0x004fe0fc
004fe0cf  MOV EAX,0x1
004fe0d4  JMP 0x004fe0fc
004fe0d6  MOV EAX,0x2
004fe0db  JMP 0x004fe0fc
004fe0dd  MOV EAX,0x3
004fe0e2  JMP 0x004fe0fc
004fe0e4  MOV EAX,0x4
004fe0e9  JMP 0x004fe0fc
004fe0eb  MOV EAX,0x5
004fe0f0  JMP 0x004fe0fc
004fe0f2  MOV EAX,0x6
004fe0f7  JMP 0x004fe0fc
004fe0f9  OR EAX,0xffffffff
004fe0fc  MOV ESP,EBP
004fe0fe  POP EBP
004fe0ff  RET 0x4
