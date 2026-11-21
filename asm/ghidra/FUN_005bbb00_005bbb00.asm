; FUN_005bbb00  005bbb00
005bbb00  PUSH EBP
005bbb01  MOV EBP,ESP
005bbb03  SUB ESP,0x14c
005bbb09  XOR EAX,EAX
005bbb0b  MOV byte ptr [EBP + -0x1],AL
005bbb0e  MOV CL,byte ptr [EBP + -0x4]
005bbb11  MOV byte ptr [EBP + -0x2],CL
005bbb14  MOV EDX,dword ptr [EBP + 0xc]
005bbb17  MOV dword ptr [EBP + -0xc],EDX
005bbb1a  MOV EAX,dword ptr [EBP + 0x8]
005bbb1d  MOV dword ptr [EBP + -0x14],EAX
005bbb20  MOV CL,byte ptr [EBP + -0x1]
005bbb23  MOV byte ptr [EBP + 0xfffffeb6],CL
005bbb29  MOV DL,byte ptr [EBP + -0x3]
005bbb2c  MOV byte ptr [EBP + 0xfffffeb7],DL
005bbb32  MOV EAX,dword ptr [EBP + 0x10]
005bbb35  MOV dword ptr [EBP + 0xfffffeb8],EAX
005bbb3b  MOV ECX,dword ptr [EBP + -0xc]
005bbb3e  SUB ECX,dword ptr [EBP + -0x14]
005bbb41  SAR ECX,0x4
005bbb44  SHL ECX,0x4
005bbb47  ADD ECX,dword ptr [EBP + 0xfffffeb8]
005bbb4d  MOV dword ptr [EBP + -0x18],ECX
005bbb50  XOR EDX,EDX
005bbb52  MOV byte ptr [EBP + -0x19],DL
005bbb55  XOR EAX,EAX
005bbb57  MOV byte ptr [EBP + -0x1a],AL
005bbb5a  MOV CL,byte ptr [EBP + -0x19]
005bbb5d  MOV byte ptr [EBP + 0xfffffebe],CL
005bbb63  MOV DL,byte ptr [EBP + -0x1a]
005bbb66  MOV byte ptr [EBP + 0xfffffebf],DL
005bbb6c  MOV EAX,dword ptr [EBP + 0xfffffeb8]
005bbb72  MOV dword ptr [EBP + 0xfffffec0],EAX
005bbb78  MOV ECX,dword ptr [EBP + -0x14]
005bbb7b  MOV dword ptr [EBP + 0xfffffec4],ECX
005bbb81  JMP 0x005bbba1
005bbb83  MOV EDX,dword ptr [EBP + 0xfffffec0]
005bbb89  ADD EDX,0x10
005bbb8c  MOV dword ptr [EBP + 0xfffffec0],EDX
005bbb92  MOV EAX,dword ptr [EBP + 0xfffffec4]
005bbb98  ADD EAX,0x10
005bbb9b  MOV dword ptr [EBP + 0xfffffec4],EAX
005bbba1  MOV ECX,dword ptr [EBP + 0xfffffec4]
005bbba7  CMP ECX,dword ptr [EBP + -0xc]
005bbbaa  JZ 0x005bbbc0
005bbbac  MOV EDX,dword ptr [EBP + 0xfffffec4]
005bbbb2  PUSH EDX
005bbbb3  MOV ECX,dword ptr [EBP + 0xfffffec0]
005bbbb9  CALL 0x005bc040
005bbbbe  JMP 0x005bbb83
005bbbc0  MOV EAX,dword ptr [EBP + -0x18]
005bbbc3  MOV ESP,EBP
005bbbc5  POP EBP
005bbbc6  RET
