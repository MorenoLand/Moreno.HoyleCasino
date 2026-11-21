; FUN_004f6c80  004f6c80
004f6c80  PUSH EBP
004f6c81  MOV EBP,ESP
004f6c83  SUB ESP,0x8
004f6c86  MOV dword ptr [EBP + -0x8],ECX
004f6c89  MOV EAX,dword ptr [EBP + -0x8]
004f6c8c  MOVZX ECX,byte ptr [EAX + 0x1]
004f6c90  TEST ECX,ECX
004f6c92  JNZ 0x004f6cab
004f6c94  PUSH 0x2fd
004f6c99  PUSH 0x6bfe08
004f6c9e  PUSH 0x6bfe6c
004f6ca3  CALL 0x005e9f20
004f6ca8  ADD ESP,0xc
004f6cab  MOV EAX,dword ptr [EBP + -0x8]
004f6cae  MOVZX ECX,byte ptr [EAX + 0x2]
004f6cb2  TEST ECX,ECX
004f6cb4  JZ 0x004f6ccd
004f6cb6  PUSH 0x2fe
004f6cbb  PUSH 0x6bfe08
004f6cc0  PUSH 0x6bfe38
004f6cc5  CALL 0x005e9f20
004f6cca  ADD ESP,0xc
004f6ccd  MOV EAX,dword ptr [EBP + -0x8]
004f6cd0  MOVZX ECX,byte ptr [EAX]
004f6cd3  TEST ECX,ECX
004f6cd5  JZ 0x004f6cee
004f6cd7  PUSH 0x2ff
004f6cdc  PUSH 0x6bfe08
004f6ce1  PUSH 0x6bfe50
004f6ce6  CALL 0x005e9f20
004f6ceb  ADD ESP,0xc
004f6cee  MOV EAX,dword ptr [EBP + -0x8]
004f6cf1  MOV dword ptr [EAX + 0x24],0x0
004f6cf8  MOV ECX,dword ptr [EBP + -0x8]
004f6cfb  MOV dword ptr [ECX + 0x28],0x0
004f6d02  MOV word ptr [EBP + -0x4],0x0
004f6d08  JMP 0x004f6d16
004f6d0a  MOV DX,word ptr [EBP + -0x4]
004f6d0e  ADD DX,0x1
004f6d12  MOV word ptr [EBP + -0x4],DX
004f6d16  MOVSX EAX,word ptr [EBP + -0x4]
004f6d1a  MOV ECX,dword ptr [EBP + -0x8]
004f6d1d  MOVSX EDX,word ptr [ECX + 0x6]
004f6d21  CMP EAX,EDX
004f6d23  JGE 0x004f6ddf
004f6d29  MOVSX EAX,word ptr [EBP + -0x4]
004f6d2d  MOV ECX,dword ptr [EBP + -0x8]
004f6d30  MOV EDX,dword ptr [ECX + 0x30]
004f6d33  MOVZX EAX,byte ptr [EDX + EAX*0x1]
004f6d37  TEST EAX,EAX
004f6d39  JNZ 0x004f6d78
004f6d3b  MOVSX ECX,word ptr [EBP + -0x4]
004f6d3f  MOV EDX,dword ptr [EBP + -0x8]
004f6d42  MOV EAX,dword ptr [EDX + 0x68]
004f6d45  MOV EDX,dword ptr [EBP + -0x8]
004f6d48  MOV EAX,dword ptr [EAX + ECX*0x4]
004f6d4b  CMP EAX,dword ptr [EDX + 0x24]
004f6d4e  JLE 0x004f6d78
004f6d50  MOVSX ECX,word ptr [EBP + -0x4]
004f6d54  MOV EDX,dword ptr [EBP + -0x8]
004f6d57  MOV EAX,dword ptr [EDX + 0x68]
004f6d5a  MOV EDX,dword ptr [EBP + -0x8]
004f6d5d  MOV EAX,dword ptr [EAX + ECX*0x4]
004f6d60  MOV dword ptr [EDX + 0x24],EAX
004f6d63  MOVSX ECX,word ptr [EBP + -0x4]
004f6d67  MOV EDX,dword ptr [EBP + -0x8]
004f6d6a  MOV EAX,dword ptr [EDX + 0x6c]
004f6d6d  MOV EDX,dword ptr [EBP + -0x8]
004f6d70  MOV EAX,dword ptr [EAX + ECX*0x4]
004f6d73  MOV dword ptr [EDX + 0x28],EAX
004f6d76  JMP 0x004f6dda
004f6d78  MOVSX ECX,word ptr [EBP + -0x4]
004f6d7c  MOV EDX,dword ptr [EBP + -0x8]
004f6d7f  MOV EAX,dword ptr [EDX + 0x30]
004f6d82  MOVZX ECX,byte ptr [EAX + ECX*0x1]
004f6d86  TEST ECX,ECX
004f6d88  JNZ 0x004f6dda
004f6d8a  MOVSX EDX,word ptr [EBP + -0x4]
004f6d8e  MOV EAX,dword ptr [EBP + -0x8]
004f6d91  MOV ECX,dword ptr [EAX + 0x68]
004f6d94  MOV EAX,dword ptr [EBP + -0x8]
004f6d97  MOV ECX,dword ptr [ECX + EDX*0x4]
004f6d9a  CMP ECX,dword ptr [EAX + 0x24]
004f6d9d  JNZ 0x004f6dda
004f6d9f  MOVSX EDX,word ptr [EBP + -0x4]
004f6da3  MOV EAX,dword ptr [EBP + -0x8]
004f6da6  MOV ECX,dword ptr [EAX + 0x6c]
004f6da9  MOV EAX,dword ptr [EBP + -0x8]
004f6dac  MOV ECX,dword ptr [ECX + EDX*0x4]
004f6daf  CMP ECX,dword ptr [EAX + 0x28]
004f6db2  JLE 0x004f6dda
004f6db4  MOVSX EDX,word ptr [EBP + -0x4]
004f6db8  MOV EAX,dword ptr [EBP + -0x8]
004f6dbb  MOV ECX,dword ptr [EAX + 0x68]
004f6dbe  MOV EAX,dword ptr [EBP + -0x8]
004f6dc1  MOV ECX,dword ptr [ECX + EDX*0x4]
004f6dc4  MOV dword ptr [EAX + 0x24],ECX
004f6dc7  MOVSX EDX,word ptr [EBP + -0x4]
004f6dcb  MOV EAX,dword ptr [EBP + -0x8]
004f6dce  MOV ECX,dword ptr [EAX + 0x6c]
004f6dd1  MOV EAX,dword ptr [EBP + -0x8]
004f6dd4  MOV ECX,dword ptr [ECX + EDX*0x4]
004f6dd7  MOV dword ptr [EAX + 0x28],ECX
004f6dda  JMP 0x004f6d0a
004f6ddf  MOV EDX,dword ptr [EBP + -0x8]
004f6de2  CMP dword ptr [EDX + 0x24],0x0
004f6de6  JG 0x004f6df1
004f6de8  MOV EAX,dword ptr [EBP + -0x8]
004f6deb  CMP dword ptr [EAX + 0x28],0x0
004f6def  JLE 0x004f6e0e
004f6df1  MOV ECX,dword ptr [EBP + -0x8]
004f6df4  MOV byte ptr [ECX + 0x3],0x1
004f6df8  MOV EDX,dword ptr [EBP + -0x8]
004f6dfb  MOV byte ptr [EDX + 0x5],0x0
004f6dff  MOV EAX,dword ptr [EBP + -0x8]
004f6e02  MOV word ptr [EAX + 0x2e],0xffff
004f6e08  MOV AL,0x1
004f6e0a  JMP 0x004f6e65
004f6e0e  MOV ECX,dword ptr [EBP + -0x8]
004f6e11  MOV byte ptr [ECX + 0x1],0x0
004f6e15  MOV EDX,dword ptr [EBP + -0x8]
004f6e18  MOV byte ptr [EDX + 0x3],0x0
004f6e1c  MOV EAX,dword ptr [EBP + -0x8]
004f6e1f  MOV byte ptr [EAX + 0x5],0x0
004f6e23  MOV ECX,dword ptr [EBP + -0x8]
004f6e26  CMP dword ptr [ECX + 0xc],0x0
004f6e2a  JZ 0x004f6e43
004f6e2c  PUSH 0x329
004f6e31  PUSH 0x6bfe08
004f6e36  PUSH 0x6c0128
004f6e3b  CALL 0x005e9f20
004f6e40  ADD ESP,0xc
004f6e43  MOV EAX,dword ptr [EBP + -0x8]
004f6e46  CMP dword ptr [EAX + 0x10],0x0
004f6e4a  JZ 0x004f6e63
004f6e4c  PUSH 0x32a
004f6e51  PUSH 0x6bfe08
004f6e56  PUSH 0x6c0110
004f6e5b  CALL 0x005e9f20
004f6e60  ADD ESP,0xc
004f6e63  XOR AL,AL
004f6e65  MOV ESP,EBP
004f6e67  POP EBP
004f6e68  RET
