; FUN_005b2b90  005b2b90
005b2b90  PUSH EBP
005b2b91  MOV EBP,ESP
005b2b93  SUB ESP,0xc
005b2b96  MOV dword ptr [EBP + -0xc],ECX
005b2b99  MOV EAX,dword ptr [EBP + 0x8]
005b2b9c  MOV dword ptr [EBP + -0x8],EAX
005b2b9f  PUSH -0x1
005b2ba1  MOV ECX,dword ptr [0x007947e0]
005b2ba7  CALL 0x005de600
005b2bac  MOV ECX,EAX
005b2bae  CALL 0x0063aae0
005b2bb3  MOV dword ptr [EBP + -0x4],EAX
005b2bb6  CMP dword ptr [EBP + 0x8],0x0
005b2bba  JZ 0x005b2bc2
005b2bbc  CMP dword ptr [EBP + -0x4],0x0
005b2bc0  JNZ 0x005b2bc9
005b2bc2  XOR AL,AL
005b2bc4  JMP 0x005b2c71
005b2bc9  MOV ECX,dword ptr [EBP + -0x4]
005b2bcc  MOV EDX,dword ptr [EBP + -0x8]
005b2bcf  MOV AL,byte ptr [EDX + 0xd]
005b2bd2  MOV byte ptr [ECX + 0xd],AL
005b2bd5  MOV ECX,dword ptr [EBP + -0x4]
005b2bd8  MOV EDX,dword ptr [EBP + -0x8]
005b2bdb  MOV AL,byte ptr [EDX + 0x9]
005b2bde  MOV byte ptr [ECX + 0x9],AL
005b2be1  MOV ECX,dword ptr [EBP + -0x4]
005b2be4  MOV EDX,dword ptr [EBP + -0x8]
005b2be7  MOV AL,byte ptr [EDX + 0xc]
005b2bea  MOV byte ptr [ECX + 0xc],AL
005b2bed  MOV ECX,dword ptr [EBP + -0x4]
005b2bf0  MOV EDX,dword ptr [EBP + -0x8]
005b2bf3  MOV AL,byte ptr [EDX + 0x2]
005b2bf6  MOV byte ptr [ECX + 0x2],AL
005b2bf9  MOV ECX,dword ptr [EBP + -0x4]
005b2bfc  MOV EDX,dword ptr [EBP + -0x8]
005b2bff  MOV AL,byte ptr [EDX + 0xb]
005b2c02  MOV byte ptr [ECX + 0xb],AL
005b2c05  MOV ECX,dword ptr [EBP + -0x4]
005b2c08  MOV EDX,dword ptr [EBP + -0x8]
005b2c0b  MOV AL,byte ptr [EDX + 0x3]
005b2c0e  MOV byte ptr [ECX + 0x3],AL
005b2c11  MOV ECX,dword ptr [EBP + -0x4]
005b2c14  MOV EDX,dword ptr [EBP + -0x8]
005b2c17  MOV AL,byte ptr [EDX + 0xa]
005b2c1a  MOV byte ptr [ECX + 0xa],AL
005b2c1d  MOV ECX,dword ptr [EBP + -0x4]
005b2c20  MOV EDX,dword ptr [EBP + -0x8]
005b2c23  MOV AL,byte ptr [EDX]
005b2c25  MOV byte ptr [ECX],AL
005b2c27  MOV ECX,dword ptr [EBP + -0x4]
005b2c2a  MOV EDX,dword ptr [EBP + -0x8]
005b2c2d  MOV AL,byte ptr [EDX + 0x1]
005b2c30  MOV byte ptr [ECX + 0x1],AL
005b2c33  MOV ECX,dword ptr [EBP + -0x4]
005b2c36  MOV EDX,dword ptr [EBP + -0x8]
005b2c39  MOV AL,byte ptr [EDX + 0x8]
005b2c3c  MOV byte ptr [ECX + 0x8],AL
005b2c3f  MOV ECX,dword ptr [EBP + -0x4]
005b2c42  MOV EDX,dword ptr [EBP + -0x8]
005b2c45  MOV AL,byte ptr [EDX + 0x4]
005b2c48  MOV byte ptr [ECX + 0x4],AL
005b2c4b  MOV ECX,dword ptr [EBP + -0x4]
005b2c4e  MOV EDX,dword ptr [EBP + -0x8]
005b2c51  MOV AL,byte ptr [EDX + 0x5]
005b2c54  MOV byte ptr [ECX + 0x5],AL
005b2c57  MOV ECX,dword ptr [EBP + -0x4]
005b2c5a  MOV EDX,dword ptr [EBP + -0x8]
005b2c5d  MOV AL,byte ptr [EDX + 0x6]
005b2c60  MOV byte ptr [ECX + 0x6],AL
005b2c63  MOV ECX,dword ptr [EBP + -0x4]
005b2c66  MOV EDX,dword ptr [EBP + -0x8]
005b2c69  MOV AL,byte ptr [EDX + 0x7]
005b2c6c  MOV byte ptr [ECX + 0x7],AL
005b2c6f  MOV AL,0x1
005b2c71  MOV ESP,EBP
005b2c73  POP EBP
005b2c74  RET 0x4
