; FUN_00506b90  00506b90
00506b90  PUSH EBP
00506b91  MOV EBP,ESP
00506b93  PUSH -0x1
00506b95  PUSH 0x6a30bc
00506b9a  MOV EAX,FS:[0x0]
00506ba0  PUSH EAX
00506ba1  SUB ESP,0x364
00506ba7  PUSH ESI
00506ba8  MOV EAX,[0x00781870]
00506bad  XOR EAX,EBP
00506baf  PUSH EAX
00506bb0  LEA EAX,[EBP + -0xc]
00506bb3  MOV FS:[0x0],EAX
00506bb9  MOV dword ptr [EBP + 0xfffffdac],0x0
00506bc3  MOV ECX,dword ptr [0x00791364]
00506bc9  CALL 0x0047e420
00506bce  MOV dword ptr [EBP + 0xfffffed8],EAX
00506bd4  FLD1
00506bd6  FSTP double ptr [EBP + -0x74]
00506bd9  MOV ECX,dword ptr [0x007926f8]
00506bdf  CALL 0x004d8a80
00506be4  FIDIV dword ptr [EBP + 0xc]
00506be7  FSTP double ptr [EBP + -0x6c]
00506bea  MOV ECX,dword ptr [0x00791364]
00506bf0  CALL 0x0047d6f0
00506bf5  CMP EAX,0x2
00506bf8  JNZ 0x00506c9a
00506bfe  LEA EAX,[EBP + 0xfffffe28]
00506c04  PUSH EAX
00506c05  MOV ECX,dword ptr [0x007926f8]
00506c0b  CALL 0x004c8210
00506c10  MOV dword ptr [EBP + 0xfffffda8],EAX
00506c16  MOV ECX,dword ptr [EBP + 0xfffffda8]
00506c1c  MOV dword ptr [EBP + 0xfffffda4],ECX
00506c22  MOV dword ptr [EBP + -0x4],0x0
00506c29  PUSH 0x0
00506c2b  PUSH 0x0
00506c2d  PUSH 0x0
00506c2f  PUSH 0x1
00506c31  PUSH 0x1
00506c33  PUSH 0x1
00506c35  PUSH 0x1
00506c37  LEA EDX,[EBP + 0xfffffe24]
00506c3d  PUSH EDX
00506c3e  MOV ECX,dword ptr [EBP + 0xfffffda4]
00506c44  CALL 0x00485940
00506c49  MOV dword ptr [EBP + 0xfffffda0],EAX
00506c4f  MOV EAX,dword ptr [EBP + 0xfffffda0]
00506c55  MOV dword ptr [EBP + 0xfffffd9c],EAX
00506c5b  MOV byte ptr [EBP + -0x4],0x1
00506c5f  LEA ECX,[EBP + 0xfffffe23]
00506c65  PUSH ECX
00506c66  MOV ECX,dword ptr [EBP + 0xfffffd9c]
00506c6c  CALL 0x004a21b0
00506c71  MOV dword ptr [EBP + -0x7c],EAX
00506c74  MOV byte ptr [EBP + -0x4],0x0
00506c78  LEA ECX,[EBP + 0xfffffe24]
00506c7e  CALL 0x004a20f0
00506c83  MOV dword ptr [EBP + -0x4],0xffffffff
00506c8a  LEA ECX,[EBP + 0xfffffe28]
00506c90  CALL 0x00484470
00506c95  JMP 0x00506d31
00506c9a  LEA EDX,[EBP + 0xfffffe18]
00506ca0  PUSH EDX
00506ca1  MOV ECX,dword ptr [0x007926f8]
00506ca7  CALL 0x004c7c40
00506cac  MOV dword ptr [EBP + 0xfffffd98],EAX
00506cb2  MOV EAX,dword ptr [EBP + 0xfffffd98]
00506cb8  MOV dword ptr [EBP + 0xfffffd94],EAX
00506cbe  MOV dword ptr [EBP + -0x4],0x2
00506cc5  PUSH 0x0
00506cc7  PUSH 0x0
00506cc9  PUSH 0x0
00506ccb  PUSH 0x1
00506ccd  PUSH 0x1
00506ccf  PUSH 0x1
00506cd1  PUSH 0x1
00506cd3  LEA ECX,[EBP + 0xfffffe14]
00506cd9  PUSH ECX
00506cda  MOV ECX,dword ptr [EBP + 0xfffffd94]
00506ce0  CALL 0x00485940
00506ce5  MOV dword ptr [EBP + 0xfffffd90],EAX
00506ceb  MOV EDX,dword ptr [EBP + 0xfffffd90]
00506cf1  MOV dword ptr [EBP + 0xfffffd8c],EDX
00506cf7  MOV byte ptr [EBP + -0x4],0x3
00506cfb  LEA EAX,[EBP + 0xfffffe13]
00506d01  PUSH EAX
00506d02  MOV ECX,dword ptr [EBP + 0xfffffd8c]
00506d08  CALL 0x004a21b0
00506d0d  MOV dword ptr [EBP + -0x7c],EAX
00506d10  MOV byte ptr [EBP + -0x4],0x2
00506d14  LEA ECX,[EBP + 0xfffffe14]
00506d1a  CALL 0x004a20f0
00506d1f  MOV dword ptr [EBP + -0x4],0xffffffff
00506d26  LEA ECX,[EBP + 0xfffffe18]
00506d2c  CALL 0x00484470
00506d31  MOV ECX,dword ptr [0x007913c8]
00506d37  PUSH ECX
00506d38  MOV ECX,dword ptr [EBP + -0x7c]
00506d3b  CALL 0x004a1fb0
00506d40  MOVZX EDX,AL
00506d43  TEST EDX,EDX
00506d45  JZ 0x00506d54
00506d47  FLDZ
00506d49  FSTP double ptr [EBP + 0xffffff24]
00506d4f  JMP 0x00506e62
00506d54  MOV EAX,[0x007913e0]
00506d59  PUSH EAX
00506d5a  MOV ECX,dword ptr [EBP + -0x7c]
00506d5d  CALL 0x004a1fb0
00506d62  MOVZX ECX,AL
00506d65  TEST ECX,ECX
00506d67  JZ 0x00506d7a
00506d69  FLD double ptr [0x006b3e38]
00506d6f  FSTP double ptr [EBP + 0xffffff24]
00506d75  JMP 0x00506e62
00506d7a  MOV EDX,dword ptr [0x007913bc]
00506d80  PUSH EDX
00506d81  MOV ECX,dword ptr [EBP + -0x7c]
00506d84  CALL 0x004a1fb0
00506d89  MOVZX EAX,AL
00506d8c  TEST EAX,EAX
00506d8e  JZ 0x00506da1
00506d90  FLD double ptr [0x006be6f8]
00506d96  FSTP double ptr [EBP + 0xffffff24]
00506d9c  JMP 0x00506e62
00506da1  MOV ECX,dword ptr [0x00791400]
00506da7  PUSH ECX
00506da8  MOV ECX,dword ptr [EBP + -0x7c]
00506dab  CALL 0x004a1fb0
00506db0  MOVZX EDX,AL
00506db3  TEST EDX,EDX
00506db5  JZ 0x00506dc8
00506db7  FLD double ptr [0x006b3e48]
00506dbd  FSTP double ptr [EBP + 0xffffff24]
00506dc3  JMP 0x00506e62
00506dc8  MOV EAX,[0x0079138c]
00506dcd  PUSH EAX
00506dce  MOV ECX,dword ptr [EBP + -0x7c]
00506dd1  CALL 0x004a1fb0
00506dd6  MOVZX ECX,AL
00506dd9  TEST ECX,ECX
00506ddb  JZ 0x00506deb
00506ddd  FLD double ptr [0x006b2c38]
00506de3  FSTP double ptr [EBP + 0xffffff24]
00506de9  JMP 0x00506e62
00506deb  MOV EDX,dword ptr [0x007913f4]
00506df1  PUSH EDX
00506df2  MOV ECX,dword ptr [EBP + -0x7c]
00506df5  CALL 0x004a1fb0
00506dfa  MOVZX EAX,AL
00506dfd  TEST EAX,EAX
00506dff  JZ 0x00506e0f
00506e01  FLD double ptr [0x006be708]
00506e07  FSTP double ptr [EBP + 0xffffff24]
00506e0d  JMP 0x00506e62
00506e0f  MOV ECX,dword ptr [0x00791410]
00506e15  PUSH ECX
00506e16  MOV ECX,dword ptr [EBP + -0x7c]
00506e19  CALL 0x004a1fb0
00506e1e  MOVZX EDX,AL
00506e21  TEST EDX,EDX
00506e23  JZ 0x00506e33
00506e25  FLD double ptr [0x006be710]
00506e2b  FSTP double ptr [EBP + 0xffffff24]
00506e31  JMP 0x00506e62
00506e33  MOV EAX,[0x007913f8]
00506e38  PUSH EAX
00506e39  MOV ECX,dword ptr [EBP + -0x7c]
00506e3c  CALL 0x004a1fb0
00506e41  MOVZX ECX,AL
00506e44  TEST ECX,ECX
00506e46  JZ 0x00506e56
00506e48  FLD double ptr [0x006be688]
00506e4e  FSTP double ptr [EBP + 0xffffff24]
00506e54  JMP 0x00506e62
00506e56  FLD double ptr [0x006bcf78]
00506e5c  FSTP double ptr [EBP + 0xffffff24]
00506e62  CMP dword ptr [EBP + 0x8],0x3
00506e66  JNZ 0x00506fab
00506e6c  MOV ECX,dword ptr [0x00791364]
00506e72  CALL 0x0047d6f0
00506e77  CMP EAX,0x2
00506e7a  JNZ 0x00506ed8
00506e7c  FLD double ptr [0x006c1008]
00506e82  FSTP double ptr [EBP + -0x5c]
00506e85  FLD double ptr [0x006c1000]
00506e8b  FSTP double ptr [EBP + -0x54]
00506e8e  FLD double ptr [0x006c0ff8]
00506e94  FSTP double ptr [EBP + -0x4c]
00506e97  FLD double ptr [0x006c0ff0]
00506e9d  FSTP double ptr [EBP + -0x44]
00506ea0  FLD double ptr [0x006c0fe8]
00506ea6  FSTP double ptr [EBP + -0x3c]
00506ea9  FLD double ptr [0x006c0fe0]
00506eaf  FSTP double ptr [EBP + -0x34]
00506eb2  FLD double ptr [0x006c0fd8]
00506eb8  FSTP double ptr [EBP + -0x2c]
00506ebb  FLD double ptr [0x006c0fd0]
00506ec1  FSTP double ptr [EBP + -0x24]
00506ec4  FLD double ptr [0x006c0fc8]
00506eca  FSTP double ptr [EBP + -0x1c]
00506ecd  FLD double ptr [0x006c0fc0]
00506ed3  FSTP double ptr [EBP + -0x14]
00506ed6  JMP 0x00506f2e
00506ed8  FLDZ
00506eda  FSTP double ptr [EBP + -0x5c]
00506edd  FLD double ptr [0x006c0dd0]
00506ee3  FSTP double ptr [EBP + -0x54]
00506ee6  FLD double ptr [0x006c0dc8]
00506eec  FSTP double ptr [EBP + -0x4c]
00506eef  FLD double ptr [0x006c0dc0]
00506ef5  FSTP double ptr [EBP + -0x44]
00506ef8  FLD double ptr [0x006c0db8]
00506efe  FSTP double ptr [EBP + -0x3c]
00506f01  FLD double ptr [0x006c0db0]
00506f07  FSTP double ptr [EBP + -0x34]
00506f0a  FLD double ptr [0x006c0da8]
00506f10  FSTP double ptr [EBP + -0x2c]
00506f13  FLD double ptr [0x006c0da0]
00506f19  FSTP double ptr [EBP + -0x24]
00506f1c  FLD double ptr [0x006c0d98]
00506f22  FSTP double ptr [EBP + -0x1c]
00506f25  FLD double ptr [0x006c0d90]
00506f2b  FSTP double ptr [EBP + -0x14]
00506f2e  FLD double ptr [0x006c0fb8]
00506f34  FSTP double ptr [EBP + 0xffffff34]
00506f3a  FLD double ptr [0x006c0fb0]
00506f40  FSTP double ptr [EBP + 0xffffff3c]
00506f46  FLD double ptr [0x006c0fa8]
00506f4c  FSTP double ptr [EBP + 0xffffff44]
00506f52  FLD double ptr [0x006c0fa0]
00506f58  FSTP double ptr [EBP + 0xffffff4c]
00506f5e  FLD double ptr [0x006c0f98]
00506f64  FSTP double ptr [EBP + 0xffffff54]
00506f6a  FLD double ptr [0x006c0f90]
00506f70  FSTP double ptr [EBP + 0xffffff5c]
00506f76  FLD double ptr [0x006be800]
00506f7c  FSTP double ptr [EBP + 0xffffff64]
00506f82  FLD double ptr [0x006c0f88]
00506f88  FSTP double ptr [EBP + 0xffffff6c]
00506f8e  FLD double ptr [0x006c0f80]
00506f94  FSTP double ptr [EBP + 0xffffff74]
00506f9a  FLD double ptr [0x006c0f78]
00506fa0  FSTP double ptr [EBP + 0xffffff7c]
00506fa6  JMP 0x0050722e
00506fab  CMP dword ptr [EBP + 0x8],0x4
00506faf  JNZ 0x005070f4
00506fb5  MOV ECX,dword ptr [0x00791364]
00506fbb  CALL 0x0047d6f0
00506fc0  CMP EAX,0x2
00506fc3  JNZ 0x00507021
00506fc5  FLD double ptr [0x006c0f70]
00506fcb  FSTP double ptr [EBP + -0x5c]
00506fce  FLD double ptr [0x006c0f68]
00506fd4  FSTP double ptr [EBP + -0x54]
00506fd7  FLD double ptr [0x006c0f60]
00506fdd  FSTP double ptr [EBP + -0x4c]
00506fe0  FLD double ptr [0x006c0f58]
00506fe6  FSTP double ptr [EBP + -0x44]
00506fe9  FLD double ptr [0x006c0f50]
00506fef  FSTP double ptr [EBP + -0x3c]
00506ff2  FLD double ptr [0x006c0f48]
00506ff8  FSTP double ptr [EBP + -0x34]
00506ffb  FLD double ptr [0x006c0f40]
00507001  FSTP double ptr [EBP + -0x2c]
00507004  FLD double ptr [0x006c0f38]
0050700a  FSTP double ptr [EBP + -0x24]
0050700d  FLD double ptr [0x006c0f30]
00507013  FSTP double ptr [EBP + -0x1c]
00507016  FLD double ptr [0x006c0f28]
0050701c  FSTP double ptr [EBP + -0x14]
0050701f  JMP 0x00507077
00507021  FLDZ
00507023  FSTP double ptr [EBP + -0x5c]
00507026  FLD double ptr [0x006c0d38]
0050702c  FSTP double ptr [EBP + -0x54]
0050702f  FLD double ptr [0x006c0d30]
00507035  FSTP double ptr [EBP + -0x4c]
00507038  FLD double ptr [0x006c0d28]
0050703e  FSTP double ptr [EBP + -0x44]
00507041  FLD double ptr [0x006c0d20]
00507047  FSTP double ptr [EBP + -0x3c]
0050704a  FLD double ptr [0x006c0d18]
00507050  FSTP double ptr [EBP + -0x34]
00507053  FLD double ptr [0x006c0d10]
00507059  FSTP double ptr [EBP + -0x2c]
0050705c  FLD double ptr [0x006c0d08]
00507062  FSTP double ptr [EBP + -0x24]
00507065  FLD double ptr [0x006c0d00]
0050706b  FSTP double ptr [EBP + -0x1c]
0050706e  FLD double ptr [0x006c0cf8]
00507074  FSTP double ptr [EBP + -0x14]
00507077  FLD double ptr [0x006be820]
0050707d  FSTP double ptr [EBP + 0xffffff34]
00507083  FLD double ptr [0x006be818]
00507089  FSTP double ptr [EBP + 0xffffff3c]
0050708f  FLD double ptr [0x006be810]
00507095  FSTP double ptr [EBP + 0xffffff44]
0050709b  FLD double ptr [0x006be808]
005070a1  FSTP double ptr [EBP + 0xffffff4c]
005070a7  FLD double ptr [0x006be800]
005070ad  FSTP double ptr [EBP + 0xffffff54]
005070b3  FLD double ptr [0x006be7f8]
005070b9  FSTP double ptr [EBP + 0xffffff5c]
005070bf  FLD double ptr [0x006be7f0]
005070c5  FSTP double ptr [EBP + 0xffffff64]
005070cb  FLD double ptr [0x006be7e8]
005070d1  FSTP double ptr [EBP + 0xffffff6c]
005070d7  FLD double ptr [0x006be7e0]
005070dd  FSTP double ptr [EBP + 0xffffff74]
005070e3  FLD double ptr [0x006be7d8]
005070e9  FSTP double ptr [EBP + 0xffffff7c]
005070ef  JMP 0x0050722e
005070f4  MOV ECX,dword ptr [0x00791364]
005070fa  CALL 0x0047d6f0
005070ff  CMP EAX,0x2
00507102  JNZ 0x00507160
00507104  FLD double ptr [0x006c0f20]
0050710a  FSTP double ptr [EBP + -0x5c]
0050710d  FLD double ptr [0x006c0f18]
00507113  FSTP double ptr [EBP + -0x54]
00507116  FLD double ptr [0x006c0f10]
0050711c  FSTP double ptr [EBP + -0x4c]
0050711f  FLD double ptr [0x006c0f08]
00507125  FSTP double ptr [EBP + -0x44]
00507128  FLD double ptr [0x006c0f00]
0050712e  FSTP double ptr [EBP + -0x3c]
00507131  FLD double ptr [0x006c0ef8]
00507137  FSTP double ptr [EBP + -0x34]
0050713a  FLD double ptr [0x006c0ef0]
00507140  FSTP double ptr [EBP + -0x2c]
00507143  FLD double ptr [0x006c0ee8]
00507149  FSTP double ptr [EBP + -0x24]
0050714c  FLD double ptr [0x006c0ee0]
00507152  FSTP double ptr [EBP + -0x1c]
00507155  FLD double ptr [0x006c0ed8]
0050715b  FSTP double ptr [EBP + -0x14]
0050715e  JMP 0x005071b6
00507160  FLDZ
00507162  FSTP double ptr [EBP + -0x5c]
00507165  FLD double ptr [0x006c0ca0]
0050716b  FSTP double ptr [EBP + -0x54]
0050716e  FLD double ptr [0x006c0c98]
00507174  FSTP double ptr [EBP + -0x4c]
00507177  FLD double ptr [0x006c0c90]
0050717d  FSTP double ptr [EBP + -0x44]
00507180  FLD double ptr [0x006c0c88]
00507186  FSTP double ptr [EBP + -0x3c]
00507189  FLD double ptr [0x006c0c80]
0050718f  FSTP double ptr [EBP + -0x34]
00507192  FLD double ptr [0x006c0c78]
00507198  FSTP double ptr [EBP + -0x2c]
0050719b  FLD double ptr [0x006c0c70]
005071a1  FSTP double ptr [EBP + -0x24]
005071a4  FLD double ptr [0x006c0c68]
005071aa  FSTP double ptr [EBP + -0x1c]
005071ad  FLD double ptr [0x006c0c60]
005071b3  FSTP double ptr [EBP + -0x14]
005071b6  FLD double ptr [0x006be7d0]
005071bc  FSTP double ptr [EBP + 0xffffff34]
005071c2  FLD double ptr [0x006be7c8]
005071c8  FSTP double ptr [EBP + 0xffffff3c]
005071ce  FLD double ptr [0x006be7c0]
005071d4  FSTP double ptr [EBP + 0xffffff44]
005071da  FLD double ptr [0x006be7b8]
005071e0  FSTP double ptr [EBP + 0xffffff4c]
005071e6  FLD double ptr [0x006be7b0]
005071ec  FSTP double ptr [EBP + 0xffffff54]
005071f2  FLD double ptr [0x006be7a8]
005071f8  FSTP double ptr [EBP + 0xffffff5c]
005071fe  FLD double ptr [0x006be7a0]
00507204  FSTP double ptr [EBP + 0xffffff64]
0050720a  FLD double ptr [0x006be798]
00507210  FSTP double ptr [EBP + 0xffffff6c]
00507216  FLD double ptr [0x006be790]
0050721c  FSTP double ptr [EBP + 0xffffff74]
00507222  FLD double ptr [0x006be788]
00507228  FSTP double ptr [EBP + 0xffffff7c]
0050722e  FLD double ptr [EBP + -0x5c]
00507231  FSTP double ptr [EBP + 0xfffffe6c]
00507237  FLD double ptr [EBP + -0x54]
0050723a  FADD double ptr [EBP + 0xfffffe6c]
00507240  FSTP double ptr [EBP + 0xfffffe74]
00507246  FLD double ptr [EBP + -0x4c]
00507249  FADD double ptr [EBP + 0xfffffe74]
0050724f  FSTP double ptr [EBP + 0xfffffe7c]
00507255  FLD double ptr [EBP + -0x44]
00507258  FADD double ptr [EBP + 0xfffffe7c]
0050725e  FSTP double ptr [EBP + 0xfffffe84]
00507264  FLD double ptr [EBP + -0x3c]
00507267  FADD double ptr [EBP + 0xfffffe84]
0050726d  FSTP double ptr [EBP + 0xfffffe8c]
00507273  FLD double ptr [EBP + -0x34]
00507276  FADD double ptr [EBP + 0xfffffe8c]
0050727c  FSTP double ptr [EBP + 0xfffffe94]
00507282  FLD double ptr [EBP + -0x2c]
00507285  FADD double ptr [EBP + 0xfffffe94]
0050728b  FSTP double ptr [EBP + 0xfffffe9c]
00507291  FLD double ptr [EBP + -0x24]
00507294  FADD double ptr [EBP + 0xfffffe9c]
0050729a  FSTP double ptr [EBP + 0xfffffea4]
005072a0  FLD double ptr [EBP + -0x1c]
005072a3  FADD double ptr [EBP + 0xfffffea4]
005072a9  FSTP double ptr [EBP + 0xfffffeac]
005072af  FLD double ptr [EBP + 0xffffff34]
005072b5  FSTP double ptr [EBP + 0xfffffedc]
005072bb  FLD double ptr [EBP + 0xffffff3c]
005072c1  FADD double ptr [EBP + 0xfffffedc]
005072c7  FSTP double ptr [EBP + 0xfffffee4]
005072cd  FLD double ptr [EBP + 0xffffff44]
005072d3  FADD double ptr [EBP + 0xfffffee4]
005072d9  FSTP double ptr [EBP + 0xfffffeec]
005072df  FLD double ptr [EBP + 0xffffff4c]
005072e5  FADD double ptr [EBP + 0xfffffeec]
005072eb  FSTP double ptr [EBP + 0xfffffef4]
005072f1  FLD double ptr [EBP + 0xffffff54]
005072f7  FADD double ptr [EBP + 0xfffffef4]
005072fd  FSTP double ptr [EBP + 0xfffffefc]
00507303  FLD double ptr [EBP + 0xffffff5c]
00507309  FADD double ptr [EBP + 0xfffffefc]
0050730f  FSTP double ptr [EBP + 0xffffff04]
00507315  FLD double ptr [EBP + 0xffffff64]
0050731b  FADD double ptr [EBP + 0xffffff04]
00507321  FSTP double ptr [EBP + 0xffffff0c]
00507327  FLD double ptr [EBP + 0xffffff6c]
0050732d  FADD double ptr [EBP + 0xffffff0c]
00507333  FSTP double ptr [EBP + 0xffffff14]
00507339  FLD double ptr [EBP + 0xffffff74]
0050733f  FADD double ptr [EBP + 0xffffff14]
00507345  FSTP double ptr [EBP + 0xffffff1c]
0050734b  FLD1
0050734d  FSTP double ptr [EBP + 0xfffffe64]
00507353  MOV ECX,dword ptr [0x00791364]
00507359  CALL 0x0047d6f0
0050735e  CMP EAX,0x2
00507361  JNZ 0x00507426
00507367  LEA EDX,[EBP + 0xfffffe08]
0050736d  PUSH EDX
0050736e  MOV ECX,dword ptr [0x007926f8]
00507374  CALL 0x004c8210
00507379  MOV dword ptr [EBP + 0xfffffd88],EAX
0050737f  MOV EAX,dword ptr [EBP + 0xfffffd88]
00507385  MOV dword ptr [EBP + 0xfffffd84],EAX
0050738b  MOV dword ptr [EBP + -0x4],0x4
00507392  PUSH 0x0
00507394  PUSH 0x0
00507396  PUSH 0x0
00507398  PUSH 0x1
0050739a  PUSH 0x1
0050739c  PUSH 0x1
0050739e  PUSH 0x1
005073a0  LEA ECX,[EBP + 0xfffffe04]
005073a6  PUSH ECX
005073a7  MOV ECX,dword ptr [EBP + 0xfffffd84]
005073ad  CALL 0x00485940
005073b2  MOV dword ptr [EBP + 0xfffffd80],EAX
005073b8  MOV EDX,dword ptr [EBP + 0xfffffd80]
005073be  MOV dword ptr [EBP + 0xfffffd7c],EDX
005073c4  MOV byte ptr [EBP + -0x4],0x5
005073c8  MOV EAX,[0x00791418]
005073cd  PUSH EAX
005073ce  LEA ECX,[EBP + 0xfffffe03]
005073d4  PUSH ECX
005073d5  MOV ECX,dword ptr [EBP + 0xfffffd7c]
005073db  CALL 0x004a2160
005073e0  MOV ECX,EAX
005073e2  CALL 0x004a1e10
005073e7  MOV byte ptr [EBP + 0xfffffe12],AL
005073ed  MOV byte ptr [EBP + -0x4],0x4
005073f1  LEA ECX,[EBP + 0xfffffe04]
005073f7  CALL 0x004a20f0
005073fc  MOV dword ptr [EBP + -0x4],0xffffffff
00507403  LEA ECX,[EBP + 0xfffffe08]
00507409  CALL 0x00484470
0050740e  MOVZX EDX,byte ptr [EBP + 0xfffffe12]
00507415  TEST EDX,EDX
00507417  JZ 0x00507421
00507419  FLDZ
0050741b  FSTP double ptr [EBP + 0xfffffe64]
00507421  JMP 0x005074e1
00507426  LEA EAX,[EBP + 0xfffffdf8]
0050742c  PUSH EAX
0050742d  MOV ECX,dword ptr [0x007926f8]
00507433  CALL 0x004c7c40
00507438  MOV dword ptr [EBP + 0xfffffd78],EAX
0050743e  MOV ECX,dword ptr [EBP + 0xfffffd78]
00507444  MOV dword ptr [EBP + 0xfffffd74],ECX
0050744a  MOV dword ptr [EBP + -0x4],0x6
00507451  PUSH 0x0
00507453  PUSH 0x0
00507455  PUSH 0x0
00507457  PUSH 0x1
00507459  PUSH 0x1
0050745b  PUSH 0x1
0050745d  PUSH 0x1
0050745f  LEA EDX,[EBP + 0xfffffdf4]
00507465  PUSH EDX
00507466  MOV ECX,dword ptr [EBP + 0xfffffd74]
0050746c  CALL 0x00485940
00507471  MOV dword ptr [EBP + 0xfffffd70],EAX
00507477  MOV EAX,dword ptr [EBP + 0xfffffd70]
0050747d  MOV dword ptr [EBP + 0xfffffd6c],EAX
00507483  MOV byte ptr [EBP + -0x4],0x7
00507487  MOV ECX,dword ptr [0x00791418]
0050748d  PUSH ECX
0050748e  LEA EDX,[EBP + 0xfffffdf3]
00507494  PUSH EDX
00507495  MOV ECX,dword ptr [EBP + 0xfffffd6c]
0050749b  CALL 0x004a2160
005074a0  MOV ECX,EAX
005074a2  CALL 0x004a1e10
005074a7  MOV byte ptr [EBP + 0xfffffe02],AL
005074ad  MOV byte ptr [EBP + -0x4],0x6
005074b1  LEA ECX,[EBP + 0xfffffdf4]
005074b7  CALL 0x004a20f0
005074bc  MOV dword ptr [EBP + -0x4],0xffffffff
005074c3  LEA ECX,[EBP + 0xfffffdf8]
005074c9  CALL 0x00484470
005074ce  MOVZX EAX,byte ptr [EBP + 0xfffffe02]
005074d5  TEST EAX,EAX
005074d7  JZ 0x005074e1
005074d9  FLDZ
005074db  FSTP double ptr [EBP + 0xfffffe64]
005074e1  MOV ECX,dword ptr [EBP + 0xfffffed8]
005074e7  MOVSX EDX,word ptr [ECX*0x2 + 0x7929d8]
005074ef  MOV EAX,dword ptr [EBP + 0xfffffed8]
005074f5  MOVSX ECX,word ptr [EAX*0x2 + 0x792830]
005074fd  ADD EDX,ECX
005074ff  MOV EAX,dword ptr [EBP + 0xfffffed8]
00507505  MOVSX ECX,word ptr [EAX*0x2 + 0x7920f8]
0050750d  ADD EDX,ECX
0050750f  MOV EAX,dword ptr [EBP + 0xfffffed8]
00507515  MOVSX ECX,word ptr [EAX*0x2 + 0x792820]
0050751d  ADD EDX,ECX
0050751f  MOV EAX,dword ptr [EBP + 0xfffffed8]
00507525  MOVSX ECX,word ptr [EAX*0x2 + 0x792218]
0050752d  ADD EDX,ECX
0050752f  MOV EAX,dword ptr [EBP + 0xfffffed8]
00507535  MOVSX ECX,word ptr [EAX*0x2 + 0x792248]
0050753d  ADD EDX,ECX
0050753f  MOV EAX,dword ptr [EBP + 0xfffffed8]
00507545  MOVSX ECX,word ptr [EAX*0x2 + 0x7925c0]
0050754d  ADD EDX,ECX
0050754f  MOV EAX,dword ptr [EBP + 0xfffffed8]
00507555  MOVSX ECX,word ptr [EAX*0x2 + 0x7926fc]
0050755d  ADD EDX,ECX
0050755f  MOV EAX,dword ptr [EBP + 0xfffffed8]
00507565  MOVSX ECX,word ptr [EAX*0x2 + 0x792f78]
0050756d  ADD EDX,ECX
0050756f  MOV EAX,dword ptr [EBP + 0xfffffed8]
00507575  MOVSX ECX,word ptr [EAX*0x2 + 0x7920e8]
0050757d  ADD EDX,ECX
0050757f  MOV word ptr [EBP + 0xfffffec4],DX
00507586  MOV EDX,dword ptr [EBP + 0xfffffed8]
0050758c  MOVSX EAX,word ptr [EDX*0x2 + 0x7929d8]
00507594  MOV dword ptr [EBP + 0xfffffd68],EAX
0050759a  FILD dword ptr [EBP + 0xfffffd68]
005075a0  FLD1
005075a2  FMULP
005075a4  MOVSX ECX,word ptr [EBP + 0xfffffec4]
005075ab  MOV dword ptr [EBP + 0xfffffd64],ECX
005075b1  FILD dword ptr [EBP + 0xfffffd64]
005075b7  FDIVP
005075b9  FLD1
005075bb  FSUB double ptr [EBP + 0xfffffe6c]
005075c1  MOV EDX,dword ptr [EBP + 0xfffffed8]
005075c7  MOVSX EAX,word ptr [EDX*0x2 + 0x792830]
005075cf  MOV dword ptr [EBP + 0xfffffd60],EAX
005075d5  FILD dword ptr [EBP + 0xfffffd60]
005075db  FMULP
005075dd  MOVSX ECX,word ptr [EBP + 0xfffffec4]
005075e4  MOV dword ptr [EBP + 0xfffffd5c],ECX
005075ea  FILD dword ptr [EBP + 0xfffffd5c]
005075f0  FDIVP
005075f2  FADDP
005075f4  FLD1
005075f6  FSUB double ptr [EBP + 0xfffffe74]
005075fc  MOV EDX,dword ptr [EBP + 0xfffffed8]
00507602  MOVSX EAX,word ptr [EDX*0x2 + 0x7920f8]
0050760a  MOV dword ptr [EBP + 0xfffffd58],EAX
00507610  FILD dword ptr [EBP + 0xfffffd58]
00507616  FMULP
00507618  MOVSX ECX,word ptr [EBP + 0xfffffec4]
0050761f  MOV dword ptr [EBP + 0xfffffd54],ECX
00507625  FILD dword ptr [EBP + 0xfffffd54]
0050762b  FDIVP
0050762d  FADDP
0050762f  FLD1
00507631  FSUB double ptr [EBP + 0xfffffe7c]
00507637  MOV EDX,dword ptr [EBP + 0xfffffed8]
0050763d  MOVSX EAX,word ptr [EDX*0x2 + 0x792820]
00507645  MOV dword ptr [EBP + 0xfffffd50],EAX
0050764b  FILD dword ptr [EBP + 0xfffffd50]
00507651  FMULP
00507653  MOVSX ECX,word ptr [EBP + 0xfffffec4]
0050765a  MOV dword ptr [EBP + 0xfffffd4c],ECX
00507660  FILD dword ptr [EBP + 0xfffffd4c]
00507666  FDIVP
00507668  FADDP
0050766a  FLD1
0050766c  FSUB double ptr [EBP + 0xfffffe84]
00507672  MOV EDX,dword ptr [EBP + 0xfffffed8]
00507678  MOVSX EAX,word ptr [EDX*0x2 + 0x792218]
00507680  MOV dword ptr [EBP + 0xfffffd48],EAX
00507686  FILD dword ptr [EBP + 0xfffffd48]
0050768c  FMULP
0050768e  MOVSX ECX,word ptr [EBP + 0xfffffec4]
00507695  MOV dword ptr [EBP + 0xfffffd44],ECX
0050769b  FILD dword ptr [EBP + 0xfffffd44]
005076a1  FDIVP
005076a3  FADDP
005076a5  FLD1
005076a7  FSUB double ptr [EBP + 0xfffffe8c]
005076ad  MOV EDX,dword ptr [EBP + 0xfffffed8]
005076b3  MOVSX EAX,word ptr [EDX*0x2 + 0x792248]
005076bb  MOV dword ptr [EBP + 0xfffffd40],EAX
005076c1  FILD dword ptr [EBP + 0xfffffd40]
005076c7  FMULP
005076c9  MOVSX ECX,word ptr [EBP + 0xfffffec4]
005076d0  MOV dword ptr [EBP + 0xfffffd3c],ECX
005076d6  FILD dword ptr [EBP + 0xfffffd3c]
005076dc  FDIVP
005076de  FADDP
005076e0  FLD double ptr [EBP + 0xffffff24]
005076e6  FMUL double ptr [EBP + -0x2c]
005076e9  FLD1
005076eb  FSUBRP
005076ed  FSUB double ptr [EBP + 0xfffffe94]
005076f3  FMUL double ptr [EBP + 0xfffffe64]
005076f9  MOV EDX,dword ptr [EBP + 0xfffffed8]
005076ff  MOVSX EAX,word ptr [EDX*0x2 + 0x7925c0]
00507707  MOV dword ptr [EBP + 0xfffffd38],EAX
0050770d  FILD dword ptr [EBP + 0xfffffd38]
00507713  FMULP
00507715  MOVSX ECX,word ptr [EBP + 0xfffffec4]
0050771c  MOV dword ptr [EBP + 0xfffffd34],ECX
00507722  FILD dword ptr [EBP + 0xfffffd34]
00507728  FDIVP
0050772a  FADDP
0050772c  FSTP double ptr [EBP + 0xfffffeb4]
00507732  MOV ECX,dword ptr [0x00791364]
00507738  CALL 0x0047d6f0
0050773d  CMP EAX,0x2
00507740  JNZ 0x00507805
00507746  LEA EDX,[EBP + 0xfffffde8]
0050774c  PUSH EDX
0050774d  MOV ECX,dword ptr [0x007926f8]
00507753  CALL 0x004c8210
00507758  MOV dword ptr [EBP + 0xfffffd30],EAX
0050775e  MOV EAX,dword ptr [EBP + 0xfffffd30]
00507764  MOV dword ptr [EBP + 0xfffffd2c],EAX
0050776a  MOV dword ptr [EBP + -0x4],0x8
00507771  PUSH 0x0
00507773  PUSH 0x0
00507775  PUSH 0x0
00507777  PUSH 0x1
00507779  PUSH 0x1
0050777b  PUSH 0x1
0050777d  PUSH 0x1
0050777f  LEA ECX,[EBP + 0xfffffde4]
00507785  PUSH ECX
00507786  MOV ECX,dword ptr [EBP + 0xfffffd2c]
0050778c  CALL 0x00485940
00507791  MOV dword ptr [EBP + 0xfffffd28],EAX
00507797  MOV EDX,dword ptr [EBP + 0xfffffd28]
0050779d  MOV dword ptr [EBP + 0xfffffd24],EDX
005077a3  MOV byte ptr [EBP + -0x4],0x9
005077a7  MOV EAX,[0x00791418]
005077ac  PUSH EAX
005077ad  LEA ECX,[EBP + 0xfffffde3]
005077b3  PUSH ECX
005077b4  MOV ECX,dword ptr [EBP + 0xfffffd24]
005077ba  CALL 0x004a2160
005077bf  MOV ECX,EAX
005077c1  CALL 0x004a1ed0
005077c6  MOV byte ptr [EBP + 0xfffffdf2],AL
005077cc  MOV byte ptr [EBP + -0x4],0x8
005077d0  LEA ECX,[EBP + 0xfffffde4]
005077d6  CALL 0x004a20f0
005077db  MOV dword ptr [EBP + -0x4],0xffffffff
005077e2  LEA ECX,[EBP + 0xfffffde8]
005077e8  CALL 0x00484470
005077ed  MOVZX EDX,byte ptr [EBP + 0xfffffdf2]
005077f4  TEST EDX,EDX
005077f6  JZ 0x00507800
005077f8  FLDZ
005077fa  FSTP double ptr [EBP + 0xfffffeb4]
00507800  JMP 0x005078c0
00507805  LEA EAX,[EBP + 0xfffffdd8]
0050780b  PUSH EAX
0050780c  MOV ECX,dword ptr [0x007926f8]
00507812  CALL 0x004c7c40
00507817  MOV dword ptr [EBP + 0xfffffd20],EAX
0050781d  MOV ECX,dword ptr [EBP + 0xfffffd20]
00507823  MOV dword ptr [EBP + 0xfffffd1c],ECX
00507829  MOV dword ptr [EBP + -0x4],0xa
00507830  PUSH 0x0
00507832  PUSH 0x0
00507834  PUSH 0x0
00507836  PUSH 0x1
00507838  PUSH 0x1
0050783a  PUSH 0x1
0050783c  PUSH 0x1
0050783e  LEA EDX,[EBP + 0xfffffdd4]
00507844  PUSH EDX
00507845  MOV ECX,dword ptr [EBP + 0xfffffd1c]
0050784b  CALL 0x00485940
00507850  MOV dword ptr [EBP + 0xfffffd18],EAX
00507856  MOV EAX,dword ptr [EBP + 0xfffffd18]
0050785c  MOV dword ptr [EBP + 0xfffffd14],EAX
00507862  MOV byte ptr [EBP + -0x4],0xb
00507866  MOV ECX,dword ptr [0x00791418]
0050786c  PUSH ECX
0050786d  LEA EDX,[EBP + 0xfffffdd3]
00507873  PUSH EDX
00507874  MOV ECX,dword ptr [EBP + 0xfffffd14]
0050787a  CALL 0x004a2160
0050787f  MOV ECX,EAX
00507881  CALL 0x004a1ed0
00507886  MOV byte ptr [EBP + 0xfffffde2],AL
0050788c  MOV byte ptr [EBP + -0x4],0xa
00507890  LEA ECX,[EBP + 0xfffffdd4]
00507896  CALL 0x004a20f0
0050789b  MOV dword ptr [EBP + -0x4],0xffffffff
005078a2  LEA ECX,[EBP + 0xfffffdd8]
005078a8  CALL 0x00484470
005078ad  MOVZX EAX,byte ptr [EBP + 0xfffffde2]
005078b4  TEST EAX,EAX
005078b6  JZ 0x005078c0
005078b8  FLDZ
005078ba  FSTP double ptr [EBP + 0xfffffeb4]
005078c0  MOV ECX,dword ptr [0x00791364]
005078c6  CALL 0x0047d770
005078cb  TEST EAX,EAX
005078cd  JNZ 0x00507c1f
005078d3  MOV ECX,dword ptr [EBP + 0xfffffed8]
005078d9  MOVSX EDX,word ptr [ECX*0x2 + 0x7925d0]
005078e1  MOV dword ptr [EBP + 0xfffffd10],EDX
005078e7  FILD dword ptr [EBP + 0xfffffd10]
005078ed  FLD1
005078ef  FMULP
005078f1  MOVSX EAX,word ptr [EBP + 0xfffffec4]
005078f8  MOV dword ptr [EBP + 0xfffffd0c],EAX
005078fe  FILD dword ptr [EBP + 0xfffffd0c]
00507904  FDIVP
00507906  FLD1
00507908  FSUB double ptr [EBP + 0xfffffedc]
0050790e  MOV ECX,dword ptr [EBP + 0xfffffed8]
00507914  MOVSX EDX,word ptr [ECX*0x2 + 0x792810]
0050791c  MOV dword ptr [EBP + 0xfffffd08],EDX
00507922  FILD dword ptr [EBP + 0xfffffd08]
00507928  FMULP
0050792a  MOVSX EAX,word ptr [EBP + 0xfffffec4]
00507931  MOV dword ptr [EBP + 0xfffffd04],EAX
00507937  FILD dword ptr [EBP + 0xfffffd04]
0050793d  FDIVP
0050793f  FADDP
00507941  FLD1
00507943  FSUB double ptr [EBP + 0xfffffee4]
00507949  MOV ECX,dword ptr [EBP + 0xfffffed8]
0050794f  MOVSX EDX,word ptr [ECX*0x2 + 0x792208]
00507957  MOV dword ptr [EBP + 0xfffffd00],EDX
0050795d  FILD dword ptr [EBP + 0xfffffd00]
00507963  FMULP
00507965  MOVSX EAX,word ptr [EBP + 0xfffffec4]
0050796c  MOV dword ptr [EBP + 0xfffffcfc],EAX
00507972  FILD dword ptr [EBP + 0xfffffcfc]
00507978  FDIVP
0050797a  FADDP
0050797c  FLD1
0050797e  FSUB double ptr [EBP + 0xfffffeec]
00507984  MOV ECX,dword ptr [EBP + 0xfffffed8]
0050798a  MOVSX EDX,word ptr [ECX*0x2 + 0x7929a0]
00507992  MOV dword ptr [EBP + 0xfffffcf8],EDX
00507998  FILD dword ptr [EBP + 0xfffffcf8]
0050799e  FMULP
005079a0  MOVSX EAX,word ptr [EBP + 0xfffffec4]
005079a7  MOV dword ptr [EBP + 0xfffffcf4],EAX
005079ad  FILD dword ptr [EBP + 0xfffffcf4]
005079b3  FDIVP
005079b5  FADDP
005079b7  FLD1
005079b9  FSUB double ptr [EBP + 0xfffffef4]
005079bf  MOV ECX,dword ptr [EBP + 0xfffffed8]
005079c5  MOVSX EDX,word ptr [ECX*0x2 + 0x791ec8]
005079cd  MOV dword ptr [EBP + 0xfffffcf0],EDX
005079d3  FILD dword ptr [EBP + 0xfffffcf0]
005079d9  FMULP
005079db  MOVSX EAX,word ptr [EBP + 0xfffffec4]
005079e2  MOV dword ptr [EBP + 0xfffffcec],EAX
005079e8  FILD dword ptr [EBP + 0xfffffcec]
005079ee  FDIVP
005079f0  FADDP
005079f2  FSTP double ptr [EBP + 0xfffffebc]
005079f8  CMP dword ptr [EBP + 0x8],0x5
005079fc  JL 0x00507b64
00507a02  LEA ECX,[EBP + 0xfffffdc8]
00507a08  PUSH ECX
00507a09  MOV ECX,dword ptr [0x007926f8]
00507a0f  CALL 0x004c7c40
00507a14  MOV dword ptr [EBP + 0xfffffce8],EAX
00507a1a  MOV EDX,dword ptr [EBP + 0xfffffce8]
00507a20  MOV dword ptr [EBP + 0xfffffce4],EDX
00507a26  MOV dword ptr [EBP + -0x4],0xc
00507a2d  MOV EAX,dword ptr [EBP + 0xfffffdac]
00507a33  OR EAX,0x1
00507a36  MOV dword ptr [EBP + 0xfffffdac],EAX
00507a3c  PUSH 0x0
00507a3e  PUSH 0x0
00507a40  PUSH 0x0
00507a42  PUSH 0x0
00507a44  PUSH 0x1
00507a46  PUSH 0x0
00507a48  PUSH 0x0
00507a4a  LEA ECX,[EBP + 0xfffffdc4]
00507a50  PUSH ECX
00507a51  MOV ECX,dword ptr [EBP + 0xfffffce4]
00507a57  CALL 0x00485940
00507a5c  MOV dword ptr [EBP + 0xfffffce0],EAX
00507a62  MOV EDX,dword ptr [EBP + 0xfffffce0]
00507a68  MOV dword ptr [EBP + 0xfffffcdc],EDX
00507a6e  MOV dword ptr [EBP + -0x4],0xd
00507a75  MOV EAX,dword ptr [EBP + 0xfffffdac]
00507a7b  OR EAX,0x2
00507a7e  MOV dword ptr [EBP + 0xfffffdac],EAX
00507a84  MOV ECX,dword ptr [0x00791390]
00507a8a  PUSH ECX
00507a8b  LEA EDX,[EBP + 0xfffffdc3]
00507a91  PUSH EDX
00507a92  MOV ECX,dword ptr [EBP + 0xfffffcdc]
00507a98  CALL 0x004a2160
00507a9d  MOV ECX,EAX
00507a9f  CALL 0x004a1e10
00507aa4  MOVZX EAX,AL
00507aa7  TEST EAX,EAX
00507aa9  JZ 0x00507b64
00507aaf  LEA ECX,[EBP + 0xfffffdb8]
00507ab5  PUSH ECX
00507ab6  MOV ECX,dword ptr [0x007926f8]
00507abc  CALL 0x004c7c40
00507ac1  MOV dword ptr [EBP + 0xfffffcd8],EAX
00507ac7  MOV EDX,dword ptr [EBP + 0xfffffcd8]
00507acd  MOV dword ptr [EBP + 0xfffffcd4],EDX
00507ad3  MOV dword ptr [EBP + -0x4],0xe
00507ada  MOV EAX,dword ptr [EBP + 0xfffffdac]
00507ae0  OR EAX,0x4
00507ae3  MOV dword ptr [EBP + 0xfffffdac],EAX
00507ae9  PUSH 0x0
00507aeb  PUSH 0x0
00507aed  PUSH 0x0
00507aef  PUSH 0x0
00507af1  PUSH 0x1
00507af3  PUSH 0x0
00507af5  PUSH 0x0
00507af7  LEA ECX,[EBP + 0xfffffdb4]
00507afd  PUSH ECX
00507afe  MOV ECX,dword ptr [EBP + 0xfffffcd4]
00507b04  CALL 0x00485940
00507b09  MOV dword ptr [EBP + 0xfffffcd0],EAX
00507b0f  MOV EDX,dword ptr [EBP + 0xfffffcd0]
00507b15  MOV dword ptr [EBP + 0xfffffccc],EDX
00507b1b  MOV dword ptr [EBP + -0x4],0xf
00507b22  MOV EAX,dword ptr [EBP + 0xfffffdac]
00507b28  OR EAX,0x8
00507b2b  MOV dword ptr [EBP + 0xfffffdac],EAX
00507b31  MOV ECX,dword ptr [0x007913f4]
00507b37  PUSH ECX
00507b38  LEA EDX,[EBP + 0xfffffdb3]
00507b3e  PUSH EDX
00507b3f  MOV ECX,dword ptr [EBP + 0xfffffccc]
00507b45  CALL 0x004a21b0
00507b4a  MOV ECX,EAX
00507b4c  CALL 0x004a20a0
00507b51  MOVZX EAX,AL
00507b54  TEST EAX,EAX
00507b56  JZ 0x00507b64
00507b58  MOV dword ptr [EBP + 0xfffffcc8],0x1
00507b62  JMP 0x00507b6e
00507b64  MOV dword ptr [EBP + 0xfffffcc8],0x0
00507b6e  MOV CL,byte ptr [EBP + 0xfffffcc8]
00507b74  MOV byte ptr [EBP + 0xfffffdd2],CL
00507b7a  MOV dword ptr [EBP + -0x4],0xe
00507b81  MOV EDX,dword ptr [EBP + 0xfffffdac]
00507b87  AND EDX,0x8
00507b8a  JZ 0x00507b9e
00507b8c  AND dword ptr [EBP + 0xfffffdac],0xfffffff7
00507b93  LEA ECX,[EBP + 0xfffffdb4]
00507b99  CALL 0x004a20f0
00507b9e  MOV dword ptr [EBP + -0x4],0xd
00507ba5  MOV EAX,dword ptr [EBP + 0xfffffdac]
00507bab  AND EAX,0x4
00507bae  JZ 0x00507bc2
00507bb0  AND dword ptr [EBP + 0xfffffdac],0xfffffffb
00507bb7  LEA ECX,[EBP + 0xfffffdb8]
00507bbd  CALL 0x00484470
00507bc2  MOV dword ptr [EBP + -0x4],0xc
00507bc9  MOV ECX,dword ptr [EBP + 0xfffffdac]
00507bcf  AND ECX,0x2
00507bd2  JZ 0x00507be6
00507bd4  AND dword ptr [EBP + 0xfffffdac],0xfffffffd
00507bdb  LEA ECX,[EBP + 0xfffffdc4]
00507be1  CALL 0x004a20f0
00507be6  MOV dword ptr [EBP + -0x4],0xffffffff
00507bed  MOV EDX,dword ptr [EBP + 0xfffffdac]
00507bf3  AND EDX,0x1
00507bf6  JZ 0x00507c0a
00507bf8  AND dword ptr [EBP + 0xfffffdac],0xfffffffe
00507bff  LEA ECX,[EBP + 0xfffffdc8]
00507c05  CALL 0x00484470
00507c0a  MOVZX EAX,byte ptr [EBP + 0xfffffdd2]
00507c11  TEST EAX,EAX
00507c13  JZ 0x00507c1d
00507c15  FLDZ
00507c17  FSTP double ptr [EBP + 0xfffffebc]
00507c1d  JMP 0x00507c27
00507c1f  FLDZ
00507c21  FSTP double ptr [EBP + 0xfffffebc]
00507c27  MOV ECX,dword ptr [EBP + 0xfffffed8]
00507c2d  FLD1
00507c2f  FSTP double ptr [ECX*0x8 + 0x792358]
00507c36  MOV EDX,dword ptr [EBP + 0xfffffed8]
00507c3c  FLD1
00507c3e  FSTP double ptr [EDX*0x8 + 0x792840]
00507c45  MOV word ptr [EBP + 0xfffffec8],0x0
00507c4e  JMP 0x00507c62
00507c50  MOV AX,word ptr [EBP + 0xfffffec8]
00507c57  ADD AX,0x1
00507c5b  MOV word ptr [EBP + 0xfffffec8],AX
00507c62  MOVSX ESI,word ptr [EBP + 0xfffffec8]
00507c69  MOV ECX,dword ptr [0x00791364]
00507c6f  CALL 0x0047f950
00507c74  CMP ESI,EAX
00507c76  JGE 0x005087b9
00507c7c  MOVSX ECX,word ptr [EBP + 0xfffffec8]
00507c83  CMP ECX,dword ptr [EBP + 0xfffffed8]
00507c89  JNZ 0x00507c8d
00507c8b  JMP 0x00507c50
00507c8d  MOVSX EDX,word ptr [EBP + 0xfffffec8]
00507c94  PUSH EDX
00507c95  MOV ECX,dword ptr [0x00791364]
00507c9b  CALL 0x0047e390
00507ca0  MOV ECX,EAX
00507ca2  CALL 0x004c7010
00507ca7  CMP EAX,0x1
00507caa  JNZ 0x005087b4
00507cb0  FLDZ
00507cb2  FSTP double ptr [EBP + 0xfffffe4c]
00507cb8  FLDZ
00507cba  FSTP double ptr [EBP + 0xfffffe5c]
00507cc0  MOV AX,word ptr [EBP + 0xc]
00507cc4  PUSH EAX
00507cc5  MOV CX,word ptr [EBP + 0xfffffec8]
00507ccc  PUSH ECX
00507ccd  MOV ECX,dword ptr [0x007926f8]
00507cd3  CALL 0x004d9c90
00507cd8  FSTP double ptr [EBP + 0xfffffe54]
00507cde  MOV EDX,dword ptr [EBP + 0xfffffed8]
00507ce4  SHL EDX,0x6
00507ce7  MOVSX EAX,word ptr [EBP + 0xfffffec8]
00507cee  FLD double ptr [EBP + 0xfffffe54]
00507cf4  FMUL double ptr [EDX + EAX*0x8 + 0x7929e8]
00507cfb  FCOMP double ptr [EBP + -0x6c]
00507cfe  FNSTSW AX
00507d00  TEST AH,0x41
00507d03  JNZ 0x00507d11
00507d05  MOV byte ptr [EBP + 0xfffffe4b],0x1
00507d0c  JMP 0x00507f5e
00507d11  MOVSX ECX,word ptr [EBP + 0xfffffec8]
00507d18  PUSH ECX
00507d19  MOV ECX,dword ptr [0x00791364]
00507d1f  CALL 0x0047e390
00507d24  MOV ECX,EAX
00507d26  CALL 0x004c7050
00507d2b  MOV dword ptr [EBP + 0xfffffe3c],EAX
00507d31  MOV DX,word ptr [EBP + 0xfffffe3c]
00507d38  PUSH EDX
00507d39  MOV ECX,dword ptr [0x00791364]
00507d3f  ADD ECX,0x38
00507d42  CALL 0x004f6880
00507d47  MOV word ptr [EBP + 0xfffffe34],AX
00507d4e  MOV AX,word ptr [EBP + 0xfffffe3c]
00507d55  PUSH EAX
00507d56  MOV ECX,dword ptr [0x00791364]
00507d5c  ADD ECX,0x38
00507d5f  CALL 0x004f6930
00507d64  MOV word ptr [EBP + 0xfffffe38],AX
00507d6b  MOV CX,word ptr [EBP + 0xfffffe3c]
00507d72  PUSH ECX
00507d73  MOV ECX,dword ptr [0x00791364]
00507d79  ADD ECX,0x38
00507d7c  CALL 0x004f6a90
00507d81  MOVSX EDX,AX
00507d84  MOVSX EAX,word ptr [EBP + 0xfffffe34]
00507d8b  SUB EDX,EAX
00507d8d  MOV word ptr [EBP + 0xfffffe30],DX
00507d94  MOV CX,word ptr [EBP + 0xfffffe3c]
00507d9b  PUSH ECX
00507d9c  MOV ECX,dword ptr [0x00791364]
00507da2  ADD ECX,0x38
00507da5  CALL 0x004f6b20
00507daa  MOVSX EDX,AX
00507dad  MOVSX EAX,word ptr [EBP + 0xfffffe38]
00507db4  SUB EDX,EAX
00507db6  MOV word ptr [EBP + 0xfffffe40],DX
00507dbd  MOVSX ECX,word ptr [EBP + 0xfffffe34]
00507dc4  TEST ECX,ECX
00507dc6  JGE 0x00507ddf
00507dc8  PUSH 0x6ca
00507dcd  PUSH 0x6c0c40
00507dd2  PUSH 0x6bc25c
00507dd7  CALL 0x005e9f20
00507ddc  ADD ESP,0xc
00507ddf  MOVSX EAX,word ptr [EBP + 0xfffffe38]
00507de6  TEST EAX,EAX
00507de8  JGE 0x00507e01
00507dea  PUSH 0x6cb
00507def  PUSH 0x6c0c40
00507df4  PUSH 0x6bc248
00507df9  CALL 0x005e9f20
00507dfe  ADD ESP,0xc
00507e01  MOVSX EDX,word ptr [EBP + 0xfffffe30]
00507e08  TEST EDX,EDX
00507e0a  JGE 0x00507e23
00507e0c  PUSH 0x6cc
00507e11  PUSH 0x6c0c40
00507e16  PUSH 0x6bc220
00507e1b  CALL 0x005e9f20
00507e20  ADD ESP,0xc
00507e23  MOVSX ECX,word ptr [EBP + 0xfffffe40]
00507e2a  TEST ECX,ECX
00507e2c  JGE 0x00507e45
00507e2e  PUSH 0x6cd
00507e33  PUSH 0x6c0c40
00507e38  PUSH 0x6bc210
00507e3d  CALL 0x005e9f20
00507e42  ADD ESP,0xc
00507e45  MOV byte ptr [EBP + 0xfffffe4b],0x0
00507e4c  MOV ECX,dword ptr [0x007926f8]
00507e52  CALL 0x004d8ab0
00507e57  MOVSX EAX,word ptr [EBP + 0xfffffe30]
00507e5e  MOV dword ptr [EBP + 0xfffffcc4],EAX
00507e64  FILD dword ptr [EBP + 0xfffffcc4]
00507e6a  FMULP
00507e6c  FLD1
00507e6e  FADDP
00507e70  MOV ECX,dword ptr [0x007926f8]
00507e76  FSTP double ptr [EBP + 0xfffffcbc]
00507e7c  CALL 0x004d8b80
00507e81  MOVSX ECX,word ptr [EBP + 0xfffffe40]
00507e88  MOV dword ptr [EBP + 0xfffffcb8],ECX
00507e8e  FILD dword ptr [EBP + 0xfffffcb8]
00507e94  FMULP
00507e96  FADD double ptr [EBP + 0xfffffcbc]
00507e9c  MOV ECX,dword ptr [0x007926f8]
00507ea2  FSTP double ptr [EBP + 0xfffffcb0]
00507ea8  CALL 0x004d8c50
00507ead  MOVSX EDX,word ptr [EBP + 0xfffffe34]
00507eb4  MOV dword ptr [EBP + 0xfffffcac],EDX
00507eba  FILD dword ptr [EBP + 0xfffffcac]
00507ec0  FMULP
00507ec2  FADD double ptr [EBP + 0xfffffcb0]
00507ec8  MOV ECX,dword ptr [0x007926f8]
00507ece  FSTP double ptr [EBP + 0xfffffca4]
00507ed4  CALL 0x004d8d20
00507ed9  MOVSX EAX,word ptr [EBP + 0xfffffe38]
00507ee0  MOV dword ptr [EBP + 0xfffffca0],EAX
00507ee6  FILD dword ptr [EBP + 0xfffffca0]
00507eec  FMULP
00507eee  FADD double ptr [EBP + 0xfffffca4]
00507ef4  FSTP double ptr [EBP + 0xfffffe4c]
00507efa  MOV ECX,dword ptr [0x00791364]
00507f00  CALL 0x0047d770
00507f05  CMP EAX,0x3
00507f08  JNZ 0x00507f28
00507f0a  FLD double ptr [EBP + 0xfffffe4c]
00507f10  FSUB double ptr [0x006b2c48]
00507f16  FMUL double ptr [0x006c0ed0]
00507f1c  FLD1
00507f1e  FADDP
00507f20  FSTP double ptr [EBP + 0xfffffe5c]
00507f26  JMP 0x00507f5e
00507f28  MOV ECX,dword ptr [0x00791364]
00507f2e  CALL 0x0047d770
00507f33  CMP EAX,0x4
00507f36  JNZ 0x00507f52
00507f38  FLD double ptr [EBP + 0xfffffe4c]
00507f3e  FSUB double ptr [0x006b2c48]
00507f44  FADD ST0,ST0
00507f46  FLD1
00507f48  FADDP
00507f4a  FSTP double ptr [EBP + 0xfffffe5c]
00507f50  JMP 0x00507f5e
00507f52  FLD double ptr [EBP + 0xfffffe4c]
00507f58  FSTP double ptr [EBP + 0xfffffe5c]
00507f5e  MOV ECX,dword ptr [EBP + 0xfffffed8]
00507f64  SHL ECX,0x5
00507f67  MOVSX EDX,word ptr [EBP + 0xfffffec8]
00507f6e  MOV EAX,dword ptr [EBP + 0xfffffed8]
00507f74  SHL EAX,0x5
00507f77  MOVSX ESI,word ptr [EBP + 0xfffffec8]
00507f7e  MOV ECX,dword ptr [ECX + EDX*0x4 + 0x792710]
00507f85  ADD ECX,dword ptr [EAX + ESI*0x4 + 0x7924b0]
00507f8c  MOV EDX,dword ptr [EBP + 0xfffffed8]
00507f92  SHL EDX,0x5
00507f95  MOVSX EAX,word ptr [EBP + 0xfffffec8]
00507f9c  ADD ECX,dword ptr [EDX + EAX*0x4 + 0x791fd8]
00507fa3  MOV EDX,dword ptr [EBP + 0xfffffed8]
00507fa9  SHL EDX,0x5
00507fac  MOVSX EAX,word ptr [EBP + 0xfffffec8]
00507fb3  ADD ECX,dword ptr [EDX + EAX*0x4 + 0x7925f0]
00507fba  MOV EDX,dword ptr [EBP + 0xfffffed8]
00507fc0  SHL EDX,0x5
00507fc3  MOVSX EAX,word ptr [EBP + 0xfffffec8]
00507fca  ADD ECX,dword ptr [EDX + EAX*0x4 + 0x792e78]
00507fd1  MOV EDX,dword ptr [EBP + 0xfffffed8]
00507fd7  SHL EDX,0x5
00507fda  MOVSX EAX,word ptr [EBP + 0xfffffec8]
00507fe1  ADD ECX,dword ptr [EDX + EAX*0x4 + 0x792880]
00507fe8  MOV EDX,dword ptr [EBP + 0xfffffed8]
00507fee  SHL EDX,0x5
00507ff1  MOVSX EAX,word ptr [EBP + 0xfffffec8]
00507ff8  ADD ECX,dword ptr [EDX + EAX*0x4 + 0x792258]
00507fff  MOV EDX,dword ptr [EBP + 0xfffffed8]
00508005  SHL EDX,0x5
00508008  MOVSX EAX,word ptr [EBP + 0xfffffec8]
0050800f  ADD ECX,dword ptr [EDX + EAX*0x4 + 0x792ce8]
00508016  MOV EDX,dword ptr [EBP + 0xfffffed8]
0050801c  SHL EDX,0x5
0050801f  MOVSX EAX,word ptr [EBP + 0xfffffec8]
00508026  ADD ECX,dword ptr [EDX + EAX*0x4 + 0x792398]
0050802d  MOV dword ptr [EBP + 0xfffffe44],ECX
00508033  MOVZX ECX,byte ptr [EBP + 0xfffffe4b]
0050803a  TEST ECX,ECX
0050803c  JZ 0x00508379
00508042  FLD double ptr [0x006b2c38]
00508048  FMUL double ptr [EBP + 0xfffffeb4]
0050804e  FLD1
00508050  FADDP
00508052  FLD double ptr [0x006b2c38]
00508058  FMUL double ptr [EBP + 0xfffffebc]
0050805e  FADDP
00508060  MOV EDX,dword ptr [EBP + 0xfffffed8]
00508066  SHL EDX,0x5
00508069  MOVSX EAX,word ptr [EBP + 0xfffffec8]
00508070  FILD dword ptr [EDX + EAX*0x4 + 0x792710]
00508077  FIDIV dword ptr [EBP + 0xfffffe44]
0050807d  FLD1
0050807f  FMULP
00508081  FSUBP
00508083  MOV ECX,dword ptr [EBP + 0xfffffed8]
00508089  SHL ECX,0x5
0050808c  MOVSX EDX,word ptr [EBP + 0xfffffec8]
00508093  FILD dword ptr [ECX + EDX*0x4 + 0x7925f0]
0050809a  FIDIV dword ptr [EBP + 0xfffffe44]
005080a0  FMUL double ptr [0x006c0ec8]
005080a6  FSUBP
005080a8  MOV EAX,dword ptr [EBP + 0xfffffed8]
005080ae  SHL EAX,0x5
005080b1  MOVSX ECX,word ptr [EBP + 0xfffffec8]
005080b8  FILD dword ptr [EAX + ECX*0x4 + 0x7924b0]
005080bf  FIDIV dword ptr [EBP + 0xfffffe44]
005080c5  FMUL double ptr [0x006c0ec8]
005080cb  FSUBP
005080cd  MOV EDX,dword ptr [EBP + 0xfffffed8]
005080d3  SHL EDX,0x5
005080d6  MOVSX EAX,word ptr [EBP + 0xfffffec8]
005080dd  FILD dword ptr [EDX + EAX*0x4 + 0x791fd8]
005080e4  FIDIV dword ptr [EBP + 0xfffffe44]
005080ea  FMUL double ptr [0x006be670]
005080f0  FSUBP
005080f2  MOV ECX,dword ptr [EBP + 0xfffffed8]
005080f8  SHL ECX,0x5
005080fb  MOVSX EDX,word ptr [EBP + 0xfffffec8]
00508102  FILD dword ptr [ECX + EDX*0x4 + 0x792258]
00508109  FIDIV dword ptr [EBP + 0xfffffe44]
0050810f  FMUL double ptr [0x006be670]
00508115  FSUBP
00508117  MOV EAX,dword ptr [EBP + 0xfffffed8]
0050811d  SHL EAX,0x5
00508120  MOVSX ECX,word ptr [EBP + 0xfffffec8]
00508127  FILD dword ptr [EAX + ECX*0x4 + 0x792e78]
0050812e  FIDIV dword ptr [EBP + 0xfffffe44]
00508134  FMUL double ptr [0x006b3e40]
0050813a  FSUBP
0050813c  MOV EDX,dword ptr [EBP + 0xfffffed8]
00508142  SHL EDX,0x5
00508145  MOVSX EAX,word ptr [EBP + 0xfffffec8]
0050814c  FILD dword ptr [EDX + EAX*0x4 + 0x792ce8]
00508153  FIDIV dword ptr [EBP + 0xfffffe44]
00508159  FMUL double ptr [0x006bf7d8]
0050815f  FSUBP
00508161  MOV ECX,dword ptr [EBP + 0xfffffed8]
00508167  SHL ECX,0x5
0050816a  MOVSX EDX,word ptr [EBP + 0xfffffec8]
00508171  FILD dword ptr [ECX + EDX*0x4 + 0x792880]
00508178  FIDIV dword ptr [EBP + 0xfffffe44]
0050817e  FMUL double ptr [0x006bf7d8]
00508184  FSUBP
00508186  FMUL double ptr [EBP + -0x74]
00508189  FSTP double ptr [EBP + -0x74]
0050818c  MOV EAX,dword ptr [EBP + 0xfffffed8]
00508192  SHL EAX,0x5
00508195  MOVSX ECX,word ptr [EBP + 0xfffffec8]
0050819c  FILD dword ptr [EAX + ECX*0x4 + 0x792710]
005081a3  FIDIV dword ptr [EBP + 0xfffffe44]
005081a9  FLD1
005081ab  FMULP
005081ad  FLD1
005081af  FSUBRP
005081b1  MOV EDX,dword ptr [EBP + 0xfffffed8]
005081b7  SHL EDX,0x5
005081ba  MOVSX EAX,word ptr [EBP + 0xfffffec8]
005081c1  FILD dword ptr [EDX + EAX*0x4 + 0x7924b0]
005081c8  FIDIV dword ptr [EBP + 0xfffffe44]
005081ce  FLD1
005081d0  FMULP
005081d2  FSUBP
005081d4  MOV ECX,dword ptr [EBP + 0xfffffed8]
005081da  SHL ECX,0x5
005081dd  MOVSX EDX,word ptr [EBP + 0xfffffec8]
005081e4  FILD dword ptr [ECX + EDX*0x4 + 0x791fd8]
005081eb  FIDIV dword ptr [EBP + 0xfffffe44]
005081f1  FLD1
005081f3  FMULP
005081f5  FSUBP
005081f7  MOV EAX,dword ptr [EBP + 0xfffffed8]
005081fd  SHL EAX,0x5
00508200  MOVSX ECX,word ptr [EBP + 0xfffffec8]
00508207  FILD dword ptr [EAX + ECX*0x4 + 0x7925f0]
0050820e  FIDIV dword ptr [EBP + 0xfffffe44]
00508214  FMUL double ptr [0x006b3e40]
0050821a  FSUBP
0050821c  MOV EDX,dword ptr [EBP + 0xfffffed8]
00508222  SHL EDX,0x5
00508225  MOVSX EAX,word ptr [EBP + 0xfffffec8]
0050822c  FILD dword ptr [EDX + EAX*0x4 + 0x792e78]
00508233  FIDIV dword ptr [EBP + 0xfffffe44]
00508239  FMUL double ptr [0x006b3e40]
0050823f  FSUBP
00508241  MOV ECX,dword ptr [EBP + 0xfffffed8]
00508247  SHL ECX,0x5
0050824a  MOVSX EDX,word ptr [EBP + 0xfffffec8]
00508251  FILD dword ptr [ECX + EDX*0x4 + 0x792880]
00508258  FIDIV dword ptr [EBP + 0xfffffe44]
0050825e  FMUL double ptr [0x006b3e40]
00508264  FSUBP
00508266  MOV EAX,dword ptr [EBP + 0xfffffed8]
0050826c  FMUL double ptr [EAX*0x8 + 0x792358]
00508273  MOV ECX,dword ptr [EBP + 0xfffffed8]
00508279  FSTP double ptr [ECX*0x8 + 0x792358]
00508280  MOV EDX,dword ptr [EBP + 0xfffffed8]
00508286  SHL EDX,0x5
00508289  MOVSX EAX,word ptr [EBP + 0xfffffec8]
00508290  FILD dword ptr [EDX + EAX*0x4 + 0x792710]
00508297  FIDIV dword ptr [EBP + 0xfffffe44]
0050829d  FLD1
0050829f  FMULP
005082a1  FLD1
005082a3  FSUBRP
005082a5  MOV ECX,dword ptr [EBP + 0xfffffed8]
005082ab  SHL ECX,0x5
005082ae  MOVSX EDX,word ptr [EBP + 0xfffffec8]
005082b5  FILD dword ptr [ECX + EDX*0x4 + 0x7925f0]
005082bc  FIDIV dword ptr [EBP + 0xfffffe44]
005082c2  FLD1
005082c4  FMULP
005082c6  FSUBP
005082c8  MOV EAX,dword ptr [EBP + 0xfffffed8]
005082ce  SHL EAX,0x5
005082d1  MOVSX ECX,word ptr [EBP + 0xfffffec8]
005082d8  FILD dword ptr [EAX + ECX*0x4 + 0x792258]
005082df  FIDIV dword ptr [EBP + 0xfffffe44]
005082e5  FLD1
005082e7  FMULP
005082e9  FSUBP
005082eb  MOV EDX,dword ptr [EBP + 0xfffffed8]
005082f1  SHL EDX,0x5
005082f4  MOVSX EAX,word ptr [EBP + 0xfffffec8]
005082fb  FILD dword ptr [EDX + EAX*0x4 + 0x7924b0]
00508302  FIDIV dword ptr [EBP + 0xfffffe44]
00508308  FMUL double ptr [0x006b3e40]
0050830e  FSUBP
00508310  MOV ECX,dword ptr [EBP + 0xfffffed8]
00508316  SHL ECX,0x5
00508319  MOVSX EDX,word ptr [EBP + 0xfffffec8]
00508320  FILD dword ptr [ECX + EDX*0x4 + 0x792e78]
00508327  FIDIV dword ptr [EBP + 0xfffffe44]
0050832d  FMUL double ptr [0x006b3e40]
00508333  FSUBP
00508335  MOV EAX,dword ptr [EBP + 0xfffffed8]
0050833b  SHL EAX,0x5
0050833e  MOVSX ECX,word ptr [EBP + 0xfffffec8]
00508345  FILD dword ptr [EAX + ECX*0x4 + 0x792ce8]
0050834c  FIDIV dword ptr [EBP + 0xfffffe44]
00508352  FMUL double ptr [0x006b3e40]
00508358  FSUBP
0050835a  MOV EDX,dword ptr [EBP + 0xfffffed8]
00508360  FMUL double ptr [EDX*0x8 + 0x792840]
00508367  MOV EAX,dword ptr [EBP + 0xfffffed8]
0050836d  FSTP double ptr [EAX*0x8 + 0x792840]
00508374  JMP 0x00508759
00508379  FLD double ptr [0x006b2c38]
0050837f  FMUL double ptr [EBP + 0xfffffeb4]
00508385  FLD1
00508387  FADDP
00508389  FLD double ptr [0x006b2c38]
0050838f  FMUL double ptr [EBP + 0xfffffebc]
00508395  FADDP
00508397  FLD double ptr [EBP + 0xfffffe4c]
0050839d  FMUL double ptr [0x006b2c48]
005083a3  MOV ECX,dword ptr [EBP + 0xfffffed8]
005083a9  SHL ECX,0x5
005083ac  MOVSX EDX,word ptr [EBP + 0xfffffec8]
005083b3  FILD dword ptr [ECX + EDX*0x4 + 0x792710]
005083ba  FIDIV dword ptr [EBP + 0xfffffe44]
005083c0  FMULP
005083c2  FSUBP
005083c4  FLD double ptr [EBP + 0xfffffe4c]
005083ca  FMUL double ptr [0x006c0ec8]
005083d0  MOV EAX,dword ptr [EBP + 0xfffffed8]
005083d6  SHL EAX,0x5
005083d9  MOVSX ECX,word ptr [EBP + 0xfffffec8]
005083e0  FILD dword ptr [EAX + ECX*0x4 + 0x7925f0]
005083e7  FIDIV dword ptr [EBP + 0xfffffe44]
005083ed  FMULP
005083ef  FSUBP
005083f1  FLD double ptr [EBP + 0xfffffe4c]
005083f7  FMUL double ptr [0x006c0ec8]
005083fd  MOV EDX,dword ptr [EBP + 0xfffffed8]
00508403  SHL EDX,0x5
00508406  MOVSX EAX,word ptr [EBP + 0xfffffec8]
0050840d  FILD dword ptr [EDX + EAX*0x4 + 0x7924b0]
00508414  FIDIV dword ptr [EBP + 0xfffffe44]
0050841a  FMULP
0050841c  FSUBP
0050841e  FLD double ptr [EBP + 0xfffffe4c]
00508424  FMUL double ptr [0x006be670]
0050842a  MOV ECX,dword ptr [EBP + 0xfffffed8]
00508430  SHL ECX,0x5
00508433  MOVSX EDX,word ptr [EBP + 0xfffffec8]
0050843a  FILD dword ptr [ECX + EDX*0x4 + 0x791fd8]
00508441  FIDIV dword ptr [EBP + 0xfffffe44]
00508447  FMULP
00508449  FSUBP
0050844b  FLD double ptr [EBP + 0xfffffe4c]
00508451  FMUL double ptr [0x006be670]
00508457  MOV EAX,dword ptr [EBP + 0xfffffed8]
0050845d  SHL EAX,0x5
00508460  MOVSX ECX,word ptr [EBP + 0xfffffec8]
00508467  FILD dword ptr [EAX + ECX*0x4 + 0x792258]
0050846e  FIDIV dword ptr [EBP + 0xfffffe44]
00508474  FMULP
00508476  FSUBP
00508478  FLD double ptr [EBP + 0xfffffe4c]
0050847e  FMUL double ptr [0x006b3e40]
00508484  MOV EDX,dword ptr [EBP + 0xfffffed8]
0050848a  SHL EDX,0x5
0050848d  MOVSX EAX,word ptr [EBP + 0xfffffec8]
00508494  FILD dword ptr [EDX + EAX*0x4 + 0x792e78]
0050849b  FIDIV dword ptr [EBP + 0xfffffe44]
005084a1  FMULP
005084a3  FSUBP
005084a5  FLD double ptr [EBP + 0xfffffe4c]
005084ab  FMUL double ptr [0x006bf7d8]
005084b1  MOV ECX,dword ptr [EBP + 0xfffffed8]
005084b7  SHL ECX,0x5
005084ba  MOVSX EDX,word ptr [EBP + 0xfffffec8]
005084c1  FILD dword ptr [ECX + EDX*0x4 + 0x792ce8]
005084c8  FIDIV dword ptr [EBP + 0xfffffe44]
005084ce  FMULP
005084d0  FSUBP
005084d2  FLD double ptr [EBP + 0xfffffe4c]
005084d8  FMUL double ptr [0x006bf7d8]
005084de  MOV EAX,dword ptr [EBP + 0xfffffed8]
005084e4  SHL EAX,0x5
005084e7  MOVSX ECX,word ptr [EBP + 0xfffffec8]
005084ee  FILD dword ptr [EAX + ECX*0x4 + 0x792880]
005084f5  FIDIV dword ptr [EBP + 0xfffffe44]
005084fb  FMULP
005084fd  FSUBP
005084ff  FMUL double ptr [EBP + -0x74]
00508502  FSTP double ptr [EBP + -0x74]
00508505  FLD double ptr [EBP + 0xfffffe4c]
0050850b  FMUL double ptr [0x006b2c48]
00508511  MOV EDX,dword ptr [EBP + 0xfffffed8]
00508517  SHL EDX,0x5
0050851a  MOVSX EAX,word ptr [EBP + 0xfffffec8]
00508521  FILD dword ptr [EDX + EAX*0x4 + 0x792710]
00508528  FIDIV dword ptr [EBP + 0xfffffe44]
0050852e  FMULP
00508530  FLD1
00508532  FSUBRP
00508534  FLD double ptr [EBP + 0xfffffe4c]
0050853a  FMUL double ptr [0x006b2c48]
00508540  MOV ECX,dword ptr [EBP + 0xfffffed8]
00508546  SHL ECX,0x5
00508549  MOVSX EDX,word ptr [EBP + 0xfffffec8]
00508550  FILD dword ptr [ECX + EDX*0x4 + 0x7924b0]
00508557  FIDIV dword ptr [EBP + 0xfffffe44]
0050855d  FMULP
0050855f  FSUBP
00508561  FLD double ptr [EBP + 0xfffffe4c]
00508567  FMUL double ptr [0x006b2c48]
0050856d  MOV EAX,dword ptr [EBP + 0xfffffed8]
00508573  SHL EAX,0x5
00508576  MOVSX ECX,word ptr [EBP + 0xfffffec8]
0050857d  FILD dword ptr [EAX + ECX*0x4 + 0x791fd8]
00508584  FIDIV dword ptr [EBP + 0xfffffe44]
0050858a  FMULP
0050858c  FSUBP
0050858e  FLD double ptr [EBP + 0xfffffe4c]
00508594  FMUL double ptr [0x006b3e40]
0050859a  MOV EDX,dword ptr [EBP + 0xfffffed8]
005085a0  SHL EDX,0x5
005085a3  MOVSX EAX,word ptr [EBP + 0xfffffec8]
005085aa  FILD dword ptr [EDX + EAX*0x4 + 0x7925f0]
005085b1  FIDIV dword ptr [EBP + 0xfffffe44]
005085b7  FMULP
005085b9  FSUBP
005085bb  FLD double ptr [EBP + 0xfffffe4c]
005085c1  FMUL double ptr [0x006b3e40]
005085c7  MOV ECX,dword ptr [EBP + 0xfffffed8]
005085cd  SHL ECX,0x5
005085d0  MOVSX EDX,word ptr [EBP + 0xfffffec8]
005085d7  FILD dword ptr [ECX + EDX*0x4 + 0x792e78]
005085de  FIDIV dword ptr [EBP + 0xfffffe44]
005085e4  FMULP
005085e6  FSUBP
005085e8  FLD double ptr [EBP + 0xfffffe4c]
005085ee  FMUL double ptr [0x006b3e40]
005085f4  MOV EAX,dword ptr [EBP + 0xfffffed8]
005085fa  SHL EAX,0x5
005085fd  MOVSX ECX,word ptr [EBP + 0xfffffec8]
00508604  FILD dword ptr [EAX + ECX*0x4 + 0x792880]
0050860b  FIDIV dword ptr [EBP + 0xfffffe44]
00508611  FMULP
00508613  FSUBP
00508615  MOV EDX,dword ptr [EBP + 0xfffffed8]
0050861b  FMUL double ptr [EDX*0x8 + 0x792358]
00508622  MOV EAX,dword ptr [EBP + 0xfffffed8]
00508628  FSTP double ptr [EAX*0x8 + 0x792358]
0050862f  FLD double ptr [EBP + 0xfffffe5c]
00508635  FMUL double ptr [0x006b2c48]
0050863b  MOV ECX,dword ptr [EBP + 0xfffffed8]
00508641  SHL ECX,0x5
00508644  MOVSX EDX,word ptr [EBP + 0xfffffec8]
0050864b  FILD dword ptr [ECX + EDX*0x4 + 0x792710]
00508652  FIDIV dword ptr [EBP + 0xfffffe44]
00508658  FMULP
0050865a  FLD1
0050865c  FSUBRP
0050865e  FLD double ptr [EBP + 0xfffffe5c]
00508664  FMUL double ptr [0x006b2c48]
0050866a  MOV EAX,dword ptr [EBP + 0xfffffed8]
00508670  SHL EAX,0x5
00508673  MOVSX ECX,word ptr [EBP + 0xfffffec8]
0050867a  FILD dword ptr [EAX + ECX*0x4 + 0x7925f0]
00508681  FIDIV dword ptr [EBP + 0xfffffe44]
00508687  FMULP
00508689  FSUBP
0050868b  FLD double ptr [EBP + 0xfffffe5c]
00508691  FMUL double ptr [0x006b2c48]
00508697  MOV EDX,dword ptr [EBP + 0xfffffed8]
0050869d  SHL EDX,0x5
005086a0  MOVSX EAX,word ptr [EBP + 0xfffffec8]
005086a7  FILD dword ptr [EDX + EAX*0x4 + 0x792258]
005086ae  FIDIV dword ptr [EBP + 0xfffffe44]
005086b4  FMULP
005086b6  FSUBP
005086b8  FLD double ptr [EBP + 0xfffffe5c]
005086be  FMUL double ptr [0x006b3e40]
005086c4  MOV ECX,dword ptr [EBP + 0xfffffed8]
005086ca  SHL ECX,0x5
005086cd  MOVSX EDX,word ptr [EBP + 0xfffffec8]
005086d4  FILD dword ptr [ECX + EDX*0x4 + 0x7924b0]
005086db  FIDIV dword ptr [EBP + 0xfffffe44]
005086e1  FMULP
005086e3  FSUBP
005086e5  FLD double ptr [EBP + 0xfffffe5c]
005086eb  FMUL double ptr [0x006b3e40]
005086f1  MOV EAX,dword ptr [EBP + 0xfffffed8]
005086f7  SHL EAX,0x5
005086fa  MOVSX ECX,word ptr [EBP + 0xfffffec8]
00508701  FILD dword ptr [EAX + ECX*0x4 + 0x792e78]
00508708  FIDIV dword ptr [EBP + 0xfffffe44]
0050870e  FMULP
00508710  FSUBP
00508712  FLD double ptr [EBP + 0xfffffe5c]
00508718  FMUL double ptr [0x006b3e40]
0050871e  MOV EDX,dword ptr [EBP + 0xfffffed8]
00508724  SHL EDX,0x5
00508727  MOVSX EAX,word ptr [EBP + 0xfffffec8]
0050872e  FILD dword ptr [EDX + EAX*0x4 + 0x792ce8]
00508735  FIDIV dword ptr [EBP + 0xfffffe44]
0050873b  FMULP
0050873d  FSUBP
0050873f  MOV ECX,dword ptr [EBP + 0xfffffed8]
00508745  FMUL double ptr [ECX*0x8 + 0x792840]
0050874c  MOV EDX,dword ptr [EBP + 0xfffffed8]
00508752  FSTP double ptr [EDX*0x8 + 0x792840]
00508759  FLDZ
0050875b  FCOMP double ptr [EBP + -0x74]
0050875e  FNSTSW AX
00508760  TEST AH,0x41
00508763  JNZ 0x0050876a
00508765  FLDZ
00508767  FSTP double ptr [EBP + -0x74]
0050876a  MOV EAX,dword ptr [EBP + 0xfffffed8]
00508770  FLDZ
00508772  FCOMP double ptr [EAX*0x8 + 0x792358]
00508779  FNSTSW AX
0050877b  TEST AH,0x41
0050877e  JNZ 0x0050878f
00508780  MOV ECX,dword ptr [EBP + 0xfffffed8]
00508786  FLDZ
00508788  FSTP double ptr [ECX*0x8 + 0x792358]
0050878f  MOV EDX,dword ptr [EBP + 0xfffffed8]
00508795  FLDZ
00508797  FCOMP double ptr [EDX*0x8 + 0x792840]
0050879e  FNSTSW AX
005087a0  TEST AH,0x41
005087a3  JNZ 0x005087b4
005087a5  MOV EAX,dword ptr [EBP + 0xfffffed8]
005087ab  FLDZ
005087ad  FSTP double ptr [EAX*0x8 + 0x792840]
005087b4  JMP 0x00507c50
005087b9  MOV ECX,dword ptr [EBP + 0xfffffed8]
005087bf  FLD double ptr [EBP + -0x74]
005087c2  FMUL double ptr [ECX*0x8 + 0x792e38]
005087c9  FSTP double ptr [EBP + -0x74]
005087cc  MOV EDX,dword ptr [EBP + 0xfffffed8]
005087d2  MOV EAX,dword ptr [EBP + 0xfffffed8]
005087d8  FLD double ptr [EDX*0x8 + 0x792358]
005087df  FMUL double ptr [EAX*0x8 + 0x792e38]
005087e6  MOV ECX,dword ptr [EBP + 0xfffffed8]
005087ec  FSTP double ptr [ECX*0x8 + 0x792358]
005087f3  MOV EDX,dword ptr [EBP + 0xfffffed8]
005087f9  MOV EAX,dword ptr [EBP + 0xfffffed8]
005087ff  FLD double ptr [EDX*0x8 + 0x792840]
00508806  FMUL double ptr [EAX*0x8 + 0x792e38]
0050880d  MOV ECX,dword ptr [EBP + 0xfffffed8]
00508813  FSTP double ptr [ECX*0x8 + 0x792840]
0050881a  FLD double ptr [0x006b4b00]
00508820  FCOMP double ptr [EBP + -0x74]
00508823  FNSTSW AX
00508825  TEST AH,0x5
00508828  JP 0x00508833
0050882a  FLD double ptr [0x006b4b00]
00508830  FSTP double ptr [EBP + -0x74]
00508833  MOV EDX,dword ptr [EBP + 0xfffffed8]
00508839  FLD double ptr [0x006b4b00]
0050883f  FCOMP double ptr [EDX*0x8 + 0x792358]
00508846  FNSTSW AX
00508848  TEST AH,0x5
0050884b  JP 0x00508860
0050884d  MOV EAX,dword ptr [EBP + 0xfffffed8]
00508853  FLD double ptr [0x006b4b00]
00508859  FSTP double ptr [EAX*0x8 + 0x792358]
00508860  MOV ECX,dword ptr [EBP + 0xfffffed8]
00508866  FLD double ptr [0x006b4b00]
0050886c  FCOMP double ptr [ECX*0x8 + 0x792840]
00508873  FNSTSW AX
00508875  TEST AH,0x5
00508878  JP 0x0050888d
0050887a  MOV EDX,dword ptr [EBP + 0xfffffed8]
00508880  FLD double ptr [0x006b4b00]
00508886  FSTP double ptr [EDX*0x8 + 0x792840]
0050888d  MOV word ptr [EBP + -0x78],0x0
00508893  MOV word ptr [EBP + 0xffffff30],0x0
0050889c  MOV word ptr [EBP + -0x60],0x0
005088a2  MOV ECX,dword ptr [0x00791364]
005088a8  CALL 0x0047d770
005088ad  TEST EAX,EAX
005088af  JNZ 0x00508bf7
005088b5  CMP dword ptr [EBP + 0x8],0x7
005088b9  JNZ 0x00508956
005088bf  MOV EAX,dword ptr [EBP + 0xfffffed8]
005088c5  FLD double ptr [EAX*0x8 + 0x792358]
005088cc  FCOMP double ptr [EBP + -0x74]
005088cf  FNSTSW AX
005088d1  TEST AH,0x5
005088d4  JP 0x00508904
005088d6  MOV ECX,dword ptr [EBP + 0xfffffed8]
005088dc  FLD double ptr [ECX*0x8 + 0x792840]
005088e3  FCOMP double ptr [EBP + -0x74]
005088e6  FNSTSW AX
005088e8  TEST AH,0x5
005088eb  JP 0x00508904
005088ed  MOV word ptr [EBP + -0x78],0x1
005088f3  MOV word ptr [EBP + 0xffffff30],0x0
005088fc  MOV word ptr [EBP + -0x60],0x0
00508902  JMP 0x00508951
00508904  MOV EDX,dword ptr [EBP + 0xfffffed8]
0050890a  MOV EAX,dword ptr [EBP + 0xfffffed8]
00508910  FLD double ptr [EAX*0x8 + 0x792358]
00508917  FCOMP double ptr [EDX*0x8 + 0x792840]
0050891e  FNSTSW AX
00508920  TEST AH,0x5
00508923  JP 0x0050893c
00508925  MOV word ptr [EBP + -0x78],0x2
0050892b  MOV word ptr [EBP + 0xffffff30],0x1
00508934  MOV word ptr [EBP + -0x60],0x0
0050893a  JMP 0x00508951
0050893c  MOV word ptr [EBP + -0x78],0x2
00508942  MOV word ptr [EBP + 0xffffff30],0x0
0050894b  MOV word ptr [EBP + -0x60],0x1
00508951  JMP 0x00508bf2
00508956  CMP dword ptr [EBP + 0x8],0x6
0050895a  JNZ 0x005089f7
00508960  MOV ECX,dword ptr [EBP + 0xfffffed8]
00508966  FLD double ptr [ECX*0x8 + 0x792358]
0050896d  FCOMP double ptr [EBP + -0x74]
00508970  FNSTSW AX
00508972  TEST AH,0x5
00508975  JP 0x005089a5
00508977  MOV EDX,dword ptr [EBP + 0xfffffed8]
0050897d  FLD double ptr [EDX*0x8 + 0x792840]
00508984  FCOMP double ptr [EBP + -0x74]
00508987  FNSTSW AX
00508989  TEST AH,0x5
0050898c  JP 0x005089a5
0050898e  MOV word ptr [EBP + -0x78],0x1
00508994  MOV word ptr [EBP + 0xffffff30],0x0
0050899d  MOV word ptr [EBP + -0x60],0x0
005089a3  JMP 0x005089f2
005089a5  MOV EAX,dword ptr [EBP + 0xfffffed8]
005089ab  MOV ECX,dword ptr [EBP + 0xfffffed8]
005089b1  FLD double ptr [ECX*0x8 + 0x792358]
005089b8  FCOMP double ptr [EAX*0x8 + 0x792840]
005089bf  FNSTSW AX
005089c1  TEST AH,0x5
005089c4  JP 0x005089dd
005089c6  MOV word ptr [EBP + -0x78],0x2
005089cc  MOV word ptr [EBP + 0xffffff30],0x1
005089d5  MOV word ptr [EBP + -0x60],0x0
005089db  JMP 0x005089f2
005089dd  MOV word ptr [EBP + -0x78],0x2
005089e3  MOV word ptr [EBP + 0xffffff30],0x0
005089ec  MOV word ptr [EBP + -0x60],0x1
005089f2  JMP 0x00508bf2
005089f7  CMP dword ptr [EBP + 0x8],0x5
005089fb  JNZ 0x00508a98
00508a01  MOV EDX,dword ptr [EBP + 0xfffffed8]
00508a07  FLD double ptr [EDX*0x8 + 0x792358]
00508a0e  FCOMP double ptr [EBP + -0x74]
00508a11  FNSTSW AX
00508a13  TEST AH,0x5
00508a16  JP 0x00508a46
00508a18  MOV EAX,dword ptr [EBP + 0xfffffed8]
00508a1e  FLD double ptr [EAX*0x8 + 0x792840]
00508a25  FCOMP double ptr [EBP + -0x74]
00508a28  FNSTSW AX
00508a2a  TEST AH,0x5
00508a2d  JP 0x00508a46
00508a2f  MOV word ptr [EBP + -0x78],0x1
00508a35  MOV word ptr [EBP + 0xffffff30],0x0
00508a3e  MOV word ptr [EBP + -0x60],0x0
00508a44  JMP 0x00508a93
00508a46  MOV ECX,dword ptr [EBP + 0xfffffed8]
00508a4c  MOV EDX,dword ptr [EBP + 0xfffffed8]
00508a52  FLD double ptr [EDX*0x8 + 0x792358]
00508a59  FCOMP double ptr [ECX*0x8 + 0x792840]
00508a60  FNSTSW AX
00508a62  TEST AH,0x5
00508a65  JP 0x00508a7e
00508a67  MOV word ptr [EBP + -0x78],0x1
00508a6d  MOV word ptr [EBP + 0xffffff30],0x1
00508a76  MOV word ptr [EBP + -0x60],0x0
00508a7c  JMP 0x00508a93
00508a7e  MOV word ptr [EBP + -0x78],0x4
00508a84  MOV word ptr [EBP + 0xffffff30],0x0
00508a8d  MOV word ptr [EBP + -0x60],0x1
00508a93  JMP 0x00508bf2
00508a98  CMP dword ptr [EBP + 0x8],0x4
00508a9c  JNZ 0x00508b39
00508aa2  MOV EAX,dword ptr [EBP + 0xfffffed8]
00508aa8  FLD double ptr [EAX*0x8 + 0x792358]
00508aaf  FCOMP double ptr [EBP + -0x74]
00508ab2  FNSTSW AX
00508ab4  TEST AH,0x5
00508ab7  JP 0x00508ae7
00508ab9  MOV ECX,dword ptr [EBP + 0xfffffed8]
00508abf  FLD double ptr [ECX*0x8 + 0x792840]
00508ac6  FCOMP double ptr [EBP + -0x74]
00508ac9  FNSTSW AX
00508acb  TEST AH,0x5
00508ace  JP 0x00508ae7
00508ad0  MOV word ptr [EBP + -0x78],0x1
00508ad6  MOV word ptr [EBP + 0xffffff30],0x0
00508adf  MOV word ptr [EBP + -0x60],0x0
00508ae5  JMP 0x00508b34
00508ae7  MOV EDX,dword ptr [EBP + 0xfffffed8]
00508aed  MOV EAX,dword ptr [EBP + 0xfffffed8]
00508af3  FLD double ptr [EAX*0x8 + 0x792358]
00508afa  FCOMP double ptr [EDX*0x8 + 0x792840]
00508b01  FNSTSW AX
00508b03  TEST AH,0x5
00508b06  JP 0x00508b1f
00508b08  MOV word ptr [EBP + -0x78],0x1
00508b0e  MOV word ptr [EBP + 0xffffff30],0x3
00508b17  MOV word ptr [EBP + -0x60],0x0
00508b1d  JMP 0x00508b34
00508b1f  MOV word ptr [EBP + -0x78],0x1
00508b25  MOV word ptr [EBP + 0xffffff30],0x0
00508b2e  MOV word ptr [EBP + -0x60],0x0
00508b34  JMP 0x00508bf2
00508b39  CMP dword ptr [EBP + 0x8],0x3
00508b3d  JNZ 0x00508bd7
00508b43  MOV ECX,dword ptr [EBP + 0xfffffed8]
00508b49  FLD double ptr [ECX*0x8 + 0x792358]
00508b50  FCOMP double ptr [EBP + -0x74]
00508b53  FNSTSW AX
00508b55  TEST AH,0x5
00508b58  JP 0x00508b88
00508b5a  MOV EDX,dword ptr [EBP + 0xfffffed8]
00508b60  FLD double ptr [EDX*0x8 + 0x792840]
00508b67  FCOMP double ptr [EBP + -0x74]
00508b6a  FNSTSW AX
00508b6c  TEST AH,0x5
00508b6f  JP 0x00508b88
00508b71  MOV word ptr [EBP + -0x78],0x1
00508b77  MOV word ptr [EBP + 0xffffff30],0x0
00508b80  MOV word ptr [EBP + -0x60],0x0
00508b86  JMP 0x00508bd5
00508b88  MOV EAX,dword ptr [EBP + 0xfffffed8]
00508b8e  MOV ECX,dword ptr [EBP + 0xfffffed8]
00508b94  FLD double ptr [ECX*0x8 + 0x792358]
00508b9b  FCOMP double ptr [EAX*0x8 + 0x792840]
00508ba2  FNSTSW AX
00508ba4  TEST AH,0x5
00508ba7  JP 0x00508bc0
00508ba9  MOV word ptr [EBP + -0x78],0x1
00508baf  MOV word ptr [EBP + 0xffffff30],0x3
00508bb8  MOV word ptr [EBP + -0x60],0x0
00508bbe  JMP 0x00508bd5
00508bc0  MOV word ptr [EBP + -0x78],0x1
00508bc6  MOV word ptr [EBP + 0xffffff30],0x0
00508bcf  MOV word ptr [EBP + -0x60],0x0
00508bd5  JMP 0x00508bf2
00508bd7  XOR EDX,EDX
00508bd9  JNZ 0x00508bf2
00508bdb  PUSH 0x7d7
00508be0  PUSH 0x6c0c40
00508be5  PUSH 0x6b2b64
00508bea  CALL 0x005e9f20
00508bef  ADD ESP,0xc
00508bf2  JMP 0x00508e36
00508bf7  MOV ECX,dword ptr [0x00791364]
00508bfd  CALL 0x0047d770
00508c02  CMP EAX,0x2
00508c05  JNZ 0x00508cbf
00508c0b  MOV ECX,dword ptr [EBP + 0xfffffed8]
00508c11  FLD double ptr [ECX*0x8 + 0x792358]
00508c18  FCOMP double ptr [EBP + -0x74]
00508c1b  FNSTSW AX
00508c1d  TEST AH,0x5
00508c20  JP 0x00508c50
00508c22  MOV EDX,dword ptr [EBP + 0xfffffed8]
00508c28  FLD double ptr [EDX*0x8 + 0x792840]
00508c2f  FCOMP double ptr [EBP + -0x74]
00508c32  FNSTSW AX
00508c34  TEST AH,0x5
00508c37  JP 0x00508c50
00508c39  MOV word ptr [EBP + -0x78],0x4
00508c3f  MOV word ptr [EBP + 0xffffff30],0x1
00508c48  MOV word ptr [EBP + -0x60],0x2
00508c4e  JMP 0x00508cba
00508c50  MOV EAX,dword ptr [EBP + 0xfffffed8]
00508c56  MOV ECX,dword ptr [EBP + 0xfffffed8]
00508c5c  FLD double ptr [ECX*0x8 + 0x792358]
00508c63  FCOMP double ptr [EAX*0x8 + 0x792840]
00508c6a  FNSTSW AX
00508c6c  TEST AH,0x5
00508c6f  JP 0x00508c88
00508c71  MOV word ptr [EBP + -0x78],0x2
00508c77  MOV word ptr [EBP + 0xffffff30],0x1
00508c80  MOV word ptr [EBP + -0x60],0x0
00508c86  JMP 0x00508cba
00508c88  CMP dword ptr [EBP + 0x8],0x5
00508c8c  JGE 0x00508ca5
00508c8e  MOV word ptr [EBP + -0x78],0x1
00508c94  MOV word ptr [EBP + 0xffffff30],0x0
00508c9d  MOV word ptr [EBP + -0x60],0x7
00508ca3  JMP 0x00508cba
00508ca5  MOV word ptr [EBP + -0x78],0x1
00508cab  MOV word ptr [EBP + 0xffffff30],0x0
00508cb4  MOV word ptr [EBP + -0x60],0x4
00508cba  JMP 0x00508e36
00508cbf  MOV ECX,dword ptr [0x00791364]
00508cc5  CALL 0x0047d770
00508cca  CMP EAX,0x4
00508ccd  JNZ 0x00508d87
00508cd3  MOV EDX,dword ptr [EBP + 0xfffffed8]
00508cd9  FLD double ptr [EDX*0x8 + 0x792358]
00508ce0  FCOMP double ptr [EBP + -0x74]
00508ce3  FNSTSW AX
00508ce5  TEST AH,0x5
00508ce8  JP 0x00508d18
00508cea  MOV EAX,dword ptr [EBP + 0xfffffed8]
00508cf0  FLD double ptr [EAX*0x8 + 0x792840]
00508cf7  FCOMP double ptr [EBP + -0x74]
00508cfa  FNSTSW AX
00508cfc  TEST AH,0x5
00508cff  JP 0x00508d18
00508d01  MOV word ptr [EBP + -0x78],0x4
00508d07  MOV word ptr [EBP + 0xffffff30],0x1
00508d10  MOV word ptr [EBP + -0x60],0x2
00508d16  JMP 0x00508d82
00508d18  MOV ECX,dword ptr [EBP + 0xfffffed8]
00508d1e  MOV EDX,dword ptr [EBP + 0xfffffed8]
00508d24  FLD double ptr [EDX*0x8 + 0x792358]
00508d2b  FCOMP double ptr [ECX*0x8 + 0x792840]
00508d32  FNSTSW AX
00508d34  TEST AH,0x5
00508d37  JP 0x00508d50
00508d39  MOV word ptr [EBP + -0x78],0x2
00508d3f  MOV word ptr [EBP + 0xffffff30],0x1
00508d48  MOV word ptr [EBP + -0x60],0x0
00508d4e  JMP 0x00508d82
00508d50  CMP dword ptr [EBP + 0x8],0x5
00508d54  JGE 0x00508d6d
00508d56  MOV word ptr [EBP + -0x78],0x1
00508d5c  MOV word ptr [EBP + 0xffffff30],0x0
00508d65  MOV word ptr [EBP + -0x60],0x4
00508d6b  JMP 0x00508d82
00508d6d  MOV word ptr [EBP + -0x78],0x1
00508d73  MOV word ptr [EBP + 0xffffff30],0x0
00508d7c  MOV word ptr [EBP + -0x60],0x2
00508d82  JMP 0x00508e36
00508d87  MOV EAX,dword ptr [EBP + 0xfffffed8]
00508d8d  FLD double ptr [EAX*0x8 + 0x792358]
00508d94  FCOMP double ptr [EBP + -0x74]
00508d97  FNSTSW AX
00508d99  TEST AH,0x5
00508d9c  JP 0x00508dcc
00508d9e  MOV ECX,dword ptr [EBP + 0xfffffed8]
00508da4  FLD double ptr [ECX*0x8 + 0x792840]
00508dab  FCOMP double ptr [EBP + -0x74]
00508dae  FNSTSW AX
00508db0  TEST AH,0x5
00508db3  JP 0x00508dcc
00508db5  MOV word ptr [EBP + -0x78],0x2
00508dbb  MOV word ptr [EBP + 0xffffff30],0x0
00508dc4  MOV word ptr [EBP + -0x60],0x1
00508dca  JMP 0x00508e36
00508dcc  MOV EDX,dword ptr [EBP + 0xfffffed8]
00508dd2  MOV EAX,dword ptr [EBP + 0xfffffed8]
00508dd8  FLD double ptr [EAX*0x8 + 0x792358]
00508ddf  FCOMP double ptr [EDX*0x8 + 0x792840]
00508de6  FNSTSW AX
00508de8  TEST AH,0x5
00508deb  JP 0x00508e04
00508ded  MOV word ptr [EBP + -0x78],0x2
00508df3  MOV word ptr [EBP + 0xffffff30],0x1
00508dfc  MOV word ptr [EBP + -0x60],0x0
00508e02  JMP 0x00508e36
00508e04  CMP dword ptr [EBP + 0x8],0x5
00508e08  JGE 0x00508e21
00508e0a  MOV word ptr [EBP + -0x78],0x1
00508e10  MOV word ptr [EBP + 0xffffff30],0x0
00508e19  MOV word ptr [EBP + -0x60],0x3
00508e1f  JMP 0x00508e36
00508e21  MOV word ptr [EBP + -0x78],0x1
00508e27  MOV word ptr [EBP + 0xffffff30],0x0
00508e30  MOV word ptr [EBP + -0x60],0x2
00508e36  MOVSX ECX,word ptr [EBP + -0x78]
00508e3a  MOV dword ptr [EBP + 0xfffffc9c],ECX
00508e40  FILD dword ptr [EBP + 0xfffffc9c]
00508e46  FMUL double ptr [EBP + -0x74]
00508e49  MOVSX EDX,word ptr [EBP + 0xffffff30]
00508e50  MOV dword ptr [EBP + 0xfffffc98],EDX
00508e56  FILD dword ptr [EBP + 0xfffffc98]
00508e5c  MOV EAX,dword ptr [EBP + 0xfffffed8]
00508e62  FMUL double ptr [EAX*0x8 + 0x792840]
00508e69  FADDP
00508e6b  MOVSX ECX,word ptr [EBP + -0x60]
00508e6f  MOV dword ptr [EBP + 0xfffffc94],ECX
00508e75  FILD dword ptr [EBP + 0xfffffc94]
00508e7b  MOV EDX,dword ptr [EBP + 0xfffffed8]
00508e81  FMUL double ptr [EDX*0x8 + 0x792358]
00508e88  FADDP
00508e8a  MOVSX EAX,word ptr [EBP + -0x78]
00508e8e  MOVSX ECX,word ptr [EBP + 0xffffff30]
00508e95  ADD EAX,ECX
00508e97  MOVSX EDX,word ptr [EBP + -0x60]
00508e9b  ADD EAX,EDX
00508e9d  MOV dword ptr [EBP + 0xfffffc90],EAX
00508ea3  FILD dword ptr [EBP + 0xfffffc90]
00508ea9  FDIVP
00508eab  FSTP double ptr [EBP + 0xfffffecc]
00508eb1  FLD double ptr [EBP + 0xfffffecc]
00508eb7  MOV ECX,dword ptr [EBP + -0xc]
00508eba  MOV dword ptr FS:[0x0],ECX
00508ec1  POP ECX
00508ec2  POP ESI
00508ec3  MOV ESP,EBP
00508ec5  POP EBP
00508ec6  RET
