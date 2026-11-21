; FUN_005def90  005def90
005def90  PUSH EBP
005def91  MOV EBP,ESP
005def93  PUSH ECX
005def94  MOV dword ptr [EBP + -0x4],ECX
005def97  MOV EAX,dword ptr [EBP + -0x4]
005def9a  MOV EDX,dword ptr [EAX]
005def9c  MOV ECX,dword ptr [EBP + -0x4]
005def9f  MOV EAX,dword ptr [EDX + 0x17c]
005defa5  CALL EAX
005defa7  CMP dword ptr [EBP + 0x8],EAX
005defaa  JGE 0x005defb8
005defac  MOV ECX,dword ptr [EBP + 0x8]
005defaf  MOV EAX,dword ptr [ECX*0x4 + 0x7947e8]
005defb6  JMP 0x005defd5
005defb8  XOR EDX,EDX
005defba  JNZ 0x005defd3
005defbc  PUSH 0x485
005defc1  PUSH 0x6d4b54
005defc6  PUSH 0x6b2f58
005defcb  CALL 0x005e9f20
005defd0  ADD ESP,0xc
005defd3  XOR EAX,EAX
005defd5  MOV ESP,EBP
005defd7  POP EBP
005defd8  RET 0x4
