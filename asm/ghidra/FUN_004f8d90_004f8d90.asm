; FUN_004f8d90  004f8d90
004f8d90  PUSH EBP
004f8d91  MOV EBP,ESP
004f8d93  SUB ESP,0xc
004f8d96  MOV dword ptr [EBP + -0xc],ECX
004f8d99  MOV EAX,dword ptr [EBP + -0xc]
004f8d9c  MOVZX ECX,byte ptr [EAX + 0x1]
004f8da0  TEST ECX,ECX
004f8da2  JNZ 0x004f8dbb
004f8da4  PUSH 0x573
004f8da9  PUSH 0x6bfe08
004f8dae  PUSH 0x6bfe6c
004f8db3  CALL 0x005e9f20
004f8db8  ADD ESP,0xc
004f8dbb  MOV EAX,dword ptr [EBP + -0xc]
004f8dbe  MOVZX ECX,byte ptr [EAX + 0x3]
004f8dc2  TEST ECX,ECX
004f8dc4  JNZ 0x004f8ddd
004f8dc6  PUSH 0x574
004f8dcb  PUSH 0x6bfe08
004f8dd0  PUSH 0x6c0138
004f8dd5  CALL 0x005e9f20
004f8dda  ADD ESP,0xc
004f8ddd  MOV EAX,dword ptr [EBP + -0xc]
004f8de0  MOVZX ECX,byte ptr [EAX + 0x5]
004f8de4  TEST ECX,ECX
004f8de6  JNZ 0x004f8dff
004f8de8  PUSH 0x575
004f8ded  PUSH 0x6bfe08
004f8df2  PUSH 0x6c02e0
004f8df7  CALL 0x005e9f20
004f8dfc  ADD ESP,0xc
004f8dff  MOV EAX,dword ptr [EBP + -0xc]
004f8e02  MOVZX ECX,byte ptr [EAX + 0x4]
004f8e06  TEST ECX,ECX
004f8e08  JNZ 0x004f8e21
004f8e0a  PUSH 0x576
004f8e0f  PUSH 0x6bfe08
004f8e14  PUSH 0x6c02f4
004f8e19  CALL 0x005e9f20
004f8e1e  ADD ESP,0xc
004f8e21  MOV word ptr [EBP + -0x8],0xffff
004f8e27  MOV word ptr [EBP + -0x4],0x0
004f8e2d  JMP 0x004f8e3b
004f8e2f  MOV AX,word ptr [EBP + -0x4]
004f8e33  ADD AX,0x1
004f8e37  MOV word ptr [EBP + -0x4],AX
004f8e3b  MOVSX ECX,word ptr [EBP + -0x4]
004f8e3f  MOV EDX,dword ptr [EBP + -0xc]
004f8e42  MOVSX EAX,word ptr [EDX + 0x6]
004f8e46  CMP ECX,EAX
004f8e48  JGE 0x004f8eae
004f8e4a  MOVSX ECX,word ptr [EBP + -0x4]
004f8e4e  MOV EDX,dword ptr [EBP + -0xc]
004f8e51  MOV EAX,dword ptr [EDX + 0x30]
004f8e54  MOVZX ECX,byte ptr [EAX + ECX*0x1]
004f8e58  TEST ECX,ECX
004f8e5a  JNZ 0x004f8eac
004f8e5c  MOVSX EDX,word ptr [EBP + -0x4]
004f8e60  MOV EAX,dword ptr [EBP + -0xc]
004f8e63  MOV ECX,dword ptr [EAX + 0x3c]
004f8e66  MOVZX EDX,byte ptr [ECX + EDX*0x1]
004f8e6a  TEST EDX,EDX
004f8e6c  JZ 0x004f8eac
004f8e6e  MOVZX EAX,byte ptr [EBP + 0x8]
004f8e72  TEST EAX,EAX
004f8e74  JZ 0x004f8e88
004f8e76  MOVSX ECX,word ptr [EBP + -0x4]
004f8e7a  MOV EDX,dword ptr [EBP + -0xc]
004f8e7d  MOV EAX,dword ptr [EDX + 0x44]
004f8e80  MOVZX ECX,byte ptr [EAX + ECX*0x1]
004f8e84  TEST ECX,ECX
004f8e86  JNZ 0x004f8ea2
004f8e88  MOVZX EDX,byte ptr [EBP + 0x8]
004f8e8c  TEST EDX,EDX
004f8e8e  JNZ 0x004f8eac
004f8e90  MOVSX EAX,word ptr [EBP + -0x4]
004f8e94  MOV ECX,dword ptr [EBP + -0xc]
004f8e97  MOV EDX,dword ptr [ECX + 0x48]
004f8e9a  MOVZX EAX,byte ptr [EDX + EAX*0x1]
004f8e9e  TEST EAX,EAX
004f8ea0  JZ 0x004f8eac
004f8ea2  MOV CX,word ptr [EBP + -0x4]
004f8ea6  MOV word ptr [EBP + -0x8],CX
004f8eaa  JMP 0x004f8eae
004f8eac  JMP 0x004f8e2f
004f8eae  MOVSX EDX,word ptr [EBP + -0x4]
004f8eb2  MOV EAX,dword ptr [EBP + -0xc]
004f8eb5  MOVSX ECX,word ptr [EAX + 0x6]
004f8eb9  CMP EDX,ECX
004f8ebb  JNZ 0x004f8ec5
004f8ebd  OR AX,0xffff
004f8ec1  JMP 0x004f8f0e
004f8ec5  MOVSX EDX,word ptr [EBP + -0x8]
004f8ec9  TEST EDX,EDX
004f8ecb  JGE 0x004f8ee4
004f8ecd  PUSH 0x588
004f8ed2  PUSH 0x6bfe08
004f8ed7  PUSH 0x6c0390
004f8edc  CALL 0x005e9f20
004f8ee1  ADD ESP,0xc
004f8ee4  MOVZX ECX,byte ptr [EBP + 0x8]
004f8ee8  TEST ECX,ECX
004f8eea  JZ 0x004f8efc
004f8eec  MOVSX EDX,word ptr [EBP + -0x8]
004f8ef0  MOV EAX,dword ptr [EBP + -0xc]
004f8ef3  MOV ECX,dword ptr [EAX + 0x44]
004f8ef6  MOV byte ptr [EDX + ECX*0x1],0x0
004f8efa  JMP 0x004f8f0a
004f8efc  MOVSX EDX,word ptr [EBP + -0x8]
004f8f00  MOV EAX,dword ptr [EBP + -0xc]
004f8f03  MOV ECX,dword ptr [EAX + 0x48]
004f8f06  MOV byte ptr [EDX + ECX*0x1],0x0
004f8f0a  MOV AX,word ptr [EBP + -0x8]
004f8f0e  MOV ESP,EBP
004f8f10  POP EBP
004f8f11  RET 0x4
