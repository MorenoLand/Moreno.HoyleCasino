; FUN_00458be0  00458be0
00458be0  PUSH EBP
00458be1  MOV EBP,ESP
00458be3  PUSH -0x1
00458be5  PUSH 0x69f04f
00458bea  MOV EAX,FS:[0x0]
00458bf0  PUSH EAX
00458bf1  SUB ESP,0x50
00458bf4  MOV EAX,[0x00781870]
00458bf9  XOR EAX,EBP
00458bfb  PUSH EAX
00458bfc  LEA EAX,[EBP + -0xc]
00458bff  MOV FS:[0x0],EAX
00458c05  MOV dword ptr [EBP + -0x58],ECX
00458c08  MOV dword ptr [EBP + -0x38],0xffffffff
00458c0f  MOV EAX,dword ptr [EBP + 0xc]
00458c12  MOV dword ptr [EBP + -0x34],EAX
00458c15  MOV dword ptr [EBP + -0x2c],0x178
00458c1c  MOV dword ptr [EBP + -0x28],0x15a
00458c23  MOV dword ptr [EBP + -0x24],0xcb
00458c2a  MOV dword ptr [EBP + -0x20],0x15a
00458c31  MOV dword ptr [EBP + -0x1c],0x218
00458c38  MOV dword ptr [EBP + -0x18],0xa6
00458c3f  MOV dword ptr [EBP + -0x14],0x31
00458c46  MOV dword ptr [EBP + -0x10],0xa6
00458c4d  MOV ECX,dword ptr [EBP + 0x8]
00458c50  MOV EDX,dword ptr [EBP + -0x58]
00458c53  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x4]
00458c57  MOV ECX,dword ptr [EBP + 0xc]
00458c5a  MOV EDX,dword ptr [EAX + ECX*0x4 + 0x8]
00458c5e  MOV dword ptr [EBP + -0x30],EDX
00458c61  MOV EAX,[0x00790738]
00458c66  ADD EAX,dword ptr [EBP + 0x8]
00458c69  MOV CL,byte ptr [EAX + 0xe5]
00458c6f  MOV byte ptr [EBP + -0x41],CL
00458c72  MOVZX EDX,byte ptr [EBP + -0x41]
00458c76  TEST EDX,EDX
00458c78  JZ 0x00458c8d
00458c7a  MOV EAX,dword ptr [EBP + 0xc]
00458c7d  PUSH EAX
00458c7e  MOV ECX,dword ptr [EBP + 0x8]
00458c81  PUSH ECX
00458c82  MOV ECX,dword ptr [EBP + -0x58]
00458c85  CALL 0x00458e90
00458c8a  MOV dword ptr [EBP + -0x34],EAX
00458c8d  MOV EDX,dword ptr [EBP + -0x34]
00458c90  PUSH EDX
00458c91  MOV EAX,dword ptr [EBP + 0x8]
00458c94  PUSH EAX
00458c95  MOV ECX,dword ptr [0x00790738]
00458c9b  CALL 0x004604d0
00458ca0  MOV ECX,dword ptr [EBP + -0x30]
00458ca3  MOV word ptr [ECX + 0x190],AX
00458caa  MOV EDX,dword ptr [EBP + -0x30]
00458cad  MOV AX,word ptr [EDX + 0x190]
00458cb4  PUSH EAX
00458cb5  PUSH 0x1
00458cb7  MOV ECX,dword ptr [EBP + 0xc]
00458cba  PUSH ECX
00458cbb  MOV EDX,dword ptr [EBP + 0x8]
00458cbe  PUSH EDX
00458cbf  MOV ECX,dword ptr [EBP + -0x58]
00458cc2  CALL 0x004590a0
00458cc7  PUSH EAX
00458cc8  MOV EAX,dword ptr [EBP + 0xc]
00458ccb  PUSH EAX
00458ccc  MOV ECX,dword ptr [EBP + 0x8]
00458ccf  PUSH ECX
00458cd0  MOV ECX,dword ptr [EBP + -0x58]
00458cd3  CALL 0x00459030
00458cd8  PUSH EAX
00458cd9  MOV EDX,dword ptr [EBP + -0x30]
00458cdc  MOV EAX,dword ptr [EDX]
00458cde  MOV ECX,dword ptr [EBP + -0x30]
00458ce1  MOV EDX,dword ptr [EAX + 0x44]
00458ce4  CALL EDX
00458ce6  MOV EAX,dword ptr [EBP + 0xc]
00458ce9  ADD EAX,0x5
00458cec  PUSH EAX
00458ced  MOV ECX,dword ptr [EBP + -0x30]
00458cf0  MOV EDX,dword ptr [ECX]
00458cf2  MOV ECX,dword ptr [EBP + -0x30]
00458cf5  MOV EAX,dword ptr [EDX + 0x6c]
00458cf8  CALL EAX
00458cfa  CMP dword ptr [EBP + 0x8],0x4
00458cfe  JZ 0x00458d61
00458d00  MOV ECX,dword ptr [EBP + 0x8]
00458d03  PUSH ECX
00458d04  CALL 0x005dcb00
00458d09  ADD ESP,0x4
00458d0c  MOV dword ptr [EBP + -0x4c],EAX
00458d0f  MOV ECX,dword ptr [EBP + -0x4c]
00458d12  CALL 0x0063aac0
00458d17  MOV EDX,dword ptr [EAX]
00458d19  MOV dword ptr [EBP + -0x48],EDX
00458d1c  XOR EAX,EAX
00458d1e  CMP dword ptr [EBP + -0x48],0x0
00458d22  SETZ AL
00458d25  MOVZX ECX,AL
00458d28  TEST ECX,ECX
00458d2a  JNZ 0x00458d4f
00458d2c  MOV EDX,dword ptr [EBP + 0x8]
00458d2f  PUSH EDX
00458d30  CALL 0x005dcb00
00458d35  ADD ESP,0x4
00458d38  MOV dword ptr [EBP + -0x50],EAX
00458d3b  MOV EAX,dword ptr [EBP + -0x50]
00458d3e  MOV CL,byte ptr [EAX + 0x4a1]
00458d44  MOV byte ptr [EBP + -0x51],CL
00458d47  MOVZX EDX,byte ptr [EBP + -0x51]
00458d4b  TEST EDX,EDX
00458d4d  JZ 0x00458d61
00458d4f  MOV EAX,dword ptr [EBP + -0x30]
00458d52  MOV EDX,dword ptr [EAX]
00458d54  MOV ECX,dword ptr [EBP + -0x30]
00458d57  MOV EAX,dword ptr [EDX + 0x70]
00458d5a  CALL EAX
00458d5c  JMP 0x00458e71
00458d61  MOV ECX,dword ptr [EBP + -0x30]
00458d64  MOV EDX,dword ptr [ECX]
00458d66  MOV ECX,dword ptr [EBP + -0x30]
00458d69  MOV EAX,dword ptr [EDX + 0x74]
00458d6c  CALL EAX
00458d6e  MOV ECX,dword ptr [0x00790738]
00458d74  MOV EDX,dword ptr [EBP + 0x8]
00458d77  CMP EDX,dword ptr [ECX + 0x118]
00458d7d  JNZ 0x00458e71
00458d83  MOV EAX,[0x00790738]
00458d88  MOV ECX,dword ptr [EBP + 0xc]
00458d8b  CMP ECX,dword ptr [EAX + 0x11c]
00458d91  JNZ 0x00458d9a
00458d93  MOV dword ptr [EBP + -0x38],0x0
00458d9a  MOV EDX,dword ptr [0x00790738]
00458da0  MOV EAX,dword ptr [EBP + 0xc]
00458da3  CMP EAX,dword ptr [EDX + 0x120]
00458da9  JNZ 0x00458db2
00458dab  MOV dword ptr [EBP + -0x38],0x1
00458db2  CMP dword ptr [EBP + -0x38],-0x1
00458db6  JZ 0x00458e71
00458dbc  MOV ECX,dword ptr [EBP + -0x38]
00458dbf  MOV EDX,dword ptr [EBP + -0x58]
00458dc2  CMP dword ptr [EDX + ECX*0x4 + 0x7c],0x0
00458dc7  JNZ 0x00458e14
00458dc9  PUSH 0x178
00458dce  CALL 0x00686d82
00458dd3  ADD ESP,0x4
00458dd6  MOV dword ptr [EBP + -0x40],EAX
00458dd9  MOV dword ptr [EBP + -0x4],0x0
00458de0  CMP dword ptr [EBP + -0x40],0x0
00458de4  JZ 0x00458df3
00458de6  MOV ECX,dword ptr [EBP + -0x40]
00458de9  CALL 0x005eaaf0
00458dee  MOV dword ptr [EBP + -0x5c],EAX
00458df1  JMP 0x00458dfa
00458df3  MOV dword ptr [EBP + -0x5c],0x0
00458dfa  MOV EAX,dword ptr [EBP + -0x5c]
00458dfd  MOV dword ptr [EBP + -0x3c],EAX
00458e00  MOV dword ptr [EBP + -0x4],0xffffffff
00458e07  MOV ECX,dword ptr [EBP + -0x38]
00458e0a  MOV EDX,dword ptr [EBP + -0x58]
00458e0d  MOV EAX,dword ptr [EBP + -0x3c]
00458e10  MOV dword ptr [EDX + ECX*0x4 + 0x7c],EAX
00458e14  PUSH -0x1
00458e16  PUSH 0x20
00458e18  MOV ECX,dword ptr [EBP + -0x30]
00458e1b  MOV EDX,dword ptr [ECX]
00458e1d  MOV ECX,dword ptr [EBP + -0x30]
00458e20  MOV EAX,dword ptr [EDX + 0x54]
00458e23  CALL EAX
00458e25  MOV ECX,dword ptr [EBP + 0x8]
00458e28  ADD EAX,dword ptr [EBP + ECX*0x8 + -0x28]
00458e2c  PUSH EAX
00458e2d  MOV EDX,dword ptr [EBP + -0x30]
00458e30  MOV EAX,dword ptr [EDX]
00458e32  MOV ECX,dword ptr [EBP + -0x30]
00458e35  MOV EDX,dword ptr [EAX + 0x4c]
00458e38  CALL EDX
00458e3a  MOV ECX,dword ptr [EBP + 0x8]
00458e3d  ADD EAX,dword ptr [EBP + ECX*0x8 + -0x2c]
00458e41  PUSH EAX
00458e42  PUSH 0x18a89
00458e47  MOV EDX,dword ptr [EBP + -0x38]
00458e4a  MOV EAX,dword ptr [EBP + -0x58]
00458e4d  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x7c]
00458e51  CALL 0x005eae80
00458e56  MOV ECX,dword ptr [EBP + -0x38]
00458e59  MOV EDX,dword ptr [EBP + -0x58]
00458e5c  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x7c]
00458e60  MOV ECX,dword ptr [EBP + -0x38]
00458e63  MOV EDX,dword ptr [EBP + -0x58]
00458e66  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x7c]
00458e6a  MOV EAX,dword ptr [EAX]
00458e6c  MOV EDX,dword ptr [EAX + 0x74]
00458e6f  CALL EDX
00458e71  MOV ECX,dword ptr [EBP + -0xc]
00458e74  MOV dword ptr FS:[0x0],ECX
00458e7b  POP ECX
00458e7c  MOV ESP,EBP
00458e7e  POP EBP
00458e7f  RET 0x8
