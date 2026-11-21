; FUN_004c88a0  004c88a0
004c88a0  PUSH EBP
004c88a1  MOV EBP,ESP
004c88a3  PUSH -0x1
004c88a5  PUSH 0x6a24d1
004c88aa  MOV EAX,FS:[0x0]
004c88b0  PUSH EAX
004c88b1  SUB ESP,0x48
004c88b4  MOV EAX,[0x00781870]
004c88b9  XOR EAX,EBP
004c88bb  PUSH EAX
004c88bc  LEA EAX,[EBP + -0xc]
004c88bf  MOV FS:[0x0],EAX
004c88c5  MOV dword ptr [EBP + -0x34],ECX
004c88c8  MOV dword ptr [EBP + -0x4],0x0
004c88cf  MOV word ptr [EBP + -0x10],0x0
004c88d5  MOVSX EAX,word ptr [EBP + 0x10]
004c88d9  TEST EAX,EAX
004c88db  JNZ 0x004c8a3b
004c88e1  MOV dword ptr [EBP + -0x1c],0x0
004c88e8  JMP 0x004c88f3
004c88ea  MOV ECX,dword ptr [EBP + -0x1c]
004c88ed  ADD ECX,0x1
004c88f0  MOV dword ptr [EBP + -0x1c],ECX
004c88f3  MOV EDX,dword ptr [EBP + -0x34]
004c88f6  MOV ECX,dword ptr [EDX + 0x8]
004c88f9  CALL 0x0060c9a0
004c88fe  CMP dword ptr [EBP + -0x1c],EAX
004c8901  JGE 0x004c8a36
004c8907  MOV EAX,dword ptr [EBP + -0x1c]
004c890a  PUSH EAX
004c890b  MOV ECX,dword ptr [EBP + -0x34]
004c890e  MOV EDX,dword ptr [ECX + 0x8]
004c8911  PUSH EDX
004c8912  CALL 0x004c7310
004c8917  ADD ESP,0x8
004c891a  MOV dword ptr [EBP + -0x18],EAX
004c891d  MOV EAX,dword ptr [EBP + -0x18]
004c8920  PUSH EAX
004c8921  LEA ECX,[EBP + -0x2a]
004c8924  PUSH ECX
004c8925  MOV ECX,dword ptr [EBP + -0x34]
004c8928  CALL 0x004dd780
004c892d  MOV dword ptr [EBP + -0x38],EAX
004c8930  MOV EDX,dword ptr [EBP + -0x38]
004c8933  MOV dword ptr [EBP + -0x3c],EDX
004c8936  MOV byte ptr [EBP + -0x4],0x1
004c893a  MOV EAX,dword ptr [EBP + -0x3c]
004c893d  PUSH EAX
004c893e  LEA ECX,[EBP + 0x8]
004c8941  CALL 0x00484ba0
004c8946  MOV byte ptr [EBP + -0x29],AL
004c8949  MOV byte ptr [EBP + -0x4],0x0
004c894d  LEA ECX,[EBP + -0x2a]
004c8950  CALL 0x00464210
004c8955  MOVZX ECX,byte ptr [EBP + -0x29]
004c8959  TEST ECX,ECX
004c895b  JZ 0x004c8a31
004c8961  MOV EDX,dword ptr [EBP + -0x18]
004c8964  MOV EAX,dword ptr [EDX + 0x8]
004c8967  MOV dword ptr [EBP + -0x14],EAX
004c896a  CMP dword ptr [EBP + -0x14],0x0
004c896e  JNZ 0x004c8987
004c8970  PUSH 0x4a9
004c8975  PUSH 0x6bf384
004c897a  PUSH 0x6bf560
004c897f  CALL 0x005e9f20
004c8984  ADD ESP,0xc
004c8987  MOVSX EDX,word ptr [EBP + -0x10]
004c898b  CMP EDX,0x2
004c898e  JL 0x004c89a7
004c8990  PUSH 0x4aa
004c8995  PUSH 0x6bf384
004c899a  PUSH 0x6bf548
004c899f  CALL 0x005e9f20
004c89a4  ADD ESP,0xc
004c89a7  PUSH 0x2
004c89a9  MOVSX ECX,word ptr [EBP + -0x10]
004c89ad  MOV EDX,dword ptr [EBP + -0x34]
004c89b0  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x48]
004c89b4  MOVSX ECX,word ptr [EBP + -0x10]
004c89b8  MOV EDX,dword ptr [EBP + -0x34]
004c89bb  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x48]
004c89bf  MOV EAX,dword ptr [EAX]
004c89c1  MOV EDX,dword ptr [EAX + 0xb0]
004c89c7  CALL EDX
004c89c9  MOV EAX,dword ptr [EBP + -0x14]
004c89cc  MOV EDX,dword ptr [EAX]
004c89ce  MOV ECX,dword ptr [EBP + -0x14]
004c89d1  MOV EAX,dword ptr [EDX + 0x54]
004c89d4  CALL EAX
004c89d6  ADD EAX,0x23
004c89d9  PUSH EAX
004c89da  MOV ECX,dword ptr [EBP + -0x14]
004c89dd  MOV EDX,dword ptr [ECX]
004c89df  MOV ECX,dword ptr [EBP + -0x14]
004c89e2  MOV EAX,dword ptr [EDX + 0x4c]
004c89e5  CALL EAX
004c89e7  ADD EAX,0x4
004c89ea  PUSH EAX
004c89eb  MOVSX ECX,word ptr [EBP + -0x10]
004c89ef  MOV EDX,dword ptr [EBP + -0x34]
004c89f2  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x48]
004c89f6  MOVSX ECX,word ptr [EBP + -0x10]
004c89fa  MOV EDX,dword ptr [EBP + -0x34]
004c89fd  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x48]
004c8a01  MOV EAX,dword ptr [EAX]
004c8a03  MOV EDX,dword ptr [EAX + 0x44]
004c8a06  CALL EDX
004c8a08  MOVSX EAX,word ptr [EBP + -0x10]
004c8a0c  MOV ECX,dword ptr [EBP + -0x34]
004c8a0f  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x48]
004c8a13  MOVSX EAX,word ptr [EBP + -0x10]
004c8a17  MOV ECX,dword ptr [EBP + -0x34]
004c8a1a  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x48]
004c8a1e  MOV EDX,dword ptr [EDX]
004c8a20  MOV EAX,dword ptr [EDX + 0x74]
004c8a23  CALL EAX
004c8a25  MOV CX,word ptr [EBP + -0x10]
004c8a29  ADD CX,0x1
004c8a2d  MOV word ptr [EBP + -0x10],CX
004c8a31  JMP 0x004c88ea
004c8a36  JMP 0x004c8e88
004c8a3b  MOVSX EDX,word ptr [EBP + 0x10]
004c8a3f  CMP EDX,0x1
004c8a42  JNZ 0x004c8ba2
004c8a48  MOV dword ptr [EBP + -0x20],0x0
004c8a4f  JMP 0x004c8a5a
004c8a51  MOV EAX,dword ptr [EBP + -0x20]
004c8a54  ADD EAX,0x1
004c8a57  MOV dword ptr [EBP + -0x20],EAX
004c8a5a  MOV ECX,dword ptr [EBP + -0x34]
004c8a5d  MOV ECX,dword ptr [ECX + 0x8]
004c8a60  CALL 0x0060c9a0
004c8a65  CMP dword ptr [EBP + -0x20],EAX
004c8a68  JGE 0x004c8b9d
004c8a6e  MOV EDX,dword ptr [EBP + -0x20]
004c8a71  PUSH EDX
004c8a72  MOV EAX,dword ptr [EBP + -0x34]
004c8a75  MOV ECX,dword ptr [EAX + 0x8]
004c8a78  PUSH ECX
004c8a79  CALL 0x004c7310
004c8a7e  ADD ESP,0x8
004c8a81  MOV dword ptr [EBP + -0x18],EAX
004c8a84  MOV EDX,dword ptr [EBP + -0x18]
004c8a87  PUSH EDX
004c8a88  LEA EAX,[EBP + -0x2c]
004c8a8b  PUSH EAX
004c8a8c  MOV ECX,dword ptr [EBP + -0x34]
004c8a8f  CALL 0x004dd780
004c8a94  MOV dword ptr [EBP + -0x40],EAX
004c8a97  MOV ECX,dword ptr [EBP + -0x40]
004c8a9a  MOV dword ptr [EBP + -0x44],ECX
004c8a9d  MOV byte ptr [EBP + -0x4],0x2
004c8aa1  MOV EDX,dword ptr [EBP + -0x44]
004c8aa4  PUSH EDX
004c8aa5  LEA ECX,[EBP + 0x8]
004c8aa8  CALL 0x00484ba0
004c8aad  MOV byte ptr [EBP + -0x2b],AL
004c8ab0  MOV byte ptr [EBP + -0x4],0x0
004c8ab4  LEA ECX,[EBP + -0x2c]
004c8ab7  CALL 0x00464210
004c8abc  MOVZX EAX,byte ptr [EBP + -0x2b]
004c8ac0  TEST EAX,EAX
004c8ac2  JZ 0x004c8b98
004c8ac8  MOV ECX,dword ptr [EBP + -0x18]
004c8acb  MOV EDX,dword ptr [ECX + 0x8]
004c8ace  MOV dword ptr [EBP + -0x14],EDX
004c8ad1  CMP dword ptr [EBP + -0x14],0x0
004c8ad5  JNZ 0x004c8aee
004c8ad7  PUSH 0x4ba
004c8adc  PUSH 0x6bf384
004c8ae1  PUSH 0x6bf560
004c8ae6  CALL 0x005e9f20
004c8aeb  ADD ESP,0xc
004c8aee  MOVSX ECX,word ptr [EBP + -0x10]
004c8af2  CMP ECX,0x2
004c8af5  JL 0x004c8b0e
004c8af7  PUSH 0x4bb
004c8afc  PUSH 0x6bf384
004c8b01  PUSH 0x6bf548
004c8b06  CALL 0x005e9f20
004c8b0b  ADD ESP,0xc
004c8b0e  PUSH 0x0
004c8b10  MOVSX EAX,word ptr [EBP + -0x10]
004c8b14  MOV ECX,dword ptr [EBP + -0x34]
004c8b17  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x48]
004c8b1b  MOVSX EAX,word ptr [EBP + -0x10]
004c8b1f  MOV ECX,dword ptr [EBP + -0x34]
004c8b22  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x48]
004c8b26  MOV EDX,dword ptr [EDX]
004c8b28  MOV EAX,dword ptr [EDX + 0xb0]
004c8b2e  CALL EAX
004c8b30  MOV ECX,dword ptr [EBP + -0x14]
004c8b33  MOV EDX,dword ptr [ECX]
004c8b35  MOV ECX,dword ptr [EBP + -0x14]
004c8b38  MOV EAX,dword ptr [EDX + 0x54]
004c8b3b  CALL EAX
004c8b3d  ADD EAX,0x21
004c8b40  PUSH EAX
004c8b41  MOV ECX,dword ptr [EBP + -0x14]
004c8b44  MOV EDX,dword ptr [ECX]
004c8b46  MOV ECX,dword ptr [EBP + -0x14]
004c8b49  MOV EAX,dword ptr [EDX + 0x4c]
004c8b4c  CALL EAX
004c8b4e  ADD EAX,0x4
004c8b51  PUSH EAX
004c8b52  MOVSX ECX,word ptr [EBP + -0x10]
004c8b56  MOV EDX,dword ptr [EBP + -0x34]
004c8b59  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x48]
004c8b5d  MOVSX ECX,word ptr [EBP + -0x10]
004c8b61  MOV EDX,dword ptr [EBP + -0x34]
004c8b64  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x48]
004c8b68  MOV EAX,dword ptr [EAX]
004c8b6a  MOV EDX,dword ptr [EAX + 0x44]
004c8b6d  CALL EDX
004c8b6f  MOVSX EAX,word ptr [EBP + -0x10]
004c8b73  MOV ECX,dword ptr [EBP + -0x34]
004c8b76  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x48]
004c8b7a  MOVSX EAX,word ptr [EBP + -0x10]
004c8b7e  MOV ECX,dword ptr [EBP + -0x34]
004c8b81  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x48]
004c8b85  MOV EDX,dword ptr [EDX]
004c8b87  MOV EAX,dword ptr [EDX + 0x74]
004c8b8a  CALL EAX
004c8b8c  MOV CX,word ptr [EBP + -0x10]
004c8b90  ADD CX,0x1
004c8b94  MOV word ptr [EBP + -0x10],CX
004c8b98  JMP 0x004c8a51
004c8b9d  JMP 0x004c8e88
004c8ba2  MOVSX EDX,word ptr [EBP + 0x10]
004c8ba6  CMP EDX,0x2
004c8ba9  JNZ 0x004c8d09
004c8baf  MOV dword ptr [EBP + -0x24],0x0
004c8bb6  JMP 0x004c8bc1
004c8bb8  MOV EAX,dword ptr [EBP + -0x24]
004c8bbb  ADD EAX,0x1
004c8bbe  MOV dword ptr [EBP + -0x24],EAX
004c8bc1  MOV ECX,dword ptr [EBP + -0x34]
004c8bc4  MOV ECX,dword ptr [ECX + 0x8]
004c8bc7  CALL 0x0060c9a0
004c8bcc  CMP dword ptr [EBP + -0x24],EAX
004c8bcf  JGE 0x004c8d04
004c8bd5  MOV EDX,dword ptr [EBP + -0x24]
004c8bd8  PUSH EDX
004c8bd9  MOV EAX,dword ptr [EBP + -0x34]
004c8bdc  MOV ECX,dword ptr [EAX + 0x8]
004c8bdf  PUSH ECX
004c8be0  CALL 0x004c7310
004c8be5  ADD ESP,0x8
004c8be8  MOV dword ptr [EBP + -0x18],EAX
004c8beb  MOV EDX,dword ptr [EBP + -0x18]
004c8bee  PUSH EDX
004c8bef  LEA EAX,[EBP + -0x2e]
004c8bf2  PUSH EAX
004c8bf3  MOV ECX,dword ptr [EBP + -0x34]
004c8bf6  CALL 0x004dd780
004c8bfb  MOV dword ptr [EBP + -0x48],EAX
004c8bfe  MOV ECX,dword ptr [EBP + -0x48]
004c8c01  MOV dword ptr [EBP + -0x4c],ECX
004c8c04  MOV byte ptr [EBP + -0x4],0x3
004c8c08  MOV EDX,dword ptr [EBP + -0x4c]
004c8c0b  PUSH EDX
004c8c0c  LEA ECX,[EBP + 0x8]
004c8c0f  CALL 0x00484ba0
004c8c14  MOV byte ptr [EBP + -0x2d],AL
004c8c17  MOV byte ptr [EBP + -0x4],0x0
004c8c1b  LEA ECX,[EBP + -0x2e]
004c8c1e  CALL 0x00464210
004c8c23  MOVZX EAX,byte ptr [EBP + -0x2d]
004c8c27  TEST EAX,EAX
004c8c29  JZ 0x004c8cff
004c8c2f  MOV ECX,dword ptr [EBP + -0x18]
004c8c32  MOV EDX,dword ptr [ECX + 0x8]
004c8c35  MOV dword ptr [EBP + -0x14],EDX
004c8c38  CMP dword ptr [EBP + -0x14],0x0
004c8c3c  JNZ 0x004c8c55
004c8c3e  PUSH 0x4cb
004c8c43  PUSH 0x6bf384
004c8c48  PUSH 0x6bf560
004c8c4d  CALL 0x005e9f20
004c8c52  ADD ESP,0xc
004c8c55  MOVSX ECX,word ptr [EBP + -0x10]
004c8c59  CMP ECX,0x2
004c8c5c  JL 0x004c8c75
004c8c5e  PUSH 0x4cc
004c8c63  PUSH 0x6bf384
004c8c68  PUSH 0x6bf548
004c8c6d  CALL 0x005e9f20
004c8c72  ADD ESP,0xc
004c8c75  PUSH 0x1
004c8c77  MOVSX EAX,word ptr [EBP + -0x10]
004c8c7b  MOV ECX,dword ptr [EBP + -0x34]
004c8c7e  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x50]
004c8c82  MOVSX EAX,word ptr [EBP + -0x10]
004c8c86  MOV ECX,dword ptr [EBP + -0x34]
004c8c89  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x50]
004c8c8d  MOV EDX,dword ptr [EDX]
004c8c8f  MOV EAX,dword ptr [EDX + 0xb0]
004c8c95  CALL EAX
004c8c97  MOV ECX,dword ptr [EBP + -0x14]
004c8c9a  MOV EDX,dword ptr [ECX]
004c8c9c  MOV ECX,dword ptr [EBP + -0x14]
004c8c9f  MOV EAX,dword ptr [EDX + 0x54]
004c8ca2  CALL EAX
004c8ca4  ADD EAX,0x33
004c8ca7  PUSH EAX
004c8ca8  MOV ECX,dword ptr [EBP + -0x14]
004c8cab  MOV EDX,dword ptr [ECX]
004c8cad  MOV ECX,dword ptr [EBP + -0x14]
004c8cb0  MOV EAX,dword ptr [EDX + 0x4c]
004c8cb3  CALL EAX
004c8cb5  ADD EAX,0x4
004c8cb8  PUSH EAX
004c8cb9  MOVSX ECX,word ptr [EBP + -0x10]
004c8cbd  MOV EDX,dword ptr [EBP + -0x34]
004c8cc0  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x50]
004c8cc4  MOVSX ECX,word ptr [EBP + -0x10]
004c8cc8  MOV EDX,dword ptr [EBP + -0x34]
004c8ccb  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x50]
004c8ccf  MOV EAX,dword ptr [EAX]
004c8cd1  MOV EDX,dword ptr [EAX + 0x44]
004c8cd4  CALL EDX
004c8cd6  MOVSX EAX,word ptr [EBP + -0x10]
004c8cda  MOV ECX,dword ptr [EBP + -0x34]
004c8cdd  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x50]
004c8ce1  MOVSX EAX,word ptr [EBP + -0x10]
004c8ce5  MOV ECX,dword ptr [EBP + -0x34]
004c8ce8  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x50]
004c8cec  MOV EDX,dword ptr [EDX]
004c8cee  MOV EAX,dword ptr [EDX + 0x74]
004c8cf1  CALL EAX
004c8cf3  MOV CX,word ptr [EBP + -0x10]
004c8cf7  ADD CX,0x1
004c8cfb  MOV word ptr [EBP + -0x10],CX
004c8cff  JMP 0x004c8bb8
004c8d04  JMP 0x004c8e88
004c8d09  MOVSX EDX,word ptr [EBP + 0x10]
004c8d0d  CMP EDX,0x3
004c8d10  JNZ 0x004c8e6d
004c8d16  MOV dword ptr [EBP + -0x28],0x0
004c8d1d  JMP 0x004c8d28
004c8d1f  MOV EAX,dword ptr [EBP + -0x28]
004c8d22  ADD EAX,0x1
004c8d25  MOV dword ptr [EBP + -0x28],EAX
004c8d28  MOV ECX,dword ptr [EBP + -0x34]
004c8d2b  MOV ECX,dword ptr [ECX + 0x8]
004c8d2e  CALL 0x0060c9a0
004c8d33  CMP dword ptr [EBP + -0x28],EAX
004c8d36  JGE 0x004c8e6b
004c8d3c  MOV EDX,dword ptr [EBP + -0x28]
004c8d3f  PUSH EDX
004c8d40  MOV EAX,dword ptr [EBP + -0x34]
004c8d43  MOV ECX,dword ptr [EAX + 0x8]
004c8d46  PUSH ECX
004c8d47  CALL 0x004c7310
004c8d4c  ADD ESP,0x8
004c8d4f  MOV dword ptr [EBP + -0x18],EAX
004c8d52  MOV EDX,dword ptr [EBP + -0x18]
004c8d55  PUSH EDX
004c8d56  LEA EAX,[EBP + -0x30]
004c8d59  PUSH EAX
004c8d5a  MOV ECX,dword ptr [EBP + -0x34]
004c8d5d  CALL 0x004dd780
004c8d62  MOV dword ptr [EBP + -0x50],EAX
004c8d65  MOV ECX,dword ptr [EBP + -0x50]
004c8d68  MOV dword ptr [EBP + -0x54],ECX
004c8d6b  MOV byte ptr [EBP + -0x4],0x4
004c8d6f  MOV EDX,dword ptr [EBP + -0x54]
004c8d72  PUSH EDX
004c8d73  LEA ECX,[EBP + 0x8]
004c8d76  CALL 0x00484ba0
004c8d7b  MOV byte ptr [EBP + -0x2f],AL
004c8d7e  MOV byte ptr [EBP + -0x4],0x0
004c8d82  LEA ECX,[EBP + -0x30]
004c8d85  CALL 0x00464210
004c8d8a  MOVZX EAX,byte ptr [EBP + -0x2f]
004c8d8e  TEST EAX,EAX
004c8d90  JZ 0x004c8e66
004c8d96  MOV ECX,dword ptr [EBP + -0x18]
004c8d99  MOV EDX,dword ptr [ECX + 0x8]
004c8d9c  MOV dword ptr [EBP + -0x14],EDX
004c8d9f  CMP dword ptr [EBP + -0x14],0x0
004c8da3  JNZ 0x004c8dbc
004c8da5  PUSH 0x4dc
004c8daa  PUSH 0x6bf384
004c8daf  PUSH 0x6bf560
004c8db4  CALL 0x005e9f20
004c8db9  ADD ESP,0xc
004c8dbc  MOVSX ECX,word ptr [EBP + -0x10]
004c8dc0  CMP ECX,0x3
004c8dc3  JL 0x004c8ddc
004c8dc5  PUSH 0x4dd
004c8dca  PUSH 0x6bf384
004c8dcf  PUSH 0x6bf52c
004c8dd4  CALL 0x005e9f20
004c8dd9  ADD ESP,0xc
004c8ddc  PUSH 0x2
004c8dde  MOVSX EAX,word ptr [EBP + -0x10]
004c8de2  MOV ECX,dword ptr [EBP + -0x34]
004c8de5  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x58]
004c8de9  MOVSX EAX,word ptr [EBP + -0x10]
004c8ded  MOV ECX,dword ptr [EBP + -0x34]
004c8df0  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x58]
004c8df4  MOV EDX,dword ptr [EDX]
004c8df6  MOV EAX,dword ptr [EDX + 0xb0]
004c8dfc  CALL EAX
004c8dfe  MOV ECX,dword ptr [EBP + -0x14]
004c8e01  MOV EDX,dword ptr [ECX]
004c8e03  MOV ECX,dword ptr [EBP + -0x14]
004c8e06  MOV EAX,dword ptr [EDX + 0x54]
004c8e09  CALL EAX
004c8e0b  ADD EAX,0x23
004c8e0e  PUSH EAX
004c8e0f  MOV ECX,dword ptr [EBP + -0x14]
004c8e12  MOV EDX,dword ptr [ECX]
004c8e14  MOV ECX,dword ptr [EBP + -0x14]
004c8e17  MOV EAX,dword ptr [EDX + 0x4c]
004c8e1a  CALL EAX
004c8e1c  ADD EAX,0x5
004c8e1f  PUSH EAX
004c8e20  MOVSX ECX,word ptr [EBP + -0x10]
004c8e24  MOV EDX,dword ptr [EBP + -0x34]
004c8e27  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x58]
004c8e2b  MOVSX ECX,word ptr [EBP + -0x10]
004c8e2f  MOV EDX,dword ptr [EBP + -0x34]
004c8e32  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x58]
004c8e36  MOV EAX,dword ptr [EAX]
004c8e38  MOV EDX,dword ptr [EAX + 0x44]
004c8e3b  CALL EDX
004c8e3d  MOVSX EAX,word ptr [EBP + -0x10]
004c8e41  MOV ECX,dword ptr [EBP + -0x34]
004c8e44  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x58]
004c8e48  MOVSX EAX,word ptr [EBP + -0x10]
004c8e4c  MOV ECX,dword ptr [EBP + -0x34]
004c8e4f  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x58]
004c8e53  MOV EDX,dword ptr [EDX]
004c8e55  MOV EAX,dword ptr [EDX + 0x74]
004c8e58  CALL EAX
004c8e5a  MOV CX,word ptr [EBP + -0x10]
004c8e5e  ADD CX,0x1
004c8e62  MOV word ptr [EBP + -0x10],CX
004c8e66  JMP 0x004c8d1f
004c8e6b  JMP 0x004c8e88
004c8e6d  XOR EDX,EDX
004c8e6f  JNZ 0x004c8e88
004c8e71  PUSH 0x4e6
004c8e76  PUSH 0x6bf384
004c8e7b  PUSH 0x6b2b64
004c8e80  CALL 0x005e9f20
004c8e85  ADD ESP,0xc
004c8e88  MOV dword ptr [EBP + -0x4],0xffffffff
004c8e8f  LEA ECX,[EBP + 0x8]
004c8e92  CALL 0x00484470
004c8e97  MOV ECX,dword ptr [EBP + -0xc]
004c8e9a  MOV dword ptr FS:[0x0],ECX
004c8ea1  POP ECX
004c8ea2  MOV ESP,EBP
004c8ea4  POP EBP
004c8ea5  RET 0xc
