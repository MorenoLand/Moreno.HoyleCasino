; FUN_005c9af0  005c9af0
005c9af0  PUSH EBP
005c9af1  MOV EBP,ESP
005c9af3  PUSH -0x1
005c9af5  PUSH 0x6a89c8
005c9afa  MOV EAX,FS:[0x0]
005c9b00  PUSH EAX
005c9b01  SUB ESP,0x44
005c9b04  MOV EAX,[0x00781870]
005c9b09  XOR EAX,EBP
005c9b0b  PUSH EAX
005c9b0c  LEA EAX,[EBP + -0xc]
005c9b0f  MOV FS:[0x0],EAX
005c9b15  MOV dword ptr [EBP + -0x3c],ECX
005c9b18  MOV EAX,dword ptr [EBP + -0x3c]
005c9b1b  MOV dword ptr [EAX],0x6d2410
005c9b21  MOV dword ptr [EBP + -0x4],0x0
005c9b28  MOV dword ptr [EBP + -0x10],0x0
005c9b2f  JMP 0x005c9b3a
005c9b31  MOV ECX,dword ptr [EBP + -0x10]
005c9b34  ADD ECX,0x1
005c9b37  MOV dword ptr [EBP + -0x10],ECX
005c9b3a  CMP dword ptr [EBP + -0x10],0x4
005c9b3e  JGE 0x005c9b75
005c9b40  MOV EDX,dword ptr [EBP + -0x10]
005c9b43  MOV EAX,dword ptr [EBP + -0x3c]
005c9b46  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x4]
005c9b4a  MOV dword ptr [EBP + -0x18],ECX
005c9b4d  MOV EDX,dword ptr [EBP + -0x18]
005c9b50  MOV dword ptr [EBP + -0x14],EDX
005c9b53  CMP dword ptr [EBP + -0x14],0x0
005c9b57  JZ 0x005c9b6c
005c9b59  PUSH 0x1
005c9b5b  MOV EAX,dword ptr [EBP + -0x14]
005c9b5e  MOV EDX,dword ptr [EAX]
005c9b60  MOV ECX,dword ptr [EBP + -0x14]
005c9b63  MOV EAX,dword ptr [EDX]
005c9b65  CALL EAX
005c9b67  MOV dword ptr [EBP + -0x40],EAX
005c9b6a  JMP 0x005c9b73
005c9b6c  MOV dword ptr [EBP + -0x40],0x0
005c9b73  JMP 0x005c9b31
005c9b75  MOV dword ptr [EBP + -0x10],0x0
005c9b7c  JMP 0x005c9b87
005c9b7e  MOV ECX,dword ptr [EBP + -0x10]
005c9b81  ADD ECX,0x1
005c9b84  MOV dword ptr [EBP + -0x10],ECX
005c9b87  CMP dword ptr [EBP + -0x10],0x2
005c9b8b  JGE 0x005c9bc2
005c9b8d  MOV EDX,dword ptr [EBP + -0x10]
005c9b90  MOV EAX,dword ptr [EBP + -0x3c]
005c9b93  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x14]
005c9b97  MOV dword ptr [EBP + -0x20],ECX
005c9b9a  MOV EDX,dword ptr [EBP + -0x20]
005c9b9d  MOV dword ptr [EBP + -0x1c],EDX
005c9ba0  CMP dword ptr [EBP + -0x1c],0x0
005c9ba4  JZ 0x005c9bb9
005c9ba6  PUSH 0x1
005c9ba8  MOV EAX,dword ptr [EBP + -0x1c]
005c9bab  MOV EDX,dword ptr [EAX]
005c9bad  MOV ECX,dword ptr [EBP + -0x1c]
005c9bb0  MOV EAX,dword ptr [EDX]
005c9bb2  CALL EAX
005c9bb4  MOV dword ptr [EBP + -0x44],EAX
005c9bb7  JMP 0x005c9bc0
005c9bb9  MOV dword ptr [EBP + -0x44],0x0
005c9bc0  JMP 0x005c9b7e
005c9bc2  MOV ECX,dword ptr [EBP + -0x3c]
005c9bc5  MOV EDX,dword ptr [ECX + 0x1c]
005c9bc8  MOV dword ptr [EBP + -0x28],EDX
005c9bcb  MOV EAX,dword ptr [EBP + -0x28]
005c9bce  MOV dword ptr [EBP + -0x24],EAX
005c9bd1  CMP dword ptr [EBP + -0x24],0x0
005c9bd5  JZ 0x005c9bea
005c9bd7  PUSH 0x1
005c9bd9  MOV ECX,dword ptr [EBP + -0x24]
005c9bdc  MOV EDX,dword ptr [ECX]
005c9bde  MOV ECX,dword ptr [EBP + -0x24]
005c9be1  MOV EAX,dword ptr [EDX]
005c9be3  CALL EAX
005c9be5  MOV dword ptr [EBP + -0x48],EAX
005c9be8  JMP 0x005c9bf1
005c9bea  MOV dword ptr [EBP + -0x48],0x0
005c9bf1  MOV ECX,dword ptr [EBP + -0x3c]
005c9bf4  MOV EDX,dword ptr [ECX + 0x20]
005c9bf7  MOV dword ptr [EBP + -0x30],EDX
005c9bfa  MOV EAX,dword ptr [EBP + -0x30]
005c9bfd  MOV dword ptr [EBP + -0x2c],EAX
005c9c00  CMP dword ptr [EBP + -0x2c],0x0
005c9c04  JZ 0x005c9c19
005c9c06  PUSH 0x1
005c9c08  MOV ECX,dword ptr [EBP + -0x2c]
005c9c0b  MOV EDX,dword ptr [ECX]
005c9c0d  MOV ECX,dword ptr [EBP + -0x2c]
005c9c10  MOV EAX,dword ptr [EDX]
005c9c12  CALL EAX
005c9c14  MOV dword ptr [EBP + -0x4c],EAX
005c9c17  JMP 0x005c9c20
005c9c19  MOV dword ptr [EBP + -0x4c],0x0
005c9c20  MOV ECX,dword ptr [EBP + -0x3c]
005c9c23  MOV EDX,dword ptr [ECX + 0x24]
005c9c26  MOV dword ptr [EBP + -0x38],EDX
005c9c29  MOV EAX,dword ptr [EBP + -0x38]
005c9c2c  MOV dword ptr [EBP + -0x34],EAX
005c9c2f  CMP dword ptr [EBP + -0x34],0x0
005c9c33  JZ 0x005c9c48
005c9c35  PUSH 0x1
005c9c37  MOV ECX,dword ptr [EBP + -0x34]
005c9c3a  MOV EDX,dword ptr [ECX]
005c9c3c  MOV ECX,dword ptr [EBP + -0x34]
005c9c3f  MOV EAX,dword ptr [EDX]
005c9c41  CALL EAX
005c9c43  MOV dword ptr [EBP + -0x50],EAX
005c9c46  JMP 0x005c9c4f
005c9c48  MOV dword ptr [EBP + -0x50],0x0
005c9c4f  MOV dword ptr [EBP + -0x4],0xffffffff
005c9c56  MOV ECX,dword ptr [EBP + -0x3c]
005c9c59  CALL 0x005e9e40
005c9c5e  MOV ECX,dword ptr [EBP + -0xc]
005c9c61  MOV dword ptr FS:[0x0],ECX
005c9c68  POP ECX
005c9c69  MOV ESP,EBP
005c9c6b  POP EBP
005c9c6c  RET
