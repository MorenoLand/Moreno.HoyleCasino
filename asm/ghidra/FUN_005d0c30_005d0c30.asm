; FUN_005d0c30  005d0c30
005d0c30  PUSH EBP
005d0c31  MOV EBP,ESP
005d0c33  SUB ESP,0x1c
005d0c36  MOV dword ptr [EBP + -0x1c],ECX
005d0c39  MOV EAX,[0x007947e0]
005d0c3e  MOV ECX,dword ptr [EAX + 0x4f10]
005d0c44  MOV dword ptr [EBP + -0x18],ECX
005d0c47  CMP dword ptr [EBP + -0x18],0x3
005d0c4b  JGE 0x005d0c95
005d0c4d  MOV ECX,dword ptr [EBP + -0x1c]
005d0c50  CALL 0x005d0b60
005d0c55  IMUL EAX,dword ptr [EBP + 0xc]
005d0c59  MOV dword ptr [EBP + -0x4],EAX
005d0c5c  MOV EAX,dword ptr [EBP + -0x4]
005d0c5f  CDQ
005d0c60  MOV ECX,0x64
005d0c65  IDIV ECX
005d0c67  PUSH EDX
005d0c68  MOV EAX,dword ptr [EBP + -0x4]
005d0c6b  CDQ
005d0c6c  MOV ECX,0x64
005d0c71  IDIV ECX
005d0c73  PUSH EAX
005d0c74  CALL 0x0064c8a0
005d0c79  ADD ESP,0x8
005d0c7c  MOV dword ptr [EBP + -0xc],EAX
005d0c7f  MOV dword ptr [EBP + -0x8],EDX
005d0c82  MOV EDX,dword ptr [EBP + 0x8]
005d0c85  MOV EAX,dword ptr [EBP + -0xc]
005d0c88  MOV dword ptr [EDX],EAX
005d0c8a  MOV ECX,dword ptr [EBP + -0x8]
005d0c8d  MOV dword ptr [EDX + 0x4],ECX
005d0c90  MOV EAX,dword ptr [EBP + 0x8]
005d0c93  JMP 0x005d0cc3
005d0c95  PUSH 0x0
005d0c97  MOV ECX,dword ptr [EBP + -0x1c]
005d0c9a  CALL 0x005d0aa0
005d0c9f  IMUL EAX,dword ptr [EBP + 0xc]
005d0ca3  PUSH EAX
005d0ca4  CALL 0x0064c8a0
005d0ca9  ADD ESP,0x8
005d0cac  MOV dword ptr [EBP + -0x14],EAX
005d0caf  MOV dword ptr [EBP + -0x10],EDX
005d0cb2  MOV EDX,dword ptr [EBP + 0x8]
005d0cb5  MOV EAX,dword ptr [EBP + -0x14]
005d0cb8  MOV dword ptr [EDX],EAX
005d0cba  MOV ECX,dword ptr [EBP + -0x10]
005d0cbd  MOV dword ptr [EDX + 0x4],ECX
005d0cc0  MOV EAX,dword ptr [EBP + 0x8]
005d0cc3  MOV ESP,EBP
005d0cc5  POP EBP
005d0cc6  RET 0x8
