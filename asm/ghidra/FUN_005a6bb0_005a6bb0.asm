; FUN_005a6bb0  005a6bb0
005a6bb0  PUSH EBP
005a6bb1  MOV EBP,ESP
005a6bb3  SUB ESP,0x24
005a6bb6  MOV dword ptr [EBP + -0x24],ECX
005a6bb9  MOV EAX,dword ptr [EBP + 0x8]
005a6bbc  PUSH EAX
005a6bbd  CALL 0x005dcb00
005a6bc2  ADD ESP,0x4
005a6bc5  MOV dword ptr [EBP + -0x4],EAX
005a6bc8  MOV ECX,dword ptr [EBP + -0x4]
005a6bcb  MOV EDX,dword ptr [ECX + 0x8]
005a6bce  MOV dword ptr [EBP + -0x8],EDX
005a6bd1  CMP dword ptr [EBP + -0x8],0x16
005a6bd5  JZ 0x005a6c31
005a6bd7  MOV EAX,dword ptr [EBP + 0x8]
005a6bda  PUSH EAX
005a6bdb  CALL 0x005dcb00
005a6be0  ADD ESP,0x4
005a6be3  MOV dword ptr [EBP + -0xc],EAX
005a6be6  MOV ECX,dword ptr [EBP + -0xc]
005a6be9  MOV EDX,dword ptr [ECX + 0x8]
005a6bec  MOV dword ptr [EBP + -0x10],EDX
005a6bef  CMP dword ptr [EBP + -0x10],0x13
005a6bf3  JZ 0x005a6c31
005a6bf5  MOV EAX,dword ptr [EBP + 0x8]
005a6bf8  PUSH EAX
005a6bf9  CALL 0x005dcb00
005a6bfe  ADD ESP,0x4
005a6c01  MOV dword ptr [EBP + -0x14],EAX
005a6c04  MOV ECX,dword ptr [EBP + -0x14]
005a6c07  MOV EDX,dword ptr [ECX + 0x8]
005a6c0a  MOV dword ptr [EBP + -0x18],EDX
005a6c0d  CMP dword ptr [EBP + -0x18],0x1c
005a6c11  JZ 0x005a6c31
005a6c13  MOV EAX,dword ptr [EBP + 0x8]
005a6c16  PUSH EAX
005a6c17  CALL 0x005dcb00
005a6c1c  ADD ESP,0x4
005a6c1f  MOV dword ptr [EBP + -0x1c],EAX
005a6c22  MOV ECX,dword ptr [EBP + -0x1c]
005a6c25  MOV EDX,dword ptr [ECX + 0x8]
005a6c28  MOV dword ptr [EBP + -0x20],EDX
005a6c2b  CMP dword ptr [EBP + -0x20],0x1a
005a6c2f  JNZ 0x005a6c44
005a6c31  PUSH 0x6
005a6c33  CALL 0x0062fbf0
005a6c38  ADD ESP,0x4
005a6c3b  NEG EAX
005a6c3d  SBB EAX,EAX
005a6c3f  ADD EAX,0x1
005a6c42  JMP 0x005a6c46
005a6c44  XOR AL,AL
005a6c46  MOV ESP,EBP
005a6c48  POP EBP
005a6c49  RET 0x4
