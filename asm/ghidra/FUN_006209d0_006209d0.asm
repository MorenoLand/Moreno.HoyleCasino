; FUN_006209d0  006209d0
006209d0  PUSH EBP
006209d1  MOV EBP,ESP
006209d3  SUB ESP,0x54
006209d6  PUSH EBX
006209d7  MOV dword ptr [EBP + -0x50],ECX
006209da  MOV byte ptr [EBP + -0x22],0x0
006209de  MOV dword ptr [EBP + -0x2c],0x0
006209e5  MOV byte ptr [EBP + -0x21],0x0
006209e9  MOV EAX,dword ptr [EBP + 0x8]
006209ec  MOV dword ptr [EBP + -0x10],EAX
006209ef  MOV dword ptr [EBP + -0xc],0x0
006209f6  JMP 0x00620a01
006209f8  MOV ECX,dword ptr [EBP + -0xc]
006209fb  ADD ECX,0x1
006209fe  MOV dword ptr [EBP + -0xc],ECX
00620a01  MOV EDX,dword ptr [EBP + -0xc]
00620a04  CMP EDX,dword ptr [EBP + 0x10]
00620a07  JGE 0x00620b18
00620a0d  MOV EAX,dword ptr [EBP + -0xc]
00620a10  IMUL EAX,dword ptr [EBP + 0xc]
00620a14  MOV ECX,dword ptr [EBP + 0x8]
00620a17  LEA EDX,[ECX + EAX*0x4]
00620a1a  MOV dword ptr [EBP + -0x14],EDX
00620a1d  MOV byte ptr [EBP + -0x22],0x1
00620a21  MOV dword ptr [EBP + -0x34],0x0
00620a28  JMP 0x00620a33
00620a2a  MOV EAX,dword ptr [EBP + -0x34]
00620a2d  ADD EAX,0x1
00620a30  MOV dword ptr [EBP + -0x34],EAX
00620a33  MOV ECX,dword ptr [EBP + -0x34]
00620a36  CMP ECX,dword ptr [EBP + 0xc]
00620a39  JGE 0x00620ac5
00620a3f  MOV EDX,dword ptr [EBP + -0x34]
00620a42  AND EDX,0x80000001
00620a48  JNS 0x00620a4f
00620a4a  DEC EDX
00620a4b  OR EDX,0xfffffffe
00620a4e  INC EDX
00620a4f  TEST EDX,EDX
00620a51  JZ 0x00620a82
00620a53  MOV EAX,dword ptr [EBP + -0x14]
00620a56  MOVZX ECX,byte ptr [EAX]
00620a59  CMP ECX,0x19
00620a5c  JG 0x00620a76
00620a5e  MOV EDX,dword ptr [EBP + -0x14]
00620a61  MOVZX EAX,byte ptr [EDX + 0x1]
00620a65  CMP EAX,0x19
00620a68  JG 0x00620a76
00620a6a  MOV ECX,dword ptr [EBP + -0x14]
00620a6d  MOVZX EDX,byte ptr [ECX + 0x2]
00620a71  CMP EDX,0x19
00620a74  JLE 0x00620a80
00620a76  MOV byte ptr [EBP + -0x22],0x0
00620a7a  MOV EAX,dword ptr [EBP + 0xc]
00620a7d  MOV dword ptr [EBP + -0x34],EAX
00620a80  JMP 0x00620ab7
00620a82  MOV ECX,dword ptr [EBP + -0x14]
00620a85  MOVZX EDX,byte ptr [ECX]
00620a88  CMP EDX,0xe6
00620a8e  JL 0x00620aad
00620a90  MOV EAX,dword ptr [EBP + -0x14]
00620a93  MOVZX ECX,byte ptr [EAX + 0x1]
00620a97  CMP ECX,0xe6
00620a9d  JL 0x00620aad
00620a9f  MOV EDX,dword ptr [EBP + -0x14]
00620aa2  MOVZX EAX,byte ptr [EDX + 0x2]
00620aa6  CMP EAX,0xe6
00620aab  JGE 0x00620ab7
00620aad  MOV byte ptr [EBP + -0x22],0x0
00620ab1  MOV ECX,dword ptr [EBP + 0xc]
00620ab4  MOV dword ptr [EBP + -0x34],ECX
00620ab7  MOV EDX,dword ptr [EBP + -0x14]
00620aba  ADD EDX,0x4
00620abd  MOV dword ptr [EBP + -0x14],EDX
00620ac0  JMP 0x00620a2a
00620ac5  MOVZX EAX,byte ptr [EBP + -0x22]
00620ac9  TEST EAX,EAX
00620acb  JZ 0x00620b0a
00620acd  MOV byte ptr [EBP + -0x21],0x1
00620ad1  PUSH 0x1
00620ad3  PUSH 0x1
00620ad5  MOVZX ECX,byte ptr [EBP + 0x18]
00620ad9  PUSH ECX
00620ada  MOV EDX,dword ptr [EBP + -0x2c]
00620add  PUSH EDX
00620ade  MOV EAX,dword ptr [EBP + 0xc]
00620ae1  PUSH EAX
00620ae2  MOV ECX,dword ptr [EBP + -0x10]
00620ae5  PUSH ECX
00620ae6  MOV ECX,dword ptr [EBP + -0x50]
00620ae9  CALL 0x006209d0
00620aee  MOV EDX,dword ptr [EBP + -0x2c]
00620af1  ADD EDX,0x1
00620af4  IMUL EDX,dword ptr [EBP + 0xc]
00620af8  MOV EAX,dword ptr [EBP + -0x10]
00620afb  LEA ECX,[EAX + EDX*0x4]
00620afe  MOV dword ptr [EBP + -0x10],ECX
00620b01  MOV dword ptr [EBP + -0x2c],0x0
00620b08  JMP 0x00620b13
00620b0a  MOV EDX,dword ptr [EBP + -0x2c]
00620b0d  ADD EDX,0x1
00620b10  MOV dword ptr [EBP + -0x2c],EDX
00620b13  JMP 0x006209f8
00620b18  MOVZX EAX,byte ptr [EBP + -0x21]
00620b1c  TEST EAX,EAX
00620b1e  JZ 0x00620b42
00620b20  PUSH 0x1
00620b22  PUSH 0x1
00620b24  MOVZX ECX,byte ptr [EBP + 0x18]
00620b28  PUSH ECX
00620b29  MOV EDX,dword ptr [EBP + -0x2c]
00620b2c  PUSH EDX
00620b2d  MOV EAX,dword ptr [EBP + 0xc]
00620b30  PUSH EAX
00620b31  MOV ECX,dword ptr [EBP + -0x10]
00620b34  PUSH ECX
00620b35  MOV ECX,dword ptr [EBP + -0x50]
00620b38  CALL 0x006209d0
00620b3d  JMP 0x00620f90
00620b42  CMP dword ptr [EBP + 0x14],0x4
00620b46  JNZ 0x00620c56
00620b4c  MOV byte ptr [EBP + -0x23],0x0
00620b50  MOV byte ptr [EBP + -0x2d],0x0
00620b54  MOV dword ptr [EBP + -0xc],0x0
00620b5b  JMP 0x00620b66
00620b5d  MOV EDX,dword ptr [EBP + -0xc]
00620b60  ADD EDX,0x1
00620b63  MOV dword ptr [EBP + -0xc],EDX
00620b66  MOV EAX,dword ptr [EBP + -0xc]
00620b69  CMP EAX,dword ptr [EBP + 0x10]
00620b6c  JGE 0x00620bf7
00620b72  MOV dword ptr [EBP + -0x34],0x0
00620b79  JMP 0x00620b84
00620b7b  MOV ECX,dword ptr [EBP + -0x34]
00620b7e  ADD ECX,0x1
00620b81  MOV dword ptr [EBP + -0x34],ECX
00620b84  MOV EDX,dword ptr [EBP + -0x34]
00620b87  CMP EDX,dword ptr [EBP + 0xc]
00620b8a  JGE 0x00620bf2
00620b8c  MOV EAX,dword ptr [EBP + -0xc]
00620b8f  IMUL EAX,dword ptr [EBP + 0xc]
00620b93  ADD EAX,dword ptr [EBP + -0x34]
00620b96  MOV dword ptr [EBP + -0x38],EAX
00620b99  MOVZX ECX,byte ptr [EBP + -0x2d]
00620b9d  TEST ECX,ECX
00620b9f  JNZ 0x00620bd1
00620ba1  MOV EDX,dword ptr [EBP + -0x38]
00620ba4  MOV EAX,dword ptr [EBP + 0x8]
00620ba7  MOVZX ECX,byte ptr [EAX + EDX*0x4]
00620bab  TEST ECX,ECX
00620bad  JNZ 0x00620bcd
00620baf  MOV EDX,dword ptr [EBP + -0x38]
00620bb2  MOV EAX,dword ptr [EBP + 0x8]
00620bb5  MOVZX ECX,byte ptr [EAX + EDX*0x4 + 0x1]
00620bba  TEST ECX,ECX
00620bbc  JNZ 0x00620bcd
00620bbe  MOV EDX,dword ptr [EBP + -0x38]
00620bc1  MOV EAX,dword ptr [EBP + 0x8]
00620bc4  MOVZX ECX,byte ptr [EAX + EDX*0x4 + 0x2]
00620bc9  TEST ECX,ECX
00620bcb  JZ 0x00620bd1
00620bcd  MOV byte ptr [EBP + -0x2d],0x1
00620bd1  MOV EDX,dword ptr [EBP + -0x38]
00620bd4  MOV EAX,dword ptr [EBP + 0x8]
00620bd7  MOVZX ECX,byte ptr [EAX + EDX*0x4 + 0x3]
00620bdc  TEST ECX,ECX
00620bde  JZ 0x00620bf0
00620be0  MOV byte ptr [EBP + -0x23],0x1
00620be4  MOV EDX,dword ptr [EBP + 0x10]
00620be7  MOV dword ptr [EBP + -0xc],EDX
00620bea  MOV EAX,dword ptr [EBP + 0xc]
00620bed  MOV dword ptr [EBP + -0x34],EAX
00620bf0  JMP 0x00620b7b
00620bf2  JMP 0x00620b5d
00620bf7  MOVZX ECX,byte ptr [EBP + -0x23]
00620bfb  TEST ECX,ECX
00620bfd  JNZ 0x00620c51
00620bff  MOVZX EDX,byte ptr [EBP + -0x2d]
00620c03  TEST EDX,EDX
00620c05  JZ 0x00620c51
00620c07  MOV dword ptr [EBP + -0xc],0x0
00620c0e  JMP 0x00620c19
00620c10  MOV EAX,dword ptr [EBP + -0xc]
00620c13  ADD EAX,0x1
00620c16  MOV dword ptr [EBP + -0xc],EAX
00620c19  MOV ECX,dword ptr [EBP + -0xc]
00620c1c  CMP ECX,dword ptr [EBP + 0x10]
00620c1f  JGE 0x00620c51
00620c21  MOV dword ptr [EBP + -0x34],0x0
00620c28  JMP 0x00620c33
00620c2a  MOV EDX,dword ptr [EBP + -0x34]
00620c2d  ADD EDX,0x1
00620c30  MOV dword ptr [EBP + -0x34],EDX
00620c33  MOV EAX,dword ptr [EBP + -0x34]
00620c36  CMP EAX,dword ptr [EBP + 0xc]
00620c39  JGE 0x00620c4f
00620c3b  MOV ECX,dword ptr [EBP + -0xc]
00620c3e  IMUL ECX,dword ptr [EBP + 0xc]
00620c42  ADD ECX,dword ptr [EBP + -0x34]
00620c45  MOV EDX,dword ptr [EBP + 0x8]
00620c48  MOV byte ptr [EDX + ECX*0x4 + 0x3],0xff
00620c4d  JMP 0x00620c2a
00620c4f  JMP 0x00620c10
00620c51  JMP 0x00620d2b
00620c56  MOV dword ptr [EBP + -0x3c],0xffffffff
00620c5d  MOV EAX,dword ptr [EBP + 0x14]
00620c60  MOV dword ptr [EBP + -0x54],EAX
00620c63  MOV ECX,dword ptr [EBP + -0x54]
00620c66  SUB ECX,0xe
00620c69  MOV dword ptr [EBP + -0x54],ECX
00620c6c  CMP dword ptr [EBP + -0x54],0x32
00620c70  JA 0x00620c9c
00620c72  MOV EDX,dword ptr [EBP + -0x54]
00620c75  MOVZX EAX,byte ptr [EDX + 0x620fa8]
00620c7c  JMP dword ptr [EAX*0x4 + 0x620f98]
00620c83  MOV dword ptr [EBP + -0x3c],0x0
00620c8a  JMP 0x00620c9c
00620c8c  MOV dword ptr [EBP + -0x3c],0x80
00620c93  JMP 0x00620c9c
00620c95  MOV dword ptr [EBP + -0x3c],0xff
00620c9c  MOV dword ptr [EBP + -0xc],0x0
00620ca3  JMP 0x00620cae
00620ca5  MOV ECX,dword ptr [EBP + -0xc]
00620ca8  ADD ECX,0x1
00620cab  MOV dword ptr [EBP + -0xc],ECX
00620cae  MOV EDX,dword ptr [EBP + -0xc]
00620cb1  CMP EDX,dword ptr [EBP + 0x10]
00620cb4  JGE 0x00620d2b
00620cb6  MOV dword ptr [EBP + -0x34],0x0
00620cbd  JMP 0x00620cc8
00620cbf  MOV EAX,dword ptr [EBP + -0x34]
00620cc2  ADD EAX,0x1
00620cc5  MOV dword ptr [EBP + -0x34],EAX
00620cc8  MOV ECX,dword ptr [EBP + -0x34]
00620ccb  CMP ECX,dword ptr [EBP + 0xc]
00620cce  JGE 0x00620d26
00620cd0  MOV EDX,dword ptr [EBP + -0xc]
00620cd3  IMUL EDX,dword ptr [EBP + 0xc]
00620cd7  ADD EDX,dword ptr [EBP + -0x34]
00620cda  MOV dword ptr [EBP + -0x40],EDX
00620cdd  MOV EAX,dword ptr [EBP + -0x40]
00620ce0  MOV ECX,dword ptr [EBP + 0x8]
00620ce3  MOVZX EDX,byte ptr [ECX + EAX*0x4]
00620ce7  CMP EDX,dword ptr [EBP + -0x3c]
00620cea  JNZ 0x00620d0c
00620cec  MOV EAX,dword ptr [EBP + -0x40]
00620cef  MOV ECX,dword ptr [EBP + 0x8]
00620cf2  MOVZX EDX,byte ptr [ECX + EAX*0x4 + 0x1]
00620cf7  CMP EDX,dword ptr [EBP + -0x3c]
00620cfa  JNZ 0x00620d0c
00620cfc  MOV EAX,dword ptr [EBP + -0x40]
00620cff  MOV ECX,dword ptr [EBP + 0x8]
00620d02  MOVZX EDX,byte ptr [ECX + EAX*0x4 + 0x2]
00620d07  CMP EDX,dword ptr [EBP + -0x3c]
00620d0a  JZ 0x00620d19
00620d0c  MOV EAX,dword ptr [EBP + -0x40]
00620d0f  MOV ECX,dword ptr [EBP + 0x8]
00620d12  MOV byte ptr [ECX + EAX*0x4 + 0x3],0xff
00620d17  JMP 0x00620d24
00620d19  MOV EDX,dword ptr [EBP + -0x40]
00620d1c  MOV EAX,dword ptr [EBP + 0x8]
00620d1f  MOV byte ptr [EAX + EDX*0x4 + 0x3],0x0
00620d24  JMP 0x00620cbf
00620d26  JMP 0x00620ca5
00620d2b  MOV dword ptr [EBP + -0x18],0x0
00620d32  MOV dword ptr [EBP + -0x28],0x0
00620d39  MOV dword ptr [EBP + -0x4],0x0
00620d40  MOV dword ptr [EBP + -0x20],0x0
00620d47  MOVZX ECX,byte ptr [EBP + 0x18]
00620d4b  TEST ECX,ECX
00620d4d  JZ 0x00620d73
00620d4f  LEA EDX,[EBP + -0x4]
00620d52  PUSH EDX
00620d53  LEA EAX,[EBP + -0x28]
00620d56  PUSH EAX
00620d57  LEA ECX,[EBP + -0x20]
00620d5a  PUSH ECX
00620d5b  LEA EDX,[EBP + -0x18]
00620d5e  PUSH EDX
00620d5f  MOV EAX,dword ptr [EBP + 0x10]
00620d62  PUSH EAX
00620d63  MOV ECX,dword ptr [EBP + 0xc]
00620d66  PUSH ECX
00620d67  MOV EDX,dword ptr [EBP + 0x8]
00620d6a  PUSH EDX
00620d6b  MOV ECX,dword ptr [EBP + -0x50]
00620d6e  CALL 0x00620650
00620d73  MOV EAX,dword ptr [EBP + -0x50]
00620d76  MOV EAX,dword ptr [EAX + 0x314]
00620d7c  ADD EAX,0x1
00620d7f  XOR ECX,ECX
00620d81  MOV EDX,0x14
00620d86  MUL EDX
00620d88  SETO CL
00620d8b  NEG ECX
00620d8d  OR ECX,EAX
00620d8f  PUSH ECX
00620d90  CALL 0x00686d82
00620d95  ADD ESP,0x4
00620d98  MOV dword ptr [EBP + -0x44],EAX
00620d9b  MOV EAX,dword ptr [EBP + -0x44]
00620d9e  MOV dword ptr [EBP + -0x8],EAX
00620da1  MOV dword ptr [EBP + -0xc],0x0
00620da8  JMP 0x00620db3
00620daa  MOV ECX,dword ptr [EBP + -0xc]
00620dad  ADD ECX,0x1
00620db0  MOV dword ptr [EBP + -0xc],ECX
00620db3  MOV EDX,dword ptr [EBP + -0x50]
00620db6  MOV EAX,dword ptr [EBP + -0xc]
00620db9  CMP EAX,dword ptr [EDX + 0x314]
00620dbf  JGE 0x00620df9
00620dc1  MOV ECX,dword ptr [EBP + -0xc]
00620dc4  IMUL ECX,ECX,0x14
00620dc7  MOV EDX,dword ptr [EBP + -0x50]
00620dca  MOV EAX,dword ptr [EDX + 0x318]
00620dd0  ADD EAX,ECX
00620dd2  MOV ECX,dword ptr [EBP + -0xc]
00620dd5  IMUL ECX,ECX,0x14
00620dd8  ADD ECX,dword ptr [EBP + -0x8]
00620ddb  MOV EDX,dword ptr [EAX]
00620ddd  MOV dword ptr [ECX],EDX
00620ddf  MOV EDX,dword ptr [EAX + 0x4]
00620de2  MOV dword ptr [ECX + 0x4],EDX
00620de5  MOV EDX,dword ptr [EAX + 0x8]
00620de8  MOV dword ptr [ECX + 0x8],EDX
00620deb  MOV EDX,dword ptr [EAX + 0xc]
00620dee  MOV dword ptr [ECX + 0xc],EDX
00620df1  MOV EAX,dword ptr [EAX + 0x10]
00620df4  MOV dword ptr [ECX + 0x10],EAX
00620df7  JMP 0x00620daa
00620df9  MOV ECX,dword ptr [EBP + -0x50]
00620dfc  MOV EDX,dword ptr [ECX + 0x314]
00620e02  IMUL EDX,EDX,0x14
00620e05  ADD EDX,dword ptr [EBP + -0x8]
00620e08  MOV dword ptr [EBP + -0x1c],EDX
00620e0b  MOV EAX,dword ptr [EBP + -0x50]
00620e0e  MOV ECX,dword ptr [EAX + 0x314]
00620e14  ADD ECX,0x1
00620e17  MOV EDX,dword ptr [EBP + -0x50]
00620e1a  MOV dword ptr [EDX + 0x314],ECX
00620e20  MOV EAX,dword ptr [EBP + -0x50]
00620e23  CMP dword ptr [EAX + 0x318],0x0
00620e2a  JZ 0x00620e44
00620e2c  MOV ECX,dword ptr [EBP + -0x50]
00620e2f  MOV EDX,dword ptr [ECX + 0x318]
00620e35  MOV dword ptr [EBP + -0x48],EDX
00620e38  MOV EAX,dword ptr [EBP + -0x48]
00620e3b  PUSH EAX
00620e3c  CALL 0x00686cae
00620e41  ADD ESP,0x4
00620e44  MOV ECX,dword ptr [EBP + -0x50]
00620e47  MOV EDX,dword ptr [EBP + -0x8]
00620e4a  MOV dword ptr [ECX + 0x318],EDX
00620e50  MOV EAX,dword ptr [EBP + -0x18]
00620e53  CMP EAX,dword ptr [EBP + 0xc]
00620e56  JZ 0x00620e70
00620e58  MOV ECX,dword ptr [EBP + -0x20]
00620e5b  CMP ECX,dword ptr [EBP + 0x10]
00620e5e  JZ 0x00620e70
00620e60  MOV EDX,dword ptr [EBP + -0x28]
00620e63  CMP EDX,dword ptr [EBP + 0xc]
00620e66  JZ 0x00620e70
00620e68  MOV EAX,dword ptr [EBP + -0x4]
00620e6b  CMP EAX,dword ptr [EBP + 0x10]
00620e6e  JNZ 0x00620ea6
00620e70  MOV ECX,dword ptr [EBP + -0x1c]
00620e73  MOV dword ptr [ECX],0x0
00620e79  MOV EDX,dword ptr [EBP + -0x1c]
00620e7c  MOV dword ptr [EDX + 0x4],0x0
00620e83  MOV EAX,dword ptr [EBP + -0x1c]
00620e86  MOV dword ptr [EAX + 0x8],0x0
00620e8d  MOV ECX,dword ptr [EBP + -0x1c]
00620e90  MOV dword ptr [ECX + 0xc],0x0
00620e97  MOV EDX,dword ptr [EBP + -0x1c]
00620e9a  MOV dword ptr [EDX + 0x10],0x0
00620ea1  JMP 0x00620f26
00620ea6  MOVZX EAX,byte ptr [EBP + 0x1c]
00620eaa  TEST EAX,EAX
00620eac  JZ 0x00620ec1
00620eae  MOV ECX,dword ptr [EBP + -0x1c]
00620eb1  MOV EDX,dword ptr [EBP + -0x18]
00620eb4  MOV dword ptr [ECX],EDX
00620eb6  MOV EAX,dword ptr [EBP + -0x1c]
00620eb9  MOV ECX,dword ptr [EBP + -0x20]
00620ebc  MOV dword ptr [EAX + 0x4],ECX
00620ebf  JMP 0x00620ed4
00620ec1  MOV EDX,dword ptr [EBP + -0x1c]
00620ec4  MOV dword ptr [EDX],0x0
00620eca  MOV EAX,dword ptr [EBP + -0x1c]
00620ecd  MOV dword ptr [EAX + 0x4],0x0
00620ed4  MOV ECX,dword ptr [EBP + 0xc]
00620ed7  SUB ECX,dword ptr [EBP + -0x18]
00620eda  SUB ECX,dword ptr [EBP + -0x28]
00620edd  MOV EDX,dword ptr [EBP + -0x1c]
00620ee0  MOV dword ptr [EDX + 0x8],ECX
00620ee3  MOV EAX,dword ptr [EBP + 0x10]
00620ee6  SUB EAX,dword ptr [EBP + -0x20]
00620ee9  SUB EAX,dword ptr [EBP + -0x4]
00620eec  MOV ECX,dword ptr [EBP + -0x1c]
00620eef  MOV dword ptr [ECX + 0xc],EAX
00620ef2  MOV EDX,dword ptr [EBP + -0x1c]
00620ef5  MOV EAX,dword ptr [EBP + -0x1c]
00620ef8  MOV ECX,dword ptr [EDX + 0x8]
00620efb  IMUL ECX,dword ptr [EAX + 0xc]
00620eff  XOR EBX,EBX
00620f01  MOV EAX,ECX
00620f03  MOV EDX,0x4
00620f08  MUL EDX
00620f0a  SETO BL
00620f0d  NEG EBX
00620f0f  OR EBX,EAX
00620f11  PUSH EBX
00620f12  CALL 0x00686d82
00620f17  ADD ESP,0x4
00620f1a  MOV dword ptr [EBP + -0x4c],EAX
00620f1d  MOV EAX,dword ptr [EBP + -0x1c]
00620f20  MOV ECX,dword ptr [EBP + -0x4c]
00620f23  MOV dword ptr [EAX + 0x10],ECX
00620f26  MOV dword ptr [EBP + -0xc],0x0
00620f2d  JMP 0x00620f38
00620f2f  MOV EDX,dword ptr [EBP + -0xc]
00620f32  ADD EDX,0x1
00620f35  MOV dword ptr [EBP + -0xc],EDX
00620f38  MOV EAX,dword ptr [EBP + -0x1c]
00620f3b  MOV ECX,dword ptr [EBP + -0xc]
00620f3e  CMP ECX,dword ptr [EAX + 0xc]
00620f41  JGE 0x00620f90
00620f43  MOV dword ptr [EBP + -0x34],0x0
00620f4a  JMP 0x00620f55
00620f4c  MOV EDX,dword ptr [EBP + -0x34]
00620f4f  ADD EDX,0x1
00620f52  MOV dword ptr [EBP + -0x34],EDX
00620f55  MOV EAX,dword ptr [EBP + -0x1c]
00620f58  MOV ECX,dword ptr [EBP + -0x34]
00620f5b  CMP ECX,dword ptr [EAX + 0x8]
00620f5e  JGE 0x00620f8e
00620f60  MOV EDX,dword ptr [EBP + -0xc]
00620f63  ADD EDX,dword ptr [EBP + -0x20]
00620f66  IMUL EDX,dword ptr [EBP + 0xc]
00620f6a  ADD EDX,dword ptr [EBP + -0x34]
00620f6d  ADD EDX,dword ptr [EBP + -0x18]
00620f70  MOV EAX,dword ptr [EBP + 0x8]
00620f73  MOV ECX,dword ptr [EAX + EDX*0x4]
00620f76  MOV EDX,dword ptr [EBP + -0x1c]
00620f79  MOV EAX,dword ptr [EBP + -0xc]
00620f7c  IMUL EAX,dword ptr [EDX + 0x8]
00620f80  ADD EAX,dword ptr [EBP + -0x34]
00620f83  MOV EDX,dword ptr [EBP + -0x1c]
00620f86  MOV EDX,dword ptr [EDX + 0x10]
00620f89  MOV dword ptr [EDX + EAX*0x4],ECX
00620f8c  JMP 0x00620f4c
00620f8e  JMP 0x00620f2f
00620f90  POP EBX
00620f91  MOV ESP,EBP
00620f93  POP EBP
00620f94  RET 0x18
