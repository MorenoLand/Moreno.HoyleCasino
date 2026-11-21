; FUN_005a4960  005a4960
005a4960  PUSH EBP
005a4961  MOV EBP,ESP
005a4963  SUB ESP,0x18
005a4966  MOV dword ptr [EBP + -0x18],ECX
005a4969  MOV EAX,dword ptr [EBP + 0x8]
005a496c  PUSH EAX
005a496d  CALL 0x005dcb00
005a4972  ADD ESP,0x4
005a4975  MOV dword ptr [EBP + -0x14],EAX
005a4978  MOV ECX,dword ptr [0x00793600]
005a497e  MOV EDX,dword ptr [ECX]
005a4980  MOV ECX,dword ptr [0x00793600]
005a4986  MOV EAX,dword ptr [EDX + 0x2b0]
005a498c  CALL EAX
005a498e  MOV dword ptr [EBP + -0xc],EAX
005a4991  MOV ECX,dword ptr [0x00793600]
005a4997  CALL 0x005da7b0
005a499c  MOV byte ptr [EBP + -0xd],AL
005a499f  MOV ECX,dword ptr [EBP + -0x14]
005a49a2  CALL 0x005d5a50
005a49a7  MOV dword ptr [EBP + -0x4],EAX
005a49aa  MOV ECX,dword ptr [0x00793604]
005a49b0  MOV EDX,dword ptr [ECX + 0x5c8]
005a49b6  MOV dword ptr [EBP + -0x8],EDX
005a49b9  MOV EAX,dword ptr [EBP + -0xc]
005a49bc  CMP EAX,dword ptr [EBP + -0x4]
005a49bf  JLE 0x005a49d1
005a49c1  MOVZX ECX,byte ptr [EBP + -0xd]
005a49c5  TEST ECX,ECX
005a49c7  JZ 0x005a49d1
005a49c9  MOV EAX,dword ptr [EBP + -0x4]
005a49cc  JMP 0x005a4b19
005a49d1  CMP dword ptr [EBP + -0x8],0x1
005a49d5  JGE 0x005a49e4
005a49d7  MOV EAX,dword ptr [EBP + -0xc]
005a49da  JMP 0x005a4b19
005a49e4  CMP dword ptr [EBP + -0x8],0x1
005a49e8  JNZ 0x005a4a0d
005a49ea  MOV EDX,dword ptr [EBP + -0xc]
005a49ed  SHL EDX,0x1
005a49ef  CMP EDX,dword ptr [EBP + -0x4]
005a49f2  JLE 0x005a49fe
005a49f4  MOV EAX,dword ptr [EBP + -0x4]
005a49f7  JMP 0x005a4b19
005a49fe  MOV EAX,dword ptr [EBP + -0xc]
005a4a01  SHL EAX,0x1
005a4a03  JMP 0x005a4b19
005a4a0d  CMP dword ptr [EBP + -0x8],0x4
005a4a11  JGE 0x005a4a38
005a4a13  MOV EAX,dword ptr [EBP + -0xc]
005a4a16  IMUL EAX,EAX,0x3
005a4a19  CMP EAX,dword ptr [EBP + -0x4]
005a4a1c  JLE 0x005a4a28
005a4a1e  MOV EAX,dword ptr [EBP + -0x4]
005a4a21  JMP 0x005a4b19
005a4a28  MOV EAX,dword ptr [EBP + -0xc]
005a4a2b  IMUL EAX,EAX,0x3
005a4a2e  JMP 0x005a4b19
005a4a38  CMP dword ptr [EBP + -0x8],0x4
005a4a3c  JNZ 0x005a4a63
005a4a3e  MOV ECX,dword ptr [EBP + -0xc]
005a4a41  SHL ECX,0x2
005a4a44  CMP ECX,dword ptr [EBP + -0x4]
005a4a47  JLE 0x005a4a53
005a4a49  MOV EAX,dword ptr [EBP + -0x4]
005a4a4c  JMP 0x005a4b19
005a4a53  MOV EAX,dword ptr [EBP + -0xc]
005a4a56  SHL EAX,0x2
005a4a59  JMP 0x005a4b19
005a4a63  CMP dword ptr [EBP + -0x8],0x5
005a4a67  JNZ 0x005a4a8e
005a4a69  MOV EDX,dword ptr [EBP + -0xc]
005a4a6c  IMUL EDX,EDX,0x6
005a4a6f  CMP EDX,dword ptr [EBP + -0x4]
005a4a72  JLE 0x005a4a7e
005a4a74  MOV EAX,dword ptr [EBP + -0x4]
005a4a77  JMP 0x005a4b19
005a4a7e  MOV EAX,dword ptr [EBP + -0xc]
005a4a81  IMUL EAX,EAX,0x6
005a4a84  JMP 0x005a4b19
005a4a8e  CMP dword ptr [EBP + -0x8],0x6
005a4a92  JNZ 0x005a4ab0
005a4a94  MOV EAX,dword ptr [EBP + -0xc]
005a4a97  IMUL EAX,EAX,0x6
005a4a9a  CMP EAX,dword ptr [EBP + -0x4]
005a4a9d  JLE 0x005a4aa6
005a4a9f  MOV EAX,dword ptr [EBP + -0x4]
005a4aa2  JMP 0x005a4b19
005a4aa6  MOV EAX,dword ptr [EBP + -0xc]
005a4aa9  IMUL EAX,EAX,0x6
005a4aac  JMP 0x005a4b19
005a4ab0  CMP dword ptr [EBP + -0x8],0x7
005a4ab4  JNZ 0x005a4ad2
005a4ab6  MOV ECX,dword ptr [EBP + -0xc]
005a4ab9  SHL ECX,0x3
005a4abc  CMP ECX,dword ptr [EBP + -0x4]
005a4abf  JLE 0x005a4ac8
005a4ac1  MOV EAX,dword ptr [EBP + -0x4]
005a4ac4  JMP 0x005a4b19
005a4ac8  MOV EAX,dword ptr [EBP + -0xc]
005a4acb  SHL EAX,0x3
005a4ace  JMP 0x005a4b19
005a4ad2  CMP dword ptr [EBP + -0x8],0x8
005a4ad6  JNZ 0x005a4af4
005a4ad8  MOV EDX,dword ptr [EBP + -0xc]
005a4adb  IMUL EDX,EDX,0xa
005a4ade  CMP EDX,dword ptr [EBP + -0x4]
005a4ae1  JLE 0x005a4aea
005a4ae3  MOV EAX,dword ptr [EBP + -0x4]
005a4ae6  JMP 0x005a4b19
005a4aea  MOV EAX,dword ptr [EBP + -0xc]
005a4aed  IMUL EAX,EAX,0xa
005a4af0  JMP 0x005a4b19
005a4af4  CMP dword ptr [EBP + -0x8],0x9
005a4af8  JL 0x005a4b16
005a4afa  MOV EAX,dword ptr [EBP + -0xc]
005a4afd  IMUL EAX,EAX,0xc
005a4b00  CMP EAX,dword ptr [EBP + -0x4]
005a4b03  JLE 0x005a4b0c
005a4b05  MOV EAX,dword ptr [EBP + -0x4]
005a4b08  JMP 0x005a4b19
005a4b0c  MOV EAX,dword ptr [EBP + -0xc]
005a4b0f  IMUL EAX,EAX,0xc
005a4b12  JMP 0x005a4b19
005a4b16  MOV EAX,dword ptr [EBP + -0xc]
005a4b19  MOV ESP,EBP
005a4b1b  POP EBP
005a4b1c  RET 0x4
