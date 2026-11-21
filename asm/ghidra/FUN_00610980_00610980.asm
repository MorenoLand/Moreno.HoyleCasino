; FUN_00610980  00610980
00610980  PUSH EBP
00610981  MOV EBP,ESP
00610983  PUSH -0x1
00610985  PUSH 0x6aaf5a
0061098a  MOV EAX,FS:[0x0]
00610990  PUSH EAX
00610991  SUB ESP,0x120
00610997  MOV EAX,[0x00781870]
0061099c  XOR EAX,EBP
0061099e  PUSH EAX
0061099f  LEA EAX,[EBP + -0xc]
006109a2  MOV FS:[0x0],EAX
006109a8  CMP dword ptr [0x015e55f4],0x0
006109af  JNZ 0x006109bd
006109b1  MOV dword ptr [EBP + 0xfffffef8],0x0
006109bb  JMP 0x006109d6
006109bd  MOV EAX,[0x015e55f8]
006109c2  SUB EAX,dword ptr [0x015e55f4]
006109c8  CDQ
006109c9  MOV ECX,0x48
006109ce  IDIV ECX
006109d0  MOV dword ptr [EBP + 0xfffffef8],EAX
006109d6  MOV EDX,dword ptr [EBP + 0xfffffef8]
006109dc  MOV dword ptr [EBP + -0x18],EDX
006109df  CMP dword ptr [EBP + -0x18],0x0
006109e3  JZ 0x00610a35
006109e5  CMP dword ptr [0x015e55f4],0x0
006109ec  JNZ 0x006109fa
006109ee  MOV dword ptr [EBP + 0xfffffef4],0x0
006109f8  JMP 0x00610a13
006109fa  MOV EAX,[0x015e55f8]
006109ff  SUB EAX,dword ptr [0x015e55f4]
00610a05  CDQ
00610a06  MOV ECX,0x48
00610a0b  IDIV ECX
00610a0d  MOV dword ptr [EBP + 0xfffffef4],EAX
00610a13  CMP dword ptr [EBP + 0xfffffef4],0x0
00610a1a  JA 0x00610a22
00610a1c  CALL dword ptr [0x006b2274]
00610a22  XOR EDX,EDX
00610a24  IMUL EDX,EDX,0x48
00610a27  ADD EDX,dword ptr [0x015e55f4]
00610a2d  MOV dword ptr [EBP + 0xfffffef0],EDX
00610a33  JMP 0x00610a3f
00610a35  MOV dword ptr [EBP + 0xfffffef0],0x0
00610a3f  MOV EAX,dword ptr [EBP + 0xfffffef0]
00610a45  MOV dword ptr [EBP + -0x14],EAX
00610a48  MOV dword ptr [EBP + -0x20],0x0
00610a4f  MOV ECX,dword ptr [EBP + 0x8]
00610a52  CMP dword ptr [ECX],0x0
00610a55  JNZ 0x00610a65
00610a57  MOV EDX,dword ptr [EBP + 0x8]
00610a5a  CMP dword ptr [EDX + 0x4],0x0
00610a5e  JNZ 0x00610a65
00610a60  JMP 0x00610e54
00610a65  MOV EAX,[0x0162ee84]
00610a6a  MOV EDX,dword ptr [EAX]
00610a6c  MOV ECX,dword ptr [0x0162ee84]
00610a72  MOV EAX,dword ptr [EDX + 0x38]
00610a75  CALL EAX
00610a77  MOVZX ECX,AL
00610a7a  TEST ECX,ECX
00610a7c  JNZ 0x00610a83
00610a7e  JMP 0x00610e54
00610a83  MOV dword ptr [EBP + -0x1c],0x0
00610a8a  JMP 0x00610a95
00610a8c  MOV EDX,dword ptr [EBP + -0x1c]
00610a8f  ADD EDX,0x1
00610a92  MOV dword ptr [EBP + -0x1c],EDX
00610a95  MOV EAX,dword ptr [EBP + -0x1c]
00610a98  CMP EAX,dword ptr [EBP + -0x18]
00610a9b  JGE 0x00610aba
00610a9d  MOV ECX,dword ptr [EBP + 0x8]
00610aa0  PUSH ECX
00610aa1  MOV ECX,dword ptr [EBP + -0x1c]
00610aa4  IMUL ECX,ECX,0x48
00610aa7  ADD ECX,dword ptr [EBP + -0x14]
00610aaa  CALL 0x00610810
00610aaf  MOVZX EDX,AL
00610ab2  TEST EDX,EDX
00610ab4  JZ 0x00610ab8
00610ab6  JMP 0x00610aba
00610ab8  JMP 0x00610a8c
00610aba  MOV EAX,dword ptr [EBP + -0x1c]
00610abd  CMP EAX,dword ptr [EBP + -0x18]
00610ac0  JGE 0x00610b22
00610ac2  MOV ECX,dword ptr [EBP + -0x1c]
00610ac5  IMUL ECX,ECX,0x48
00610ac8  ADD ECX,dword ptr [EBP + -0x14]
00610acb  MOV dword ptr [EBP + -0x14],ECX
00610ace  MOV EDX,dword ptr [EBP + -0x14]
00610ad1  MOV EAX,dword ptr [EDX + 0x30]
00610ad4  PUSH EAX
00610ad5  MOV ECX,dword ptr [0x007960d8]
00610adb  MOV ECX,dword ptr [ECX + 0x8]
00610ade  CALL 0x00609910
00610ae3  MOVZX EDX,AL
00610ae6  TEST EDX,EDX
00610ae8  JNZ 0x00610b20
00610aea  MOV EAX,dword ptr [EBP + -0x14]
00610aed  MOV ECX,dword ptr [EAX + 0x30]
00610af0  PUSH ECX
00610af1  MOV EDX,dword ptr [0x007960d8]
00610af7  MOV ECX,dword ptr [EDX + 0x8]
00610afa  CALL 0x00609650
00610aff  MOVZX EAX,AL
00610b02  TEST EAX,EAX
00610b04  JNZ 0x00610b0b
00610b06  JMP 0x00610e54
00610b0b  MOV ECX,dword ptr [EBP + -0x1c]
00610b0e  PUSH ECX
00610b0f  MOV ECX,0x15e55f0
00610b14  CALL 0x006127f0
00610b19  MOV dword ptr [EBP + -0x14],0x0
00610b20  JMP 0x00610b29
00610b22  MOV dword ptr [EBP + -0x14],0x0
00610b29  CMP dword ptr [EBP + -0x14],0x0
00610b2d  JNZ 0x00610cf1
00610b33  MOV EDX,dword ptr [EBP + 0x8]
00610b36  PUSH EDX
00610b37  LEA ECX,[EBP + -0x68]
00610b3a  CALL 0x006105e0
00610b3f  MOV dword ptr [EBP + 0xfffffeec],EAX
00610b45  MOV EAX,dword ptr [EBP + 0xfffffeec]
00610b4b  MOV dword ptr [EBP + 0xffffff30],EAX
00610b51  MOV dword ptr [EBP + -0x4],0x0
00610b58  MOV ECX,dword ptr [EBP + 0xffffff30]
00610b5e  PUSH ECX
00610b5f  MOV ECX,0x15e55f0
00610b64  CALL 0x006117e0
00610b69  MOV dword ptr [EBP + -0x4],0xffffffff
00610b70  LEA EDX,[EBP + -0x48]
00610b73  MOV dword ptr [EBP + 0xffffff10],EDX
00610b79  MOV ECX,dword ptr [EBP + 0xffffff10]
00610b7f  CALL 0x005be450
00610b84  CMP dword ptr [0x015e55f4],0x0
00610b8b  JNZ 0x00610b99
00610b8d  MOV dword ptr [EBP + 0xfffffee8],0x0
00610b97  JMP 0x00610bb2
00610b99  MOV EAX,[0x015e55f8]
00610b9e  SUB EAX,dword ptr [0x015e55f4]
00610ba4  CDQ
00610ba5  MOV ECX,0x48
00610baa  IDIV ECX
00610bac  MOV dword ptr [EBP + 0xfffffee8],EAX
00610bb2  MOV EDX,dword ptr [EBP + 0xfffffee8]
00610bb8  SUB EDX,0x1
00610bbb  MOV dword ptr [EBP + 0xffffff0c],EDX
00610bc1  CMP dword ptr [0x015e55f4],0x0
00610bc8  JNZ 0x00610bd6
00610bca  MOV dword ptr [EBP + 0xfffffee4],0x0
00610bd4  JMP 0x00610bef
00610bd6  MOV EAX,[0x015e55f8]
00610bdb  SUB EAX,dword ptr [0x015e55f4]
00610be1  CDQ
00610be2  MOV ECX,0x48
00610be7  IDIV ECX
00610be9  MOV dword ptr [EBP + 0xfffffee4],EAX
00610bef  MOV EDX,dword ptr [EBP + 0xffffff0c]
00610bf5  CMP EDX,dword ptr [EBP + 0xfffffee4]
00610bfb  JC 0x00610c03
00610bfd  CALL dword ptr [0x006b2274]
00610c03  MOV EAX,dword ptr [EBP + 0xffffff0c]
00610c09  IMUL EAX,EAX,0x48
00610c0c  ADD EAX,dword ptr [0x015e55f4]
00610c12  MOV dword ptr [EBP + -0x14],EAX
00610c15  MOV ECX,dword ptr [EBP + 0x8]
00610c18  MOV EDX,dword ptr [ECX]
00610c1a  MOV dword ptr [EBP + -0x20],EDX
00610c1d  MOV EAX,dword ptr [EBP + 0x8]
00610c20  CMP dword ptr [EAX + 0x4],0x0
00610c24  JZ 0x00610ce6
00610c2a  MOV ECX,dword ptr [EBP + -0x14]
00610c2d  ADD ECX,0x20
00610c30  MOV dword ptr [EBP + 0xffffff08],ECX
00610c36  MOV EDX,dword ptr [EBP + 0xffffff08]
00610c3c  CMP dword ptr [EDX + 0x4],0x0
00610c40  JNZ 0x00610c4e
00610c42  MOV dword ptr [EBP + 0xfffffee0],0x0
00610c4c  JMP 0x00610c69
00610c4e  MOV EAX,dword ptr [EBP + 0xffffff08]
00610c54  MOV ECX,dword ptr [EBP + 0xffffff08]
00610c5a  MOV EDX,dword ptr [EAX + 0x8]
00610c5d  SUB EDX,dword ptr [ECX + 0x4]
00610c60  SAR EDX,0x2
00610c63  MOV dword ptr [EBP + 0xfffffee0],EDX
00610c69  MOV EAX,dword ptr [EBP + 0xfffffee0]
00610c6f  PUSH EAX
00610c70  CALL 0x0062fbf0
00610c75  ADD ESP,0x4
00610c78  MOV dword ptr [EBP + 0xffffff00],EAX
00610c7e  MOV ECX,dword ptr [EBP + -0x14]
00610c81  ADD ECX,0x20
00610c84  MOV dword ptr [EBP + 0xffffff04],ECX
00610c8a  MOV EDX,dword ptr [EBP + 0xffffff04]
00610c90  CMP dword ptr [EDX + 0x4],0x0
00610c94  JNZ 0x00610ca2
00610c96  MOV dword ptr [EBP + 0xfffffedc],0x0
00610ca0  JMP 0x00610cbd
00610ca2  MOV EAX,dword ptr [EBP + 0xffffff04]
00610ca8  MOV ECX,dword ptr [EBP + 0xffffff04]
00610cae  MOV EDX,dword ptr [EAX + 0x8]
00610cb1  SUB EDX,dword ptr [ECX + 0x4]
00610cb4  SAR EDX,0x2
00610cb7  MOV dword ptr [EBP + 0xfffffedc],EDX
00610cbd  MOV EAX,dword ptr [EBP + 0xffffff00]
00610cc3  CMP EAX,dword ptr [EBP + 0xfffffedc]
00610cc9  JC 0x00610cd1
00610ccb  CALL dword ptr [0x006b2274]
00610cd1  MOV ECX,dword ptr [EBP + 0xffffff04]
00610cd7  MOV EDX,dword ptr [ECX + 0x4]
00610cda  MOV EAX,dword ptr [EBP + 0xffffff00]
00610ce0  MOV ECX,dword ptr [EDX + EAX*0x4]
00610ce3  MOV dword ptr [EBP + -0x20],ECX
00610ce6  CMP dword ptr [EBP + -0x20],0x0
00610cea  JNZ 0x00610cf1
00610cec  JMP 0x00610e54
00610cf1  MOV EDX,dword ptr [EBP + 0x8]
00610cf4  CMP dword ptr [EDX + 0x10],0x0
00610cf8  JZ 0x00610d04
00610cfa  FLDZ
00610cfc  FSTP float ptr [EBP + 0xfffffed8]
00610d02  JMP 0x00610d10
00610d04  MOV EAX,dword ptr [EBP + 0x8]
00610d07  FLD float ptr [EAX + 0x18]
00610d0a  FSTP float ptr [EBP + 0xfffffed8]
00610d10  FLD float ptr [EBP + 0xfffffed8]
00610d16  CALL 0x00686cc0
00610d1b  MOV dword ptr [EBP + -0x10],EAX
00610d1e  MOV ECX,dword ptr [EBP + 0x8]
00610d21  CMP dword ptr [ECX + 0x10],0x0
00610d25  JZ 0x00610dbc
00610d2b  MOV ECX,dword ptr [0x015e55e8]
00610d31  CALL 0x005f3e50
00610d36  MOV EDX,dword ptr [EBP + -0x14]
00610d39  MOV dword ptr [EDX + 0x34],EAX
00610d3c  MOV EAX,dword ptr [EBP + -0x14]
00610d3f  FLDZ
00610d41  FSTP float ptr [EAX + 0x3c]
00610d44  MOV ECX,dword ptr [EBP + 0x8]
00610d47  FILD dword ptr [ECX + 0x10]
00610d4a  MOV EDX,dword ptr [EBP + 0x8]
00610d4d  FDIVR float ptr [EDX + 0x18]
00610d50  MOV EAX,dword ptr [EBP + -0x14]
00610d53  FSTP float ptr [EAX + 0x38]
00610d56  MOV ECX,dword ptr [EBP + -0x14]
00610d59  FLD float ptr [ECX + 0x38]
00610d5c  FSTP float ptr [EBP + 0xfffffefc]
00610d62  FLD float ptr [EBP + 0xfffffefc]
00610d68  SUB ESP,0x8
00610d6b  FSTP double ptr [ESP]
00610d6e  CALL 0x0068732a
00610d73  ADD ESP,0x8
00610d76  FSTP float ptr [EBP + 0xfffffed4]
00610d7c  FLD float ptr [EBP + 0xfffffed4]
00610d82  FCOMP double ptr [0x006bc270]
00610d88  FNSTSW AX
00610d8a  TEST AH,0x1
00610d8d  JZ 0x00610da6
00610d8f  PUSH 0x121
00610d94  PUSH 0x6d84a0
00610d99  PUSH 0x6d84b8
00610d9e  CALL 0x005e9f20
00610da3  ADD ESP,0xc
00610da6  MOV EAX,dword ptr [EBP + -0x14]
00610da9  MOV ECX,dword ptr [EBP + 0x8]
00610dac  FLD float ptr [ECX + 0x18]
00610daf  FSTP float ptr [EAX + 0x40]
00610db2  MOV EDX,dword ptr [EBP + -0x14]
00610db5  MOV dword ptr [EDX + 0x44],0x0
00610dbc  MOV EAX,dword ptr [EBP + -0x14]
00610dbf  CMP dword ptr [EAX + 0x30],0x0
00610dc3  JGE 0x00610e23
00610dc5  PUSH 0x0
00610dc7  MOV ECX,dword ptr [EBP + 0x8]
00610dca  PUSH ECX
00610dcb  FLD float ptr [ECX + 0x1c]
00610dce  FSTP float ptr [ESP]
00610dd1  FILD dword ptr [EBP + -0x10]
00610dd4  PUSH ECX
00610dd5  FSTP float ptr [ESP]
00610dd8  MOV EDX,dword ptr [EBP + 0x8]
00610ddb  MOVZX EAX,byte ptr [EDX + 0xc]
00610ddf  NEG EAX
00610de1  SBB EAX,EAX
00610de3  NEG EAX
00610de5  SUB EAX,0x1
00610de8  PUSH EAX
00610de9  PUSH 0x1
00610deb  MOV ECX,dword ptr [EBP + 0x8]
00610dee  MOV EDX,dword ptr [ECX + 0x8]
00610df1  PUSH EDX
00610df2  MOV EAX,dword ptr [EBP + -0x20]
00610df5  PUSH EAX
00610df6  MOV ECX,dword ptr [0x007960d8]
00610dfc  MOV ECX,dword ptr [ECX + 0x8]
00610dff  CALL 0x00608b50
00610e04  MOV EDX,dword ptr [EBP + -0x14]
00610e07  MOV dword ptr [EDX + 0x30],EAX
00610e0a  MOV EAX,dword ptr [EBP + -0x14]
00610e0d  CMP dword ptr [EAX + 0x30],0x0
00610e11  JGE 0x00610e21
00610e13  PUSH 0x1
00610e15  MOV ECX,dword ptr [EBP + 0x8]
00610e18  PUSH ECX
00610e19  CALL 0x006110a0
00610e1e  ADD ESP,0x8
00610e21  JMP 0x00610e54
00610e23  FILD dword ptr [EBP + -0x10]
00610e26  PUSH ECX
00610e27  FSTP float ptr [ESP]
00610e2a  MOV EDX,dword ptr [EBP + -0x14]
00610e2d  MOV EAX,dword ptr [EDX + 0x30]
00610e30  PUSH EAX
00610e31  MOV ECX,dword ptr [0x007960d8]
00610e37  MOV ECX,dword ptr [ECX + 0x8]
00610e3a  CALL 0x00608550
00610e3f  MOV EDX,dword ptr [EBP + -0x14]
00610e42  MOV EAX,dword ptr [EDX + 0x30]
00610e45  PUSH EAX
00610e46  MOV ECX,dword ptr [0x007960d8]
00610e4c  MOV ECX,dword ptr [ECX + 0x8]
00610e4f  CALL 0x00609a80
00610e54  MOV ECX,dword ptr [EBP + -0xc]
00610e57  MOV dword ptr FS:[0x0],ECX
00610e5e  POP ECX
00610e5f  MOV ESP,EBP
00610e61  POP EBP
00610e62  RET
