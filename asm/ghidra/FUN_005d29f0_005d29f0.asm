; FUN_005d29f0  005d29f0
005d29f0  PUSH EBP
005d29f1  MOV EBP,ESP
005d29f3  SUB ESP,0x8
005d29f6  MOV dword ptr [EBP + -0x4],ECX
005d29f9  MOV EAX,dword ptr [EBP + 0x8]
005d29fc  MOV dword ptr [EBP + -0x8],EAX
005d29ff  MOV ECX,dword ptr [EBP + -0x8]
005d2a02  SUB ECX,0x64
005d2a05  MOV dword ptr [EBP + -0x8],ECX
005d2a08  CMP dword ptr [EBP + -0x8],0x27
005d2a0c  JA 0x005d2e3f
005d2a12  MOV EDX,dword ptr [EBP + -0x8]
005d2a15  JMP dword ptr [EDX*0x4 + 0x5d2e48]
005d2e3f  MOV ESP,EBP
005d2e41  POP EBP
005d2e42  RET 0x4
