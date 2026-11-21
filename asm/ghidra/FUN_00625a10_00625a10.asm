; FUN_00625a10  00625a10
00625a10  PUSH EBP
00625a11  MOV EBP,ESP
00625a13  SUB ESP,0x2c
00625a16  MOV dword ptr [EBP + -0x24],ECX
00625a19  LEA EAX,[EBP + -0x18]
00625a1c  PUSH EAX
00625a1d  LEA ECX,[EBP + -0x10]
00625a20  PUSH ECX
00625a21  LEA EDX,[EBP + -0xc]
00625a24  PUSH EDX
00625a25  LEA EAX,[EBP + -0x14]
00625a28  PUSH EAX
00625a29  LEA ECX,[EBP + -0x8]
00625a2c  PUSH ECX
00625a2d  LEA EDX,[EBP + -0x4]
00625a30  PUSH EDX
00625a31  MOV EAX,dword ptr [EBP + -0x24]
00625a34  MOV EDX,dword ptr [EAX]
00625a36  MOV ECX,dword ptr [EBP + -0x24]
00625a39  MOV EAX,dword ptr [EDX + 0x2c]
00625a3c  CALL EAX
00625a3e  MOV ECX,dword ptr [EBP + 0xc]
00625a41  AND ECX,0x1
00625a44  JZ 0x00625a62
00625a46  MOV EDX,dword ptr [EBP + 0x8]
00625a49  MOV EAX,dword ptr [EBP + 0x8]
00625a4c  MOV ECX,dword ptr [EDX + 0xc]
00625a4f  SUB ECX,dword ptr [EAX + 0x4]
00625a52  MOV EDX,dword ptr [EBP + 0x8]
00625a55  MOV dword ptr [EDX + 0xc],ECX
00625a58  MOV EAX,dword ptr [EBP + 0x8]
00625a5b  MOV dword ptr [EAX + 0x4],0x0
00625a62  MOV ECX,dword ptr [EBP + 0xc]
00625a65  AND ECX,0x2
00625a68  JZ 0x00625a88
00625a6a  MOV EDX,dword ptr [EBP + 0x8]
00625a6d  MOV EAX,dword ptr [EBP + -0x8]
00625a70  SUB EAX,dword ptr [EDX + 0xc]
00625a73  MOV ECX,dword ptr [EBP + 0x8]
00625a76  ADD EAX,dword ptr [ECX + 0x4]
00625a79  MOV EDX,dword ptr [EBP + 0x8]
00625a7c  MOV dword ptr [EDX + 0x4],EAX
00625a7f  MOV EAX,dword ptr [EBP + 0x8]
00625a82  MOV ECX,dword ptr [EBP + -0x8]
00625a85  MOV dword ptr [EAX + 0xc],ECX
00625a88  MOV EDX,dword ptr [EBP + 0xc]
00625a8b  AND EDX,0x4
00625a8e  JZ 0x00625aaa
00625a90  MOV EAX,dword ptr [EBP + 0x8]
00625a93  MOV ECX,dword ptr [EBP + 0x8]
00625a96  MOV EDX,dword ptr [EAX + 0x8]
00625a99  SUB EDX,dword ptr [ECX]
00625a9b  MOV EAX,dword ptr [EBP + 0x8]
00625a9e  MOV dword ptr [EAX + 0x8],EDX
00625aa1  MOV ECX,dword ptr [EBP + 0x8]
00625aa4  MOV dword ptr [ECX],0x0
00625aaa  MOV EDX,dword ptr [EBP + 0xc]
00625aad  AND EDX,0x8
00625ab0  JZ 0x00625ace
00625ab2  MOV EAX,dword ptr [EBP + 0x8]
00625ab5  MOV ECX,dword ptr [EBP + -0x4]
00625ab8  SUB ECX,dword ptr [EAX + 0x8]
00625abb  MOV EDX,dword ptr [EBP + 0x8]
00625abe  ADD ECX,dword ptr [EDX]
00625ac0  MOV EAX,dword ptr [EBP + 0x8]
00625ac3  MOV dword ptr [EAX],ECX
00625ac5  MOV ECX,dword ptr [EBP + 0x8]
00625ac8  MOV EDX,dword ptr [EBP + -0x4]
00625acb  MOV dword ptr [ECX + 0x8],EDX
00625ace  MOV EAX,dword ptr [EBP + 0xc]
00625ad1  AND EAX,0x10
00625ad4  JZ 0x00625b45
00625ad6  MOV ECX,dword ptr [EBP + 0x8]
00625ad9  MOV EDX,dword ptr [EBP + 0x8]
00625adc  MOV EAX,dword ptr [ECX + 0xc]
00625adf  SUB EAX,dword ptr [EDX + 0x4]
00625ae2  MOV dword ptr [EBP + -0x1c],EAX
00625ae5  FILD dword ptr [EBP + -0x8]
00625ae8  FDIV double ptr [0x006b3740]
00625aee  FILD dword ptr [EBP + -0x1c]
00625af1  FDIV double ptr [0x006b3740]
00625af7  FSUBP
00625af9  FADD double ptr [0x006b2c38]
00625aff  CALL 0x00686cc0
00625b04  MOV ECX,dword ptr [EBP + 0x8]
00625b07  MOV dword ptr [ECX + 0x4],EAX
00625b0a  MOV EDX,dword ptr [EBP + -0xc]
00625b0d  SUB EDX,dword ptr [EBP + -0x8]
00625b10  MOV dword ptr [EBP + -0x28],EDX
00625b13  FILD dword ptr [EBP + -0x28]
00625b16  FDIV double ptr [0x006b3740]
00625b1c  FADD double ptr [0x006b2c38]
00625b22  CALL 0x00686cc0
00625b27  SUB EAX,dword ptr [EBP + -0x18]
00625b2a  MOV ECX,dword ptr [EBP + 0x8]
00625b2d  ADD EAX,dword ptr [ECX + 0x4]
00625b30  MOV EDX,dword ptr [EBP + 0x8]
00625b33  MOV dword ptr [EDX + 0x4],EAX
00625b36  MOV EAX,dword ptr [EBP + 0x8]
00625b39  MOV ECX,dword ptr [EAX + 0x4]
00625b3c  ADD ECX,dword ptr [EBP + -0x1c]
00625b3f  MOV EDX,dword ptr [EBP + 0x8]
00625b42  MOV dword ptr [EDX + 0xc],ECX
00625b45  MOV EAX,dword ptr [EBP + 0xc]
00625b48  AND EAX,0x20
00625b4b  JZ 0x00625bb7
00625b4d  MOV ECX,dword ptr [EBP + 0x8]
00625b50  MOV EDX,dword ptr [EBP + 0x8]
00625b53  MOV EAX,dword ptr [ECX + 0x8]
00625b56  SUB EAX,dword ptr [EDX]
00625b58  MOV dword ptr [EBP + -0x20],EAX
00625b5b  FILD dword ptr [EBP + -0x4]
00625b5e  FDIV double ptr [0x006b3740]
00625b64  FILD dword ptr [EBP + -0x20]
00625b67  FDIV double ptr [0x006b3740]
00625b6d  FSUBP
00625b6f  FADD double ptr [0x006b2c38]
00625b75  CALL 0x00686cc0
00625b7a  MOV ECX,dword ptr [EBP + 0x8]
00625b7d  MOV dword ptr [ECX],EAX
00625b7f  MOV EDX,dword ptr [EBP + -0x14]
00625b82  SUB EDX,dword ptr [EBP + -0x4]
00625b85  MOV dword ptr [EBP + -0x2c],EDX
00625b88  FILD dword ptr [EBP + -0x2c]
00625b8b  FDIV double ptr [0x006b3740]
00625b91  FADD double ptr [0x006b2c38]
00625b97  CALL 0x00686cc0
00625b9c  SUB EAX,dword ptr [EBP + -0x10]
00625b9f  MOV ECX,dword ptr [EBP + 0x8]
00625ba2  ADD EAX,dword ptr [ECX]
00625ba4  MOV EDX,dword ptr [EBP + 0x8]
00625ba7  MOV dword ptr [EDX],EAX
00625ba9  MOV EAX,dword ptr [EBP + 0x8]
00625bac  MOV ECX,dword ptr [EAX]
00625bae  ADD ECX,dword ptr [EBP + -0x20]
00625bb1  MOV EDX,dword ptr [EBP + 0x8]
00625bb4  MOV dword ptr [EDX + 0x8],ECX
00625bb7  MOV AL,0x1
00625bb9  MOV ESP,EBP
00625bbb  POP EBP
00625bbc  RET 0x8
