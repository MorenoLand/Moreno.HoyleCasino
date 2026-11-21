; FUN_005c3b10  005c3b10
005c3b10  PUSH EBP
005c3b11  MOV EBP,ESP
005c3b13  SUB ESP,0xd8
005c3b19  MOV dword ptr [EBP + 0xffffff48],ECX
005c3b1f  MOV byte ptr [EBP + -0x5],0x1
005c3b23  MOV EAX,[0x007960d8]
005c3b28  MOV ECX,dword ptr [EAX + 0xc]
005c3b2b  MOV EDX,dword ptr [0x007960d8]
005c3b31  MOV EAX,dword ptr [EDX + 0xc]
005c3b34  MOV EDX,dword ptr [ECX]
005c3b36  MOV ECX,EAX
005c3b38  MOV EAX,dword ptr [EDX + 0x8]
005c3b3b  CALL EAX
005c3b3d  MOV ECX,dword ptr [EBP + 0xffffff48]
005c3b43  MOV EDX,dword ptr [ECX]
005c3b45  SUB EAX,dword ptr [EDX + 0x68]
005c3b48  MOV dword ptr [EBP + -0x18],EAX
005c3b4b  MOV EAX,dword ptr [EBP + 0xffffff48]
005c3b51  FLD float ptr [EAX + 0x8]
005c3b54  FSTP float ptr [EBP + -0x6c]
005c3b57  LEA ECX,[EBP + -0x60]
005c3b5a  PUSH ECX
005c3b5b  FLD float ptr [EBP + -0x6c]
005c3b5e  SUB ESP,0x8
005c3b61  FSTP double ptr [ESP]
005c3b64  CALL dword ptr [0x006b2290]
005c3b6a  ADD ESP,0xc
005c3b6d  FSTP double ptr [EBP + -0x68]
005c3b70  FLD double ptr [EBP + -0x60]
005c3b73  FSTP float ptr [EBP + -0x14]
005c3b76  MOV EDX,dword ptr [EBP + 0xffffff48]
005c3b7c  FLD float ptr [EDX + 0x14]
005c3b7f  FSUB float ptr [EBP + 0x8]
005c3b82  MOV EAX,dword ptr [EBP + 0xffffff48]
005c3b88  FSTP float ptr [EAX + 0x14]
005c3b8b  MOV ECX,dword ptr [EBP + 0xffffff48]
005c3b91  MOV EDX,dword ptr [ECX + 0x1c]
005c3b94  MOV dword ptr [EBP + 0xffffff44],EDX
005c3b9a  CMP dword ptr [EBP + 0xffffff44],0x5
005c3ba1  JA 0x005c3cab
005c3ba7  MOV EAX,dword ptr [EBP + 0xffffff44]
005c3bad  JMP dword ptr [EAX*0x4 + 0x5c42ac]
005c3bb4  MOV ECX,dword ptr [EBP + 0xffffff48]
005c3bba  FLD float ptr [ECX + 0x14]
005c3bbd  FCOMP double ptr [0x006b2c50]
005c3bc3  FNSTSW AX
005c3bc5  TEST AH,0x41
005c3bc8  JNZ 0x005c3bd3
005c3bca  MOV byte ptr [EBP + -0x5],0x0
005c3bce  JMP 0x005c3cab
005c3bd3  MOV EDX,dword ptr [EBP + 0xffffff48]
005c3bd9  MOV EAX,dword ptr [EDX]
005c3bdb  MOV ECX,dword ptr [EAX + 0x50]
005c3bde  MOV EDX,dword ptr [EBP + 0xffffff48]
005c3be4  FLD float ptr [EDX + 0xc]
005c3be7  FLD float ptr [ECX + 0x74]
005c3bea  FCOMPP
005c3bec  FNSTSW AX
005c3bee  TEST AH,0x41
005c3bf1  JNZ 0x005c3c39
005c3bf3  MOV EAX,dword ptr [EBP + 0xffffff48]
005c3bf9  MOV dword ptr [EAX + 0x1c],0x3
005c3c00  MOV ECX,dword ptr [EBP + 0xffffff48]
005c3c06  FLDZ
005c3c08  FSTP float ptr [ECX + 0x10]
005c3c0b  MOV EDX,dword ptr [EBP + 0xffffff48]
005c3c11  MOV EAX,dword ptr [EDX]
005c3c13  MOV ECX,dword ptr [EAX + 0x50]
005c3c16  MOV EDX,dword ptr [EBP + 0xffffff48]
005c3c1c  FLD float ptr [ECX + 0x74]
005c3c1f  FSTP float ptr [EDX + 0xc]
005c3c22  MOV EAX,dword ptr [EBP + 0xffffff48]
005c3c28  MOV ECX,dword ptr [EAX]
005c3c2a  MOV EDX,dword ptr [ECX + 0x50]
005c3c2d  MOV EAX,dword ptr [EBP + 0xffffff48]
005c3c33  FLD float ptr [EDX + 0x78]
005c3c36  FSTP float ptr [EAX + 0x14]
005c3c39  JMP 0x005c3cab
005c3c3b  MOV ECX,dword ptr [EBP + 0xffffff48]
005c3c41  FLD float ptr [ECX + 0x14]
005c3c44  FCOMP double ptr [0x006b2c50]
005c3c4a  FNSTSW AX
005c3c4c  TEST AH,0x41
005c3c4f  JNZ 0x005c3c53
005c3c51  JMP 0x005c3cab
005c3c53  MOV EDX,dword ptr [EBP + 0xffffff48]
005c3c59  MOV dword ptr [EDX + 0x1c],0x4
005c3c60  JMP 0x005c3cab
005c3c62  MOV EAX,dword ptr [EBP + 0xffffff48]
005c3c68  FLD float ptr [EAX + 0x14]
005c3c6b  FCOMP double ptr [0x006b2c50]
005c3c71  FNSTSW AX
005c3c73  TEST AH,0x41
005c3c76  JNZ 0x005c3c9c
005c3c78  MOV ECX,dword ptr [EBP + 0xffffff48]
005c3c7e  FLD float ptr [ECX + 0xc]
005c3c81  FMUL float ptr [EBP + 0x8]
005c3c84  MOV EDX,dword ptr [EBP + 0xffffff48]
005c3c8a  FADD float ptr [EDX + 0x8]
005c3c8d  MOV EAX,dword ptr [EBP + 0xffffff48]
005c3c93  FSTP float ptr [EAX + 0x8]
005c3c96  MOV byte ptr [EBP + -0x5],0x0
005c3c9a  JMP 0x005c3cab
005c3c9c  JMP 0x005c3cab
005c3c9e  MOV ECX,dword ptr [EBP + 0xffffff48]
005c3ca4  MOV dword ptr [ECX + 0x1c],0x1
005c3cab  MOVZX EDX,byte ptr [EBP + -0x5]
005c3caf  TEST EDX,EDX
005c3cb1  JZ 0x005c3cef
005c3cb3  MOV EAX,dword ptr [EBP + 0xffffff48]
005c3cb9  FLD float ptr [EAX + 0xc]
005c3cbc  FMUL float ptr [EBP + 0x8]
005c3cbf  MOV ECX,dword ptr [EBP + 0xffffff48]
005c3cc5  FADD float ptr [ECX + 0x8]
005c3cc8  MOV EDX,dword ptr [EBP + 0xffffff48]
005c3cce  FSTP float ptr [EDX + 0x8]
005c3cd1  MOV EAX,dword ptr [EBP + 0xffffff48]
005c3cd7  FLD float ptr [EAX + 0x10]
005c3cda  FMUL float ptr [EBP + 0x8]
005c3cdd  MOV ECX,dword ptr [EBP + 0xffffff48]
005c3ce3  FADD float ptr [ECX + 0xc]
005c3ce6  MOV EDX,dword ptr [EBP + 0xffffff48]
005c3cec  FSTP float ptr [EDX + 0xc]
005c3cef  MOV EAX,dword ptr [EBP + 0xffffff48]
005c3cf5  MOV ECX,dword ptr [EAX]
005c3cf7  MOV EDX,dword ptr [ECX + 0x4]
005c3cfa  MOV EAX,dword ptr [EDX + 0x10]
005c3cfd  MOV ECX,dword ptr [EBP + 0xffffff48]
005c3d03  MOV EDX,dword ptr [ECX + 0x4]
005c3d06  IMUL EDX,EDX,0x7c
005c3d09  MOV EAX,dword ptr [EAX + EDX*0x1 + 0x20]
005c3d0d  MOV dword ptr [EBP + -0x1c],EAX
005c3d10  MOV ECX,dword ptr [EBP + 0xffffff48]
005c3d16  FLD float ptr [ECX + 0x8]
005c3d19  FCOMP double ptr [0x006b2c50]
005c3d1f  FNSTSW AX
005c3d21  TEST AH,0x5
005c3d24  JP 0x005c3d3d
005c3d26  FILD dword ptr [EBP + -0x1c]
005c3d29  MOV EDX,dword ptr [EBP + 0xffffff48]
005c3d2f  FADD float ptr [EDX + 0x8]
005c3d32  MOV EAX,dword ptr [EBP + 0xffffff48]
005c3d38  FSTP float ptr [EAX + 0x8]
005c3d3b  JMP 0x005c3d10
005c3d3d  FILD dword ptr [EBP + -0x1c]
005c3d40  MOV ECX,dword ptr [EBP + 0xffffff48]
005c3d46  FLD float ptr [ECX + 0x8]
005c3d49  FCOMPP
005c3d4b  FNSTSW AX
005c3d4d  TEST AH,0x1
005c3d50  JNZ 0x005c3d69
005c3d52  FILD dword ptr [EBP + -0x1c]
005c3d55  MOV EDX,dword ptr [EBP + 0xffffff48]
005c3d5b  FSUBR float ptr [EDX + 0x8]
005c3d5e  MOV EAX,dword ptr [EBP + 0xffffff48]
005c3d64  FSTP float ptr [EAX + 0x8]
005c3d67  JMP 0x005c3d3d
005c3d69  MOV ECX,dword ptr [EBP + 0xffffff48]
005c3d6f  FLD float ptr [ECX + 0x8]
005c3d72  FSTP float ptr [EBP + -0x80]
005c3d75  LEA EDX,[EBP + -0x74]
005c3d78  PUSH EDX
005c3d79  FLD float ptr [EBP + -0x80]
005c3d7c  SUB ESP,0x8
005c3d7f  FSTP double ptr [ESP]
005c3d82  CALL dword ptr [0x006b2290]
005c3d88  ADD ESP,0xc
005c3d8b  FSTP double ptr [EBP + -0x7c]
005c3d8e  FLD double ptr [EBP + -0x74]
005c3d91  FSTP float ptr [EBP + -0x10]
005c3d94  FLD double ptr [EBP + -0x7c]
005c3d97  FSTP float ptr [EBP + 0xffffff40]
005c3d9d  FLD float ptr [EBP + 0xffffff40]
005c3da3  FSTP float ptr [EBP + -0xc]
005c3da6  MOV EAX,dword ptr [EBP + 0xffffff48]
005c3dac  CMP dword ptr [EAX + 0x1c],0x5
005c3db0  JNZ 0x005c3f3d
005c3db6  MOV ECX,dword ptr [EBP + 0xffffff48]
005c3dbc  MOV EDX,dword ptr [ECX]
005c3dbe  MOV EAX,dword ptr [EDX + 0x50]
005c3dc1  MOV ECX,dword ptr [EBP + 0xffffff48]
005c3dc7  FLD float ptr [ECX + 0xc]
005c3dca  FLD float ptr [EAX + 0x80]
005c3dd0  FCOMPP
005c3dd2  FNSTSW AX
005c3dd4  TEST AH,0x5
005c3dd7  JNP 0x005c3df3
005c3dd9  MOV EDX,dword ptr [EBP + 0xffffff48]
005c3ddf  FLD float ptr [EDX + 0x10]
005c3de2  FCOMP double ptr [0x006b2c50]
005c3de8  FNSTSW AX
005c3dea  TEST AH,0x44
005c3ded  JP 0x005c3f3d
005c3df3  MOV EAX,dword ptr [EBP + 0xffffff48]
005c3df9  FLDZ
005c3dfb  FSTP float ptr [EAX + 0x10]
005c3dfe  MOV ECX,dword ptr [EBP + 0xffffff48]
005c3e04  MOV EDX,dword ptr [ECX]
005c3e06  MOV EAX,dword ptr [EDX + 0x50]
005c3e09  MOV ECX,dword ptr [EBP + 0xffffff48]
005c3e0f  FLD float ptr [ECX + 0xc]
005c3e12  FLD float ptr [EAX + 0x84]
005c3e18  FCOMPP
005c3e1a  FNSTSW AX
005c3e1c  TEST AH,0x5
005c3e1f  JP 0x005c3e3b
005c3e21  MOV EDX,dword ptr [EBP + 0xffffff48]
005c3e27  MOV EAX,dword ptr [EDX]
005c3e29  MOV ECX,dword ptr [EAX + 0x50]
005c3e2c  MOV EDX,dword ptr [EBP + 0xffffff48]
005c3e32  FLD float ptr [ECX + 0x84]
005c3e38  FSTP float ptr [EDX + 0xc]
005c3e3b  MOV EAX,dword ptr [EBP + 0xffffff48]
005c3e41  FLD float ptr [EAX + 0x18]
005c3e44  FSUB double ptr [0x006b2c48]
005c3e4a  CALL 0x00686cc0
005c3e4f  MOV dword ptr [EBP + -0x24],EAX
005c3e52  CMP dword ptr [EBP + -0x24],0x0
005c3e56  JGE 0x005c3e88
005c3e58  MOV ECX,dword ptr [EBP + 0xffffff48]
005c3e5e  MOV EDX,dword ptr [ECX]
005c3e60  MOV EAX,dword ptr [EDX + 0x4]
005c3e63  MOV ECX,dword ptr [EAX + 0x10]
005c3e66  MOV EDX,dword ptr [EBP + 0xffffff48]
005c3e6c  MOV EAX,dword ptr [EDX + 0x4]
005c3e6f  IMUL EAX,EAX,0x7c
005c3e72  MOV ECX,dword ptr [ECX + EAX*0x1 + 0x20]
005c3e76  MOV dword ptr [EBP + 0xffffff7c],ECX
005c3e7c  MOV EDX,dword ptr [EBP + -0x24]
005c3e7f  ADD EDX,dword ptr [EBP + 0xffffff7c]
005c3e85  MOV dword ptr [EBP + -0x24],EDX
005c3e88  FILD dword ptr [EBP + -0x24]
005c3e8b  FLD float ptr [EBP + -0x10]
005c3e8e  FUCOMPP
005c3e90  FNSTSW AX
005c3e92  TEST AH,0x44
005c3e95  JP 0x005c3f3d
005c3e9b  MOV EAX,dword ptr [EBP + 0xffffff48]
005c3ea1  MOV ECX,dword ptr [EBP + 0xffffff48]
005c3ea7  FLD float ptr [ECX + 0x18]
005c3eaa  FSTP float ptr [EAX + 0x8]
005c3ead  MOV EDX,dword ptr [EBP + 0xffffff48]
005c3eb3  FLDZ
005c3eb5  FSTP float ptr [EDX + 0xc]
005c3eb8  MOV EAX,dword ptr [EBP + 0xffffff48]
005c3ebe  MOV dword ptr [EAX + 0x1c],0x1
005c3ec5  MOV ECX,dword ptr [EBP + 0xffffff48]
005c3ecb  FLD float ptr [ECX + 0x8]
005c3ece  FSTP float ptr [EBP + 0xffffff68]
005c3ed4  LEA EDX,[EBP + 0xffffff74]
005c3eda  PUSH EDX
005c3edb  FLD float ptr [EBP + 0xffffff68]
005c3ee1  SUB ESP,0x8
005c3ee4  FSTP double ptr [ESP]
005c3ee7  CALL dword ptr [0x006b2290]
005c3eed  ADD ESP,0xc
005c3ef0  FSTP double ptr [EBP + 0xffffff6c]
005c3ef6  FLD double ptr [EBP + 0xffffff74]
005c3efc  FSTP float ptr [EBP + -0x10]
005c3eff  FLD double ptr [EBP + 0xffffff6c]
005c3f05  FSTP float ptr [EBP + 0xffffff3c]
005c3f0b  FLD float ptr [EBP + 0xffffff3c]
005c3f11  FSTP float ptr [EBP + -0xc]
005c3f14  PUSH 0x0
005c3f16  MOV EAX,dword ptr [EBP + 0xffffff48]
005c3f1c  MOV ECX,dword ptr [EAX]
005c3f1e  MOV EDX,dword ptr [ECX + 0x50]
005c3f21  ADD EDX,0x88
005c3f27  PUSH EDX
005c3f28  CALL 0x00610e70
005c3f2d  ADD ESP,0x8
005c3f30  PUSH 0x759eb0
005c3f35  CALL 0x00610980
005c3f3a  ADD ESP,0x4
005c3f3d  MOV EAX,dword ptr [EBP + 0xffffff48]
005c3f43  MOV ECX,dword ptr [EAX]
005c3f45  MOV EDX,dword ptr [ECX + 0x4]
005c3f48  MOV EAX,dword ptr [EDX + 0x10]
005c3f4b  MOV ECX,dword ptr [EAX + 0x4]
005c3f4e  MOV dword ptr [EBP + -0x20],ECX
005c3f51  MOV EAX,dword ptr [EBP + -0x20]
005c3f54  NEG EAX
005c3f56  CDQ
005c3f57  SUB EAX,EDX
005c3f59  SAR EAX,0x1
005c3f5b  MOV dword ptr [EBP + 0xffffff38],EAX
005c3f61  FILD dword ptr [EBP + 0xffffff38]
005c3f67  FADD float ptr [EBP + -0x10]
005c3f6a  CALL 0x00686cc0
005c3f6f  MOV dword ptr [EBP + -0x4],EAX
005c3f72  MOV dword ptr [EBP + -0x28],0x0
005c3f79  JMP 0x005c3f84
005c3f7b  MOV EDX,dword ptr [EBP + -0x28]
005c3f7e  ADD EDX,0x1
005c3f81  MOV dword ptr [EBP + -0x28],EDX
005c3f84  MOV EAX,dword ptr [EBP + -0x20]
005c3f87  ADD EAX,0x1
005c3f8a  CMP dword ptr [EBP + -0x28],EAX
005c3f8d  JGE 0x005c4282
005c3f93  LEA ECX,[EBP + -0x34]
005c3f96  PUSH ECX
005c3f97  MOV EDX,dword ptr [EBP + -0x28]
005c3f9a  ADD EDX,dword ptr [EBP + -0x4]
005c3f9d  PUSH EDX
005c3f9e  MOV EAX,dword ptr [EBP + 0xffffff48]
005c3fa4  MOV ECX,dword ptr [EAX + 0x4]
005c3fa7  PUSH ECX
005c3fa8  MOV EDX,dword ptr [EBP + 0xffffff48]
005c3fae  MOV ECX,dword ptr [EDX]
005c3fb0  CALL 0x005c3140
005c3fb5  MOV EAX,dword ptr [EBP + 0xffffff48]
005c3fbb  ADD EAX,0x20
005c3fbe  MOV dword ptr [EBP + 0xffffff64],EAX
005c3fc4  MOV ECX,dword ptr [EBP + 0xffffff64]
005c3fca  CMP dword ptr [ECX + 0x4],0x0
005c3fce  JNZ 0x005c3fdc
005c3fd0  MOV dword ptr [EBP + 0xffffff34],0x0
005c3fda  JMP 0x005c3ff7
005c3fdc  MOV EDX,dword ptr [EBP + 0xffffff64]
005c3fe2  MOV EAX,dword ptr [EBP + 0xffffff64]
005c3fe8  MOV ECX,dword ptr [EDX + 0x8]
005c3feb  SUB ECX,dword ptr [EAX + 0x4]
005c3fee  SAR ECX,0x2
005c3ff1  MOV dword ptr [EBP + 0xffffff34],ECX
005c3ff7  MOV EDX,dword ptr [EBP + -0x28]
005c3ffa  CMP EDX,dword ptr [EBP + 0xffffff34]
005c4000  JC 0x005c4008
005c4002  CALL dword ptr [0x006b2274]
005c4008  MOV EAX,dword ptr [EBP + 0xffffff64]
005c400e  MOV ECX,dword ptr [EAX + 0x4]
005c4011  MOV EDX,dword ptr [EBP + -0x28]
005c4014  MOV EAX,dword ptr [ECX + EDX*0x4]
005c4017  MOV dword ptr [EBP + -0x40],EAX
005c401a  CMP dword ptr [EBP + -0x40],0x0
005c401e  JZ 0x005c403e
005c4020  MOV ECX,dword ptr [EBP + -0x40]
005c4023  CALL 0x005eafc0
005c4028  CMP EAX,dword ptr [EBP + -0x34]
005c402b  JNZ 0x005c403e
005c402d  MOV ECX,dword ptr [EBP + -0x40]
005c4030  CALL 0x005eb110
005c4035  CMP EAX,dword ptr [EBP + -0x30]
005c4038  JZ 0x005c40fc
005c403e  CMP dword ptr [EBP + -0x40],0x0
005c4042  JZ 0x005c4076
005c4044  MOV ECX,dword ptr [EBP + -0x40]
005c4047  MOV dword ptr [EBP + -0x58],ECX
005c404a  MOV EDX,dword ptr [EBP + -0x58]
005c404d  MOV dword ptr [EBP + -0x54],EDX
005c4050  CMP dword ptr [EBP + -0x54],0x0
005c4054  JZ 0x005c406c
005c4056  PUSH 0x1
005c4058  MOV EAX,dword ptr [EBP + -0x54]
005c405b  MOV EDX,dword ptr [EAX]
005c405d  MOV ECX,dword ptr [EBP + -0x54]
005c4060  MOV EAX,dword ptr [EDX]
005c4062  CALL EAX
005c4064  MOV dword ptr [EBP + 0xffffff30],EAX
005c406a  JMP 0x005c4076
005c406c  MOV dword ptr [EBP + 0xffffff30],0x0
005c4076  MOV ECX,dword ptr [EBP + -0x28]
005c4079  ADD ECX,dword ptr [EBP + -0x4]
005c407c  PUSH ECX
005c407d  MOV EDX,dword ptr [EBP + 0xffffff48]
005c4083  MOV EAX,dword ptr [EDX + 0x4]
005c4086  PUSH EAX
005c4087  MOV ECX,dword ptr [EBP + 0xffffff48]
005c408d  MOV ECX,dword ptr [ECX]
005c408f  CALL 0x005c31d0
005c4094  MOV dword ptr [EBP + -0x40],EAX
005c4097  MOV EDX,dword ptr [EBP + 0xffffff48]
005c409d  ADD EDX,0x20
005c40a0  MOV dword ptr [EBP + 0xffffff60],EDX
005c40a6  MOV EAX,dword ptr [EBP + 0xffffff60]
005c40ac  CMP dword ptr [EAX + 0x4],0x0
005c40b0  JNZ 0x005c40be
005c40b2  MOV dword ptr [EBP + 0xffffff2c],0x0
005c40bc  JMP 0x005c40d9
005c40be  MOV ECX,dword ptr [EBP + 0xffffff60]
005c40c4  MOV EDX,dword ptr [EBP + 0xffffff60]
005c40ca  MOV EAX,dword ptr [ECX + 0x8]
005c40cd  SUB EAX,dword ptr [EDX + 0x4]
005c40d0  SAR EAX,0x2
005c40d3  MOV dword ptr [EBP + 0xffffff2c],EAX
005c40d9  MOV ECX,dword ptr [EBP + -0x28]
005c40dc  CMP ECX,dword ptr [EBP + 0xffffff2c]
005c40e2  JC 0x005c40ea
005c40e4  CALL dword ptr [0x006b2274]
005c40ea  MOV EDX,dword ptr [EBP + 0xffffff60]
005c40f0  MOV EAX,dword ptr [EDX + 0x4]
005c40f3  MOV ECX,dword ptr [EBP + -0x28]
005c40f6  MOV EDX,dword ptr [EBP + -0x40]
005c40f9  MOV dword ptr [EAX + ECX*0x4],EDX
005c40fc  MOV dword ptr [EBP + -0x38],0x0
005c4103  MOV EAX,dword ptr [EBP + 0xffffff48]
005c4109  MOV ECX,dword ptr [EAX]
005c410b  MOV EDX,dword ptr [EBP + 0xffffff48]
005c4111  MOV EAX,dword ptr [EDX]
005c4113  MOV EDX,dword ptr [ECX]
005c4115  MOV ECX,EAX
005c4117  MOV EAX,dword ptr [EDX + 0x2c]
005c411a  CALL EAX
005c411c  MOVZX ECX,AL
005c411f  TEST ECX,ECX
005c4121  JZ 0x005c4193
005c4123  MOV EDX,dword ptr [EBP + -0x28]
005c4126  ADD EDX,dword ptr [EBP + -0x4]
005c4129  PUSH EDX
005c412a  MOV EAX,dword ptr [EBP + 0xffffff48]
005c4130  MOV ECX,dword ptr [EAX + 0x4]
005c4133  PUSH ECX
005c4134  MOV EDX,dword ptr [EBP + 0xffffff48]
005c413a  MOV EAX,dword ptr [EDX]
005c413c  MOV ECX,dword ptr [EAX + 0x4]
005c413f  CALL 0x005c9960
005c4144  TEST EAX,EAX
005c4146  JLE 0x005c4193
005c4148  MOV dword ptr [EBP + -0x4c],0xfa
005c414f  MOV dword ptr [EBP + -0x44],0x0
005c4156  MOV ECX,dword ptr [EBP + -0x40]
005c4159  CALL 0x005eb240
005c415e  ADD EAX,0x1
005c4161  MOV dword ptr [EBP + -0x48],EAX
005c4164  MOV ECX,dword ptr [EBP + -0x48]
005c4167  MOV dword ptr [EBP + -0x50],ECX
005c416a  MOV EAX,dword ptr [EBP + -0x18]
005c416d  CDQ
005c416e  MOV ECX,0xfa
005c4173  IDIV ECX
005c4175  MOV dword ptr [EBP + -0x38],EAX
005c4178  MOV EAX,dword ptr [EBP + -0x38]
005c417b  CDQ
005c417c  IDIV dword ptr [EBP + -0x50]
005c417f  MOV dword ptr [EBP + -0x38],EDX
005c4182  MOV EDX,dword ptr [EBP + -0x38]
005c4185  CMP EDX,dword ptr [EBP + -0x48]
005c4188  JL 0x005c4193
005c418a  MOV EAX,dword ptr [EBP + -0x48]
005c418d  SUB EAX,0x1
005c4190  MOV dword ptr [EBP + -0x38],EAX
005c4193  MOV ECX,dword ptr [EBP + -0x40]
005c4196  CALL 0x005eb220
005c419b  CMP dword ptr [EBP + -0x38],EAX
005c419e  JZ 0x005c41b4
005c41a0  MOV ECX,dword ptr [EBP + -0x38]
005c41a3  PUSH ECX
005c41a4  MOV EDX,dword ptr [EBP + -0x40]
005c41a7  MOV EAX,dword ptr [EDX]
005c41a9  MOV ECX,dword ptr [EBP + -0x40]
005c41ac  MOV EDX,dword ptr [EAX + 0xb0]
005c41b2  CALL EDX
005c41b4  MOV EAX,dword ptr [EBP + 0xffffff48]
005c41ba  FLD float ptr [EAX + 0x8]
005c41bd  FSTP float ptr [EBP + 0xffffff4c]
005c41c3  LEA ECX,[EBP + 0xffffff58]
005c41c9  PUSH ECX
005c41ca  FLD float ptr [EBP + 0xffffff4c]
005c41d0  SUB ESP,0x8
005c41d3  FSTP double ptr [ESP]
005c41d6  CALL dword ptr [0x006b2290]
005c41dc  ADD ESP,0xc
005c41df  FSTP double ptr [EBP + 0xffffff50]
005c41e5  FLD double ptr [EBP + 0xffffff58]
005c41eb  FSTP float ptr [EBP + -0x3c]
005c41ee  FLD double ptr [EBP + 0xffffff50]
005c41f4  FSTP float ptr [EBP + 0xffffff28]
005c41fa  FLD float ptr [EBP + 0xffffff28]
005c4200  FCHS
005c4202  FIADD dword ptr [EBP + -0x28]
005c4205  FSTP float ptr [EBP + -0x3c]
005c4208  MOV EDX,dword ptr [EBP + 0xffffff48]
005c420e  MOV EAX,dword ptr [EDX]
005c4210  MOV ECX,dword ptr [EAX + 0x50]
005c4213  FILD dword ptr [ECX + 0x58]
005c4216  FMUL float ptr [EBP + -0x3c]
005c4219  MOV EDX,dword ptr [EBP + 0xffffff48]
005c421f  MOV EAX,dword ptr [EDX]
005c4221  MOV ECX,dword ptr [EAX + 0x50]
005c4224  FIADD dword ptr [ECX + 0x50]
005c4227  MOV EDX,dword ptr [EBP + 0xffffff48]
005c422d  MOV EAX,dword ptr [EDX]
005c422f  MOV ECX,dword ptr [EAX + 0x50]
005c4232  FIADD dword ptr [ECX + 0x60]
005c4235  CALL 0x00686cc0
005c423a  PUSH EAX
005c423b  MOV EDX,dword ptr [EBP + 0xffffff48]
005c4241  MOV EAX,dword ptr [EDX]
005c4243  MOV ECX,dword ptr [EAX + 0x50]
005c4246  MOV EDX,dword ptr [EBP + 0xffffff48]
005c424c  MOV EAX,dword ptr [EDX + 0x4]
005c424f  IMUL EAX,dword ptr [ECX + 0x54]
005c4253  MOV ECX,dword ptr [EBP + 0xffffff48]
005c4259  MOV EDX,dword ptr [ECX]
005c425b  MOV ECX,dword ptr [EDX + 0x50]
005c425e  ADD EAX,dword ptr [ECX + 0x4c]
005c4261  MOV EDX,dword ptr [EBP + 0xffffff48]
005c4267  MOV ECX,dword ptr [EDX]
005c4269  MOV EDX,dword ptr [ECX + 0x50]
005c426c  ADD EAX,dword ptr [EDX + 0x5c]
005c426f  PUSH EAX
005c4270  MOV EAX,dword ptr [EBP + -0x40]
005c4273  MOV EDX,dword ptr [EAX]
005c4275  MOV ECX,dword ptr [EBP + -0x40]
005c4278  MOV EAX,dword ptr [EDX + 0x44]
005c427b  CALL EAX
005c427d  JMP 0x005c3f7b
005c4282  MOV ECX,dword ptr [EBP + 0xffffff48]
005c4288  FLD float ptr [ECX + 0x14]
005c428b  FCOMP double ptr [0x006b2c50]
005c4291  FNSTSW AX
005c4293  TEST AH,0x5
005c4296  JP 0x005c42a3
005c4298  MOV EDX,dword ptr [EBP + 0xffffff48]
005c429e  FLDZ
005c42a0  FSTP float ptr [EDX + 0x14]
005c42a3  MOV ESP,EBP
005c42a5  POP EBP
005c42a6  RET 0x4
