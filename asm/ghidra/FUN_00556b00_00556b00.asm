; FUN_00556b00  00556b00
00556b00  PUSH EBP
00556b01  MOV EBP,ESP
00556b03  SUB ESP,0x20
00556b06  MOV dword ptr [EBP + -0x1c],ECX
00556b09  PUSH 0x11
00556b0b  MOV ECX,dword ptr [EBP + 0x8]
00556b0e  CALL 0x0063aae0
00556b13  MOV dword ptr [EBP + -0x4],EAX
00556b16  MOV ECX,dword ptr [0x0162ee84]
00556b1c  CALL 0x005f3bf0
00556b21  CMP EAX,0x11
00556b24  JZ 0x00556b3f
00556b26  MOV ECX,dword ptr [0x0162ee84]
00556b2c  CALL 0x005f3bf0
00556b31  CMP EAX,0x12
00556b34  JZ 0x00556b3f
00556b36  MOV dword ptr [EBP + -0x20],0x0
00556b3d  JMP 0x00556b46
00556b3f  MOV dword ptr [EBP + -0x20],0x1
00556b46  MOV AL,byte ptr [EBP + -0x20]
00556b49  MOV byte ptr [EBP + -0xd],AL
00556b4c  MOVZX ECX,byte ptr [EBP + -0xd]
00556b50  TEST ECX,ECX
00556b52  JNZ 0x00556b96
00556b54  MOV EDX,dword ptr [EBP + 0xc]
00556b57  MOV EAX,dword ptr [EDX]
00556b59  MOV ECX,dword ptr [EBP + -0x4]
00556b5c  ADD EAX,dword ptr [ECX]
00556b5e  MOV EDX,dword ptr [EBP + 0xc]
00556b61  MOV dword ptr [EDX],EAX
00556b63  MOV EAX,dword ptr [EBP + 0xc]
00556b66  MOV ECX,dword ptr [EAX + 0x4]
00556b69  MOV EDX,dword ptr [EBP + -0x4]
00556b6c  ADD ECX,dword ptr [EDX + 0x4]
00556b6f  MOV EAX,dword ptr [EBP + 0xc]
00556b72  MOV dword ptr [EAX + 0x4],ECX
00556b75  MOV ECX,dword ptr [EBP + 0x10]
00556b78  MOV EDX,dword ptr [ECX]
00556b7a  MOV EAX,dword ptr [EBP + -0x4]
00556b7d  ADD EDX,dword ptr [EAX]
00556b7f  MOV ECX,dword ptr [EBP + 0x10]
00556b82  MOV dword ptr [ECX],EDX
00556b84  MOV EDX,dword ptr [EBP + 0x10]
00556b87  MOV EAX,dword ptr [EDX + 0x4]
00556b8a  MOV ECX,dword ptr [EBP + -0x4]
00556b8d  ADD EAX,dword ptr [ECX + 0x4]
00556b90  MOV EDX,dword ptr [EBP + 0x10]
00556b93  MOV dword ptr [EDX + 0x4],EAX
00556b96  PUSH -0x1
00556b98  MOV EAX,[0x007947e0]
00556b9d  MOV EDX,dword ptr [EAX]
00556b9f  MOV ECX,dword ptr [0x007947e0]
00556ba5  MOV EAX,dword ptr [EDX + 0x33c]
00556bab  CALL EAX
00556bad  MOVZX ECX,AL
00556bb0  TEST ECX,ECX
00556bb2  JZ 0x00556c7c
00556bb8  MOV ECX,dword ptr [0x0162ee84]
00556bbe  CALL 0x005f3bf0
00556bc3  CMP EAX,0x11
00556bc6  JNZ 0x00556c7c
00556bcc  MOV EDX,dword ptr [EBP + 0xc]
00556bcf  MOV EAX,dword ptr [EDX]
00556bd1  MOV ECX,dword ptr [EBP + -0x4]
00556bd4  ADD EAX,dword ptr [ECX]
00556bd6  MOV EDX,dword ptr [EBP + 0xc]
00556bd9  MOV dword ptr [EDX],EAX
00556bdb  MOV EAX,dword ptr [EBP + 0xc]
00556bde  MOV ECX,dword ptr [EAX + 0x4]
00556be1  MOV EDX,dword ptr [EBP + -0x4]
00556be4  ADD ECX,dword ptr [EDX + 0x4]
00556be7  MOV EAX,dword ptr [EBP + 0xc]
00556bea  MOV dword ptr [EAX + 0x4],ECX
00556bed  MOV ECX,dword ptr [EBP + 0x10]
00556bf0  MOV EDX,dword ptr [ECX]
00556bf2  MOV EAX,dword ptr [EBP + -0x4]
00556bf5  ADD EDX,dword ptr [EAX]
00556bf7  MOV ECX,dword ptr [EBP + 0x10]
00556bfa  MOV dword ptr [ECX],EDX
00556bfc  MOV EDX,dword ptr [EBP + 0x10]
00556bff  MOV EAX,dword ptr [EDX + 0x4]
00556c02  MOV ECX,dword ptr [EBP + -0x4]
00556c05  ADD EAX,dword ptr [ECX + 0x4]
00556c08  MOV EDX,dword ptr [EBP + 0x10]
00556c0b  MOV dword ptr [EDX + 0x4],EAX
00556c0e  LEA EAX,[EBP + -0xc]
00556c11  PUSH EAX
00556c12  LEA ECX,[EBP + -0x18]
00556c15  PUSH ECX
00556c16  MOV EDX,dword ptr [EBP + 0x8]
00556c19  PUSH EDX
00556c1a  MOV ECX,dword ptr [0x007947e0]
00556c20  CALL 0x005e0c40
00556c25  MOV EAX,dword ptr [EBP + -0x18]
00556c28  ADD EAX,dword ptr [EBP + -0xc]
00556c2b  MOV ECX,dword ptr [EBP + 0xc]
00556c2e  ADD EAX,dword ptr [ECX]
00556c30  MOV EDX,dword ptr [EBP + 0xc]
00556c33  MOV dword ptr [EDX],EAX
00556c35  MOV EAX,dword ptr [EBP + 0xc]
00556c38  MOV ECX,dword ptr [EAX + 0x4]
00556c3b  ADD ECX,dword ptr [EBP + -0x14]
00556c3e  MOV EDX,dword ptr [EBP + 0xc]
00556c41  MOV dword ptr [EDX + 0x4],ECX
00556c44  MOV EAX,dword ptr [EBP + 0x10]
00556c47  MOV ECX,dword ptr [EAX]
00556c49  ADD ECX,dword ptr [EBP + -0x18]
00556c4c  MOV EDX,dword ptr [EBP + 0x10]
00556c4f  MOV dword ptr [EDX],ECX
00556c51  MOV EAX,dword ptr [EBP + 0x10]
00556c54  MOV ECX,dword ptr [EAX + 0x4]
00556c57  ADD ECX,dword ptr [EBP + -0x14]
00556c5a  MOV EDX,dword ptr [EBP + 0x10]
00556c5d  MOV dword ptr [EDX + 0x4],ECX
00556c60  MOV EAX,dword ptr [EBP + 0x14]
00556c63  MOV ECX,dword ptr [EAX]
00556c65  ADD ECX,dword ptr [EBP + -0xc]
00556c68  MOV EDX,dword ptr [EBP + 0x14]
00556c6b  MOV dword ptr [EDX],ECX
00556c6d  MOV EAX,dword ptr [EBP + 0x14]
00556c70  MOV ECX,dword ptr [EAX + 0x4]
00556c73  ADD ECX,dword ptr [EBP + -0x8]
00556c76  MOV EDX,dword ptr [EBP + 0x14]
00556c79  MOV dword ptr [EDX + 0x4],ECX
00556c7c  MOV ESP,EBP
00556c7e  POP EBP
00556c7f  RET 0x10
