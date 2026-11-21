; FUN_00573960  00573960
00573960  PUSH EBP
00573961  MOV EBP,ESP
00573963  PUSH -0x1
00573965  PUSH 0x6a629d
0057396a  MOV EAX,FS:[0x0]
00573970  PUSH EAX
00573971  SUB ESP,0xd4
00573977  MOV EAX,[0x00781870]
0057397c  XOR EAX,EBP
0057397e  PUSH EAX
0057397f  LEA EAX,[EBP + -0xc]
00573982  MOV FS:[0x0],EAX
00573988  MOV dword ptr [EBP + 0xffffff64],ECX
0057398e  MOV ECX,dword ptr [EBP + 0xffffff64]
00573994  CALL 0x00574c60
00573999  MOV EAX,dword ptr [EBP + 0xffffff64]
0057399f  MOV dword ptr [EAX + 0x70],0x0
005739a6  MOV ECX,dword ptr [EBP + 0xffffff64]
005739ac  MOV dword ptr [ECX + 0x74],0x0
005739b3  MOV EDX,dword ptr [EBP + 0xffffff64]
005739b9  MOV dword ptr [EDX + 0x7c],0xffffffff
005739c0  MOV EAX,dword ptr [EBP + 0xffffff64]
005739c6  MOV byte ptr [EAX + 0x68],0x1
005739ca  MOV ECX,dword ptr [EBP + 0xffffff64]
005739d0  CMP dword ptr [ECX + 0xc],0x0
005739d4  JNZ 0x00573a29
005739d6  PUSH 0x178
005739db  CALL 0x00686d82
005739e0  ADD ESP,0x4
005739e3  MOV dword ptr [EBP + -0x18],EAX
005739e6  MOV dword ptr [EBP + -0x4],0x0
005739ed  CMP dword ptr [EBP + -0x18],0x0
005739f1  JZ 0x00573a03
005739f3  MOV ECX,dword ptr [EBP + -0x18]
005739f6  CALL 0x005eaaf0
005739fb  MOV dword ptr [EBP + 0xffffff60],EAX
00573a01  JMP 0x00573a0d
00573a03  MOV dword ptr [EBP + 0xffffff60],0x0
00573a0d  MOV EDX,dword ptr [EBP + 0xffffff60]
00573a13  MOV dword ptr [EBP + -0x14],EDX
00573a16  MOV dword ptr [EBP + -0x4],0xffffffff
00573a1d  MOV EAX,dword ptr [EBP + 0xffffff64]
00573a23  MOV ECX,dword ptr [EBP + -0x14]
00573a26  MOV dword ptr [EAX + 0xc],ECX
00573a29  PUSH 0x0
00573a2b  PUSH 0x0
00573a2d  MOV EDX,dword ptr [EBP + 0xffffff64]
00573a33  MOV EAX,dword ptr [EDX + 0xc]
00573a36  MOV ECX,dword ptr [EBP + 0xffffff64]
00573a3c  MOV ECX,dword ptr [ECX + 0xc]
00573a3f  MOV EDX,dword ptr [EAX]
00573a41  MOV EAX,dword ptr [EDX + 0x44]
00573a44  CALL EAX
00573a46  PUSH 0x16021
00573a4b  MOV ECX,dword ptr [EBP + 0xffffff64]
00573a51  MOV ECX,dword ptr [ECX + 0xc]
00573a54  CALL 0x005eaf00
00573a59  PUSH 0x0
00573a5b  MOV EDX,dword ptr [EBP + 0xffffff64]
00573a61  MOV EAX,dword ptr [EDX + 0xc]
00573a64  MOV ECX,dword ptr [EBP + 0xffffff64]
00573a6a  MOV ECX,dword ptr [ECX + 0xc]
00573a6d  MOV EDX,dword ptr [EAX]
00573a6f  MOV EAX,dword ptr [EDX + 0xb0]
00573a75  CALL EAX
00573a77  MOV ECX,dword ptr [EBP + 0xffffff64]
00573a7d  MOV EDX,dword ptr [ECX + 0xc]
00573a80  MOV EAX,dword ptr [EBP + 0xffffff64]
00573a86  MOV ECX,dword ptr [EAX + 0xc]
00573a89  MOV EDX,dword ptr [EDX]
00573a8b  MOV EAX,dword ptr [EDX + 0x40]
00573a8e  CALL EAX
00573a90  PUSH 0x2
00573a92  MOV ECX,dword ptr [EBP + 0xffffff64]
00573a98  MOV EDX,dword ptr [ECX + 0xc]
00573a9b  MOV EAX,dword ptr [EBP + 0xffffff64]
00573aa1  MOV ECX,dword ptr [EAX + 0xc]
00573aa4  MOV EDX,dword ptr [EDX]
00573aa6  MOV EAX,dword ptr [EDX + 0x6c]
00573aa9  CALL EAX
00573aab  MOV ECX,dword ptr [EBP + 0xffffff64]
00573ab1  MOV EDX,dword ptr [ECX + 0xc]
00573ab4  MOV EAX,dword ptr [EBP + 0xffffff64]
00573aba  MOV ECX,dword ptr [EAX + 0xc]
00573abd  MOV EDX,dword ptr [EDX]
00573abf  MOV EAX,dword ptr [EDX + 0x74]
00573ac2  CALL EAX
00573ac4  MOV ECX,dword ptr [EBP + 0xffffff64]
00573aca  CMP dword ptr [ECX + 0x10],0x0
00573ace  JNZ 0x00573b23
00573ad0  PUSH 0x184
00573ad5  CALL 0x00686d82
00573ada  ADD ESP,0x4
00573add  MOV dword ptr [EBP + -0x20],EAX
00573ae0  MOV dword ptr [EBP + -0x4],0x1
00573ae7  CMP dword ptr [EBP + -0x20],0x0
00573aeb  JZ 0x00573afd
00573aed  MOV ECX,dword ptr [EBP + -0x20]
00573af0  CALL 0x005f5bf0
00573af5  MOV dword ptr [EBP + 0xffffff5c],EAX
00573afb  JMP 0x00573b07
00573afd  MOV dword ptr [EBP + 0xffffff5c],0x0
00573b07  MOV EDX,dword ptr [EBP + 0xffffff5c]
00573b0d  MOV dword ptr [EBP + -0x1c],EDX
00573b10  MOV dword ptr [EBP + -0x4],0xffffffff
00573b17  MOV EAX,dword ptr [EBP + 0xffffff64]
00573b1d  MOV ECX,dword ptr [EBP + -0x1c]
00573b20  MOV dword ptr [EAX + 0x10],ECX
00573b23  PUSH 0x0
00573b25  PUSH 0x0
00573b27  MOV EDX,dword ptr [EBP + 0xffffff64]
00573b2d  MOV EAX,dword ptr [EDX + 0x10]
00573b30  MOV ECX,dword ptr [EBP + 0xffffff64]
00573b36  MOV ECX,dword ptr [ECX + 0x10]
00573b39  MOV EDX,dword ptr [EAX]
00573b3b  MOV EAX,dword ptr [EDX + 0x44]
00573b3e  CALL EAX
00573b40  PUSH 0x16020
00573b45  MOV ECX,dword ptr [EBP + 0xffffff64]
00573b4b  MOV ECX,dword ptr [ECX + 0x10]
00573b4e  CALL 0x005eaf00
00573b53  MOV EDX,dword ptr [EBP + 0xffffff64]
00573b59  MOV EAX,dword ptr [EDX + 0x10]
00573b5c  MOV ECX,dword ptr [EBP + 0xffffff64]
00573b62  MOV ECX,dword ptr [ECX + 0x10]
00573b65  MOV EDX,dword ptr [EAX]
00573b67  MOV EAX,dword ptr [EDX + 0x40]
00573b6a  CALL EAX
00573b6c  PUSH 0xa
00573b6e  MOV ECX,dword ptr [EBP + 0xffffff64]
00573b74  MOV EDX,dword ptr [ECX + 0x10]
00573b77  MOV EAX,dword ptr [EBP + 0xffffff64]
00573b7d  MOV ECX,dword ptr [EAX + 0x10]
00573b80  MOV EDX,dword ptr [EDX]
00573b82  MOV EAX,dword ptr [EDX + 0x6c]
00573b85  CALL EAX
00573b87  MOV ECX,dword ptr [EBP + 0xffffff64]
00573b8d  MOV EDX,dword ptr [ECX + 0x10]
00573b90  MOV dword ptr [EDX + 0x178],0x6
00573b9a  PUSH 0x1c
00573b9c  CALL 0x00686d82
00573ba1  ADD ESP,0x4
00573ba4  MOV dword ptr [EBP + -0x28],EAX
00573ba7  MOV dword ptr [EBP + -0x4],0x2
00573bae  CMP dword ptr [EBP + -0x28],0x0
00573bb2  JZ 0x00573bc6
00573bb4  PUSH 0x0
00573bb6  MOV ECX,dword ptr [EBP + -0x28]
00573bb9  CALL 0x00600a70
00573bbe  MOV dword ptr [EBP + 0xffffff58],EAX
00573bc4  JMP 0x00573bd0
00573bc6  MOV dword ptr [EBP + 0xffffff58],0x0
00573bd0  MOV EAX,dword ptr [EBP + 0xffffff58]
00573bd6  MOV dword ptr [EBP + -0x24],EAX
00573bd9  MOV dword ptr [EBP + -0x4],0xffffffff
00573be0  MOV ECX,dword ptr [EBP + -0x24]
00573be3  PUSH ECX
00573be4  MOV EDX,dword ptr [EBP + 0xffffff64]
00573bea  MOV ECX,dword ptr [EDX + 0x10]
00573bed  CALL 0x005f5d50
00573bf2  MOV EAX,dword ptr [EBP + 0xffffff64]
00573bf8  MOV ECX,dword ptr [EAX + 0x10]
00573bfb  MOV EDX,dword ptr [EBP + 0xffffff64]
00573c01  MOV EAX,dword ptr [EDX + 0x10]
00573c04  MOV EDX,dword ptr [ECX]
00573c06  MOV ECX,EAX
00573c08  MOV EAX,dword ptr [EDX + 0x74]
00573c0b  CALL EAX
00573c0d  MOV ECX,dword ptr [EBP + 0xffffff64]
00573c13  CMP dword ptr [ECX + 0x14],0x0
00573c17  JNZ 0x00573c6c
00573c19  PUSH 0x178
00573c1e  CALL 0x00686d82
00573c23  ADD ESP,0x4
00573c26  MOV dword ptr [EBP + -0x30],EAX
00573c29  MOV dword ptr [EBP + -0x4],0x3
00573c30  CMP dword ptr [EBP + -0x30],0x0
00573c34  JZ 0x00573c46
00573c36  MOV ECX,dword ptr [EBP + -0x30]
00573c39  CALL 0x005eaaf0
00573c3e  MOV dword ptr [EBP + 0xffffff54],EAX
00573c44  JMP 0x00573c50
00573c46  MOV dword ptr [EBP + 0xffffff54],0x0
00573c50  MOV EDX,dword ptr [EBP + 0xffffff54]
00573c56  MOV dword ptr [EBP + -0x2c],EDX
00573c59  MOV dword ptr [EBP + -0x4],0xffffffff
00573c60  MOV EAX,dword ptr [EBP + 0xffffff64]
00573c66  MOV ECX,dword ptr [EBP + -0x2c]
00573c69  MOV dword ptr [EAX + 0x14],ECX
00573c6c  PUSH 0x0
00573c6e  PUSH 0x0
00573c70  MOV EDX,dword ptr [EBP + 0xffffff64]
00573c76  MOV EAX,dword ptr [EDX + 0x14]
00573c79  MOV ECX,dword ptr [EBP + 0xffffff64]
00573c7f  MOV ECX,dword ptr [ECX + 0x14]
00573c82  MOV EDX,dword ptr [EAX]
00573c84  MOV EAX,dword ptr [EDX + 0x44]
00573c87  CALL EAX
00573c89  PUSH 0x1602c
00573c8e  MOV ECX,dword ptr [EBP + 0xffffff64]
00573c94  MOV ECX,dword ptr [ECX + 0x14]
00573c97  CALL 0x005eaf00
00573c9c  MOV EDX,dword ptr [EBP + 0xffffff64]
00573ca2  MOV EAX,dword ptr [EDX + 0x14]
00573ca5  MOV ECX,dword ptr [EBP + 0xffffff64]
00573cab  MOV ECX,dword ptr [ECX + 0x14]
00573cae  MOV EDX,dword ptr [EAX]
00573cb0  MOV EAX,dword ptr [EDX + 0x40]
00573cb3  CALL EAX
00573cb5  PUSH 0x5
00573cb7  MOV ECX,dword ptr [EBP + 0xffffff64]
00573cbd  MOV EDX,dword ptr [ECX + 0x14]
00573cc0  MOV EAX,dword ptr [EBP + 0xffffff64]
00573cc6  MOV ECX,dword ptr [EAX + 0x14]
00573cc9  MOV EDX,dword ptr [EDX]
00573ccb  MOV EAX,dword ptr [EDX + 0x6c]
00573cce  CALL EAX
00573cd0  MOV ECX,dword ptr [EBP + 0xffffff64]
00573cd6  MOV EDX,dword ptr [ECX + 0x14]
00573cd9  MOV EAX,dword ptr [EBP + 0xffffff64]
00573cdf  MOV ECX,dword ptr [EAX + 0x14]
00573ce2  MOV EDX,dword ptr [EDX]
00573ce4  MOV EAX,dword ptr [EDX + 0x74]
00573ce7  CALL EAX
00573ce9  MOV word ptr [EBP + -0x10],0x0
00573cef  JMP 0x00573cfd
00573cf1  MOV CX,word ptr [EBP + -0x10]
00573cf5  ADD CX,0x1
00573cf9  MOV word ptr [EBP + -0x10],CX
00573cfd  MOVSX EDX,word ptr [EBP + -0x10]
00573d01  CMP EDX,0x5
00573d04  JGE 0x00573f1c
00573d0a  MOVSX EAX,word ptr [EBP + -0x10]
00573d0e  MOV ECX,dword ptr [EBP + 0xffffff64]
00573d14  CMP dword ptr [ECX + EAX*0x4 + 0x44],0x0
00573d19  JNZ 0x00573d73
00573d1b  PUSH 0x1dc
00573d20  CALL 0x00686d82
00573d25  ADD ESP,0x4
00573d28  MOV dword ptr [EBP + -0x38],EAX
00573d2b  MOV dword ptr [EBP + -0x4],0x4
00573d32  CMP dword ptr [EBP + -0x38],0x0
00573d36  JZ 0x00573d48
00573d38  MOV ECX,dword ptr [EBP + -0x38]
00573d3b  CALL 0x00576e80
00573d40  MOV dword ptr [EBP + 0xffffff50],EAX
00573d46  JMP 0x00573d52
00573d48  MOV dword ptr [EBP + 0xffffff50],0x0
00573d52  MOV EDX,dword ptr [EBP + 0xffffff50]
00573d58  MOV dword ptr [EBP + -0x34],EDX
00573d5b  MOV dword ptr [EBP + -0x4],0xffffffff
00573d62  MOVSX EAX,word ptr [EBP + -0x10]
00573d66  MOV ECX,dword ptr [EBP + 0xffffff64]
00573d6c  MOV EDX,dword ptr [EBP + -0x34]
00573d6f  MOV dword ptr [ECX + EAX*0x4 + 0x44],EDX
00573d73  MOVSX EAX,word ptr [EBP + -0x10]
00573d77  MOV ECX,dword ptr [EBP + 0xffffff64]
00573d7d  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x44]
00573d81  MOVSX EAX,word ptr [EBP + -0x10]
00573d85  MOV ECX,dword ptr [EBP + 0xffffff64]
00573d8b  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x44]
00573d8f  MOV EDX,dword ptr [EDX]
00573d91  MOV EAX,dword ptr [EDX + 0x40]
00573d94  CALL EAX
00573d96  MOVSX ECX,word ptr [EBP + -0x10]
00573d9a  XOR EDX,EDX
00573d9c  CMP ECX,0x4
00573d9f  SETGE DL
00573da2  SUB EDX,0x1
00573da5  AND EDX,0xffffffe1
00573da8  ADD EDX,0x16041
00573dae  PUSH EDX
00573daf  MOVSX EAX,word ptr [EBP + -0x10]
00573db3  MOV ECX,dword ptr [EBP + 0xffffff64]
00573db9  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x44]
00573dbd  MOVSX EAX,word ptr [EBP + -0x10]
00573dc1  MOV ECX,dword ptr [EBP + 0xffffff64]
00573dc7  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x44]
00573dcb  MOV EDX,dword ptr [EDX]
00573dcd  MOV EAX,dword ptr [EDX + 0xc8]
00573dd3  CALL EAX
00573dd5  PUSH 0x0
00573dd7  PUSH 0x0
00573dd9  MOVSX ECX,word ptr [EBP + -0x10]
00573ddd  MOV EDX,dword ptr [EBP + 0xffffff64]
00573de3  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x44]
00573de7  MOVSX ECX,word ptr [EBP + -0x10]
00573deb  MOV EDX,dword ptr [EBP + 0xffffff64]
00573df1  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x44]
00573df5  MOV EAX,dword ptr [EAX]
00573df7  MOV EDX,dword ptr [EAX + 0x44]
00573dfa  CALL EDX
00573dfc  PUSH 0x5dc
00573e01  MOVSX EAX,word ptr [EBP + -0x10]
00573e05  MOV ECX,dword ptr [EBP + 0xffffff64]
00573e0b  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x44]
00573e0f  MOVSX EAX,word ptr [EBP + -0x10]
00573e13  MOV ECX,dword ptr [EBP + 0xffffff64]
00573e19  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x44]
00573e1d  MOV EDX,dword ptr [EDX]
00573e1f  MOV EAX,dword ptr [EDX + 0x6c]
00573e22  CALL EAX
00573e24  MOVSX ECX,word ptr [EBP + -0x10]
00573e28  PUSH ECX
00573e29  MOVSX EDX,word ptr [EBP + -0x10]
00573e2d  MOV EAX,dword ptr [EBP + 0xffffff64]
00573e33  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x44]
00573e37  CALL 0x005f53e0
00573e3c  MOVSX ECX,word ptr [EBP + -0x10]
00573e40  CMP ECX,0x4
00573e43  JGE 0x00573e80
00573e45  MOVSX EDX,word ptr [EBP + -0x10]
00573e49  IMUL EDX,EDX,0x3
00573e4c  ADD EDX,0x1
00573e4f  PUSH EDX
00573e50  MOVSX EAX,word ptr [EBP + -0x10]
00573e54  IMUL EAX,EAX,0x3
00573e57  PUSH EAX
00573e58  MOVSX ECX,word ptr [EBP + -0x10]
00573e5c  IMUL ECX,ECX,0x3
00573e5f  ADD ECX,0x2
00573e62  PUSH ECX
00573e63  MOVSX EDX,word ptr [EBP + -0x10]
00573e67  IMUL EDX,EDX,0x3
00573e6a  PUSH EDX
00573e6b  MOVSX EAX,word ptr [EBP + -0x10]
00573e6f  MOV ECX,dword ptr [EBP + 0xffffff64]
00573e75  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x44]
00573e79  CALL 0x006023d0
00573e7e  JMP 0x00573e9b
00573e80  PUSH 0x1
00573e82  PUSH 0x0
00573e84  PUSH 0x2
00573e86  PUSH 0x1
00573e88  MOVSX EDX,word ptr [EBP + -0x10]
00573e8c  MOV EAX,dword ptr [EBP + 0xffffff64]
00573e92  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x44]
00573e96  CALL 0x006023d0
00573e9b  MOVSX ECX,word ptr [EBP + -0x10]
00573e9f  CMP ECX,0x3
00573ea2  JGE 0x00573ece
00573ea4  MOVSX EDX,word ptr [EBP + -0x10]
00573ea8  MOV EAX,dword ptr [EBP + 0xffffff64]
00573eae  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x44]
00573eb2  MOVSX EDX,word ptr [EBP + -0x10]
00573eb6  MOV EAX,dword ptr [EBP + 0xffffff64]
00573ebc  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x44]
00573ec0  MOV EAX,dword ptr [ECX]
00573ec2  MOV ECX,EDX
00573ec4  MOV EDX,dword ptr [EAX + 0xcc]
00573eca  CALL EDX
00573ecc  JMP 0x00573ef4
00573ece  MOVSX EAX,word ptr [EBP + -0x10]
00573ed2  MOV ECX,dword ptr [EBP + 0xffffff64]
00573ed8  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x44]
00573edc  MOVSX EAX,word ptr [EBP + -0x10]
00573ee0  MOV ECX,dword ptr [EBP + 0xffffff64]
00573ee6  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x44]
00573eea  MOV EDX,dword ptr [EDX]
00573eec  MOV EAX,dword ptr [EDX + 0xd0]
00573ef2  CALL EAX
00573ef4  MOVSX ECX,word ptr [EBP + -0x10]
00573ef8  MOV EDX,dword ptr [EBP + 0xffffff64]
00573efe  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x44]
00573f02  MOVSX ECX,word ptr [EBP + -0x10]
00573f06  MOV EDX,dword ptr [EBP + 0xffffff64]
00573f0c  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x44]
00573f10  MOV EAX,dword ptr [EAX]
00573f12  MOV EDX,dword ptr [EAX + 0x74]
00573f15  CALL EDX
00573f17  JMP 0x00573cf1
00573f1c  MOV EAX,dword ptr [EBP + 0xffffff64]
00573f22  CMP dword ptr [EAX + 0x8],0x0
00573f26  JNZ 0x00574012
00573f2c  PUSH 0x184
00573f31  CALL 0x00686d82
00573f36  ADD ESP,0x4
00573f39  MOV dword ptr [EBP + -0x40],EAX
00573f3c  MOV dword ptr [EBP + -0x4],0x5
00573f43  CMP dword ptr [EBP + -0x40],0x0
00573f47  JZ 0x00573f59
00573f49  MOV ECX,dword ptr [EBP + -0x40]
00573f4c  CALL 0x005f5bf0
00573f51  MOV dword ptr [EBP + 0xffffff4c],EAX
00573f57  JMP 0x00573f63
00573f59  MOV dword ptr [EBP + 0xffffff4c],0x0
00573f63  MOV ECX,dword ptr [EBP + 0xffffff4c]
00573f69  MOV dword ptr [EBP + -0x3c],ECX
00573f6c  MOV dword ptr [EBP + -0x4],0xffffffff
00573f73  MOV EDX,dword ptr [EBP + 0xffffff64]
00573f79  MOV EAX,dword ptr [EBP + -0x3c]
00573f7c  MOV dword ptr [EDX + 0x8],EAX
00573f7f  PUSH 0x15f97
00573f84  MOV ECX,dword ptr [EBP + 0xffffff64]
00573f8a  MOV ECX,dword ptr [ECX + 0x8]
00573f8d  CALL 0x005eaf00
00573f92  PUSH 0x5a
00573f94  MOV EDX,dword ptr [EBP + 0xffffff64]
00573f9a  MOV EAX,dword ptr [EDX + 0x8]
00573f9d  MOV ECX,dword ptr [EBP + 0xffffff64]
00573fa3  MOV ECX,dword ptr [ECX + 0x8]
00573fa6  MOV EDX,dword ptr [EAX]
00573fa8  MOV EAX,dword ptr [EDX + 0x6c]
00573fab  CALL EAX
00573fad  PUSH 0x80
00573fb2  PUSH 0x78
00573fb4  MOV ECX,dword ptr [EBP + 0xffffff64]
00573fba  MOV EDX,dword ptr [ECX + 0x8]
00573fbd  MOV EAX,dword ptr [EBP + 0xffffff64]
00573fc3  MOV ECX,dword ptr [EAX + 0x8]
00573fc6  MOV EDX,dword ptr [EDX]
00573fc8  MOV EAX,dword ptr [EDX + 0x44]
00573fcb  CALL EAX
00573fcd  MOV ECX,dword ptr [EBP + 0xffffff64]
00573fd3  MOV EDX,dword ptr [ECX + 0x8]
00573fd6  MOV EAX,dword ptr [EBP + 0xffffff64]
00573fdc  MOV ECX,dword ptr [EAX + 0x8]
00573fdf  MOV EDX,dword ptr [EDX]
00573fe1  MOV EAX,dword ptr [EDX + 0x40]
00573fe4  CALL EAX
00573fe6  MOV ECX,dword ptr [EBP + 0xffffff64]
00573fec  MOV EDX,dword ptr [ECX + 0x8]
00573fef  MOV EAX,dword ptr [EBP + 0xffffff64]
00573ff5  MOV ECX,dword ptr [EAX + 0x8]
00573ff8  MOV EDX,dword ptr [EDX]
00573ffa  MOV EAX,dword ptr [EDX + 0x70]
00573ffd  CALL EAX
00573fff  MOV ECX,dword ptr [EBP + 0xffffff64]
00574005  MOV EDX,dword ptr [ECX + 0x8]
00574008  MOV dword ptr [EDX + 0x178],0x4
00574012  MOV EAX,dword ptr [EBP + 0xffffff64]
00574018  CMP dword ptr [EAX + 0x58],0x0
0057401c  JNZ 0x00574071
0057401e  PUSH 0x1dc
00574023  CALL 0x00686d82
00574028  ADD ESP,0x4
0057402b  MOV dword ptr [EBP + -0x48],EAX
0057402e  MOV dword ptr [EBP + -0x4],0x6
00574035  CMP dword ptr [EBP + -0x48],0x0
00574039  JZ 0x0057404b
0057403b  MOV ECX,dword ptr [EBP + -0x48]
0057403e  CALL 0x005770e0
00574043  MOV dword ptr [EBP + 0xffffff48],EAX
00574049  JMP 0x00574055
0057404b  MOV dword ptr [EBP + 0xffffff48],0x0
00574055  MOV ECX,dword ptr [EBP + 0xffffff48]
0057405b  MOV dword ptr [EBP + -0x44],ECX
0057405e  MOV dword ptr [EBP + -0x4],0xffffffff
00574065  MOV EDX,dword ptr [EBP + 0xffffff64]
0057406b  MOV EAX,dword ptr [EBP + -0x44]
0057406e  MOV dword ptr [EDX + 0x58],EAX
00574071  MOV ECX,dword ptr [EBP + 0xffffff64]
00574077  MOV EDX,dword ptr [ECX + 0x58]
0057407a  MOV EAX,dword ptr [EBP + 0xffffff64]
00574080  MOV ECX,dword ptr [EAX + 0x58]
00574083  MOV EDX,dword ptr [EDX]
00574085  MOV EAX,dword ptr [EDX + 0x40]
00574088  CALL EAX
0057408a  PUSH 0x16042
0057408f  MOV ECX,dword ptr [EBP + 0xffffff64]
00574095  MOV EDX,dword ptr [ECX + 0x58]
00574098  MOV EAX,dword ptr [EBP + 0xffffff64]
0057409e  MOV ECX,dword ptr [EAX + 0x58]
005740a1  MOV EDX,dword ptr [EDX]
005740a3  MOV EAX,dword ptr [EDX + 0xc8]
005740a9  CALL EAX
005740ab  PUSH 0x0
005740ad  PUSH 0x0
005740af  MOV ECX,dword ptr [EBP + 0xffffff64]
005740b5  MOV EDX,dword ptr [ECX + 0x58]
005740b8  MOV EAX,dword ptr [EBP + 0xffffff64]
005740be  MOV ECX,dword ptr [EAX + 0x58]
005740c1  MOV EDX,dword ptr [EDX]
005740c3  MOV EAX,dword ptr [EDX + 0x44]
005740c6  CALL EAX
005740c8  PUSH 0x1
005740ca  MOV ECX,dword ptr [EBP + 0xffffff64]
005740d0  MOV EDX,dword ptr [ECX + 0x58]
005740d3  MOV EAX,dword ptr [EBP + 0xffffff64]
005740d9  MOV ECX,dword ptr [EAX + 0x58]
005740dc  MOV EDX,dword ptr [EDX]
005740de  MOV EAX,dword ptr [EDX + 0x6c]
005740e1  CALL EAX
005740e3  MOV ECX,dword ptr [EBP + 0xffffff64]
005740e9  MOV EDX,dword ptr [ECX + 0x58]
005740ec  MOV EAX,dword ptr [EBP + 0xffffff64]
005740f2  MOV ECX,dword ptr [EAX + 0x58]
005740f5  MOV EDX,dword ptr [EDX]
005740f7  MOV EAX,dword ptr [EDX + 0xcc]
005740fd  CALL EAX
005740ff  MOV ECX,dword ptr [EBP + 0xffffff64]
00574105  MOV EDX,dword ptr [ECX + 0x58]
00574108  MOV EAX,dword ptr [EBP + 0xffffff64]
0057410e  MOV ECX,dword ptr [EAX + 0x58]
00574111  MOV EDX,dword ptr [EDX]
00574113  MOV EAX,dword ptr [EDX + 0x74]
00574116  CALL EAX
00574118  MOV ECX,dword ptr [EBP + 0xffffff64]
0057411e  CMP dword ptr [ECX + 0x5c],0x0
00574122  JNZ 0x00574179
00574124  PUSH 0x190
00574129  CALL 0x00686d82
0057412e  ADD ESP,0x4
00574131  MOV dword ptr [EBP + -0x50],EAX
00574134  MOV dword ptr [EBP + -0x4],0x7
0057413b  CMP dword ptr [EBP + -0x50],0x0
0057413f  JZ 0x00574153
00574141  PUSH 0x9
00574143  MOV ECX,dword ptr [EBP + -0x50]
00574146  CALL 0x00577150
0057414b  MOV dword ptr [EBP + 0xffffff44],EAX
00574151  JMP 0x0057415d
00574153  MOV dword ptr [EBP + 0xffffff44],0x0
0057415d  MOV EDX,dword ptr [EBP + 0xffffff44]
00574163  MOV dword ptr [EBP + -0x4c],EDX
00574166  MOV dword ptr [EBP + -0x4],0xffffffff
0057416d  MOV EAX,dword ptr [EBP + 0xffffff64]
00574173  MOV ECX,dword ptr [EBP + -0x4c]
00574176  MOV dword ptr [EAX + 0x5c],ECX
00574179  MOV EDX,dword ptr [EBP + 0xffffff64]
0057417f  MOV EAX,dword ptr [EDX + 0x5c]
00574182  MOV ECX,dword ptr [EBP + 0xffffff64]
00574188  MOV ECX,dword ptr [ECX + 0x5c]
0057418b  MOV EDX,dword ptr [EAX]
0057418d  MOV EAX,dword ptr [EDX + 0x40]
00574190  CALL EAX
00574192  PUSH 0x0
00574194  MOV ECX,dword ptr [EBP + 0xffffff64]
0057419a  MOV ECX,dword ptr [ECX + 0x5c]
0057419d  CALL 0x005eaf00
005741a2  PUSH 0x5f
005741a4  PUSH 0x1f
005741a6  MOV EDX,dword ptr [EBP + 0xffffff64]
005741ac  MOV EAX,dword ptr [EDX + 0x5c]
005741af  MOV ECX,dword ptr [EBP + 0xffffff64]
005741b5  MOV ECX,dword ptr [ECX + 0x5c]
005741b8  MOV EDX,dword ptr [EAX]
005741ba  MOV EAX,dword ptr [EDX + 0x44]
005741bd  CALL EAX
005741bf  PUSH 0xa
005741c1  MOV ECX,dword ptr [EBP + 0xffffff64]
005741c7  MOV EDX,dword ptr [ECX + 0x5c]
005741ca  MOV EAX,dword ptr [EBP + 0xffffff64]
005741d0  MOV ECX,dword ptr [EAX + 0x5c]
005741d3  MOV EDX,dword ptr [EDX]
005741d5  MOV EAX,dword ptr [EDX + 0x6c]
005741d8  CALL EAX
005741da  MOV ECX,dword ptr [EBP + 0xffffff64]
005741e0  MOV EDX,dword ptr [ECX + 0x5c]
005741e3  MOV EAX,dword ptr [EBP + 0xffffff64]
005741e9  MOV ECX,dword ptr [EAX + 0x5c]
005741ec  MOV EDX,dword ptr [EDX]
005741ee  MOV EAX,dword ptr [EDX + 0x74]
005741f1  CALL EAX
005741f3  MOV ECX,dword ptr [EBP + 0xffffff64]
005741f9  CMP dword ptr [ECX + 0x60],0x0
005741fd  JNZ 0x00574254
005741ff  PUSH 0x190
00574204  CALL 0x00686d82
00574209  ADD ESP,0x4
0057420c  MOV dword ptr [EBP + -0x58],EAX
0057420f  MOV dword ptr [EBP + -0x4],0x8
00574216  CMP dword ptr [EBP + -0x58],0x0
0057421a  JZ 0x0057422e
0057421c  PUSH 0x5
0057421e  MOV ECX,dword ptr [EBP + -0x58]
00574221  CALL 0x00577150
00574226  MOV dword ptr [EBP + 0xffffff40],EAX
0057422c  JMP 0x00574238
0057422e  MOV dword ptr [EBP + 0xffffff40],0x0
00574238  MOV EDX,dword ptr [EBP + 0xffffff40]
0057423e  MOV dword ptr [EBP + -0x54],EDX
00574241  MOV dword ptr [EBP + -0x4],0xffffffff
00574248  MOV EAX,dword ptr [EBP + 0xffffff64]
0057424e  MOV ECX,dword ptr [EBP + -0x54]
00574251  MOV dword ptr [EAX + 0x60],ECX
00574254  MOV EDX,dword ptr [EBP + 0xffffff64]
0057425a  MOV EAX,dword ptr [EDX + 0x60]
0057425d  MOV ECX,dword ptr [EBP + 0xffffff64]
00574263  MOV ECX,dword ptr [ECX + 0x60]
00574266  MOV EDX,dword ptr [EAX]
00574268  MOV EAX,dword ptr [EDX + 0x40]
0057426b  CALL EAX
0057426d  PUSH 0x0
0057426f  MOV ECX,dword ptr [EBP + 0xffffff64]
00574275  MOV ECX,dword ptr [ECX + 0x60]
00574278  CALL 0x005eaf00
0057427d  PUSH 0xaf
00574282  PUSH 0x63
00574284  MOV EDX,dword ptr [EBP + 0xffffff64]
0057428a  MOV EAX,dword ptr [EDX + 0x60]
0057428d  MOV ECX,dword ptr [EBP + 0xffffff64]
00574293  MOV ECX,dword ptr [ECX + 0x60]
00574296  MOV EDX,dword ptr [EAX]
00574298  MOV EAX,dword ptr [EDX + 0x44]
0057429b  CALL EAX
0057429d  PUSH 0xa
0057429f  MOV ECX,dword ptr [EBP + 0xffffff64]
005742a5  MOV EDX,dword ptr [ECX + 0x60]
005742a8  MOV EAX,dword ptr [EBP + 0xffffff64]
005742ae  MOV ECX,dword ptr [EAX + 0x60]
005742b1  MOV EDX,dword ptr [EDX]
005742b3  MOV EAX,dword ptr [EDX + 0x6c]
005742b6  CALL EAX
005742b8  MOV ECX,dword ptr [EBP + 0xffffff64]
005742be  MOV EDX,dword ptr [ECX + 0x60]
005742c1  MOV EAX,dword ptr [EBP + 0xffffff64]
005742c7  MOV ECX,dword ptr [EAX + 0x60]
005742ca  MOV EDX,dword ptr [EDX]
005742cc  MOV EAX,dword ptr [EDX + 0x74]
005742cf  CALL EAX
005742d1  MOV ECX,dword ptr [EBP + 0xffffff64]
005742d7  CMP dword ptr [ECX + 0x64],0x0
005742db  JNZ 0x00574332
005742dd  PUSH 0x190
005742e2  CALL 0x00686d82
005742e7  ADD ESP,0x4
005742ea  MOV dword ptr [EBP + -0x60],EAX
005742ed  MOV dword ptr [EBP + -0x4],0x9
005742f4  CMP dword ptr [EBP + -0x60],0x0
005742f8  JZ 0x0057430c
005742fa  PUSH 0x1
005742fc  MOV ECX,dword ptr [EBP + -0x60]
005742ff  CALL 0x00577150
00574304  MOV dword ptr [EBP + 0xffffff3c],EAX
0057430a  JMP 0x00574316
0057430c  MOV dword ptr [EBP + 0xffffff3c],0x0
00574316  MOV EDX,dword ptr [EBP + 0xffffff3c]
0057431c  MOV dword ptr [EBP + -0x5c],EDX
0057431f  MOV dword ptr [EBP + -0x4],0xffffffff
00574326  MOV EAX,dword ptr [EBP + 0xffffff64]
0057432c  MOV ECX,dword ptr [EBP + -0x5c]
0057432f  MOV dword ptr [EAX + 0x64],ECX
00574332  MOV EDX,dword ptr [EBP + 0xffffff64]
00574338  MOV EAX,dword ptr [EDX + 0x64]
0057433b  MOV ECX,dword ptr [EBP + 0xffffff64]
00574341  MOV ECX,dword ptr [ECX + 0x64]
00574344  MOV EDX,dword ptr [EAX]
00574346  MOV EAX,dword ptr [EDX + 0x40]
00574349  CALL EAX
0057434b  PUSH 0x0
0057434d  MOV ECX,dword ptr [EBP + 0xffffff64]
00574353  MOV ECX,dword ptr [ECX + 0x64]
00574356  CALL 0x005eaf00
0057435b  PUSH 0xaf
00574360  PUSH 0x30
00574362  MOV EDX,dword ptr [EBP + 0xffffff64]
00574368  MOV EAX,dword ptr [EDX + 0x64]
0057436b  MOV ECX,dword ptr [EBP + 0xffffff64]
00574371  MOV ECX,dword ptr [ECX + 0x64]
00574374  MOV EDX,dword ptr [EAX]
00574376  MOV EAX,dword ptr [EDX + 0x44]
00574379  CALL EAX
0057437b  PUSH 0xa
0057437d  MOV ECX,dword ptr [EBP + 0xffffff64]
00574383  MOV EDX,dword ptr [ECX + 0x64]
00574386  MOV EAX,dword ptr [EBP + 0xffffff64]
0057438c  MOV ECX,dword ptr [EAX + 0x64]
0057438f  MOV EDX,dword ptr [EDX]
00574391  MOV EAX,dword ptr [EDX + 0x6c]
00574394  CALL EAX
00574396  MOV ECX,dword ptr [EBP + 0xffffff64]
0057439c  MOV EDX,dword ptr [ECX + 0x64]
0057439f  MOV EAX,dword ptr [EBP + 0xffffff64]
005743a5  MOV ECX,dword ptr [EAX + 0x64]
005743a8  MOV EDX,dword ptr [EDX]
005743aa  MOV EAX,dword ptr [EDX + 0x74]
005743ad  CALL EAX
005743af  MOV word ptr [EBP + -0x10],0x0
005743b5  JMP 0x005743c3
005743b7  MOV CX,word ptr [EBP + -0x10]
005743bb  ADD CX,0x1
005743bf  MOV word ptr [EBP + -0x10],CX
005743c3  MOVSX EDX,word ptr [EBP + -0x10]
005743c7  CMP EDX,0x3
005743ca  JGE 0x0057455d
005743d0  MOVSX EAX,word ptr [EBP + -0x10]
005743d4  MOV ECX,dword ptr [EBP + 0xffffff64]
005743da  CMP dword ptr [ECX + EAX*0x4 + 0x38],0x0
005743df  JNZ 0x00574445
005743e1  PUSH 0x184
005743e6  CALL 0x00686d82
005743eb  ADD ESP,0x4
005743ee  MOV dword ptr [EBP + -0x68],EAX
005743f1  MOV dword ptr [EBP + -0x4],0xa
005743f8  CMP dword ptr [EBP + -0x68],0x0
005743fc  JZ 0x0057441a
005743fe  MOV ECX,dword ptr [EBP + -0x68]
00574401  CALL 0x005f5bf0
00574406  MOV EDX,dword ptr [EBP + -0x68]
00574409  MOV dword ptr [EDX],0x6cacb4
0057440f  MOV EAX,dword ptr [EBP + -0x68]
00574412  MOV dword ptr [EBP + 0xffffff38],EAX
00574418  JMP 0x00574424
0057441a  MOV dword ptr [EBP + 0xffffff38],0x0
00574424  MOV ECX,dword ptr [EBP + 0xffffff38]
0057442a  MOV dword ptr [EBP + -0x64],ECX
0057442d  MOV dword ptr [EBP + -0x4],0xffffffff
00574434  MOVSX EDX,word ptr [EBP + -0x10]
00574438  MOV EAX,dword ptr [EBP + 0xffffff64]
0057443e  MOV ECX,dword ptr [EBP + -0x64]
00574441  MOV dword ptr [EAX + EDX*0x4 + 0x38],ECX
00574445  MOVSX EDX,word ptr [EBP + -0x10]
00574449  MOV EAX,dword ptr [EDX*0x8 + 0x7493c4]
00574450  PUSH EAX
00574451  MOVSX ECX,word ptr [EBP + -0x10]
00574455  MOV EDX,dword ptr [ECX*0x8 + 0x7493c0]
0057445c  PUSH EDX
0057445d  MOVSX EAX,word ptr [EBP + -0x10]
00574461  MOV ECX,dword ptr [EBP + 0xffffff64]
00574467  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x38]
0057446b  MOVSX EAX,word ptr [EBP + -0x10]
0057446f  MOV ECX,dword ptr [EBP + 0xffffff64]
00574475  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x38]
00574479  MOV EDX,dword ptr [EDX]
0057447b  MOV EAX,dword ptr [EDX + 0x44]
0057447e  CALL EAX
00574480  PUSH 0x16024
00574485  MOVSX ECX,word ptr [EBP + -0x10]
00574489  MOV EDX,dword ptr [EBP + 0xffffff64]
0057448f  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x38]
00574493  CALL 0x005eaf00
00574498  PUSH 0x0
0057449a  MOVSX EAX,word ptr [EBP + -0x10]
0057449e  MOV ECX,dword ptr [EBP + 0xffffff64]
005744a4  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x38]
005744a8  MOVSX EAX,word ptr [EBP + -0x10]
005744ac  MOV ECX,dword ptr [EBP + 0xffffff64]
005744b2  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x38]
005744b6  MOV EDX,dword ptr [EDX]
005744b8  MOV EAX,dword ptr [EDX + 0xb0]
005744be  CALL EAX
005744c0  MOVSX ECX,word ptr [EBP + -0x10]
005744c4  MOV EDX,dword ptr [EBP + 0xffffff64]
005744ca  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x38]
005744ce  MOVSX ECX,word ptr [EBP + -0x10]
005744d2  MOV EDX,dword ptr [EBP + 0xffffff64]
005744d8  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x38]
005744dc  MOV EAX,dword ptr [EAX]
005744de  MOV EDX,dword ptr [EAX + 0x40]
005744e1  CALL EDX
005744e3  PUSH 0xf
005744e5  MOVSX EAX,word ptr [EBP + -0x10]
005744e9  MOV ECX,dword ptr [EBP + 0xffffff64]
005744ef  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x38]
005744f3  MOVSX EAX,word ptr [EBP + -0x10]
005744f7  MOV ECX,dword ptr [EBP + 0xffffff64]
005744fd  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x38]
00574501  MOV EDX,dword ptr [EDX]
00574503  MOV EAX,dword ptr [EDX + 0x6c]
00574506  CALL EAX
00574508  MOVSX ECX,word ptr [EBP + -0x10]
0057450c  MOV EDX,dword ptr [EBP + 0xffffff64]
00574512  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x38]
00574516  MOV dword ptr [EAX + 0x178],0x2
00574520  PUSH 0x0
00574522  MOVSX ECX,word ptr [EBP + -0x10]
00574526  MOV EDX,dword ptr [EBP + 0xffffff64]
0057452c  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x38]
00574530  CALL 0x005eb5d0
00574535  MOVSX EAX,word ptr [EBP + -0x10]
00574539  MOV ECX,dword ptr [EBP + 0xffffff64]
0057453f  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x38]
00574543  MOVSX EAX,word ptr [EBP + -0x10]
00574547  MOV ECX,dword ptr [EBP + 0xffffff64]
0057454d  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x38]
00574551  MOV EDX,dword ptr [EDX]
00574553  MOV EAX,dword ptr [EDX + 0x70]
00574556  CALL EAX
00574558  JMP 0x005743b7
0057455d  MOV ECX,dword ptr [EBP + 0xffffff64]
00574563  CMP dword ptr [ECX + 0x18],0x0
00574567  JNZ 0x005745bc
00574569  PUSH 0x184
0057456e  CALL 0x00686d82
00574573  ADD ESP,0x4
00574576  MOV dword ptr [EBP + -0x70],EAX
00574579  MOV dword ptr [EBP + -0x4],0xb
00574580  CMP dword ptr [EBP + -0x70],0x0
00574584  JZ 0x00574596
00574586  MOV ECX,dword ptr [EBP + -0x70]
00574589  CALL 0x005f5bf0
0057458e  MOV dword ptr [EBP + 0xffffff34],EAX
00574594  JMP 0x005745a0
00574596  MOV dword ptr [EBP + 0xffffff34],0x0
005745a0  MOV EDX,dword ptr [EBP + 0xffffff34]
005745a6  MOV dword ptr [EBP + -0x6c],EDX
005745a9  MOV dword ptr [EBP + -0x4],0xffffffff
005745b0  MOV EAX,dword ptr [EBP + 0xffffff64]
005745b6  MOV ECX,dword ptr [EBP + -0x6c]
005745b9  MOV dword ptr [EAX + 0x18],ECX
005745bc  PUSH 0x0
005745be  PUSH 0x0
005745c0  MOV EDX,dword ptr [EBP + 0xffffff64]
005745c6  MOV EAX,dword ptr [EDX + 0x18]
005745c9  MOV ECX,dword ptr [EBP + 0xffffff64]
005745cf  MOV ECX,dword ptr [ECX + 0x18]
005745d2  MOV EDX,dword ptr [EAX]
005745d4  MOV EAX,dword ptr [EDX + 0x44]
005745d7  CALL EAX
005745d9  PUSH 0x16025
005745de  MOV ECX,dword ptr [EBP + 0xffffff64]
005745e4  MOV ECX,dword ptr [ECX + 0x18]
005745e7  CALL 0x005eaf00
005745ec  PUSH 0x0
005745ee  MOV EDX,dword ptr [EBP + 0xffffff64]
005745f4  MOV EAX,dword ptr [EDX + 0x18]
005745f7  MOV ECX,dword ptr [EBP + 0xffffff64]
005745fd  MOV ECX,dword ptr [ECX + 0x18]
00574600  MOV EDX,dword ptr [EAX]
00574602  MOV EAX,dword ptr [EDX + 0xb0]
00574608  CALL EAX
0057460a  MOV ECX,dword ptr [EBP + 0xffffff64]
00574610  MOV EDX,dword ptr [ECX + 0x18]
00574613  MOV EAX,dword ptr [EBP + 0xffffff64]
00574619  MOV ECX,dword ptr [EAX + 0x18]
0057461c  MOV EDX,dword ptr [EDX]
0057461e  MOV EAX,dword ptr [EDX + 0x40]
00574621  CALL EAX
00574623  PUSH 0xf
00574625  MOV ECX,dword ptr [EBP + 0xffffff64]
0057462b  MOV EDX,dword ptr [ECX + 0x18]
0057462e  MOV EAX,dword ptr [EBP + 0xffffff64]
00574634  MOV ECX,dword ptr [EAX + 0x18]
00574637  MOV EDX,dword ptr [EDX]
00574639  MOV EAX,dword ptr [EDX + 0x6c]
0057463c  CALL EAX
0057463e  MOV ECX,dword ptr [EBP + 0xffffff64]
00574644  MOV EDX,dword ptr [ECX + 0x18]
00574647  MOV dword ptr [EDX + 0x178],0x4
00574651  MOV EAX,dword ptr [EBP + 0xffffff64]
00574657  MOV ECX,dword ptr [EAX + 0x18]
0057465a  MOV EDX,dword ptr [EBP + 0xffffff64]
00574660  MOV EAX,dword ptr [EDX + 0x18]
00574663  MOV EDX,dword ptr [ECX]
00574665  MOV ECX,EAX
00574667  MOV EAX,dword ptr [EDX + 0x70]
0057466a  CALL EAX
0057466c  MOV ECX,dword ptr [EBP + 0xffffff64]
00574672  CMP dword ptr [ECX + 0x1c],0x0
00574676  JNZ 0x005746cb
00574678  PUSH 0x184
0057467d  CALL 0x00686d82
00574682  ADD ESP,0x4
00574685  MOV dword ptr [EBP + -0x78],EAX
00574688  MOV dword ptr [EBP + -0x4],0xc
0057468f  CMP dword ptr [EBP + -0x78],0x0
00574693  JZ 0x005746a5
00574695  MOV ECX,dword ptr [EBP + -0x78]
00574698  CALL 0x005f5bf0
0057469d  MOV dword ptr [EBP + 0xffffff30],EAX
005746a3  JMP 0x005746af
005746a5  MOV dword ptr [EBP + 0xffffff30],0x0
005746af  MOV EDX,dword ptr [EBP + 0xffffff30]
005746b5  MOV dword ptr [EBP + -0x74],EDX
005746b8  MOV dword ptr [EBP + -0x4],0xffffffff
005746bf  MOV EAX,dword ptr [EBP + 0xffffff64]
005746c5  MOV ECX,dword ptr [EBP + -0x74]
005746c8  MOV dword ptr [EAX + 0x1c],ECX
005746cb  PUSH 0x0
005746cd  PUSH 0x0
005746cf  MOV EDX,dword ptr [EBP + 0xffffff64]
005746d5  MOV EAX,dword ptr [EDX + 0x1c]
005746d8  MOV ECX,dword ptr [EBP + 0xffffff64]
005746de  MOV ECX,dword ptr [ECX + 0x1c]
005746e1  MOV EDX,dword ptr [EAX]
005746e3  MOV EAX,dword ptr [EDX + 0x44]
005746e6  CALL EAX
005746e8  PUSH 0x16027
005746ed  MOV ECX,dword ptr [EBP + 0xffffff64]
005746f3  MOV ECX,dword ptr [ECX + 0x1c]
005746f6  CALL 0x005eaf00
005746fb  PUSH 0x0
005746fd  MOV EDX,dword ptr [EBP + 0xffffff64]
00574703  MOV EAX,dword ptr [EDX + 0x1c]
00574706  MOV ECX,dword ptr [EBP + 0xffffff64]
0057470c  MOV ECX,dword ptr [ECX + 0x1c]
0057470f  MOV EDX,dword ptr [EAX]
00574711  MOV EAX,dword ptr [EDX + 0xb0]
00574717  CALL EAX
00574719  MOV ECX,dword ptr [EBP + 0xffffff64]
0057471f  MOV EDX,dword ptr [ECX + 0x1c]
00574722  MOV EAX,dword ptr [EBP + 0xffffff64]
00574728  MOV ECX,dword ptr [EAX + 0x1c]
0057472b  MOV EDX,dword ptr [EDX]
0057472d  MOV EAX,dword ptr [EDX + 0x40]
00574730  CALL EAX
00574732  PUSH 0x14
00574734  MOV ECX,dword ptr [EBP + 0xffffff64]
0057473a  MOV EDX,dword ptr [ECX + 0x1c]
0057473d  MOV EAX,dword ptr [EBP + 0xffffff64]
00574743  MOV ECX,dword ptr [EAX + 0x1c]
00574746  MOV EDX,dword ptr [EDX]
00574748  MOV EAX,dword ptr [EDX + 0x6c]
0057474b  CALL EAX
0057474d  MOV ECX,dword ptr [EBP + 0xffffff64]
00574753  MOV EDX,dword ptr [ECX + 0x1c]
00574756  MOV dword ptr [EDX + 0x178],0x4
00574760  MOV EAX,dword ptr [EBP + 0xffffff64]
00574766  MOV ECX,dword ptr [EAX + 0x1c]
00574769  MOV EDX,dword ptr [EBP + 0xffffff64]
0057476f  MOV EAX,dword ptr [EDX + 0x1c]
00574772  MOV EDX,dword ptr [ECX]
00574774  MOV ECX,EAX
00574776  MOV EAX,dword ptr [EDX + 0x70]
00574779  CALL EAX
0057477b  MOV ECX,dword ptr [EBP + 0xffffff64]
00574781  CMP dword ptr [ECX + 0x20],0x0
00574785  JNZ 0x005747da
00574787  PUSH 0x178
0057478c  CALL 0x00686d82
00574791  ADD ESP,0x4
00574794  MOV dword ptr [EBP + -0x80],EAX
00574797  MOV dword ptr [EBP + -0x4],0xd
0057479e  CMP dword ptr [EBP + -0x80],0x0
005747a2  JZ 0x005747b4
005747a4  MOV ECX,dword ptr [EBP + -0x80]
005747a7  CALL 0x005eaaf0
005747ac  MOV dword ptr [EBP + 0xffffff2c],EAX
005747b2  JMP 0x005747be
005747b4  MOV dword ptr [EBP + 0xffffff2c],0x0
005747be  MOV EDX,dword ptr [EBP + 0xffffff2c]
005747c4  MOV dword ptr [EBP + -0x7c],EDX
005747c7  MOV dword ptr [EBP + -0x4],0xffffffff
005747ce  MOV EAX,dword ptr [EBP + 0xffffff64]
005747d4  MOV ECX,dword ptr [EBP + -0x7c]
005747d7  MOV dword ptr [EAX + 0x20],ECX
005747da  PUSH 0x0
005747dc  PUSH 0x0
005747de  MOV EDX,dword ptr [EBP + 0xffffff64]
005747e4  MOV EAX,dword ptr [EDX + 0x20]
005747e7  MOV ECX,dword ptr [EBP + 0xffffff64]
005747ed  MOV ECX,dword ptr [ECX + 0x20]
005747f0  MOV EDX,dword ptr [EAX]
005747f2  MOV EAX,dword ptr [EDX + 0x44]
005747f5  CALL EAX
005747f7  PUSH 0x16028
005747fc  MOV ECX,dword ptr [EBP + 0xffffff64]
00574802  MOV ECX,dword ptr [ECX + 0x20]
00574805  CALL 0x005eaf00
0057480a  MOV EDX,dword ptr [EBP + 0xffffff64]
00574810  MOV EAX,dword ptr [EDX + 0x20]
00574813  MOV ECX,dword ptr [EBP + 0xffffff64]
00574819  MOV ECX,dword ptr [ECX + 0x20]
0057481c  MOV EDX,dword ptr [EAX]
0057481e  MOV EAX,dword ptr [EDX + 0x40]
00574821  CALL EAX
00574823  PUSH 0x14
00574825  MOV ECX,dword ptr [EBP + 0xffffff64]
0057482b  MOV EDX,dword ptr [ECX + 0x20]
0057482e  MOV EAX,dword ptr [EBP + 0xffffff64]
00574834  MOV ECX,dword ptr [EAX + 0x20]
00574837  MOV EDX,dword ptr [EDX]
00574839  MOV EAX,dword ptr [EDX + 0x6c]
0057483c  CALL EAX
0057483e  MOV ECX,dword ptr [EBP + 0xffffff64]
00574844  MOV EDX,dword ptr [ECX + 0x20]
00574847  MOV EAX,dword ptr [EBP + 0xffffff64]
0057484d  MOV ECX,dword ptr [EAX + 0x20]
00574850  MOV EDX,dword ptr [EDX]
00574852  MOV EAX,dword ptr [EDX + 0x70]
00574855  CALL EAX
00574857  MOV ECX,dword ptr [EBP + 0xffffff64]
0057485d  CMP dword ptr [ECX + 0x24],0x0
00574861  JNZ 0x005748c5
00574863  PUSH 0x178
00574868  CALL 0x00686d82
0057486d  ADD ESP,0x4
00574870  MOV dword ptr [EBP + 0xffffff78],EAX
00574876  MOV dword ptr [EBP + -0x4],0xe
0057487d  CMP dword ptr [EBP + 0xffffff78],0x0
00574884  JZ 0x00574899
00574886  MOV ECX,dword ptr [EBP + 0xffffff78]
0057488c  CALL 0x005eaaf0
00574891  MOV dword ptr [EBP + 0xffffff28],EAX
00574897  JMP 0x005748a3
00574899  MOV dword ptr [EBP + 0xffffff28],0x0
005748a3  MOV EDX,dword ptr [EBP + 0xffffff28]
005748a9  MOV dword ptr [EBP + 0xffffff7c],EDX
005748af  MOV dword ptr [EBP + -0x4],0xffffffff
005748b6  MOV EAX,dword ptr [EBP + 0xffffff64]
005748bc  MOV ECX,dword ptr [EBP + 0xffffff7c]
005748c2  MOV dword ptr [EAX + 0x24],ECX
005748c5  PUSH 0x0
005748c7  PUSH 0x0
005748c9  MOV EDX,dword ptr [EBP + 0xffffff64]
005748cf  MOV EAX,dword ptr [EDX + 0x24]
005748d2  MOV ECX,dword ptr [EBP + 0xffffff64]
005748d8  MOV ECX,dword ptr [ECX + 0x24]
005748db  MOV EDX,dword ptr [EAX]
005748dd  MOV EAX,dword ptr [EDX + 0x44]
005748e0  CALL EAX
005748e2  PUSH 0x16029
005748e7  MOV ECX,dword ptr [EBP + 0xffffff64]
005748ed  MOV ECX,dword ptr [ECX + 0x24]
005748f0  CALL 0x005eaf00
005748f5  MOV EDX,dword ptr [EBP + 0xffffff64]
005748fb  MOV EAX,dword ptr [EDX + 0x6c]
005748fe  PUSH EAX
005748ff  MOV ECX,dword ptr [EBP + 0xffffff64]
00574905  MOV EDX,dword ptr [ECX + 0x24]
00574908  MOV EAX,dword ptr [EBP + 0xffffff64]
0057490e  MOV ECX,dword ptr [EAX + 0x24]
00574911  MOV EDX,dword ptr [EDX]
00574913  MOV EAX,dword ptr [EDX + 0xb0]
00574919  CALL EAX
0057491b  MOV ECX,dword ptr [EBP + 0xffffff64]
00574921  MOV EDX,dword ptr [ECX + 0x24]
00574924  MOV EAX,dword ptr [EBP + 0xffffff64]
0057492a  MOV ECX,dword ptr [EAX + 0x24]
0057492d  MOV EDX,dword ptr [EDX]
0057492f  MOV EAX,dword ptr [EDX + 0x40]
00574932  CALL EAX
00574934  PUSH 0x14
00574936  MOV ECX,dword ptr [EBP + 0xffffff64]
0057493c  MOV EDX,dword ptr [ECX + 0x24]
0057493f  MOV EAX,dword ptr [EBP + 0xffffff64]
00574945  MOV ECX,dword ptr [EAX + 0x24]
00574948  MOV EDX,dword ptr [EDX]
0057494a  MOV EAX,dword ptr [EDX + 0x6c]
0057494d  CALL EAX
0057494f  MOV ECX,dword ptr [EBP + 0xffffff64]
00574955  MOV EDX,dword ptr [ECX + 0x24]
00574958  MOV EAX,dword ptr [EBP + 0xffffff64]
0057495e  MOV ECX,dword ptr [EAX + 0x24]
00574961  MOV EDX,dword ptr [EDX]
00574963  MOV EAX,dword ptr [EDX + 0x74]
00574966  CALL EAX
00574968  MOV ECX,dword ptr [EBP + 0xffffff64]
0057496e  CMP dword ptr [ECX + 0x34],0x0
00574972  JNZ 0x005749d6
00574974  PUSH 0x184
00574979  CALL 0x00686d82
0057497e  ADD ESP,0x4
00574981  MOV dword ptr [EBP + 0xffffff70],EAX
00574987  MOV dword ptr [EBP + -0x4],0xf
0057498e  CMP dword ptr [EBP + 0xffffff70],0x0
00574995  JZ 0x005749aa
00574997  MOV ECX,dword ptr [EBP + 0xffffff70]
0057499d  CALL 0x005f5bf0
005749a2  MOV dword ptr [EBP + 0xffffff24],EAX
005749a8  JMP 0x005749b4
005749aa  MOV dword ptr [EBP + 0xffffff24],0x0
005749b4  MOV EDX,dword ptr [EBP + 0xffffff24]
005749ba  MOV dword ptr [EBP + 0xffffff74],EDX
005749c0  MOV dword ptr [EBP + -0x4],0xffffffff
005749c7  MOV EAX,dword ptr [EBP + 0xffffff64]
005749cd  MOV ECX,dword ptr [EBP + 0xffffff74]
005749d3  MOV dword ptr [EAX + 0x34],ECX
005749d6  PUSH 0x0
005749d8  PUSH 0x0
005749da  MOV EDX,dword ptr [EBP + 0xffffff64]
005749e0  MOV EAX,dword ptr [EDX + 0x34]
005749e3  MOV ECX,dword ptr [EBP + 0xffffff64]
005749e9  MOV ECX,dword ptr [ECX + 0x34]
005749ec  MOV EDX,dword ptr [EAX]
005749ee  MOV EAX,dword ptr [EDX + 0x44]
005749f1  CALL EAX
005749f3  PUSH 0x1602b
005749f8  MOV ECX,dword ptr [EBP + 0xffffff64]
005749fe  MOV ECX,dword ptr [ECX + 0x34]
00574a01  CALL 0x005eaf00
00574a06  PUSH 0x0
00574a08  MOV EDX,dword ptr [EBP + 0xffffff64]
00574a0e  MOV EAX,dword ptr [EDX + 0x34]
00574a11  MOV ECX,dword ptr [EBP + 0xffffff64]
00574a17  MOV ECX,dword ptr [ECX + 0x34]
00574a1a  MOV EDX,dword ptr [EAX]
00574a1c  MOV EAX,dword ptr [EDX + 0xb0]
00574a22  CALL EAX
00574a24  MOV ECX,dword ptr [EBP + 0xffffff64]
00574a2a  MOV EDX,dword ptr [ECX + 0x34]
00574a2d  MOV EAX,dword ptr [EBP + 0xffffff64]
00574a33  MOV ECX,dword ptr [EAX + 0x34]
00574a36  MOV EDX,dword ptr [EDX]
00574a38  MOV EAX,dword ptr [EDX + 0x40]
00574a3b  CALL EAX
00574a3d  PUSH 0x19
00574a3f  MOV ECX,dword ptr [EBP + 0xffffff64]
00574a45  MOV EDX,dword ptr [ECX + 0x34]
00574a48  MOV EAX,dword ptr [EBP + 0xffffff64]
00574a4e  MOV ECX,dword ptr [EAX + 0x34]
00574a51  MOV EDX,dword ptr [EDX]
00574a53  MOV EAX,dword ptr [EDX + 0x6c]
00574a56  CALL EAX
00574a58  MOV ECX,dword ptr [EBP + 0xffffff64]
00574a5e  MOV EDX,dword ptr [ECX + 0x34]
00574a61  MOV dword ptr [EDX + 0x178],0x6
00574a6b  MOV EAX,dword ptr [EBP + 0xffffff64]
00574a71  MOV ECX,dword ptr [EAX + 0x34]
00574a74  MOV EDX,dword ptr [EBP + 0xffffff64]
00574a7a  MOV EAX,dword ptr [EDX + 0x34]
00574a7d  MOV EDX,dword ptr [ECX]
00574a7f  MOV ECX,EAX
00574a81  MOV EAX,dword ptr [EDX + 0x70]
00574a84  CALL EAX
00574a86  MOV word ptr [EBP + -0x10],0x0
00574a8c  JMP 0x00574a9a
00574a8e  MOV CX,word ptr [EBP + -0x10]
00574a92  ADD CX,0x1
00574a96  MOV word ptr [EBP + -0x10],CX
00574a9a  MOVSX EDX,word ptr [EBP + -0x10]
00574a9e  CMP EDX,0x3
00574aa1  JGE 0x00574bf8
00574aa7  MOVSX EAX,word ptr [EBP + -0x10]
00574aab  MOV ECX,dword ptr [EBP + 0xffffff64]
00574ab1  CMP dword ptr [ECX + EAX*0x4 + 0x28],0x0
00574ab6  JNZ 0x00574b1f
00574ab8  PUSH 0x184
00574abd  CALL 0x00686d82
00574ac2  ADD ESP,0x4
00574ac5  MOV dword ptr [EBP + 0xffffff68],EAX
00574acb  MOV dword ptr [EBP + -0x4],0x10
00574ad2  CMP dword ptr [EBP + 0xffffff68],0x0
00574ad9  JZ 0x00574aee
00574adb  MOV ECX,dword ptr [EBP + 0xffffff68]
00574ae1  CALL 0x005f5bf0
00574ae6  MOV dword ptr [EBP + 0xffffff20],EAX
00574aec  JMP 0x00574af8
00574aee  MOV dword ptr [EBP + 0xffffff20],0x0
00574af8  MOV EDX,dword ptr [EBP + 0xffffff20]
00574afe  MOV dword ptr [EBP + 0xffffff6c],EDX
00574b04  MOV dword ptr [EBP + -0x4],0xffffffff
00574b0b  MOVSX EAX,word ptr [EBP + -0x10]
00574b0f  MOV ECX,dword ptr [EBP + 0xffffff64]
00574b15  MOV EDX,dword ptr [EBP + 0xffffff6c]
00574b1b  MOV dword ptr [ECX + EAX*0x4 + 0x28],EDX
00574b1f  PUSH 0x0
00574b21  PUSH 0x0
00574b23  MOVSX EAX,word ptr [EBP + -0x10]
00574b27  MOV ECX,dword ptr [EBP + 0xffffff64]
00574b2d  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x28]
00574b31  MOVSX EAX,word ptr [EBP + -0x10]
00574b35  MOV ECX,dword ptr [EBP + 0xffffff64]
00574b3b  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x28]
00574b3f  MOV EDX,dword ptr [EDX]
00574b41  MOV EAX,dword ptr [EDX + 0x44]
00574b44  CALL EAX
00574b46  MOVSX ECX,word ptr [EBP + -0x10]
00574b4a  NEG ECX
00574b4c  SBB ECX,ECX
00574b4e  AND ECX,0xfffffffd
00574b51  ADD ECX,0x1602d
00574b57  PUSH ECX
00574b58  MOVSX EDX,word ptr [EBP + -0x10]
00574b5c  MOV EAX,dword ptr [EBP + 0xffffff64]
00574b62  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x28]
00574b66  CALL 0x005eaf00
00574b6b  PUSH 0x0
00574b6d  MOVSX ECX,word ptr [EBP + -0x10]
00574b71  MOV EDX,dword ptr [EBP + 0xffffff64]
00574b77  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x28]
00574b7b  MOVSX ECX,word ptr [EBP + -0x10]
00574b7f  MOV EDX,dword ptr [EBP + 0xffffff64]
00574b85  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x28]
00574b89  MOV EAX,dword ptr [EAX]
00574b8b  MOV EDX,dword ptr [EAX + 0xb0]
00574b91  CALL EDX
00574b93  MOVSX EAX,word ptr [EBP + -0x10]
00574b97  MOV ECX,dword ptr [EBP + 0xffffff64]
00574b9d  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x28]
00574ba1  MOVSX EAX,word ptr [EBP + -0x10]
00574ba5  MOV ECX,dword ptr [EBP + 0xffffff64]
00574bab  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x28]
00574baf  MOV EDX,dword ptr [EDX]
00574bb1  MOV EAX,dword ptr [EDX + 0x40]
00574bb4  CALL EAX
00574bb6  PUSH 0x14
00574bb8  MOVSX ECX,word ptr [EBP + -0x10]
00574bbc  MOV EDX,dword ptr [EBP + 0xffffff64]
00574bc2  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x28]
00574bc6  MOVSX ECX,word ptr [EBP + -0x10]
00574bca  MOV EDX,dword ptr [EBP + 0xffffff64]
00574bd0  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x28]
00574bd4  MOV EAX,dword ptr [EAX]
00574bd6  MOV EDX,dword ptr [EAX + 0x6c]
00574bd9  CALL EDX
00574bdb  MOVSX EAX,word ptr [EBP + -0x10]
00574bdf  MOV ECX,dword ptr [EBP + 0xffffff64]
00574be5  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x28]
00574be9  MOV dword ptr [EDX + 0x178],0xa
00574bf3  JMP 0x00574a8e
00574bf8  MOV ECX,dword ptr [EBP + 0xffffff64]
00574bfe  CALL 0x00576160
00574c03  PUSH 0x1
00574c05  MOV EAX,[0x00793458]
00574c0a  MOV ECX,dword ptr [EAX + 0x4]
00574c0d  MOV EDX,dword ptr [0x00793458]
00574c13  MOV EAX,dword ptr [EDX + 0x4]
00574c16  MOV EDX,dword ptr [ECX]
00574c18  MOV ECX,EAX
00574c1a  MOV EAX,dword ptr [EDX + 0x4]
00574c1d  CALL EAX
00574c1f  PUSH 0x0
00574c21  MOV ECX,dword ptr [0x00793458]
00574c27  MOV EDX,dword ptr [ECX + 0x4]
00574c2a  MOV EAX,[0x00793458]
00574c2f  MOV ECX,dword ptr [EAX + 0x4]
00574c32  MOV EDX,dword ptr [EDX]
00574c34  MOV EAX,dword ptr [EDX + 0x1c]
00574c37  CALL EAX
00574c39  PUSH 0x749848
00574c3e  PUSH 0x5
00574c40  MOV ECX,dword ptr [0x00793578]
00574c46  CALL 0x0057ab80
00574c4b  MOV ECX,dword ptr [EBP + -0xc]
00574c4e  MOV dword ptr FS:[0x0],ECX
00574c55  POP ECX
00574c56  MOV ESP,EBP
00574c58  POP EBP
00574c59  RET
