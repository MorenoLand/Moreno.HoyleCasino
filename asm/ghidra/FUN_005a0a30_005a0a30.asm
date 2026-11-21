; FUN_005a0a30  005a0a30
005a0a30  PUSH EBP
005a0a31  MOV EBP,ESP
005a0a33  PUSH -0x1
005a0a35  PUSH 0x6a77ed
005a0a3a  MOV EAX,FS:[0x0]
005a0a40  PUSH EAX
005a0a41  SUB ESP,0x40
005a0a44  MOV EAX,[0x00781870]
005a0a49  XOR EAX,EBP
005a0a4b  PUSH EAX
005a0a4c  LEA EAX,[EBP + -0xc]
005a0a4f  MOV FS:[0x0],EAX
005a0a55  MOV dword ptr [EBP + -0x38],ECX
005a0a58  MOV ECX,dword ptr [EBP + -0x38]
005a0a5b  CALL 0x005d8230
005a0a60  PUSH 0x124
005a0a65  CALL 0x00686d82
005a0a6a  ADD ESP,0x4
005a0a6d  MOV dword ptr [EBP + -0x14],EAX
005a0a70  MOV dword ptr [EBP + -0x4],0x0
005a0a77  CMP dword ptr [EBP + -0x14],0x0
005a0a7b  JZ 0x005a0a8a
005a0a7d  MOV ECX,dword ptr [EBP + -0x14]
005a0a80  CALL 0x005a1cc0
005a0a85  MOV dword ptr [EBP + -0x3c],EAX
005a0a88  JMP 0x005a0a91
005a0a8a  MOV dword ptr [EBP + -0x3c],0x0
005a0a91  MOV EAX,dword ptr [EBP + -0x3c]
005a0a94  MOV dword ptr [EBP + -0x10],EAX
005a0a97  MOV dword ptr [EBP + -0x4],0xffffffff
005a0a9e  MOV ECX,dword ptr [EBP + -0x10]
005a0aa1  MOV dword ptr [0x007935d0],ECX
005a0aa7  MOV ECX,dword ptr [0x007935d0]
005a0aad  CALL 0x005a27c0
005a0ab2  PUSH 0x8
005a0ab4  CALL 0x00686d82
005a0ab9  ADD ESP,0x4
005a0abc  MOV dword ptr [EBP + -0x1c],EAX
005a0abf  MOV dword ptr [EBP + -0x4],0x1
005a0ac6  CMP dword ptr [EBP + -0x1c],0x0
005a0aca  JZ 0x005a0ad9
005a0acc  MOV ECX,dword ptr [EBP + -0x1c]
005a0acf  CALL 0x0059a680
005a0ad4  MOV dword ptr [EBP + -0x40],EAX
005a0ad7  JMP 0x005a0ae0
005a0ad9  MOV dword ptr [EBP + -0x40],0x0
005a0ae0  MOV EDX,dword ptr [EBP + -0x40]
005a0ae3  MOV dword ptr [EBP + -0x18],EDX
005a0ae6  MOV dword ptr [EBP + -0x4],0xffffffff
005a0aed  MOV EAX,dword ptr [EBP + -0x18]
005a0af0  MOV [0x007935c0],EAX
005a0af5  PUSH 0xa8
005a0afa  CALL 0x00686d82
005a0aff  ADD ESP,0x4
005a0b02  MOV dword ptr [EBP + -0x24],EAX
005a0b05  MOV dword ptr [EBP + -0x4],0x2
005a0b0c  CMP dword ptr [EBP + -0x24],0x0
005a0b10  JZ 0x005a0b1f
005a0b12  MOV ECX,dword ptr [EBP + -0x24]
005a0b15  CALL 0x0059b4d0
005a0b1a  MOV dword ptr [EBP + -0x44],EAX
005a0b1d  JMP 0x005a0b26
005a0b1f  MOV dword ptr [EBP + -0x44],0x0
005a0b26  MOV ECX,dword ptr [EBP + -0x44]
005a0b29  MOV dword ptr [EBP + -0x20],ECX
005a0b2c  MOV dword ptr [EBP + -0x4],0xffffffff
005a0b33  MOV EDX,dword ptr [EBP + -0x20]
005a0b36  MOV dword ptr [0x007935c4],EDX
005a0b3c  MOV ECX,dword ptr [0x007935c4]
005a0b42  CALL 0x0059ba30
005a0b47  PUSH 0xc
005a0b49  CALL 0x00686d82
005a0b4e  ADD ESP,0x4
005a0b51  MOV dword ptr [EBP + -0x2c],EAX
005a0b54  MOV dword ptr [EBP + -0x4],0x3
005a0b5b  CMP dword ptr [EBP + -0x2c],0x0
005a0b5f  JZ 0x005a0b6e
005a0b61  MOV ECX,dword ptr [EBP + -0x2c]
005a0b64  CALL 0x0059e8e0
005a0b69  MOV dword ptr [EBP + -0x48],EAX
005a0b6c  JMP 0x005a0b75
005a0b6e  MOV dword ptr [EBP + -0x48],0x0
005a0b75  MOV EAX,dword ptr [EBP + -0x48]
005a0b78  MOV dword ptr [EBP + -0x28],EAX
005a0b7b  MOV dword ptr [EBP + -0x4],0xffffffff
005a0b82  MOV ECX,dword ptr [EBP + -0x28]
005a0b85  MOV dword ptr [0x007935c8],ECX
005a0b8b  PUSH 0x20
005a0b8d  CALL 0x00686d82
005a0b92  ADD ESP,0x4
005a0b95  MOV dword ptr [EBP + -0x34],EAX
005a0b98  MOV dword ptr [EBP + -0x4],0x4
005a0b9f  CMP dword ptr [EBP + -0x34],0x0
005a0ba3  JZ 0x005a0bc0
005a0ba5  PUSH 0x0
005a0ba7  MOV ECX,dword ptr [EBP + -0x34]
005a0baa  CALL 0x005fc0d0
005a0baf  MOV EDX,dword ptr [EBP + -0x34]
005a0bb2  MOV dword ptr [EDX],0x6cf3c8
005a0bb8  MOV EAX,dword ptr [EBP + -0x34]
005a0bbb  MOV dword ptr [EBP + -0x4c],EAX
005a0bbe  JMP 0x005a0bc7
005a0bc0  MOV dword ptr [EBP + -0x4c],0x0
005a0bc7  MOV ECX,dword ptr [EBP + -0x4c]
005a0bca  MOV dword ptr [EBP + -0x30],ECX
005a0bcd  MOV dword ptr [EBP + -0x4],0xffffffff
005a0bd4  MOV EDX,dword ptr [EBP + -0x30]
005a0bd7  PUSH EDX
005a0bd8  MOV ECX,dword ptr [EBP + -0x38]
005a0bdb  CALL 0x005f1b70
005a0be0  MOV EAX,dword ptr [EBP + -0x38]
005a0be3  MOV ECX,dword ptr [EAX + 0x4]
005a0be6  MOV EDX,dword ptr [EBP + -0x38]
005a0be9  MOV EAX,dword ptr [EDX + 0x4]
005a0bec  MOV EDX,dword ptr [ECX]
005a0bee  MOV ECX,EAX
005a0bf0  MOV EAX,dword ptr [EDX + 0x10]
005a0bf3  CALL EAX
005a0bf5  MOV ECX,dword ptr [EBP + -0x38]
005a0bf8  CALL 0x005d85e0
005a0bfd  PUSH 0x0
005a0bff  MOV ECX,dword ptr [0x007935c8]
005a0c05  CALL 0x0059f960
005a0c0a  MOV ECX,dword ptr [EBP + -0xc]
005a0c0d  MOV dword ptr FS:[0x0],ECX
005a0c14  POP ECX
005a0c15  MOV ESP,EBP
005a0c17  POP EBP
005a0c18  RET
