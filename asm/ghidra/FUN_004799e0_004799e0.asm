; FUN_004799e0  004799e0
004799e0  PUSH EBP
004799e1  MOV EBP,ESP
004799e3  PUSH -0x1
004799e5  PUSH 0x69fe82
004799ea  MOV EAX,FS:[0x0]
004799f0  PUSH EAX
004799f1  SUB ESP,0x80
004799f7  MOV EAX,[0x00781870]
004799fc  XOR EAX,EBP
004799fe  PUSH EAX
004799ff  LEA EAX,[EBP + -0xc]
00479a02  MOV FS:[0x0],EAX
00479a08  MOV dword ptr [EBP + -0x60],ECX
00479a0b  PUSH 0xb
00479a0d  MOV ECX,dword ptr [0x0162ee84]
00479a13  CALL 0x006375d0
00479a18  MOV dword ptr [EBP + -0x10],EAX
00479a1b  PUSH 0x0
00479a1d  PUSH 0x0
00479a1f  MOV ECX,dword ptr [EBP + -0x60]
00479a22  CALL 0x0047aab0
00479a27  MOV word ptr [EBP + -0x14],0x0
00479a2d  PUSH 0x204
00479a32  CALL 0x00686d82
00479a37  ADD ESP,0x4
00479a3a  MOV dword ptr [EBP + -0x1c],EAX
00479a3d  MOV dword ptr [EBP + -0x4],0x0
00479a44  CMP dword ptr [EBP + -0x1c],0x0
00479a48  JZ 0x00479a57
00479a4a  MOV ECX,dword ptr [EBP + -0x1c]
00479a4d  CALL 0x00465760
00479a52  MOV dword ptr [EBP + -0x64],EAX
00479a55  JMP 0x00479a5e
00479a57  MOV dword ptr [EBP + -0x64],0x0
00479a5e  MOV EAX,dword ptr [EBP + -0x64]
00479a61  MOV dword ptr [EBP + -0x18],EAX
00479a64  MOV dword ptr [EBP + -0x4],0xffffffff
00479a6b  MOV ECX,dword ptr [EBP + -0x60]
00479a6e  MOV EDX,dword ptr [EBP + -0x18]
00479a71  MOV dword ptr [ECX + 0x28],EDX
00479a74  MOV EAX,dword ptr [EBP + -0x60]
00479a77  MOV ECX,dword ptr [EAX + 0x28]
00479a7a  CALL 0x005f87d0
00479a7f  MOV ECX,dword ptr [EBP + -0x60]
00479a82  MOV EDX,dword ptr [ECX + 0x28]
00479a85  MOV EAX,dword ptr [EBP + -0x60]
00479a88  MOV ECX,dword ptr [EAX + 0x28]
00479a8b  MOV EDX,dword ptr [EDX]
00479a8d  MOV EAX,dword ptr [EDX + 0x3c]
00479a90  CALL EAX
00479a92  MOV word ptr [EBP + -0x14],0x1
00479a98  MOVSX ECX,word ptr [EBP + -0x14]
00479a9c  MOV dword ptr [EBP + -0x68],ECX
00479a9f  CMP dword ptr [EBP + -0x68],0x0
00479aa3  JLE 0x00479abc
00479aa5  CMP dword ptr [EBP + -0x68],0x4
00479aa9  JLE 0x00479aad
00479aab  JMP 0x00479abc
00479aad  MOVSX EDX,word ptr [EBP + -0x14]
00479ab1  PUSH EDX
00479ab2  MOV ECX,dword ptr [EBP + -0x60]
00479ab5  CALL 0x0047cb10
00479aba  JMP 0x00479ac6
00479abc  PUSH 0x1
00479abe  MOV ECX,dword ptr [EBP + -0x60]
00479ac1  CALL 0x0047cb10
00479ac6  MOV word ptr [EBP + -0x14],0x1
00479acc  MOVSX EAX,word ptr [EBP + -0x14]
00479ad0  MOV dword ptr [EBP + -0x6c],EAX
00479ad3  MOV ECX,dword ptr [EBP + -0x6c]
00479ad6  SUB ECX,0x1
00479ad9  MOV dword ptr [EBP + -0x6c],ECX
00479adc  CMP dword ptr [EBP + -0x6c],0x9
00479ae0  JA 0x00479b02
00479ae2  MOV EDX,dword ptr [EBP + -0x6c]
00479ae5  MOVZX EAX,byte ptr [EDX + 0x47a330]
00479aec  JMP dword ptr [EAX*0x4 + 0x47a328]
00479b02  PUSH 0x3
00479b04  MOV ECX,dword ptr [EBP + -0x60]
00479b07  CALL 0x0047be00
00479b0c  MOV EDX,dword ptr [EBP + -0x60]
00479b0f  MOV dword ptr [0x00791364],EDX
00479b15  MOV ECX,dword ptr [0x00791364]
00479b1b  CALL 0x0047f950
00479b20  MOV ECX,dword ptr [EBP + -0x60]
00479b23  MOV dword ptr [ECX + 0x42c],EAX
00479b29  MOV EDX,dword ptr [0x007947e0]
00479b2f  MOV EAX,dword ptr [EDX + 0x4f18]
00479b35  PUSH EAX
00479b36  MOV ECX,dword ptr [EBP + -0x60]
00479b39  CALL 0x0047d810
00479b3e  MOV ECX,dword ptr [EBP + -0x60]
00479b41  MOV dword ptr [ECX + 0x454],0x1
00479b4b  PUSH 0x24
00479b4d  CALL 0x00686d82
00479b52  ADD ESP,0x4
00479b55  MOV dword ptr [EBP + -0x24],EAX
00479b58  MOV dword ptr [EBP + -0x4],0x1
00479b5f  CMP dword ptr [EBP + -0x24],0x0
00479b63  JZ 0x00479b72
00479b65  MOV ECX,dword ptr [EBP + -0x24]
00479b68  CALL 0x00465190
00479b6d  MOV dword ptr [EBP + -0x70],EAX
00479b70  JMP 0x00479b79
00479b72  MOV dword ptr [EBP + -0x70],0x0
00479b79  MOV EDX,dword ptr [EBP + -0x70]
00479b7c  MOV dword ptr [EBP + -0x20],EDX
00479b7f  MOV dword ptr [EBP + -0x4],0xffffffff
00479b86  MOV EAX,dword ptr [EBP + -0x60]
00479b89  MOV ECX,dword ptr [EBP + -0x20]
00479b8c  MOV dword ptr [EAX + 0x30],ECX
00479b8f  PUSH 0x10
00479b91  CALL 0x00686d82
00479b96  ADD ESP,0x4
00479b99  MOV dword ptr [EBP + -0x2c],EAX
00479b9c  MOV dword ptr [EBP + -0x4],0x2
00479ba3  CMP dword ptr [EBP + -0x2c],0x0
00479ba7  JZ 0x00479bb6
00479ba9  MOV ECX,dword ptr [EBP + -0x2c]
00479bac  CALL 0x0060c5f0
00479bb1  MOV dword ptr [EBP + -0x74],EAX
00479bb4  JMP 0x00479bbd
00479bb6  MOV dword ptr [EBP + -0x74],0x0
00479bbd  MOV EDX,dword ptr [EBP + -0x74]
00479bc0  MOV dword ptr [EBP + -0x28],EDX
00479bc3  MOV dword ptr [EBP + -0x4],0xffffffff
00479bca  MOV EAX,dword ptr [EBP + -0x60]
00479bcd  MOV ECX,dword ptr [EBP + -0x28]
00479bd0  MOV dword ptr [EAX + 0x34],ECX
00479bd3  PUSH 0x1d0
00479bd8  CALL 0x00686d82
00479bdd  ADD ESP,0x4
00479be0  MOV dword ptr [EBP + -0x34],EAX
00479be3  MOV dword ptr [EBP + -0x4],0x3
00479bea  CMP dword ptr [EBP + -0x34],0x0
00479bee  JZ 0x00479bfd
00479bf0  MOV ECX,dword ptr [EBP + -0x34]
00479bf3  CALL 0x005ec5a0
00479bf8  MOV dword ptr [EBP + -0x78],EAX
00479bfb  JMP 0x00479c04
00479bfd  MOV dword ptr [EBP + -0x78],0x0
00479c04  MOV EDX,dword ptr [EBP + -0x78]
00479c07  MOV dword ptr [EBP + -0x30],EDX
00479c0a  MOV dword ptr [EBP + -0x4],0xffffffff
00479c11  MOV EAX,dword ptr [EBP + -0x60]
00479c14  MOV ECX,dword ptr [EBP + -0x30]
00479c17  MOV dword ptr [EAX + 0xe4],ECX
00479c1d  PUSH 0xb4
00479c22  PUSH 0x0
00479c24  MOV EDX,dword ptr [EBP + -0x60]
00479c27  MOV EAX,dword ptr [EDX + 0xe4]
00479c2d  MOV ECX,dword ptr [EBP + -0x60]
00479c30  MOV ECX,dword ptr [ECX + 0xe4]
00479c36  MOV EDX,dword ptr [EAX]
00479c38  MOV EAX,dword ptr [EDX + 0x44]
00479c3b  CALL EAX
00479c3d  PUSH ECX
00479c3e  MOV ECX,ESP
00479c40  MOV DX,word ptr [0x0075ee1c]
00479c47  MOV word ptr [ECX],DX
00479c4a  MOV AL,[0x0075ee1e]
00479c4f  MOV byte ptr [ECX + 0x2],AL
00479c52  PUSH -0x1
00479c54  PUSH 0x38
00479c56  MOV ECX,dword ptr [EBP + -0x60]
00479c59  MOV ECX,dword ptr [ECX + 0xe4]
00479c5f  CALL 0x005ecd00
00479c64  PUSH 0x14
00479c66  MOV EDX,dword ptr [EBP + -0x60]
00479c69  MOV ECX,dword ptr [EDX + 0xe4]
00479c6f  CALL 0x005eccb0
00479c74  PUSH 0x280
00479c79  MOV EAX,dword ptr [EBP + -0x60]
00479c7c  MOV ECX,dword ptr [EAX + 0xe4]
00479c82  CALL 0x005ecc60
00479c87  PUSH 0x30
00479c89  MOV ECX,dword ptr [EBP + -0x60]
00479c8c  MOV ECX,dword ptr [ECX + 0xe4]
00479c92  CALL 0x005ef310
00479c97  PUSH 0x1
00479c99  MOV EDX,dword ptr [EBP + -0x60]
00479c9c  MOV EAX,dword ptr [EDX + 0xe4]
00479ca2  MOV ECX,dword ptr [EBP + -0x60]
00479ca5  MOV ECX,dword ptr [ECX + 0xe4]
00479cab  MOV EDX,dword ptr [EAX]
00479cad  MOV EAX,dword ptr [EDX + 0x6c]
00479cb0  CALL EAX
00479cb2  MOV ECX,dword ptr [EBP + -0x60]
00479cb5  MOV EDX,dword ptr [ECX + 0xe4]
00479cbb  MOV EAX,dword ptr [EBP + -0x60]
00479cbe  MOV ECX,dword ptr [EAX + 0xe4]
00479cc4  MOV EDX,dword ptr [EDX]
00479cc6  MOV EAX,dword ptr [EDX + 0x70]
00479cc9  CALL EAX
00479ccb  MOV ECX,dword ptr [EBP + -0x60]
00479cce  MOV EDX,dword ptr [ECX + 0xe4]
00479cd4  MOV EAX,dword ptr [EBP + -0x60]
00479cd7  MOV ECX,dword ptr [EAX + 0xe4]
00479cdd  MOV EDX,dword ptr [EDX]
00479cdf  MOV EAX,dword ptr [EDX + 0x40]
00479ce2  CALL EAX
00479ce4  PUSH 0x6bb048
00479ce9  MOV ECX,dword ptr [EBP + -0x60]
00479cec  MOV EDX,dword ptr [ECX + 0xe4]
00479cf2  MOV EAX,dword ptr [EBP + -0x60]
00479cf5  MOV ECX,dword ptr [EAX + 0xe4]
00479cfb  MOV EDX,dword ptr [EDX]
00479cfd  MOV EAX,dword ptr [EDX + 0xb4]
00479d03  CALL EAX
00479d05  PUSH 0x1d0
00479d0a  CALL 0x00686d82
00479d0f  ADD ESP,0x4
00479d12  MOV dword ptr [EBP + -0x3c],EAX
00479d15  MOV dword ptr [EBP + -0x4],0x4
00479d1c  CMP dword ptr [EBP + -0x3c],0x0
00479d20  JZ 0x00479d2f
00479d22  MOV ECX,dword ptr [EBP + -0x3c]
00479d25  CALL 0x005ec5a0
00479d2a  MOV dword ptr [EBP + -0x7c],EAX
00479d2d  JMP 0x00479d36
00479d2f  MOV dword ptr [EBP + -0x7c],0x0
00479d36  MOV ECX,dword ptr [EBP + -0x7c]
00479d39  MOV dword ptr [EBP + -0x38],ECX
00479d3c  MOV dword ptr [EBP + -0x4],0xffffffff
00479d43  MOV EDX,dword ptr [EBP + -0x60]
00479d46  MOV EAX,dword ptr [EBP + -0x38]
00479d49  MOV dword ptr [EDX + 0x498],EAX
00479d4f  MOV ECX,dword ptr [EBP + -0x60]
00479d52  MOV EDX,dword ptr [ECX + 0xe4]
00479d58  MOV EAX,dword ptr [EBP + -0x60]
00479d5b  MOV ECX,dword ptr [EAX + 0xe4]
00479d61  MOV EDX,dword ptr [EDX]
00479d63  MOV EAX,dword ptr [EDX + 0x54]
00479d66  CALL EAX
00479d68  ADD EAX,0x14
00479d6b  PUSH EAX
00479d6c  PUSH 0x0
00479d6e  MOV ECX,dword ptr [EBP + -0x60]
00479d71  MOV EDX,dword ptr [ECX + 0x498]
00479d77  MOV EAX,dword ptr [EBP + -0x60]
00479d7a  MOV ECX,dword ptr [EAX + 0x498]
00479d80  MOV EDX,dword ptr [EDX]
00479d82  MOV EAX,dword ptr [EDX + 0x44]
00479d85  CALL EAX
00479d87  PUSH ECX
00479d88  MOV ECX,ESP
00479d8a  MOV DX,word ptr [0x0075ee1c]
00479d91  MOV word ptr [ECX],DX
00479d94  MOV AL,[0x0075ee1e]
00479d99  MOV byte ptr [ECX + 0x2],AL
00479d9c  PUSH -0x1
00479d9e  PUSH 0x38
00479da0  MOV ECX,dword ptr [EBP + -0x60]
00479da3  MOV ECX,dword ptr [ECX + 0x498]
00479da9  CALL 0x005ecd00
00479dae  PUSH 0x14
00479db0  MOV EDX,dword ptr [EBP + -0x60]
00479db3  MOV ECX,dword ptr [EDX + 0x498]
00479db9  CALL 0x005eccb0
00479dbe  PUSH 0x280
00479dc3  MOV EAX,dword ptr [EBP + -0x60]
00479dc6  MOV ECX,dword ptr [EAX + 0x498]
00479dcc  CALL 0x005ecc60
00479dd1  PUSH 0x30
00479dd3  MOV ECX,dword ptr [EBP + -0x60]
00479dd6  MOV ECX,dword ptr [ECX + 0x498]
00479ddc  CALL 0x005ef310
00479de1  MOV EDX,dword ptr [EBP + -0x60]
00479de4  MOV ECX,dword ptr [EDX + 0xe4]
00479dea  CALL 0x005f53c0
00479def  PUSH EAX
00479df0  MOV EAX,dword ptr [EBP + -0x60]
00479df3  MOV ECX,dword ptr [EAX + 0x498]
00479df9  MOV EDX,dword ptr [EBP + -0x60]
00479dfc  MOV EAX,dword ptr [EDX + 0x498]
00479e02  MOV EDX,dword ptr [ECX]
00479e04  MOV ECX,EAX
00479e06  MOV EAX,dword ptr [EDX + 0x6c]
00479e09  CALL EAX
00479e0b  MOV ECX,dword ptr [EBP + -0x60]
00479e0e  MOV EDX,dword ptr [ECX + 0x498]
00479e14  MOV EAX,dword ptr [EBP + -0x60]
00479e17  MOV ECX,dword ptr [EAX + 0x498]
00479e1d  MOV EDX,dword ptr [EDX]
00479e1f  MOV EAX,dword ptr [EDX + 0x70]
00479e22  CALL EAX
00479e24  MOV ECX,dword ptr [EBP + -0x60]
00479e27  MOV EDX,dword ptr [ECX + 0x498]
00479e2d  MOV EAX,dword ptr [EBP + -0x60]
00479e30  MOV ECX,dword ptr [EAX + 0x498]
00479e36  MOV EDX,dword ptr [EDX]
00479e38  MOV EAX,dword ptr [EDX + 0x40]
00479e3b  CALL EAX
00479e3d  PUSH 0x6b27f8
00479e42  MOV ECX,dword ptr [EBP + -0x60]
00479e45  MOV EDX,dword ptr [ECX + 0x498]
00479e4b  MOV EAX,dword ptr [EBP + -0x60]
00479e4e  MOV ECX,dword ptr [EAX + 0x498]
00479e54  MOV EDX,dword ptr [EDX]
00479e56  MOV EAX,dword ptr [EDX + 0xb4]
00479e5c  CALL EAX
00479e5e  PUSH 0x1d0
00479e63  CALL 0x00686d82
00479e68  ADD ESP,0x4
00479e6b  MOV dword ptr [EBP + -0x44],EAX
00479e6e  MOV dword ptr [EBP + -0x4],0x5
00479e75  CMP dword ptr [EBP + -0x44],0x0
00479e79  JZ 0x00479e88
00479e7b  MOV ECX,dword ptr [EBP + -0x44]
00479e7e  CALL 0x005ec5a0
00479e83  MOV dword ptr [EBP + -0x80],EAX
00479e86  JMP 0x00479e8f
00479e88  MOV dword ptr [EBP + -0x80],0x0
00479e8f  MOV ECX,dword ptr [EBP + -0x80]
00479e92  MOV dword ptr [EBP + -0x40],ECX
00479e95  MOV dword ptr [EBP + -0x4],0xffffffff
00479e9c  MOV EDX,dword ptr [EBP + -0x60]
00479e9f  MOV EAX,dword ptr [EBP + -0x40]
00479ea2  MOV dword ptr [EDX + 0xdc],EAX
00479ea8  PUSH 0x11c
00479ead  PUSH 0x0
00479eaf  MOV ECX,dword ptr [EBP + -0x60]
00479eb2  MOV EDX,dword ptr [ECX + 0xdc]
00479eb8  MOV EAX,dword ptr [EBP + -0x60]
00479ebb  MOV ECX,dword ptr [EAX + 0xdc]
00479ec1  MOV EDX,dword ptr [EDX]
00479ec3  MOV EAX,dword ptr [EDX + 0x44]
00479ec6  CALL EAX
00479ec8  PUSH ECX
00479ec9  MOV ECX,ESP
00479ecb  MOV DX,word ptr [0x0075ee1c]
00479ed2  MOV word ptr [ECX],DX
00479ed5  MOV AL,[0x0075ee1e]
00479eda  MOV byte ptr [ECX + 0x2],AL
00479edd  PUSH -0x1
00479edf  PUSH 0x5
00479ee1  MOV ECX,dword ptr [EBP + -0x60]
00479ee4  MOV ECX,dword ptr [ECX + 0xdc]
00479eea  CALL 0x005ecd00
00479eef  PUSH 0x14
00479ef1  MOV EDX,dword ptr [EBP + -0x60]
00479ef4  MOV ECX,dword ptr [EDX + 0xdc]
00479efa  CALL 0x005eccb0
00479eff  PUSH 0x280
00479f04  MOV EAX,dword ptr [EBP + -0x60]
00479f07  MOV ECX,dword ptr [EAX + 0xdc]
00479f0d  CALL 0x005ecc60
00479f12  PUSH 0x30
00479f14  MOV ECX,dword ptr [EBP + -0x60]
00479f17  MOV ECX,dword ptr [ECX + 0xdc]
00479f1d  CALL 0x005ef310
00479f22  PUSH 0x1388
00479f27  MOV EDX,dword ptr [EBP + -0x60]
00479f2a  MOV EAX,dword ptr [EDX + 0xdc]
00479f30  MOV ECX,dword ptr [EBP + -0x60]
00479f33  MOV ECX,dword ptr [ECX + 0xdc]
00479f39  MOV EDX,dword ptr [EAX]
00479f3b  MOV EAX,dword ptr [EDX + 0x6c]
00479f3e  CALL EAX
00479f40  MOV ECX,dword ptr [EBP + -0x60]
00479f43  MOV EDX,dword ptr [ECX + 0xdc]
00479f49  MOV EAX,dword ptr [EBP + -0x60]
00479f4c  MOV ECX,dword ptr [EAX + 0xdc]
00479f52  MOV EDX,dword ptr [EDX]
00479f54  MOV EAX,dword ptr [EDX + 0x70]
00479f57  CALL EAX
00479f59  MOV ECX,dword ptr [EBP + -0x60]
00479f5c  MOV EDX,dword ptr [ECX + 0xdc]
00479f62  MOV EAX,dword ptr [EBP + -0x60]
00479f65  MOV ECX,dword ptr [EAX + 0xdc]
00479f6b  MOV EDX,dword ptr [EDX]
00479f6d  MOV EAX,dword ptr [EDX + 0x40]
00479f70  CALL EAX
00479f72  PUSH 0x6bc6ac
00479f77  CALL 0x00630f40
00479f7c  ADD ESP,0x4
00479f7f  PUSH EAX
00479f80  MOV ECX,dword ptr [EBP + -0x60]
00479f83  MOV EDX,dword ptr [ECX + 0xdc]
00479f89  MOV EAX,dword ptr [EBP + -0x60]
00479f8c  MOV ECX,dword ptr [EAX + 0xdc]
00479f92  MOV EDX,dword ptr [EDX]
00479f94  MOV EAX,dword ptr [EDX + 0xb4]
00479f9a  CALL EAX
00479f9c  PUSH 0x1d0
00479fa1  CALL 0x00686d82
00479fa6  ADD ESP,0x4
00479fa9  MOV dword ptr [EBP + -0x4c],EAX
00479fac  MOV dword ptr [EBP + -0x4],0x6
00479fb3  CMP dword ptr [EBP + -0x4c],0x0
00479fb7  JZ 0x00479fc9
00479fb9  MOV ECX,dword ptr [EBP + -0x4c]
00479fbc  CALL 0x005ec5a0
00479fc1  MOV dword ptr [EBP + 0xffffff7c],EAX
00479fc7  JMP 0x00479fd3
00479fc9  MOV dword ptr [EBP + 0xffffff7c],0x0
00479fd3  MOV ECX,dword ptr [EBP + 0xffffff7c]
00479fd9  MOV dword ptr [EBP + -0x48],ECX
00479fdc  MOV dword ptr [EBP + -0x4],0xffffffff
00479fe3  MOV EDX,dword ptr [EBP + -0x60]
00479fe6  MOV EAX,dword ptr [EBP + -0x48]
00479fe9  MOV dword ptr [EDX + 0xe0],EAX
00479fef  PUSH 0x128
00479ff4  PUSH 0x0
00479ff6  MOV ECX,dword ptr [EBP + -0x60]
00479ff9  MOV EDX,dword ptr [ECX + 0xe0]
00479fff  MOV EAX,dword ptr [EBP + -0x60]
0047a002  MOV ECX,dword ptr [EAX + 0xe0]
0047a008  MOV EDX,dword ptr [EDX]
0047a00a  MOV EAX,dword ptr [EDX + 0x44]
0047a00d  CALL EAX
0047a00f  PUSH ECX
0047a010  MOV ECX,ESP
0047a012  MOV DX,word ptr [0x0075ee1c]
0047a019  MOV word ptr [ECX],DX
0047a01c  MOV AL,[0x0075ee1e]
0047a021  MOV byte ptr [ECX + 0x2],AL
0047a024  PUSH -0x1
0047a026  PUSH 0x5
0047a028  MOV ECX,dword ptr [EBP + -0x60]
0047a02b  MOV ECX,dword ptr [ECX + 0xe0]
0047a031  CALL 0x005ecd00
0047a036  PUSH 0x14
0047a038  MOV EDX,dword ptr [EBP + -0x60]
0047a03b  MOV ECX,dword ptr [EDX + 0xe0]
0047a041  CALL 0x005eccb0
0047a046  PUSH 0x280
0047a04b  MOV EAX,dword ptr [EBP + -0x60]
0047a04e  MOV ECX,dword ptr [EAX + 0xe0]
0047a054  CALL 0x005ecc60
0047a059  PUSH 0x30
0047a05b  MOV ECX,dword ptr [EBP + -0x60]
0047a05e  MOV ECX,dword ptr [ECX + 0xe0]
0047a064  CALL 0x005ef310
0047a069  PUSH 0x1388
0047a06e  MOV EDX,dword ptr [EBP + -0x60]
0047a071  MOV EAX,dword ptr [EDX + 0xe0]
0047a077  MOV ECX,dword ptr [EBP + -0x60]
0047a07a  MOV ECX,dword ptr [ECX + 0xe0]
0047a080  MOV EDX,dword ptr [EAX]
0047a082  MOV EAX,dword ptr [EDX + 0x6c]
0047a085  CALL EAX
0047a087  MOV ECX,dword ptr [EBP + -0x60]
0047a08a  MOV EDX,dword ptr [ECX + 0xe0]
0047a090  MOV EAX,dword ptr [EBP + -0x60]
0047a093  MOV ECX,dword ptr [EAX + 0xe0]
0047a099  MOV EDX,dword ptr [EDX]
0047a09b  MOV EAX,dword ptr [EDX + 0x70]
0047a09e  CALL EAX
0047a0a0  MOV ECX,dword ptr [EBP + -0x60]
0047a0a3  MOV EDX,dword ptr [ECX + 0xe0]
0047a0a9  MOV EAX,dword ptr [EBP + -0x60]
0047a0ac  MOV ECX,dword ptr [EAX + 0xe0]
0047a0b2  MOV EDX,dword ptr [EDX]
0047a0b4  MOV EAX,dword ptr [EDX + 0x40]
0047a0b7  CALL EAX
0047a0b9  PUSH 0x6bc6ac
0047a0be  CALL 0x00630f40
0047a0c3  ADD ESP,0x4
0047a0c6  PUSH EAX
0047a0c7  MOV ECX,dword ptr [EBP + -0x60]
0047a0ca  MOV EDX,dword ptr [ECX + 0xe0]
0047a0d0  MOV EAX,dword ptr [EBP + -0x60]
0047a0d3  MOV ECX,dword ptr [EAX + 0xe0]
0047a0d9  MOV EDX,dword ptr [EDX]
0047a0db  MOV EAX,dword ptr [EDX + 0xb4]
0047a0e1  CALL EAX
0047a0e3  PUSH 0x178
0047a0e8  CALL 0x00686d82
0047a0ed  ADD ESP,0x4
0047a0f0  MOV dword ptr [EBP + -0x54],EAX
0047a0f3  MOV dword ptr [EBP + -0x4],0x7
0047a0fa  CMP dword ptr [EBP + -0x54],0x0
0047a0fe  JZ 0x0047a110
0047a100  MOV ECX,dword ptr [EBP + -0x54]
0047a103  CALL 0x005eaaf0
0047a108  MOV dword ptr [EBP + 0xffffff78],EAX
0047a10e  JMP 0x0047a11a
0047a110  MOV dword ptr [EBP + 0xffffff78],0x0
0047a11a  MOV ECX,dword ptr [EBP + 0xffffff78]
0047a120  MOV dword ptr [EBP + -0x50],ECX
0047a123  MOV dword ptr [EBP + -0x4],0xffffffff
0047a12a  MOV EDX,dword ptr [EBP + -0x60]
0047a12d  MOV EAX,dword ptr [EBP + -0x50]
0047a130  MOV dword ptr [EDX + 0x49c],EAX
0047a136  PUSH 0x186a7
0047a13b  MOV ECX,dword ptr [EBP + -0x60]
0047a13e  MOV ECX,dword ptr [ECX + 0x49c]
0047a144  CALL 0x005eaf00
0047a149  PUSH 0x1ea
0047a14e  MOV EDX,dword ptr [EBP + -0x60]
0047a151  MOV EAX,dword ptr [EDX + 0x49c]
0047a157  MOV ECX,dword ptr [EBP + -0x60]
0047a15a  MOV ECX,dword ptr [ECX + 0x49c]
0047a160  MOV EDX,dword ptr [EAX]
0047a162  MOV EAX,dword ptr [EDX + 0x6c]
0047a165  CALL EAX
0047a167  MOV ECX,dword ptr [EBP + -0x60]
0047a16a  MOV EDX,dword ptr [ECX + 0x49c]
0047a170  MOV EAX,dword ptr [EBP + -0x60]
0047a173  MOV ECX,dword ptr [EAX + 0x49c]
0047a179  MOV EDX,dword ptr [EDX]
0047a17b  MOV EAX,dword ptr [EDX + 0x70]
0047a17e  CALL EAX
0047a180  MOV ECX,dword ptr [EBP + -0x60]
0047a183  MOV EDX,dword ptr [ECX + 0x49c]
0047a189  MOV EAX,dword ptr [EBP + -0x60]
0047a18c  MOV ECX,dword ptr [EAX + 0x49c]
0047a192  MOV EDX,dword ptr [EDX]
0047a194  MOV EAX,dword ptr [EDX + 0x40]
0047a197  CALL EAX
0047a199  PUSH 0x178
0047a19e  CALL 0x00686d82
0047a1a3  ADD ESP,0x4
0047a1a6  MOV dword ptr [EBP + -0x5c],EAX
0047a1a9  MOV dword ptr [EBP + -0x4],0x8
0047a1b0  CMP dword ptr [EBP + -0x5c],0x0
0047a1b4  JZ 0x0047a1c6
0047a1b6  MOV ECX,dword ptr [EBP + -0x5c]
0047a1b9  CALL 0x005eaaf0
0047a1be  MOV dword ptr [EBP + 0xffffff74],EAX
0047a1c4  JMP 0x0047a1d0
0047a1c6  MOV dword ptr [EBP + 0xffffff74],0x0
0047a1d0  MOV ECX,dword ptr [EBP + 0xffffff74]
0047a1d6  MOV dword ptr [EBP + -0x58],ECX
0047a1d9  MOV dword ptr [EBP + -0x4],0xffffffff
0047a1e0  MOV EDX,dword ptr [EBP + -0x60]
0047a1e3  MOV EAX,dword ptr [EBP + -0x58]
0047a1e6  MOV dword ptr [EDX + 0x4a0],EAX
0047a1ec  PUSH 0x18a89
0047a1f1  MOV ECX,dword ptr [EBP + -0x60]
0047a1f4  MOV ECX,dword ptr [ECX + 0x4a0]
0047a1fa  CALL 0x005eaf00
0047a1ff  MOV EDX,dword ptr [EBP + -0x60]
0047a202  MOV EAX,dword ptr [EDX + 0x4a0]
0047a208  MOV ECX,dword ptr [EBP + -0x60]
0047a20b  MOV ECX,dword ptr [ECX + 0x4a0]
0047a211  MOV EDX,dword ptr [EAX]
0047a213  MOV EAX,dword ptr [EDX + 0x70]
0047a216  CALL EAX
0047a218  MOV ECX,dword ptr [EBP + -0x60]
0047a21b  MOV ECX,dword ptr [ECX + 0xe4]
0047a221  CALL 0x005f53c0
0047a226  PUSH EAX
0047a227  MOV EDX,dword ptr [EBP + -0x60]
0047a22a  MOV EAX,dword ptr [EDX + 0x4a0]
0047a230  MOV ECX,dword ptr [EBP + -0x60]
0047a233  MOV ECX,dword ptr [ECX + 0x4a0]
0047a239  MOV EDX,dword ptr [EAX]
0047a23b  MOV EAX,dword ptr [EDX + 0x6c]
0047a23e  CALL EAX
0047a240  MOV ECX,dword ptr [EBP + -0x60]
0047a243  MOV EDX,dword ptr [ECX + 0x4a0]
0047a249  MOV EAX,dword ptr [EBP + -0x60]
0047a24c  MOV ECX,dword ptr [EAX + 0x4a0]
0047a252  MOV EDX,dword ptr [EDX]
0047a254  MOV EAX,dword ptr [EDX + 0x40]
0047a257  CALL EAX
0047a259  MOV ECX,dword ptr [0x00791eb8]
0047a25f  CALL 0x004fb770
0047a264  PUSH EAX
0047a265  MOV ECX,dword ptr [0x00791eb8]
0047a26b  CALL 0x005f2cb0
0047a270  MOV ECX,dword ptr [EBP + -0x60]
0047a273  MOV byte ptr [ECX + 0x409],0x0
0047a27a  MOV EDX,dword ptr [EBP + -0x60]
0047a27d  MOV byte ptr [EDX + 0x40a],0x0
0047a284  MOV EAX,dword ptr [EBP + -0x60]
0047a287  MOV byte ptr [EAX + 0x40b],0x0
0047a28e  MOV ECX,dword ptr [EBP + -0x60]
0047a291  MOV dword ptr [ECX + 0x100],0x0
0047a29b  MOV EDX,dword ptr [EBP + -0x60]
0047a29e  MOV byte ptr [EDX + 0x104],0x0
0047a2a5  MOV ECX,dword ptr [0x00791eb8]
0047a2ab  CALL 0x005da7b0
0047a2b0  PUSH EAX
0047a2b1  MOV ECX,dword ptr [EBP + -0x60]
0047a2b4  CALL 0x0047a5c0
0047a2b9  MOV ECX,dword ptr [0x00791eb8]
0047a2bf  CALL 0x005da7b0
0047a2c4  MOVZX EAX,AL
0047a2c7  TEST EAX,EAX
0047a2c9  JZ 0x0047a2f9
0047a2cb  MOV ECX,dword ptr [0x007947e0]
0047a2d1  MOV EDX,dword ptr [ECX + 0x4efc]
0047a2d7  PUSH EDX
0047a2d8  CALL 0x005204a0
0047a2dd  ADD ESP,0x4
0047a2e0  CMP EAX,-0x1
0047a2e3  JNZ 0x0047a2ef
0047a2e5  MOV ECX,dword ptr [EBP + -0x60]
0047a2e8  CALL 0x00480970
0047a2ed  JMP 0x0047a2f7
0047a2ef  MOV ECX,dword ptr [EBP + -0x60]
0047a2f2  CALL 0x00480b70
0047a2f7  JMP 0x0047a301
0047a2f9  MOV ECX,dword ptr [EBP + -0x60]
0047a2fc  CALL 0x0047a830
0047a301  MOV ECX,dword ptr [EBP + -0x60]
0047a304  CALL 0x0047a970
0047a309  MOV EAX,dword ptr [EBP + -0x60]
0047a30c  MOV dword ptr [EAX + 0x410],0x0
0047a316  MOV ECX,dword ptr [EBP + -0xc]
0047a319  MOV dword ptr FS:[0x0],ECX
0047a320  POP ECX
0047a321  MOV ESP,EBP
0047a323  POP EBP
0047a324  RET
