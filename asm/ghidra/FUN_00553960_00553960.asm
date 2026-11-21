; FUN_00553960  00553960
00553960  PUSH EBP
00553961  MOV EBP,ESP
00553963  PUSH -0x1
00553965  PUSH 0x6a554e
0055396a  MOV EAX,FS:[0x0]
00553970  PUSH EAX
00553971  SUB ESP,0xe4
00553977  MOV EAX,[0x00781870]
0055397c  XOR EAX,EBP
0055397e  MOV dword ptr [EBP + -0x10],EAX
00553981  PUSH EAX
00553982  LEA EAX,[EBP + -0xc]
00553985  MOV FS:[0x0],EAX
0055398b  MOV dword ptr [EBP + 0xffffff38],ECX
00553991  PUSH 0x30f340
00553996  MOV ECX,dword ptr [0x0162ee80]
0055399c  CALL 0x005f1ad0
005539a1  PUSH 0x178
005539a6  CALL 0x00686d82
005539ab  ADD ESP,0x4
005539ae  MOV dword ptr [EBP + -0x70],EAX
005539b1  MOV dword ptr [EBP + -0x4],0x0
005539b8  CMP dword ptr [EBP + -0x70],0x0
005539bc  JZ 0x005539ce
005539be  MOV ECX,dword ptr [EBP + -0x70]
005539c1  CALL 0x005eaaf0
005539c6  MOV dword ptr [EBP + 0xffffff34],EAX
005539cc  JMP 0x005539d8
005539ce  MOV dword ptr [EBP + 0xffffff34],0x0
005539d8  MOV EAX,dword ptr [EBP + 0xffffff34]
005539de  MOV dword ptr [EBP + -0x6c],EAX
005539e1  MOV dword ptr [EBP + -0x4],0xffffffff
005539e8  MOV ECX,dword ptr [EBP + 0xffffff38]
005539ee  MOV EDX,dword ptr [EBP + -0x6c]
005539f1  MOV dword ptr [ECX + 0x60],EDX
005539f4  PUSH -0x1
005539f6  PUSH 0x0
005539f8  PUSH 0x0
005539fa  PUSH 0x0
005539fc  MOV ECX,dword ptr [EBP + 0xffffff38]
00553a02  CALL 0x005541c0
00553a07  PUSH EAX
00553a08  MOV EAX,dword ptr [EBP + 0xffffff38]
00553a0e  MOV ECX,dword ptr [EAX + 0x60]
00553a11  CALL 0x005eae80
00553a16  MOV ECX,dword ptr [EBP + 0xffffff38]
00553a1c  MOV EDX,dword ptr [ECX + 0x60]
00553a1f  MOV EAX,dword ptr [EBP + 0xffffff38]
00553a25  MOV ECX,dword ptr [EAX + 0x60]
00553a28  MOV EDX,dword ptr [EDX]
00553a2a  MOV EAX,dword ptr [EDX + 0x74]
00553a2d  CALL EAX
00553a2f  PUSH 0x178
00553a34  CALL 0x00686d82
00553a39  ADD ESP,0x4
00553a3c  MOV dword ptr [EBP + -0x78],EAX
00553a3f  MOV dword ptr [EBP + -0x4],0x1
00553a46  CMP dword ptr [EBP + -0x78],0x0
00553a4a  JZ 0x00553a5c
00553a4c  MOV ECX,dword ptr [EBP + -0x78]
00553a4f  CALL 0x005eaaf0
00553a54  MOV dword ptr [EBP + 0xffffff30],EAX
00553a5a  JMP 0x00553a66
00553a5c  MOV dword ptr [EBP + 0xffffff30],0x0
00553a66  MOV ECX,dword ptr [EBP + 0xffffff30]
00553a6c  MOV dword ptr [EBP + -0x74],ECX
00553a6f  MOV dword ptr [EBP + -0x4],0xffffffff
00553a76  MOV EDX,dword ptr [EBP + 0xffffff38]
00553a7c  MOV EAX,dword ptr [EBP + -0x74]
00553a7f  MOV dword ptr [EDX + 0x64],EAX
00553a82  PUSH -0x1
00553a84  PUSH 0x1
00553a86  PUSH 0x0
00553a88  PUSH 0x0
00553a8a  PUSH 0x1388c
00553a8f  MOV ECX,dword ptr [EBP + 0xffffff38]
00553a95  MOV ECX,dword ptr [ECX + 0x64]
00553a98  CALL 0x005eae80
00553a9d  MOV EDX,dword ptr [EBP + 0xffffff38]
00553aa3  MOV EAX,dword ptr [EDX + 0x64]
00553aa6  MOV ECX,dword ptr [EBP + 0xffffff38]
00553aac  MOV ECX,dword ptr [ECX + 0x64]
00553aaf  MOV EDX,dword ptr [EAX]
00553ab1  MOV EAX,dword ptr [EDX + 0x74]
00553ab4  CALL EAX
00553ab6  PUSH 0x1d0
00553abb  CALL 0x00686d82
00553ac0  ADD ESP,0x4
00553ac3  MOV dword ptr [EBP + -0x80],EAX
00553ac6  MOV dword ptr [EBP + -0x4],0x2
00553acd  CMP dword ptr [EBP + -0x80],0x0
00553ad1  JZ 0x00553ae3
00553ad3  MOV ECX,dword ptr [EBP + -0x80]
00553ad6  CALL 0x005ec5a0
00553adb  MOV dword ptr [EBP + 0xffffff2c],EAX
00553ae1  JMP 0x00553aed
00553ae3  MOV dword ptr [EBP + 0xffffff2c],0x0
00553aed  MOV ECX,dword ptr [EBP + 0xffffff2c]
00553af3  MOV dword ptr [EBP + -0x7c],ECX
00553af6  MOV dword ptr [EBP + -0x4],0xffffffff
00553afd  MOV EDX,dword ptr [EBP + 0xffffff38]
00553b03  MOV EAX,dword ptr [EBP + -0x7c]
00553b06  MOV dword ptr [EDX + 0xb0],EAX
00553b0c  PUSH -0x1
00553b0e  PUSH 0x12
00553b10  PUSH 0x8
00553b12  PUSH 0x181
00553b17  PUSH 0x136
00553b1c  PUSH 0x19
00553b1e  PUSH 0x50
00553b20  PUSH 0x2a
00553b22  PUSH 0x6b2b64
00553b27  MOV ECX,dword ptr [EBP + 0xffffff38]
00553b2d  MOV ECX,dword ptr [ECX + 0xb0]
00553b33  CALL 0x005ec8f0
00553b38  PUSH 0x1d0
00553b3d  CALL 0x00686d82
00553b42  ADD ESP,0x4
00553b45  MOV dword ptr [EBP + 0xffffff78],EAX
00553b4b  MOV dword ptr [EBP + -0x4],0x3
00553b52  CMP dword ptr [EBP + 0xffffff78],0x0
00553b59  JZ 0x00553b6e
00553b5b  MOV ECX,dword ptr [EBP + 0xffffff78]
00553b61  CALL 0x005ec5a0
00553b66  MOV dword ptr [EBP + 0xffffff28],EAX
00553b6c  JMP 0x00553b78
00553b6e  MOV dword ptr [EBP + 0xffffff28],0x0
00553b78  MOV EDX,dword ptr [EBP + 0xffffff28]
00553b7e  MOV dword ptr [EBP + 0xffffff7c],EDX
00553b84  MOV dword ptr [EBP + -0x4],0xffffffff
00553b8b  MOV EAX,dword ptr [EBP + 0xffffff38]
00553b91  MOV ECX,dword ptr [EBP + 0xffffff7c]
00553b97  MOV dword ptr [EAX + 0xb4],ECX
00553b9d  PUSH -0x1
00553b9f  PUSH 0x30
00553ba1  PUSH 0x8
00553ba3  PUSH 0x181
00553ba8  PUSH 0x95
00553bad  PUSH 0x19
00553baf  PUSH 0x23
00553bb1  PUSH 0x2a
00553bb3  PUSH 0x6b2b64
00553bb8  MOV EDX,dword ptr [EBP + 0xffffff38]
00553bbe  MOV ECX,dword ptr [EDX + 0xb4]
00553bc4  CALL 0x005ec8f0
00553bc9  PUSH 0x1d0
00553bce  CALL 0x00686d82
00553bd3  ADD ESP,0x4
00553bd6  MOV dword ptr [EBP + 0xffffff70],EAX
00553bdc  MOV dword ptr [EBP + -0x4],0x4
00553be3  CMP dword ptr [EBP + 0xffffff70],0x0
00553bea  JZ 0x00553bff
00553bec  MOV ECX,dword ptr [EBP + 0xffffff70]
00553bf2  CALL 0x005ec5a0
00553bf7  MOV dword ptr [EBP + 0xffffff24],EAX
00553bfd  JMP 0x00553c09
00553bff  MOV dword ptr [EBP + 0xffffff24],0x0
00553c09  MOV EAX,dword ptr [EBP + 0xffffff24]
00553c0f  MOV dword ptr [EBP + 0xffffff74],EAX
00553c15  MOV dword ptr [EBP + -0x4],0xffffffff
00553c1c  MOV ECX,dword ptr [EBP + 0xffffff38]
00553c22  MOV EDX,dword ptr [EBP + 0xffffff74]
00553c28  MOV dword ptr [ECX + 0xb8],EDX
00553c2e  PUSH -0x1
00553c30  PUSH 0x12
00553c32  PUSH 0x8
00553c34  PUSH 0xd8
00553c39  PUSH 0x12c
00553c3e  PUSH 0x19
00553c40  PUSH 0x50
00553c42  PUSH 0x2a
00553c44  PUSH 0x6c8568
00553c49  CALL 0x00630f40
00553c4e  ADD ESP,0x4
00553c51  PUSH EAX
00553c52  MOV EAX,dword ptr [EBP + 0xffffff38]
00553c58  MOV ECX,dword ptr [EAX + 0xb8]
00553c5e  CALL 0x005ec8f0
00553c63  MOV dword ptr [EBP + -0x34],0x6c8550
00553c6a  MOV dword ptr [EBP + -0x30],0x6c8538
00553c71  MOV dword ptr [EBP + -0x2c],0x6b3148
00553c78  MOV dword ptr [EBP + -0x68],0x91
00553c7f  MOV dword ptr [EBP + -0x64],0x172
00553c86  MOV dword ptr [EBP + -0x60],0x168
00553c8d  MOV dword ptr [EBP + -0x5c],0x172
00553c94  MOV dword ptr [EBP + -0x58],0x91
00553c9b  MOV dword ptr [EBP + -0x54],0xd8
00553ca2  MOV dword ptr [EBP + -0x28],0x0
00553ca9  JMP 0x00553cb4
00553cab  MOV ECX,dword ptr [EBP + -0x28]
00553cae  ADD ECX,0x1
00553cb1  MOV dword ptr [EBP + -0x28],ECX
00553cb4  CMP dword ptr [EBP + -0x28],0x3
00553cb8  JGE 0x00553d8b
00553cbe  PUSH 0x1d0
00553cc3  CALL 0x00686d82
00553cc8  ADD ESP,0x4
00553ccb  MOV dword ptr [EBP + 0xffffff68],EAX
00553cd1  MOV dword ptr [EBP + -0x4],0x5
00553cd8  CMP dword ptr [EBP + 0xffffff68],0x0
00553cdf  JZ 0x00553cf4
00553ce1  MOV ECX,dword ptr [EBP + 0xffffff68]
00553ce7  CALL 0x005ec5a0
00553cec  MOV dword ptr [EBP + 0xffffff20],EAX
00553cf2  JMP 0x00553cfe
00553cf4  MOV dword ptr [EBP + 0xffffff20],0x0
00553cfe  MOV EDX,dword ptr [EBP + 0xffffff20]
00553d04  MOV dword ptr [EBP + 0xffffff6c],EDX
00553d0a  MOV dword ptr [EBP + -0x4],0xffffffff
00553d11  MOV EAX,dword ptr [EBP + -0x28]
00553d14  MOV ECX,dword ptr [EBP + 0xffffff38]
00553d1a  MOV EDX,dword ptr [EBP + 0xffffff6c]
00553d20  MOV dword ptr [ECX + EAX*0x4 + 0x78],EDX
00553d24  PUSH -0x1
00553d26  PUSH 0x5
00553d28  PUSH 0x8
00553d2a  MOV EAX,dword ptr [EBP + -0x28]
00553d2d  MOV ECX,dword ptr [EBP + EAX*0x8 + -0x64]
00553d31  PUSH ECX
00553d32  MOV EDX,dword ptr [EBP + -0x28]
00553d35  MOV EAX,dword ptr [EBP + EDX*0x8 + -0x68]
00553d39  PUSH EAX
00553d3a  PUSH 0x14
00553d3c  PUSH 0x64
00553d3e  PUSH 0x2a
00553d40  MOV ECX,dword ptr [EBP + -0x28]
00553d43  MOV EDX,dword ptr [EBP + ECX*0x4 + -0x34]
00553d47  PUSH EDX
00553d48  CALL 0x00630f40
00553d4d  ADD ESP,0x4
00553d50  PUSH EAX
00553d51  MOV EAX,dword ptr [EBP + -0x28]
00553d54  MOV ECX,dword ptr [EBP + 0xffffff38]
00553d5a  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x78]
00553d5e  CALL 0x005ec8f0
00553d63  MOV EDX,dword ptr [EBP + -0x28]
00553d66  MOV EAX,dword ptr [EBP + 0xffffff38]
00553d6c  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x78]
00553d70  MOV EDX,dword ptr [EBP + -0x28]
00553d73  MOV EAX,dword ptr [EBP + 0xffffff38]
00553d79  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x78]
00553d7d  MOV EAX,dword ptr [ECX]
00553d7f  MOV ECX,EDX
00553d81  MOV EDX,dword ptr [EAX + 0x74]
00553d84  CALL EDX
00553d86  JMP 0x00553cab
00553d8b  PUSH 0x0
00553d8d  MOV ECX,dword ptr [0x00793420]
00553d93  CALL 0x005d0aa0
00553d98  PUSH EAX
00553d99  CALL 0x0064c8a0
00553d9e  ADD ESP,0x8
00553da1  MOV dword ptr [EBP + 0xffffff60],EAX
00553da7  MOV dword ptr [EBP + 0xffffff64],EDX
00553dad  MOV EAX,dword ptr [EBP + 0xffffff60]
00553db3  MOV dword ptr [EBP + -0x3c],EAX
00553db6  MOV ECX,dword ptr [EBP + 0xffffff64]
00553dbc  MOV dword ptr [EBP + -0x38],ECX
00553dbf  PUSH 0x1
00553dc1  PUSH 0x1
00553dc3  PUSH 0x1
00553dc5  LEA EDX,[EBP + -0x24]
00553dc8  PUSH EDX
00553dc9  MOV EAX,dword ptr [EBP + -0x38]
00553dcc  PUSH EAX
00553dcd  MOV ECX,dword ptr [EBP + -0x3c]
00553dd0  PUSH ECX
00553dd1  CALL 0x0064c8d0
00553dd6  ADD ESP,0x18
00553dd9  LEA EDX,[EBP + -0x24]
00553ddc  PUSH EDX
00553ddd  MOV EAX,dword ptr [EBP + 0xffffff38]
00553de3  MOV ECX,dword ptr [EAX + 0x80]
00553de9  MOV EDX,dword ptr [EBP + 0xffffff38]
00553def  MOV EAX,dword ptr [EDX + 0x80]
00553df5  MOV EDX,dword ptr [ECX]
00553df7  MOV ECX,EAX
00553df9  MOV EAX,dword ptr [EDX + 0xb4]
00553dff  CALL EAX
00553e01  MOV dword ptr [EBP + -0x50],0x85
00553e08  MOV dword ptr [EBP + -0x4c],0xbc
00553e0f  MOV dword ptr [EBP + -0x48],0xf3
00553e16  MOV dword ptr [EBP + -0x44],0x12a
00553e1d  MOV dword ptr [EBP + -0x40],0x161
00553e24  MOV dword ptr [EBP + -0x28],0x0
00553e2b  JMP 0x00553e36
00553e2d  MOV ECX,dword ptr [EBP + -0x28]
00553e30  ADD ECX,0x1
00553e33  MOV dword ptr [EBP + -0x28],ECX
00553e36  CMP dword ptr [EBP + -0x28],0x5
00553e3a  JGE 0x0055405c
00553e40  PUSH 0x1ac
00553e45  CALL 0x00686d82
00553e4a  ADD ESP,0x4
00553e4d  MOV dword ptr [EBP + 0xffffff58],EAX
00553e53  MOV dword ptr [EBP + -0x4],0x6
00553e5a  CMP dword ptr [EBP + 0xffffff58],0x0
00553e61  JZ 0x00553e78
00553e63  PUSH 0x1
00553e65  MOV ECX,dword ptr [EBP + 0xffffff58]
00553e6b  CALL 0x00555510
00553e70  MOV dword ptr [EBP + 0xffffff1c],EAX
00553e76  JMP 0x00553e82
00553e78  MOV dword ptr [EBP + 0xffffff1c],0x0
00553e82  MOV EDX,dword ptr [EBP + 0xffffff1c]
00553e88  MOV dword ptr [EBP + 0xffffff5c],EDX
00553e8e  MOV dword ptr [EBP + -0x4],0xffffffff
00553e95  MOV EAX,dword ptr [EBP + -0x28]
00553e98  MOV ECX,dword ptr [EBP + 0xffffff38]
00553e9e  MOV EDX,dword ptr [EBP + 0xffffff5c]
00553ea4  MOV dword ptr [ECX + EAX*0x4 + 0x4],EDX
00553ea8  PUSH -0x1
00553eaa  PUSH 0x2
00553eac  PUSH 0x125
00553eb1  MOV EAX,dword ptr [EBP + -0x28]
00553eb4  MOV ECX,dword ptr [EBP + EAX*0x4 + -0x50]
00553eb8  PUSH ECX
00553eb9  PUSH 0x30f341
00553ebe  MOV EDX,dword ptr [EBP + -0x28]
00553ec1  MOV EAX,dword ptr [EBP + 0xffffff38]
00553ec7  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x4]
00553ecb  CALL 0x005eae80
00553ed0  PUSH 0x184
00553ed5  CALL 0x00686d82
00553eda  ADD ESP,0x4
00553edd  MOV dword ptr [EBP + 0xffffff50],EAX
00553ee3  MOV dword ptr [EBP + -0x4],0x7
00553eea  CMP dword ptr [EBP + 0xffffff50],0x0
00553ef1  JZ 0x00553f06
00553ef3  MOV ECX,dword ptr [EBP + 0xffffff50]
00553ef9  CALL 0x005f5bf0
00553efe  MOV dword ptr [EBP + 0xffffff18],EAX
00553f04  JMP 0x00553f10
00553f06  MOV dword ptr [EBP + 0xffffff18],0x0
00553f10  MOV ECX,dword ptr [EBP + 0xffffff18]
00553f16  MOV dword ptr [EBP + 0xffffff54],ECX
00553f1c  MOV dword ptr [EBP + -0x4],0xffffffff
00553f23  MOV EDX,dword ptr [EBP + -0x28]
00553f26  MOV EAX,dword ptr [EBP + 0xffffff38]
00553f2c  MOV ECX,dword ptr [EBP + 0xffffff54]
00553f32  MOV dword ptr [EAX + EDX*0x4 + 0x18],ECX
00553f36  PUSH -0x1
00553f38  PUSH 0x8
00553f3a  PUSH 0x118
00553f3f  MOV EDX,dword ptr [EBP + -0x28]
00553f42  MOV EAX,dword ptr [EBP + EDX*0x4 + -0x50]
00553f46  PUSH EAX
00553f47  PUSH 0x13899
00553f4c  MOV ECX,dword ptr [EBP + -0x28]
00553f4f  MOV EDX,dword ptr [EBP + 0xffffff38]
00553f55  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x18]
00553f59  CALL 0x005eae80
00553f5e  MOV EAX,dword ptr [EBP + -0x28]
00553f61  MOV ECX,dword ptr [EBP + 0xffffff38]
00553f67  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x18]
00553f6b  MOV dword ptr [EDX + 0x178],0x0
00553f75  PUSH 0x1d0
00553f7a  CALL 0x00686d82
00553f7f  ADD ESP,0x4
00553f82  MOV dword ptr [EBP + 0xffffff48],EAX
00553f88  MOV dword ptr [EBP + -0x4],0x8
00553f8f  CMP dword ptr [EBP + 0xffffff48],0x0
00553f96  JZ 0x00553fab
00553f98  MOV ECX,dword ptr [EBP + 0xffffff48]
00553f9e  CALL 0x005ec5a0
00553fa3  MOV dword ptr [EBP + 0xffffff14],EAX
00553fa9  JMP 0x00553fb5
00553fab  MOV dword ptr [EBP + 0xffffff14],0x0
00553fb5  MOV EAX,dword ptr [EBP + 0xffffff14]
00553fbb  MOV dword ptr [EBP + 0xffffff4c],EAX
00553fc1  MOV dword ptr [EBP + -0x4],0xffffffff
00553fc8  MOV ECX,dword ptr [EBP + -0x28]
00553fcb  MOV EDX,dword ptr [EBP + 0xffffff38]
00553fd1  MOV EAX,dword ptr [EBP + 0xffffff4c]
00553fd7  MOV dword ptr [EDX + ECX*0x4 + 0x9c],EAX
00553fde  PUSH -0x1
00553fe0  PUSH 0x5
00553fe2  PUSH 0x7
00553fe4  MOV ECX,dword ptr [EBP + -0x28]
00553fe7  MOV EDX,dword ptr [EBP + 0xffffff38]
00553fed  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x4]
00553ff1  MOV ECX,dword ptr [EBP + -0x28]
00553ff4  MOV EDX,dword ptr [EBP + 0xffffff38]
00553ffa  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x4]
00553ffe  MOV EAX,dword ptr [EAX]
00554000  MOV EDX,dword ptr [EAX + 0x54]
00554003  CALL EDX
00554005  SUB EAX,0x23
00554008  PUSH EAX
00554009  MOV EAX,dword ptr [EBP + -0x28]
0055400c  MOV ECX,dword ptr [EBP + 0xffffff38]
00554012  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x4]
00554016  MOV EAX,dword ptr [EBP + -0x28]
00554019  MOV ECX,dword ptr [EBP + 0xffffff38]
0055401f  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x4]
00554023  MOV EDX,dword ptr [EDX]
00554025  MOV EAX,dword ptr [EDX + 0x4c]
00554028  CALL EAX
0055402a  ADD EAX,0xa
0055402d  PUSH EAX
0055402e  PUSH 0x14
00554030  PUSH 0x64
00554032  PUSH 0x2a
00554034  PUSH 0x6c8524
00554039  CALL 0x00630f40
0055403e  ADD ESP,0x4
00554041  PUSH EAX
00554042  MOV ECX,dword ptr [EBP + -0x28]
00554045  MOV EDX,dword ptr [EBP + 0xffffff38]
0055404b  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x9c]
00554052  CALL 0x005ec8f0
00554057  JMP 0x00553e2d
0055405c  PUSH 0x184
00554061  CALL 0x00686d82
00554066  ADD ESP,0x4
00554069  MOV dword ptr [EBP + 0xffffff40],EAX
0055406f  MOV dword ptr [EBP + -0x4],0x9
00554076  CMP dword ptr [EBP + 0xffffff40],0x0
0055407d  JZ 0x00554092
0055407f  MOV ECX,dword ptr [EBP + 0xffffff40]
00554085  CALL 0x005f5bf0
0055408a  MOV dword ptr [EBP + 0xffffff10],EAX
00554090  JMP 0x0055409c
00554092  MOV dword ptr [EBP + 0xffffff10],0x0
0055409c  MOV EAX,dword ptr [EBP + 0xffffff10]
005540a2  MOV dword ptr [EBP + 0xffffff44],EAX
005540a8  MOV dword ptr [EBP + -0x4],0xffffffff
005540af  MOV ECX,dword ptr [EBP + 0xffffff38]
005540b5  MOV EDX,dword ptr [EBP + 0xffffff44]
005540bb  MOV dword ptr [ECX + 0x68],EDX
005540be  PUSH -0x1
005540c0  PUSH 0x8
005540c2  PUSH 0x0
005540c4  PUSH 0x0
005540c6  PUSH 0x1388b
005540cb  MOV EAX,dword ptr [EBP + 0xffffff38]
005540d1  MOV ECX,dword ptr [EAX + 0x68]
005540d4  CALL 0x005eae80
005540d9  MOV ECX,dword ptr [0x0162ee84]
005540df  MOV DL,byte ptr [ECX + 0x25]
005540e2  MOV byte ptr [EBP + 0xffffff3f],DL
005540e8  MOVZX EAX,byte ptr [EBP + 0xffffff3f]
005540ef  NEG EAX
005540f1  SBB EAX,EAX
005540f3  AND EAX,0x2
005540f6  ADD EAX,0x3
005540f9  MOV ECX,dword ptr [EBP + 0xffffff38]
005540ff  MOV EDX,dword ptr [ECX + 0x68]
00554102  MOV dword ptr [EDX + 0x178],EAX
00554108  MOV dword ptr [EBP + -0x28],0x0
0055410f  JMP 0x0055411a
00554111  MOV EAX,dword ptr [EBP + -0x28]
00554114  ADD EAX,0x1
00554117  MOV dword ptr [EBP + -0x28],EAX
0055411a  CMP dword ptr [EBP + -0x28],0x7
0055411e  JGE 0x0055415c
00554120  PUSH 0x0
00554122  PUSH -0x1
00554124  PUSH -0x1
00554126  PUSH -0x1
00554128  PUSH -0x1
0055412a  PUSH 0x6b27f8
0055412f  PUSH 0x8
00554131  PUSH 0x0
00554133  PUSH 0x0
00554135  MOV ECX,dword ptr [EBP + -0x28]
00554138  ADD ECX,0x13883
0055413e  PUSH ECX
0055413f  MOV EDX,dword ptr [EBP + -0x28]
00554142  MOV EAX,dword ptr [EDX*0x4 + 0x73efe0]
00554149  PUSH EAX
0055414a  PUSH 0x0
0055414c  MOV ECX,dword ptr [0x0162ee84]
00554152  MOV ECX,dword ptr [ECX + 0x14]
00554155  CALL 0x005f9de0
0055415a  JMP 0x00554111
0055415c  PUSH 0x0
0055415e  PUSH -0x1
00554160  PUSH -0x1
00554162  PUSH -0x1
00554164  PUSH -0x1
00554166  PUSH 0x6b27f8
0055416b  PUSH 0x8
0055416d  PUSH 0x0
0055416f  PUSH 0x0
00554171  PUSH 0x1388d
00554176  PUSH 0x6
00554178  PUSH 0x0
0055417a  MOV EDX,dword ptr [0x0162ee84]
00554180  MOV ECX,dword ptr [EDX + 0x14]
00554183  CALL 0x005f9de0
00554188  PUSH 0x0
0055418a  PUSH 0x6
0055418c  MOV EAX,[0x0162ee84]
00554191  MOV ECX,dword ptr [EAX + 0x14]
00554194  CALL 0x005fb300
00554199  MOV ECX,EAX
0055419b  CALL 0x00602790
005541a0  MOV ECX,dword ptr [EBP + -0xc]
005541a3  MOV dword ptr FS:[0x0],ECX
005541aa  POP ECX
005541ab  MOV ECX,dword ptr [EBP + -0x10]
005541ae  XOR ECX,EBP
005541b0  CALL 0x00686d72
005541b5  MOV ESP,EBP
005541b7  POP EBP
005541b8  RET
