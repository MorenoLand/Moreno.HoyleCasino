; FUN_005d99c0  005d99c0
005d99c0  PUSH EBP
005d99c1  MOV EBP,ESP
005d99c3  SUB ESP,0x30
005d99c6  MOV dword ptr [EBP + -0x30],ECX
005d99c9  MOV EAX,dword ptr [EBP + 0x8]
005d99cc  PUSH EAX
005d99cd  CALL 0x005dcb00
005d99d2  ADD ESP,0x4
005d99d5  MOV ECX,dword ptr [EAX + 0x49c]
005d99db  MOV dword ptr [EBP + -0x14],ECX
005d99de  MOV EDX,dword ptr [0x0162ee84]
005d99e4  MOV EAX,dword ptr [EDX + 0x58]
005d99e7  MOV ECX,dword ptr [EBP + 0x8]
005d99ea  MOV EDX,dword ptr [EAX + ECX*0x4]
005d99ed  MOV dword ptr [EBP + -0x10],EDX
005d99f0  MOV EAX,dword ptr [EBP + 0xc]
005d99f3  MOV dword ptr [EBP + -0xc],EAX
005d99f6  MOV ECX,dword ptr [EBP + -0x10]
005d99f9  CMP dword ptr [ECX + 0x3a4],0x0
005d9a00  JZ 0x005d9a27
005d9a02  MOV EDX,dword ptr [EBP + -0x10]
005d9a05  MOV EAX,dword ptr [EDX + 0x3a4]
005d9a0b  MOV dword ptr [EBP + -0x18],EAX
005d9a0e  MOV ECX,dword ptr [EBP + -0x18]
005d9a11  PUSH ECX
005d9a12  CALL 0x00686cae
005d9a17  ADD ESP,0x4
005d9a1a  MOV EDX,dword ptr [EBP + -0x10]
005d9a1d  MOV dword ptr [EDX + 0x3a4],0x0
005d9a27  MOV EAX,dword ptr [EBP + -0x10]
005d9a2a  CMP dword ptr [EAX + 0x3a8],0x0
005d9a31  JZ 0x005d9ace
005d9a37  MOV dword ptr [EBP + -0x8],0x0
005d9a3e  JMP 0x005d9a49
005d9a40  MOV ECX,dword ptr [EBP + -0x8]
005d9a43  ADD ECX,0x1
005d9a46  MOV dword ptr [EBP + -0x8],ECX
005d9a49  MOV EDX,dword ptr [0x0162ee84]
005d9a4f  MOV EAX,dword ptr [EDX]
005d9a51  MOV ECX,dword ptr [0x0162ee84]
005d9a57  MOV EDX,dword ptr [EAX + 0xec]
005d9a5d  CALL EDX
005d9a5f  CMP dword ptr [EBP + -0x8],EAX
005d9a62  JGE 0x005d9aa9
005d9a64  MOV EAX,dword ptr [EBP + -0x10]
005d9a67  MOV ECX,dword ptr [EAX + 0x3a8]
005d9a6d  MOV EDX,dword ptr [EBP + -0x8]
005d9a70  CMP dword ptr [ECX + EDX*0x4],0x0
005d9a74  JZ 0x005d9a94
005d9a76  MOV EAX,dword ptr [EBP + -0x10]
005d9a79  MOV ECX,dword ptr [EAX + 0x3a8]
005d9a7f  MOV EDX,dword ptr [EBP + -0x8]
005d9a82  MOV EAX,dword ptr [ECX + EDX*0x4]
005d9a85  MOV dword ptr [EBP + -0x1c],EAX
005d9a88  MOV ECX,dword ptr [EBP + -0x1c]
005d9a8b  PUSH ECX
005d9a8c  CALL 0x00686cae
005d9a91  ADD ESP,0x4
005d9a94  MOV EDX,dword ptr [EBP + -0x10]
005d9a97  MOV EAX,dword ptr [EDX + 0x3a8]
005d9a9d  MOV ECX,dword ptr [EBP + -0x8]
005d9aa0  MOV dword ptr [EAX + ECX*0x4],0x0
005d9aa7  JMP 0x005d9a40
005d9aa9  MOV EDX,dword ptr [EBP + -0x10]
005d9aac  MOV EAX,dword ptr [EDX + 0x3a8]
005d9ab2  MOV dword ptr [EBP + -0x20],EAX
005d9ab5  MOV ECX,dword ptr [EBP + -0x20]
005d9ab8  PUSH ECX
005d9ab9  CALL 0x00686cae
005d9abe  ADD ESP,0x4
005d9ac1  MOV EDX,dword ptr [EBP + -0x10]
005d9ac4  MOV dword ptr [EDX + 0x3a8],0x0
005d9ace  PUSH 0x4f4
005d9ad3  MOV EAX,dword ptr [EBP + -0xc]
005d9ad6  PUSH EAX
005d9ad7  MOV ECX,dword ptr [EBP + -0x10]
005d9ada  PUSH ECX
005d9adb  CALL 0x00686fde
005d9ae0  ADD ESP,0xc
005d9ae3  MOV EDX,dword ptr [0x0162ee84]
005d9ae9  MOV EAX,dword ptr [EDX]
005d9aeb  MOV ECX,dword ptr [0x0162ee84]
005d9af1  MOV EDX,dword ptr [EAX + 0xf0]
005d9af7  CALL EDX
005d9af9  MOV dword ptr [EBP + -0x4],EAX
005d9afc  MOV EAX,dword ptr [EBP + -0x4]
005d9aff  PUSH EAX
005d9b00  CALL 0x00686d82
005d9b05  ADD ESP,0x4
005d9b08  MOV dword ptr [EBP + -0x24],EAX
005d9b0b  MOV ECX,dword ptr [EBP + -0x10]
005d9b0e  MOV EDX,dword ptr [EBP + -0x24]
005d9b11  MOV dword ptr [ECX + 0x3a4],EDX
005d9b17  MOV EAX,dword ptr [EBP + -0x4]
005d9b1a  PUSH EAX
005d9b1b  MOV ECX,dword ptr [EBP + -0xc]
005d9b1e  MOV EDX,dword ptr [ECX + 0x3a4]
005d9b24  PUSH EDX
005d9b25  MOV EAX,dword ptr [EBP + -0x10]
005d9b28  MOV ECX,dword ptr [EAX + 0x3a4]
005d9b2e  PUSH ECX
005d9b2f  CALL 0x00686fde
005d9b34  ADD ESP,0xc
005d9b37  MOV EDX,dword ptr [0x0162ee84]
005d9b3d  MOV EAX,dword ptr [EDX]
005d9b3f  MOV ECX,dword ptr [0x0162ee84]
005d9b45  MOV EDX,dword ptr [EAX + 0xec]
005d9b4b  CALL EDX
005d9b4d  XOR ECX,ECX
005d9b4f  MOV EDX,0x4
005d9b54  MUL EDX
005d9b56  SETO CL
005d9b59  NEG ECX
005d9b5b  OR ECX,EAX
005d9b5d  PUSH ECX
005d9b5e  CALL 0x00686d82
005d9b63  ADD ESP,0x4
005d9b66  MOV dword ptr [EBP + -0x28],EAX
005d9b69  MOV EAX,dword ptr [EBP + -0x10]
005d9b6c  MOV ECX,dword ptr [EBP + -0x28]
005d9b6f  MOV dword ptr [EAX + 0x3a8],ECX
005d9b75  MOV dword ptr [EBP + -0x8],0x0
005d9b7c  JMP 0x005d9b87
005d9b7e  MOV EDX,dword ptr [EBP + -0x8]
005d9b81  ADD EDX,0x1
005d9b84  MOV dword ptr [EBP + -0x8],EDX
005d9b87  MOV EAX,[0x0162ee84]
005d9b8c  MOV EDX,dword ptr [EAX]
005d9b8e  MOV ECX,dword ptr [0x0162ee84]
005d9b94  MOV EAX,dword ptr [EDX + 0xec]
005d9b9a  CALL EAX
005d9b9c  CMP dword ptr [EBP + -0x8],EAX
005d9b9f  JGE 0x005d9c10
005d9ba1  MOV ECX,dword ptr [EBP + -0x8]
005d9ba4  PUSH ECX
005d9ba5  MOV EDX,dword ptr [0x0162ee84]
005d9bab  MOV EAX,dword ptr [EDX]
005d9bad  MOV ECX,dword ptr [0x0162ee84]
005d9bb3  MOV EDX,dword ptr [EAX + 0x108]
005d9bb9  CALL EDX
005d9bbb  MOV dword ptr [EBP + -0x4],EAX
005d9bbe  MOV EAX,dword ptr [EBP + -0x4]
005d9bc1  PUSH EAX
005d9bc2  CALL 0x00686d82
005d9bc7  ADD ESP,0x4
005d9bca  MOV dword ptr [EBP + -0x2c],EAX
005d9bcd  MOV ECX,dword ptr [EBP + -0x10]
005d9bd0  MOV EDX,dword ptr [ECX + 0x3a8]
005d9bd6  MOV EAX,dword ptr [EBP + -0x8]
005d9bd9  MOV ECX,dword ptr [EBP + -0x2c]
005d9bdc  MOV dword ptr [EDX + EAX*0x4],ECX
005d9bdf  MOV EDX,dword ptr [EBP + -0x4]
005d9be2  PUSH EDX
005d9be3  MOV EAX,dword ptr [EBP + -0xc]
005d9be6  MOV ECX,dword ptr [EAX + 0x3a8]
005d9bec  MOV EDX,dword ptr [EBP + -0x8]
005d9bef  MOV EAX,dword ptr [ECX + EDX*0x4]
005d9bf2  PUSH EAX
005d9bf3  MOV ECX,dword ptr [EBP + -0x10]
005d9bf6  MOV EDX,dword ptr [ECX + 0x3a8]
005d9bfc  MOV EAX,dword ptr [EBP + -0x8]
005d9bff  MOV ECX,dword ptr [EDX + EAX*0x4]
005d9c02  PUSH ECX
005d9c03  CALL 0x00686fde
005d9c08  ADD ESP,0xc
005d9c0b  JMP 0x005d9b7e
005d9c10  MOV EDX,dword ptr [EBP + 0x8]
005d9c13  PUSH EDX
005d9c14  CALL 0x005dcb00
005d9c19  ADD ESP,0x4
005d9c1c  MOV ECX,dword ptr [EBP + -0x14]
005d9c1f  MOV dword ptr [EAX + 0x49c],ECX
005d9c25  MOV EDX,dword ptr [EBP + 0xc]
005d9c28  PUSH EDX
005d9c29  MOV EAX,dword ptr [EBP + -0x30]
005d9c2c  MOV EDX,dword ptr [EAX]
005d9c2e  MOV ECX,dword ptr [EBP + -0x30]
005d9c31  MOV EAX,dword ptr [EDX + 0x15c]
005d9c37  CALL EAX
005d9c39  MOV ESP,EBP
005d9c3b  POP EBP
005d9c3c  RET 0x8
