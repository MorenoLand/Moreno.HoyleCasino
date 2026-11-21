; FUN_00570b70  00570b70
00570b70  PUSH EBP
00570b71  MOV EBP,ESP
00570b73  SUB ESP,0x20
00570b76  MOV dword ptr [EBP + -0x18],ECX
00570b79  CALL dword ptr [0x006b20bc]
00570b7f  MOV dword ptr [EBP + -0x14],EAX
00570b82  MOV byte ptr [EBP + -0xd],0x0
00570b86  MOV ECX,dword ptr [EBP + -0x18]
00570b89  CALL 0x005fc360
00570b8e  MOV dword ptr [EBP + -0x1c],EAX
00570b91  CMP dword ptr [EBP + -0x1c],0x0
00570b95  JZ 0x00570b9c
00570b97  JMP 0x00570d31
00570b9c  MOV EAX,dword ptr [EBP + -0x18]
00570b9f  MOV ECX,dword ptr [EAX + 0x20]
00570ba2  MOV dword ptr [EBP + -0x8],ECX
00570ba5  MOV dword ptr [EBP + -0x4],0x0
00570bac  JMP 0x00570bb7
00570bae  MOV EDX,dword ptr [EBP + -0x4]
00570bb1  ADD EDX,0x1
00570bb4  MOV dword ptr [EBP + -0x4],EDX
00570bb7  MOV EAX,dword ptr [EBP + -0x18]
00570bba  MOV ECX,dword ptr [EBP + -0x4]
00570bbd  CMP ECX,dword ptr [EAX + 0x24]
00570bc0  JGE 0x00570cb7
00570bc6  MOV EDX,dword ptr [EBP + -0x18]
00570bc9  MOV EAX,dword ptr [EDX + 0x30]
00570bcc  MOV ECX,dword ptr [EAX + 0x18c]
00570bd2  MOV EDX,dword ptr [EBP + -0x4]
00570bd5  MOV ECX,dword ptr [ECX + EDX*0x4]
00570bd8  CALL 0x005eb220
00570bdd  MOV dword ptr [EBP + -0xc],EAX
00570be0  MOV EAX,dword ptr [EBP + -0x8]
00570be3  CDQ
00570be4  MOV ECX,0xa
00570be9  IDIV ECX
00570beb  SHL EDX,0x1
00570bed  CMP dword ptr [EBP + -0xc],EDX
00570bf0  JZ 0x00570c69
00570bf2  MOV EDX,dword ptr [EBP + -0x18]
00570bf5  MOVZX EAX,byte ptr [EDX + 0x2c]
00570bf9  TEST EAX,EAX
00570bfb  JZ 0x00570c08
00570bfd  MOV ECX,dword ptr [EBP + -0xc]
00570c00  ADD ECX,0x1
00570c03  MOV dword ptr [EBP + -0x20],ECX
00570c06  JMP 0x00570c11
00570c08  MOV EDX,dword ptr [EBP + -0xc]
00570c0b  SUB EDX,0x1
00570c0e  MOV dword ptr [EBP + -0x20],EDX
00570c11  MOV EAX,dword ptr [EBP + -0x20]
00570c14  MOV dword ptr [EBP + -0xc],EAX
00570c17  CMP dword ptr [EBP + -0xc],0x14
00570c1b  JNZ 0x00570c24
00570c1d  MOV dword ptr [EBP + -0xc],0x0
00570c24  CMP dword ptr [EBP + -0xc],-0x1
00570c28  JNZ 0x00570c31
00570c2a  MOV dword ptr [EBP + -0xc],0x13
00570c31  MOV ECX,dword ptr [EBP + -0xc]
00570c34  PUSH ECX
00570c35  MOV EDX,dword ptr [EBP + -0x18]
00570c38  MOV EAX,dword ptr [EDX + 0x30]
00570c3b  MOV ECX,dword ptr [EAX + 0x18c]
00570c41  MOV EDX,dword ptr [EBP + -0x4]
00570c44  MOV EAX,dword ptr [ECX + EDX*0x4]
00570c47  MOV ECX,dword ptr [EBP + -0x18]
00570c4a  MOV EDX,dword ptr [ECX + 0x30]
00570c4d  MOV ECX,dword ptr [EDX + 0x18c]
00570c53  MOV EDX,dword ptr [EBP + -0x4]
00570c56  MOV ECX,dword ptr [ECX + EDX*0x4]
00570c59  MOV EAX,dword ptr [EAX]
00570c5b  MOV EDX,dword ptr [EAX + 0xb0]
00570c61  CALL EDX
00570c63  MOV byte ptr [EBP + -0xd],0x1
00570c67  JMP 0x00570ca4
00570c69  MOV EAX,dword ptr [EBP + -0x18]
00570c6c  MOV ECX,dword ptr [EAX + 0x30]
00570c6f  MOVSX EDX,word ptr [ECX + 0x184]
00570c76  MOV EAX,dword ptr [EBP + -0x18]
00570c79  CMP dword ptr [EAX + 0x24],EDX
00570c7c  JGE 0x00570ca4
00570c7e  MOV ECX,dword ptr [EBP + -0x4]
00570c81  ADD ECX,0x1
00570c84  MOV EDX,dword ptr [EBP + -0x18]
00570c87  CMP dword ptr [EDX + 0x24],ECX
00570c8a  JNZ 0x00570ca4
00570c8c  MOV EAX,dword ptr [EBP + -0x18]
00570c8f  MOV ECX,dword ptr [EAX + 0x24]
00570c92  ADD ECX,0x1
00570c95  MOV EDX,dword ptr [EBP + -0x18]
00570c98  MOV dword ptr [EDX + 0x24],ECX
00570c9b  MOV EAX,dword ptr [EBP + -0x18]
00570c9e  MOV ECX,dword ptr [EBP + -0x14]
00570ca1  MOV dword ptr [EAX + 0x28],ECX
00570ca4  MOV EAX,dword ptr [EBP + -0x8]
00570ca7  CDQ
00570ca8  MOV ECX,0xa
00570cad  IDIV ECX
00570caf  MOV dword ptr [EBP + -0x8],EAX
00570cb2  JMP 0x00570bae
00570cb7  MOVZX EDX,byte ptr [EBP + -0xd]
00570cbb  TEST EDX,EDX
00570cbd  JZ 0x00570d1d
00570cbf  MOV EAX,dword ptr [EBP + -0x18]
00570cc2  MOV ECX,dword ptr [EAX + 0x28]
00570cc5  ADD ECX,0x12c
00570ccb  CMP dword ptr [EBP + -0x14],ECX
00570cce  JBE 0x00570cfd
00570cd0  MOV EDX,dword ptr [EBP + -0x18]
00570cd3  MOV EAX,dword ptr [EDX + 0x30]
00570cd6  MOVSX ECX,word ptr [EAX + 0x184]
00570cdd  MOV EDX,dword ptr [EBP + -0x18]
00570ce0  CMP dword ptr [EDX + 0x24],ECX
00570ce3  JGE 0x00570cf4
00570ce5  MOV EAX,dword ptr [EBP + -0x18]
00570ce8  MOV ECX,dword ptr [EAX + 0x24]
00570ceb  ADD ECX,0x1
00570cee  MOV EDX,dword ptr [EBP + -0x18]
00570cf1  MOV dword ptr [EDX + 0x24],ECX
00570cf4  MOV EAX,dword ptr [EBP + -0x18]
00570cf7  MOV ECX,dword ptr [EBP + -0x14]
00570cfa  MOV dword ptr [EAX + 0x28],ECX
00570cfd  PUSH 0x0
00570cff  MOV EDX,dword ptr [EBP + -0x18]
00570d02  MOV EAX,dword ptr [EDX]
00570d04  MOV ECX,dword ptr [EBP + -0x18]
00570d07  MOV EDX,dword ptr [EAX + 0x4]
00570d0a  CALL EDX
00570d0c  PUSH 0x5
00570d0e  MOV EAX,dword ptr [EBP + -0x18]
00570d11  MOV EDX,dword ptr [EAX]
00570d13  MOV ECX,dword ptr [EBP + -0x18]
00570d16  MOV EAX,dword ptr [EDX + 0x1c]
00570d19  CALL EAX
00570d1b  JMP 0x00570d2f
00570d1d  MOV ECX,dword ptr [EBP + -0x18]
00570d20  MOV EDX,dword ptr [ECX + 0x30]
00570d23  MOV EAX,dword ptr [EBP + -0x18]
00570d26  MOV ECX,dword ptr [EAX + 0x20]
00570d29  MOV dword ptr [EDX + 0x188],ECX
00570d2f  JMP 0x00570d4c
00570d31  XOR EDX,EDX
00570d33  JNZ 0x00570d4c
00570d35  PUSH 0x602
00570d3a  PUSH 0x6ca2b4
00570d3f  PUSH 0x6b2f58
00570d44  CALL 0x005e9f20
00570d49  ADD ESP,0xc
00570d4c  MOV ESP,EBP
00570d4e  POP EBP
00570d4f  RET
