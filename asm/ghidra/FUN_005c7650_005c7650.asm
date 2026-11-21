; FUN_005c7650  005c7650
005c7650  PUSH EBP
005c7651  MOV EBP,ESP
005c7653  PUSH -0x1
005c7655  PUSH 0x6a8922
005c765a  MOV EAX,FS:[0x0]
005c7660  PUSH EAX
005c7661  SUB ESP,0x88
005c7667  PUSH ESI
005c7668  MOV EAX,[0x00781870]
005c766d  XOR EAX,EBP
005c766f  PUSH EAX
005c7670  LEA EAX,[EBP + -0xc]
005c7673  MOV FS:[0x0],EAX
005c7679  MOV dword ptr [EBP + -0x78],ECX
005c767c  MOV ECX,dword ptr [EBP + -0x78]
005c767f  CALL 0x005c1550
005c7684  MOV EAX,dword ptr [EBP + -0x78]
005c7687  MOV ECX,dword ptr [EAX + 0x54]
005c768a  MOV dword ptr [EBP + -0x7c],ECX
005c768d  MOV EDX,dword ptr [EBP + -0x7c]
005c7690  SUB EDX,0x1
005c7693  MOV dword ptr [EBP + -0x7c],EDX
005c7696  CMP dword ptr [EBP + -0x7c],0x5
005c769a  JA 0x005c798f
005c76a0  MOV EAX,dword ptr [EBP + -0x7c]
005c76a3  JMP dword ptr [EAX*0x4 + 0x5c7c98]
005c798f  MOV EDX,dword ptr [EBP + -0x78]
005c7992  MOV EAX,dword ptr [EDX + 0x50]
005c7995  MOV ECX,dword ptr [EAX + 0x54]
005c7998  MOV dword ptr [EBP + -0x1c],ECX
005c799b  MOV EDX,dword ptr [0x007960d8]
005c79a1  MOV EAX,dword ptr [EDX + 0xc]
005c79a4  MOV ECX,dword ptr [0x007960d8]
005c79aa  MOV ECX,dword ptr [ECX + 0xc]
005c79ad  MOV EDX,dword ptr [EAX]
005c79af  MOV EAX,dword ptr [EDX + 0x8]
005c79b2  CALL EAX
005c79b4  MOV ECX,dword ptr [EBP + -0x78]
005c79b7  SUB EAX,dword ptr [ECX + 0x68]
005c79ba  MOV dword ptr [EBP + -0x10],EAX
005c79bd  MOV dword ptr [EBP + -0x18],0x0
005c79c4  MOV dword ptr [EBP + -0x14],0x0
005c79cb  MOV EDX,dword ptr [EBP + -0x78]
005c79ce  MOV EAX,dword ptr [EDX + 0x50]
005c79d1  CMP dword ptr [EAX + 0x58],0x0
005c79d5  JZ 0x005c79f8
005c79d7  MOV ECX,dword ptr [EBP + -0x78]
005c79da  MOV ESI,dword ptr [ECX + 0x50]
005c79dd  MOV EDX,dword ptr [EBP + -0x78]
005c79e0  MOV ECX,dword ptr [EDX + 0x6c]
005c79e3  CALL 0x005eb220
005c79e8  MOV ECX,dword ptr [ESI + 0x58]
005c79eb  MOV EDX,dword ptr [ECX + EAX*0x8]
005c79ee  MOV EAX,dword ptr [ECX + EAX*0x8 + 0x4]
005c79f2  MOV dword ptr [EBP + -0x18],EDX
005c79f5  MOV dword ptr [EBP + -0x14],EAX
005c79f8  MOV dword ptr [EBP + -0x20],0x0
005c79ff  JMP 0x005c7a0a
005c7a01  MOV ECX,dword ptr [EBP + -0x20]
005c7a04  ADD ECX,0x1
005c7a07  MOV dword ptr [EBP + -0x20],ECX
005c7a0a  MOV EDX,dword ptr [EBP + -0x20]
005c7a0d  IMUL EDX,EDX,0x14
005c7a10  MOV EAX,dword ptr [EBP + -0x1c]
005c7a13  CMP dword ptr [EAX + EDX*0x1],0x0
005c7a17  JL 0x005c7c74
005c7a1d  MOV ECX,dword ptr [EBP + -0x20]
005c7a20  IMUL ECX,ECX,0x14
005c7a23  MOV EDX,dword ptr [EBP + -0x1c]
005c7a26  MOV EAX,dword ptr [EDX + ECX*0x1]
005c7a29  MOV ECX,dword ptr [EDX + ECX*0x1 + 0x4]
005c7a2d  MOV dword ptr [EBP + -0x38],EAX
005c7a30  MOV dword ptr [EBP + -0x34],ECX
005c7a33  MOV EDX,dword ptr [EBP + -0x78]
005c7a36  MOV EAX,dword ptr [EDX + 0x4]
005c7a39  MOV dword ptr [EBP + -0x6c],EAX
005c7a3c  MOV ECX,dword ptr [EBP + -0x38]
005c7a3f  MOV EDX,dword ptr [EBP + -0x6c]
005c7a42  CMP dword ptr [EDX + ECX*0x4 + 0x18],0x0
005c7a47  JL 0x005c7a5b
005c7a49  MOV EAX,dword ptr [EBP + -0x38]
005c7a4c  MOV ECX,dword ptr [EBP + -0x6c]
005c7a4f  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x18]
005c7a53  MOV dword ptr [EBP + 0xffffff78],EDX
005c7a59  JMP 0x005c7a6d
005c7a5b  MOV EAX,dword ptr [EBP + -0x38]
005c7a5e  MOV ECX,dword ptr [EBP + -0x6c]
005c7a61  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x18]
005c7a65  NEG EDX
005c7a67  MOV dword ptr [EBP + 0xffffff78],EDX
005c7a6d  MOV EAX,dword ptr [EBP + -0x34]
005c7a70  ADD EAX,dword ptr [EBP + 0xffffff78]
005c7a76  MOV dword ptr [EBP + -0x34],EAX
005c7a79  LEA ECX,[EBP + -0x2c]
005c7a7c  PUSH ECX
005c7a7d  MOV EDX,dword ptr [EBP + -0x34]
005c7a80  PUSH EDX
005c7a81  MOV EAX,dword ptr [EBP + -0x38]
005c7a84  PUSH EAX
005c7a85  MOV ECX,dword ptr [EBP + -0x78]
005c7a88  CALL 0x005c74e0
005c7a8d  MOV ECX,dword ptr [EBP + -0x78]
005c7a90  ADD ECX,0x58
005c7a93  MOV dword ptr [EBP + -0x70],ECX
005c7a96  MOV EDX,dword ptr [EBP + -0x70]
005c7a99  CMP dword ptr [EDX + 0x4],0x0
005c7a9d  JNZ 0x005c7aab
005c7a9f  MOV dword ptr [EBP + 0xffffff74],0x0
005c7aa9  JMP 0x005c7ac0
005c7aab  MOV EAX,dword ptr [EBP + -0x70]
005c7aae  MOV ECX,dword ptr [EBP + -0x70]
005c7ab1  MOV EDX,dword ptr [EAX + 0x8]
005c7ab4  SUB EDX,dword ptr [ECX + 0x4]
005c7ab7  SAR EDX,0x2
005c7aba  MOV dword ptr [EBP + 0xffffff74],EDX
005c7ac0  MOV EAX,dword ptr [EBP + -0x20]
005c7ac3  CMP EAX,dword ptr [EBP + 0xffffff74]
005c7ac9  JC 0x005c7ad1
005c7acb  CALL dword ptr [0x006b2274]
005c7ad1  MOV ECX,dword ptr [EBP + -0x70]
005c7ad4  MOV EDX,dword ptr [ECX + 0x4]
005c7ad7  MOV EAX,dword ptr [EBP + -0x20]
005c7ada  MOV ECX,dword ptr [EDX + EAX*0x4]
005c7add  MOV dword ptr [EBP + -0x3c],ECX
005c7ae0  CMP dword ptr [EBP + -0x3c],0x0
005c7ae4  JZ 0x005c7b04
005c7ae6  MOV ECX,dword ptr [EBP + -0x3c]
005c7ae9  CALL 0x005eafc0
005c7aee  CMP EAX,dword ptr [EBP + -0x2c]
005c7af1  JNZ 0x005c7b04
005c7af3  MOV ECX,dword ptr [EBP + -0x3c]
005c7af6  CALL 0x005eb110
005c7afb  CMP EAX,dword ptr [EBP + -0x28]
005c7afe  JZ 0x005c7ba2
005c7b04  CMP dword ptr [EBP + -0x3c],0x0
005c7b08  JZ 0x005c7b3c
005c7b0a  MOV EDX,dword ptr [EBP + -0x3c]
005c7b0d  MOV dword ptr [EBP + -0x60],EDX
005c7b10  MOV EAX,dword ptr [EBP + -0x60]
005c7b13  MOV dword ptr [EBP + -0x5c],EAX
005c7b16  CMP dword ptr [EBP + -0x5c],0x0
005c7b1a  JZ 0x005c7b32
005c7b1c  PUSH 0x1
005c7b1e  MOV ECX,dword ptr [EBP + -0x5c]
005c7b21  MOV EDX,dword ptr [ECX]
005c7b23  MOV ECX,dword ptr [EBP + -0x5c]
005c7b26  MOV EAX,dword ptr [EDX]
005c7b28  CALL EAX
005c7b2a  MOV dword ptr [EBP + 0xffffff70],EAX
005c7b30  JMP 0x005c7b3c
005c7b32  MOV dword ptr [EBP + 0xffffff70],0x0
005c7b3c  MOV ECX,dword ptr [EBP + -0x34]
005c7b3f  PUSH ECX
005c7b40  MOV EDX,dword ptr [EBP + -0x38]
005c7b43  PUSH EDX
005c7b44  MOV ECX,dword ptr [EBP + -0x78]
005c7b47  CALL 0x005c7570
005c7b4c  MOV dword ptr [EBP + -0x3c],EAX
005c7b4f  MOV EAX,dword ptr [EBP + -0x78]
005c7b52  ADD EAX,0x58
005c7b55  MOV dword ptr [EBP + -0x74],EAX
005c7b58  MOV ECX,dword ptr [EBP + -0x74]
005c7b5b  CMP dword ptr [ECX + 0x4],0x0
005c7b5f  JNZ 0x005c7b6d
005c7b61  MOV dword ptr [EBP + 0xffffff6c],0x0
005c7b6b  JMP 0x005c7b82
005c7b6d  MOV EDX,dword ptr [EBP + -0x74]
005c7b70  MOV EAX,dword ptr [EBP + -0x74]
005c7b73  MOV ECX,dword ptr [EDX + 0x8]
005c7b76  SUB ECX,dword ptr [EAX + 0x4]
005c7b79  SAR ECX,0x2
005c7b7c  MOV dword ptr [EBP + 0xffffff6c],ECX
005c7b82  MOV EDX,dword ptr [EBP + -0x20]
005c7b85  CMP EDX,dword ptr [EBP + 0xffffff6c]
005c7b8b  JC 0x005c7b93
005c7b8d  CALL dword ptr [0x006b2274]
005c7b93  MOV EAX,dword ptr [EBP + -0x74]
005c7b96  MOV ECX,dword ptr [EAX + 0x4]
005c7b99  MOV EDX,dword ptr [EBP + -0x20]
005c7b9c  MOV EAX,dword ptr [EBP + -0x3c]
005c7b9f  MOV dword ptr [ECX + EDX*0x4],EAX
005c7ba2  MOV dword ptr [EBP + -0x30],0x0
005c7ba9  MOV ECX,dword ptr [EBP + -0x78]
005c7bac  MOV EDX,dword ptr [ECX]
005c7bae  MOV ECX,dword ptr [EBP + -0x78]
005c7bb1  MOV EAX,dword ptr [EDX + 0x2c]
005c7bb4  CALL EAX
005c7bb6  MOVZX ECX,AL
005c7bb9  TEST ECX,ECX
005c7bbb  JZ 0x005c7c1f
005c7bbd  MOV EDX,dword ptr [EBP + -0x34]
005c7bc0  PUSH EDX
005c7bc1  MOV EAX,dword ptr [EBP + -0x38]
005c7bc4  PUSH EAX
005c7bc5  MOV ECX,dword ptr [EBP + -0x78]
005c7bc8  MOV ECX,dword ptr [ECX + 0x4]
005c7bcb  CALL 0x005c9960
005c7bd0  TEST EAX,EAX
005c7bd2  JLE 0x005c7c1f
005c7bd4  MOV dword ptr [EBP + -0x48],0xfa
005c7bdb  MOV dword ptr [EBP + -0x40],0x0
005c7be2  MOV ECX,dword ptr [EBP + -0x3c]
005c7be5  CALL 0x005eb240
005c7bea  ADD EAX,0x1
005c7bed  MOV dword ptr [EBP + -0x44],EAX
005c7bf0  MOV EDX,dword ptr [EBP + -0x44]
005c7bf3  MOV dword ptr [EBP + -0x4c],EDX
005c7bf6  MOV EAX,dword ptr [EBP + -0x10]
005c7bf9  CDQ
005c7bfa  MOV ECX,0xfa
005c7bff  IDIV ECX
005c7c01  MOV dword ptr [EBP + -0x30],EAX
005c7c04  MOV EAX,dword ptr [EBP + -0x30]
005c7c07  CDQ
005c7c08  IDIV dword ptr [EBP + -0x4c]
005c7c0b  MOV dword ptr [EBP + -0x30],EDX
005c7c0e  MOV EDX,dword ptr [EBP + -0x30]
005c7c11  CMP EDX,dword ptr [EBP + -0x44]
005c7c14  JL 0x005c7c1f
005c7c16  MOV EAX,dword ptr [EBP + -0x44]
005c7c19  SUB EAX,0x1
005c7c1c  MOV dword ptr [EBP + -0x30],EAX
005c7c1f  MOV ECX,dword ptr [EBP + -0x3c]
005c7c22  CALL 0x005eb220
005c7c27  CMP dword ptr [EBP + -0x30],EAX
005c7c2a  JZ 0x005c7c40
005c7c2c  MOV ECX,dword ptr [EBP + -0x30]
005c7c2f  PUSH ECX
005c7c30  MOV EDX,dword ptr [EBP + -0x3c]
005c7c33  MOV EAX,dword ptr [EDX]
005c7c35  MOV ECX,dword ptr [EBP + -0x3c]
005c7c38  MOV EDX,dword ptr [EAX + 0xb0]
005c7c3e  CALL EDX
005c7c40  MOV EAX,dword ptr [EBP + -0x20]
005c7c43  IMUL EAX,EAX,0x14
005c7c46  MOV ECX,dword ptr [EBP + -0x1c]
005c7c49  MOV EDX,dword ptr [EBP + -0x14]
005c7c4c  ADD EDX,dword ptr [ECX + EAX*0x1 + 0xc]
005c7c50  PUSH EDX
005c7c51  MOV EAX,dword ptr [EBP + -0x20]
005c7c54  IMUL EAX,EAX,0x14
005c7c57  MOV ECX,dword ptr [EBP + -0x1c]
005c7c5a  MOV EDX,dword ptr [EBP + -0x18]
005c7c5d  ADD EDX,dword ptr [ECX + EAX*0x1 + 0x8]
005c7c61  PUSH EDX
005c7c62  MOV EAX,dword ptr [EBP + -0x3c]
005c7c65  MOV EDX,dword ptr [EAX]
005c7c67  MOV ECX,dword ptr [EBP + -0x3c]
005c7c6a  MOV EAX,dword ptr [EDX + 0x44]
005c7c6d  CALL EAX
005c7c6f  JMP 0x005c7a01
005c7c74  MOV ECX,dword ptr [EBP + -0x78]
005c7c77  CALL 0x005c1b60
005c7c7c  PUSH 0x0
005c7c7e  MOV ECX,dword ptr [EBP + -0x78]
005c7c81  CALL 0x005c1d60
005c7c86  MOV ECX,dword ptr [EBP + -0xc]
005c7c89  MOV dword ptr FS:[0x0],ECX
005c7c90  POP ECX
005c7c91  POP ESI
005c7c92  MOV ESP,EBP
005c7c94  POP EBP
005c7c95  RET
