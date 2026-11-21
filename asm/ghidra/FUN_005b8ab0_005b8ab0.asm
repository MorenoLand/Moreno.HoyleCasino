; FUN_005b8ab0  005b8ab0
005b8ab0  PUSH EBP
005b8ab1  MOV EBP,ESP
005b8ab3  SUB ESP,0x70
005b8ab6  MOV dword ptr [EBP + -0x64],ECX
005b8ab9  MOV EAX,dword ptr [EBP + 0x8]
005b8abc  PUSH EAX
005b8abd  CALL 0x005dcb00
005b8ac2  ADD ESP,0x4
005b8ac5  MOV ECX,EAX
005b8ac7  CALL 0x005d5a50
005b8acc  CMP EAX,0x3b9aca00
005b8ad1  JL 0x005b8ad8
005b8ad3  JMP 0x005b8fb2
005b8ad8  PUSH 0x0
005b8ada  PUSH 0x0
005b8adc  CALL 0x0064c8a0
005b8ae1  ADD ESP,0x8
005b8ae4  MOV dword ptr [EBP + -0x28],EAX
005b8ae7  MOV dword ptr [EBP + -0x24],EDX
005b8aea  MOV ECX,dword ptr [EBP + -0x28]
005b8aed  MOV dword ptr [EBP + -0x20],ECX
005b8af0  MOV EDX,dword ptr [EBP + -0x24]
005b8af3  MOV dword ptr [EBP + -0x1c],EDX
005b8af6  PUSH 0x0
005b8af8  PUSH 0x0
005b8afa  CALL 0x0064c8a0
005b8aff  ADD ESP,0x8
005b8b02  MOV dword ptr [EBP + -0x30],EAX
005b8b05  MOV dword ptr [EBP + -0x2c],EDX
005b8b08  MOV EAX,dword ptr [EBP + -0x30]
005b8b0b  MOV dword ptr [EBP + -0x10],EAX
005b8b0e  MOV ECX,dword ptr [EBP + -0x2c]
005b8b11  MOV dword ptr [EBP + -0xc],ECX
005b8b14  FILD dword ptr [EBP + 0x14]
005b8b17  FIDIV dword ptr [EBP + 0x18]
005b8b1a  FSTP double ptr [EBP + -0x18]
005b8b1d  MOV EDX,dword ptr [EBP + 0x8]
005b8b20  MOV EAX,[0x00793604]
005b8b25  MOV ECX,dword ptr [EBP + -0x64]
005b8b28  CMP ECX,dword ptr [EAX + EDX*0x4 + 0x580]
005b8b2f  JNZ 0x005b8db5
005b8b35  MOV EDX,dword ptr [EBP + 0x8]
005b8b38  SHL EDX,0x5
005b8b3b  MOV EAX,dword ptr [EBP + -0x64]
005b8b3e  LEA ECX,[EAX + EDX*0x1 + 0x48]
005b8b42  MOV EDX,dword ptr [EBP + 0xc]
005b8b45  MOV EAX,dword ptr [ECX + EDX*0x8]
005b8b48  MOV ECX,dword ptr [ECX + EDX*0x8 + 0x4]
005b8b4c  MOV dword ptr [EBP + -0x8],EAX
005b8b4f  MOV dword ptr [EBP + -0x4],ECX
005b8b52  MOV EDX,dword ptr [EBP + 0x10]
005b8b55  MOV dword ptr [EBP + -0x68],EDX
005b8b58  CMP dword ptr [EBP + -0x68],0x0
005b8b5c  JZ 0x005b8b77
005b8b5e  CMP dword ptr [EBP + -0x68],0x1
005b8b62  JZ 0x005b8c71
005b8b68  CMP dword ptr [EBP + -0x68],0x2
005b8b6c  JZ 0x005b8c51
005b8b72  JMP 0x005b8d95
005b8b77  MOV EAX,dword ptr [EBP + 0xc]
005b8b7a  PUSH EAX
005b8b7b  MOV ECX,dword ptr [EBP + 0x8]
005b8b7e  PUSH ECX
005b8b7f  MOV EDX,dword ptr [EBP + 0x8]
005b8b82  MOV EAX,[0x007935f8]
005b8b87  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x18]
005b8b8b  MOV EDX,dword ptr [EBP + 0x8]
005b8b8e  MOV EAX,[0x007935f8]
005b8b93  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x18]
005b8b97  MOV EAX,dword ptr [ECX]
005b8b99  MOV ECX,EDX
005b8b9b  MOV EDX,dword ptr [EAX + 0xc0]
005b8ba1  CALL EDX
005b8ba3  MOV EAX,dword ptr [EBP + 0x8]
005b8ba6  PUSH EAX
005b8ba7  CALL 0x005dcb00
005b8bac  ADD ESP,0x4
005b8baf  CMP dword ptr [EAX + 0x4a8],0x0
005b8bb6  JLE 0x005b8bce
005b8bb8  MOV ECX,dword ptr [EBP + 0x8]
005b8bbb  PUSH ECX
005b8bbc  CALL 0x005dcb00
005b8bc1  ADD ESP,0x4
005b8bc4  MOV dword ptr [EAX + 0x4a8],0x0
005b8bce  MOV EDX,dword ptr [EBP + 0x8]
005b8bd1  PUSH EDX
005b8bd2  CALL 0x005dcb00
005b8bd7  ADD ESP,0x4
005b8bda  ADD EAX,0x4a8
005b8bdf  MOV dword ptr [EBP + -0x6c],EAX
005b8be2  MOV EAX,dword ptr [EBP + -0x6c]
005b8be5  MOV ECX,dword ptr [EAX]
005b8be7  SUB ECX,0x1
005b8bea  MOV EDX,dword ptr [EBP + -0x6c]
005b8bed  MOV dword ptr [EDX],ECX
005b8bef  MOV EAX,dword ptr [EBP + -0x8]
005b8bf2  NEG EAX
005b8bf4  MOV dword ptr [EBP + -0x20],EAX
005b8bf7  MOV ECX,dword ptr [EBP + -0x4]
005b8bfa  NEG ECX
005b8bfc  MOV dword ptr [EBP + -0x1c],ECX
005b8bff  MOV EDX,dword ptr [EBP + -0x1c]
005b8c02  PUSH EDX
005b8c03  MOV EAX,dword ptr [EBP + -0x20]
005b8c06  PUSH EAX
005b8c07  MOV ECX,dword ptr [EBP + 0x8]
005b8c0a  PUSH ECX
005b8c0b  CALL 0x005dcb00
005b8c10  ADD ESP,0x4
005b8c13  MOV ECX,EAX
005b8c15  CALL 0x005d5fb0
005b8c1a  PUSH 0x0
005b8c1c  PUSH 0x0
005b8c1e  CALL 0x0064c8a0
005b8c23  ADD ESP,0x8
005b8c26  MOV dword ptr [EBP + -0x38],EAX
005b8c29  MOV dword ptr [EBP + -0x34],EDX
005b8c2c  MOV EDX,dword ptr [EBP + 0xc]
005b8c2f  PUSH EDX
005b8c30  MOV EAX,dword ptr [EBP + 0x8]
005b8c33  PUSH EAX
005b8c34  MOV ECX,dword ptr [EBP + -0x34]
005b8c37  PUSH ECX
005b8c38  MOV EDX,dword ptr [EBP + -0x38]
005b8c3b  PUSH EDX
005b8c3c  MOV EAX,dword ptr [EBP + -0x64]
005b8c3f  MOV EDX,dword ptr [EAX]
005b8c41  MOV ECX,dword ptr [EBP + -0x64]
005b8c44  MOV EAX,dword ptr [EDX + 0xb8]
005b8c4a  CALL EAX
005b8c4c  JMP 0x005b8db0
005b8c51  MOV ECX,dword ptr [EBP + -0x4]
005b8c54  PUSH ECX
005b8c55  MOV EDX,dword ptr [EBP + -0x8]
005b8c58  PUSH EDX
005b8c59  MOV EAX,dword ptr [EBP + 0x8]
005b8c5c  PUSH EAX
005b8c5d  CALL 0x005dcb00
005b8c62  ADD ESP,0x4
005b8c65  MOV ECX,EAX
005b8c67  CALL 0x005d5cf0
005b8c6c  JMP 0x005b8db0
005b8c71  MOV ECX,dword ptr [EBP + 0x8]
005b8c74  PUSH ECX
005b8c75  CALL 0x005dcb00
005b8c7a  ADD ESP,0x4
005b8c7d  CMP dword ptr [EAX + 0x4a8],0x0
005b8c84  JGE 0x005b8c9c
005b8c86  MOV EDX,dword ptr [EBP + 0x8]
005b8c89  PUSH EDX
005b8c8a  CALL 0x005dcb00
005b8c8f  ADD ESP,0x4
005b8c92  MOV dword ptr [EAX + 0x4a8],0x0
005b8c9c  MOV EAX,dword ptr [EBP + 0x8]
005b8c9f  PUSH EAX
005b8ca0  CALL 0x005dcb00
005b8ca5  ADD ESP,0x4
005b8ca8  MOV ECX,EAX
005b8caa  CALL 0x005d7540
005b8caf  MOV ECX,dword ptr [EBP + -0x8]
005b8cb2  MOV dword ptr [EBP + -0x20],ECX
005b8cb5  MOV EDX,dword ptr [EBP + -0x4]
005b8cb8  MOV dword ptr [EBP + -0x1c],EDX
005b8cbb  SUB ESP,0x8
005b8cbe  FLD double ptr [EBP + -0x18]
005b8cc1  FSTP double ptr [ESP]
005b8cc4  LEA ECX,[EBP + -0x20]
005b8cc7  CALL 0x0064c560
005b8ccc  CMP dword ptr [EBP + -0x20],0x3b9aca00
005b8cd3  JLE 0x005b8ce3
005b8cd5  MOV dword ptr [EBP + -0x20],0x3b9aca00
005b8cdc  MOV dword ptr [EBP + -0x1c],0x0
005b8ce3  MOV EAX,dword ptr [EBP + 0x8]
005b8ce6  SHL EAX,0x5
005b8ce9  MOV ECX,dword ptr [EBP + -0x64]
005b8cec  LEA EDX,[ECX + EAX*0x1 + 0x48]
005b8cf0  MOV EAX,dword ptr [EBP + 0xc]
005b8cf3  MOV ECX,dword ptr [EDX + EAX*0x8 + 0x4]
005b8cf7  PUSH ECX
005b8cf8  MOV EDX,dword ptr [EDX + EAX*0x8]
005b8cfb  PUSH EDX
005b8cfc  LEA EAX,[EBP + -0x40]
005b8cff  PUSH EAX
005b8d00  LEA ECX,[EBP + -0x20]
005b8d03  CALL 0x0064c5c0
005b8d08  MOV ECX,dword ptr [EAX]
005b8d0a  MOV EDX,dword ptr [EAX + 0x4]
005b8d0d  MOV dword ptr [EBP + -0x10],ECX
005b8d10  MOV dword ptr [EBP + -0xc],EDX
005b8d13  CMP dword ptr [EBP + -0x10],0x3b9aca00
005b8d1a  JL 0x005b8d3d
005b8d1c  PUSH 0x0
005b8d1e  PUSH 0x3b9aca00
005b8d23  CALL 0x0064c8a0
005b8d28  ADD ESP,0x8
005b8d2b  MOV dword ptr [EBP + -0x48],EAX
005b8d2e  MOV dword ptr [EBP + -0x44],EDX
005b8d31  MOV EAX,dword ptr [EBP + -0x48]
005b8d34  MOV dword ptr [EBP + -0x10],EAX
005b8d37  MOV ECX,dword ptr [EBP + -0x44]
005b8d3a  MOV dword ptr [EBP + -0xc],ECX
005b8d3d  MOV EDX,dword ptr [EBP + -0xc]
005b8d40  PUSH EDX
005b8d41  MOV EAX,dword ptr [EBP + -0x10]
005b8d44  PUSH EAX
005b8d45  MOV ECX,dword ptr [EBP + 0x8]
005b8d48  PUSH ECX
005b8d49  CALL 0x005dcb00
005b8d4e  ADD ESP,0x4
005b8d51  MOV ECX,EAX
005b8d53  CALL 0x005d5cf0
005b8d58  MOV EDX,dword ptr [EBP + -0x1c]
005b8d5b  PUSH EDX
005b8d5c  MOV EAX,dword ptr [EBP + -0x20]
005b8d5f  PUSH EAX
005b8d60  MOV ECX,dword ptr [EBP + 0x8]
005b8d63  PUSH ECX
005b8d64  CALL 0x005dcb00
005b8d69  ADD ESP,0x4
005b8d6c  MOV ECX,EAX
005b8d6e  CALL 0x005d5fb0
005b8d73  MOV EDX,dword ptr [EBP + 0xc]
005b8d76  PUSH EDX
005b8d77  MOV EAX,dword ptr [EBP + 0x8]
005b8d7a  PUSH EAX
005b8d7b  MOV ECX,dword ptr [EBP + -0xc]
005b8d7e  PUSH ECX
005b8d7f  MOV EDX,dword ptr [EBP + -0x10]
005b8d82  PUSH EDX
005b8d83  MOV EAX,dword ptr [EBP + -0x64]
005b8d86  MOV EDX,dword ptr [EAX]
005b8d88  MOV ECX,dword ptr [EBP + -0x64]
005b8d8b  MOV EAX,dword ptr [EDX + 0xb8]
005b8d91  CALL EAX
005b8d93  JMP 0x005b8db0
005b8d95  XOR ECX,ECX
005b8d97  JNZ 0x005b8db0
005b8d99  PUSH 0x9ba
005b8d9e  PUSH 0x6d0b5c
005b8da3  PUSH 0x6b2f58
005b8da8  CALL 0x005e9f20
005b8dad  ADD ESP,0xc
005b8db0  JMP 0x005b8fb2
005b8db5  MOV EAX,dword ptr [EBP + 0x8]
005b8db8  MOV ECX,dword ptr [0x00793604]
005b8dbe  MOV EDX,dword ptr [EBP + -0x64]
005b8dc1  CMP EDX,dword ptr [ECX + EAX*0x4 + 0x634]
005b8dc8  JNZ 0x005b8f97
005b8dce  MOV EAX,dword ptr [EBP + 0x8]
005b8dd1  SHL EAX,0x5
005b8dd4  MOV ECX,dword ptr [EBP + -0x64]
005b8dd7  LEA EDX,[ECX + EAX*0x1 + 0x48]
005b8ddb  MOV EAX,dword ptr [EBP + 0xc]
005b8dde  MOV ECX,dword ptr [EDX + EAX*0x8]
005b8de1  MOV EDX,dword ptr [EDX + EAX*0x8 + 0x4]
005b8de5  MOV dword ptr [EBP + -0x8],ECX
005b8de8  MOV dword ptr [EBP + -0x4],EDX
005b8deb  MOV EAX,dword ptr [EBP + 0x10]
005b8dee  MOV dword ptr [EBP + -0x70],EAX
005b8df1  CMP dword ptr [EBP + -0x70],0x0
005b8df5  JZ 0x005b8e06
005b8df7  CMP dword ptr [EBP + -0x70],0x1
005b8dfb  JZ 0x005b8e94
005b8e01  JMP 0x005b8f7a
005b8e06  MOV ECX,dword ptr [EBP + 0xc]
005b8e09  PUSH ECX
005b8e0a  MOV EDX,dword ptr [EBP + 0x8]
005b8e0d  PUSH EDX
005b8e0e  MOV EAX,dword ptr [EBP + 0x8]
005b8e11  MOV ECX,dword ptr [0x007935f8]
005b8e17  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x48]
005b8e1b  MOV EAX,dword ptr [EBP + 0x8]
005b8e1e  MOV ECX,dword ptr [0x007935f8]
005b8e24  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x48]
005b8e28  MOV EDX,dword ptr [EDX]
005b8e2a  MOV EAX,dword ptr [EDX + 0xc0]
005b8e30  CALL EAX
005b8e32  MOV ECX,dword ptr [EBP + -0x8]
005b8e35  NEG ECX
005b8e37  MOV dword ptr [EBP + -0x20],ECX
005b8e3a  MOV EDX,dword ptr [EBP + -0x4]
005b8e3d  NEG EDX
005b8e3f  MOV dword ptr [EBP + -0x1c],EDX
005b8e42  MOV EAX,dword ptr [EBP + -0x1c]
005b8e45  PUSH EAX
005b8e46  MOV ECX,dword ptr [EBP + -0x20]
005b8e49  PUSH ECX
005b8e4a  MOV EDX,dword ptr [EBP + 0x8]
005b8e4d  PUSH EDX
005b8e4e  CALL 0x005dcb00
005b8e53  ADD ESP,0x4
005b8e56  MOV ECX,EAX
005b8e58  CALL 0x005d5fb0
005b8e5d  PUSH 0x0
005b8e5f  PUSH 0x0
005b8e61  CALL 0x0064c8a0
005b8e66  ADD ESP,0x8
005b8e69  MOV dword ptr [EBP + -0x50],EAX
005b8e6c  MOV dword ptr [EBP + -0x4c],EDX
005b8e6f  MOV EAX,dword ptr [EBP + 0xc]
005b8e72  PUSH EAX
005b8e73  MOV ECX,dword ptr [EBP + 0x8]
005b8e76  PUSH ECX
005b8e77  MOV EDX,dword ptr [EBP + -0x4c]
005b8e7a  PUSH EDX
005b8e7b  MOV EAX,dword ptr [EBP + -0x50]
005b8e7e  PUSH EAX
005b8e7f  MOV ECX,dword ptr [EBP + -0x64]
005b8e82  MOV EDX,dword ptr [ECX]
005b8e84  MOV ECX,dword ptr [EBP + -0x64]
005b8e87  MOV EAX,dword ptr [EDX + 0xb8]
005b8e8d  CALL EAX
005b8e8f  JMP 0x005b8f95
005b8e94  MOV ECX,dword ptr [EBP + -0x8]
005b8e97  MOV dword ptr [EBP + -0x20],ECX
005b8e9a  MOV EDX,dword ptr [EBP + -0x4]
005b8e9d  MOV dword ptr [EBP + -0x1c],EDX
005b8ea0  SUB ESP,0x8
005b8ea3  FLD double ptr [EBP + -0x18]
005b8ea6  FSTP double ptr [ESP]
005b8ea9  LEA ECX,[EBP + -0x20]
005b8eac  CALL 0x0064c560
005b8eb1  CMP dword ptr [EBP + -0x20],0x3b9aca00
005b8eb8  JLE 0x005b8ec8
005b8eba  MOV dword ptr [EBP + -0x20],0x3b9aca00
005b8ec1  MOV dword ptr [EBP + -0x1c],0x0
005b8ec8  MOV EAX,dword ptr [EBP + 0x8]
005b8ecb  SHL EAX,0x5
005b8ece  MOV ECX,dword ptr [EBP + -0x64]
005b8ed1  LEA EDX,[ECX + EAX*0x1 + 0x48]
005b8ed5  MOV EAX,dword ptr [EBP + 0xc]
005b8ed8  MOV ECX,dword ptr [EDX + EAX*0x8 + 0x4]
005b8edc  PUSH ECX
005b8edd  MOV EDX,dword ptr [EDX + EAX*0x8]
005b8ee0  PUSH EDX
005b8ee1  LEA EAX,[EBP + -0x58]
005b8ee4  PUSH EAX
005b8ee5  LEA ECX,[EBP + -0x20]
005b8ee8  CALL 0x0064c5c0
005b8eed  MOV ECX,dword ptr [EAX]
005b8eef  MOV EDX,dword ptr [EAX + 0x4]
005b8ef2  MOV dword ptr [EBP + -0x10],ECX
005b8ef5  MOV dword ptr [EBP + -0xc],EDX
005b8ef8  CMP dword ptr [EBP + -0x10],0x3b9aca00
005b8eff  JL 0x005b8f22
005b8f01  PUSH 0x0
005b8f03  PUSH 0x3b9aca00
005b8f08  CALL 0x0064c8a0
005b8f0d  ADD ESP,0x8
005b8f10  MOV dword ptr [EBP + -0x60],EAX
005b8f13  MOV dword ptr [EBP + -0x5c],EDX
005b8f16  MOV EAX,dword ptr [EBP + -0x60]
005b8f19  MOV dword ptr [EBP + -0x10],EAX
005b8f1c  MOV ECX,dword ptr [EBP + -0x5c]
005b8f1f  MOV dword ptr [EBP + -0xc],ECX
005b8f22  MOV EDX,dword ptr [EBP + -0xc]
005b8f25  PUSH EDX
005b8f26  MOV EAX,dword ptr [EBP + -0x10]
005b8f29  PUSH EAX
005b8f2a  MOV ECX,dword ptr [EBP + 0x8]
005b8f2d  PUSH ECX
005b8f2e  CALL 0x005dcb00
005b8f33  ADD ESP,0x4
005b8f36  MOV ECX,EAX
005b8f38  CALL 0x005d5cf0
005b8f3d  MOV EDX,dword ptr [EBP + -0x1c]
005b8f40  PUSH EDX
005b8f41  MOV EAX,dword ptr [EBP + -0x20]
005b8f44  PUSH EAX
005b8f45  MOV ECX,dword ptr [EBP + 0x8]
005b8f48  PUSH ECX
005b8f49  CALL 0x005dcb00
005b8f4e  ADD ESP,0x4
005b8f51  MOV ECX,EAX
005b8f53  CALL 0x005d5fb0
005b8f58  MOV EDX,dword ptr [EBP + 0xc]
005b8f5b  PUSH EDX
005b8f5c  MOV EAX,dword ptr [EBP + 0x8]
005b8f5f  PUSH EAX
005b8f60  MOV ECX,dword ptr [EBP + -0xc]
005b8f63  PUSH ECX
005b8f64  MOV EDX,dword ptr [EBP + -0x10]
005b8f67  PUSH EDX
005b8f68  MOV EAX,dword ptr [EBP + -0x64]
005b8f6b  MOV EDX,dword ptr [EAX]
005b8f6d  MOV ECX,dword ptr [EBP + -0x64]
005b8f70  MOV EAX,dword ptr [EDX + 0xb8]
005b8f76  CALL EAX
005b8f78  JMP 0x005b8f95
005b8f7a  XOR ECX,ECX
005b8f7c  JNZ 0x005b8f95
005b8f7e  PUSH 0x9dc
005b8f83  PUSH 0x6d0b5c
005b8f88  PUSH 0x6b2f58
005b8f8d  CALL 0x005e9f20
005b8f92  ADD ESP,0xc
005b8f95  JMP 0x005b8fb2
005b8f97  XOR EAX,EAX
005b8f99  JNZ 0x005b8fb2
005b8f9b  PUSH 0x9e2
005b8fa0  PUSH 0x6d0b5c
005b8fa5  PUSH 0x6b2f58
005b8faa  CALL 0x005e9f20
005b8faf  ADD ESP,0xc
005b8fb2  MOV ESP,EBP
005b8fb4  POP EBP
005b8fb5  RET 0x14
