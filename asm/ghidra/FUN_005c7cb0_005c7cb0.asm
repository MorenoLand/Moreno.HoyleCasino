; FUN_005c7cb0  005c7cb0
005c7cb0  PUSH EBP
005c7cb1  MOV EBP,ESP
005c7cb3  SUB ESP,0x44
005c7cb6  MOV dword ptr [EBP + -0x24],ECX
005c7cb9  MOV EAX,dword ptr [EBP + -0x24]
005c7cbc  ADD EAX,0x18
005c7cbf  MOV dword ptr [EBP + -0xc],EAX
005c7cc2  MOV ECX,dword ptr [EBP + -0xc]
005c7cc5  CMP dword ptr [ECX + 0x4],0x0
005c7cc9  JNZ 0x005c7cd4
005c7ccb  MOV dword ptr [EBP + -0x28],0x0
005c7cd2  JMP 0x005c7ce6
005c7cd4  MOV EDX,dword ptr [EBP + -0xc]
005c7cd7  MOV EAX,dword ptr [EBP + -0xc]
005c7cda  MOV ECX,dword ptr [EDX + 0x8]
005c7cdd  SUB ECX,dword ptr [EAX + 0x4]
005c7ce0  SAR ECX,0x2
005c7ce3  MOV dword ptr [EBP + -0x28],ECX
005c7ce6  MOV EDX,dword ptr [EBP + -0x28]
005c7ce9  MOV dword ptr [EBP + -0x4],EDX
005c7cec  MOV dword ptr [EBP + -0x8],0x0
005c7cf3  JMP 0x005c7cfe
005c7cf5  MOV EAX,dword ptr [EBP + -0x8]
005c7cf8  ADD EAX,0x1
005c7cfb  MOV dword ptr [EBP + -0x8],EAX
005c7cfe  MOV ECX,dword ptr [EBP + -0x8]
005c7d01  CMP ECX,dword ptr [EBP + -0x4]
005c7d04  JGE 0x005c7db0
005c7d0a  MOV EDX,dword ptr [EBP + -0x24]
005c7d0d  ADD EDX,0x18
005c7d10  MOV dword ptr [EBP + -0x10],EDX
005c7d13  MOV EAX,dword ptr [EBP + -0x10]
005c7d16  CMP dword ptr [EAX + 0x4],0x0
005c7d1a  JNZ 0x005c7d25
005c7d1c  MOV dword ptr [EBP + -0x2c],0x0
005c7d23  JMP 0x005c7d37
005c7d25  MOV ECX,dword ptr [EBP + -0x10]
005c7d28  MOV EDX,dword ptr [EBP + -0x10]
005c7d2b  MOV EAX,dword ptr [ECX + 0x8]
005c7d2e  SUB EAX,dword ptr [EDX + 0x4]
005c7d31  SAR EAX,0x2
005c7d34  MOV dword ptr [EBP + -0x2c],EAX
005c7d37  MOV ECX,dword ptr [EBP + -0x8]
005c7d3a  CMP ECX,dword ptr [EBP + -0x2c]
005c7d3d  JC 0x005c7d45
005c7d3f  CALL dword ptr [0x006b2274]
005c7d45  MOV EDX,dword ptr [EBP + -0x10]
005c7d48  MOV EAX,dword ptr [EDX + 0x4]
005c7d4b  MOV ECX,dword ptr [EBP + -0x8]
005c7d4e  CMP dword ptr [EAX + ECX*0x4],0x0
005c7d52  JZ 0x005c7dab
005c7d54  MOV EDX,dword ptr [EBP + -0x24]
005c7d57  ADD EDX,0x18
005c7d5a  MOV dword ptr [EBP + -0x14],EDX
005c7d5d  MOV EAX,dword ptr [EBP + -0x14]
005c7d60  CMP dword ptr [EAX + 0x4],0x0
005c7d64  JNZ 0x005c7d6f
005c7d66  MOV dword ptr [EBP + -0x30],0x0
005c7d6d  JMP 0x005c7d81
005c7d6f  MOV ECX,dword ptr [EBP + -0x14]
005c7d72  MOV EDX,dword ptr [EBP + -0x14]
005c7d75  MOV EAX,dword ptr [ECX + 0x8]
005c7d78  SUB EAX,dword ptr [EDX + 0x4]
005c7d7b  SAR EAX,0x2
005c7d7e  MOV dword ptr [EBP + -0x30],EAX
005c7d81  MOV ECX,dword ptr [EBP + -0x8]
005c7d84  CMP ECX,dword ptr [EBP + -0x30]
005c7d87  JC 0x005c7d8f
005c7d89  CALL dword ptr [0x006b2274]
005c7d8f  MOV EDX,dword ptr [EBP + -0x14]
005c7d92  MOV EAX,dword ptr [EDX + 0x4]
005c7d95  MOV ECX,dword ptr [EBP + -0x8]
005c7d98  MOV EDX,dword ptr [EAX + ECX*0x4]
005c7d9b  MOV dword ptr [EBP + -0x34],EDX
005c7d9e  MOV EAX,dword ptr [EBP + -0x34]
005c7da1  MOV EDX,dword ptr [EAX]
005c7da3  MOV ECX,dword ptr [EBP + -0x34]
005c7da6  MOV EAX,dword ptr [EDX + 0x70]
005c7da9  CALL EAX
005c7dab  JMP 0x005c7cf5
005c7db0  MOV ECX,dword ptr [EBP + -0x24]
005c7db3  ADD ECX,0x58
005c7db6  MOV dword ptr [EBP + -0x18],ECX
005c7db9  MOV EDX,dword ptr [EBP + -0x18]
005c7dbc  CMP dword ptr [EDX + 0x4],0x0
005c7dc0  JNZ 0x005c7dcb
005c7dc2  MOV dword ptr [EBP + -0x38],0x0
005c7dc9  JMP 0x005c7ddd
005c7dcb  MOV EAX,dword ptr [EBP + -0x18]
005c7dce  MOV ECX,dword ptr [EBP + -0x18]
005c7dd1  MOV EDX,dword ptr [EAX + 0x8]
005c7dd4  SUB EDX,dword ptr [ECX + 0x4]
005c7dd7  SAR EDX,0x2
005c7dda  MOV dword ptr [EBP + -0x38],EDX
005c7ddd  MOV EAX,dword ptr [EBP + -0x38]
005c7de0  MOV dword ptr [EBP + -0x4],EAX
005c7de3  MOV dword ptr [EBP + -0x8],0x0
005c7dea  JMP 0x005c7df5
005c7dec  MOV ECX,dword ptr [EBP + -0x8]
005c7def  ADD ECX,0x1
005c7df2  MOV dword ptr [EBP + -0x8],ECX
005c7df5  MOV EDX,dword ptr [EBP + -0x8]
005c7df8  CMP EDX,dword ptr [EBP + -0x4]
005c7dfb  JGE 0x005c7ea7
005c7e01  MOV EAX,dword ptr [EBP + -0x24]
005c7e04  ADD EAX,0x58
005c7e07  MOV dword ptr [EBP + -0x1c],EAX
005c7e0a  MOV ECX,dword ptr [EBP + -0x1c]
005c7e0d  CMP dword ptr [ECX + 0x4],0x0
005c7e11  JNZ 0x005c7e1c
005c7e13  MOV dword ptr [EBP + -0x3c],0x0
005c7e1a  JMP 0x005c7e2e
005c7e1c  MOV EDX,dword ptr [EBP + -0x1c]
005c7e1f  MOV EAX,dword ptr [EBP + -0x1c]
005c7e22  MOV ECX,dword ptr [EDX + 0x8]
005c7e25  SUB ECX,dword ptr [EAX + 0x4]
005c7e28  SAR ECX,0x2
005c7e2b  MOV dword ptr [EBP + -0x3c],ECX
005c7e2e  MOV EDX,dword ptr [EBP + -0x8]
005c7e31  CMP EDX,dword ptr [EBP + -0x3c]
005c7e34  JC 0x005c7e3c
005c7e36  CALL dword ptr [0x006b2274]
005c7e3c  MOV EAX,dword ptr [EBP + -0x1c]
005c7e3f  MOV ECX,dword ptr [EAX + 0x4]
005c7e42  MOV EDX,dword ptr [EBP + -0x8]
005c7e45  CMP dword ptr [ECX + EDX*0x4],0x0
005c7e49  JZ 0x005c7ea2
005c7e4b  MOV EAX,dword ptr [EBP + -0x24]
005c7e4e  ADD EAX,0x58
005c7e51  MOV dword ptr [EBP + -0x20],EAX
005c7e54  MOV ECX,dword ptr [EBP + -0x20]
005c7e57  CMP dword ptr [ECX + 0x4],0x0
005c7e5b  JNZ 0x005c7e66
005c7e5d  MOV dword ptr [EBP + -0x40],0x0
005c7e64  JMP 0x005c7e78
005c7e66  MOV EDX,dword ptr [EBP + -0x20]
005c7e69  MOV EAX,dword ptr [EBP + -0x20]
005c7e6c  MOV ECX,dword ptr [EDX + 0x8]
005c7e6f  SUB ECX,dword ptr [EAX + 0x4]
005c7e72  SAR ECX,0x2
005c7e75  MOV dword ptr [EBP + -0x40],ECX
005c7e78  MOV EDX,dword ptr [EBP + -0x8]
005c7e7b  CMP EDX,dword ptr [EBP + -0x40]
005c7e7e  JC 0x005c7e86
005c7e80  CALL dword ptr [0x006b2274]
005c7e86  MOV EAX,dword ptr [EBP + -0x20]
005c7e89  MOV ECX,dword ptr [EAX + 0x4]
005c7e8c  MOV EDX,dword ptr [EBP + -0x8]
005c7e8f  MOV EAX,dword ptr [ECX + EDX*0x4]
005c7e92  MOV dword ptr [EBP + -0x44],EAX
005c7e95  MOV ECX,dword ptr [EBP + -0x44]
005c7e98  MOV EDX,dword ptr [ECX]
005c7e9a  MOV ECX,dword ptr [EBP + -0x44]
005c7e9d  MOV EAX,dword ptr [EDX + 0x70]
005c7ea0  CALL EAX
005c7ea2  JMP 0x005c7dec
005c7ea7  PUSH 0x8
005c7ea9  MOV ECX,dword ptr [EBP + -0x24]
005c7eac  CALL 0x005c74b0
005c7eb1  MOV ESP,EBP
005c7eb3  POP EBP
005c7eb4  RET
