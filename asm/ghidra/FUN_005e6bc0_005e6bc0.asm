; FUN_005e6bc0  005e6bc0
005e6bc0  PUSH EBP
005e6bc1  MOV EBP,ESP
005e6bc3  PUSH -0x1
005e6bc5  PUSH 0x6a99b2
005e6bca  MOV EAX,FS:[0x0]
005e6bd0  PUSH EAX
005e6bd1  SUB ESP,0x1b8
005e6bd7  MOV EAX,[0x00781870]
005e6bdc  XOR EAX,EBP
005e6bde  MOV dword ptr [EBP + -0x20],EAX
005e6be1  PUSH EAX
005e6be2  LEA EAX,[EBP + -0xc]
005e6be5  MOV FS:[0x0],EAX
005e6beb  MOV dword ptr [EBP + 0xfffffe44],ECX
005e6bf1  MOV EAX,dword ptr [EBP + 0x8]
005e6bf4  ADD EAX,0x1
005e6bf7  AND EAX,0x80000001
005e6bfc  JNS 0x005e6c03
005e6bfe  DEC EAX
005e6bff  OR EAX,0xfffffffe
005e6c02  INC EAX
005e6c03  NEG EAX
005e6c05  SBB EAX,EAX
005e6c07  AND EAX,0xfffffebf
005e6c0c  ADD EAX,0x1bb
005e6c11  MOV dword ptr [EBP + -0x1c],EAX
005e6c14  MOV ECX,dword ptr [EBP + 0x8]
005e6c17  MOV EDX,dword ptr [ECX*0x4 + 0x75ebf0]
005e6c1e  MOV dword ptr [EBP + -0x18],EDX
005e6c21  MOV dword ptr [EBP + 0xfffffe6c],0x0
005e6c2b  MOV dword ptr [EBP + -0x14],0x0
005e6c32  MOV EAX,dword ptr [EBP + 0x8]
005e6c35  IMUL EAX,EAX,0xa
005e6c38  ADD EAX,0x64
005e6c3b  MOV dword ptr [EBP + -0x10],EAX
005e6c3e  PUSH 0x0
005e6c40  PUSH 0xff
005e6c45  PUSH 0x0
005e6c47  PUSH 0x1
005e6c49  MOV ECX,dword ptr [EBP + -0x18]
005e6c4c  SUB ECX,0x10
005e6c4f  PUSH ECX
005e6c50  MOV EDX,dword ptr [EBP + -0x1c]
005e6c53  SUB EDX,0x13
005e6c56  PUSH EDX
005e6c57  PUSH 0x30f0f1
005e6c5c  MOV EAX,dword ptr [EBP + 0x8]
005e6c5f  ADD EAX,0x2
005e6c62  PUSH EAX
005e6c63  PUSH 0x0
005e6c65  MOV ECX,dword ptr [EBP + 0xfffffe44]
005e6c6b  CALL 0x005f9ce0
005e6c70  MOV ECX,dword ptr [EBP + 0x8]
005e6c73  PUSH ECX
005e6c74  MOV ECX,dword ptr [0x0079506c]
005e6c7a  CALL 0x005e75f0
005e6c7f  MOV dword ptr [EBP + 0xfffffe70],EAX
005e6c85  PUSH -0x1
005e6c87  PUSH 0x30
005e6c89  PUSH 0x2
005e6c8b  MOV EDX,dword ptr [EBP + -0x18]
005e6c8e  ADD EDX,0x5
005e6c91  PUSH EDX
005e6c92  MOV EAX,dword ptr [EBP + -0x1c]
005e6c95  PUSH EAX
005e6c96  PUSH 0xf
005e6c98  PUSH 0xb4
005e6c9d  PUSH 0x1f
005e6c9f  MOV ECX,dword ptr [EBP + 0x8]
005e6ca2  PUSH ECX
005e6ca3  MOV ECX,dword ptr [0x0079506c]
005e6ca9  CALL 0x005e7610
005e6cae  PUSH EAX
005e6caf  MOV EDX,dword ptr [EBP + -0x10]
005e6cb2  PUSH EDX
005e6cb3  PUSH 0x0
005e6cb5  MOV ECX,dword ptr [EBP + 0xfffffe44]
005e6cbb  CALL 0x005fa5b0
005e6cc0  MOV EAX,dword ptr [EBP + 0xfffffe70]
005e6cc6  MOVSX ECX,byte ptr [EAX + 0x54]
005e6cca  NEG ECX
005e6ccc  SBB ECX,ECX
005e6cce  AND ECX,0xfffffffa
005e6cd1  ADD ECX,0x1b
005e6cd4  MOV dword ptr [EBP + -0x14],ECX
005e6cd7  PUSH -0x1
005e6cd9  PUSH 0x30
005e6cdb  PUSH 0x2
005e6cdd  MOV EDX,dword ptr [EBP + -0x18]
005e6ce0  ADD EDX,dword ptr [EBP + -0x14]
005e6ce3  PUSH EDX
005e6ce4  MOV EAX,dword ptr [EBP + -0x1c]
005e6ce7  PUSH EAX
005e6ce8  PUSH 0xf
005e6cea  PUSH 0xb4
005e6cef  PUSH 0x1f
005e6cf1  MOV ECX,dword ptr [EBP + 0xfffffe70]
005e6cf7  ADD ECX,0x4
005e6cfa  PUSH ECX
005e6cfb  MOV EDX,dword ptr [EBP + -0x10]
005e6cfe  ADD EDX,0x1
005e6d01  PUSH EDX
005e6d02  PUSH 0x0
005e6d04  MOV ECX,dword ptr [EBP + 0xfffffe44]
005e6d0a  CALL 0x005fa5b0
005e6d0f  MOV EAX,dword ptr [EBP + 0xfffffe70]
005e6d15  MOVSX ECX,byte ptr [EAX + 0x54]
005e6d19  NEG ECX
005e6d1b  SBB ECX,ECX
005e6d1d  AND ECX,0xfffffffa
005e6d20  ADD ECX,0x29
005e6d23  MOV dword ptr [EBP + -0x14],ECX
005e6d26  MOV EDX,dword ptr [EBP + 0x8]
005e6d29  PUSH EDX
005e6d2a  MOV ECX,dword ptr [0x0079506c]
005e6d30  CALL 0x005e7630
005e6d35  TEST EAX,EAX
005e6d37  JNZ 0x005e6d5e
005e6d39  PUSH 0x1
005e6d3b  PUSH 0x1
005e6d3d  PUSH 0x1
005e6d3f  LEA EAX,[EBP + 0xfffffedc]
005e6d45  PUSH EAX
005e6d46  MOV ECX,dword ptr [EBP + 0xfffffe70]
005e6d4c  MOV EDX,dword ptr [ECX + 0x4c]
005e6d4f  PUSH EDX
005e6d50  MOV EAX,dword ptr [ECX + 0x48]
005e6d53  PUSH EAX
005e6d54  CALL 0x0064c8d0
005e6d59  ADD ESP,0x18
005e6d5c  JMP 0x005e6d7d
005e6d5e  MOV ECX,dword ptr [EBP + 0xfffffe70]
005e6d64  MOV EDX,dword ptr [ECX + 0x50]
005e6d67  PUSH EDX
005e6d68  PUSH 0x6b2828
005e6d6d  LEA EAX,[EBP + 0xfffffedc]
005e6d73  PUSH EAX
005e6d74  CALL dword ptr [0x006b2220]
005e6d7a  ADD ESP,0xc
005e6d7d  PUSH -0x1
005e6d7f  PUSH 0x30
005e6d81  PUSH 0x2
005e6d83  MOV ECX,dword ptr [EBP + -0x18]
005e6d86  ADD ECX,dword ptr [EBP + -0x14]
005e6d89  PUSH ECX
005e6d8a  MOV EDX,dword ptr [EBP + -0x1c]
005e6d8d  PUSH EDX
005e6d8e  PUSH 0xf
005e6d90  PUSH 0xb4
005e6d95  PUSH 0x1f
005e6d97  LEA EAX,[EBP + 0xfffffedc]
005e6d9d  PUSH EAX
005e6d9e  MOV ECX,dword ptr [EBP + -0x10]
005e6da1  ADD ECX,0x2
005e6da4  PUSH ECX
005e6da5  PUSH 0x0
005e6da7  MOV ECX,dword ptr [EBP + 0xfffffe44]
005e6dad  CALL 0x005fa5b0
005e6db2  MOV EDX,dword ptr [EBP + 0xfffffe70]
005e6db8  MOVSX EAX,byte ptr [EDX + 0x54]
005e6dbc  TEST EAX,EAX
005e6dbe  JZ 0x005e6e0b
005e6dc0  LEA ECX,[EBP + 0xfffffe74]
005e6dc6  PUSH ECX
005e6dc7  MOV EDX,dword ptr [EBP + 0x8]
005e6dca  PUSH EDX
005e6dcb  MOV ECX,dword ptr [0x0079506c]
005e6dd1  CALL 0x005e7650
005e6dd6  PUSH -0x1
005e6dd8  PUSH 0x30
005e6dda  PUSH 0x2
005e6ddc  MOV EAX,dword ptr [EBP + -0x18]
005e6ddf  ADD EAX,0x32
005e6de2  PUSH EAX
005e6de3  MOV ECX,dword ptr [EBP + -0x1c]
005e6de6  PUSH ECX
005e6de7  PUSH 0xf
005e6de9  PUSH 0xb4
005e6dee  PUSH 0x44
005e6df0  LEA EDX,[EBP + 0xfffffe74]
005e6df6  PUSH EDX
005e6df7  MOV EAX,dword ptr [EBP + -0x10]
005e6dfa  ADD EAX,0x3
005e6dfd  PUSH EAX
005e6dfe  PUSH 0x0
005e6e00  MOV ECX,dword ptr [EBP + 0xfffffe44]
005e6e06  CALL 0x005fa5b0
005e6e0b  PUSH -0x1
005e6e0d  PUSH 0x30
005e6e0f  PUSH 0x2
005e6e11  MOV ECX,dword ptr [EBP + -0x18]
005e6e14  ADD ECX,0x41
005e6e17  PUSH ECX
005e6e18  MOV EDX,dword ptr [EBP + -0x1c]
005e6e1b  PUSH EDX
005e6e1c  PUSH 0xf
005e6e1e  PUSH 0xb4
005e6e23  PUSH 0x2f
005e6e25  MOV EAX,dword ptr [EBP + 0xfffffe70]
005e6e2b  ADD EAX,0x38
005e6e2e  PUSH EAX
005e6e2f  MOV ECX,dword ptr [EBP + -0x10]
005e6e32  ADD ECX,0x4
005e6e35  PUSH ECX
005e6e36  PUSH 0x0
005e6e38  MOV ECX,dword ptr [EBP + 0xfffffe44]
005e6e3e  CALL 0x005fa5b0
005e6e43  MOV EDX,dword ptr [EBP + 0xfffffe70]
005e6e49  MOVSX EAX,byte ptr [EDX + 0xac]
005e6e50  TEST EAX,EAX
005e6e52  JZ 0x005e6ff0
005e6e58  MOV ECX,dword ptr [EBP + 0xfffffe70]
005e6e5e  CMP dword ptr [ECX + 0x44],0x0
005e6e62  JL 0x005e6f0b
005e6e68  PUSH 0x0
005e6e6a  PUSH 0xff
005e6e6f  PUSH 0x0
005e6e71  PUSH 0x14
005e6e73  MOV EDX,dword ptr [EBP + 0x8]
005e6e76  MOV EAX,dword ptr [EDX*0x4 + 0x75ebc8]
005e6e7d  PUSH EAX
005e6e7e  MOV ECX,dword ptr [EBP + 0x8]
005e6e81  MOV EDX,dword ptr [ECX*0x4 + 0x75eba0]
005e6e88  PUSH EDX
005e6e89  MOV EAX,dword ptr [EBP + 0xfffffe70]
005e6e8f  MOV ECX,dword ptr [EAX + 0x44]
005e6e92  PUSH ECX
005e6e93  MOV EDX,dword ptr [EBP + -0x10]
005e6e96  ADD EDX,0x3
005e6e99  PUSH EDX
005e6e9a  PUSH 0x0
005e6e9c  MOV ECX,dword ptr [EBP + 0xfffffe44]
005e6ea2  CALL 0x005f9ce0
005e6ea7  MOV ECX,dword ptr [EBP + 0x8]
005e6eaa  MOV EDX,dword ptr [EBP + 0xfffffe44]
005e6eb0  MOV dword ptr [EDX + ECX*0x4 + 0x1e8],EAX
005e6eb7  PUSH 0x0
005e6eb9  PUSH 0xff
005e6ebe  PUSH 0x0
005e6ec0  PUSH 0x28
005e6ec2  MOV EAX,dword ptr [EBP + 0x8]
005e6ec5  MOV ECX,dword ptr [EAX*0x4 + 0x75ebc8]
005e6ecc  PUSH ECX
005e6ecd  MOV EDX,dword ptr [EBP + 0x8]
005e6ed0  MOV EAX,dword ptr [EDX*0x4 + 0x75eba0]
005e6ed7  PUSH EAX
005e6ed8  MOV ECX,dword ptr [EBP + 0xfffffe70]
005e6ede  MOV EDX,dword ptr [ECX + 0x44]
005e6ee1  PUSH EDX
005e6ee2  MOV EAX,dword ptr [EBP + -0x10]
005e6ee5  ADD EAX,0x4
005e6ee8  PUSH EAX
005e6ee9  PUSH 0x0
005e6eeb  MOV ECX,dword ptr [EBP + 0xfffffe44]
005e6ef1  CALL 0x005f9ce0
005e6ef6  MOV ECX,dword ptr [EBP + 0x8]
005e6ef9  MOV EDX,dword ptr [EBP + 0xfffffe44]
005e6eff  MOV dword ptr [EDX + ECX*0x4 + 0x210],EAX
005e6f06  JMP 0x005e6feb
005e6f0b  MOV EAX,dword ptr [EBP + 0x8]
005e6f0e  MOV ECX,dword ptr [EBP + 0xfffffe44]
005e6f14  CMP dword ptr [ECX + EAX*0x4 + 0x1c0],0x0
005e6f1c  JNZ 0x005e6feb
005e6f22  PUSH 0xc8
005e6f27  CALL 0x00686d82
005e6f2c  ADD ESP,0x4
005e6f2f  MOV dword ptr [EBP + 0xfffffe64],EAX
005e6f35  MOV dword ptr [EBP + -0x4],0x0
005e6f3c  CMP dword ptr [EBP + 0xfffffe64],0x0
005e6f43  JZ 0x005e6f58
005e6f45  MOV ECX,dword ptr [EBP + 0xfffffe64]
005e6f4b  CALL 0x006640c0
005e6f50  MOV dword ptr [EBP + 0xfffffe40],EAX
005e6f56  JMP 0x005e6f62
005e6f58  MOV dword ptr [EBP + 0xfffffe40],0x0
005e6f62  MOV EDX,dword ptr [EBP + 0xfffffe40]
005e6f68  MOV dword ptr [EBP + 0xfffffe68],EDX
005e6f6e  MOV dword ptr [EBP + -0x4],0xffffffff
005e6f75  MOV EAX,dword ptr [EBP + 0x8]
005e6f78  MOV ECX,dword ptr [EBP + 0xfffffe44]
005e6f7e  MOV EDX,dword ptr [EBP + 0xfffffe68]
005e6f84  MOV dword ptr [ECX + EAX*0x4 + 0x1c0],EDX
005e6f8b  PUSH 0x0
005e6f8d  MOV EAX,dword ptr [EBP + 0xfffffe44]
005e6f93  PUSH EAX
005e6f94  MOV ECX,dword ptr [EBP + 0x8]
005e6f97  MOV EDX,dword ptr [EBP + 0xfffffe44]
005e6f9d  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x1c0]
005e6fa4  CALL 0x00664200
005e6fa9  MOV EAX,dword ptr [EBP + 0x8]
005e6fac  MOV ECX,dword ptr [EAX*0x4 + 0x75ebc8]
005e6fb3  PUSH ECX
005e6fb4  MOV EDX,dword ptr [EBP + 0x8]
005e6fb7  MOV EAX,dword ptr [EDX*0x4 + 0x75eba0]
005e6fbe  PUSH EAX
005e6fbf  MOV ECX,dword ptr [EBP + 0x8]
005e6fc2  MOV EDX,dword ptr [EBP + 0xfffffe44]
005e6fc8  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x1c0]
005e6fcf  CALL 0x006643f0
005e6fd4  PUSH 0x2
005e6fd6  MOV EAX,dword ptr [EBP + 0x8]
005e6fd9  MOV ECX,dword ptr [EBP + 0xfffffe44]
005e6fdf  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x1c0]
005e6fe6  CALL 0x00664480
005e6feb  JMP 0x005e71f2
005e6ff0  MOV EDX,dword ptr [EBP + 0xfffffe44]
005e6ff6  MOV EAX,dword ptr [EDX + 0x238]
005e6ffc  MOV ECX,dword ptr [EBP + 0x8]
005e6fff  MOV EDX,dword ptr [EAX + ECX*0x4]
005e7002  MOV dword ptr [EBP + 0xfffffe58],EDX
005e7008  MOV ECX,dword ptr [EBP + 0xfffffe58]
005e700e  CALL 0x0063aac0
005e7013  MOV dword ptr [EAX],0x1
005e7019  MOV EAX,dword ptr [EBP + 0xfffffe70]
005e701f  MOV ECX,dword ptr [EAX + 0xb4]
005e7025  PUSH ECX
005e7026  MOV EDX,dword ptr [EBP + 0xfffffe44]
005e702c  MOV EAX,dword ptr [EDX + 0x238]
005e7032  MOV ECX,dword ptr [EBP + 0x8]
005e7035  MOV ECX,dword ptr [EAX + ECX*0x4]
005e7038  CALL 0x0063b490
005e703d  MOV EDX,dword ptr [EBP + 0xfffffe70]
005e7043  MOV EAX,dword ptr [EDX + 0xb0]
005e7049  MOV dword ptr [EBP + 0xfffffe50],EAX
005e704f  MOV ECX,dword ptr [EBP + 0xfffffe44]
005e7055  MOV EDX,dword ptr [ECX + 0x238]
005e705b  MOV EAX,dword ptr [EBP + 0x8]
005e705e  MOV ECX,dword ptr [EDX + EAX*0x4]
005e7061  MOV dword ptr [EBP + 0xfffffe54],ECX
005e7067  MOV EDX,dword ptr [EBP + 0xfffffe54]
005e706d  MOV EAX,dword ptr [EBP + 0xfffffe50]
005e7073  MOV dword ptr [EDX + 0xc],EAX
005e7076  MOV ECX,dword ptr [EBP + 0xfffffe44]
005e707c  MOV EDX,dword ptr [ECX + 0x238]
005e7082  MOV EAX,dword ptr [EBP + 0x8]
005e7085  MOV ECX,dword ptr [EDX + EAX*0x4]
005e7088  MOV dword ptr [EBP + 0xfffffe4c],ECX
005e708e  PUSH 0x6b27f8
005e7093  MOV EDX,dword ptr [EBP + 0xfffffe4c]
005e7099  ADD EDX,0x10
005e709c  PUSH EDX
005e709d  CALL 0x00686d8e
005e70a2  ADD ESP,0x8
005e70a5  PUSH 0x60
005e70a7  CALL 0x00686d82
005e70ac  ADD ESP,0x4
005e70af  MOV dword ptr [EBP + 0xfffffe5c],EAX
005e70b5  MOV dword ptr [EBP + -0x4],0x1
005e70bc  CMP dword ptr [EBP + 0xfffffe5c],0x0
005e70c3  JZ 0x005e70d8
005e70c5  MOV ECX,dword ptr [EBP + 0xfffffe5c]
005e70cb  CALL 0x006454f0
005e70d0  MOV dword ptr [EBP + 0xfffffe3c],EAX
005e70d6  JMP 0x005e70e2
005e70d8  MOV dword ptr [EBP + 0xfffffe3c],0x0
005e70e2  MOV EAX,dword ptr [EBP + 0xfffffe3c]
005e70e8  MOV dword ptr [EBP + 0xfffffe60],EAX
005e70ee  MOV dword ptr [EBP + -0x4],0xffffffff
005e70f5  MOV ECX,dword ptr [EBP + 0xfffffe44]
005e70fb  MOV EDX,dword ptr [ECX + 0x238]
005e7101  MOV EAX,dword ptr [EBP + 0x8]
005e7104  MOV ECX,dword ptr [EDX + EAX*0x4]
005e7107  MOV EDX,dword ptr [EBP + 0xfffffe60]
005e710d  MOV dword ptr [ECX + 0x20],EDX
005e7110  PUSH 0x0
005e7112  PUSH 0x0
005e7114  PUSH 0x0
005e7116  MOV EAX,dword ptr [EBP + 0xfffffe44]
005e711c  PUSH EAX
005e711d  MOV ECX,dword ptr [EBP + 0xfffffe44]
005e7123  MOV EDX,dword ptr [ECX + 0x238]
005e7129  MOV EAX,dword ptr [EBP + 0x8]
005e712c  MOV ECX,dword ptr [EDX + EAX*0x4]
005e712f  PUSH ECX
005e7130  MOV EDX,dword ptr [EBP + 0xfffffe44]
005e7136  MOV EAX,dword ptr [EDX + 0x238]
005e713c  MOV ECX,dword ptr [EBP + 0x8]
005e713f  MOV EDX,dword ptr [EAX + ECX*0x4]
005e7142  MOV ECX,dword ptr [EDX + 0x20]
005e7145  CALL 0x00645820
005e714a  MOV EAX,dword ptr [EBP + 0x8]
005e714d  MOV ECX,dword ptr [EAX*0x4 + 0x75ebc8]
005e7154  PUSH ECX
005e7155  MOV EDX,dword ptr [EBP + 0x8]
005e7158  MOV EAX,dword ptr [EDX*0x4 + 0x75eba0]
005e715f  PUSH EAX
005e7160  MOV ECX,dword ptr [EBP + 0xfffffe44]
005e7166  MOV EDX,dword ptr [ECX + 0x238]
005e716c  MOV EAX,dword ptr [EBP + 0x8]
005e716f  MOV ECX,dword ptr [EDX + EAX*0x4]
005e7172  MOV ECX,dword ptr [ECX + 0x20]
005e7175  CALL 0x00646150
005e717a  PUSH 0x5
005e717c  MOV EDX,dword ptr [EBP + 0xfffffe44]
005e7182  MOV EAX,dword ptr [EDX + 0x238]
005e7188  MOV ECX,dword ptr [EBP + 0x8]
005e718b  MOV EDX,dword ptr [EAX + ECX*0x4]
005e718e  MOV ECX,dword ptr [EDX + 0x20]
005e7191  CALL 0x00646380
005e7196  MOV EAX,dword ptr [EBP + 0xfffffe44]
005e719c  MOV ECX,dword ptr [EAX + 0x238]
005e71a2  MOV EDX,dword ptr [EBP + 0x8]
005e71a5  MOV EAX,dword ptr [ECX + EDX*0x4]
005e71a8  MOV ECX,dword ptr [EAX + 0x20]
005e71ab  MOV dword ptr [EBP + 0xfffffe48],ECX
005e71b1  PUSH 0x0
005e71b3  PUSH 0x1
005e71b5  MOV ECX,dword ptr [EBP + 0xfffffe48]
005e71bb  CALL 0x006464d0
005e71c0  MOV EDX,dword ptr [EBP + 0xfffffe48]
005e71c6  MOV byte ptr [EDX + 0x28],0x0
005e71ca  MOV EAX,dword ptr [EBP + 0xfffffe48]
005e71d0  MOV byte ptr [EAX + 0x29],0x0
005e71d4  PUSH 0x0
005e71d6  PUSH 0x0
005e71d8  MOV ECX,dword ptr [EBP + 0xfffffe44]
005e71de  MOV EDX,dword ptr [ECX + 0x238]
005e71e4  MOV EAX,dword ptr [EBP + 0x8]
005e71e7  MOV ECX,dword ptr [EDX + EAX*0x4]
005e71ea  MOV ECX,dword ptr [ECX + 0x20]
005e71ed  CALL 0x006464d0
005e71f2  MOV ECX,dword ptr [EBP + -0xc]
005e71f5  MOV dword ptr FS:[0x0],ECX
005e71fc  POP ECX
005e71fd  MOV ECX,dword ptr [EBP + -0x20]
005e7200  XOR ECX,EBP
005e7202  CALL 0x00686d72
005e7207  MOV ESP,EBP
005e7209  POP EBP
005e720a  RET 0x4
