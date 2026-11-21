; FUN_004f4e20  004f4e20
004f4e20  PUSH EBP
004f4e21  MOV EBP,ESP
004f4e23  SUB ESP,0x8
004f4e26  MOV dword ptr [EBP + -0x8],ECX
004f4e29  MOV EAX,dword ptr [EBP + -0x8]
004f4e2c  MOVZX ECX,byte ptr [EAX + 0x1]
004f4e30  TEST ECX,ECX
004f4e32  JNZ 0x004f4e4b
004f4e34  PUSH 0xac
004f4e39  PUSH 0x6bfe08
004f4e3e  PUSH 0x6bfe6c
004f4e43  CALL 0x005e9f20
004f4e48  ADD ESP,0xc
004f4e4b  CMP dword ptr [EBP + 0x8],0x0
004f4e4f  JG 0x004f4e68
004f4e51  PUSH 0xad
004f4e56  PUSH 0x6bfe08
004f4e5b  PUSH 0x6bfe98
004f4e60  CALL 0x005e9f20
004f4e65  ADD ESP,0xc
004f4e68  MOV ECX,dword ptr [EBP + -0x8]
004f4e6b  MOVZX EDX,byte ptr [ECX]
004f4e6e  TEST EDX,EDX
004f4e70  JZ 0x004f4e89
004f4e72  PUSH 0xae
004f4e77  PUSH 0x6bfe08
004f4e7c  PUSH 0x6bfe50
004f4e81  CALL 0x005e9f20
004f4e86  ADD ESP,0xc
004f4e89  MOV ECX,dword ptr [EBP + -0x8]
004f4e8c  MOVZX EDX,byte ptr [ECX + 0x2]
004f4e90  TEST EDX,EDX
004f4e92  JZ 0x004f4eab
004f4e94  PUSH 0xaf
004f4e99  PUSH 0x6bfe08
004f4e9e  PUSH 0x6bfe38
004f4ea3  CALL 0x005e9f20
004f4ea8  ADD ESP,0xc
004f4eab  MOV ECX,dword ptr [EBP + -0x8]
004f4eae  MOVZX EDX,byte ptr [ECX + 0x3]
004f4eb2  TEST EDX,EDX
004f4eb4  JZ 0x004f4ecd
004f4eb6  PUSH 0xb0
004f4ebb  PUSH 0x6bfe08
004f4ec0  PUSH 0x6bfe20
004f4ec5  CALL 0x005e9f20
004f4eca  ADD ESP,0xc
004f4ecd  MOV ECX,dword ptr [EBP + -0x8]
004f4ed0  CALL 0x004f9110
004f4ed5  MOVSX ECX,AX
004f4ed8  CMP ECX,0x2
004f4edb  JGE 0x004f4ef4
004f4edd  PUSH 0xb1
004f4ee2  PUSH 0x6bfe08
004f4ee7  PUSH 0x6bfe7c
004f4eec  CALL 0x005e9f20
004f4ef1  ADD ESP,0xc
004f4ef4  MOV EAX,dword ptr [EBP + -0x8]
004f4ef7  MOV ECX,dword ptr [EAX + 0xc]
004f4efa  ADD ECX,dword ptr [EBP + 0x8]
004f4efd  MOV EDX,dword ptr [EBP + -0x8]
004f4f00  MOV dword ptr [EDX + 0xc],ECX
004f4f03  MOV EAX,dword ptr [EBP + -0x8]
004f4f06  MOV ECX,dword ptr [EAX + 0x10]
004f4f09  ADD ECX,dword ptr [EBP + 0x8]
004f4f0c  MOV EDX,dword ptr [EBP + -0x8]
004f4f0f  MOV dword ptr [EDX + 0x10],ECX
004f4f12  MOV word ptr [EBP + -0x4],0x0
004f4f18  JMP 0x004f4f26
004f4f1a  MOV AX,word ptr [EBP + -0x4]
004f4f1e  ADD AX,0x1
004f4f22  MOV word ptr [EBP + -0x4],AX
004f4f26  MOVSX ECX,word ptr [EBP + -0x4]
004f4f2a  MOV EDX,dword ptr [EBP + -0x8]
004f4f2d  MOVSX EAX,word ptr [EDX + 0x6]
004f4f31  CMP ECX,EAX
004f4f33  JGE 0x004f4f78
004f4f35  MOVSX ECX,word ptr [EBP + -0x4]
004f4f39  MOV EDX,dword ptr [EBP + -0x8]
004f4f3c  MOV EAX,dword ptr [EDX + 0x30]
004f4f3f  MOVZX ECX,byte ptr [EAX + ECX*0x1]
004f4f43  TEST ECX,ECX
004f4f45  JNZ 0x004f4f76
004f4f47  MOVSX EDX,word ptr [EBP + -0x4]
004f4f4b  MOV EAX,dword ptr [EBP + -0x8]
004f4f4e  MOV ECX,dword ptr [EAX + 0x34]
004f4f51  MOVZX EDX,byte ptr [ECX + EDX*0x1]
004f4f55  TEST EDX,EDX
004f4f57  JNZ 0x004f4f76
004f4f59  MOVSX EAX,word ptr [EBP + -0x4]
004f4f5d  MOV ECX,dword ptr [EBP + -0x8]
004f4f60  MOV EDX,dword ptr [ECX + 0x6c]
004f4f63  MOV EAX,dword ptr [EDX + EAX*0x4]
004f4f66  ADD EAX,dword ptr [EBP + 0x8]
004f4f69  MOVSX ECX,word ptr [EBP + -0x4]
004f4f6d  MOV EDX,dword ptr [EBP + -0x8]
004f4f70  MOV EDX,dword ptr [EDX + 0x6c]
004f4f73  MOV dword ptr [EDX + ECX*0x4],EAX
004f4f76  JMP 0x004f4f1a
004f4f78  MOV ESP,EBP
004f4f7a  POP EBP
004f4f7b  RET 0x4
