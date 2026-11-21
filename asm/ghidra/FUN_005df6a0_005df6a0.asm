; FUN_005df6a0  005df6a0
005df6a0  PUSH EBP
005df6a1  MOV EBP,ESP
005df6a3  SUB ESP,0x8
005df6a6  MOV dword ptr [EBP + -0x4],ECX
005df6a9  MOV EAX,dword ptr [EBP + 0x8]
005df6ac  MOV dword ptr [EBP + -0x8],EAX
005df6af  MOV ECX,dword ptr [EBP + -0x8]
005df6b2  SUB ECX,0x1
005df6b5  MOV dword ptr [EBP + -0x8],ECX
005df6b8  CMP dword ptr [EBP + -0x8],0x3
005df6bc  JA 0x005df6e4
005df6be  MOV EDX,dword ptr [EBP + -0x8]
005df6c1  JMP dword ptr [EDX*0x4 + 0x5df6ec]
005df6e4  XOR EAX,EAX
005df6e6  MOV ESP,EBP
005df6e8  POP EBP
005df6e9  RET 0x4
