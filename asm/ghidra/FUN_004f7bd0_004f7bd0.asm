; FUN_004f7bd0  004f7bd0
004f7bd0  PUSH EBP
004f7bd1  MOV EBP,ESP
004f7bd3  PUSH -0x1
004f7bd5  PUSH 0x6a26ca
004f7bda  MOV EAX,FS:[0x0]
004f7be0  PUSH EAX
004f7be1  SUB ESP,0x58
004f7be4  MOV EAX,[0x00781870]
004f7be9  XOR EAX,EBP
004f7beb  PUSH EAX
004f7bec  LEA EAX,[EBP + -0xc]
004f7bef  MOV FS:[0x0],EAX
004f7bf5  MOV dword ptr [EBP + -0x64],ECX
004f7bf8  MOV dword ptr [EBP + -0x4],0x0
004f7bff  MOV EAX,dword ptr [EBP + -0x64]
004f7c02  MOVZX ECX,byte ptr [EAX + 0x1]
004f7c06  TEST ECX,ECX
004f7c08  JNZ 0x004f7c21
004f7c0a  PUSH 0x420
004f7c0f  PUSH 0x6bfe08
004f7c14  PUSH 0x6bfe6c
004f7c19  CALL 0x005e9f20
004f7c1e  ADD ESP,0xc
004f7c21  MOV EAX,dword ptr [EBP + -0x64]
004f7c24  MOVZX ECX,byte ptr [EAX + 0x3]
004f7c28  TEST ECX,ECX
004f7c2a  JNZ 0x004f7c43
004f7c2c  PUSH 0x421
004f7c31  PUSH 0x6bfe08
004f7c36  PUSH 0x6c0138
004f7c3b  CALL 0x005e9f20
004f7c40  ADD ESP,0xc
004f7c43  MOV ECX,dword ptr [EBP + -0x64]
004f7c46  CALL 0x004f6e70
004f7c4b  MOVSX EAX,AX
004f7c4e  CMP EAX,-0x1
004f7c51  JZ 0x004f7c6a
004f7c53  PUSH 0x422
004f7c58  PUSH 0x6bfe08
004f7c5d  PUSH 0x6c027c
004f7c62  CALL 0x005e9f20
004f7c67  ADD ESP,0xc
004f7c6a  MOV EDX,dword ptr [EBP + -0x64]
004f7c6d  MOV byte ptr [EDX + 0x5],0x1
004f7c71  LEA ECX,[EBP + -0x34]
004f7c74  CALL 0x004a20d0
004f7c79  MOV byte ptr [EBP + -0x4],0x1
004f7c7d  PUSH 0x7913ff
004f7c82  PUSH 0x7913ff
004f7c87  PUSH 0x7913ff
004f7c8c  PUSH 0x7913ff
004f7c91  PUSH 0x7913ff
004f7c96  MOV EAX,[0x00791390]
004f7c9b  PUSH EAX
004f7c9c  LEA ECX,[EBP + -0x34]
004f7c9f  CALL 0x004a2100
004f7ca4  LEA ECX,[EBP + -0x14]
004f7ca7  CALL 0x004a20d0
004f7cac  MOV byte ptr [EBP + -0x4],0x2
004f7cb0  MOV ECX,dword ptr [EBP + 0x8]
004f7cb3  MOV dword ptr [EBP + -0x14],ECX
004f7cb6  MOV word ptr [EBP + -0x30],0x0
004f7cbc  MOV word ptr [EBP + -0x1c],0x0
004f7cc2  MOV word ptr [EBP + -0x24],0x0
004f7cc8  JMP 0x004f7cd6
004f7cca  MOV DX,word ptr [EBP + -0x24]
004f7cce  ADD DX,0x1
004f7cd2  MOV word ptr [EBP + -0x24],DX
004f7cd6  MOVSX EAX,word ptr [EBP + -0x24]
004f7cda  MOV ECX,dword ptr [EBP + -0x64]
004f7cdd  MOVSX EDX,word ptr [ECX + 0x6]
004f7ce1  CMP EAX,EDX
004f7ce3  JGE 0x004f7de7
004f7ce9  MOVSX EAX,word ptr [EBP + -0x24]
004f7ced  MOV ECX,dword ptr [EBP + -0x64]
004f7cf0  MOV EDX,dword ptr [ECX + 0x44]
004f7cf3  MOV byte ptr [EAX + EDX*0x1],0x0
004f7cf7  MOVSX EAX,word ptr [EBP + -0x24]
004f7cfb  MOV ECX,dword ptr [EBP + -0x64]
004f7cfe  MOV EDX,dword ptr [ECX + 0x48]
004f7d01  MOV byte ptr [EAX + EDX*0x1],0x0
004f7d05  MOVSX EAX,word ptr [EBP + -0x24]
004f7d09  MOV ECX,dword ptr [EBP + -0x64]
004f7d0c  MOV EDX,dword ptr [ECX + 0x30]
004f7d0f  MOVZX EAX,byte ptr [EDX + EAX*0x1]
004f7d13  TEST EAX,EAX
004f7d15  JNZ 0x004f7de2
004f7d1b  MOVSX ECX,word ptr [EBP + -0x24]
004f7d1f  MOV EDX,dword ptr [EBP + -0x64]
004f7d22  MOV EAX,dword ptr [EDX + 0x3c]
004f7d25  MOVZX ECX,byte ptr [EAX + ECX*0x1]
004f7d29  TEST ECX,ECX
004f7d2b  JZ 0x004f7de2
004f7d31  MOV DX,word ptr [EBP + -0x30]
004f7d35  ADD DX,0x1
004f7d39  MOV word ptr [EBP + -0x30],DX
004f7d3d  MOVSX EAX,word ptr [EBP + -0x24]
004f7d41  MOV ECX,dword ptr [EBP + -0x64]
004f7d44  MOV EDX,dword ptr [ECX + 0x84]
004f7d4a  CMP dword ptr [EDX + EAX*0x4],0x2
004f7d4e  JZ 0x004f7d7d
004f7d50  LEA EAX,[EBP + -0x34]
004f7d53  PUSH EAX
004f7d54  MOVSX ECX,word ptr [EBP + -0x24]
004f7d58  MOV EDX,dword ptr [EBP + -0x64]
004f7d5b  MOV EAX,dword ptr [EDX + 0x7c]
004f7d5e  LEA ECX,[EAX + ECX*0x4]
004f7d61  CALL 0x004a2440
004f7d66  MOVZX ECX,AL
004f7d69  TEST ECX,ECX
004f7d6b  JZ 0x004f7d7d
004f7d6d  MOVSX EDX,word ptr [EBP + -0x24]
004f7d71  MOV EAX,dword ptr [EBP + -0x64]
004f7d74  MOV ECX,dword ptr [EAX + 0x7c]
004f7d77  MOV EDX,dword ptr [ECX + EDX*0x4]
004f7d7a  MOV dword ptr [EBP + -0x34],EDX
004f7d7d  MOVSX EAX,word ptr [EBP + -0x24]
004f7d81  MOV ECX,dword ptr [EBP + -0x64]
004f7d84  MOV EDX,dword ptr [ECX + 0x84]
004f7d8a  CMP dword ptr [EDX + EAX*0x4],0x1
004f7d8e  JZ 0x004f7dc3
004f7d90  LEA EAX,[EBP + -0x14]
004f7d93  PUSH EAX
004f7d94  MOVSX ECX,word ptr [EBP + -0x24]
004f7d98  MOV EDX,dword ptr [EBP + -0x64]
004f7d9b  MOV EAX,dword ptr [EDX + 0x80]
004f7da1  LEA ECX,[EAX + ECX*0x4]
004f7da4  CALL 0x004a2550
004f7da9  MOVZX ECX,AL
004f7dac  TEST ECX,ECX
004f7dae  JZ 0x004f7dc3
004f7db0  MOVSX EDX,word ptr [EBP + -0x24]
004f7db4  MOV EAX,dword ptr [EBP + -0x64]
004f7db7  MOV ECX,dword ptr [EAX + 0x80]
004f7dbd  MOV EDX,dword ptr [ECX + EDX*0x4]
004f7dc0  MOV dword ptr [EBP + -0x14],EDX
004f7dc3  MOVSX EAX,word ptr [EBP + -0x24]
004f7dc7  MOV ECX,dword ptr [EBP + -0x64]
004f7dca  MOV EDX,dword ptr [ECX + 0x84]
004f7dd0  CMP dword ptr [EDX + EAX*0x4],0x3
004f7dd4  JNZ 0x004f7de2
004f7dd6  MOV AX,word ptr [EBP + -0x1c]
004f7dda  ADD AX,0x1
004f7dde  MOV word ptr [EBP + -0x1c],AX
004f7de2  JMP 0x004f7cca
004f7de7  MOVSX ECX,word ptr [EBP + -0x1c]
004f7deb  TEST ECX,ECX
004f7ded  JLE 0x004f8023
004f7df3  MOVSX EDX,word ptr [EBP + -0x1c]
004f7df7  MOVSX EAX,word ptr [EBP + -0x30]
004f7dfb  CMP EDX,EAX
004f7dfd  JZ 0x004f8023
004f7e03  MOV word ptr [EBP + -0x24],0x0
004f7e09  JMP 0x004f7e17
004f7e0b  MOV CX,word ptr [EBP + -0x24]
004f7e0f  ADD CX,0x1
004f7e13  MOV word ptr [EBP + -0x24],CX
004f7e17  MOVSX EDX,word ptr [EBP + -0x24]
004f7e1b  MOV EAX,dword ptr [EBP + -0x64]
004f7e1e  MOVSX ECX,word ptr [EAX + 0x6]
004f7e22  CMP EDX,ECX
004f7e24  JGE 0x004f7f17
004f7e2a  MOVSX EDX,word ptr [EBP + -0x24]
004f7e2e  MOV EAX,dword ptr [EBP + -0x64]
004f7e31  MOV ECX,dword ptr [EAX + 0x30]
004f7e34  MOVZX EDX,byte ptr [ECX + EDX*0x1]
004f7e38  TEST EDX,EDX
004f7e3a  JNZ 0x004f7f12
004f7e40  MOVSX EAX,word ptr [EBP + -0x24]
004f7e44  MOV ECX,dword ptr [EBP + -0x64]
004f7e47  MOV EDX,dword ptr [ECX + 0x3c]
004f7e4a  MOVZX EAX,byte ptr [EDX + EAX*0x1]
004f7e4e  TEST EAX,EAX
004f7e50  JZ 0x004f7f12
004f7e56  MOVSX ECX,word ptr [EBP + -0x24]
004f7e5a  MOV EDX,dword ptr [EBP + -0x64]
004f7e5d  MOV EAX,dword ptr [EDX + 0x84]
004f7e63  CMP dword ptr [EAX + ECX*0x4],0x3
004f7e67  JNZ 0x004f7f12
004f7e6d  LEA ECX,[EBP + -0x34]
004f7e70  PUSH ECX
004f7e71  MOVSX EDX,word ptr [EBP + -0x24]
004f7e75  MOV EAX,dword ptr [EBP + -0x64]
004f7e78  MOV ECX,dword ptr [EAX + 0x7c]
004f7e7b  LEA ECX,[ECX + EDX*0x4]
004f7e7e  CALL 0x004a23c0
004f7e83  MOVZX EDX,AL
004f7e86  TEST EDX,EDX
004f7e88  JNZ 0x004f7eaa
004f7e8a  LEA EAX,[EBP + -0x14]
004f7e8d  PUSH EAX
004f7e8e  MOVSX ECX,word ptr [EBP + -0x24]
004f7e92  MOV EDX,dword ptr [EBP + -0x64]
004f7e95  MOV EAX,dword ptr [EDX + 0x80]
004f7e9b  LEA ECX,[EAX + ECX*0x4]
004f7e9e  CALL 0x004a23c0
004f7ea3  MOVZX ECX,AL
004f7ea6  TEST ECX,ECX
004f7ea8  JZ 0x004f7f12
004f7eaa  PUSH 0x7913ff
004f7eaf  PUSH 0x7913ff
004f7eb4  PUSH 0x7913ff
004f7eb9  PUSH 0x7913ff
004f7ebe  PUSH 0x7913ff
004f7ec3  MOV EDX,dword ptr [0x00791390]
004f7ec9  PUSH EDX
004f7eca  MOVSX EAX,word ptr [EBP + -0x24]
004f7ece  MOV ECX,dword ptr [EBP + -0x64]
004f7ed1  MOV EDX,dword ptr [ECX + 0x7c]
004f7ed4  LEA ECX,[EDX + EAX*0x4]
004f7ed7  CALL 0x004a2100
004f7edc  PUSH 0x7913ff
004f7ee1  PUSH 0x7913ff
004f7ee6  PUSH 0x7913ff
004f7eeb  PUSH 0x7913ff
004f7ef0  MOV EAX,[0x007913c8]
004f7ef5  PUSH EAX
004f7ef6  MOV ECX,dword ptr [0x007913cc]
004f7efc  PUSH ECX
004f7efd  MOVSX EDX,word ptr [EBP + -0x24]
004f7f01  MOV EAX,dword ptr [EBP + -0x64]
004f7f04  MOV ECX,dword ptr [EAX + 0x80]
004f7f0a  LEA ECX,[ECX + EDX*0x4]
004f7f0d  CALL 0x004a2100
004f7f12  JMP 0x004f7e0b
004f7f17  PUSH 0x7913ff
004f7f1c  PUSH 0x7913ff
004f7f21  PUSH 0x7913ff
004f7f26  PUSH 0x7913ff
004f7f2b  PUSH 0x7913ff
004f7f30  MOV EDX,dword ptr [0x00791390]
004f7f36  PUSH EDX
004f7f37  LEA ECX,[EBP + -0x34]
004f7f3a  CALL 0x004a2100
004f7f3f  MOV EAX,dword ptr [EBP + 0x8]
004f7f42  MOV dword ptr [EBP + -0x14],EAX
004f7f45  MOV word ptr [EBP + -0x24],0x0
004f7f4b  JMP 0x004f7f59
004f7f4d  MOV CX,word ptr [EBP + -0x24]
004f7f51  ADD CX,0x1
004f7f55  MOV word ptr [EBP + -0x24],CX
004f7f59  MOVSX EDX,word ptr [EBP + -0x24]
004f7f5d  MOV EAX,dword ptr [EBP + -0x64]
004f7f60  MOVSX ECX,word ptr [EAX + 0x6]
004f7f64  CMP EDX,ECX
004f7f66  JGE 0x004f8023
004f7f6c  MOVSX EDX,word ptr [EBP + -0x24]
004f7f70  MOV EAX,dword ptr [EBP + -0x64]
004f7f73  MOV ECX,dword ptr [EAX + 0x30]
004f7f76  MOVZX EDX,byte ptr [ECX + EDX*0x1]
004f7f7a  TEST EDX,EDX
004f7f7c  JNZ 0x004f801e
004f7f82  MOVSX EAX,word ptr [EBP + -0x24]
004f7f86  MOV ECX,dword ptr [EBP + -0x64]
004f7f89  MOV EDX,dword ptr [ECX + 0x3c]
004f7f8c  MOVZX EAX,byte ptr [EDX + EAX*0x1]
004f7f90  TEST EAX,EAX
004f7f92  JZ 0x004f801e
004f7f98  MOVSX ECX,word ptr [EBP + -0x24]
004f7f9c  MOV EDX,dword ptr [EBP + -0x64]
004f7f9f  MOV EAX,dword ptr [EDX + 0x84]
004f7fa5  CMP dword ptr [EAX + ECX*0x4],0x2
004f7fa9  JZ 0x004f7fd8
004f7fab  LEA ECX,[EBP + -0x34]
004f7fae  PUSH ECX
004f7faf  MOVSX EDX,word ptr [EBP + -0x24]
004f7fb3  MOV EAX,dword ptr [EBP + -0x64]
004f7fb6  MOV ECX,dword ptr [EAX + 0x7c]
004f7fb9  LEA ECX,[ECX + EDX*0x4]
004f7fbc  CALL 0x004a2440
004f7fc1  MOVZX EDX,AL
004f7fc4  TEST EDX,EDX
004f7fc6  JZ 0x004f7fd8
004f7fc8  MOVSX EAX,word ptr [EBP + -0x24]
004f7fcc  MOV ECX,dword ptr [EBP + -0x64]
004f7fcf  MOV EDX,dword ptr [ECX + 0x7c]
004f7fd2  MOV EAX,dword ptr [EDX + EAX*0x4]
004f7fd5  MOV dword ptr [EBP + -0x34],EAX
004f7fd8  MOVSX ECX,word ptr [EBP + -0x24]
004f7fdc  MOV EDX,dword ptr [EBP + -0x64]
004f7fdf  MOV EAX,dword ptr [EDX + 0x84]
004f7fe5  CMP dword ptr [EAX + ECX*0x4],0x1
004f7fe9  JZ 0x004f801e
004f7feb  LEA ECX,[EBP + -0x14]
004f7fee  PUSH ECX
004f7fef  MOVSX EDX,word ptr [EBP + -0x24]
004f7ff3  MOV EAX,dword ptr [EBP + -0x64]
004f7ff6  MOV ECX,dword ptr [EAX + 0x80]
004f7ffc  LEA ECX,[ECX + EDX*0x4]
004f7fff  CALL 0x004a2550
004f8004  MOVZX EDX,AL
004f8007  TEST EDX,EDX
004f8009  JZ 0x004f801e
004f800b  MOVSX EAX,word ptr [EBP + -0x24]
004f800f  MOV ECX,dword ptr [EBP + -0x64]
004f8012  MOV EDX,dword ptr [ECX + 0x80]
004f8018  MOV EAX,dword ptr [EDX + EAX*0x4]
004f801b  MOV dword ptr [EBP + -0x14],EAX
004f801e  JMP 0x004f7f4d
004f8023  MOV word ptr [EBP + -0x10],0x0
004f8029  MOV word ptr [EBP + -0x2c],0x0
004f802f  MOV word ptr [EBP + -0x18],0xffff
004f8035  MOV word ptr [EBP + -0x28],0xffff
004f803b  MOV word ptr [EBP + -0x24],0x0
004f8041  JMP 0x004f804f
004f8043  MOV CX,word ptr [EBP + -0x24]
004f8047  ADD CX,0x1
004f804b  MOV word ptr [EBP + -0x24],CX
004f804f  MOVSX EDX,word ptr [EBP + -0x24]
004f8053  MOV EAX,dword ptr [EBP + -0x64]
004f8056  MOVSX ECX,word ptr [EAX + 0x6]
004f805a  CMP EDX,ECX
004f805c  JGE 0x004f81bc
004f8062  MOVSX EDX,word ptr [EBP + -0x24]
004f8066  MOV EAX,dword ptr [EBP + -0x64]
004f8069  MOV ECX,dword ptr [EAX + 0x30]
004f806c  MOVZX EDX,byte ptr [ECX + EDX*0x1]
004f8070  TEST EDX,EDX
004f8072  JNZ 0x004f81b7
004f8078  MOVSX EAX,word ptr [EBP + -0x24]
004f807c  MOV ECX,dword ptr [EBP + -0x64]
004f807f  MOV EDX,dword ptr [ECX + 0x3c]
004f8082  MOVZX EAX,byte ptr [EDX + EAX*0x1]
004f8086  TEST EAX,EAX
004f8088  JZ 0x004f81b7
004f808e  LEA ECX,[EBP + -0x34]
004f8091  PUSH ECX
004f8092  MOVSX EDX,word ptr [EBP + -0x24]
004f8096  MOV EAX,dword ptr [EBP + -0x64]
004f8099  MOV ECX,dword ptr [EAX + 0x7c]
004f809c  LEA ECX,[ECX + EDX*0x4]
004f809f  CALL 0x004a2340
004f80a4  MOVZX EDX,AL
004f80a7  TEST EDX,EDX
004f80a9  JZ 0x004f80e5
004f80ab  MOVSX EAX,word ptr [EBP + -0x24]
004f80af  MOV ECX,dword ptr [EBP + -0x64]
004f80b2  MOV EDX,dword ptr [ECX + 0x84]
004f80b8  CMP dword ptr [EDX + EAX*0x4],0x0
004f80bc  JZ 0x004f80d1
004f80be  MOVSX EAX,word ptr [EBP + -0x24]
004f80c2  MOV ECX,dword ptr [EBP + -0x64]
004f80c5  MOV EDX,dword ptr [ECX + 0x84]
004f80cb  CMP dword ptr [EDX + EAX*0x4],0x1
004f80cf  JNZ 0x004f80e5
004f80d1  MOV AX,word ptr [EBP + -0x10]
004f80d5  ADD AX,0x1
004f80d9  MOV word ptr [EBP + -0x10],AX
004f80dd  MOV CX,word ptr [EBP + -0x24]
004f80e1  MOV word ptr [EBP + -0x18],CX
004f80e5  LEA EDX,[EBP + -0x14]
004f80e8  PUSH EDX
004f80e9  MOVSX EAX,word ptr [EBP + -0x24]
004f80ed  MOV ECX,dword ptr [EBP + -0x64]
004f80f0  MOV EDX,dword ptr [ECX + 0x80]
004f80f6  LEA ECX,[EDX + EAX*0x4]
004f80f9  CALL 0x004a2340
004f80fe  MOVZX EAX,AL
004f8101  TEST EAX,EAX
004f8103  JZ 0x004f813f
004f8105  MOVSX ECX,word ptr [EBP + -0x24]
004f8109  MOV EDX,dword ptr [EBP + -0x64]
004f810c  MOV EAX,dword ptr [EDX + 0x84]
004f8112  CMP dword ptr [EAX + ECX*0x4],0x0
004f8116  JZ 0x004f812b
004f8118  MOVSX ECX,word ptr [EBP + -0x24]
004f811c  MOV EDX,dword ptr [EBP + -0x64]
004f811f  MOV EAX,dword ptr [EDX + 0x84]
004f8125  CMP dword ptr [EAX + ECX*0x4],0x2
004f8129  JNZ 0x004f813f
004f812b  MOV CX,word ptr [EBP + -0x2c]
004f812f  ADD CX,0x1
004f8133  MOV word ptr [EBP + -0x2c],CX
004f8137  MOV DX,word ptr [EBP + -0x24]
004f813b  MOV word ptr [EBP + -0x28],DX
004f813f  LEA EAX,[EBP + -0x34]
004f8142  PUSH EAX
004f8143  MOVSX ECX,word ptr [EBP + -0x24]
004f8147  MOV EDX,dword ptr [EBP + -0x64]
004f814a  MOV EAX,dword ptr [EDX + 0x7c]
004f814d  LEA ECX,[EAX + ECX*0x4]
004f8150  CALL 0x004a2340
004f8155  MOVZX ECX,AL
004f8158  TEST ECX,ECX
004f815a  JZ 0x004f81b7
004f815c  LEA EDX,[EBP + -0x14]
004f815f  PUSH EDX
004f8160  MOVSX EAX,word ptr [EBP + -0x24]
004f8164  MOV ECX,dword ptr [EBP + -0x64]
004f8167  MOV EDX,dword ptr [ECX + 0x80]
004f816d  LEA ECX,[EDX + EAX*0x4]
004f8170  CALL 0x004a2340
004f8175  MOVZX EAX,AL
004f8178  TEST EAX,EAX
004f817a  JZ 0x004f81b7
004f817c  MOVSX ECX,word ptr [EBP + -0x24]
004f8180  MOV EDX,dword ptr [EBP + -0x64]
004f8183  MOV EAX,dword ptr [EDX + 0x84]
004f8189  CMP dword ptr [EAX + ECX*0x4],0x3
004f818d  JNZ 0x004f81b7
004f818f  MOV CX,word ptr [EBP + -0x10]
004f8193  ADD CX,0x1
004f8197  MOV word ptr [EBP + -0x10],CX
004f819b  MOV DX,word ptr [EBP + -0x24]
004f819f  MOV word ptr [EBP + -0x18],DX
004f81a3  MOV AX,word ptr [EBP + -0x2c]
004f81a7  ADD AX,0x1
004f81ab  MOV word ptr [EBP + -0x2c],AX
004f81af  MOV CX,word ptr [EBP + -0x24]
004f81b3  MOV word ptr [EBP + -0x28],CX
004f81b7  JMP 0x004f8043
004f81bc  MOV EDX,dword ptr [EBP + -0x64]
004f81bf  MOV byte ptr [EDX + 0x4],0x1
004f81c3  MOV byte ptr [EBP + -0x1d],0x0
004f81c7  MOVSX EAX,word ptr [EBP + -0x2c]
004f81cb  TEST EAX,EAX
004f81cd  JNZ 0x004f8382
004f81d3  MOVSX ECX,word ptr [EBP + -0x10]
004f81d7  TEST ECX,ECX
004f81d9  JNZ 0x004f8382
004f81df  MOVSX EDX,word ptr [EBP + -0x18]
004f81e3  CMP EDX,-0x1
004f81e6  JZ 0x004f81ff
004f81e8  PUSH 0x493
004f81ed  PUSH 0x6bfe08
004f81f2  PUSH 0x6c0378
004f81f7  CALL 0x005e9f20
004f81fc  ADD ESP,0xc
004f81ff  MOVSX ECX,word ptr [EBP + -0x28]
004f8203  CMP ECX,-0x1
004f8206  JZ 0x004f821f
004f8208  PUSH 0x494
004f820d  PUSH 0x6bfe08
004f8212  PUSH 0x6c0360
004f8217  CALL 0x005e9f20
004f821c  ADD ESP,0xc
004f821f  MOV byte ptr [EBP + -0x1d],0x1
004f8223  MOV word ptr [EBP + -0x24],0x0
004f8229  JMP 0x004f8237
004f822b  MOV AX,word ptr [EBP + -0x24]
004f822f  ADD AX,0x1
004f8233  MOV word ptr [EBP + -0x24],AX
004f8237  MOVSX ECX,word ptr [EBP + -0x24]
004f823b  MOV EDX,dword ptr [EBP + -0x64]
004f823e  MOVSX EAX,word ptr [EDX + 0x6]
004f8242  CMP ECX,EAX
004f8244  JGE 0x004f8306
004f824a  MOVSX ECX,word ptr [EBP + -0x24]
004f824e  MOV EDX,dword ptr [EBP + -0x64]
004f8251  MOV EAX,dword ptr [EDX + 0x30]
004f8254  MOVZX ECX,byte ptr [EAX + ECX*0x1]
004f8258  TEST ECX,ECX
004f825a  JNZ 0x004f8301
004f8260  MOVSX EDX,word ptr [EBP + -0x24]
004f8264  MOV EAX,dword ptr [EBP + -0x64]
004f8267  MOV ECX,dword ptr [EAX + 0x3c]
004f826a  MOVZX EDX,byte ptr [ECX + EDX*0x1]
004f826e  TEST EDX,EDX
004f8270  JZ 0x004f8301
004f8276  LEA EAX,[EBP + -0x34]
004f8279  PUSH EAX
004f827a  MOVSX ECX,word ptr [EBP + -0x24]
004f827e  MOV EDX,dword ptr [EBP + -0x64]
004f8281  MOV EAX,dword ptr [EDX + 0x7c]
004f8284  LEA ECX,[EAX + ECX*0x4]
004f8287  CALL 0x004a2340
004f828c  MOVZX ECX,AL
004f828f  TEST ECX,ECX
004f8291  JZ 0x004f82ba
004f8293  MOVSX EDX,word ptr [EBP + -0x24]
004f8297  MOV EAX,dword ptr [EBP + -0x64]
004f829a  MOV ECX,dword ptr [EAX + 0x84]
004f82a0  CMP dword ptr [ECX + EDX*0x4],0x3
004f82a4  JNZ 0x004f82ba
004f82a6  MOV DX,word ptr [EBP + -0x10]
004f82aa  ADD DX,0x1
004f82ae  MOV word ptr [EBP + -0x10],DX
004f82b2  MOV AX,word ptr [EBP + -0x24]
004f82b6  MOV word ptr [EBP + -0x18],AX
004f82ba  LEA ECX,[EBP + -0x14]
004f82bd  PUSH ECX
004f82be  MOVSX EDX,word ptr [EBP + -0x24]
004f82c2  MOV EAX,dword ptr [EBP + -0x64]
004f82c5  MOV ECX,dword ptr [EAX + 0x80]
004f82cb  LEA ECX,[ECX + EDX*0x4]
004f82ce  CALL 0x004a2340
004f82d3  MOVZX EDX,AL
004f82d6  TEST EDX,EDX
004f82d8  JZ 0x004f8301
004f82da  MOVSX EAX,word ptr [EBP + -0x24]
004f82de  MOV ECX,dword ptr [EBP + -0x64]
004f82e1  MOV EDX,dword ptr [ECX + 0x84]
004f82e7  CMP dword ptr [EDX + EAX*0x4],0x3
004f82eb  JNZ 0x004f8301
004f82ed  MOV AX,word ptr [EBP + -0x2c]
004f82f1  ADD AX,0x1
004f82f5  MOV word ptr [EBP + -0x2c],AX
004f82f9  MOV CX,word ptr [EBP + -0x24]
004f82fd  MOV word ptr [EBP + -0x28],CX
004f8301  JMP 0x004f822b
004f8306  MOVSX EDX,word ptr [EBP + -0x18]
004f830a  TEST EDX,EDX
004f830c  JGE 0x004f8325
004f830e  PUSH 0x4a8
004f8313  PUSH 0x6bfe08
004f8318  PUSH 0x6c0348
004f831d  CALL 0x005e9f20
004f8322  ADD ESP,0xc
004f8325  MOVSX ECX,word ptr [EBP + -0x28]
004f8329  TEST ECX,ECX
004f832b  JGE 0x004f8344
004f832d  PUSH 0x4a9
004f8332  PUSH 0x6bfe08
004f8337  PUSH 0x6c0330
004f833c  CALL 0x005e9f20
004f8341  ADD ESP,0xc
004f8344  MOVSX EAX,word ptr [EBP + -0x10]
004f8348  TEST EAX,EAX
004f834a  JG 0x004f8363
004f834c  PUSH 0x4aa
004f8351  PUSH 0x6bfe08
004f8356  PUSH 0x6c0320
004f835b  CALL 0x005e9f20
004f8360  ADD ESP,0xc
004f8363  MOVSX EDX,word ptr [EBP + -0x2c]
004f8367  TEST EDX,EDX
004f8369  JG 0x004f8382
004f836b  PUSH 0x4ab
004f8370  PUSH 0x6bfe08
004f8375  PUSH 0x6c0310
004f837a  CALL 0x005e9f20
004f837f  ADD ESP,0xc
004f8382  MOVSX ECX,word ptr [EBP + -0x2c]
004f8386  TEST ECX,ECX
004f8388  JNZ 0x004f851f
004f838e  MOV ECX,dword ptr [EBP + -0x64]
004f8391  CALL 0x004f9580
004f8396  MOV dword ptr [EBP + -0x3c],EAX
004f8399  MOVSX ECX,word ptr [EBP + -0x10]
004f839d  MOV EAX,dword ptr [EBP + -0x3c]
004f83a0  CDQ
004f83a1  IDIV ECX
004f83a3  MOV dword ptr [EBP + -0x38],EDX
004f83a6  MOVSX ECX,word ptr [EBP + -0x10]
004f83aa  MOV EAX,dword ptr [EBP + -0x3c]
004f83ad  CDQ
004f83ae  IDIV ECX
004f83b0  MOV dword ptr [EBP + -0x3c],EAX
004f83b3  MOVSX EDX,word ptr [EBP + -0x18]
004f83b7  TEST EDX,EDX
004f83b9  JGE 0x004f83d2
004f83bb  PUSH 0x4b4
004f83c0  PUSH 0x6bfe08
004f83c5  PUSH 0x6c0348
004f83ca  CALL 0x005e9f20
004f83cf  ADD ESP,0xc
004f83d2  MOVSX ECX,word ptr [EBP + -0x18]
004f83d6  MOV EDX,dword ptr [EBP + -0x64]
004f83d9  MOV EAX,dword ptr [EDX + 0x44]
004f83dc  MOV byte ptr [ECX + EAX*0x1],0x1
004f83e0  MOVSX ECX,word ptr [EBP + -0x18]
004f83e4  MOV EDX,dword ptr [EBP + -0x64]
004f83e7  MOV EAX,dword ptr [EDX + 0x74]
004f83ea  MOV ECX,dword ptr [EAX + ECX*0x4]
004f83ed  ADD ECX,dword ptr [EBP + -0x3c]
004f83f0  MOVSX EDX,word ptr [EBP + -0x18]
004f83f4  MOV EAX,dword ptr [EBP + -0x64]
004f83f7  MOV EAX,dword ptr [EAX + 0x74]
004f83fa  MOV dword ptr [EAX + EDX*0x4],ECX
004f83fd  MOV CX,word ptr [EBP + -0x18]
004f8401  MOV word ptr [EBP + -0x40],CX
004f8405  MOVSX EDX,word ptr [EBP + -0x10]
004f8409  CMP EDX,0x1
004f840c  JLE 0x004f84fd
004f8412  MOV word ptr [EBP + -0x24],0x0
004f8418  JMP 0x004f8426
004f841a  MOV AX,word ptr [EBP + -0x24]
004f841e  ADD AX,0x1
004f8422  MOV word ptr [EBP + -0x24],AX
004f8426  MOVSX ECX,word ptr [EBP + -0x24]
004f842a  MOVSX EDX,word ptr [EBP + -0x18]
004f842e  CMP ECX,EDX
004f8430  JGE 0x004f84fd
004f8436  MOVSX EAX,word ptr [EBP + -0x24]
004f843a  MOV ECX,dword ptr [EBP + -0x64]
004f843d  MOV EDX,dword ptr [ECX + 0x30]
004f8440  MOVZX EAX,byte ptr [EDX + EAX*0x1]
004f8444  TEST EAX,EAX
004f8446  JNZ 0x004f84f8
004f844c  MOVSX ECX,word ptr [EBP + -0x24]
004f8450  MOV EDX,dword ptr [EBP + -0x64]
004f8453  MOV EAX,dword ptr [EDX + 0x3c]
004f8456  MOVZX ECX,byte ptr [EAX + ECX*0x1]
004f845a  TEST ECX,ECX
004f845c  JZ 0x004f84f8
004f8462  LEA EDX,[EBP + -0x34]
004f8465  PUSH EDX
004f8466  MOVSX EAX,word ptr [EBP + -0x24]
004f846a  MOV ECX,dword ptr [EBP + -0x64]
004f846d  MOV EDX,dword ptr [ECX + 0x7c]
004f8470  LEA ECX,[EDX + EAX*0x4]
004f8473  CALL 0x004a2340
004f8478  MOVZX EAX,AL
004f847b  TEST EAX,EAX
004f847d  JZ 0x004f84f8
004f847f  MOVSX ECX,word ptr [EBP + -0x24]
004f8483  MOV EDX,dword ptr [EBP + -0x64]
004f8486  MOV EAX,dword ptr [EDX + 0x84]
004f848c  CMP dword ptr [EAX + ECX*0x4],0x0
004f8490  JZ 0x004f84a5
004f8492  MOVSX ECX,word ptr [EBP + -0x24]
004f8496  MOV EDX,dword ptr [EBP + -0x64]
004f8499  MOV EAX,dword ptr [EDX + 0x84]
004f849f  CMP dword ptr [EAX + ECX*0x4],0x1
004f84a3  JNZ 0x004f84f8
004f84a5  MOVSX ECX,word ptr [EBP + -0x24]
004f84a9  MOV EDX,dword ptr [EBP + -0x64]
004f84ac  MOV EAX,dword ptr [EDX + 0x44]
004f84af  MOV byte ptr [ECX + EAX*0x1],0x1
004f84b3  MOVSX ECX,word ptr [EBP + -0x24]
004f84b7  MOV EDX,dword ptr [EBP + -0x64]
004f84ba  MOV EAX,dword ptr [EDX + 0x74]
004f84bd  MOV ECX,dword ptr [EAX + ECX*0x4]
004f84c0  ADD ECX,dword ptr [EBP + -0x3c]
004f84c3  MOVSX EDX,word ptr [EBP + -0x24]
004f84c7  MOV EAX,dword ptr [EBP + -0x64]
004f84ca  MOV EAX,dword ptr [EAX + 0x74]
004f84cd  MOV dword ptr [EAX + EDX*0x4],ECX
004f84d0  MOVSX ECX,word ptr [EBP + -0x24]
004f84d4  MOV EDX,dword ptr [EBP + -0x64]
004f84d7  MOV EAX,dword ptr [EDX + 0x4c]
004f84da  MOVSX ECX,word ptr [EAX + ECX*0x2]
004f84de  MOVSX EDX,word ptr [EBP + -0x40]
004f84e2  MOV EAX,dword ptr [EBP + -0x64]
004f84e5  MOV EAX,dword ptr [EAX + 0x4c]
004f84e8  MOVSX EDX,word ptr [EAX + EDX*0x2]
004f84ec  CMP ECX,EDX
004f84ee  JLE 0x004f84f8
004f84f0  MOV AX,word ptr [EBP + -0x24]
004f84f4  MOV word ptr [EBP + -0x40],AX
004f84f8  JMP 0x004f841a
004f84fd  MOVSX ECX,word ptr [EBP + -0x40]
004f8501  MOV EDX,dword ptr [EBP + -0x64]
004f8504  MOV EAX,dword ptr [EDX + 0x74]
004f8507  MOV ECX,dword ptr [EAX + ECX*0x4]
004f850a  ADD ECX,dword ptr [EBP + -0x38]
004f850d  MOVSX EDX,word ptr [EBP + -0x40]
004f8511  MOV EAX,dword ptr [EBP + -0x64]
004f8514  MOV EAX,dword ptr [EAX + 0x74]
004f8517  MOV dword ptr [EAX + EDX*0x4],ECX
004f851a  JMP 0x004f8bf1
004f851f  MOVSX ECX,word ptr [EBP + -0x10]
004f8523  TEST ECX,ECX
004f8525  JNZ 0x004f86bf
004f852b  MOV ECX,dword ptr [EBP + -0x64]
004f852e  CALL 0x004f9580
004f8533  MOV dword ptr [EBP + -0x44],EAX
004f8536  MOVSX ECX,word ptr [EBP + -0x2c]
004f853a  MOV EAX,dword ptr [EBP + -0x44]
004f853d  CDQ
004f853e  IDIV ECX
004f8540  MOV dword ptr [EBP + -0x48],EDX
004f8543  MOVSX ECX,word ptr [EBP + -0x2c]
004f8547  MOV EAX,dword ptr [EBP + -0x44]
004f854a  CDQ
004f854b  IDIV ECX
004f854d  MOV dword ptr [EBP + -0x44],EAX
004f8550  MOVSX EDX,word ptr [EBP + -0x28]
004f8554  TEST EDX,EDX
004f8556  JGE 0x004f856f
004f8558  PUSH 0x4d2
004f855d  PUSH 0x6bfe08
004f8562  PUSH 0x6c0330
004f8567  CALL 0x005e9f20
004f856c  ADD ESP,0xc
004f856f  MOVSX ECX,word ptr [EBP + -0x28]
004f8573  MOV EDX,dword ptr [EBP + -0x64]
004f8576  MOV EAX,dword ptr [EDX + 0x48]
004f8579  MOV byte ptr [ECX + EAX*0x1],0x1
004f857d  MOVSX ECX,word ptr [EBP + -0x28]
004f8581  MOV EDX,dword ptr [EBP + -0x64]
004f8584  MOV EAX,dword ptr [EDX + 0x78]
004f8587  MOV ECX,dword ptr [EAX + ECX*0x4]
004f858a  ADD ECX,dword ptr [EBP + -0x44]
004f858d  MOVSX EDX,word ptr [EBP + -0x28]
004f8591  MOV EAX,dword ptr [EBP + -0x64]
004f8594  MOV EAX,dword ptr [EAX + 0x78]
004f8597  MOV dword ptr [EAX + EDX*0x4],ECX
004f859a  MOV CX,word ptr [EBP + -0x28]
004f859e  MOV word ptr [EBP + -0x4c],CX
004f85a2  MOVSX EDX,word ptr [EBP + -0x2c]
004f85a6  CMP EDX,0x1
004f85a9  JLE 0x004f869d
004f85af  MOV word ptr [EBP + -0x24],0x0
004f85b5  JMP 0x004f85c3
004f85b7  MOV AX,word ptr [EBP + -0x24]
004f85bb  ADD AX,0x1
004f85bf  MOV word ptr [EBP + -0x24],AX
004f85c3  MOVSX ECX,word ptr [EBP + -0x24]
004f85c7  MOVSX EDX,word ptr [EBP + -0x28]
004f85cb  CMP ECX,EDX
004f85cd  JGE 0x004f869d
004f85d3  MOVSX EAX,word ptr [EBP + -0x24]
004f85d7  MOV ECX,dword ptr [EBP + -0x64]
004f85da  MOV EDX,dword ptr [ECX + 0x30]
004f85dd  MOVZX EAX,byte ptr [EDX + EAX*0x1]
004f85e1  TEST EAX,EAX
004f85e3  JNZ 0x004f8698
004f85e9  MOVSX ECX,word ptr [EBP + -0x24]
004f85ed  MOV EDX,dword ptr [EBP + -0x64]
004f85f0  MOV EAX,dword ptr [EDX + 0x3c]
004f85f3  MOVZX ECX,byte ptr [EAX + ECX*0x1]
004f85f7  TEST ECX,ECX
004f85f9  JZ 0x004f8698
004f85ff  LEA EDX,[EBP + -0x14]
004f8602  PUSH EDX
004f8603  MOVSX EAX,word ptr [EBP + -0x24]
004f8607  MOV ECX,dword ptr [EBP + -0x64]
004f860a  MOV EDX,dword ptr [ECX + 0x80]
004f8610  LEA ECX,[EDX + EAX*0x4]
004f8613  CALL 0x004a2340
004f8618  MOVZX EAX,AL
004f861b  TEST EAX,EAX
004f861d  JZ 0x004f8698
004f861f  MOVSX ECX,word ptr [EBP + -0x24]
004f8623  MOV EDX,dword ptr [EBP + -0x64]
004f8626  MOV EAX,dword ptr [EDX + 0x84]
004f862c  CMP dword ptr [EAX + ECX*0x4],0x0
004f8630  JZ 0x004f8645
004f8632  MOVSX ECX,word ptr [EBP + -0x24]
004f8636  MOV EDX,dword ptr [EBP + -0x64]
004f8639  MOV EAX,dword ptr [EDX + 0x84]
004f863f  CMP dword ptr [EAX + ECX*0x4],0x2
004f8643  JNZ 0x004f8698
004f8645  MOVSX ECX,word ptr [EBP + -0x24]
004f8649  MOV EDX,dword ptr [EBP + -0x64]
004f864c  MOV EAX,dword ptr [EDX + 0x48]
004f864f  MOV byte ptr [ECX + EAX*0x1],0x1
004f8653  MOVSX ECX,word ptr [EBP + -0x24]
004f8657  MOV EDX,dword ptr [EBP + -0x64]
004f865a  MOV EAX,dword ptr [EDX + 0x78]
004f865d  MOV ECX,dword ptr [EAX + ECX*0x4]
004f8660  ADD ECX,dword ptr [EBP + -0x44]
004f8663  MOVSX EDX,word ptr [EBP + -0x24]
004f8667  MOV EAX,dword ptr [EBP + -0x64]
004f866a  MOV EAX,dword ptr [EAX + 0x78]
004f866d  MOV dword ptr [EAX + EDX*0x4],ECX
004f8670  MOVSX ECX,word ptr [EBP + -0x24]
004f8674  MOV EDX,dword ptr [EBP + -0x64]
004f8677  MOV EAX,dword ptr [EDX + 0x4c]
004f867a  MOVSX ECX,word ptr [EAX + ECX*0x2]
004f867e  MOVSX EDX,word ptr [EBP + -0x4c]
004f8682  MOV EAX,dword ptr [EBP + -0x64]
004f8685  MOV EAX,dword ptr [EAX + 0x4c]
004f8688  MOVSX EDX,word ptr [EAX + EDX*0x2]
004f868c  CMP ECX,EDX
004f868e  JLE 0x004f8698
004f8690  MOV AX,word ptr [EBP + -0x24]
004f8694  MOV word ptr [EBP + -0x4c],AX
004f8698  JMP 0x004f85b7
004f869d  MOVSX ECX,word ptr [EBP + -0x4c]
004f86a1  MOV EDX,dword ptr [EBP + -0x64]
004f86a4  MOV EAX,dword ptr [EDX + 0x78]
004f86a7  MOV ECX,dword ptr [EAX + ECX*0x4]
004f86aa  ADD ECX,dword ptr [EBP + -0x48]
004f86ad  MOVSX EDX,word ptr [EBP + -0x4c]
004f86b1  MOV EAX,dword ptr [EBP + -0x64]
004f86b4  MOV EAX,dword ptr [EAX + 0x78]
004f86b7  MOV dword ptr [EAX + EDX*0x4],ECX
004f86ba  JMP 0x004f8bf1
004f86bf  MOV ECX,dword ptr [EBP + -0x64]
004f86c2  CALL 0x004f9580
004f86c7  MOV dword ptr [EBP + -0x60],EAX
004f86ca  MOV EAX,dword ptr [EBP + -0x60]
004f86cd  CDQ
004f86ce  SUB EAX,EDX
004f86d0  SAR EAX,0x1
004f86d2  MOV dword ptr [EBP + -0x58],EAX
004f86d5  MOV ECX,dword ptr [EBP + -0x58]
004f86d8  MOV dword ptr [EBP + -0x50],ECX
004f86db  MOV EDX,dword ptr [EBP + -0x60]
004f86de  AND EDX,0x80000001
004f86e4  JNS 0x004f86eb
004f86e6  DEC EDX
004f86e7  OR EDX,0xfffffffe
004f86ea  INC EDX
004f86eb  MOV dword ptr [EBP + -0x54],EDX
004f86ee  MOVSX ECX,word ptr [EBP + -0x2c]
004f86f2  MOV EAX,dword ptr [EBP + -0x50]
004f86f5  CDQ
004f86f6  IDIV ECX
004f86f8  ADD EDX,dword ptr [EBP + -0x54]
004f86fb  MOV dword ptr [EBP + -0x54],EDX
004f86fe  MOVSX ECX,word ptr [EBP + -0x2c]
004f8702  MOV EAX,dword ptr [EBP + -0x50]
004f8705  CDQ
004f8706  IDIV ECX
004f8708  MOV dword ptr [EBP + -0x50],EAX
004f870b  MOVSX EDX,word ptr [EBP + -0x10]
004f870f  CMP EDX,0x1
004f8712  JZ 0x004f871d
004f8714  MOVSX EAX,word ptr [EBP + -0x2c]
004f8718  CMP EAX,0x1
004f871b  JZ 0x004f8728
004f871d  MOV ECX,dword ptr [EBP + -0x58]
004f8720  ADD ECX,dword ptr [EBP + -0x54]
004f8723  MOV dword ptr [EBP + -0x58],ECX
004f8726  JMP 0x004f8731
004f8728  MOV EDX,dword ptr [EBP + -0x50]
004f872b  ADD EDX,dword ptr [EBP + -0x54]
004f872e  MOV dword ptr [EBP + -0x50],EDX
004f8731  MOVSX ECX,word ptr [EBP + -0x10]
004f8735  MOV EAX,dword ptr [EBP + -0x58]
004f8738  CDQ
004f8739  IDIV ECX
004f873b  MOV dword ptr [EBP + -0x54],EDX
004f873e  MOVSX ECX,word ptr [EBP + -0x10]
004f8742  MOV EAX,dword ptr [EBP + -0x58]
004f8745  CDQ
004f8746  IDIV ECX
004f8748  MOV dword ptr [EBP + -0x58],EAX
004f874b  MOVSX EDX,word ptr [EBP + -0x18]
004f874f  TEST EDX,EDX
004f8751  JGE 0x004f876a
004f8753  PUSH 0x4f9
004f8758  PUSH 0x6bfe08
004f875d  PUSH 0x6c0348
004f8762  CALL 0x005e9f20
004f8767  ADD ESP,0xc
004f876a  MOVSX ECX,word ptr [EBP + -0x18]
004f876e  MOV EDX,dword ptr [EBP + -0x64]
004f8771  MOV EAX,dword ptr [EDX + 0x44]
004f8774  MOV byte ptr [ECX + EAX*0x1],0x1
004f8778  MOVSX ECX,word ptr [EBP + -0x18]
004f877c  MOV EDX,dword ptr [EBP + -0x64]
004f877f  MOV EAX,dword ptr [EDX + 0x74]
004f8782  MOV ECX,dword ptr [EAX + ECX*0x4]
004f8785  ADD ECX,dword ptr [EBP + -0x58]
004f8788  MOVSX EDX,word ptr [EBP + -0x18]
004f878c  MOV EAX,dword ptr [EBP + -0x64]
004f878f  MOV EAX,dword ptr [EAX + 0x74]
004f8792  MOV dword ptr [EAX + EDX*0x4],ECX
004f8795  MOV CX,word ptr [EBP + -0x18]
004f8799  MOV word ptr [EBP + -0x5c],CX
004f879d  MOVSX EDX,word ptr [EBP + -0x10]
004f87a1  CMP EDX,0x1
004f87a4  JLE 0x004f89d0
004f87aa  MOV word ptr [EBP + -0x24],0x0
004f87b0  JMP 0x004f87be
004f87b2  MOV AX,word ptr [EBP + -0x24]
004f87b6  ADD AX,0x1
004f87ba  MOV word ptr [EBP + -0x24],AX
004f87be  MOVSX ECX,word ptr [EBP + -0x24]
004f87c2  MOVSX EDX,word ptr [EBP + -0x18]
004f87c6  CMP ECX,EDX
004f87c8  JGE 0x004f89d0
004f87ce  MOVSX EAX,word ptr [EBP + -0x24]
004f87d2  MOV ECX,dword ptr [EBP + -0x64]
004f87d5  MOV EDX,dword ptr [ECX + 0x30]
004f87d8  MOVZX EAX,byte ptr [EDX + EAX*0x1]
004f87dc  TEST EAX,EAX
004f87de  JNZ 0x004f89cb
004f87e4  MOVSX ECX,word ptr [EBP + -0x24]
004f87e8  MOV EDX,dword ptr [EBP + -0x64]
004f87eb  MOV EAX,dword ptr [EDX + 0x3c]
004f87ee  MOVZX ECX,byte ptr [EAX + ECX*0x1]
004f87f2  TEST ECX,ECX
004f87f4  JZ 0x004f89cb
004f87fa  MOVZX EDX,byte ptr [EBP + -0x1d]
004f87fe  TEST EDX,EDX
004f8800  JNZ 0x004f8948
004f8806  LEA EAX,[EBP + -0x34]
004f8809  PUSH EAX
004f880a  MOVSX ECX,word ptr [EBP + -0x24]
004f880e  MOV EDX,dword ptr [EBP + -0x64]
004f8811  MOV EAX,dword ptr [EDX + 0x7c]
004f8814  LEA ECX,[EAX + ECX*0x4]
004f8817  CALL 0x004a2340
004f881c  MOVZX ECX,AL
004f881f  TEST ECX,ECX
004f8821  JZ 0x004f889c
004f8823  MOVSX EDX,word ptr [EBP + -0x24]
004f8827  MOV EAX,dword ptr [EBP + -0x64]
004f882a  MOV ECX,dword ptr [EAX + 0x84]
004f8830  CMP dword ptr [ECX + EDX*0x4],0x0
004f8834  JZ 0x004f8849
004f8836  MOVSX EDX,word ptr [EBP + -0x24]
004f883a  MOV EAX,dword ptr [EBP + -0x64]
004f883d  MOV ECX,dword ptr [EAX + 0x84]
004f8843  CMP dword ptr [ECX + EDX*0x4],0x1
004f8847  JNZ 0x004f889c
004f8849  MOVSX EDX,word ptr [EBP + -0x24]
004f884d  MOV EAX,dword ptr [EBP + -0x64]
004f8850  MOV ECX,dword ptr [EAX + 0x44]
004f8853  MOV byte ptr [EDX + ECX*0x1],0x1
004f8857  MOVSX EDX,word ptr [EBP + -0x24]
004f885b  MOV EAX,dword ptr [EBP + -0x64]
004f885e  MOV ECX,dword ptr [EAX + 0x74]
004f8861  MOV EDX,dword ptr [ECX + EDX*0x4]
004f8864  ADD EDX,dword ptr [EBP + -0x58]
004f8867  MOVSX EAX,word ptr [EBP + -0x24]
004f886b  MOV ECX,dword ptr [EBP + -0x64]
004f886e  MOV ECX,dword ptr [ECX + 0x74]
004f8871  MOV dword ptr [ECX + EAX*0x4],EDX
004f8874  MOVSX EDX,word ptr [EBP + -0x24]
004f8878  MOV EAX,dword ptr [EBP + -0x64]
004f887b  MOV ECX,dword ptr [EAX + 0x4c]
004f887e  MOVSX EDX,word ptr [ECX + EDX*0x2]
004f8882  MOVSX EAX,word ptr [EBP + -0x5c]
004f8886  MOV ECX,dword ptr [EBP + -0x64]
004f8889  MOV ECX,dword ptr [ECX + 0x4c]
004f888c  MOVSX EAX,word ptr [ECX + EAX*0x2]
004f8890  CMP EDX,EAX
004f8892  JLE 0x004f889c
004f8894  MOV CX,word ptr [EBP + -0x24]
004f8898  MOV word ptr [EBP + -0x5c],CX
004f889c  LEA EDX,[EBP + -0x34]
004f889f  PUSH EDX
004f88a0  MOVSX EAX,word ptr [EBP + -0x24]
004f88a4  MOV ECX,dword ptr [EBP + -0x64]
004f88a7  MOV EDX,dword ptr [ECX + 0x7c]
004f88aa  LEA ECX,[EDX + EAX*0x4]
004f88ad  CALL 0x004a2340
004f88b2  MOVZX EAX,AL
004f88b5  TEST EAX,EAX
004f88b7  JZ 0x004f8943
004f88bd  LEA ECX,[EBP + -0x14]
004f88c0  PUSH ECX
004f88c1  MOVSX EDX,word ptr [EBP + -0x24]
004f88c5  MOV EAX,dword ptr [EBP + -0x64]
004f88c8  MOV ECX,dword ptr [EAX + 0x80]
004f88ce  LEA ECX,[ECX + EDX*0x4]
004f88d1  CALL 0x004a2340
004f88d6  MOVZX EDX,AL
004f88d9  TEST EDX,EDX
004f88db  JZ 0x004f8943
004f88dd  MOVSX EAX,word ptr [EBP + -0x24]
004f88e1  MOV ECX,dword ptr [EBP + -0x64]
004f88e4  MOV EDX,dword ptr [ECX + 0x84]
004f88ea  CMP dword ptr [EDX + EAX*0x4],0x3
004f88ee  JNZ 0x004f8943
004f88f0  MOVSX EAX,word ptr [EBP + -0x24]
004f88f4  MOV ECX,dword ptr [EBP + -0x64]
004f88f7  MOV EDX,dword ptr [ECX + 0x44]
004f88fa  MOV byte ptr [EAX + EDX*0x1],0x1
004f88fe  MOVSX EAX,word ptr [EBP + -0x24]
004f8902  MOV ECX,dword ptr [EBP + -0x64]
004f8905  MOV EDX,dword ptr [ECX + 0x74]
004f8908  MOV EAX,dword ptr [EDX + EAX*0x4]
004f890b  ADD EAX,dword ptr [EBP + -0x58]
004f890e  MOVSX ECX,word ptr [EBP + -0x24]
004f8912  MOV EDX,dword ptr [EBP + -0x64]
004f8915  MOV EDX,dword ptr [EDX + 0x74]
004f8918  MOV dword ptr [EDX + ECX*0x4],EAX
004f891b  MOVSX EAX,word ptr [EBP + -0x24]
004f891f  MOV ECX,dword ptr [EBP + -0x64]
004f8922  MOV EDX,dword ptr [ECX + 0x4c]
004f8925  MOVSX EAX,word ptr [EDX + EAX*0x2]
004f8929  MOVSX ECX,word ptr [EBP + -0x5c]
004f892d  MOV EDX,dword ptr [EBP + -0x64]
004f8930  MOV EDX,dword ptr [EDX + 0x4c]
004f8933  MOVSX ECX,word ptr [EDX + ECX*0x2]
004f8937  CMP EAX,ECX
004f8939  JLE 0x004f8943
004f893b  MOV DX,word ptr [EBP + -0x24]
004f893f  MOV word ptr [EBP + -0x5c],DX
004f8943  JMP 0x004f89cb
004f8948  LEA EAX,[EBP + -0x34]
004f894b  PUSH EAX
004f894c  MOVSX ECX,word ptr [EBP + -0x24]
004f8950  MOV EDX,dword ptr [EBP + -0x64]
004f8953  MOV EAX,dword ptr [EDX + 0x7c]
004f8956  LEA ECX,[EAX + ECX*0x4]
004f8959  CALL 0x004a2340
004f895e  MOVZX ECX,AL
004f8961  TEST ECX,ECX
004f8963  JZ 0x004f89cb
004f8965  MOVSX EDX,word ptr [EBP + -0x24]
004f8969  MOV EAX,dword ptr [EBP + -0x64]
004f896c  MOV ECX,dword ptr [EAX + 0x84]
004f8972  CMP dword ptr [ECX + EDX*0x4],0x3
004f8976  JNZ 0x004f89cb
004f8978  MOVSX EDX,word ptr [EBP + -0x24]
004f897c  MOV EAX,dword ptr [EBP + -0x64]
004f897f  MOV ECX,dword ptr [EAX + 0x44]
004f8982  MOV byte ptr [EDX + ECX*0x1],0x1
004f8986  MOVSX EDX,word ptr [EBP + -0x24]
004f898a  MOV EAX,dword ptr [EBP + -0x64]
004f898d  MOV ECX,dword ptr [EAX + 0x74]
004f8990  MOV EDX,dword ptr [ECX + EDX*0x4]
004f8993  ADD EDX,dword ptr [EBP + -0x58]
004f8996  MOVSX EAX,word ptr [EBP + -0x24]
004f899a  MOV ECX,dword ptr [EBP + -0x64]
004f899d  MOV ECX,dword ptr [ECX + 0x74]
004f89a0  MOV dword ptr [ECX + EAX*0x4],EDX
004f89a3  MOVSX EDX,word ptr [EBP + -0x24]
004f89a7  MOV EAX,dword ptr [EBP + -0x64]
004f89aa  MOV ECX,dword ptr [EAX + 0x4c]
004f89ad  MOVSX EDX,word ptr [ECX + EDX*0x2]
004f89b1  MOVSX EAX,word ptr [EBP + -0x5c]
004f89b5  MOV ECX,dword ptr [EBP + -0x64]
004f89b8  MOV ECX,dword ptr [ECX + 0x4c]
004f89bb  MOVSX EAX,word ptr [ECX + EAX*0x2]
004f89bf  CMP EDX,EAX
004f89c1  JLE 0x004f89cb
004f89c3  MOV CX,word ptr [EBP + -0x24]
004f89c7  MOV word ptr [EBP + -0x5c],CX
004f89cb  JMP 0x004f87b2
004f89d0  MOVSX EDX,word ptr [EBP + -0x5c]
004f89d4  MOV EAX,dword ptr [EBP + -0x64]
004f89d7  MOV ECX,dword ptr [EAX + 0x74]
004f89da  MOV EDX,dword ptr [ECX + EDX*0x4]
004f89dd  ADD EDX,dword ptr [EBP + -0x54]
004f89e0  MOVSX EAX,word ptr [EBP + -0x5c]
004f89e4  MOV ECX,dword ptr [EBP + -0x64]
004f89e7  MOV ECX,dword ptr [ECX + 0x74]
004f89ea  MOV dword ptr [ECX + EAX*0x4],EDX
004f89ed  MOVSX EDX,word ptr [EBP + -0x28]
004f89f1  TEST EDX,EDX
004f89f3  JGE 0x004f8a0c
004f89f5  PUSH 0x528
004f89fa  PUSH 0x6bfe08
004f89ff  PUSH 0x6c0330
004f8a04  CALL 0x005e9f20
004f8a09  ADD ESP,0xc
004f8a0c  MOVSX ECX,word ptr [EBP + -0x28]
004f8a10  MOV EDX,dword ptr [EBP + -0x64]
004f8a13  MOV EAX,dword ptr [EDX + 0x48]
004f8a16  MOV byte ptr [ECX + EAX*0x1],0x1
004f8a1a  MOVSX ECX,word ptr [EBP + -0x28]
004f8a1e  MOV EDX,dword ptr [EBP + -0x64]
004f8a21  MOV EAX,dword ptr [EDX + 0x78]
004f8a24  MOV ECX,dword ptr [EAX + ECX*0x4]
004f8a27  ADD ECX,dword ptr [EBP + -0x50]
004f8a2a  MOVSX EDX,word ptr [EBP + -0x28]
004f8a2e  MOV EAX,dword ptr [EBP + -0x64]
004f8a31  MOV EAX,dword ptr [EAX + 0x78]
004f8a34  MOV dword ptr [EAX + EDX*0x4],ECX
004f8a37  MOVSX ECX,word ptr [EBP + -0x2c]
004f8a3b  CMP ECX,0x1
004f8a3e  JLE 0x004f8bf1
004f8a44  MOV word ptr [EBP + -0x24],0x0
004f8a4a  JMP 0x004f8a58
004f8a4c  MOV DX,word ptr [EBP + -0x24]
004f8a50  ADD DX,0x1
004f8a54  MOV word ptr [EBP + -0x24],DX
004f8a58  MOVSX EAX,word ptr [EBP + -0x24]
004f8a5c  MOVSX ECX,word ptr [EBP + -0x28]
004f8a60  CMP EAX,ECX
004f8a62  JGE 0x004f8bf1
004f8a68  MOVSX EDX,word ptr [EBP + -0x24]
004f8a6c  MOV EAX,dword ptr [EBP + -0x64]
004f8a6f  MOV ECX,dword ptr [EAX + 0x30]
004f8a72  MOVZX EDX,byte ptr [ECX + EDX*0x1]
004f8a76  TEST EDX,EDX
004f8a78  JNZ 0x004f8bec
004f8a7e  MOVSX EAX,word ptr [EBP + -0x24]
004f8a82  MOV ECX,dword ptr [EBP + -0x64]
004f8a85  MOV EDX,dword ptr [ECX + 0x3c]
004f8a88  MOVZX EAX,byte ptr [EDX + EAX*0x1]
004f8a8c  TEST EAX,EAX
004f8a8e  JZ 0x004f8bec
004f8a94  MOVZX ECX,byte ptr [EBP + -0x1d]
004f8a98  TEST ECX,ECX
004f8a9a  JNZ 0x004f8b8e
004f8aa0  LEA EDX,[EBP + -0x14]
004f8aa3  PUSH EDX
004f8aa4  MOVSX EAX,word ptr [EBP + -0x24]
004f8aa8  MOV ECX,dword ptr [EBP + -0x64]
004f8aab  MOV EDX,dword ptr [ECX + 0x80]
004f8ab1  LEA ECX,[EDX + EAX*0x4]
004f8ab4  CALL 0x004a2340
004f8ab9  MOVZX EAX,AL
004f8abc  TEST EAX,EAX
004f8abe  JZ 0x004f8b11
004f8ac0  MOVSX ECX,word ptr [EBP + -0x24]
004f8ac4  MOV EDX,dword ptr [EBP + -0x64]
004f8ac7  MOV EAX,dword ptr [EDX + 0x84]
004f8acd  CMP dword ptr [EAX + ECX*0x4],0x0
004f8ad1  JZ 0x004f8ae6
004f8ad3  MOVSX ECX,word ptr [EBP + -0x24]
004f8ad7  MOV EDX,dword ptr [EBP + -0x64]
004f8ada  MOV EAX,dword ptr [EDX + 0x84]
004f8ae0  CMP dword ptr [EAX + ECX*0x4],0x2
004f8ae4  JNZ 0x004f8b11
004f8ae6  MOVSX ECX,word ptr [EBP + -0x24]
004f8aea  MOV EDX,dword ptr [EBP + -0x64]
004f8aed  MOV EAX,dword ptr [EDX + 0x48]
004f8af0  MOV byte ptr [ECX + EAX*0x1],0x1
004f8af4  MOVSX ECX,word ptr [EBP + -0x24]
004f8af8  MOV EDX,dword ptr [EBP + -0x64]
004f8afb  MOV EAX,dword ptr [EDX + 0x78]
004f8afe  MOV ECX,dword ptr [EAX + ECX*0x4]
004f8b01  ADD ECX,dword ptr [EBP + -0x50]
004f8b04  MOVSX EDX,word ptr [EBP + -0x24]
004f8b08  MOV EAX,dword ptr [EBP + -0x64]
004f8b0b  MOV EAX,dword ptr [EAX + 0x78]
004f8b0e  MOV dword ptr [EAX + EDX*0x4],ECX
004f8b11  LEA ECX,[EBP + -0x34]
004f8b14  PUSH ECX
004f8b15  MOVSX EDX,word ptr [EBP + -0x24]
004f8b19  MOV EAX,dword ptr [EBP + -0x64]
004f8b1c  MOV ECX,dword ptr [EAX + 0x7c]
004f8b1f  LEA ECX,[ECX + EDX*0x4]
004f8b22  CALL 0x004a2340
004f8b27  MOVZX EDX,AL
004f8b2a  TEST EDX,EDX
004f8b2c  JZ 0x004f8b8c
004f8b2e  LEA EAX,[EBP + -0x14]
004f8b31  PUSH EAX
004f8b32  MOVSX ECX,word ptr [EBP + -0x24]
004f8b36  MOV EDX,dword ptr [EBP + -0x64]
004f8b39  MOV EAX,dword ptr [EDX + 0x80]
004f8b3f  LEA ECX,[EAX + ECX*0x4]
004f8b42  CALL 0x004a2340
004f8b47  MOVZX ECX,AL
004f8b4a  TEST ECX,ECX
004f8b4c  JZ 0x004f8b8c
004f8b4e  MOVSX EDX,word ptr [EBP + -0x24]
004f8b52  MOV EAX,dword ptr [EBP + -0x64]
004f8b55  MOV ECX,dword ptr [EAX + 0x84]
004f8b5b  CMP dword ptr [ECX + EDX*0x4],0x3
004f8b5f  JNZ 0x004f8b8c
004f8b61  MOVSX EDX,word ptr [EBP + -0x24]
004f8b65  MOV EAX,dword ptr [EBP + -0x64]
004f8b68  MOV ECX,dword ptr [EAX + 0x48]
004f8b6b  MOV byte ptr [EDX + ECX*0x1],0x1
004f8b6f  MOVSX EDX,word ptr [EBP + -0x24]
004f8b73  MOV EAX,dword ptr [EBP + -0x64]
004f8b76  MOV ECX,dword ptr [EAX + 0x78]
004f8b79  MOV EDX,dword ptr [ECX + EDX*0x4]
004f8b7c  ADD EDX,dword ptr [EBP + -0x50]
004f8b7f  MOVSX EAX,word ptr [EBP + -0x24]
004f8b83  MOV ECX,dword ptr [EBP + -0x64]
004f8b86  MOV ECX,dword ptr [ECX + 0x78]
004f8b89  MOV dword ptr [ECX + EAX*0x4],EDX
004f8b8c  JMP 0x004f8bec
004f8b8e  LEA EDX,[EBP + -0x14]
004f8b91  PUSH EDX
004f8b92  MOVSX EAX,word ptr [EBP + -0x24]
004f8b96  MOV ECX,dword ptr [EBP + -0x64]
004f8b99  MOV EDX,dword ptr [ECX + 0x80]
004f8b9f  LEA ECX,[EDX + EAX*0x4]
004f8ba2  CALL 0x004a2340
004f8ba7  MOVZX EAX,AL
004f8baa  TEST EAX,EAX
004f8bac  JZ 0x004f8bec
004f8bae  MOVSX ECX,word ptr [EBP + -0x24]
004f8bb2  MOV EDX,dword ptr [EBP + -0x64]
004f8bb5  MOV EAX,dword ptr [EDX + 0x84]
004f8bbb  CMP dword ptr [EAX + ECX*0x4],0x3
004f8bbf  JNZ 0x004f8bec
004f8bc1  MOVSX ECX,word ptr [EBP + -0x24]
004f8bc5  MOV EDX,dword ptr [EBP + -0x64]
004f8bc8  MOV EAX,dword ptr [EDX + 0x48]
004f8bcb  MOV byte ptr [ECX + EAX*0x1],0x1
004f8bcf  MOVSX ECX,word ptr [EBP + -0x24]
004f8bd3  MOV EDX,dword ptr [EBP + -0x64]
004f8bd6  MOV EAX,dword ptr [EDX + 0x78]
004f8bd9  MOV ECX,dword ptr [EAX + ECX*0x4]
004f8bdc  ADD ECX,dword ptr [EBP + -0x50]
004f8bdf  MOVSX EDX,word ptr [EBP + -0x24]
004f8be3  MOV EAX,dword ptr [EBP + -0x64]
004f8be6  MOV EAX,dword ptr [EAX + 0x78]
004f8be9  MOV dword ptr [EAX + EDX*0x4],ECX
004f8bec  JMP 0x004f8a4c
004f8bf1  MOV byte ptr [EBP + -0x4],0x1
004f8bf5  LEA ECX,[EBP + -0x14]
004f8bf8  CALL 0x004a20f0
004f8bfd  MOV byte ptr [EBP + -0x4],0x0
004f8c01  LEA ECX,[EBP + -0x34]
004f8c04  CALL 0x004a20f0
004f8c09  MOV dword ptr [EBP + -0x4],0xffffffff
004f8c10  LEA ECX,[EBP + 0x8]
004f8c13  CALL 0x004a20f0
004f8c18  MOV ECX,dword ptr [EBP + -0xc]
004f8c1b  MOV dword ptr FS:[0x0],ECX
004f8c22  POP ECX
004f8c23  MOV ESP,EBP
004f8c25  POP EBP
004f8c26  RET 0x4
