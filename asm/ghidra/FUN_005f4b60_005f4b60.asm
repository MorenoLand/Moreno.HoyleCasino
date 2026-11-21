; FUN_005f4b60  005f4b60
005f4b60  PUSH EBP
005f4b61  MOV EBP,ESP
005f4b63  SUB ESP,0x8
005f4b66  MOV dword ptr [EBP + -0x4],ECX
005f4b69  MOV ECX,dword ptr [EBP + -0x4]
005f4b6c  CALL 0x005f54c0
005f4b71  MOVZX EAX,AL
005f4b74  TEST EAX,EAX
005f4b76  JZ 0x005f4b7f
005f4b78  XOR AL,AL
005f4b7a  JMP 0x005f4ced
005f4b7f  MOV ECX,dword ptr [EBP + 0x8]
005f4b82  MOV EDX,dword ptr [ECX + 0x18]
005f4b85  MOV dword ptr [EBP + -0x8],EDX
005f4b88  CMP dword ptr [EBP + -0x8],0x1
005f4b8c  JZ 0x005f4ba7
005f4b8e  CMP dword ptr [EBP + -0x8],0x2
005f4b92  JZ 0x005f4c33
005f4b98  CMP dword ptr [EBP + -0x8],0x4
005f4b9c  JZ 0x005f4cc9
005f4ba2  JMP 0x005f4ceb
005f4ba7  MOV EAX,dword ptr [EBP + 0x8]
005f4baa  MOVZX ECX,byte ptr [EAX + 0x4]
005f4bae  TEST ECX,ECX
005f4bb0  JZ 0x005f4bb9
005f4bb2  XOR AL,AL
005f4bb4  JMP 0x005f4ced
005f4bb9  MOV EDX,dword ptr [EBP + 0x8]
005f4bbc  PUSH EDX
005f4bbd  MOV EAX,dword ptr [EBP + -0x4]
005f4bc0  MOV EDX,dword ptr [EAX]
005f4bc2  MOV ECX,dword ptr [EBP + -0x4]
005f4bc5  MOV EAX,dword ptr [EDX + 0x84]
005f4bcb  CALL EAX
005f4bcd  MOVZX ECX,AL
005f4bd0  TEST ECX,ECX
005f4bd2  JZ 0x005f4c2c
005f4bd4  MOV EDX,dword ptr [EBP + -0x4]
005f4bd7  MOVZX EAX,byte ptr [EDX + 0x8]
005f4bdb  TEST EAX,EAX
005f4bdd  JNZ 0x005f4c00
005f4bdf  MOV ECX,dword ptr [EBP + 0x8]
005f4be2  MOV EDX,dword ptr [ECX + 0x1c]
005f4be5  AND EDX,0x8
005f4be8  JZ 0x005f4c00
005f4bea  MOV EAX,dword ptr [EBP + 0x8]
005f4bed  PUSH EAX
005f4bee  MOV ECX,dword ptr [EBP + -0x4]
005f4bf1  MOV EDX,dword ptr [ECX]
005f4bf3  MOV ECX,dword ptr [EBP + -0x4]
005f4bf6  MOV EAX,dword ptr [EDX + 0x28]
005f4bf9  CALL EAX
005f4bfb  JMP 0x005f4ced
005f4c00  MOV ECX,dword ptr [EBP + -0x4]
005f4c03  MOVZX EDX,byte ptr [ECX + 0x9]
005f4c07  TEST EDX,EDX
005f4c09  JNZ 0x005f4c2c
005f4c0b  MOV EAX,dword ptr [EBP + 0x8]
005f4c0e  MOV ECX,dword ptr [EAX + 0x1c]
005f4c11  AND ECX,0x10
005f4c14  JZ 0x005f4c2c
005f4c16  MOV EDX,dword ptr [EBP + 0x8]
005f4c19  PUSH EDX
005f4c1a  MOV EAX,dword ptr [EBP + -0x4]
005f4c1d  MOV EDX,dword ptr [EAX]
005f4c1f  MOV ECX,dword ptr [EBP + -0x4]
005f4c22  MOV EAX,dword ptr [EDX + 0x2c]
005f4c25  CALL EAX
005f4c27  JMP 0x005f4ced
005f4c2c  XOR AL,AL
005f4c2e  JMP 0x005f4ced
005f4c33  MOV ECX,dword ptr [EBP + 0x8]
005f4c36  MOVZX EDX,byte ptr [ECX + 0x4]
005f4c3a  TEST EDX,EDX
005f4c3c  JNZ 0x005f4c6f
005f4c3e  MOV EAX,dword ptr [EBP + 0x8]
005f4c41  PUSH EAX
005f4c42  MOV ECX,dword ptr [EBP + -0x4]
005f4c45  MOV EDX,dword ptr [ECX]
005f4c47  MOV ECX,dword ptr [EBP + -0x4]
005f4c4a  MOV EAX,dword ptr [EDX + 0x84]
005f4c50  CALL EAX
005f4c52  MOVZX ECX,AL
005f4c55  TEST ECX,ECX
005f4c57  JNZ 0x005f4c73
005f4c59  MOV EDX,dword ptr [EBP + -0x4]
005f4c5c  MOVZX EAX,byte ptr [EDX + 0x8]
005f4c60  TEST EAX,EAX
005f4c62  JNZ 0x005f4c73
005f4c64  MOV ECX,dword ptr [EBP + -0x4]
005f4c67  MOVZX EDX,byte ptr [ECX + 0x9]
005f4c6b  TEST EDX,EDX
005f4c6d  JNZ 0x005f4c73
005f4c6f  XOR AL,AL
005f4c71  JMP 0x005f4ced
005f4c73  MOV EAX,dword ptr [EBP + -0x4]
005f4c76  MOVZX ECX,byte ptr [EAX + 0x8]
005f4c7a  TEST ECX,ECX
005f4c7c  JZ 0x005f4c9c
005f4c7e  MOV EDX,dword ptr [EBP + 0x8]
005f4c81  MOV EAX,dword ptr [EDX + 0x1c]
005f4c84  AND EAX,0x8
005f4c87  JZ 0x005f4c9c
005f4c89  MOV ECX,dword ptr [EBP + 0x8]
005f4c8c  PUSH ECX
005f4c8d  MOV EDX,dword ptr [EBP + -0x4]
005f4c90  MOV EAX,dword ptr [EDX]
005f4c92  MOV ECX,dword ptr [EBP + -0x4]
005f4c95  MOV EDX,dword ptr [EAX + 0x30]
005f4c98  CALL EDX
005f4c9a  JMP 0x005f4ced
005f4c9c  MOV EAX,dword ptr [EBP + -0x4]
005f4c9f  MOVZX ECX,byte ptr [EAX + 0x9]
005f4ca3  TEST ECX,ECX
005f4ca5  JZ 0x005f4cc5
005f4ca7  MOV EDX,dword ptr [EBP + 0x8]
005f4caa  MOV EAX,dword ptr [EDX + 0x1c]
005f4cad  AND EAX,0x10
005f4cb0  JZ 0x005f4cc5
005f4cb2  MOV ECX,dword ptr [EBP + 0x8]
005f4cb5  PUSH ECX
005f4cb6  MOV EDX,dword ptr [EBP + -0x4]
005f4cb9  MOV EAX,dword ptr [EDX]
005f4cbb  MOV ECX,dword ptr [EBP + -0x4]
005f4cbe  MOV EDX,dword ptr [EAX + 0x34]
005f4cc1  CALL EDX
005f4cc3  JMP 0x005f4ced
005f4cc5  XOR AL,AL
005f4cc7  JMP 0x005f4ced
005f4cc9  MOV EAX,dword ptr [EBP + 0x8]
005f4ccc  MOVZX ECX,byte ptr [EAX + 0x4]
005f4cd0  TEST ECX,ECX
005f4cd2  JZ 0x005f4cd8
005f4cd4  XOR AL,AL
005f4cd6  JMP 0x005f4ced
005f4cd8  MOV EDX,dword ptr [EBP + 0x8]
005f4cdb  PUSH EDX
005f4cdc  MOV EAX,dword ptr [EBP + -0x4]
005f4cdf  MOV EDX,dword ptr [EAX]
005f4ce1  MOV ECX,dword ptr [EBP + -0x4]
005f4ce4  MOV EAX,dword ptr [EDX + 0x38]
005f4ce7  CALL EAX
005f4ce9  JMP 0x005f4ced
005f4ceb  MOV AL,0x1
005f4ced  MOV ESP,EBP
005f4cef  POP EBP
005f4cf0  RET 0x4
