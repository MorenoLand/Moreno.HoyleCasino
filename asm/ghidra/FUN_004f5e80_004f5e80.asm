; FUN_004f5e80  004f5e80
004f5e80  PUSH EBP
004f5e81  MOV EBP,ESP
004f5e83  SUB ESP,0x8
004f5e86  MOV dword ptr [EBP + -0x8],ECX
004f5e89  MOV EAX,dword ptr [EBP + -0x8]
004f5e8c  MOVZX ECX,byte ptr [EAX + 0x1]
004f5e90  TEST ECX,ECX
004f5e92  JNZ 0x004f5eab
004f5e94  PUSH 0x1c3
004f5e99  PUSH 0x6bfe08
004f5e9e  PUSH 0x6bfe6c
004f5ea3  CALL 0x005e9f20
004f5ea8  ADD ESP,0xc
004f5eab  MOV EAX,dword ptr [EBP + -0x8]
004f5eae  MOVZX ECX,byte ptr [EAX]
004f5eb1  TEST ECX,ECX
004f5eb3  JNZ 0x004f5ecc
004f5eb5  PUSH 0x1c4
004f5eba  PUSH 0x6bfe08
004f5ebf  PUSH 0x6c0020
004f5ec4  CALL 0x005e9f20
004f5ec9  ADD ESP,0xc
004f5ecc  MOV ECX,dword ptr [EBP + -0x8]
004f5ecf  CALL 0x004f6690
004f5ed4  MOVZX EAX,AL
004f5ed7  TEST EAX,EAX
004f5ed9  JNZ 0x004f5ef2
004f5edb  PUSH 0x1c5
004f5ee0  PUSH 0x6bfe08
004f5ee5  PUSH 0x6c0060
004f5eea  CALL 0x005e9f20
004f5eef  ADD ESP,0xc
004f5ef2  CMP dword ptr [EBP + 0x8],0x0
004f5ef6  JNZ 0x004f5f03
004f5ef8  MOV ECX,dword ptr [EBP + -0x8]
004f5efb  CALL 0x004f67d0
004f5f00  MOV dword ptr [EBP + 0x8],EAX
004f5f03  MOV EDX,dword ptr [EBP + -0x8]
004f5f06  MOV EAX,dword ptr [EDX + 0xc]
004f5f09  ADD EAX,dword ptr [EBP + 0x8]
004f5f0c  MOV ECX,dword ptr [EBP + -0x8]
004f5f0f  MOV dword ptr [ECX + 0xc],EAX
004f5f12  MOV EDX,dword ptr [EBP + -0x8]
004f5f15  MOVSX EAX,word ptr [EDX + 0x8]
004f5f19  MOV ECX,dword ptr [EBP + -0x8]
004f5f1c  MOV EDX,dword ptr [ECX + 0x68]
004f5f1f  MOV EAX,dword ptr [EDX + EAX*0x4]
004f5f22  ADD EAX,dword ptr [EBP + 0x8]
004f5f25  MOV ECX,dword ptr [EBP + -0x8]
004f5f28  MOVSX EDX,word ptr [ECX + 0x8]
004f5f2c  MOV ECX,dword ptr [EBP + -0x8]
004f5f2f  MOV ECX,dword ptr [ECX + 0x68]
004f5f32  MOV dword ptr [ECX + EDX*0x4],EAX
004f5f35  MOV EDX,dword ptr [EBP + -0x8]
004f5f38  MOVSX EAX,word ptr [EDX + 0x8]
004f5f3c  MOV ECX,dword ptr [EBP + -0x8]
004f5f3f  MOV EDX,dword ptr [ECX + 0x34]
004f5f42  MOV byte ptr [EAX + EDX*0x1],0x1
004f5f46  MOV EAX,dword ptr [EBP + -0x8]
004f5f49  MOVSX ECX,word ptr [EAX + 0x8]
004f5f4d  MOV EDX,dword ptr [EBP + -0x8]
004f5f50  MOV EAX,dword ptr [EDX + 0x60]
004f5f53  MOV CX,word ptr [EAX + ECX*0x2]
004f5f57  ADD CX,0x1
004f5f5b  MOV EDX,dword ptr [EBP + -0x8]
004f5f5e  MOVSX EAX,word ptr [EDX + 0x8]
004f5f62  MOV EDX,dword ptr [EBP + -0x8]
004f5f65  MOV EDX,dword ptr [EDX + 0x60]
004f5f68  MOV word ptr [EDX + EAX*0x2],CX
004f5f6c  MOV EAX,dword ptr [EBP + -0x8]
004f5f6f  MOVSX ECX,word ptr [EAX + 0x8]
004f5f73  MOV EDX,dword ptr [EBP + -0x8]
004f5f76  MOV EAX,dword ptr [EDX + 0x54]
004f5f79  MOV CX,word ptr [EAX + ECX*0x2]
004f5f7d  ADD CX,0x1
004f5f81  MOV EDX,dword ptr [EBP + -0x8]
004f5f84  MOVSX EAX,word ptr [EDX + 0x8]
004f5f88  MOV EDX,dword ptr [EBP + -0x8]
004f5f8b  MOV EDX,dword ptr [EDX + 0x54]
004f5f8e  MOV word ptr [EDX + EAX*0x2],CX
004f5f92  MOV ECX,dword ptr [EBP + -0x8]
004f5f95  CALL 0x004f8f20
004f5f9a  MOV word ptr [EBP + -0x4],AX
004f5f9e  MOVSX EAX,word ptr [EBP + -0x4]
004f5fa2  TEST EAX,EAX
004f5fa4  JL 0x004f6007
004f5fa6  MOVSX ECX,word ptr [EBP + -0x4]
004f5faa  MOV EDX,dword ptr [EBP + -0x8]
004f5fad  MOV EAX,dword ptr [EDX + 0x68]
004f5fb0  MOV EDX,dword ptr [EBP + -0x8]
004f5fb3  MOV EAX,dword ptr [EAX + ECX*0x4]
004f5fb6  CMP EAX,dword ptr [EDX + 0x14]
004f5fb9  JNZ 0x004f6007
004f5fbb  MOV ECX,dword ptr [EBP + -0x8]
004f5fbe  CALL 0x004f9110
004f5fc3  MOVSX ECX,AX
004f5fc6  CMP ECX,0x1
004f5fc9  JG 0x004f5fe1
004f5fcb  MOV EDX,dword ptr [EBP + -0x8]
004f5fce  MOV byte ptr [EDX],0x0
004f5fd1  MOV ECX,dword ptr [EBP + -0x8]
004f5fd4  CALL 0x004f9220
004f5fd9  MOV AX,0xfffd
004f5fdd  JMP 0x004f600b
004f5fe1  MOVSX EAX,word ptr [EBP + -0x4]
004f5fe5  MOV ECX,dword ptr [EBP + -0x8]
004f5fe8  MOV EDX,dword ptr [ECX + 0x38]
004f5feb  MOVZX EAX,byte ptr [EDX + EAX*0x1]
004f5fef  TEST EAX,EAX
004f5ff1  JZ 0x004f6001
004f5ff3  MOV ECX,dword ptr [EBP + -0x8]
004f5ff6  MOV byte ptr [ECX],0x0
004f5ff9  OR AX,0xffff
004f5ffd  JMP 0x004f600b
004f6001  MOV AX,word ptr [EBP + -0x4]
004f6005  JMP 0x004f600b
004f6007  MOV AX,word ptr [EBP + -0x4]
004f600b  MOV ESP,EBP
004f600d  POP EBP
004f600e  RET 0x4
