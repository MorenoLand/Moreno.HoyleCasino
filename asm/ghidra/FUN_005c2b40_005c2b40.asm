; FUN_005c2b40  005c2b40
005c2b40  PUSH EBP
005c2b41  MOV EBP,ESP
005c2b43  SUB ESP,0x84
005c2b49  MOV dword ptr [EBP + -0x50],ECX
005c2b4c  MOV byte ptr [EBP + -0x5],0x1
005c2b50  MOV EAX,dword ptr [EBP + 0x8]
005c2b53  PUSH EAX
005c2b54  MOV ECX,dword ptr [EBP + -0x50]
005c2b57  CALL 0x005c15c0
005c2b5c  MOVZX ECX,AL
005c2b5f  TEST ECX,ECX
005c2b61  JZ 0x005c2b6a
005c2b63  MOV AL,0x1
005c2b65  JMP 0x005c3109
005c2b6a  MOV EDX,dword ptr [EBP + 0x8]
005c2b6d  MOV dword ptr [EBP + -0x54],EDX
005c2b70  CMP dword ptr [EBP + -0x54],0x5e
005c2b74  JZ 0x005c2b7b
005c2b76  JMP 0x005c2e3b
005c2b7b  MOV EAX,dword ptr [EBP + -0x50]
005c2b7e  MOV EDX,dword ptr [EAX]
005c2b80  MOV ECX,dword ptr [EBP + -0x50]
005c2b83  MOV EAX,dword ptr [EDX + 0x28]
005c2b86  CALL EAX
005c2b88  MOVZX ECX,AL
005c2b8b  TEST ECX,ECX
005c2b8d  JZ 0x005c2ba3
005c2b8f  MOV EDX,dword ptr [EBP + -0x50]
005c2b92  MOV EAX,dword ptr [EDX]
005c2b94  MOV ECX,dword ptr [EBP + -0x50]
005c2b97  MOV EDX,dword ptr [EAX + 0x24]
005c2b9a  CALL EDX
005c2b9c  MOVZX EAX,AL
005c2b9f  TEST EAX,EAX
005c2ba1  JZ 0x005c2ba8
005c2ba3  JMP 0x005c2e3f
005c2ba8  MOV ECX,dword ptr [EBP + -0x50]
005c2bab  MOV EDX,dword ptr [ECX + 0x4]
005c2bae  MOV EAX,dword ptr [EDX + 0x8]
005c2bb1  MOV dword ptr [EBP + -0xc],EAX
005c2bb4  MOV ECX,dword ptr [EBP + -0x50]
005c2bb7  MOV EDX,dword ptr [ECX + 0x4]
005c2bba  MOV dword ptr [EBP + -0x14],EDX
005c2bbd  MOV ECX,dword ptr [EBP + -0x14]
005c2bc0  CALL 0x005c9140
005c2bc5  MOV EAX,dword ptr [EBP + -0x14]
005c2bc8  MOV ECX,dword ptr [EAX + 0x4]
005c2bcb  MOV dword ptr [EBP + -0x10],ECX
005c2bce  MOV EDX,dword ptr [EBP + -0xc]
005c2bd1  CMP EDX,dword ptr [EBP + -0x10]
005c2bd4  JLE 0x005c2bdb
005c2bd6  JMP 0x005c2e3f
005c2bdb  MOV dword ptr [EBP + -0x4],0x0
005c2be2  JMP 0x005c2bed
005c2be4  MOV EAX,dword ptr [EBP + -0x4]
005c2be7  ADD EAX,0x1
005c2bea  MOV dword ptr [EBP + -0x4],EAX
005c2bed  MOV ECX,dword ptr [EBP + -0x50]
005c2bf0  MOV EDX,dword ptr [ECX + 0x4]
005c2bf3  MOV EAX,dword ptr [EDX + 0x10]
005c2bf6  MOV ECX,dword ptr [EAX]
005c2bf8  MOV dword ptr [EBP + -0x18],ECX
005c2bfb  MOV EDX,dword ptr [EBP + -0x4]
005c2bfe  CMP EDX,dword ptr [EBP + -0x18]
005c2c01  JGE 0x005c2e02
005c2c07  MOV EAX,dword ptr [EBP + -0x50]
005c2c0a  ADD EAX,0x58
005c2c0d  MOV dword ptr [EBP + -0x1c],EAX
005c2c10  MOV ECX,dword ptr [EBP + -0x1c]
005c2c13  CMP dword ptr [ECX + 0x4],0x0
005c2c17  JNZ 0x005c2c22
005c2c19  MOV dword ptr [EBP + -0x58],0x0
005c2c20  JMP 0x005c2c3b
005c2c22  MOV EDX,dword ptr [EBP + -0x1c]
005c2c25  MOV EAX,dword ptr [EBP + -0x1c]
005c2c28  MOV ECX,dword ptr [EDX + 0x8]
005c2c2b  SUB ECX,dword ptr [EAX + 0x4]
005c2c2e  MOV EAX,ECX
005c2c30  CDQ
005c2c31  MOV ECX,0x34
005c2c36  IDIV ECX
005c2c38  MOV dword ptr [EBP + -0x58],EAX
005c2c3b  MOV EDX,dword ptr [EBP + -0x4]
005c2c3e  CMP EDX,dword ptr [EBP + -0x58]
005c2c41  JC 0x005c2c49
005c2c43  CALL dword ptr [0x006b2274]
005c2c49  MOV EAX,dword ptr [EBP + -0x50]
005c2c4c  MOV ECX,dword ptr [EAX + 0x50]
005c2c4f  FILD dword ptr [EBP + -0x4]
005c2c52  FMUL float ptr [ECX + 0x68]
005c2c55  MOV EDX,dword ptr [EBP + -0x50]
005c2c58  MOV EAX,dword ptr [EDX + 0x50]
005c2c5b  FADD float ptr [EAX + 0x64]
005c2c5e  MOV ECX,dword ptr [EBP + -0x4]
005c2c61  IMUL ECX,ECX,0x34
005c2c64  MOV EDX,dword ptr [EBP + -0x1c]
005c2c67  MOV EAX,dword ptr [EDX + 0x4]
005c2c6a  FSTP float ptr [EAX + ECX*0x1 + 0x14]
005c2c6e  MOV ECX,dword ptr [EBP + -0x50]
005c2c71  MOV EDX,dword ptr [ECX + 0x4]
005c2c74  MOV dword ptr [EBP + -0x20],EDX
005c2c77  MOV EAX,dword ptr [EBP + -0x4]
005c2c7a  MOV ECX,dword ptr [EBP + -0x20]
005c2c7d  CMP dword ptr [ECX + EAX*0x4 + 0x18],0x0
005c2c82  JL 0x005c2c93
005c2c84  MOV EDX,dword ptr [EBP + -0x4]
005c2c87  MOV EAX,dword ptr [EBP + -0x20]
005c2c8a  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x18]
005c2c8e  MOV dword ptr [EBP + -0x5c],ECX
005c2c91  JMP 0x005c2ca2
005c2c93  MOV EDX,dword ptr [EBP + -0x4]
005c2c96  MOV EAX,dword ptr [EBP + -0x20]
005c2c99  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x18]
005c2c9d  NEG ECX
005c2c9f  MOV dword ptr [EBP + -0x5c],ECX
005c2ca2  MOV EDX,dword ptr [EBP + -0x50]
005c2ca5  ADD EDX,0x58
005c2ca8  MOV dword ptr [EBP + -0x24],EDX
005c2cab  MOV EAX,dword ptr [EBP + -0x24]
005c2cae  CMP dword ptr [EAX + 0x4],0x0
005c2cb2  JNZ 0x005c2cbd
005c2cb4  MOV dword ptr [EBP + -0x60],0x0
005c2cbb  JMP 0x005c2cd4
005c2cbd  MOV ECX,dword ptr [EBP + -0x24]
005c2cc0  MOV EDX,dword ptr [EBP + -0x24]
005c2cc3  MOV EAX,dword ptr [ECX + 0x8]
005c2cc6  SUB EAX,dword ptr [EDX + 0x4]
005c2cc9  CDQ
005c2cca  MOV ECX,0x34
005c2ccf  IDIV ECX
005c2cd1  MOV dword ptr [EBP + -0x60],EAX
005c2cd4  MOV EDX,dword ptr [EBP + -0x4]
005c2cd7  CMP EDX,dword ptr [EBP + -0x60]
005c2cda  JC 0x005c2ce2
005c2cdc  CALL dword ptr [0x006b2274]
005c2ce2  FILD dword ptr [EBP + -0x5c]
005c2ce5  MOV EAX,dword ptr [EBP + -0x4]
005c2ce8  IMUL EAX,EAX,0x34
005c2ceb  MOV ECX,dword ptr [EBP + -0x24]
005c2cee  MOV EDX,dword ptr [ECX + 0x4]
005c2cf1  FSTP float ptr [EDX + EAX*0x1 + 0x8]
005c2cf5  MOV EAX,dword ptr [EBP + -0x50]
005c2cf8  ADD EAX,0x58
005c2cfb  MOV dword ptr [EBP + -0x28],EAX
005c2cfe  MOV ECX,dword ptr [EBP + -0x28]
005c2d01  CMP dword ptr [ECX + 0x4],0x0
005c2d05  JNZ 0x005c2d10
005c2d07  MOV dword ptr [EBP + -0x64],0x0
005c2d0e  JMP 0x005c2d29
005c2d10  MOV EDX,dword ptr [EBP + -0x28]
005c2d13  MOV EAX,dword ptr [EBP + -0x28]
005c2d16  MOV ECX,dword ptr [EDX + 0x8]
005c2d19  SUB ECX,dword ptr [EAX + 0x4]
005c2d1c  MOV EAX,ECX
005c2d1e  CDQ
005c2d1f  MOV ECX,0x34
005c2d24  IDIV ECX
005c2d26  MOV dword ptr [EBP + -0x64],EAX
005c2d29  MOV EDX,dword ptr [EBP + -0x4]
005c2d2c  CMP EDX,dword ptr [EBP + -0x64]
005c2d2f  JC 0x005c2d37
005c2d31  CALL dword ptr [0x006b2274]
005c2d37  MOV EAX,dword ptr [EBP + -0x50]
005c2d3a  MOV ECX,dword ptr [EAX + 0x50]
005c2d3d  MOV EDX,dword ptr [EBP + -0x4]
005c2d40  IMUL EDX,EDX,0x34
005c2d43  MOV EAX,dword ptr [EBP + -0x28]
005c2d46  MOV EAX,dword ptr [EAX + 0x4]
005c2d49  FLD float ptr [ECX + 0x6c]
005c2d4c  FSTP float ptr [EAX + EDX*0x1 + 0xc]
005c2d50  MOV ECX,dword ptr [EBP + -0x50]
005c2d53  ADD ECX,0x58
005c2d56  MOV dword ptr [EBP + -0x2c],ECX
005c2d59  MOV EDX,dword ptr [EBP + -0x2c]
005c2d5c  CMP dword ptr [EDX + 0x4],0x0
005c2d60  JNZ 0x005c2d6b
005c2d62  MOV dword ptr [EBP + -0x68],0x0
005c2d69  JMP 0x005c2d82
005c2d6b  MOV EAX,dword ptr [EBP + -0x2c]
005c2d6e  MOV ECX,dword ptr [EBP + -0x2c]
005c2d71  MOV EAX,dword ptr [EAX + 0x8]
005c2d74  SUB EAX,dword ptr [ECX + 0x4]
005c2d77  CDQ
005c2d78  MOV ECX,0x34
005c2d7d  IDIV ECX
005c2d7f  MOV dword ptr [EBP + -0x68],EAX
005c2d82  MOV EDX,dword ptr [EBP + -0x4]
005c2d85  CMP EDX,dword ptr [EBP + -0x68]
005c2d88  JC 0x005c2d90
005c2d8a  CALL dword ptr [0x006b2274]
005c2d90  MOV EAX,dword ptr [EBP + -0x50]
005c2d93  MOV ECX,dword ptr [EAX + 0x50]
005c2d96  MOV EDX,dword ptr [EBP + -0x4]
005c2d99  IMUL EDX,EDX,0x34
005c2d9c  MOV EAX,dword ptr [EBP + -0x2c]
005c2d9f  MOV EAX,dword ptr [EAX + 0x4]
005c2da2  FLD float ptr [ECX + 0x70]
005c2da5  FSTP float ptr [EAX + EDX*0x1 + 0x10]
005c2da9  MOV ECX,dword ptr [EBP + -0x50]
005c2dac  ADD ECX,0x58
005c2daf  MOV dword ptr [EBP + -0x30],ECX
005c2db2  MOV EDX,dword ptr [EBP + -0x30]
005c2db5  CMP dword ptr [EDX + 0x4],0x0
005c2db9  JNZ 0x005c2dc4
005c2dbb  MOV dword ptr [EBP + -0x6c],0x0
005c2dc2  JMP 0x005c2ddb
005c2dc4  MOV EAX,dword ptr [EBP + -0x30]
005c2dc7  MOV ECX,dword ptr [EBP + -0x30]
005c2dca  MOV EAX,dword ptr [EAX + 0x8]
005c2dcd  SUB EAX,dword ptr [ECX + 0x4]
005c2dd0  CDQ
005c2dd1  MOV ECX,0x34
005c2dd6  IDIV ECX
005c2dd8  MOV dword ptr [EBP + -0x6c],EAX
005c2ddb  MOV EDX,dword ptr [EBP + -0x4]
005c2dde  CMP EDX,dword ptr [EBP + -0x6c]
005c2de1  JC 0x005c2de9
005c2de3  CALL dword ptr [0x006b2274]
005c2de9  MOV EAX,dword ptr [EBP + -0x4]
005c2dec  IMUL EAX,EAX,0x34
005c2def  MOV ECX,dword ptr [EBP + -0x30]
005c2df2  MOV EDX,dword ptr [ECX + 0x4]
005c2df5  MOV dword ptr [EDX + EAX*0x1 + 0x1c],0x2
005c2dfd  JMP 0x005c2be4
005c2e02  MOV EAX,dword ptr [EBP + -0x50]
005c2e05  MOV ECX,dword ptr [EAX + 0x4]
005c2e08  CALL 0x005c8fc0
005c2e0d  MOV ECX,dword ptr [EBP + -0x50]
005c2e10  MOV EDX,dword ptr [ECX + 0x50]
005c2e13  ADD EDX,0x88
005c2e19  PUSH EDX
005c2e1a  CALL 0x00610980
005c2e1f  ADD ESP,0x4
005c2e22  PUSH 0x1
005c2e24  MOV ECX,dword ptr [0x007947e0]
005c2e2a  CALL 0x005dd400
005c2e2f  PUSH 0x1
005c2e31  MOV ECX,dword ptr [EBP + -0x50]
005c2e34  CALL 0x005c3110
005c2e39  JMP 0x005c2e3f
005c2e3b  MOV byte ptr [EBP + -0x5],0x0
005c2e3f  CMP dword ptr [EBP + 0x8],0x3158dc
005c2e46  JL 0x005c3085
005c2e4c  CMP dword ptr [EBP + 0x8],0x3158e2
005c2e53  JG 0x005c3085
005c2e59  MOV EAX,dword ptr [EBP + -0x50]
005c2e5c  CMP dword ptr [EAX + 0x54],0x1
005c2e60  JNZ 0x005c3085
005c2e66  MOV ECX,dword ptr [EBP + 0x8]
005c2e69  SUB ECX,0x3158dc
005c2e6f  MOV dword ptr [EBP + -0x4],ECX
005c2e72  MOV EDX,dword ptr [EBP + -0x50]
005c2e75  ADD EDX,0x58
005c2e78  MOV dword ptr [EBP + -0x34],EDX
005c2e7b  MOV EAX,dword ptr [EBP + -0x34]
005c2e7e  CMP dword ptr [EAX + 0x4],0x0
005c2e82  JNZ 0x005c2e8d
005c2e84  MOV dword ptr [EBP + -0x70],0x0
005c2e8b  JMP 0x005c2ea4
005c2e8d  MOV ECX,dword ptr [EBP + -0x34]
005c2e90  MOV EDX,dword ptr [EBP + -0x34]
005c2e93  MOV EAX,dword ptr [ECX + 0x8]
005c2e96  SUB EAX,dword ptr [EDX + 0x4]
005c2e99  CDQ
005c2e9a  MOV ECX,0x34
005c2e9f  IDIV ECX
005c2ea1  MOV dword ptr [EBP + -0x70],EAX
005c2ea4  MOV EDX,dword ptr [EBP + -0x4]
005c2ea7  CMP EDX,dword ptr [EBP + -0x70]
005c2eaa  JC 0x005c2eb2
005c2eac  CALL dword ptr [0x006b2274]
005c2eb2  MOV EAX,dword ptr [EBP + -0x4]
005c2eb5  IMUL EAX,EAX,0x34
005c2eb8  MOV ECX,dword ptr [EBP + -0x34]
005c2ebb  MOV EDX,dword ptr [ECX + 0x4]
005c2ebe  CMP dword ptr [EDX + EAX*0x1 + 0x1c],0x3
005c2ec3  JNZ 0x005c3081
005c2ec9  MOV EAX,dword ptr [EBP + -0x50]
005c2ecc  ADD EAX,0x58
005c2ecf  MOV dword ptr [EBP + -0x38],EAX
005c2ed2  MOV ECX,dword ptr [EBP + -0x38]
005c2ed5  CMP dword ptr [ECX + 0x4],0x0
005c2ed9  JNZ 0x005c2ee4
005c2edb  MOV dword ptr [EBP + -0x74],0x0
005c2ee2  JMP 0x005c2efd
005c2ee4  MOV EDX,dword ptr [EBP + -0x38]
005c2ee7  MOV EAX,dword ptr [EBP + -0x38]
005c2eea  MOV ECX,dword ptr [EDX + 0x8]
005c2eed  SUB ECX,dword ptr [EAX + 0x4]
005c2ef0  MOV EAX,ECX
005c2ef2  CDQ
005c2ef3  MOV ECX,0x34
005c2ef8  IDIV ECX
005c2efa  MOV dword ptr [EBP + -0x74],EAX
005c2efd  MOV EDX,dword ptr [EBP + -0x4]
005c2f00  CMP EDX,dword ptr [EBP + -0x74]
005c2f03  JC 0x005c2f0b
005c2f05  CALL dword ptr [0x006b2274]
005c2f0b  MOV EAX,dword ptr [EBP + -0x4]
005c2f0e  IMUL EAX,EAX,0x34
005c2f11  MOV ECX,dword ptr [EBP + -0x38]
005c2f14  ADD EAX,dword ptr [ECX + 0x4]
005c2f17  MOV dword ptr [EBP + -0x3c],EAX
005c2f1a  MOV EDX,dword ptr [EBP + -0x3c]
005c2f1d  PUSH ECX
005c2f1e  FLD float ptr [EDX + 0x8]
005c2f21  FSTP float ptr [ESP]
005c2f24  MOV EAX,dword ptr [EBP + -0x4]
005c2f27  PUSH EAX
005c2f28  MOV ECX,dword ptr [EBP + -0x50]
005c2f2b  MOV ECX,dword ptr [ECX + 0x4]
005c2f2e  CALL 0x005c9030
005c2f33  MOVZX EDX,AL
005c2f36  TEST EDX,EDX
005c2f38  JZ 0x005c3081
005c2f3e  MOV EAX,dword ptr [EBP + -0x50]
005c2f41  ADD EAX,0x58
005c2f44  MOV dword ptr [EBP + -0x40],EAX
005c2f47  MOV ECX,dword ptr [EBP + -0x40]
005c2f4a  CMP dword ptr [ECX + 0x4],0x0
005c2f4e  JNZ 0x005c2f59
005c2f50  MOV dword ptr [EBP + -0x78],0x0
005c2f57  JMP 0x005c2f72
005c2f59  MOV EDX,dword ptr [EBP + -0x40]
005c2f5c  MOV EAX,dword ptr [EBP + -0x40]
005c2f5f  MOV ECX,dword ptr [EDX + 0x8]
005c2f62  SUB ECX,dword ptr [EAX + 0x4]
005c2f65  MOV EAX,ECX
005c2f67  CDQ
005c2f68  MOV ECX,0x34
005c2f6d  IDIV ECX
005c2f6f  MOV dword ptr [EBP + -0x78],EAX
005c2f72  MOV EDX,dword ptr [EBP + -0x4]
005c2f75  CMP EDX,dword ptr [EBP + -0x78]
005c2f78  JC 0x005c2f80
005c2f7a  CALL dword ptr [0x006b2274]
005c2f80  MOV EAX,dword ptr [EBP + -0x4]
005c2f83  IMUL EAX,EAX,0x34
005c2f86  MOV ECX,dword ptr [EBP + -0x40]
005c2f89  MOV EDX,dword ptr [ECX + 0x4]
005c2f8c  MOV dword ptr [EDX + EAX*0x1 + 0x1c],0x5
005c2f94  MOV EAX,dword ptr [EBP + -0x50]
005c2f97  ADD EAX,0x58
005c2f9a  MOV dword ptr [EBP + -0x44],EAX
005c2f9d  MOV ECX,dword ptr [EBP + -0x44]
005c2fa0  CMP dword ptr [ECX + 0x4],0x0
005c2fa4  JNZ 0x005c2faf
005c2fa6  MOV dword ptr [EBP + -0x7c],0x0
005c2fad  JMP 0x005c2fc8
005c2faf  MOV EDX,dword ptr [EBP + -0x44]
005c2fb2  MOV EAX,dword ptr [EBP + -0x44]
005c2fb5  MOV ECX,dword ptr [EDX + 0x8]
005c2fb8  SUB ECX,dword ptr [EAX + 0x4]
005c2fbb  MOV EAX,ECX
005c2fbd  CDQ
005c2fbe  MOV ECX,0x34
005c2fc3  IDIV ECX
005c2fc5  MOV dword ptr [EBP + -0x7c],EAX
005c2fc8  MOV EDX,dword ptr [EBP + -0x4]
005c2fcb  CMP EDX,dword ptr [EBP + -0x7c]
005c2fce  JC 0x005c2fd6
005c2fd0  CALL dword ptr [0x006b2274]
005c2fd6  MOV EAX,dword ptr [EBP + -0x50]
005c2fd9  MOV ECX,dword ptr [EAX + 0x50]
005c2fdc  MOV EDX,dword ptr [EBP + -0x4]
005c2fdf  IMUL EDX,EDX,0x34
005c2fe2  MOV EAX,dword ptr [EBP + -0x44]
005c2fe5  MOV EAX,dword ptr [EAX + 0x4]
005c2fe8  FLD float ptr [ECX + 0x7c]
005c2feb  FSTP float ptr [EAX + EDX*0x1 + 0x10]
005c2fef  MOV ECX,dword ptr [EBP + -0x50]
005c2ff2  MOV EDX,dword ptr [ECX + 0x4]
005c2ff5  MOV dword ptr [EBP + -0x48],EDX
005c2ff8  MOV EAX,dword ptr [EBP + -0x4]
005c2ffb  MOV ECX,dword ptr [EBP + -0x48]
005c2ffe  CMP dword ptr [ECX + EAX*0x4 + 0x18],0x0
005c3003  JL 0x005c3014
005c3005  MOV EDX,dword ptr [EBP + -0x4]
005c3008  MOV EAX,dword ptr [EBP + -0x48]
005c300b  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x18]
005c300f  MOV dword ptr [EBP + -0x80],ECX
005c3012  JMP 0x005c3023
005c3014  MOV EDX,dword ptr [EBP + -0x4]
005c3017  MOV EAX,dword ptr [EBP + -0x48]
005c301a  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x18]
005c301e  NEG ECX
005c3020  MOV dword ptr [EBP + -0x80],ECX
005c3023  MOV EDX,dword ptr [EBP + -0x50]
005c3026  ADD EDX,0x58
005c3029  MOV dword ptr [EBP + -0x4c],EDX
005c302c  MOV EAX,dword ptr [EBP + -0x4c]
005c302f  CMP dword ptr [EAX + 0x4],0x0
005c3033  JNZ 0x005c3041
005c3035  MOV dword ptr [EBP + 0xffffff7c],0x0
005c303f  JMP 0x005c305b
005c3041  MOV ECX,dword ptr [EBP + -0x4c]
005c3044  MOV EDX,dword ptr [EBP + -0x4c]
005c3047  MOV EAX,dword ptr [ECX + 0x8]
005c304a  SUB EAX,dword ptr [EDX + 0x4]
005c304d  CDQ
005c304e  MOV ECX,0x34
005c3053  IDIV ECX
005c3055  MOV dword ptr [EBP + 0xffffff7c],EAX
005c305b  MOV EDX,dword ptr [EBP + -0x4]
005c305e  CMP EDX,dword ptr [EBP + 0xffffff7c]
005c3064  JC 0x005c306c
005c3066  CALL dword ptr [0x006b2274]
005c306c  MOV EAX,dword ptr [EBP + -0x80]
005c306f  PUSH EAX
005c3070  MOV ECX,dword ptr [EBP + -0x4]
005c3073  IMUL ECX,ECX,0x34
005c3076  MOV EDX,dword ptr [EBP + -0x4c]
005c3079  ADD ECX,dword ptr [EDX + 0x4]
005c307c  CALL 0x005c42d0
005c3081  MOV byte ptr [EBP + -0x5],0x1
005c3085  CMP dword ptr [EBP + 0x8],0x3158e3
005c308c  JL 0x005c3106
005c308e  CMP dword ptr [EBP + 0x8],0x315900
005c3095  JG 0x005c3106
005c3097  MOV EAX,dword ptr [EBP + -0x50]
005c309a  MOV EDX,dword ptr [EAX]
005c309c  MOV ECX,dword ptr [EBP + -0x50]
005c309f  MOV EAX,dword ptr [EDX + 0x28]
005c30a2  CALL EAX
005c30a4  MOVZX ECX,AL
005c30a7  TEST ECX,ECX
005c30a9  JZ 0x005c3106
005c30ab  MOV EDX,dword ptr [EBP + -0x50]
005c30ae  MOV EAX,dword ptr [EDX]
005c30b0  MOV ECX,dword ptr [EBP + -0x50]
005c30b3  MOV EDX,dword ptr [EAX + 0x24]
005c30b6  CALL EDX
005c30b8  MOVZX EAX,AL
005c30bb  TEST EAX,EAX
005c30bd  JNZ 0x005c3106
005c30bf  MOV ECX,dword ptr [EBP + 0x8]
005c30c2  SUB ECX,0x3158e2
005c30c8  MOV dword ptr [EBP + -0x4],ECX
005c30cb  PUSH 0x1
005c30cd  MOV EDX,dword ptr [EBP + -0x4]
005c30d0  PUSH EDX
005c30d1  MOV EAX,dword ptr [EBP + -0x50]
005c30d4  MOV ECX,dword ptr [EAX + 0x4]
005c30d7  CALL 0x005c8e20
005c30dc  PUSH 0x0
005c30de  MOV ECX,dword ptr [EBP + -0x4]
005c30e1  ADD ECX,0x1
005c30e4  PUSH ECX
005c30e5  MOV EDX,dword ptr [EBP + -0x50]
005c30e8  MOV ECX,dword ptr [EDX + 0x4]
005c30eb  CALL 0x005c8e20
005c30f0  PUSH 0x4
005c30f2  MOV ECX,dword ptr [EBP + -0x50]
005c30f5  CALL 0x005c3110
005c30fa  MOV ECX,dword ptr [EBP + -0x50]
005c30fd  CALL 0x005c1b60
005c3102  MOV byte ptr [EBP + -0x5],0x1
005c3106  MOV AL,byte ptr [EBP + -0x5]
005c3109  MOV ESP,EBP
005c310b  POP EBP
005c310c  RET 0x4
