; FUN_00583dd0  00583dd0
00583dd0  PUSH EBP
00583dd1  MOV EBP,ESP
00583dd3  SUB ESP,0x18
00583dd6  MOV dword ptr [EBP + -0x18],ECX
00583dd9  PUSH 0x8
00583ddb  MOV ECX,dword ptr [EBP + 0x8]
00583dde  CALL 0x0063aae0
00583de3  MOV dword ptr [EBP + -0x4],EAX
00583de6  MOV EAX,dword ptr [EBP + 0xc]
00583de9  MOV ECX,dword ptr [EAX]
00583deb  MOV EDX,dword ptr [EBP + -0x4]
00583dee  ADD ECX,dword ptr [EDX]
00583df0  MOV EAX,dword ptr [EBP + 0xc]
00583df3  MOV dword ptr [EAX],ECX
00583df5  MOV ECX,dword ptr [EBP + 0xc]
00583df8  MOV EDX,dword ptr [ECX + 0x4]
00583dfb  MOV EAX,dword ptr [EBP + -0x4]
00583dfe  ADD EDX,dword ptr [EAX + 0x4]
00583e01  MOV ECX,dword ptr [EBP + 0xc]
00583e04  MOV dword ptr [ECX + 0x4],EDX
00583e07  MOV EDX,dword ptr [EBP + 0x10]
00583e0a  MOV EAX,dword ptr [EDX]
00583e0c  MOV ECX,dword ptr [EBP + -0x4]
00583e0f  ADD EAX,dword ptr [ECX]
00583e11  MOV EDX,dword ptr [EBP + 0x10]
00583e14  MOV dword ptr [EDX],EAX
00583e16  MOV EAX,dword ptr [EBP + 0x10]
00583e19  MOV ECX,dword ptr [EAX + 0x4]
00583e1c  MOV EDX,dword ptr [EBP + -0x4]
00583e1f  ADD ECX,dword ptr [EDX + 0x4]
00583e22  MOV EAX,dword ptr [EBP + 0x10]
00583e25  MOV dword ptr [EAX + 0x4],ECX
00583e28  PUSH -0x1
00583e2a  MOV ECX,dword ptr [0x007947e0]
00583e30  MOV EDX,dword ptr [ECX]
00583e32  MOV ECX,dword ptr [0x007947e0]
00583e38  MOV EAX,dword ptr [EDX + 0x33c]
00583e3e  CALL EAX
00583e40  MOVZX ECX,AL
00583e43  TEST ECX,ECX
00583e45  JZ 0x00583ec5
00583e47  MOV ECX,dword ptr [0x0162ee84]
00583e4d  CALL 0x005f3bf0
00583e52  CMP EAX,0x8
00583e55  JNZ 0x00583ec5
00583e57  LEA EDX,[EBP + -0xc]
00583e5a  PUSH EDX
00583e5b  LEA EAX,[EBP + -0x14]
00583e5e  PUSH EAX
00583e5f  MOV ECX,dword ptr [EBP + 0x8]
00583e62  PUSH ECX
00583e63  MOV ECX,dword ptr [0x007947e0]
00583e69  CALL 0x005e0c40
00583e6e  MOV EDX,dword ptr [EBP + -0x14]
00583e71  ADD EDX,dword ptr [EBP + -0xc]
00583e74  MOV EAX,dword ptr [EBP + 0xc]
00583e77  ADD EDX,dword ptr [EAX]
00583e79  MOV ECX,dword ptr [EBP + 0xc]
00583e7c  MOV dword ptr [ECX],EDX
00583e7e  MOV EDX,dword ptr [EBP + 0xc]
00583e81  MOV EAX,dword ptr [EDX + 0x4]
00583e84  ADD EAX,dword ptr [EBP + -0x10]
00583e87  MOV ECX,dword ptr [EBP + 0xc]
00583e8a  MOV dword ptr [ECX + 0x4],EAX
00583e8d  MOV EDX,dword ptr [EBP + 0x10]
00583e90  MOV EAX,dword ptr [EDX]
00583e92  ADD EAX,dword ptr [EBP + -0x14]
00583e95  MOV ECX,dword ptr [EBP + 0x10]
00583e98  MOV dword ptr [ECX],EAX
00583e9a  MOV EDX,dword ptr [EBP + 0x10]
00583e9d  MOV EAX,dword ptr [EDX + 0x4]
00583ea0  ADD EAX,dword ptr [EBP + -0x10]
00583ea3  MOV ECX,dword ptr [EBP + 0x10]
00583ea6  MOV dword ptr [ECX + 0x4],EAX
00583ea9  MOV EDX,dword ptr [EBP + 0x14]
00583eac  MOV EAX,dword ptr [EDX]
00583eae  ADD EAX,dword ptr [EBP + -0xc]
00583eb1  MOV ECX,dword ptr [EBP + 0x14]
00583eb4  MOV dword ptr [ECX],EAX
00583eb6  MOV EDX,dword ptr [EBP + 0x14]
00583eb9  MOV EAX,dword ptr [EDX + 0x4]
00583ebc  ADD EAX,dword ptr [EBP + -0x8]
00583ebf  MOV ECX,dword ptr [EBP + 0x14]
00583ec2  MOV dword ptr [ECX + 0x4],EAX
00583ec5  MOV ESP,EBP
00583ec7  POP EBP
00583ec8  RET 0x10
