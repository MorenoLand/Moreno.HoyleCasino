; FUN_00673de0  00673de0
00673de0  PUSH EBP
00673de1  MOV EBP,ESP
00673de3  SUB ESP,0x40
00673de6  MOV dword ptr [EBP + -0x40],ECX
00673de9  MOV EAX,dword ptr [EBP + -0x40]
00673dec  MOV ECX,dword ptr [EAX + 0x1c]
00673def  MOV dword ptr [EBP + -0x30],ECX
00673df2  MOV EDX,dword ptr [EBP + -0x40]
00673df5  MOV EAX,dword ptr [EDX + 0x18]
00673df8  MOV dword ptr [EBP + -0x2c],EAX
00673dfb  MOV ECX,dword ptr [EBP + -0x40]
00673dfe  MOV EDX,dword ptr [ECX + 0x14]
00673e01  MOV dword ptr [EBP + -0x28],EDX
00673e04  MOV EAX,dword ptr [EBP + -0x40]
00673e07  MOV ECX,dword ptr [EAX + 0x10]
00673e0a  MOV dword ptr [EBP + -0x24],ECX
00673e0d  MOV EDX,dword ptr [EBP + -0x24]
00673e10  MOV dword ptr [EBP + -0x20],EDX
00673e13  MOV EAX,dword ptr [EBP + -0x28]
00673e16  MOV dword ptr [EBP + -0x1c],EAX
00673e19  MOV ECX,dword ptr [EBP + -0x2c]
00673e1c  MOV dword ptr [EBP + -0x18],ECX
00673e1f  MOV EDX,dword ptr [EBP + -0x30]
00673e22  MOV dword ptr [EBP + -0x14],EDX
00673e25  MOV EAX,dword ptr [EBP + 0x8]
00673e28  PUSH EAX
00673e29  LEA ECX,[EBP + -0x20]
00673e2c  PUSH ECX
00673e2d  LEA EDX,[EBP + -0x20]
00673e30  PUSH EDX
00673e31  CALL 0x005ec3a0
00673e36  ADD ESP,0xc
00673e39  MOV EAX,dword ptr [EBP + -0x40]
00673e3c  CMP dword ptr [EAX + 0x48],0x0
00673e40  JZ 0x00673f2f
00673e46  MOV ECX,dword ptr [EBP + -0x40]
00673e49  CMP dword ptr [ECX + 0x4],0x0
00673e4d  JZ 0x00673f2f
00673e53  MOV ECX,dword ptr [EBP + -0x40]
00673e56  CALL 0x005f54a0
00673e5b  MOVZX EDX,AL
00673e5e  TEST EDX,EDX
00673e60  JZ 0x00673f2f
00673e66  MOV EAX,dword ptr [EBP + -0x40]
00673e69  MOV ECX,dword ptr [EBP + -0x20]
00673e6c  SUB ECX,dword ptr [EAX + 0x10]
00673e6f  MOV dword ptr [EBP + -0x10],ECX
00673e72  MOV EDX,dword ptr [EBP + -0x40]
00673e75  MOV EAX,dword ptr [EBP + -0x1c]
00673e78  SUB EAX,dword ptr [EDX + 0x14]
00673e7b  MOV dword ptr [EBP + -0xc],EAX
00673e7e  MOV ECX,dword ptr [EBP + -0x18]
00673e81  SUB ECX,dword ptr [EBP + -0x20]
00673e84  ADD ECX,dword ptr [EBP + -0x10]
00673e87  MOV dword ptr [EBP + -0x8],ECX
00673e8a  MOV EDX,dword ptr [EBP + -0x14]
00673e8d  SUB EDX,dword ptr [EBP + -0x1c]
00673e90  ADD EDX,dword ptr [EBP + -0xc]
00673e93  MOV dword ptr [EBP + -0x4],EDX
00673e96  MOV EAX,dword ptr [EBP + -0x40]
00673e99  MOV ECX,dword ptr [EAX + 0x4]
00673e9c  CALL 0x005f84f0
00673ea1  MOV dword ptr [EBP + -0x38],EAX
00673ea4  MOV ECX,dword ptr [EBP + -0x40]
00673ea7  MOV ECX,dword ptr [ECX + 0x4]
00673eaa  CALL 0x005f84d0
00673eaf  MOV dword ptr [EBP + -0x34],EAX
00673eb2  MOV EDX,dword ptr [EBP + -0x20]
00673eb5  ADD EDX,dword ptr [EBP + -0x34]
00673eb8  MOV dword ptr [EBP + -0x20],EDX
00673ebb  MOV EAX,dword ptr [EBP + -0x1c]
00673ebe  ADD EAX,dword ptr [EBP + -0x38]
00673ec1  MOV dword ptr [EBP + -0x1c],EAX
00673ec4  MOV ECX,dword ptr [EBP + -0x18]
00673ec7  ADD ECX,dword ptr [EBP + -0x34]
00673eca  MOV dword ptr [EBP + -0x18],ECX
00673ecd  MOV EDX,dword ptr [EBP + -0x14]
00673ed0  ADD EDX,dword ptr [EBP + -0x38]
00673ed3  MOV dword ptr [EBP + -0x14],EDX
00673ed6  MOV EAX,dword ptr [EBP + -0x40]
00673ed9  MOV ECX,dword ptr [EAX + 0x4]
00673edc  MOV EDX,dword ptr [ECX + 0x1a8]
00673ee2  MOV dword ptr [EBP + -0x3c],EDX
00673ee5  SUB ESP,0x10
00673ee8  MOV EAX,ESP
00673eea  MOV ECX,dword ptr [EBP + -0x10]
00673eed  MOV dword ptr [EAX],ECX
00673eef  MOV EDX,dword ptr [EBP + -0xc]
00673ef2  MOV dword ptr [EAX + 0x4],EDX
00673ef5  MOV ECX,dword ptr [EBP + -0x8]
00673ef8  MOV dword ptr [EAX + 0x8],ECX
00673efb  MOV EDX,dword ptr [EBP + -0x4]
00673efe  MOV dword ptr [EAX + 0xc],EDX
00673f01  SUB ESP,0x10
00673f04  MOV EAX,ESP
00673f06  MOV ECX,dword ptr [EBP + -0x20]
00673f09  MOV dword ptr [EAX],ECX
00673f0b  MOV EDX,dword ptr [EBP + -0x1c]
00673f0e  MOV dword ptr [EAX + 0x4],EDX
00673f11  MOV ECX,dword ptr [EBP + -0x18]
00673f14  MOV dword ptr [EAX + 0x8],ECX
00673f17  MOV EDX,dword ptr [EBP + -0x14]
00673f1a  MOV dword ptr [EAX + 0xc],EDX
00673f1d  MOV EAX,dword ptr [EBP + -0x3c]
00673f20  MOV ECX,dword ptr [EAX + 0x50]
00673f23  PUSH ECX
00673f24  MOV EDX,dword ptr [EBP + -0x40]
00673f27  MOV ECX,dword ptr [EDX + 0x48]
00673f2a  CALL 0x0062e3c0
00673f2f  MOV ESP,EBP
00673f31  POP EBP
00673f32  RET 0x4
