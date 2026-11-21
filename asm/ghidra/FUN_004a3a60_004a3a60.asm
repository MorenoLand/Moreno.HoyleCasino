; FUN_004a3a60  004a3a60
004a3a60  PUSH EBP
004a3a61  MOV EBP,ESP
004a3a63  PUSH -0x1
004a3a65  PUSH 0x6a11ad
004a3a6a  MOV EAX,FS:[0x0]
004a3a70  PUSH EAX
004a3a71  SUB ESP,0xf8
004a3a77  PUSH ESI
004a3a78  MOV EAX,[0x00781870]
004a3a7d  XOR EAX,EBP
004a3a7f  PUSH EAX
004a3a80  LEA EAX,[EBP + -0xc]
004a3a83  MOV FS:[0x0],EAX
004a3a89  MOV ECX,dword ptr [0x00791364]
004a3a8f  CALL 0x0047e420
004a3a94  MOV dword ptr [EBP + -0x20],EAX
004a3a97  FLD1
004a3a99  FSTP double ptr [EBP + -0x1c]
004a3a9c  MOV ECX,dword ptr [0x00791890]
004a3aa2  CALL 0x004cbe00
004a3aa7  FIDIV dword ptr [EBP + 0xc]
004a3aaa  FSTP double ptr [EBP + -0x14]
004a3aad  MOV word ptr [EBP + -0x24],0x0
004a3ab3  JMP 0x004a3ac1
004a3ab5  MOV AX,word ptr [EBP + -0x24]
004a3ab9  ADD AX,0x1
004a3abd  MOV word ptr [EBP + -0x24],AX
004a3ac1  MOVSX ESI,word ptr [EBP + -0x24]
004a3ac5  MOV ECX,dword ptr [0x00791364]
004a3acb  CALL 0x0047f950
004a3ad0  CMP ESI,EAX
004a3ad2  JGE 0x004a400b
004a3ad8  MOVSX ECX,word ptr [EBP + -0x24]
004a3adc  CMP ECX,dword ptr [EBP + -0x20]
004a3adf  JNZ 0x004a3ae3
004a3ae1  JMP 0x004a3ab5
004a3ae3  MOVSX EDX,word ptr [EBP + -0x24]
004a3ae7  PUSH EDX
004a3ae8  MOV ECX,dword ptr [0x00791364]
004a3aee  CALL 0x0047e390
004a3af3  MOV ECX,EAX
004a3af5  CALL 0x004c7010
004a3afa  CMP EAX,0x1
004a3afd  JNZ 0x004a4006
004a3b03  FLDZ
004a3b05  FSTP double ptr [EBP + -0x34]
004a3b08  MOV AX,word ptr [EBP + 0xc]
004a3b0c  PUSH EAX
004a3b0d  MOV CX,word ptr [EBP + -0x24]
004a3b11  PUSH ECX
004a3b12  MOV ECX,dword ptr [0x00791890]
004a3b18  CALL 0x004cfe20
004a3b1d  FSTP double ptr [EBP + -0x2c]
004a3b20  MOV EDX,dword ptr [EBP + -0x20]
004a3b23  SHL EDX,0x6
004a3b26  MOVSX EAX,word ptr [EBP + -0x24]
004a3b2a  FLD double ptr [EBP + -0x2c]
004a3b2d  FMUL double ptr [EDX + EAX*0x8 + 0x791ae0]
004a3b34  FCOMP double ptr [EBP + -0x14]
004a3b37  FNSTSW AX
004a3b39  TEST AH,0x41
004a3b3c  JNZ 0x004a3b47
004a3b3e  MOV byte ptr [EBP + -0x35],0x1
004a3b42  JMP 0x004a3ea0
004a3b47  MOVSX ECX,word ptr [EBP + -0x24]
004a3b4b  PUSH ECX
004a3b4c  MOV ECX,dword ptr [0x00791364]
004a3b52  CALL 0x0047e390
004a3b57  MOV ECX,EAX
004a3b59  CALL 0x004c7050
004a3b5e  MOV dword ptr [EBP + -0x40],EAX
004a3b61  MOV DX,word ptr [EBP + -0x40]
004a3b65  PUSH EDX
004a3b66  MOV ECX,dword ptr [0x00791364]
004a3b6c  ADD ECX,0x38
004a3b6f  CALL 0x004f6880
004a3b74  MOV word ptr [EBP + -0x4c],AX
004a3b78  MOV AX,word ptr [EBP + -0x40]
004a3b7c  PUSH EAX
004a3b7d  MOV ECX,dword ptr [0x00791364]
004a3b83  ADD ECX,0x38
004a3b86  CALL 0x004f6930
004a3b8b  MOV word ptr [EBP + -0x44],AX
004a3b8f  MOV CX,word ptr [EBP + -0x40]
004a3b93  PUSH ECX
004a3b94  MOV ECX,dword ptr [0x00791364]
004a3b9a  ADD ECX,0x38
004a3b9d  CALL 0x004f6a90
004a3ba2  MOVSX EDX,AX
004a3ba5  MOVSX EAX,word ptr [EBP + -0x4c]
004a3ba9  SUB EDX,EAX
004a3bab  MOV word ptr [EBP + -0x50],DX
004a3baf  MOV CX,word ptr [EBP + -0x40]
004a3bb3  PUSH ECX
004a3bb4  MOV ECX,dword ptr [0x00791364]
004a3bba  ADD ECX,0x38
004a3bbd  CALL 0x004f6b20
004a3bc2  MOVSX EDX,AX
004a3bc5  MOVSX EAX,word ptr [EBP + -0x44]
004a3bc9  SUB EDX,EAX
004a3bcb  MOV word ptr [EBP + -0x3c],DX
004a3bcf  MOVSX ECX,word ptr [EBP + -0x4c]
004a3bd3  TEST ECX,ECX
004a3bd5  JGE 0x004a3bee
004a3bd7  PUSH 0x12f
004a3bdc  PUSH 0x6be4fc
004a3be1  PUSH 0x6bc25c
004a3be6  CALL 0x005e9f20
004a3beb  ADD ESP,0xc
004a3bee  MOVSX EAX,word ptr [EBP + -0x44]
004a3bf2  TEST EAX,EAX
004a3bf4  JGE 0x004a3c0d
004a3bf6  PUSH 0x130
004a3bfb  PUSH 0x6be4fc
004a3c00  PUSH 0x6bc248
004a3c05  CALL 0x005e9f20
004a3c0a  ADD ESP,0xc
004a3c0d  MOVSX EDX,word ptr [EBP + -0x50]
004a3c11  TEST EDX,EDX
004a3c13  JGE 0x004a3c2c
004a3c15  PUSH 0x131
004a3c1a  PUSH 0x6be4fc
004a3c1f  PUSH 0x6bc220
004a3c24  CALL 0x005e9f20
004a3c29  ADD ESP,0xc
004a3c2c  MOVSX ECX,word ptr [EBP + -0x3c]
004a3c30  TEST ECX,ECX
004a3c32  JGE 0x004a3c4b
004a3c34  PUSH 0x132
004a3c39  PUSH 0x6be4fc
004a3c3e  PUSH 0x6bc210
004a3c43  CALL 0x005e9f20
004a3c48  ADD ESP,0xc
004a3c4b  MOV byte ptr [EBP + -0x35],0x0
004a3c4f  MOV ECX,dword ptr [0x00791890]
004a3c55  CALL 0x004cbe60
004a3c5a  MOVSX EAX,word ptr [EBP + -0x50]
004a3c5e  MOV dword ptr [EBP + 0xffffff64],EAX
004a3c64  FILD dword ptr [EBP + 0xffffff64]
004a3c6a  FMULP
004a3c6c  FLD1
004a3c6e  FADDP
004a3c70  MOV ECX,dword ptr [0x00791890]
004a3c76  FSTP double ptr [EBP + 0xffffff5c]
004a3c7c  CALL 0x004cbf30
004a3c81  MOVSX ECX,word ptr [EBP + -0x3c]
004a3c85  MOV dword ptr [EBP + 0xffffff58],ECX
004a3c8b  FILD dword ptr [EBP + 0xffffff58]
004a3c91  FMULP
004a3c93  FADD double ptr [EBP + 0xffffff5c]
004a3c99  MOV ECX,dword ptr [0x00791890]
004a3c9f  FSTP double ptr [EBP + 0xffffff50]
004a3ca5  CALL 0x004cc000
004a3caa  MOVSX EDX,word ptr [EBP + -0x4c]
004a3cae  MOV dword ptr [EBP + 0xffffff4c],EDX
004a3cb4  FILD dword ptr [EBP + 0xffffff4c]
004a3cba  FMULP
004a3cbc  FADD double ptr [EBP + 0xffffff50]
004a3cc2  MOV ECX,dword ptr [0x00791890]
004a3cc8  FSTP double ptr [EBP + 0xffffff44]
004a3cce  CALL 0x004cc0d0
004a3cd3  MOVSX EAX,word ptr [EBP + -0x44]
004a3cd7  MOV dword ptr [EBP + 0xffffff40],EAX
004a3cdd  FILD dword ptr [EBP + 0xffffff40]
004a3ce3  FMULP
004a3ce5  FADD double ptr [EBP + 0xffffff44]
004a3ceb  FSTP double ptr [EBP + -0x34]
004a3cee  LEA ECX,[EBP + 0xffffff7c]
004a3cf4  PUSH ECX
004a3cf5  MOV EDX,dword ptr [0x00791364]
004a3cfb  MOV ECX,dword ptr [EDX + 0x24]
004a3cfe  CALL 0x004c7c40
004a3d03  MOV dword ptr [EBP + 0xffffff3c],EAX
004a3d09  MOV EAX,dword ptr [EBP + 0xffffff3c]
004a3d0f  MOV dword ptr [EBP + 0xffffff38],EAX
004a3d15  MOV dword ptr [EBP + -0x4],0x0
004a3d1c  LEA ECX,[EBP + -0x7c]
004a3d1f  PUSH ECX
004a3d20  MOV ECX,dword ptr [0x00791890]
004a3d26  CALL 0x004c7c40
004a3d2b  MOV dword ptr [EBP + 0xffffff34],EAX
004a3d31  MOV EDX,dword ptr [EBP + 0xffffff34]
004a3d37  MOV dword ptr [EBP + 0xffffff30],EDX
004a3d3d  MOV byte ptr [EBP + -0x4],0x1
004a3d41  MOV EAX,dword ptr [EBP + 0xffffff38]
004a3d47  PUSH EAX
004a3d48  LEA ECX,[EBP + 0xffffff74]
004a3d4e  PUSH ECX
004a3d4f  MOV ECX,dword ptr [EBP + 0xffffff30]
004a3d55  CALL 0x004845f0
004a3d5a  MOV dword ptr [EBP + 0xffffff2c],EAX
004a3d60  MOV EDX,dword ptr [EBP + 0xffffff2c]
004a3d66  MOV dword ptr [EBP + 0xffffff28],EDX
004a3d6c  MOV byte ptr [EBP + -0x4],0x2
004a3d70  PUSH 0x0
004a3d72  PUSH 0x0
004a3d74  PUSH 0x0
004a3d76  PUSH 0x1
004a3d78  PUSH 0x1
004a3d7a  PUSH 0x1
004a3d7c  PUSH 0x1
004a3d7e  LEA EAX,[EBP + 0xffffff70]
004a3d84  PUSH EAX
004a3d85  MOV ECX,dword ptr [EBP + 0xffffff28]
004a3d8b  CALL 0x00485940
004a3d90  MOV dword ptr [EBP + 0xffffff24],EAX
004a3d96  MOV ECX,dword ptr [EBP + 0xffffff24]
004a3d9c  MOV dword ptr [EBP + 0xffffff20],ECX
004a3da2  MOV byte ptr [EBP + -0x4],0x3
004a3da6  LEA EDX,[EBP + -0x51]
004a3da9  PUSH EDX
004a3daa  MOV ECX,dword ptr [EBP + 0xffffff20]
004a3db0  CALL 0x004a2160
004a3db5  MOV byte ptr [EBP + -0x4],0x2
004a3db9  LEA ECX,[EBP + 0xffffff70]
004a3dbf  CALL 0x004a20f0
004a3dc4  MOV byte ptr [EBP + -0x4],0x1
004a3dc8  LEA ECX,[EBP + 0xffffff74]
004a3dce  CALL 0x00484470
004a3dd3  MOV byte ptr [EBP + -0x4],0x0
004a3dd7  LEA ECX,[EBP + -0x7c]
004a3dda  CALL 0x00484470
004a3ddf  MOV dword ptr [EBP + -0x4],0xffffffff
004a3de6  LEA ECX,[EBP + 0xffffff7c]
004a3dec  CALL 0x00484470
004a3df1  LEA EAX,[EBP + 0xffffff68]
004a3df7  PUSH EAX
004a3df8  MOV ECX,dword ptr [0x00791364]
004a3dfe  MOV ECX,dword ptr [ECX + 0x24]
004a3e01  CALL 0x004c7c40
004a3e06  MOV dword ptr [EBP + 0xffffff1c],EAX
004a3e0c  MOV EDX,dword ptr [EBP + 0xffffff1c]
004a3e12  MOV dword ptr [EBP + 0xffffff18],EDX
004a3e18  MOV dword ptr [EBP + -0x4],0x4
004a3e1f  MOV ECX,dword ptr [EBP + 0xffffff18]
004a3e25  CALL 0x00484bf0
004a3e2a  MOV word ptr [EBP + -0x48],AX
004a3e2e  MOV dword ptr [EBP + -0x4],0xffffffff
004a3e35  LEA ECX,[EBP + 0xffffff68]
004a3e3b  CALL 0x00484470
004a3e40  MOVSX EAX,word ptr [EBP + -0x48]
004a3e44  CMP EAX,0x3
004a3e47  JNZ 0x004a3e71
004a3e49  MOV ECX,dword ptr [0x007913a0]
004a3e4f  PUSH ECX
004a3e50  LEA ECX,[EBP + -0x51]
004a3e53  CALL 0x004a1e70
004a3e58  MOVZX EDX,AL
004a3e5b  TEST EDX,EDX
004a3e5d  JZ 0x004a3e71
004a3e5f  MOV EAX,dword ptr [EBP + -0x20]
004a3e62  FLD double ptr [EBP + -0x34]
004a3e65  FMUL double ptr [EAX*0x8 + 0x791d40]
004a3e6c  FSTP double ptr [EBP + -0x34]
004a3e6f  JMP 0x004a3ea0
004a3e71  MOVSX ECX,word ptr [EBP + -0x48]
004a3e75  CMP ECX,0x4
004a3e78  JNZ 0x004a3ea0
004a3e7a  MOV EDX,dword ptr [0x007913a0]
004a3e80  PUSH EDX
004a3e81  LEA ECX,[EBP + -0x51]
004a3e84  CALL 0x004a1e70
004a3e89  MOVZX EAX,AL
004a3e8c  TEST EAX,EAX
004a3e8e  JZ 0x004a3ea0
004a3e90  MOV ECX,dword ptr [EBP + -0x20]
004a3e93  FLD double ptr [EBP + -0x34]
004a3e96  FMUL double ptr [ECX*0x8 + 0x7917e8]
004a3e9d  FSTP double ptr [EBP + -0x34]
004a3ea0  MOV word ptr [EBP + -0x58],0x5
004a3ea6  JMP 0x004a3eb4
004a3ea8  MOV DX,word ptr [EBP + -0x58]
004a3eac  SUB DX,0x1
004a3eb0  MOV word ptr [EBP + -0x58],DX
004a3eb4  MOVSX EAX,word ptr [EBP + -0x58]
004a3eb8  TEST EAX,EAX
004a3eba  JL 0x004a4006
004a3ec0  MOV ECX,dword ptr [EBP + -0x20]
004a3ec3  IMUL ECX,ECX,0x18
004a3ec6  MOVSX EDX,word ptr [EBP + -0x58]
004a3eca  MOV EAX,dword ptr [EBP + -0x20]
004a3ecd  IMUL EAX,EAX,0x18
004a3ed0  MOVSX ESI,word ptr [EBP + -0x58]
004a3ed4  MOV ECX,dword ptr [ECX + EDX*0x4 + 0x7915c8]
004a3edb  ADD ECX,dword ptr [EAX + ESI*0x4 + 0x7919d8]
004a3ee2  MOV EDX,dword ptr [EBP + -0x20]
004a3ee5  IMUL EDX,EDX,0x18
004a3ee8  MOVSX EAX,word ptr [EBP + -0x58]
004a3eec  ADD ECX,dword ptr [EDX + EAX*0x4 + 0x791460]
004a3ef3  MOV dword ptr [EBP + 0xffffff14],ECX
004a3ef9  FILD dword ptr [EBP + 0xffffff14]
004a3eff  FSTP double ptr [EBP + -0x64]
004a3f02  MOVZX ECX,byte ptr [EBP + -0x35]
004a3f06  TEST ECX,ECX
004a3f08  JZ 0x004a3f88
004a3f0a  MOV EDX,dword ptr [EBP + -0x20]
004a3f0d  IMUL EDX,EDX,0x18
004a3f10  MOVSX EAX,word ptr [EBP + -0x58]
004a3f14  FILD dword ptr [EDX + EAX*0x4 + 0x7915c8]
004a3f1b  FDIV double ptr [EBP + -0x64]
004a3f1e  MOVSX ECX,word ptr [EBP + -0x58]
004a3f22  ADD ECX,0x1
004a3f25  PUSH ECX
004a3f26  FSTP double ptr [EBP + 0xffffff0c]
004a3f2c  CALL 0x0048e500
004a3f31  ADD ESP,0x4
004a3f34  FMUL double ptr [EBP + 0xffffff0c]
004a3f3a  FLD1
004a3f3c  FSUBRP
004a3f3e  MOV EDX,dword ptr [EBP + -0x20]
004a3f41  IMUL EDX,EDX,0x18
004a3f44  MOVSX EAX,word ptr [EBP + -0x58]
004a3f48  FILD dword ptr [EDX + EAX*0x4 + 0x7919d8]
004a3f4f  FDIV double ptr [EBP + -0x64]
004a3f52  MOVSX ECX,word ptr [EBP + -0x58]
004a3f56  ADD ECX,0x1
004a3f59  PUSH ECX
004a3f5a  FSTP double ptr [EBP + 0xffffff04]
004a3f60  FSTP double ptr [EBP + 0xfffffefc]
004a3f66  CALL 0x0048e500
004a3f6b  ADD ESP,0x4
004a3f6e  FMUL double ptr [EBP + 0xffffff04]
004a3f74  FMUL double ptr [0x006b3e40]
004a3f7a  FSUBR double ptr [EBP + 0xfffffefc]
004a3f80  FMUL double ptr [EBP + -0x1c]
004a3f83  FSTP double ptr [EBP + -0x1c]
004a3f86  JMP 0x004a3ff0
004a3f88  MOV DX,word ptr [EBP + 0xc]
004a3f8c  PUSH EDX
004a3f8d  MOVSX EAX,word ptr [EBP + -0x58]
004a3f91  ADD EAX,0x1
004a3f94  PUSH EAX
004a3f95  MOV CX,word ptr [EBP + -0x24]
004a3f99  PUSH ECX
004a3f9a  MOV ECX,dword ptr [0x00791890]
004a3fa0  CALL 0x004cfb30
004a3fa5  FSTP double ptr [EBP + -0x6c]
004a3fa8  MOV EDX,dword ptr [EBP + -0x20]
004a3fab  IMUL EDX,EDX,0x18
004a3fae  MOVSX EAX,word ptr [EBP + -0x58]
004a3fb2  FILD dword ptr [EDX + EAX*0x4 + 0x7915c8]
004a3fb9  FDIV double ptr [EBP + -0x64]
004a3fbc  FMUL double ptr [EBP + -0x34]
004a3fbf  FMUL double ptr [EBP + -0x6c]
004a3fc2  FLD1
004a3fc4  FSUBRP
004a3fc6  FLD double ptr [EBP + -0x34]
004a3fc9  FMUL double ptr [0x006b3e40]
004a3fcf  MOV ECX,dword ptr [EBP + -0x20]
004a3fd2  IMUL ECX,ECX,0x18
004a3fd5  MOVSX EDX,word ptr [EBP + -0x58]
004a3fd9  FILD dword ptr [ECX + EDX*0x4 + 0x7919d8]
004a3fe0  FDIV double ptr [EBP + -0x64]
004a3fe3  FMULP
004a3fe5  FMUL double ptr [EBP + -0x6c]
004a3fe8  FSUBP
004a3fea  FMUL double ptr [EBP + -0x1c]
004a3fed  FSTP double ptr [EBP + -0x1c]
004a3ff0  FLDZ
004a3ff2  FCOMP double ptr [EBP + -0x1c]
004a3ff5  FNSTSW AX
004a3ff7  TEST AH,0x41
004a3ffa  JNZ 0x004a4001
004a3ffc  FLDZ
004a3ffe  FSTP double ptr [EBP + -0x1c]
004a4001  JMP 0x004a3ea8
004a4006  JMP 0x004a3ab5
004a400b  MOV EAX,dword ptr [EBP + -0x20]
004a400e  FLD double ptr [EBP + -0x1c]
004a4011  FMUL double ptr [EAX*0x8 + 0x791dd0]
004a4018  FSTP double ptr [EBP + -0x1c]
004a401b  CMP dword ptr [EBP + 0x8],0x5
004a401f  JGE 0x004a4057
004a4021  MOV ECX,dword ptr [0x00791890]
004a4027  CALL 0x004cbe30
004a402c  FSTP double ptr [EBP + -0x74]
004a402f  MOV ECX,dword ptr [EBP + -0x20]
004a4032  FILD dword ptr [ECX*0x4 + 0x791a98]
004a4039  FILD dword ptr [EBP + 0x8]
004a403c  FSUBR double ptr [0x006be520]
004a4042  FDIVP
004a4044  FMUL double ptr [EBP + -0x74]
004a4047  MOV EDX,dword ptr [EBP + -0x20]
004a404a  FMUL double ptr [EDX*0x8 + 0x791520]
004a4051  FADD double ptr [EBP + -0x1c]
004a4054  FSTP double ptr [EBP + -0x1c]
004a4057  FLD double ptr [0x006b4b00]
004a405d  FCOMP double ptr [EBP + -0x1c]
004a4060  FNSTSW AX
004a4062  TEST AH,0x5
004a4065  JP 0x004a4070
004a4067  FLD double ptr [0x006b4b00]
004a406d  FSTP double ptr [EBP + -0x1c]
004a4070  FLD double ptr [EBP + -0x1c]
004a4073  MOV ECX,dword ptr [EBP + -0xc]
004a4076  MOV dword ptr FS:[0x0],ECX
004a407d  POP ECX
004a407e  POP ESI
004a407f  MOV ESP,EBP
004a4081  POP EBP
004a4082  RET
