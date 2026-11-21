; FUN_005f0a30  005f0a30
005f0a30  PUSH EBP
005f0a31  MOV EBP,ESP
005f0a33  SUB ESP,0x10
005f0a36  MOV dword ptr [EBP + -0xc],ECX
005f0a39  MOV dword ptr [EBP + -0x4],0xa
005f0a40  MOVZX EAX,byte ptr [EBP + 0x8]
005f0a44  CMP EAX,0x7f
005f0a47  JG 0x005f0a56
005f0a49  MOV AL,byte ptr [EBP + 0x8]
005f0a4c  JMP 0x005f0ada
005f0a56  MOV ECX,dword ptr [EBP + -0xc]
005f0a59  MOV EDX,dword ptr [ECX + 0x64]
005f0a5c  MOV dword ptr [EBP + -0x10],EDX
005f0a5f  CMP dword ptr [EBP + -0x10],0x1
005f0a63  JZ 0x005f0a73
005f0a65  CMP dword ptr [EBP + -0x10],0x2
005f0a69  JZ 0x005f0aab
005f0a6b  CMP dword ptr [EBP + -0x10],0x3
005f0a6f  JZ 0x005f0ad3
005f0a71  JMP 0x005f0ad8
005f0a73  MOV dword ptr [EBP + -0x8],0x0
005f0a7a  JMP 0x005f0a85
005f0a7c  MOV EAX,dword ptr [EBP + -0x8]
005f0a7f  ADD EAX,0x1
005f0a82  MOV dword ptr [EBP + -0x8],EAX
005f0a85  MOV ECX,dword ptr [EBP + -0x8]
005f0a88  CMP ECX,dword ptr [EBP + -0x4]
005f0a8b  JGE 0x005f0aa9
005f0a8d  MOVZX EDX,byte ptr [EBP + 0x8]
005f0a91  MOV EAX,dword ptr [EBP + -0x8]
005f0a94  MOVZX ECX,byte ptr [EAX + 0x75ee84]
005f0a9b  CMP EDX,ECX
005f0a9d  JNZ 0x005f0aa7
005f0a9f  MOV EAX,dword ptr [EBP + -0x8]
005f0aa2  ADD EAX,0x7f
005f0aa5  JMP 0x005f0ada
005f0aa7  JMP 0x005f0a7c
005f0aa9  JMP 0x005f0ad8
005f0aab  MOVZX EDX,byte ptr [EBP + 0x8]
005f0aaf  CMP EDX,0x80
005f0ab5  JL 0x005f0ac8
005f0ab7  MOVZX EAX,byte ptr [EBP + 0x8]
005f0abb  CMP EAX,0xa0
005f0ac0  JG 0x005f0ac8
005f0ac2  XOR AL,AL
005f0ac4  JMP 0x005f0ada
005f0ac8  MOVZX EAX,byte ptr [EBP + 0x8]
005f0acc  SUB EAX,0x21
005f0acf  JMP 0x005f0ada
005f0ad3  MOV AL,byte ptr [EBP + 0x8]
005f0ad6  JMP 0x005f0ada
005f0ad8  XOR AL,AL
005f0ada  MOV ESP,EBP
005f0adc  POP EBP
005f0add  RET 0x4
