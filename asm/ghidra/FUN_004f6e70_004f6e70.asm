; FUN_004f6e70  004f6e70
004f6e70  PUSH EBP
004f6e71  MOV EBP,ESP
004f6e73  SUB ESP,0x8
004f6e76  MOV dword ptr [EBP + -0x8],ECX
004f6e79  MOV EAX,dword ptr [EBP + -0x8]
004f6e7c  MOVZX ECX,byte ptr [EAX + 0x1]
004f6e80  TEST ECX,ECX
004f6e82  JNZ 0x004f6e9b
004f6e84  PUSH 0x331
004f6e89  PUSH 0x6bfe08
004f6e8e  PUSH 0x6bfe6c
004f6e93  CALL 0x005e9f20
004f6e98  ADD ESP,0xc
004f6e9b  MOV EAX,dword ptr [EBP + -0x8]
004f6e9e  MOVZX ECX,byte ptr [EAX + 0x3]
004f6ea2  TEST ECX,ECX
004f6ea4  JNZ 0x004f6ebd
004f6ea6  PUSH 0x332
004f6eab  PUSH 0x6bfe08
004f6eb0  PUSH 0x6c0138
004f6eb5  CALL 0x005e9f20
004f6eba  ADD ESP,0xc
004f6ebd  MOV EAX,dword ptr [EBP + -0x8]
004f6ec0  MOVSX ECX,word ptr [EAX + 0x2e]
004f6ec4  CMP ECX,-0x1
004f6ec7  JNZ 0x004f6f7c
004f6ecd  MOV word ptr [EBP + -0x4],0x0
004f6ed3  JMP 0x004f6ee1
004f6ed5  MOV DX,word ptr [EBP + -0x4]
004f6ed9  ADD DX,0x1
004f6edd  MOV word ptr [EBP + -0x4],DX
004f6ee1  MOVSX EAX,word ptr [EBP + -0x4]
004f6ee5  MOV ECX,dword ptr [EBP + -0x8]
004f6ee8  MOVSX EDX,word ptr [ECX + 0x6]
004f6eec  CMP EAX,EDX
004f6eee  JGE 0x004f6f7c
004f6ef4  MOVSX EAX,word ptr [EBP + -0x4]
004f6ef8  MOV ECX,dword ptr [EBP + -0x8]
004f6efb  MOV EDX,dword ptr [ECX + 0x30]
004f6efe  MOVZX EAX,byte ptr [EDX + EAX*0x1]
004f6f02  TEST EAX,EAX
004f6f04  JNZ 0x004f6f77
004f6f06  MOVSX ECX,word ptr [EBP + -0x4]
004f6f0a  MOV EDX,dword ptr [EBP + -0x8]
004f6f0d  MOV EAX,dword ptr [EDX + 0x68]
004f6f10  MOV EDX,dword ptr [EBP + -0x8]
004f6f13  MOV EAX,dword ptr [EAX + ECX*0x4]
004f6f16  CMP EAX,dword ptr [EDX + 0x24]
004f6f19  JNZ 0x004f6f77
004f6f1b  MOVSX ECX,word ptr [EBP + -0x4]
004f6f1f  MOV EDX,dword ptr [EBP + -0x8]
004f6f22  MOV EAX,dword ptr [EDX + 0x6c]
004f6f25  MOV EDX,dword ptr [EBP + -0x8]
004f6f28  MOV EAX,dword ptr [EAX + ECX*0x4]
004f6f2b  CMP EAX,dword ptr [EDX + 0x28]
004f6f2e  JNZ 0x004f6f77
004f6f30  MOV ECX,dword ptr [EBP + -0x8]
004f6f33  MOVSX EDX,word ptr [ECX + 0x2e]
004f6f37  CMP EDX,-0x1
004f6f3a  JNZ 0x004f6f49
004f6f3c  MOV EAX,dword ptr [EBP + -0x8]
004f6f3f  MOV CX,word ptr [EBP + -0x4]
004f6f43  MOV word ptr [EAX + 0x2e],CX
004f6f47  JMP 0x004f6f77
004f6f49  MOVSX EDX,word ptr [EBP + -0x4]
004f6f4d  MOV EAX,dword ptr [EBP + -0x8]
004f6f50  MOV ECX,dword ptr [EAX + 0x4c]
004f6f53  MOVSX EDX,word ptr [ECX + EDX*0x2]
004f6f57  MOV EAX,dword ptr [EBP + -0x8]
004f6f5a  MOVSX ECX,word ptr [EAX + 0x2e]
004f6f5e  MOV EAX,dword ptr [EBP + -0x8]
004f6f61  MOV EAX,dword ptr [EAX + 0x4c]
004f6f64  MOVSX ECX,word ptr [EAX + ECX*0x2]
004f6f68  CMP EDX,ECX
004f6f6a  JLE 0x004f6f77
004f6f6c  MOV EDX,dword ptr [EBP + -0x8]
004f6f6f  MOV AX,word ptr [EBP + -0x4]
004f6f73  MOV word ptr [EDX + 0x2e],AX
004f6f77  JMP 0x004f6ed5
004f6f7c  MOV ECX,dword ptr [EBP + -0x8]
004f6f7f  MOV DX,word ptr [ECX + 0x2e]
004f6f83  MOV word ptr [EBP + -0x4],DX
004f6f87  MOV EAX,dword ptr [EBP + -0x8]
004f6f8a  MOVSX ECX,word ptr [EAX + 0x2e]
004f6f8e  MOV EDX,dword ptr [EBP + -0x8]
004f6f91  MOV EAX,dword ptr [EDX + 0x3c]
004f6f94  MOVZX ECX,byte ptr [EAX + ECX*0x1]
004f6f98  TEST ECX,ECX
004f6f9a  JNZ 0x004f6faa
004f6f9c  MOV EDX,dword ptr [EBP + -0x8]
004f6f9f  MOV AX,word ptr [EDX + 0x2e]
004f6fa3  JMP 0x004f7043
004f6faa  MOV AX,word ptr [EBP + -0x4]
004f6fae  ADD AX,0x1
004f6fb2  MOV word ptr [EBP + -0x4],AX
004f6fb6  MOVSX ECX,word ptr [EBP + -0x4]
004f6fba  MOV EDX,dword ptr [EBP + -0x8]
004f6fbd  MOVSX EAX,word ptr [EDX + 0x6]
004f6fc1  CMP ECX,EAX
004f6fc3  JNZ 0x004f6fcb
004f6fc5  MOV word ptr [EBP + -0x4],0x0
004f6fcb  MOVSX ECX,word ptr [EBP + -0x4]
004f6fcf  MOV EDX,dword ptr [EBP + -0x8]
004f6fd2  MOVSX EAX,word ptr [EDX + 0x2e]
004f6fd6  CMP ECX,EAX
004f6fd8  JZ 0x004f7028
004f6fda  MOVSX ECX,word ptr [EBP + -0x4]
004f6fde  MOV EDX,dword ptr [EBP + -0x8]
004f6fe1  MOV EAX,dword ptr [EDX + 0x30]
004f6fe4  MOVZX ECX,byte ptr [EAX + ECX*0x1]
004f6fe8  TEST ECX,ECX
004f6fea  JNZ 0x004f6faa
004f6fec  MOVSX EDX,word ptr [EBP + -0x4]
004f6ff0  MOV EAX,dword ptr [EBP + -0x8]
004f6ff3  MOV ECX,dword ptr [EAX + 0x3c]
004f6ff6  MOVZX EDX,byte ptr [ECX + EDX*0x1]
004f6ffa  TEST EDX,EDX
004f6ffc  JNZ 0x004f6faa
004f6ffe  MOVSX EAX,word ptr [EBP + -0x4]
004f7002  MOV ECX,dword ptr [EBP + -0x8]
004f7005  MOV EDX,dword ptr [ECX + 0x68]
004f7008  MOV ECX,dword ptr [EBP + -0x8]
004f700b  MOV EDX,dword ptr [EDX + EAX*0x4]
004f700e  CMP EDX,dword ptr [ECX + 0x24]
004f7011  JNZ 0x004f6faa
004f7013  MOVSX EAX,word ptr [EBP + -0x4]
004f7017  MOV ECX,dword ptr [EBP + -0x8]
004f701a  MOV EDX,dword ptr [ECX + 0x6c]
004f701d  MOV ECX,dword ptr [EBP + -0x8]
004f7020  MOV EDX,dword ptr [EDX + EAX*0x4]
004f7023  CMP EDX,dword ptr [ECX + 0x28]
004f7026  JNZ 0x004f6faa
004f7028  MOVSX EAX,word ptr [EBP + -0x4]
004f702c  MOV ECX,dword ptr [EBP + -0x8]
004f702f  MOVSX EDX,word ptr [ECX + 0x2e]
004f7033  CMP EAX,EDX
004f7035  JNZ 0x004f703f
004f7037  OR AX,0xffff
004f703b  JMP 0x004f7043
004f703f  MOV AX,word ptr [EBP + -0x4]
004f7043  MOV ESP,EBP
004f7045  POP EBP
004f7046  RET
