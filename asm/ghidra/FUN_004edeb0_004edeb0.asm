; FUN_004edeb0  004edeb0
004edeb0  PUSH EBP
004edeb1  MOV EBP,ESP
004edeb3  SUB ESP,0x8
004edeb6  PUSH ESI
004edeb7  MOV dword ptr [EBP + -0x8],ECX
004edeba  MOV EAX,dword ptr [EBP + -0x8]
004edebd  MOVSX ECX,word ptr [EAX + 0x64]
004edec1  TEST ECX,ECX
004edec3  JNZ 0x004eded9
004edec5  MOV EDX,dword ptr [EBP + -0x8]
004edec8  MOV AX,word ptr [EDX + 0x370]
004edecf  JMP 0x004edf8d
004eded9  MOV EAX,dword ptr [EBP + -0x8]
004ededc  MOVSX ECX,word ptr [EAX + 0x64]
004edee0  CMP ECX,0x1
004edee3  JNZ 0x004edf1d
004edee5  MOV EDX,dword ptr [EBP + -0x8]
004edee8  MOV AX,word ptr [EDX + 0x370]
004edeef  MOV word ptr [EBP + -0x4],AX
004edef3  PUSH 0x5
004edef5  CALL 0x0062fbf0
004edefa  ADD ESP,0x4
004edefd  MOVSX ECX,word ptr [EBP + -0x4]
004edf01  SUB ECX,EAX
004edf03  MOV word ptr [EBP + -0x4],CX
004edf07  MOVSX EDX,word ptr [EBP + -0x4]
004edf0b  TEST EDX,EDX
004edf0d  JGE 0x004edf15
004edf0f  MOV word ptr [EBP + -0x4],0x0
004edf15  MOV AX,word ptr [EBP + -0x4]
004edf19  JMP 0x004edf8d
004edf1d  MOV EAX,dword ptr [EBP + -0x8]
004edf20  MOVSX ECX,word ptr [EAX + 0x64]
004edf24  CMP ECX,0x2
004edf27  JNZ 0x004edf46
004edf29  MOV EDX,dword ptr [EBP + -0x8]
004edf2c  MOVSX ESI,word ptr [EDX + 0x370]
004edf33  PUSH 0x3
004edf35  CALL 0x0062fbf0
004edf3a  ADD ESP,0x4
004edf3d  ADD ESI,EAX
004edf3f  MOV AX,SI
004edf42  JMP 0x004edf8d
004edf46  MOV EAX,dword ptr [EBP + -0x8]
004edf49  MOVSX ECX,word ptr [EAX + 0x64]
004edf4d  CMP ECX,0x3
004edf50  JNZ 0x004edf6f
004edf52  MOV EDX,dword ptr [EBP + -0x8]
004edf55  MOVSX ESI,word ptr [EDX + 0x370]
004edf5c  PUSH 0x6
004edf5e  CALL 0x0062fbf0
004edf63  ADD ESP,0x4
004edf66  ADD ESI,EAX
004edf68  MOV AX,SI
004edf6b  JMP 0x004edf8d
004edf6f  XOR EAX,EAX
004edf71  JNZ 0x004edf8a
004edf73  PUSH 0x2b4e
004edf78  PUSH 0x6bf384
004edf7d  PUSH 0x6b2b64
004edf82  CALL 0x005e9f20
004edf87  ADD ESP,0xc
004edf8a  XOR AX,AX
004edf8d  POP ESI
004edf8e  MOV ESP,EBP
004edf90  POP EBP
004edf91  RET
