; FUN_005f1be0  005f1be0
005f1be0  PUSH EBP
005f1be1  MOV EBP,ESP
005f1be3  PUSH -0x1
005f1be5  PUSH 0x6a9dc6
005f1bea  MOV EAX,FS:[0x0]
005f1bf0  PUSH EAX
005f1bf1  SUB ESP,0x2c
005f1bf4  MOV EAX,[0x00781870]
005f1bf9  XOR EAX,EBP
005f1bfb  PUSH EAX
005f1bfc  LEA EAX,[EBP + -0xc]
005f1bff  MOV FS:[0x0],EAX
005f1c05  MOV dword ptr [EBP + -0x34],ECX
005f1c08  MOV ECX,dword ptr [EBP + -0x34]
005f1c0b  CALL 0x005f24a0
005f1c10  MOV EAX,dword ptr [EBP + -0x34]
005f1c13  MOV EDX,dword ptr [EAX]
005f1c15  MOV ECX,dword ptr [EBP + -0x34]
005f1c18  MOV EAX,dword ptr [EDX + 0x28]
005f1c1b  CALL EAX
005f1c1d  MOVZX ECX,AL
005f1c20  TEST ECX,ECX
005f1c22  JNZ 0x005f1c2b
005f1c24  MOV AL,0x1
005f1c26  JMP 0x005f1dde
005f1c2b  LEA EDX,[EBP + -0x18]
005f1c2e  PUSH EDX
005f1c2f  LEA EAX,[EBP + -0x24]
005f1c32  PUSH EAX
005f1c33  LEA ECX,[EBP + -0x10]
005f1c36  PUSH ECX
005f1c37  MOV EDX,dword ptr [EBP + -0x34]
005f1c3a  MOV EAX,dword ptr [EDX]
005f1c3c  MOV ECX,dword ptr [EBP + -0x34]
005f1c3f  MOV EDX,dword ptr [EAX + 0x34]
005f1c42  CALL EDX
005f1c44  CMP dword ptr [EBP + -0x18],0x0
005f1c48  JNZ 0x005f1c51
005f1c4a  XOR AL,AL
005f1c4c  JMP 0x005f1dde
005f1c51  MOV dword ptr [EBP + -0x14],0x0
005f1c58  MOV EAX,dword ptr [EBP + -0x14]
005f1c5b  IMUL EAX,EAX,0xc
005f1c5e  MOV ECX,dword ptr [EBP + -0x18]
005f1c61  CMP dword ptr [ECX + EAX*0x1],-0x1
005f1c65  JZ 0x005f1d4c
005f1c6b  PUSH 0x1f0
005f1c70  CALL 0x00686d82
005f1c75  ADD ESP,0x4
005f1c78  MOV dword ptr [EBP + -0x30],EAX
005f1c7b  MOV dword ptr [EBP + -0x4],0x0
005f1c82  CMP dword ptr [EBP + -0x30],0x0
005f1c86  JZ 0x005f1ca4
005f1c88  PUSH 0x1
005f1c8a  MOV EDX,dword ptr [EBP + -0x14]
005f1c8d  IMUL EDX,EDX,0xc
005f1c90  MOV EAX,dword ptr [EBP + -0x18]
005f1c93  MOV ECX,dword ptr [EAX + EDX*0x1]
005f1c96  PUSH ECX
005f1c97  MOV ECX,dword ptr [EBP + -0x30]
005f1c9a  CALL 0x005fc680
005f1c9f  MOV dword ptr [EBP + -0x38],EAX
005f1ca2  JMP 0x005f1cab
005f1ca4  MOV dword ptr [EBP + -0x38],0x0
005f1cab  MOV EDX,dword ptr [EBP + -0x38]
005f1cae  MOV dword ptr [EBP + -0x2c],EDX
005f1cb1  MOV dword ptr [EBP + -0x4],0xffffffff
005f1cb8  PUSH 0x0
005f1cba  PUSH -0x1
005f1cbc  PUSH -0x1
005f1cbe  PUSH -0x1
005f1cc0  PUSH -0x1
005f1cc2  PUSH 0x6b27f8
005f1cc7  PUSH 0x2712
005f1ccc  MOV EAX,dword ptr [EBP + -0x24]
005f1ccf  PUSH EAX
005f1cd0  MOV ECX,dword ptr [EBP + -0x10]
005f1cd3  PUSH ECX
005f1cd4  MOV EDX,dword ptr [EBP + -0x14]
005f1cd7  IMUL EDX,EDX,0xc
005f1cda  MOV EAX,dword ptr [EBP + -0x18]
005f1cdd  MOV ECX,dword ptr [EAX + EDX*0x1 + 0x4]
005f1ce1  PUSH ECX
005f1ce2  MOV EDX,dword ptr [EBP + -0x14]
005f1ce5  IMUL EDX,EDX,0xc
005f1ce8  MOV EAX,dword ptr [EBP + -0x18]
005f1ceb  MOV ECX,dword ptr [EAX + EDX*0x1]
005f1cee  PUSH ECX
005f1cef  MOV EDX,dword ptr [EBP + -0x2c]
005f1cf2  PUSH EDX
005f1cf3  MOV EAX,[0x015e55e8]
005f1cf8  MOV ECX,dword ptr [EAX + 0x14]
005f1cfb  CALL 0x005f9de0
005f1d00  MOV dword ptr [EBP + -0x28],EAX
005f1d03  MOV ECX,dword ptr [EBP + -0x14]
005f1d06  IMUL ECX,ECX,0xc
005f1d09  MOV EDX,dword ptr [EBP + -0x18]
005f1d0c  MOV EAX,dword ptr [EBP + -0x10]
005f1d0f  ADD EAX,dword ptr [EDX + ECX*0x1 + 0x8]
005f1d13  MOV dword ptr [EBP + -0x10],EAX
005f1d16  MOV ECX,dword ptr [EBP + -0x28]
005f1d19  PUSH ECX
005f1d1a  MOV ECX,dword ptr [EBP + -0x34]
005f1d1d  ADD ECX,0x18
005f1d20  CALL 0x0060c840
005f1d25  PUSH 0x1
005f1d27  PUSH 0x0
005f1d29  MOV EDX,dword ptr [EBP + -0x14]
005f1d2c  IMUL EDX,EDX,0xc
005f1d2f  MOV EAX,dword ptr [EBP + -0x18]
005f1d32  MOV ECX,dword ptr [EAX + EDX*0x1]
005f1d35  PUSH ECX
005f1d36  MOV ECX,dword ptr [EBP + -0x34]
005f1d39  CALL 0x005f2370
005f1d3e  MOV EDX,dword ptr [EBP + -0x14]
005f1d41  ADD EDX,0x1
005f1d44  MOV dword ptr [EBP + -0x14],EDX
005f1d47  JMP 0x005f1c58
005f1d4c  LEA EAX,[EBP + -0x20]
005f1d4f  PUSH EAX
005f1d50  LEA ECX,[EBP + -0x1c]
005f1d53  PUSH ECX
005f1d54  MOV EDX,dword ptr [EBP + -0x34]
005f1d57  MOV EAX,dword ptr [EDX]
005f1d59  MOV ECX,dword ptr [EBP + -0x34]
005f1d5c  MOV EDX,dword ptr [EAX + 0x38]
005f1d5f  CALL EDX
005f1d61  CMP dword ptr [EBP + -0x1c],0x0
005f1d65  JZ 0x005f1d8f
005f1d67  PUSH 0x0
005f1d69  PUSH 0xff
005f1d6e  PUSH 0x0
005f1d70  PUSH 0x2710
005f1d75  PUSH 0x0
005f1d77  PUSH 0x0
005f1d79  MOV EAX,dword ptr [EBP + -0x1c]
005f1d7c  PUSH EAX
005f1d7d  PUSH -0x1
005f1d7f  PUSH 0x0
005f1d81  MOV ECX,dword ptr [0x015e55e8]
005f1d87  MOV ECX,dword ptr [ECX + 0x14]
005f1d8a  CALL 0x005f9ce0
005f1d8f  CMP dword ptr [EBP + -0x20],0x0
005f1d93  JZ 0x005f1dbc
005f1d95  PUSH 0x0
005f1d97  PUSH 0xff
005f1d9c  PUSH 0x0
005f1d9e  PUSH 0x2711
005f1da3  PUSH 0x0
005f1da5  PUSH 0x0
005f1da7  MOV EDX,dword ptr [EBP + -0x20]
005f1daa  PUSH EDX
005f1dab  PUSH -0x1
005f1dad  PUSH 0x0
005f1daf  MOV EAX,[0x015e55e8]
005f1db4  MOV ECX,dword ptr [EAX + 0x14]
005f1db7  CALL 0x005f9ce0
005f1dbc  MOV ECX,dword ptr [EBP + -0x34]
005f1dbf  MOV EDX,dword ptr [ECX]
005f1dc1  MOV ECX,dword ptr [EBP + -0x34]
005f1dc4  MOV EAX,dword ptr [EDX + 0x2c]
005f1dc7  CALL EAX
005f1dc9  MOV ECX,dword ptr [0x015e55e8]
005f1dcf  MOV EDX,dword ptr [ECX]
005f1dd1  MOV ECX,dword ptr [0x015e55e8]
005f1dd7  MOV EAX,dword ptr [EDX + 0x48]
005f1dda  CALL EAX
005f1ddc  MOV AL,0x1
005f1dde  MOV ECX,dword ptr [EBP + -0xc]
005f1de1  MOV dword ptr FS:[0x0],ECX
005f1de8  POP ECX
005f1de9  MOV ESP,EBP
005f1deb  POP EBP
005f1dec  RET
