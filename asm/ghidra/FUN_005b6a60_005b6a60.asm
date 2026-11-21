; FUN_005b6a60  005b6a60
005b6a60  PUSH EBP
005b6a61  MOV EBP,ESP
005b6a63  SUB ESP,0x2c
005b6a66  MOV dword ptr [EBP + -0x2c],ECX
005b6a69  PUSH 0x0
005b6a6b  PUSH -0x1
005b6a6d  MOV ECX,dword ptr [EBP + -0x2c]
005b6a70  CALL 0x005b70e0
005b6a75  MOV ECX,dword ptr [EBP + -0x2c]
005b6a78  CALL 0x005b8430
005b6a7d  MOV dword ptr [EBP + -0x4],0x0
005b6a84  JMP 0x005b6a8f
005b6a86  MOV EAX,dword ptr [EBP + -0x4]
005b6a89  ADD EAX,0x1
005b6a8c  MOV dword ptr [EBP + -0x4],EAX
005b6a8f  CMP dword ptr [EBP + -0x4],0x4
005b6a93  JGE 0x005b6abb
005b6a95  MOV ECX,dword ptr [EBP + -0x4]
005b6a98  MOV EDX,dword ptr [EBP + -0x2c]
005b6a9b  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x580]
005b6aa2  CALL 0x005cb9b0
005b6aa7  MOV EAX,dword ptr [EBP + -0x4]
005b6aaa  MOV ECX,dword ptr [EBP + -0x2c]
005b6aad  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x634]
005b6ab4  CALL 0x005cb9b0
005b6ab9  JMP 0x005b6a86
005b6abb  MOV dword ptr [EBP + -0x8],0x0
005b6ac2  JMP 0x005b6acd
005b6ac4  MOV EDX,dword ptr [EBP + -0x8]
005b6ac7  ADD EDX,0x1
005b6aca  MOV dword ptr [EBP + -0x8],EDX
005b6acd  CMP dword ptr [EBP + -0x8],0x5
005b6ad1  JGE 0x005b6b35
005b6ad3  MOV dword ptr [EBP + -0xc],0x0
005b6ada  JMP 0x005b6ae5
005b6adc  MOV EAX,dword ptr [EBP + -0xc]
005b6adf  ADD EAX,0x1
005b6ae2  MOV dword ptr [EBP + -0xc],EAX
005b6ae5  CMP dword ptr [EBP + -0xc],0x4
005b6ae9  JGE 0x005b6b33
005b6aeb  MOV dword ptr [EBP + -0x10],0x0
005b6af2  JMP 0x005b6afd
005b6af4  MOV ECX,dword ptr [EBP + -0x10]
005b6af7  ADD ECX,0x1
005b6afa  MOV dword ptr [EBP + -0x10],ECX
005b6afd  CMP dword ptr [EBP + -0x10],0x16
005b6b01  JGE 0x005b6b31
005b6b03  PUSH 0x0
005b6b05  MOV EDX,dword ptr [EBP + -0x10]
005b6b08  PUSH EDX
005b6b09  MOV EAX,dword ptr [EBP + -0xc]
005b6b0c  PUSH EAX
005b6b0d  MOV ECX,dword ptr [EBP + -0x8]
005b6b10  PUSH ECX
005b6b11  MOV ECX,dword ptr [EBP + -0x2c]
005b6b14  CALL 0x005b7340
005b6b19  PUSH 0x0
005b6b1b  MOV EDX,dword ptr [EBP + -0x10]
005b6b1e  PUSH EDX
005b6b1f  MOV EAX,dword ptr [EBP + -0xc]
005b6b22  PUSH EAX
005b6b23  MOV ECX,dword ptr [EBP + -0x8]
005b6b26  PUSH ECX
005b6b27  MOV ECX,dword ptr [EBP + -0x2c]
005b6b2a  CALL 0x005b70b0
005b6b2f  JMP 0x005b6af4
005b6b31  JMP 0x005b6adc
005b6b33  JMP 0x005b6ac4
005b6b35  MOV dword ptr [EBP + -0x14],0x0
005b6b3c  JMP 0x005b6b47
005b6b3e  MOV EDX,dword ptr [EBP + -0x14]
005b6b41  ADD EDX,0x1
005b6b44  MOV dword ptr [EBP + -0x14],EDX
005b6b47  CMP dword ptr [EBP + -0x14],0x4
005b6b4b  JGE 0x005b6c39
005b6b51  MOV EAX,dword ptr [EBP + -0x14]
005b6b54  PUSH EAX
005b6b55  CALL 0x005dcb00
005b6b5a  ADD ESP,0x4
005b6b5d  MOV dword ptr [EBP + -0x20],EAX
005b6b60  MOV ECX,dword ptr [EBP + -0x20]
005b6b63  MOV byte ptr [ECX + 0x4a2],0x0
005b6b6a  MOV EDX,dword ptr [EBP + -0x14]
005b6b6d  PUSH EDX
005b6b6e  CALL 0x005dcb00
005b6b73  ADD ESP,0x4
005b6b76  MOV dword ptr [EBP + -0x24],EAX
005b6b79  MOV EAX,dword ptr [EBP + -0x24]
005b6b7c  MOV byte ptr [EAX + 0x4a0],0x0
005b6b83  MOV ECX,dword ptr [EBP + -0x14]
005b6b86  PUSH ECX
005b6b87  CALL 0x005dcb00
005b6b8c  ADD ESP,0x4
005b6b8f  MOV dword ptr [EBP + -0x28],EAX
005b6b92  MOV EDX,dword ptr [EBP + -0x28]
005b6b95  MOV byte ptr [EDX + 0x4a1],0x0
005b6b9c  MOV dword ptr [EBP + -0x18],0x0
005b6ba3  JMP 0x005b6bae
005b6ba5  MOV EAX,dword ptr [EBP + -0x18]
005b6ba8  ADD EAX,0x1
005b6bab  MOV dword ptr [EBP + -0x18],EAX
005b6bae  CMP dword ptr [EBP + -0x18],0x4
005b6bb2  JGE 0x005b6bf0
005b6bb4  MOV ECX,dword ptr [EBP + -0x14]
005b6bb7  IMUL ECX,ECX,0x118
005b6bbd  ADD ECX,dword ptr [EBP + -0x18]
005b6bc0  MOV EDX,dword ptr [EBP + -0x2c]
005b6bc3  MOV byte ptr [EDX + ECX*0x1 + 0x5c],0x0
005b6bc8  PUSH -0x1
005b6bca  MOV EAX,dword ptr [EBP + -0x18]
005b6bcd  PUSH EAX
005b6bce  MOV ECX,dword ptr [EBP + -0x14]
005b6bd1  PUSH ECX
005b6bd2  MOV ECX,dword ptr [EBP + -0x2c]
005b6bd5  CALL 0x005b71a0
005b6bda  MOV EDX,dword ptr [EBP + -0x14]
005b6bdd  IMUL EDX,EDX,0x118
005b6be3  ADD EDX,dword ptr [EBP + -0x18]
005b6be6  MOV EAX,dword ptr [EBP + -0x2c]
005b6be9  MOV byte ptr [EAX + EDX*0x1 + 0x60],0x0
005b6bee  JMP 0x005b6ba5
005b6bf0  MOV ECX,dword ptr [EBP + -0x14]
005b6bf3  IMUL ECX,ECX,0x118
005b6bf9  MOV EDX,dword ptr [EBP + -0x2c]
005b6bfc  MOV byte ptr [EDX + ECX*0x1 + 0x67],0x0
005b6c01  MOV EAX,dword ptr [EBP + -0x14]
005b6c04  IMUL EAX,EAX,0x118
005b6c0a  MOV ECX,dword ptr [EBP + -0x2c]
005b6c0d  MOV byte ptr [ECX + EAX*0x1 + 0x65],0x0
005b6c12  MOV EDX,dword ptr [EBP + -0x14]
005b6c15  IMUL EDX,EDX,0x118
005b6c1b  MOV EAX,dword ptr [EBP + -0x2c]
005b6c1e  MOV byte ptr [EAX + EDX*0x1 + 0x66],0x0
005b6c23  MOV ECX,dword ptr [EBP + -0x14]
005b6c26  IMUL ECX,ECX,0x118
005b6c2c  MOV EDX,dword ptr [EBP + -0x2c]
005b6c2f  MOV byte ptr [EDX + ECX*0x1 + 0x64],0x0
005b6c34  JMP 0x005b6b3e
005b6c39  MOV dword ptr [EBP + -0x1c],0x0
005b6c40  JMP 0x005b6c4b
005b6c42  MOV EAX,dword ptr [EBP + -0x1c]
005b6c45  ADD EAX,0x1
005b6c48  MOV dword ptr [EBP + -0x1c],EAX
005b6c4b  CMP dword ptr [EBP + -0x1c],0x4
005b6c4f  JGE 0x005b6c7f
005b6c51  PUSH 0x0
005b6c53  MOV ECX,dword ptr [EBP + -0x1c]
005b6c56  PUSH ECX
005b6c57  MOV ECX,dword ptr [EBP + -0x2c]
005b6c5a  CALL 0x005b73a0
005b6c5f  MOV EDX,dword ptr [EBP + -0x1c]
005b6c62  MOV EAX,dword ptr [EBP + -0x2c]
005b6c65  MOV dword ptr [EAX + EDX*0x4 + 0x664],0xffffffff
005b6c70  MOV ECX,dword ptr [EBP + -0x2c]
005b6c73  ADD ECX,dword ptr [EBP + -0x1c]
005b6c76  MOV byte ptr [ECX + 0x674],0x0
005b6c7d  JMP 0x005b6c42
005b6c7f  MOV EDX,dword ptr [EBP + -0x2c]
005b6c82  MOV dword ptr [EDX + 0x5bc],0xffffffff
005b6c8c  MOV ESP,EBP
005b6c8e  POP EBP
005b6c8f  RET
