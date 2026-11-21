; FUN_004f4c80  004f4c80
004f4c80  PUSH EBP
004f4c81  MOV EBP,ESP
004f4c83  SUB ESP,0x8
004f4c86  MOV dword ptr [EBP + -0x8],ECX
004f4c89  MOV EAX,dword ptr [EBP + -0x8]
004f4c8c  MOVZX ECX,byte ptr [EAX + 0x1]
004f4c90  TEST ECX,ECX
004f4c92  JNZ 0x004f4cab
004f4c94  PUSH 0x94
004f4c99  PUSH 0x6bfe08
004f4c9e  PUSH 0x6bfe6c
004f4ca3  CALL 0x005e9f20
004f4ca8  ADD ESP,0xc
004f4cab  MOV EAX,dword ptr [EBP + -0x8]
004f4cae  MOVZX ECX,byte ptr [EAX]
004f4cb1  TEST ECX,ECX
004f4cb3  JZ 0x004f4ccc
004f4cb5  PUSH 0x95
004f4cba  PUSH 0x6bfe08
004f4cbf  PUSH 0x6bfe50
004f4cc4  CALL 0x005e9f20
004f4cc9  ADD ESP,0xc
004f4ccc  MOV EAX,dword ptr [EBP + -0x8]
004f4ccf  MOVZX ECX,byte ptr [EAX + 0x2]
004f4cd3  TEST ECX,ECX
004f4cd5  JZ 0x004f4cee
004f4cd7  PUSH 0x96
004f4cdc  PUSH 0x6bfe08
004f4ce1  PUSH 0x6bfe38
004f4ce6  CALL 0x005e9f20
004f4ceb  ADD ESP,0xc
004f4cee  MOV EAX,dword ptr [EBP + -0x8]
004f4cf1  MOVZX ECX,byte ptr [EAX + 0x3]
004f4cf5  TEST ECX,ECX
004f4cf7  JZ 0x004f4d10
004f4cf9  PUSH 0x97
004f4cfe  PUSH 0x6bfe08
004f4d03  PUSH 0x6bfe20
004f4d08  CALL 0x005e9f20
004f4d0d  ADD ESP,0xc
004f4d10  MOV EAX,dword ptr [EBP + -0x8]
004f4d13  CMP dword ptr [EAX + 0x5c],0x0
004f4d17  JNZ 0x004f4d30
004f4d19  PUSH 0x9b
004f4d1e  PUSH 0x6bfe08
004f4d23  PUSH 0x6bfcf8
004f4d28  CALL 0x005e9f20
004f4d2d  ADD ESP,0xc
004f4d30  MOV word ptr [EBP + -0x4],0x0
004f4d36  JMP 0x004f4d44
004f4d38  MOV DX,word ptr [EBP + -0x4]
004f4d3c  ADD DX,0x1
004f4d40  MOV word ptr [EBP + -0x4],DX
004f4d44  MOVSX EAX,word ptr [EBP + -0x4]
004f4d48  MOV ECX,dword ptr [EBP + -0x8]
004f4d4b  MOVSX EDX,word ptr [ECX + 0x6]
004f4d4f  CMP EAX,EDX
004f4d51  JGE 0x004f4d65
004f4d53  MOVSX EAX,word ptr [EBP + -0x4]
004f4d57  MOV ECX,dword ptr [EBP + -0x8]
004f4d5a  MOV EDX,dword ptr [ECX + 0x5c]
004f4d5d  MOV word ptr [EDX + EAX*0x2],0x0
004f4d63  JMP 0x004f4d38
004f4d65  MOV EAX,dword ptr [EBP + -0x8]
004f4d68  CMP dword ptr [EAX + 0x60],0x0
004f4d6c  JNZ 0x004f4d85
004f4d6e  PUSH 0x9f
004f4d73  PUSH 0x6bfe08
004f4d78  PUSH 0x6bfce8
004f4d7d  CALL 0x005e9f20
004f4d82  ADD ESP,0xc
004f4d85  MOV word ptr [EBP + -0x4],0x0
004f4d8b  JMP 0x004f4d99
004f4d8d  MOV DX,word ptr [EBP + -0x4]
004f4d91  ADD DX,0x1
004f4d95  MOV word ptr [EBP + -0x4],DX
004f4d99  MOVSX EAX,word ptr [EBP + -0x4]
004f4d9d  MOV ECX,dword ptr [EBP + -0x8]
004f4da0  MOVSX EDX,word ptr [ECX + 0x6]
004f4da4  CMP EAX,EDX
004f4da6  JGE 0x004f4dba
004f4da8  MOVSX EAX,word ptr [EBP + -0x4]
004f4dac  MOV ECX,dword ptr [EBP + -0x8]
004f4daf  MOV EDX,dword ptr [ECX + 0x60]
004f4db2  MOV word ptr [EDX + EAX*0x2],0x0
004f4db8  JMP 0x004f4d8d
004f4dba  MOV EAX,dword ptr [EBP + -0x8]
004f4dbd  CMP dword ptr [EAX + 0x64],0x0
004f4dc1  JNZ 0x004f4dda
004f4dc3  PUSH 0xa3
004f4dc8  PUSH 0x6bfe08
004f4dcd  PUSH 0x6bfcd8
004f4dd2  CALL 0x005e9f20
004f4dd7  ADD ESP,0xc
004f4dda  MOV word ptr [EBP + -0x4],0x0
004f4de0  JMP 0x004f4dee
004f4de2  MOV DX,word ptr [EBP + -0x4]
004f4de6  ADD DX,0x1
004f4dea  MOV word ptr [EBP + -0x4],DX
004f4dee  MOVSX EAX,word ptr [EBP + -0x4]
004f4df2  MOV ECX,dword ptr [EBP + -0x8]
004f4df5  MOVSX EDX,word ptr [ECX + 0x6]
004f4df9  CMP EAX,EDX
004f4dfb  JGE 0x004f4e0f
004f4dfd  MOVSX EAX,word ptr [EBP + -0x4]
004f4e01  MOV ECX,dword ptr [EBP + -0x8]
004f4e04  MOV EDX,dword ptr [ECX + 0x64]
004f4e07  MOV word ptr [EDX + EAX*0x2],0x0
004f4e0d  JMP 0x004f4de2
004f4e0f  MOV ESP,EBP
004f4e11  POP EBP
004f4e12  RET
