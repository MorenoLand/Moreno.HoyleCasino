; FUN_005d6a50  005d6a50
005d6a50  PUSH EBP
005d6a51  MOV EBP,ESP
005d6a53  SUB ESP,0xc
005d6a56  MOV dword ptr [EBP + -0xc],ECX
005d6a59  MOV dword ptr [EBP + -0x4],0x0
005d6a60  MOV EAX,dword ptr [EBP + -0x4]
005d6a63  SHL EAX,0x4
005d6a66  MOVSX ECX,word ptr [EAX + 0x75d658]
005d6a6d  CMP ECX,-0x1
005d6a70  JZ 0x005d6aa5
005d6a72  MOV EDX,dword ptr [EBP + -0xc]
005d6a75  MOV EAX,dword ptr [EDX + 0x8]
005d6a78  MOV dword ptr [EBP + -0x8],EAX
005d6a7b  MOV ECX,dword ptr [EBP + -0x4]
005d6a7e  SHL ECX,0x4
005d6a81  MOVSX EDX,word ptr [ECX + 0x75d658]
005d6a88  CMP EDX,dword ptr [EBP + -0x8]
005d6a8b  JNZ 0x005d6a9a
005d6a8d  MOV EAX,dword ptr [EBP + -0x4]
005d6a90  SHL EAX,0x4
005d6a93  ADD EAX,0x75d658
005d6a98  JMP 0x005d6aa7
005d6a9a  MOV EAX,dword ptr [EBP + -0x4]
005d6a9d  ADD EAX,0x1
005d6aa0  MOV dword ptr [EBP + -0x4],EAX
005d6aa3  JMP 0x005d6a60
005d6aa5  XOR EAX,EAX
005d6aa7  MOV ESP,EBP
005d6aa9  POP EBP
005d6aaa  RET
