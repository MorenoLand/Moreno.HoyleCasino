; FUN_004f3c20  004f3c20
004f3c20  PUSH EBP
004f3c21  MOV EBP,ESP
004f3c23  SUB ESP,0x3c
004f3c26  PUSH ESI
004f3c27  MOV dword ptr [EBP + -0x1c],ECX
004f3c2a  MOVSX EAX,word ptr [EBP + 0x8]
004f3c2e  TEST EAX,EAX
004f3c30  JGE 0x004f3c49
004f3c32  PUSH 0x31f2
004f3c37  PUSH 0x6bf384
004f3c3c  PUSH 0x6bf888
004f3c41  CALL 0x005e9f20
004f3c46  ADD ESP,0xc
004f3c49  MOVSX ESI,word ptr [EBP + 0x8]
004f3c4d  MOV ECX,dword ptr [0x00791364]
004f3c53  CALL 0x0047f950
004f3c58  CMP ESI,EAX
004f3c5a  JL 0x004f3c73
004f3c5c  PUSH 0x31f3
004f3c61  PUSH 0x6bf384
004f3c66  PUSH 0x6bf858
004f3c6b  CALL 0x005e9f20
004f3c70  ADD ESP,0xc
004f3c73  MOVSX EAX,word ptr [EBP + 0xc]
004f3c77  CMP EAX,0x2
004f3c7a  JGE 0x004f3c93
004f3c7c  PUSH 0x31f4
004f3c81  PUSH 0x6bf384
004f3c86  PUSH 0x6bf778
004f3c8b  CALL 0x005e9f20
004f3c90  ADD ESP,0xc
004f3c93  MOVSX ESI,word ptr [EBP + 0xc]
004f3c97  MOV ECX,dword ptr [0x00791364]
004f3c9d  CALL 0x0047f950
004f3ca2  CMP ESI,EAX
004f3ca4  JLE 0x004f3cbd
004f3ca6  PUSH 0x31f5
004f3cab  PUSH 0x6bf384
004f3cb0  PUSH 0x6bf740
004f3cb5  CALL 0x005e9f20
004f3cba  ADD ESP,0xc
004f3cbd  MOV EAX,dword ptr [EBP + -0x1c]
004f3cc0  MOVSX ECX,word ptr [EAX + 0x3d0]
004f3cc7  MOV dword ptr [EBP + -0x20],ECX
004f3cca  FILD dword ptr [EBP + -0x20]
004f3ccd  FDIV double ptr [0x006b4b00]
004f3cd3  MOVSX EDX,word ptr [EBP + 0xc]
004f3cd7  MOV dword ptr [EBP + -0x24],EDX
004f3cda  FILD dword ptr [EBP + -0x24]
004f3cdd  FDIVP
004f3cdf  FSTP double ptr [EBP + -0x18]
004f3ce2  MOV EAX,dword ptr [EBP + -0x1c]
004f3ce5  MOV ECX,dword ptr [EAX + 0x428]
004f3ceb  MOVSX EDX,word ptr [EBP + 0x8]
004f3cef  IMUL EDX,EDX,0xe
004f3cf2  LEA EAX,[ECX + EDX*0x1 + 0xd90]
004f3cf9  MOVSX ECX,word ptr [EBP + 0xc]
004f3cfd  MOVZX EDX,word ptr [EAX + ECX*0x2 + -0x4]
004f3d02  TEST EDX,EDX
004f3d04  JNZ 0x004f3d0e
004f3d06  FLD double ptr [EBP + -0x18]
004f3d09  JMP 0x004f3dde
004f3d0e  MOV EAX,dword ptr [EBP + -0x1c]
004f3d11  MOV ECX,dword ptr [EAX + 0x428]
004f3d17  MOVSX EDX,word ptr [EBP + 0x8]
004f3d1b  IMUL EDX,EDX,0xe
004f3d1e  LEA EAX,[ECX + EDX*0x1 + 0xd90]
004f3d25  MOVSX ECX,word ptr [EBP + 0xc]
004f3d29  MOVZX EDX,word ptr [EAX + ECX*0x2 + -0x4]
004f3d2e  MOV dword ptr [EBP + -0x28],EDX
004f3d31  FILD dword ptr [EBP + -0x28]
004f3d34  FSTP double ptr [EBP + -0x8]
004f3d37  MOV EAX,dword ptr [EBP + -0x1c]
004f3d3a  MOV ECX,dword ptr [EAX + 0x428]
004f3d40  MOVSX EDX,word ptr [EBP + 0x8]
004f3d44  IMUL EDX,EDX,0xe
004f3d47  LEA EAX,[ECX + EDX*0x1 + 0xe00]
004f3d4e  MOVSX ECX,word ptr [EBP + 0xc]
004f3d52  MOVZX EDX,word ptr [EAX + ECX*0x2 + -0x4]
004f3d57  MOV dword ptr [EBP + -0x2c],EDX
004f3d5a  FILD dword ptr [EBP + -0x2c]
004f3d5d  FSTP double ptr [EBP + -0x10]
004f3d60  MOV ECX,dword ptr [0x00791eb8]
004f3d66  CALL 0x005da7b0
004f3d6b  MOVZX EAX,AL
004f3d6e  TEST EAX,EAX
004f3d70  JNZ 0x004f3da5
004f3d72  MOV ECX,dword ptr [EBP + -0x1c]
004f3d75  MOVSX EDX,word ptr [ECX + 0x3d4]
004f3d7c  MOV dword ptr [EBP + -0x30],EDX
004f3d7f  FILD dword ptr [EBP + -0x30]
004f3d82  FDIVR double ptr [EBP + -0x10]
004f3d85  FADD double ptr [EBP + -0x18]
004f3d88  MOV EAX,dword ptr [EBP + -0x1c]
004f3d8b  MOVSX ECX,word ptr [EAX + 0x3d4]
004f3d92  MOV dword ptr [EBP + -0x34],ECX
004f3d95  FILD dword ptr [EBP + -0x34]
004f3d98  FDIVR double ptr [EBP + -0x8]
004f3d9b  FLD1
004f3d9d  FADDP
004f3d9f  FDIVP
004f3da1  JMP 0x004f3dde
004f3da5  MOV EDX,dword ptr [EBP + -0x1c]
004f3da8  MOVSX EAX,word ptr [EDX + 0x3d4]
004f3daf  CDQ
004f3db0  SUB EAX,EDX
004f3db2  SAR EAX,0x1
004f3db4  MOV dword ptr [EBP + -0x38],EAX
004f3db7  FILD dword ptr [EBP + -0x38]
004f3dba  FDIVR double ptr [EBP + -0x10]
004f3dbd  FADD double ptr [EBP + -0x18]
004f3dc0  MOV EAX,dword ptr [EBP + -0x1c]
004f3dc3  MOVSX EAX,word ptr [EAX + 0x3d4]
004f3dca  CDQ
004f3dcb  SUB EAX,EDX
004f3dcd  SAR EAX,0x1
004f3dcf  MOV dword ptr [EBP + -0x3c],EAX
004f3dd2  FILD dword ptr [EBP + -0x3c]
004f3dd5  FDIVR double ptr [EBP + -0x8]
004f3dd8  FLD1
004f3dda  FADDP
004f3ddc  FDIVP
004f3dde  POP ESI
004f3ddf  MOV ESP,EBP
004f3de1  POP EBP
004f3de2  RET 0x8
