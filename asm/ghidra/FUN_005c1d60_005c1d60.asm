; FUN_005c1d60  005c1d60
005c1d60  PUSH EBP
005c1d61  MOV EBP,ESP
005c1d63  SUB ESP,0x3c
005c1d66  MOV dword ptr [EBP + -0x38],ECX
005c1d69  MOV EAX,dword ptr [EBP + -0x38]
005c1d6c  MOV EDX,dword ptr [EAX]
005c1d6e  MOV ECX,dword ptr [EBP + -0x38]
005c1d71  MOV EAX,dword ptr [EDX + 0x24]
005c1d74  CALL EAX
005c1d76  MOVZX ECX,AL
005c1d79  TEST ECX,ECX
005c1d7b  JZ 0x005c1d82
005c1d7d  JMP 0x005c1ec4
005c1d82  MOVZX EDX,byte ptr [EBP + 0x8]
005c1d86  TEST EDX,EDX
005c1d88  JNZ 0x005c1dbd
005c1d8a  MOV EAX,dword ptr [EBP + -0x38]
005c1d8d  MOV ECX,dword ptr [EAX + 0x4]
005c1d90  MOV dword ptr [EBP + -0x4],ECX
005c1d93  MOV ECX,dword ptr [EBP + -0x4]
005c1d96  CALL 0x005c9140
005c1d9b  MOV EDX,dword ptr [EBP + -0x4]
005c1d9e  MOV EAX,dword ptr [EDX + 0xe0]
005c1da4  MOV dword ptr [EBP + -0x8],EAX
005c1da7  MOV ECX,dword ptr [EBP + -0x38]
005c1daa  MOV ECX,dword ptr [ECX + 0x3c]
005c1dad  CALL 0x0060fb10
005c1db2  CMP dword ptr [EBP + -0x8],EAX
005c1db5  JL 0x005c1dbd
005c1db7  MOV byte ptr [EBP + -0x39],0x0
005c1dbb  JMP 0x005c1dc1
005c1dbd  MOV byte ptr [EBP + -0x39],0x1
005c1dc1  MOV EDX,dword ptr [EBP + -0x38]
005c1dc4  MOV EAX,dword ptr [EDX + 0x4]
005c1dc7  MOV dword ptr [EBP + -0xc],EAX
005c1dca  MOV ECX,dword ptr [EBP + -0xc]
005c1dcd  CALL 0x005c9140
005c1dd2  MOV ECX,dword ptr [EBP + -0xc]
005c1dd5  MOV EDX,dword ptr [ECX + 0xe0]
005c1ddb  MOV dword ptr [EBP + -0x10],EDX
005c1dde  MOV AL,byte ptr [EBP + -0x39]
005c1de1  PUSH EAX
005c1de2  MOV ECX,dword ptr [EBP + -0x10]
005c1de5  PUSH ECX
005c1de6  MOV EDX,dword ptr [EBP + -0x38]
005c1de9  MOV ECX,dword ptr [EDX + 0x3c]
005c1dec  CALL 0x0060fb30
005c1df1  MOVZX EAX,byte ptr [EBP + 0x8]
005c1df5  TEST EAX,EAX
005c1df7  JNZ 0x005c1e29
005c1df9  MOV ECX,dword ptr [EBP + -0x38]
005c1dfc  MOV EDX,dword ptr [ECX + 0x4]
005c1dff  MOV dword ptr [EBP + -0x18],EDX
005c1e02  MOV ECX,dword ptr [EBP + -0x18]
005c1e05  CALL 0x005c9140
005c1e0a  MOV EAX,dword ptr [EBP + -0x18]
005c1e0d  MOV ECX,dword ptr [EAX + 0x4]
005c1e10  MOV dword ptr [EBP + -0x14],ECX
005c1e13  MOV EDX,dword ptr [EBP + -0x38]
005c1e16  MOV ECX,dword ptr [EDX + 0x38]
005c1e19  CALL 0x0060fb10
005c1e1e  CMP dword ptr [EBP + -0x14],EAX
005c1e21  JL 0x005c1e29
005c1e23  MOV byte ptr [EBP + -0x3a],0x0
005c1e27  JMP 0x005c1e2d
005c1e29  MOV byte ptr [EBP + -0x3a],0x1
005c1e2d  MOV EAX,dword ptr [EBP + -0x38]
005c1e30  MOV ECX,dword ptr [EAX + 0x4]
005c1e33  MOV dword ptr [EBP + -0x20],ECX
005c1e36  MOV ECX,dword ptr [EBP + -0x20]
005c1e39  CALL 0x005c9140
005c1e3e  MOV EDX,dword ptr [EBP + -0x20]
005c1e41  MOV EAX,dword ptr [EDX + 0x4]
005c1e44  MOV dword ptr [EBP + -0x1c],EAX
005c1e47  MOV CL,byte ptr [EBP + -0x3a]
005c1e4a  PUSH ECX
005c1e4b  MOV EDX,dword ptr [EBP + -0x1c]
005c1e4e  PUSH EDX
005c1e4f  MOV EAX,dword ptr [EBP + -0x38]
005c1e52  MOV ECX,dword ptr [EAX + 0x38]
005c1e55  CALL 0x0060fb30
005c1e5a  MOV ECX,dword ptr [EBP + -0x38]
005c1e5d  MOV EDX,dword ptr [ECX + 0x4]
005c1e60  MOV EAX,dword ptr [EDX + 0xc]
005c1e63  MOV dword ptr [EBP + -0x24],EAX
005c1e66  PUSH 0x1
005c1e68  MOV ECX,dword ptr [EBP + -0x24]
005c1e6b  PUSH ECX
005c1e6c  MOV EDX,dword ptr [EBP + -0x38]
005c1e6f  MOV ECX,dword ptr [EDX + 0x40]
005c1e72  CALL 0x0060fb30
005c1e77  MOV EAX,dword ptr [EBP + -0x38]
005c1e7a  MOV ECX,dword ptr [EAX + 0x4]
005c1e7d  MOV dword ptr [EBP + -0x30],ECX
005c1e80  MOV EDX,dword ptr [EBP + -0x30]
005c1e83  MOV EAX,dword ptr [EDX + 0x8]
005c1e86  MOV dword ptr [EBP + -0x28],EAX
005c1e89  MOV ECX,dword ptr [EBP + -0x30]
005c1e8c  MOV EDX,dword ptr [ECX + 0xc]
005c1e8f  MOV dword ptr [EBP + -0x2c],EDX
005c1e92  PUSH 0x1
005c1e94  MOV EAX,dword ptr [EBP + -0x28]
005c1e97  CDQ
005c1e98  IDIV dword ptr [EBP + -0x2c]
005c1e9b  PUSH EAX
005c1e9c  MOV EAX,dword ptr [EBP + -0x38]
005c1e9f  MOV ECX,dword ptr [EAX + 0x44]
005c1ea2  CALL 0x0060fb30
005c1ea7  MOV ECX,dword ptr [EBP + -0x38]
005c1eaa  MOV EDX,dword ptr [ECX + 0x4]
005c1ead  MOV EAX,dword ptr [EDX + 0x8]
005c1eb0  MOV dword ptr [EBP + -0x34],EAX
005c1eb3  PUSH 0x1
005c1eb5  MOV ECX,dword ptr [EBP + -0x34]
005c1eb8  PUSH ECX
005c1eb9  MOV EDX,dword ptr [EBP + -0x38]
005c1ebc  MOV ECX,dword ptr [EDX + 0x48]
005c1ebf  CALL 0x0060fb30
005c1ec4  MOV ESP,EBP
005c1ec6  POP EBP
005c1ec7  RET 0x4
