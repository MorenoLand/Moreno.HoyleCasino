; FUN_005ecd00  005ecd00
005ecd00  PUSH EBP
005ecd01  MOV EBP,ESP
005ecd03  PUSH -0x1
005ecd05  PUSH 0x6a9cb2
005ecd0a  MOV EAX,FS:[0x0]
005ecd10  PUSH EAX
005ecd11  SUB ESP,0x114
005ecd17  PUSH EBX
005ecd18  PUSH ESI
005ecd19  MOV EAX,[0x00781870]
005ecd1e  XOR EAX,EBP
005ecd20  PUSH EAX
005ecd21  LEA EAX,[EBP + -0xc]
005ecd24  MOV FS:[0x0],EAX
005ecd2a  MOV dword ptr [EBP + 0xffffff28],ECX
005ecd30  CMP dword ptr [EBP + 0x8],-0x1
005ecd34  JNZ 0x005ecd3b
005ecd36  JMP 0x005ee4a6
005ecd3b  MOV EAX,dword ptr [EBP + 0xffffff28]
005ecd41  MOV ECX,dword ptr [EAX + 0x64]
005ecd44  MOV dword ptr [EBP + 0xffffff24],ECX
005ecd4a  CMP dword ptr [EBP + 0xffffff24],0x0
005ecd51  JLE 0x005ecde1
005ecd57  CMP dword ptr [EBP + 0xffffff24],0x2
005ecd5e  JLE 0x005ecd6b
005ecd60  CMP dword ptr [EBP + 0xffffff24],0x3
005ecd67  JZ 0x005ecd7e
005ecd69  JMP 0x005ecde1
005ecd6b  MOV EDX,dword ptr [EBP + 0xffffff28]
005ecd71  MOV EAX,dword ptr [EDX + 0x60]
005ecd74  CMP EAX,dword ptr [EBP + 0x8]
005ecd77  JNZ 0x005ecd7e
005ecd79  JMP 0x005ee4a6
005ecd7e  MOV ECX,dword ptr [EBP + 0xffffff28]
005ecd84  MOV EDX,dword ptr [ECX + 0x60]
005ecd87  CMP EDX,dword ptr [EBP + 0x8]
005ecd8a  JNZ 0x005ecde1
005ecd8c  MOV EAX,dword ptr [EBP + 0xffffff28]
005ecd92  MOV ECX,dword ptr [EAX + 0xc4]
005ecd98  CMP ECX,dword ptr [EBP + 0xc]
005ecd9b  JNZ 0x005ecde1
005ecd9d  MOV EDX,dword ptr [EBP + 0xffffff28]
005ecda3  MOVZX EAX,byte ptr [EDX + 0xc8]
005ecdaa  MOVZX ECX,byte ptr [EBP + 0x10]
005ecdae  CMP EAX,ECX
005ecdb0  JNZ 0x005ecde1
005ecdb2  MOV EDX,dword ptr [EBP + 0xffffff28]
005ecdb8  MOVZX EAX,byte ptr [EDX + 0xc9]
005ecdbf  MOVZX ECX,byte ptr [EBP + 0x11]
005ecdc3  CMP EAX,ECX
005ecdc5  JNZ 0x005ecde1
005ecdc7  MOV EDX,dword ptr [EBP + 0xffffff28]
005ecdcd  MOVZX EAX,byte ptr [EDX + 0xca]
005ecdd4  MOVZX ECX,byte ptr [EBP + 0x12]
005ecdd8  CMP EAX,ECX
005ecdda  JNZ 0x005ecde1
005ecddc  JMP 0x005ee4a6
005ecde1  MOV EDX,dword ptr [EBP + 0xffffff28]
005ecde7  MOV EAX,dword ptr [EBP + 0x8]
005ecdea  MOV dword ptr [EDX + 0x60],EAX
005ecded  MOV ECX,dword ptr [EBP + 0x8]
005ecdf0  IMUL ECX,ECX,0xc
005ecdf3  ADD ECX,0x770028
005ecdf9  MOV EDX,dword ptr [EBP + 0xffffff28]
005ecdff  ADD EDX,0x8c
005ece05  MOV EAX,dword ptr [ECX]
005ece07  MOV dword ptr [EDX],EAX
005ece09  MOV EAX,dword ptr [ECX + 0x4]
005ece0c  MOV dword ptr [EDX + 0x4],EAX
005ece0f  MOV ECX,dword ptr [ECX + 0x8]
005ece12  MOV dword ptr [EDX + 0x8],ECX
005ece15  MOV EDX,dword ptr [EBP + 0xffffff28]
005ece1b  CMP dword ptr [EDX + 0xb0],0x0
005ece22  JZ 0x005ece4f
005ece24  MOV EAX,dword ptr [EBP + 0xffffff28]
005ece2a  MOV ECX,dword ptr [EAX + 0xb0]
005ece30  PUSH ECX
005ece31  MOV EDX,dword ptr [0x007960d8]
005ece37  MOV ECX,dword ptr [EDX + 0x18]
005ece3a  CALL 0x006041d0
005ece3f  MOV EAX,dword ptr [EBP + 0xffffff28]
005ece45  MOV dword ptr [EAX + 0xb0],0x0
005ece4f  MOV ECX,dword ptr [EBP + 0xffffff28]
005ece55  CMP dword ptr [ECX + 0xbc],0x0
005ece5c  JZ 0x005ece83
005ece5e  MOV EDX,dword ptr [EBP + 0xffffff28]
005ece64  MOV EAX,dword ptr [EDX + 0xbc]
005ece6a  PUSH EAX
005ece6b  CALL 0x00686c36
005ece70  ADD ESP,0x4
005ece73  MOV ECX,dword ptr [EBP + 0xffffff28]
005ece79  MOV dword ptr [ECX + 0xbc],0x0
005ece83  MOV EDX,dword ptr [EBP + 0xffffff28]
005ece89  CMP dword ptr [EDX + 0xb8],0x0
005ece90  JZ 0x005ecebd
005ece92  MOV EAX,dword ptr [EBP + 0xffffff28]
005ece98  MOV ECX,dword ptr [EAX + 0xb8]
005ece9e  PUSH ECX
005ece9f  MOV EDX,dword ptr [0x007960d8]
005ecea5  MOV ECX,dword ptr [EDX + 0x18]
005ecea8  CALL 0x006041d0
005ecead  MOV EAX,dword ptr [EBP + 0xffffff28]
005eceb3  MOV dword ptr [EAX + 0xb8],0x0
005ecebd  MOV ECX,dword ptr [EBP + 0xffffff28]
005ecec3  CMP dword ptr [ECX + 0xb4],0x0
005ececa  JZ 0x005ecef1
005ececc  MOV EDX,dword ptr [EBP + 0xffffff28]
005eced2  MOV EAX,dword ptr [EDX + 0xb4]
005eced8  PUSH EAX
005eced9  CALL 0x00686c30
005ecede  ADD ESP,0x4
005ecee1  MOV ECX,dword ptr [EBP + 0xffffff28]
005ecee7  MOV dword ptr [ECX + 0xb4],0x0
005ecef1  MOV EDX,dword ptr [EBP + 0xffffff28]
005ecef7  MOV dword ptr [EDX + 0xc4],0xffffffff
005ecf01  MOV EAX,dword ptr [EBP + 0xffffff28]
005ecf07  ADD EAX,0xc8
005ecf0c  MOV CX,word ptr [0x0075ee1c]
005ecf13  MOV word ptr [EAX],CX
005ecf16  MOV DL,byte ptr [0x0075ee1e]
005ecf1c  MOV byte ptr [EAX + 0x2],DL
005ecf1f  MOV EAX,dword ptr [EBP + 0xffffff28]
005ecf25  MOV dword ptr [EAX + 0x64],0x0
005ecf2c  MOV ECX,dword ptr [EBP + 0xffffff28]
005ecf32  CMP dword ptr [ECX + 0x8c],0x0
005ecf39  JBE 0x005ecf8b
005ecf3b  MOV EDX,dword ptr [EBP + 0xffffff28]
005ecf41  MOVSX EAX,word ptr [EDX + 0x96]
005ecf48  TEST EAX,EAX
005ecf4a  JL 0x005ecf8b
005ecf4c  PUSH 0x0
005ecf4e  MOV ECX,dword ptr [EBP + 0xffffff28]
005ecf54  MOV EDX,dword ptr [ECX + 0x8c]
005ecf5a  PUSH EDX
005ecf5b  PUSH 0x20584554
005ecf60  MOV EAX,[0x007960d8]
005ecf65  MOV ECX,dword ptr [EAX + 0x18]
005ecf68  CALL 0x00603c50
005ecf6d  MOV ECX,dword ptr [EBP + 0xffffff28]
005ecf73  MOV dword ptr [ECX + 0xb0],EAX
005ecf79  MOV EDX,dword ptr [EBP + 0xffffff28]
005ecf7f  MOV dword ptr [EDX + 0x64],0x2
005ecf86  JMP 0x005ee467
005ecf8b  MOV EAX,dword ptr [EBP + 0xffffff28]
005ecf91  CMP dword ptr [EAX + 0x8c],0x0
005ecf98  JBE 0x005ee1f3
005ecf9e  MOV ECX,dword ptr [EBP + 0xffffff28]
005ecfa4  MOVSX EDX,word ptr [ECX + 0x96]
005ecfab  TEST EDX,EDX
005ecfad  JGE 0x005ee1f3
005ecfb3  MOV EAX,dword ptr [EBP + 0xffffff28]
005ecfb9  ADD EAX,0xb4
005ecfbe  PUSH EAX
005ecfbf  CALL 0x00686c4e
005ecfc4  ADD ESP,0x4
005ecfc7  MOV ECX,dword ptr [EBP + 0xffffff28]
005ecfcd  CMP dword ptr [ECX + 0xb4],0x0
005ecfd4  JNZ 0x005ed025
005ecfd6  MOV EDX,dword ptr [EBP + 0xffffff28]
005ecfdc  CMP dword ptr [EDX + 0xb4],0x0
005ecfe3  JNZ 0x005ecffc
005ecfe5  PUSH 0x128
005ecfea  PUSH 0x6d6530
005ecfef  PUSH 0x6d6520
005ecff4  CALL 0x005e9f20
005ecff9  ADD ESP,0xc
005ecffc  PUSH ECX
005ecffd  MOV ECX,ESP
005ecfff  MOV DX,word ptr [0x0075ee1c]
005ed006  MOV word ptr [ECX],DX
005ed009  MOV AL,[0x0075ee1e]
005ed00e  MOV byte ptr [ECX + 0x2],AL
005ed011  PUSH -0x1
005ed013  PUSH 0x1f
005ed015  MOV ECX,dword ptr [EBP + 0xffffff28]
005ed01b  CALL 0x005ecd00
005ed020  JMP 0x005ee4a6
005ed025  MOV ECX,dword ptr [EBP + 0xffffff28]
005ed02b  MOV dword ptr [ECX + 0x64],0x3
005ed032  PUSH 0x0
005ed034  MOV EDX,dword ptr [EBP + 0xffffff28]
005ed03a  MOV EAX,dword ptr [EDX + 0x8c]
005ed040  PUSH EAX
005ed041  PUSH 0x20465454
005ed046  MOV ECX,dword ptr [0x007960d8]
005ed04c  MOV ECX,dword ptr [ECX + 0x18]
005ed04f  CALL 0x00603c50
005ed054  MOV EDX,dword ptr [EBP + 0xffffff28]
005ed05a  MOV dword ptr [EDX + 0xb8],EAX
005ed060  MOV EAX,dword ptr [EBP + 0xffffff28]
005ed066  CMP dword ptr [EAX + 0xb8],0x0
005ed06d  JNZ 0x005ed108
005ed073  MOV ECX,dword ptr [EBP + 0xffffff28]
005ed079  MOV EDX,dword ptr [ECX + 0xb8]
005ed07f  MOV EAX,dword ptr [EBP + 0xffffff28]
005ed085  MOV ECX,dword ptr [EAX + 0xb8]
005ed08b  MOV EDX,dword ptr [EDX]
005ed08d  MOV EAX,dword ptr [EDX + 0x4]
005ed090  CALL EAX
005ed092  TEST EAX,EAX
005ed094  JNZ 0x005ed108
005ed096  MOV ECX,dword ptr [EBP + 0xffffff28]
005ed09c  CMP dword ptr [ECX + 0xb8],0x0
005ed0a3  JZ 0x005ed0c8
005ed0a5  MOV EDX,dword ptr [EBP + 0xffffff28]
005ed0ab  MOV EAX,dword ptr [EDX + 0xb8]
005ed0b1  MOV ECX,dword ptr [EBP + 0xffffff28]
005ed0b7  MOV ECX,dword ptr [ECX + 0xb8]
005ed0bd  MOV EDX,dword ptr [EAX]
005ed0bf  MOV EAX,dword ptr [EDX + 0x4]
005ed0c2  CALL EAX
005ed0c4  TEST EAX,EAX
005ed0c6  JNZ 0x005ed0df
005ed0c8  PUSH 0x132
005ed0cd  PUSH 0x6d6530
005ed0d2  PUSH 0x6d64ec
005ed0d7  CALL 0x005e9f20
005ed0dc  ADD ESP,0xc
005ed0df  PUSH ECX
005ed0e0  MOV EDX,ESP
005ed0e2  MOV AX,[0x0075ee1c]
005ed0e8  MOV word ptr [EDX],AX
005ed0eb  MOV CL,byte ptr [0x0075ee1e]
005ed0f1  MOV byte ptr [EDX + 0x2],CL
005ed0f4  PUSH -0x1
005ed0f6  PUSH 0x1f
005ed0f8  MOV ECX,dword ptr [EBP + 0xffffff28]
005ed0fe  CALL 0x005ecd00
005ed103  JMP 0x005ee4a6
005ed108  MOV EDX,dword ptr [EBP + 0xffffff28]
005ed10e  ADD EDX,0xbc
005ed114  PUSH EDX
005ed115  PUSH 0x0
005ed117  MOV EAX,dword ptr [EBP + 0xffffff28]
005ed11d  MOV ECX,dword ptr [EAX + 0xb8]
005ed123  CALL 0x0061ed80
005ed128  PUSH EAX
005ed129  MOV ECX,dword ptr [EBP + 0xffffff28]
005ed12f  MOV EDX,dword ptr [ECX + 0xb8]
005ed135  MOV EAX,dword ptr [EBP + 0xffffff28]
005ed13b  MOV ECX,dword ptr [EAX + 0xb8]
005ed141  MOV EDX,dword ptr [EDX]
005ed143  MOV EAX,dword ptr [EDX + 0x4]
005ed146  CALL EAX
005ed148  PUSH EAX
005ed149  MOV ECX,dword ptr [EBP + 0xffffff28]
005ed14f  MOV EDX,dword ptr [ECX + 0xb4]
005ed155  PUSH EDX
005ed156  CALL 0x00686c48
005ed15b  ADD ESP,0x14
005ed15e  MOV EAX,dword ptr [EBP + 0xffffff28]
005ed164  CMP dword ptr [EAX + 0xbc],0x0
005ed16b  JNZ 0x005ed1bd
005ed16d  MOV ECX,dword ptr [EBP + 0xffffff28]
005ed173  CMP dword ptr [ECX + 0xbc],0x0
005ed17a  JNZ 0x005ed193
005ed17c  PUSH 0x13b
005ed181  PUSH 0x6d6530
005ed186  PUSH 0x6d64e0
005ed18b  CALL 0x005e9f20
005ed190  ADD ESP,0xc
005ed193  PUSH ECX
005ed194  MOV EAX,ESP
005ed196  MOV CX,word ptr [0x0075ee1c]
005ed19d  MOV word ptr [EAX],CX
005ed1a0  MOV DL,byte ptr [0x0075ee1e]
005ed1a6  MOV byte ptr [EAX + 0x2],DL
005ed1a9  PUSH -0x1
005ed1ab  PUSH 0x1f
005ed1ad  MOV ECX,dword ptr [EBP + 0xffffff28]
005ed1b3  CALL 0x005ecd00
005ed1b8  JMP 0x005ee4a6
005ed1bd  MOV EAX,dword ptr [EBP + 0xffffff28]
005ed1c3  MOV ECX,dword ptr [EAX + 0xbc]
005ed1c9  MOV EDX,dword ptr [ECX + 0x8]
005ed1cc  AND EDX,0x1
005ed1cf  JNZ 0x005ed1e8
005ed1d1  PUSH 0x13f
005ed1d6  PUSH 0x6d6530
005ed1db  PUSH 0x6d64c4
005ed1e0  CALL 0x005e9f20
005ed1e5  ADD ESP,0xc
005ed1e8  PUSH 0x10
005ed1ea  PUSH 0x0
005ed1ec  LEA ECX,[EBP + -0x48]
005ed1ef  PUSH ECX
005ed1f0  CALL 0x00686fa2
005ed1f5  ADD ESP,0xc
005ed1f8  PUSH 0x10
005ed1fa  PUSH 0x0
005ed1fc  MOV EDX,dword ptr [EBP + 0xffffff28]
005ed202  ADD EDX,0xc0
005ed208  PUSH EDX
005ed209  CALL 0x00686fa2
005ed20e  ADD ESP,0xc
005ed211  MOV EAX,dword ptr [EBP + 0xffffff28]
005ed217  MOV dword ptr [EAX + 0xc0],0xffffffff
005ed221  MOV ECX,dword ptr [EBP + 0xffffff28]
005ed227  MOVZX EDX,word ptr [ECX + 0x90]
005ed22e  TEST EDX,EDX
005ed230  JLE 0x005ed2b7
005ed236  MOV EAX,dword ptr [EBP + 0xffffff28]
005ed23c  MOVZX ECX,word ptr [EAX + 0x90]
005ed243  PUSH ECX
005ed244  LEA EDX,[EBP + 0xffffff5c]
005ed24a  PUSH EDX
005ed24b  CALL 0x006102a0
005ed250  ADD ESP,0x8
005ed253  MOV ECX,dword ptr [EAX]
005ed255  MOV dword ptr [EBP + 0xffffff6c],ECX
005ed25b  MOV EDX,dword ptr [EAX + 0x4]
005ed25e  MOV dword ptr [EBP + 0xffffff70],EDX
005ed264  MOV ECX,dword ptr [EAX + 0x8]
005ed267  MOV dword ptr [EBP + 0xffffff74],ECX
005ed26d  MOV EDX,dword ptr [EAX + 0xc]
005ed270  MOV dword ptr [EBP + 0xffffff78],EDX
005ed276  MOV EAX,dword ptr [EBP + 0xffffff6c]
005ed27c  MOV dword ptr [EBP + -0x48],EAX
005ed27f  MOV ECX,dword ptr [EBP + 0xffffff70]
005ed285  MOV dword ptr [EBP + -0x44],ECX
005ed288  MOV EDX,dword ptr [EBP + 0xffffff74]
005ed28e  MOV dword ptr [EBP + -0x40],EDX
005ed291  MOV EAX,dword ptr [EBP + 0xffffff78]
005ed297  MOV dword ptr [EBP + -0x3c],EAX
005ed29a  CMP dword ptr [EBP + -0x48],0x0
005ed29e  JNZ 0x005ed2b7
005ed2a0  PUSH 0x146
005ed2a5  PUSH 0x6d6530
005ed2aa  PUSH 0x6d64ac
005ed2af  CALL 0x005e9f20
005ed2b4  ADD ESP,0xc
005ed2b7  CMP dword ptr [EBP + 0xc],0x0
005ed2bb  JLE 0x005ed2ce
005ed2bd  MOV EDX,dword ptr [EBP + 0xffffff28]
005ed2c3  MOV EAX,dword ptr [EBP + 0xc]
005ed2c6  MOV dword ptr [EDX + 0xc4],EAX
005ed2cc  JMP 0x005ed300
005ed2ce  MOV ECX,dword ptr [EBP + 0xffffff28]
005ed2d4  MOVZX EDX,word ptr [ECX + 0x90]
005ed2db  TEST EDX,EDX
005ed2dd  JLE 0x005ed2f0
005ed2df  MOV EAX,dword ptr [EBP + 0xffffff28]
005ed2e5  MOV ECX,dword ptr [EBP + -0x44]
005ed2e8  MOV dword ptr [EAX + 0xc4],ECX
005ed2ee  JMP 0x005ed300
005ed2f0  MOV EDX,dword ptr [EBP + 0xffffff28]
005ed2f6  MOV dword ptr [EDX + 0xc4],0xb
005ed300  PUSH 0x0
005ed302  PUSH 0x0
005ed304  PUSH 0x0
005ed306  MOV EAX,dword ptr [EBP + 0xffffff28]
005ed30c  MOV ECX,dword ptr [EAX + 0xc4]
005ed312  SHL ECX,0x6
005ed315  PUSH ECX
005ed316  MOV EDX,dword ptr [EBP + 0xffffff28]
005ed31c  MOV EAX,dword ptr [EDX + 0xbc]
005ed322  PUSH EAX
005ed323  CALL 0x00686c42
005ed328  ADD ESP,0x14
005ed32b  MOVZX ECX,byte ptr [EBP + 0x10]
005ed32f  MOVZX EDX,byte ptr [0x0075ee1c]
005ed336  CMP ECX,EDX
005ed338  JNZ 0x005ed358
005ed33a  MOVZX EAX,byte ptr [EBP + 0x11]
005ed33e  MOVZX ECX,byte ptr [0x0075ee1d]
005ed345  CMP EAX,ECX
005ed347  JNZ 0x005ed358
005ed349  MOVZX EDX,byte ptr [EBP + 0x12]
005ed34d  MOVZX EAX,byte ptr [0x0075ee1e]
005ed354  CMP EDX,EAX
005ed356  JZ 0x005ed373
005ed358  MOV ECX,dword ptr [EBP + 0xffffff28]
005ed35e  ADD ECX,0xc8
005ed364  MOV DX,word ptr [EBP + 0x10]
005ed368  MOV word ptr [ECX],DX
005ed36b  MOV AL,byte ptr [EBP + 0x12]
005ed36e  MOV byte ptr [ECX + 0x2],AL
005ed371  JMP 0x005ed3bc
005ed373  MOV ECX,dword ptr [EBP + 0xffffff28]
005ed379  MOVZX EDX,word ptr [ECX + 0x90]
005ed380  TEST EDX,EDX
005ed382  JLE 0x005ed39e
005ed384  MOV EAX,dword ptr [EBP + 0xffffff28]
005ed38a  ADD EAX,0xc8
005ed38f  MOV CX,word ptr [EBP + -0x40]
005ed393  MOV word ptr [EAX],CX
005ed396  MOV DL,byte ptr [EBP + -0x3e]
005ed399  MOV byte ptr [EAX + 0x2],DL
005ed39c  JMP 0x005ed3bc
005ed39e  MOV EAX,dword ptr [EBP + 0xffffff28]
005ed3a4  ADD EAX,0xc8
005ed3a9  MOV CX,word ptr [0x0075ee1c]
005ed3b0  MOV word ptr [EAX],CX
005ed3b3  MOV DL,byte ptr [0x0075ee1e]
005ed3b9  MOV byte ptr [EAX + 0x2],DL
005ed3bc  MOV EAX,dword ptr [EBP + 0xffffff28]
005ed3c2  MOVZX ECX,word ptr [EAX + 0x90]
005ed3c9  TEST ECX,ECX
005ed3cb  JLE 0x005ed3d8
005ed3cd  MOV DL,byte ptr [EBP + -0x3d]
005ed3d0  MOV byte ptr [EBP + 0xffffff23],DL
005ed3d6  JMP 0x005ed3df
005ed3d8  MOV byte ptr [EBP + 0xffffff23],0x1
005ed3df  MOV EAX,dword ptr [EBP + 0xffffff28]
005ed3e5  MOV CL,byte ptr [EBP + 0xffffff23]
005ed3eb  MOV byte ptr [EAX + 0xcb],CL
005ed3f1  MOV EDX,dword ptr [EBP + 0xffffff28]
005ed3f7  CMP dword ptr [EDX + 0x60],0x100
005ed3fe  JL 0x005ed417
005ed400  PUSH 0x15c
005ed405  PUSH 0x6d6530
005ed40a  PUSH 0x6d6498
005ed40f  CALL 0x005e9f20
005ed414  ADD ESP,0xc
005ed417  MOV ECX,dword ptr [EBP + 0xffffff28]
005ed41d  CMP dword ptr [ECX + 0xc4],0x40
005ed424  JL 0x005ed43d
005ed426  PUSH 0x15d
005ed42b  PUSH 0x6d6530
005ed430  PUSH 0x6d6478
005ed435  CALL 0x005e9f20
005ed43a  ADD ESP,0xc
005ed43d  MOV EAX,dword ptr [EBP + 0xffffff28]
005ed443  MOV ECX,dword ptr [EAX + 0x60]
005ed446  SHL ECX,0x18
005ed449  MOV EDX,dword ptr [EBP + 0xffffff28]
005ed44f  MOV EAX,dword ptr [EDX + 0xc4]
005ed455  AND EAX,0x3f
005ed458  SHL EAX,0x12
005ed45b  OR ECX,EAX
005ed45d  MOV EDX,dword ptr [EBP + 0xffffff28]
005ed463  MOVZX EAX,byte ptr [EDX + 0xc8]
005ed46a  CDQ
005ed46b  AND EDX,0x3
005ed46e  ADD EAX,EDX
005ed470  SAR EAX,0x2
005ed473  SHL EAX,0xc
005ed476  OR ECX,EAX
005ed478  MOV EAX,dword ptr [EBP + 0xffffff28]
005ed47e  MOVZX EAX,byte ptr [EAX + 0xc9]
005ed485  CDQ
005ed486  AND EDX,0x3
005ed489  ADD EAX,EDX
005ed48b  SAR EAX,0x2
005ed48e  SHL EAX,0x6
005ed491  OR ECX,EAX
005ed493  MOV EDX,dword ptr [EBP + 0xffffff28]
005ed499  MOVZX EAX,byte ptr [EDX + 0xca]
005ed4a0  CDQ
005ed4a1  AND EDX,0x3
005ed4a4  ADD EAX,EDX
005ed4a6  SAR EAX,0x2
005ed4a9  OR ECX,EAX
005ed4ab  MOV dword ptr [EBP + -0x28],ECX
005ed4ae  PUSH 0x0
005ed4b0  MOV EAX,dword ptr [EBP + -0x28]
005ed4b3  PUSH EAX
005ed4b4  PUSH 0x53544e46
005ed4b9  MOV ECX,dword ptr [0x007960d8]
005ed4bf  MOV ECX,dword ptr [ECX + 0x18]
005ed4c2  CALL 0x00603c50
005ed4c7  MOV dword ptr [EBP + -0x1c],EAX
005ed4ca  CMP dword ptr [EBP + -0x1c],0x0
005ed4ce  JZ 0x005ed569
005ed4d4  MOV EDX,dword ptr [EBP + -0x1c]
005ed4d7  MOV EAX,dword ptr [EDX]
005ed4d9  MOV ECX,dword ptr [EBP + -0x1c]
005ed4dc  MOV EDX,dword ptr [EAX + 0x4]
005ed4df  CALL EDX
005ed4e1  TEST EAX,EAX
005ed4e3  JZ 0x005ed569
005ed4e9  PUSH 0x100
005ed4ee  PUSH 0x0
005ed4f0  MOV ECX,dword ptr [EBP + -0x1c]
005ed4f3  CALL 0x0061f2a0
005ed4f8  PUSH EAX
005ed4f9  MOV EAX,dword ptr [EBP + 0xffffff28]
005ed4ff  ADD EAX,0xd0
005ed504  PUSH EAX
005ed505  CALL 0x00686fde
005ed50a  ADD ESP,0xc
005ed50d  PUSH 0x1
005ed50f  MOV ECX,dword ptr [EBP + -0x1c]
005ed512  CALL 0x0061f2a0
005ed517  MOV ECX,dword ptr [EBP + 0xffffff28]
005ed51d  MOV DX,word ptr [EAX]
005ed520  MOV word ptr [ECX + 0x96],DX
005ed527  PUSH 0x2
005ed529  MOV ECX,dword ptr [EBP + -0x1c]
005ed52c  CALL 0x0061f2a0
005ed531  MOV ECX,dword ptr [EBP + 0xffffff28]
005ed537  ADD ECX,0xc0
005ed53d  MOV EDX,dword ptr [EAX]
005ed53f  MOV dword ptr [ECX],EDX
005ed541  MOV EDX,dword ptr [EAX + 0x4]
005ed544  MOV dword ptr [ECX + 0x4],EDX
005ed547  MOV EDX,dword ptr [EAX + 0x8]
005ed54a  MOV dword ptr [ECX + 0x8],EDX
005ed54d  MOV EAX,dword ptr [EAX + 0xc]
005ed550  MOV dword ptr [ECX + 0xc],EAX
005ed553  MOV ECX,dword ptr [EBP + 0xffffff28]
005ed559  MOV EDX,dword ptr [EBP + -0x1c]
005ed55c  MOV dword ptr [ECX + 0xb0],EDX
005ed562  JMP 0x005ee1ee
005ed569  CMP dword ptr [EBP + -0x1c],0x0
005ed56d  JZ 0x005ed581
005ed56f  MOV EAX,dword ptr [EBP + -0x1c]
005ed572  PUSH EAX
005ed573  MOV ECX,dword ptr [0x007960d8]
005ed579  MOV ECX,dword ptr [ECX + 0x18]
005ed57c  CALL 0x00604220
005ed581  PUSH 0x320
005ed586  CALL 0x00686d82
005ed58b  ADD ESP,0x4
005ed58e  MOV dword ptr [EBP + 0xffffff54],EAX
005ed594  MOV dword ptr [EBP + -0x4],0x0
005ed59b  CMP dword ptr [EBP + 0xffffff54],0x0
005ed5a2  JZ 0x005ed5b7
005ed5a4  MOV ECX,dword ptr [EBP + 0xffffff54]
005ed5aa  CALL 0x0061f3d0
005ed5af  MOV dword ptr [EBP + 0xffffff1c],EAX
005ed5b5  JMP 0x005ed5c1
005ed5b7  MOV dword ptr [EBP + 0xffffff1c],0x0
005ed5c1  MOV EDX,dword ptr [EBP + 0xffffff1c]
005ed5c7  MOV dword ptr [EBP + 0xffffff58],EDX
005ed5cd  MOV dword ptr [EBP + -0x4],0xffffffff
005ed5d4  MOV EAX,dword ptr [EBP + 0xffffff58]
005ed5da  MOV dword ptr [EBP + -0x38],EAX
005ed5dd  CMP dword ptr [EBP + -0x38],0x0
005ed5e1  JNZ 0x005ed5fa
005ed5e3  PUSH 0x177
005ed5e8  PUSH 0x6d6530
005ed5ed  PUSH 0x6d646c
005ed5f2  CALL 0x005e9f20
005ed5f7  ADD ESP,0xc
005ed5fa  MOV dword ptr [EBP + -0x34],0x0
005ed601  MOV EDX,dword ptr [EBP + -0x34]
005ed604  MOV dword ptr [EBP + -0x24],EDX
005ed607  MOV EAX,dword ptr [EBP + -0x24]
005ed60a  MOV dword ptr [EBP + -0x2c],EAX
005ed60d  PUSH 0x100
005ed612  PUSH 0x0
005ed614  MOV ECX,dword ptr [EBP + 0xffffff28]
005ed61a  ADD ECX,0xd0
005ed620  PUSH ECX
005ed621  CALL 0x00686fa2
005ed626  ADD ESP,0xc
005ed629  MOV dword ptr [EBP + -0x18],0x0
005ed630  JMP 0x005ed63b
005ed632  MOV EDX,dword ptr [EBP + -0x18]
005ed635  ADD EDX,0x1
005ed638  MOV dword ptr [EBP + -0x18],EDX
005ed63b  CMP dword ptr [EBP + -0x18],0x100
005ed642  JGE 0x005eda18
005ed648  MOV EAX,dword ptr [EBP + 0xffffff28]
005ed64e  MOVZX ECX,byte ptr [EAX + 0xcb]
005ed655  NEG ECX
005ed657  SBB ECX,ECX
005ed659  AND ECX,0xfffff000
005ed65f  ADD ECX,0x1000
005ed665  OR ECX,0x4
005ed668  PUSH ECX
005ed669  MOV EDX,dword ptr [EBP + -0x18]
005ed66c  PUSH EDX
005ed66d  CALL 0x005ee4c0
005ed672  ADD ESP,0x4
005ed675  PUSH EAX
005ed676  MOV EAX,dword ptr [EBP + 0xffffff28]
005ed67c  MOV ECX,dword ptr [EAX + 0xbc]
005ed682  PUSH ECX
005ed683  CALL 0x00686c3c
005ed688  ADD ESP,0xc
005ed68b  MOV EDX,dword ptr [EBP + 0xffffff28]
005ed691  MOV EAX,dword ptr [EDX + 0xbc]
005ed697  MOV ECX,dword ptr [EAX + 0x54]
005ed69a  MOV EDX,dword ptr [EBP + -0x2c]
005ed69d  CMP EDX,dword ptr [ECX + 0x68]
005ed6a0  JLE 0x005ed6ad
005ed6a2  MOV EAX,dword ptr [EBP + -0x2c]
005ed6a5  MOV dword ptr [EBP + 0xffffff18],EAX
005ed6ab  JMP 0x005ed6c5
005ed6ad  MOV ECX,dword ptr [EBP + 0xffffff28]
005ed6b3  MOV EDX,dword ptr [ECX + 0xbc]
005ed6b9  MOV EAX,dword ptr [EDX + 0x54]
005ed6bc  MOV ECX,dword ptr [EAX + 0x68]
005ed6bf  MOV dword ptr [EBP + 0xffffff18],ECX
005ed6c5  MOV EDX,dword ptr [EBP + 0xffffff18]
005ed6cb  MOV dword ptr [EBP + -0x2c],EDX
005ed6ce  MOV EAX,dword ptr [EBP + 0xffffff28]
005ed6d4  MOV ECX,dword ptr [EAX + 0xbc]
005ed6da  MOV EDX,dword ptr [ECX + 0x54]
005ed6dd  MOV EAX,dword ptr [EBP + 0xffffff28]
005ed6e3  MOV ECX,dword ptr [EAX + 0xbc]
005ed6e9  MOV EAX,dword ptr [ECX + 0x54]
005ed6ec  XOR ECX,ECX
005ed6ee  CMP dword ptr [EAX + 0x1c],0x0
005ed6f2  SETL CL
005ed6f5  SUB ECX,0x1
005ed6f8  AND ECX,0x40
005ed6fb  ADD ECX,-0x20
005ed6fe  MOV EAX,dword ptr [EDX + 0x1c]
005ed701  ADD EAX,ECX
005ed703  CDQ
005ed704  AND EDX,0x3f
005ed707  ADD EAX,EDX
005ed709  SAR EAX,0x6
005ed70c  MOV EDX,dword ptr [EBP + 0xffffff28]
005ed712  MOV ECX,dword ptr [EDX + 0xbc]
005ed718  MOV EDX,dword ptr [ECX + 0x54]
005ed71b  SUB EAX,dword ptr [EDX + 0x68]
005ed71e  SUB EAX,0x1
005ed721  CMP dword ptr [EBP + -0x24],EAX
005ed724  JLE 0x005ed731
005ed726  MOV EAX,dword ptr [EBP + -0x24]
005ed729  MOV dword ptr [EBP + 0xffffff14],EAX
005ed72f  JMP 0x005ed78a
005ed731  MOV ECX,dword ptr [EBP + 0xffffff28]
005ed737  MOV EDX,dword ptr [ECX + 0xbc]
005ed73d  MOV EAX,dword ptr [EDX + 0x54]
005ed740  MOV ECX,dword ptr [EBP + 0xffffff28]
005ed746  MOV EDX,dword ptr [ECX + 0xbc]
005ed74c  MOV ECX,dword ptr [EDX + 0x54]
005ed74f  XOR EDX,EDX
005ed751  CMP dword ptr [ECX + 0x1c],0x0
005ed755  SETL DL
005ed758  SUB EDX,0x1
005ed75b  AND EDX,0x40
005ed75e  ADD EDX,-0x20
005ed761  MOV EAX,dword ptr [EAX + 0x1c]
005ed764  ADD EAX,EDX
005ed766  CDQ
005ed767  AND EDX,0x3f
005ed76a  ADD EAX,EDX
005ed76c  SAR EAX,0x6
005ed76f  MOV ECX,dword ptr [EBP + 0xffffff28]
005ed775  MOV EDX,dword ptr [ECX + 0xbc]
005ed77b  MOV ECX,dword ptr [EDX + 0x54]
005ed77e  SUB EAX,dword ptr [ECX + 0x68]
005ed781  SUB EAX,0x1
005ed784  MOV dword ptr [EBP + 0xffffff14],EAX
005ed78a  MOV EDX,dword ptr [EBP + 0xffffff14]
005ed790  MOV dword ptr [EBP + -0x24],EDX
005ed793  MOV EAX,dword ptr [EBP + 0xffffff28]
005ed799  MOV ECX,dword ptr [EAX + 0xbc]
005ed79f  MOV EDX,dword ptr [ECX + 0x54]
005ed7a2  CMP dword ptr [EDX + 0x64],0x0
005ed7a6  JGE 0x005ed7c2
005ed7a8  MOV EAX,dword ptr [EBP + 0xffffff28]
005ed7ae  MOV ECX,dword ptr [EAX + 0xbc]
005ed7b4  MOV EDX,dword ptr [ECX + 0x54]
005ed7b7  MOV EAX,dword ptr [EDX + 0x64]
005ed7ba  MOV dword ptr [EBP + 0xffffff10],EAX
005ed7c0  JMP 0x005ed7cc
005ed7c2  MOV dword ptr [EBP + 0xffffff10],0x0
005ed7cc  MOV ECX,dword ptr [EBP + 0xffffff28]
005ed7d2  ADD ECX,dword ptr [EBP + -0x18]
005ed7d5  MOV DL,byte ptr [EBP + 0xffffff10]
005ed7db  MOV byte ptr [ECX + 0xd0],DL
005ed7e1  MOV EAX,dword ptr [EBP + 0xffffff28]
005ed7e7  MOV ECX,dword ptr [EAX + 0xbc]
005ed7ed  MOV EDX,dword ptr [ECX + 0x54]
005ed7f0  CMP dword ptr [EDX + 0x64],0x0
005ed7f4  JLE 0x005ed810
005ed7f6  MOV EAX,dword ptr [EBP + 0xffffff28]
005ed7fc  MOV ECX,dword ptr [EAX + 0xbc]
005ed802  MOV EDX,dword ptr [ECX + 0x54]
005ed805  MOV EAX,dword ptr [EDX + 0x64]
005ed808  MOV dword ptr [EBP + 0xffffff0c],EAX
005ed80e  JMP 0x005ed81a
005ed810  MOV dword ptr [EBP + 0xffffff0c],0x0
005ed81a  MOV ECX,dword ptr [EBP + 0xffffff28]
005ed820  MOV EDX,dword ptr [ECX + 0xbc]
005ed826  MOV EAX,dword ptr [EDX + 0x54]
005ed829  MOV ECX,dword ptr [EBP + 0xffffff28]
005ed82f  ADD ECX,dword ptr [EBP + -0x18]
005ed832  MOVSX EDX,byte ptr [ECX + 0xd0]
005ed839  NEG EDX
005ed83b  MOV ECX,dword ptr [EAX + 0x50]
005ed83e  ADD ECX,EDX
005ed840  ADD ECX,dword ptr [EBP + 0xffffff0c]
005ed846  MOV EDX,dword ptr [EBP + 0xffffff28]
005ed84c  MOV EAX,dword ptr [EDX + 0xbc]
005ed852  MOV EDX,dword ptr [EAX + 0x54]
005ed855  MOV EAX,dword ptr [EBP + 0xffffff28]
005ed85b  MOV EAX,dword ptr [EAX + 0xbc]
005ed861  MOV EAX,dword ptr [EAX + 0x54]
005ed864  XOR EBX,EBX
005ed866  CMP dword ptr [EAX + 0x40],0x0
005ed86a  SETL BL
005ed86d  SUB EBX,0x1
005ed870  AND EBX,0x40
005ed873  ADD EBX,-0x20
005ed876  MOV EAX,dword ptr [EDX + 0x40]
005ed879  ADD EAX,EBX
005ed87b  CDQ
005ed87c  AND EDX,0x3f
005ed87f  ADD EAX,EDX
005ed881  SAR EAX,0x6
005ed884  MOV EDX,dword ptr [EBP + 0xffffff28]
005ed88a  ADD EDX,dword ptr [EBP + -0x18]
005ed88d  MOVSX EDX,byte ptr [EDX + 0xd0]
005ed894  NEG EDX
005ed896  ADD EAX,EDX
005ed898  CMP ECX,EAX
005ed89a  JLE 0x005ed909
005ed89c  MOV EAX,dword ptr [EBP + 0xffffff28]
005ed8a2  MOV ECX,dword ptr [EAX + 0xbc]
005ed8a8  MOV EDX,dword ptr [ECX + 0x54]
005ed8ab  CMP dword ptr [EDX + 0x64],0x0
005ed8af  JLE 0x005ed8cb
005ed8b1  MOV EAX,dword ptr [EBP + 0xffffff28]
005ed8b7  MOV ECX,dword ptr [EAX + 0xbc]
005ed8bd  MOV EDX,dword ptr [ECX + 0x54]
005ed8c0  MOV EAX,dword ptr [EDX + 0x64]
005ed8c3  MOV dword ptr [EBP + 0xffffff08],EAX
005ed8c9  JMP 0x005ed8d5
005ed8cb  MOV dword ptr [EBP + 0xffffff08],0x0
005ed8d5  MOV ECX,dword ptr [EBP + 0xffffff28]
005ed8db  MOV EDX,dword ptr [ECX + 0xbc]
005ed8e1  MOV EAX,dword ptr [EDX + 0x54]
005ed8e4  MOV ECX,dword ptr [EBP + 0xffffff28]
005ed8ea  ADD ECX,dword ptr [EBP + -0x18]
005ed8ed  MOVSX EDX,byte ptr [ECX + 0xd0]
005ed8f4  NEG EDX
005ed8f6  MOV EAX,dword ptr [EAX + 0x50]
005ed8f9  ADD EAX,EDX
005ed8fb  ADD EAX,dword ptr [EBP + 0xffffff08]
005ed901  MOV dword ptr [EBP + 0xffffff04],EAX
005ed907  JMP 0x005ed961
005ed909  MOV ECX,dword ptr [EBP + 0xffffff28]
005ed90f  MOV EDX,dword ptr [ECX + 0xbc]
005ed915  MOV EAX,dword ptr [EDX + 0x54]
005ed918  MOV ECX,dword ptr [EBP + 0xffffff28]
005ed91e  MOV EDX,dword ptr [ECX + 0xbc]
005ed924  MOV ECX,dword ptr [EDX + 0x54]
005ed927  XOR EDX,EDX
005ed929  CMP dword ptr [ECX + 0x40],0x0
005ed92d  SETL DL
005ed930  SUB EDX,0x1
005ed933  AND EDX,0x40
005ed936  ADD EDX,-0x20
005ed939  MOV EAX,dword ptr [EAX + 0x40]
005ed93c  ADD EAX,EDX
005ed93e  CDQ
005ed93f  AND EDX,0x3f
005ed942  ADD EAX,EDX
005ed944  SAR EAX,0x6
005ed947  MOV ECX,dword ptr [EBP + 0xffffff28]
005ed94d  ADD ECX,dword ptr [EBP + -0x18]
005ed950  MOVSX EDX,byte ptr [ECX + 0xd0]
005ed957  NEG EDX
005ed959  ADD EAX,EDX
005ed95b  MOV dword ptr [EBP + 0xffffff04],EAX
005ed961  MOV EAX,dword ptr [EBP + 0xffffff04]
005ed967  MOV dword ptr [EBP + -0x54],EAX
005ed96a  MOV ECX,dword ptr [EBP + 0xffffff28]
005ed970  MOV EDX,dword ptr [ECX + 0xbc]
005ed976  MOV EAX,dword ptr [EDX + 0x54]
005ed979  CMP dword ptr [EAX + 0x50],0x0
005ed97d  JZ 0x005ed9ee
005ed97f  MOV ECX,dword ptr [EBP + 0xffffff28]
005ed985  MOV EDX,dword ptr [ECX + 0xbc]
005ed98b  MOV EAX,dword ptr [EDX + 0x54]
005ed98e  MOV ECX,dword ptr [EBP + 0xffffff28]
005ed994  ADD ECX,dword ptr [EBP + -0x18]
005ed997  MOVSX EDX,byte ptr [ECX + 0xd0]
005ed99e  NEG EDX
005ed9a0  MOV EAX,dword ptr [EAX + 0x50]
005ed9a3  LEA ECX,[EAX + EDX*0x1 + 0x2]
005ed9a7  CMP dword ptr [EBP + -0x54],ECX
005ed9aa  JGE 0x005ed9b7
005ed9ac  MOV EDX,dword ptr [EBP + -0x54]
005ed9af  MOV dword ptr [EBP + 0xffffff00],EDX
005ed9b5  JMP 0x005ed9e5
005ed9b7  MOV EAX,dword ptr [EBP + 0xffffff28]
005ed9bd  MOV ECX,dword ptr [EAX + 0xbc]
005ed9c3  MOV EDX,dword ptr [ECX + 0x54]
005ed9c6  MOV EAX,dword ptr [EBP + 0xffffff28]
005ed9cc  ADD EAX,dword ptr [EBP + -0x18]
005ed9cf  MOVSX ECX,byte ptr [EAX + 0xd0]
005ed9d6  NEG ECX
005ed9d8  MOV EDX,dword ptr [EDX + 0x50]
005ed9db  LEA EAX,[EDX + ECX*0x1 + 0x2]
005ed9df  MOV dword ptr [EBP + 0xffffff00],EAX
005ed9e5  MOV ECX,dword ptr [EBP + 0xffffff00]
005ed9eb  MOV dword ptr [EBP + -0x54],ECX
005ed9ee  MOV EDX,dword ptr [EBP + -0x34]
005ed9f1  CMP EDX,dword ptr [EBP + -0x54]
005ed9f4  JLE 0x005eda01
005ed9f6  MOV EAX,dword ptr [EBP + -0x34]
005ed9f9  MOV dword ptr [EBP + 0xfffffefc],EAX
005ed9ff  JMP 0x005eda0a
005eda01  MOV ECX,dword ptr [EBP + -0x54]
005eda04  MOV dword ptr [EBP + 0xfffffefc],ECX
005eda0a  MOV EDX,dword ptr [EBP + 0xfffffefc]
005eda10  MOV dword ptr [EBP + -0x34],EDX
005eda13  JMP 0x005ed632
005eda18  MOV EAX,dword ptr [EBP + -0x24]
005eda1b  MOV ECX,dword ptr [EBP + -0x2c]
005eda1e  LEA EDX,[ECX + EAX*0x1 + 0x1]
005eda22  MOV dword ptr [EBP + -0x30],EDX
005eda25  CMP dword ptr [EBP + -0x30],0x0
005eda29  JNZ 0x005eda42
005eda2b  PUSH 0x18b
005eda30  PUSH 0x6d6530
005eda35  PUSH 0x6d6464
005eda3a  CALL 0x005e9f20
005eda3f  ADD ESP,0xc
005eda42  MOV ECX,dword ptr [EBP + -0x30]
005eda45  SHL ECX,0x2
005eda48  IMUL ECX,dword ptr [EBP + -0x34]
005eda4c  MOV dword ptr [EBP + -0x50],ECX
005eda4f  MOV EAX,dword ptr [EBP + -0x30]
005eda52  IMUL EAX,dword ptr [EBP + -0x34]
005eda56  XOR ECX,ECX
005eda58  MOV EDX,0x4
005eda5d  MUL EDX
005eda5f  SETO CL
005eda62  NEG ECX
005eda64  OR ECX,EAX
005eda66  PUSH ECX
005eda67  CALL 0x00686d82
005eda6c  ADD ESP,0x4
005eda6f  MOV dword ptr [EBP + 0xffffff50],EAX
005eda75  MOV EAX,dword ptr [EBP + 0xffffff50]
005eda7b  MOV dword ptr [EBP + -0x10],EAX
005eda7e  MOV ECX,dword ptr [EBP + -0x30]
005eda81  ADD ECX,0x1
005eda84  MOV EDX,dword ptr [EBP + 0xffffff28]
005eda8a  MOV word ptr [EDX + 0x96],CX
005eda91  MOV dword ptr [EBP + -0x18],0x0
005eda98  JMP 0x005edaa3
005eda9a  MOV EAX,dword ptr [EBP + -0x18]
005eda9d  ADD EAX,0x1
005edaa0  MOV dword ptr [EBP + -0x18],EAX
005edaa3  CMP dword ptr [EBP + -0x18],0x100
005edaaa  JGE 0x005edfba
005edab0  MOV dword ptr [EBP + -0x58],0x1
005edab7  MOV dword ptr [EBP + -0x68],0x8
005edabe  MOV ECX,dword ptr [EBP + 0xffffff28]
005edac4  MOVZX EDX,byte ptr [ECX + 0xcb]
005edacb  NEG EDX
005edacd  SBB EDX,EDX
005edacf  AND EDX,0xfffff000
005edad5  ADD EDX,0x1000
005edadb  OR EDX,0x4
005edade  PUSH EDX
005edadf  MOV EAX,dword ptr [EBP + -0x18]
005edae2  PUSH EAX
005edae3  CALL 0x005ee4c0
005edae8  ADD ESP,0x4
005edaeb  PUSH EAX
005edaec  MOV ECX,dword ptr [EBP + 0xffffff28]
005edaf2  MOV EDX,dword ptr [ECX + 0xbc]
005edaf8  PUSH EDX
005edaf9  CALL 0x00686c3c
005edafe  ADD ESP,0xc
005edb01  MOV EAX,dword ptr [EBP + 0xffffff28]
005edb07  MOV ECX,dword ptr [EAX + 0xbc]
005edb0d  MOV EDX,dword ptr [ECX + 0x54]
005edb10  MOV EAX,dword ptr [EDX + 0x58]
005edb13  MOV dword ptr [EBP + -0x70],EAX
005edb16  MOV ECX,dword ptr [EBP + 0xffffff28]
005edb1c  MOV EDX,dword ptr [ECX + 0xbc]
005edb22  MOV EAX,dword ptr [EDX + 0x54]
005edb25  MOV ECX,dword ptr [EAX + 0x54]
005edb28  MOV dword ptr [EBP + -0x74],ECX
005edb2b  MOV EDX,dword ptr [EBP + 0xffffff28]
005edb31  MOV EAX,dword ptr [EDX + 0xbc]
005edb37  MOV ECX,dword ptr [EAX + 0x54]
005edb3a  CMP dword ptr [ECX + 0x64],0x0
005edb3e  JLE 0x005edb5a
005edb40  MOV EDX,dword ptr [EBP + 0xffffff28]
005edb46  MOV EAX,dword ptr [EDX + 0xbc]
005edb4c  MOV ECX,dword ptr [EAX + 0x54]
005edb4f  MOV EDX,dword ptr [ECX + 0x64]
005edb52  MOV dword ptr [EBP + 0xfffffef8],EDX
005edb58  JMP 0x005edb64
005edb5a  MOV dword ptr [EBP + 0xfffffef8],0x0
005edb64  MOV EAX,dword ptr [EBP + 0xffffff28]
005edb6a  MOV ECX,dword ptr [EAX + 0xbc]
005edb70  MOV EDX,dword ptr [ECX + 0x54]
005edb73  MOV EAX,dword ptr [EBP + 0xffffff28]
005edb79  ADD EAX,dword ptr [EBP + -0x18]
005edb7c  MOVSX ECX,byte ptr [EAX + 0xd0]
005edb83  NEG ECX
005edb85  MOV ESI,dword ptr [EDX + 0x50]
005edb88  ADD ESI,ECX
005edb8a  ADD ESI,dword ptr [EBP + 0xfffffef8]
005edb90  MOV EDX,dword ptr [EBP + 0xffffff28]
005edb96  MOV EAX,dword ptr [EDX + 0xbc]
005edb9c  MOV ECX,dword ptr [EAX + 0x54]
005edb9f  MOV EDX,dword ptr [EBP + 0xffffff28]
005edba5  MOV EAX,dword ptr [EDX + 0xbc]
005edbab  MOV EDX,dword ptr [EAX + 0x54]
005edbae  XOR EAX,EAX
005edbb0  CMP dword ptr [EDX + 0x40],0x0
005edbb4  SETL AL
005edbb7  SUB EAX,0x1
005edbba  AND EAX,0x40
005edbbd  ADD EAX,-0x20
005edbc0  MOV ECX,dword ptr [ECX + 0x40]
005edbc3  ADD EAX,ECX
005edbc5  CDQ
005edbc6  AND EDX,0x3f
005edbc9  ADD EAX,EDX
005edbcb  SAR EAX,0x6
005edbce  MOV EDX,dword ptr [EBP + 0xffffff28]
005edbd4  ADD EDX,dword ptr [EBP + -0x18]
005edbd7  MOVSX ECX,byte ptr [EDX + 0xd0]
005edbde  NEG ECX
005edbe0  ADD EAX,ECX
005edbe2  CMP ESI,EAX
005edbe4  JLE 0x005edc53
005edbe6  MOV EDX,dword ptr [EBP + 0xffffff28]
005edbec  MOV EAX,dword ptr [EDX + 0xbc]
005edbf2  MOV ECX,dword ptr [EAX + 0x54]
005edbf5  CMP dword ptr [ECX + 0x64],0x0
005edbf9  JLE 0x005edc15
005edbfb  MOV EDX,dword ptr [EBP + 0xffffff28]
005edc01  MOV EAX,dword ptr [EDX + 0xbc]
005edc07  MOV ECX,dword ptr [EAX + 0x54]
005edc0a  MOV EDX,dword ptr [ECX + 0x64]
005edc0d  MOV dword ptr [EBP + 0xfffffef4],EDX
005edc13  JMP 0x005edc1f
005edc15  MOV dword ptr [EBP + 0xfffffef4],0x0
005edc1f  MOV EAX,dword ptr [EBP + 0xffffff28]
005edc25  MOV ECX,dword ptr [EAX + 0xbc]
005edc2b  MOV EDX,dword ptr [ECX + 0x54]
005edc2e  MOV EAX,dword ptr [EBP + 0xffffff28]
005edc34  ADD EAX,dword ptr [EBP + -0x18]
005edc37  MOVSX ECX,byte ptr [EAX + 0xd0]
005edc3e  NEG ECX
005edc40  MOV EDX,dword ptr [EDX + 0x50]
005edc43  ADD EDX,ECX
005edc45  ADD EDX,dword ptr [EBP + 0xfffffef4]
005edc4b  MOV dword ptr [EBP + 0xfffffef0],EDX
005edc51  JMP 0x005edcab
005edc53  MOV EAX,dword ptr [EBP + 0xffffff28]
005edc59  MOV ECX,dword ptr [EAX + 0xbc]
005edc5f  MOV EDX,dword ptr [ECX + 0x54]
005edc62  MOV EAX,dword ptr [EBP + 0xffffff28]
005edc68  MOV ECX,dword ptr [EAX + 0xbc]
005edc6e  MOV EAX,dword ptr [ECX + 0x54]
005edc71  XOR ECX,ECX
005edc73  CMP dword ptr [EAX + 0x40],0x0
005edc77  SETL CL
005edc7a  SUB ECX,0x1
005edc7d  AND ECX,0x40
005edc80  ADD ECX,-0x20
005edc83  MOV EAX,dword ptr [EDX + 0x40]
005edc86  ADD EAX,ECX
005edc88  CDQ
005edc89  AND EDX,0x3f
005edc8c  ADD EAX,EDX
005edc8e  SAR EAX,0x6
005edc91  MOV EDX,dword ptr [EBP + 0xffffff28]
005edc97  ADD EDX,dword ptr [EBP + -0x18]
005edc9a  MOVSX ECX,byte ptr [EDX + 0xd0]
005edca1  NEG ECX
005edca3  ADD EAX,ECX
005edca5  MOV dword ptr [EBP + 0xfffffef0],EAX
005edcab  MOV EDX,dword ptr [EBP + 0xfffffef0]
005edcb1  MOV dword ptr [EBP + -0x14],EDX
005edcb4  MOV EAX,dword ptr [EBP + 0xffffff28]
005edcba  MOV ECX,dword ptr [EAX + 0xbc]
005edcc0  MOV EDX,dword ptr [ECX + 0x54]
005edcc3  CMP dword ptr [EDX + 0x50],0x0
005edcc7  JZ 0x005edd38
005edcc9  MOV EAX,dword ptr [EBP + 0xffffff28]
005edccf  MOV ECX,dword ptr [EAX + 0xbc]
005edcd5  MOV EDX,dword ptr [ECX + 0x54]
005edcd8  MOV EAX,dword ptr [EBP + 0xffffff28]
005edcde  ADD EAX,dword ptr [EBP + -0x18]
005edce1  MOVSX ECX,byte ptr [EAX + 0xd0]
005edce8  NEG ECX
005edcea  MOV EDX,dword ptr [EDX + 0x50]
005edced  LEA EAX,[EDX + ECX*0x1 + 0x2]
005edcf1  CMP dword ptr [EBP + -0x14],EAX
005edcf4  JGE 0x005edd01
005edcf6  MOV ECX,dword ptr [EBP + -0x14]
005edcf9  MOV dword ptr [EBP + 0xfffffeec],ECX
005edcff  JMP 0x005edd2f
005edd01  MOV EDX,dword ptr [EBP + 0xffffff28]
005edd07  MOV EAX,dword ptr [EDX + 0xbc]
005edd0d  MOV ECX,dword ptr [EAX + 0x54]
005edd10  MOV EDX,dword ptr [EBP + 0xffffff28]
005edd16  ADD EDX,dword ptr [EBP + -0x18]
005edd19  MOVSX EAX,byte ptr [EDX + 0xd0]
005edd20  NEG EAX
005edd22  MOV ECX,dword ptr [ECX + 0x50]
005edd25  LEA EDX,[ECX + EAX*0x1 + 0x2]
005edd29  MOV dword ptr [EBP + 0xfffffeec],EDX
005edd2f  MOV EAX,dword ptr [EBP + 0xfffffeec]
005edd35  MOV dword ptr [EBP + -0x14],EAX
005edd38  CMP dword ptr [EBP + -0x14],0x0
005edd3c  JG 0x005edd55
005edd3e  PUSH 0x1a7
005edd43  PUSH 0x6d6530
005edd48  PUSH 0x6d6458
005edd4d  CALL 0x005e9f20
005edd52  ADD ESP,0xc
005edd55  CMP dword ptr [EBP + -0x14],0x0
005edd59  JNZ 0x005edd62
005edd5b  MOV dword ptr [EBP + -0x14],0x1
005edd62  CMP dword ptr [EBP + -0x14],0x0
005edd66  JGE 0x005edd6d
005edd68  JMP 0x005eda9a
005edd6d  MOV EDX,dword ptr [EBP + -0x50]
005edd70  PUSH EDX
005edd71  PUSH 0x0
005edd73  MOV EAX,dword ptr [EBP + -0x10]
005edd76  PUSH EAX
005edd77  CALL 0x00686fa2
005edd7c  ADD ESP,0xc
005edd7f  MOV ECX,dword ptr [EBP + 0xffffff28]
005edd85  MOV EDX,dword ptr [ECX + 0xbc]
005edd8b  MOV EAX,dword ptr [EDX + 0x54]
005edd8e  MOV ECX,dword ptr [EAX + 0x68]
005edd91  CMP ECX,dword ptr [EBP + -0x2c]
005edd94  JLE 0x005eddad
005edd96  PUSH 0x1b0
005edd9b  PUSH 0x6d6530
005edda0  PUSH 0x6d6424
005edda5  CALL 0x005e9f20
005eddaa  ADD ESP,0xc
005eddad  MOV dword ptr [EBP + -0x5c],0x0
005eddb4  MOV EAX,dword ptr [EBP + 0xffffff28]
005eddba  MOV ECX,dword ptr [EAX + 0xbc]
005eddc0  MOV EDX,dword ptr [ECX + 0x54]
005eddc3  MOV EAX,dword ptr [EBP + -0x2c]
005eddc6  SUB EAX,dword ptr [EDX + 0x68]
005eddc9  MOV dword ptr [EBP + -0x6c],EAX
005eddcc  JMP 0x005edde0
005eddce  MOV ECX,dword ptr [EBP + -0x5c]
005eddd1  ADD ECX,0x1
005eddd4  MOV dword ptr [EBP + -0x5c],ECX
005eddd7  MOV EDX,dword ptr [EBP + -0x6c]
005eddda  ADD EDX,0x1
005edddd  MOV dword ptr [EBP + -0x6c],EDX
005edde0  MOV EAX,dword ptr [EBP + 0xffffff28]
005edde6  MOV ECX,dword ptr [EAX + 0xbc]
005eddec  MOV EDX,dword ptr [ECX + 0x54]
005eddef  MOV EAX,dword ptr [EBP + -0x5c]
005eddf2  CMP EAX,dword ptr [EDX + 0x4c]
005eddf5  JGE 0x005edf9b
005eddfb  MOV dword ptr [EBP + -0x60],0x0
005ede02  MOV ECX,dword ptr [EBP + 0xffffff28]
005ede08  MOV EDX,dword ptr [ECX + 0xbc]
005ede0e  MOV EAX,dword ptr [EDX + 0x54]
005ede11  CMP dword ptr [EAX + 0x64],0x0
005ede15  JLE 0x005ede31
005ede17  MOV ECX,dword ptr [EBP + 0xffffff28]
005ede1d  MOV EDX,dword ptr [ECX + 0xbc]
005ede23  MOV EAX,dword ptr [EDX + 0x54]
005ede26  MOV ECX,dword ptr [EAX + 0x64]
005ede29  MOV dword ptr [EBP + 0xfffffee8],ECX
005ede2f  JMP 0x005ede3b
005ede31  MOV dword ptr [EBP + 0xfffffee8],0x0
005ede3b  MOV EDX,dword ptr [EBP + 0xfffffee8]
005ede41  MOV dword ptr [EBP + -0x64],EDX
005ede44  JMP 0x005ede58
005ede46  MOV EAX,dword ptr [EBP + -0x60]
005ede49  ADD EAX,0x1
005ede4c  MOV dword ptr [EBP + -0x60],EAX
005ede4f  MOV ECX,dword ptr [EBP + -0x64]
005ede52  ADD ECX,0x1
005ede55  MOV dword ptr [EBP + -0x64],ECX
005ede58  MOV EDX,dword ptr [EBP + 0xffffff28]
005ede5e  MOV EAX,dword ptr [EDX + 0xbc]
005ede64  MOV ECX,dword ptr [EAX + 0x54]
005ede67  MOV EDX,dword ptr [EBP + -0x60]
005ede6a  CMP EDX,dword ptr [ECX + 0x50]
005ede6d  JGE 0x005edf96
005ede73  CMP dword ptr [EBP + -0x64],0x0
005ede77  JGE 0x005ede90
005ede79  PUSH 0x1b3
005ede7e  PUSH 0x6d6530
005ede83  PUSH 0x6d6418
005ede88  CALL 0x005e9f20
005ede8d  ADD ESP,0xc
005ede90  MOV ECX,dword ptr [EBP + 0xffffff28]
005ede96  MOV EDX,dword ptr [ECX + 0xbc]
005ede9c  MOV EAX,dword ptr [EDX + 0x54]
005ede9f  MOVSX ECX,byte ptr [EAX + 0x5e]
005edea3  CMP ECX,0x1
005edea6  JNZ 0x005edf1a
005edea8  MOV ECX,dword ptr [EBP + -0x5c]
005edeab  IMUL ECX,dword ptr [EBP + -0x74]
005edeaf  MOV EAX,dword ptr [EBP + -0x60]
005edeb2  CDQ
005edeb3  AND EDX,0x7
005edeb6  ADD EAX,EDX
005edeb8  SAR EAX,0x3
005edebb  ADD EAX,dword ptr [EBP + -0x70]
005edebe  MOVZX EDX,byte ptr [EAX + ECX*0x1]
005edec2  MOV ECX,dword ptr [EBP + -0x60]
005edec5  AND ECX,0x80000007
005edecb  JNS 0x005eded2
005edecd  DEC ECX
005edece  OR ECX,0xfffffff8
005eded1  INC ECX
005eded2  MOV EAX,0x80
005eded7  SAR EAX,CL
005eded9  AND EDX,EAX
005ededb  MOV ECX,dword ptr [EBP + -0x6c]
005edede  IMUL ECX,dword ptr [EBP + -0x14]
005edee2  ADD ECX,dword ptr [EBP + -0x64]
005edee5  MOV EAX,dword ptr [EBP + -0x10]
005edee8  MOV byte ptr [EAX + ECX*0x4 + 0x3],DL
005edeec  MOV ECX,dword ptr [EBP + -0x6c]
005edeef  IMUL ECX,dword ptr [EBP + -0x14]
005edef3  ADD ECX,dword ptr [EBP + -0x64]
005edef6  MOV EDX,dword ptr [EBP + -0x10]
005edef9  MOVZX EAX,byte ptr [EDX + ECX*0x4 + 0x3]
005edefe  NEG EAX
005edf00  SBB EAX,EAX
005edf02  AND EAX,0xff
005edf07  MOV ECX,dword ptr [EBP + -0x6c]
005edf0a  IMUL ECX,dword ptr [EBP + -0x14]
005edf0e  ADD ECX,dword ptr [EBP + -0x64]
005edf11  MOV EDX,dword ptr [EBP + -0x10]
005edf14  MOV byte ptr [EDX + ECX*0x4 + 0x3],AL
005edf18  JMP 0x005edf3b
005edf1a  MOV EAX,dword ptr [EBP + -0x5c]
005edf1d  IMUL EAX,dword ptr [EBP + -0x74]
005edf21  ADD EAX,dword ptr [EBP + -0x60]
005edf24  MOV ECX,dword ptr [EBP + -0x6c]
005edf27  IMUL ECX,dword ptr [EBP + -0x14]
005edf2b  ADD ECX,dword ptr [EBP + -0x64]
005edf2e  MOV EDX,dword ptr [EBP + -0x10]
005edf31  MOV ESI,dword ptr [EBP + -0x70]
005edf34  MOV AL,byte ptr [ESI + EAX*0x1]
005edf37  MOV byte ptr [EDX + ECX*0x4 + 0x3],AL
005edf3b  MOV ECX,dword ptr [EBP + -0x6c]
005edf3e  IMUL ECX,dword ptr [EBP + -0x14]
005edf42  ADD ECX,dword ptr [EBP + -0x64]
005edf45  MOV EDX,dword ptr [EBP + -0x10]
005edf48  MOV EAX,dword ptr [EBP + 0xffffff28]
005edf4e  MOV AL,byte ptr [EAX + 0xca]
005edf54  MOV byte ptr [EDX + ECX*0x4 + 0x2],AL
005edf58  MOV ECX,dword ptr [EBP + -0x6c]
005edf5b  IMUL ECX,dword ptr [EBP + -0x14]
005edf5f  ADD ECX,dword ptr [EBP + -0x64]
005edf62  MOV EDX,dword ptr [EBP + -0x10]
005edf65  MOV EAX,dword ptr [EBP + 0xffffff28]
005edf6b  MOV AL,byte ptr [EAX + 0xc9]
005edf71  MOV byte ptr [EDX + ECX*0x4 + 0x1],AL
005edf75  MOV ECX,dword ptr [EBP + -0x6c]
005edf78  IMUL ECX,dword ptr [EBP + -0x14]
005edf7c  ADD ECX,dword ptr [EBP + -0x64]
005edf7f  MOV EDX,dword ptr [EBP + -0x10]
005edf82  MOV EAX,dword ptr [EBP + 0xffffff28]
005edf88  MOV AL,byte ptr [EAX + 0xc8]
005edf8e  MOV byte ptr [EDX + ECX*0x4],AL
005edf91  JMP 0x005ede46
005edf96  JMP 0x005eddce
005edf9b  PUSH 0x1
005edf9d  PUSH 0x0
005edf9f  PUSH 0x4
005edfa1  MOV ECX,dword ptr [EBP + -0x30]
005edfa4  PUSH ECX
005edfa5  MOV EDX,dword ptr [EBP + -0x14]
005edfa8  PUSH EDX
005edfa9  MOV EAX,dword ptr [EBP + -0x10]
005edfac  PUSH EAX
005edfad  MOV ECX,dword ptr [EBP + -0x38]
005edfb0  CALL 0x006209d0
005edfb5  JMP 0x005eda9a
005edfba  MOV ECX,dword ptr [EBP + -0x10]
005edfbd  MOV dword ptr [EBP + 0xffffff4c],ECX
005edfc3  MOV EDX,dword ptr [EBP + 0xffffff4c]
005edfc9  PUSH EDX
005edfca  CALL 0x00686cae
005edfcf  ADD ESP,0x4
005edfd2  PUSH 0x1
005edfd4  PUSH 0x4
005edfd6  MOV ECX,dword ptr [EBP + -0x38]
005edfd9  CALL 0x00620fe0
005edfde  MOV ECX,dword ptr [EBP + -0x38]
005edfe1  CALL 0x00620540
005edfe6  PUSH EAX
005edfe7  CALL 0x00686d82
005edfec  ADD ESP,0x4
005edfef  MOV dword ptr [EBP + 0xffffff48],EAX
005edff5  MOV EAX,dword ptr [EBP + 0xffffff48]
005edffb  MOV dword ptr [EBP + -0x20],EAX
005edffe  MOV ECX,dword ptr [EBP + -0x20]
005ee001  PUSH ECX
005ee002  MOV ECX,dword ptr [EBP + -0x38]
005ee005  CALL 0x006201c0
005ee00a  MOV dword ptr [EBP + -0x4c],EAX
005ee00d  MOV EDX,dword ptr [EBP + 0xffffff28]
005ee013  MOV ECX,dword ptr [EDX + 0x60]
005ee016  SHL ECX,0x18
005ee019  MOV EDX,dword ptr [EBP + 0xffffff28]
005ee01f  MOV EAX,dword ptr [EDX + 0xc4]
005ee025  AND EAX,0x3f
005ee028  SHL EAX,0x12
005ee02b  OR ECX,EAX
005ee02d  MOV EDX,dword ptr [EBP + 0xffffff28]
005ee033  MOVZX EAX,byte ptr [EDX + 0xc8]
005ee03a  CDQ
005ee03b  AND EDX,0x3
005ee03e  ADD EAX,EDX
005ee040  SAR EAX,0x2
005ee043  SHL EAX,0xc
005ee046  OR ECX,EAX
005ee048  MOV EAX,dword ptr [EBP + 0xffffff28]
005ee04e  MOVZX EAX,byte ptr [EAX + 0xc9]
005ee055  CDQ
005ee056  AND EDX,0x3
005ee059  ADD EAX,EDX
005ee05b  SAR EAX,0x2
005ee05e  SHL EAX,0x6
005ee061  OR ECX,EAX
005ee063  MOV EDX,dword ptr [EBP + 0xffffff28]
005ee069  MOVZX EAX,byte ptr [EDX + 0xca]
005ee070  CDQ
005ee071  AND EDX,0x3
005ee074  ADD EAX,EDX
005ee076  SAR EAX,0x2
005ee079  OR ECX,EAX
005ee07b  MOV dword ptr [EBP + -0x28],ECX
005ee07e  PUSH 0x96c
005ee083  CALL 0x00686d82
005ee088  ADD ESP,0x4
005ee08b  MOV dword ptr [EBP + 0xffffff40],EAX
005ee091  MOV dword ptr [EBP + -0x4],0x1
005ee098  CMP dword ptr [EBP + 0xffffff40],0x0
005ee09f  JZ 0x005ee0ce
005ee0a1  MOV EAX,[0x007960d8]
005ee0a6  MOV ECX,dword ptr [EAX + 0x18]
005ee0a9  PUSH ECX
005ee0aa  MOV EDX,dword ptr [EBP + -0x4c]
005ee0ad  PUSH EDX
005ee0ae  MOV EAX,dword ptr [EBP + -0x20]
005ee0b1  PUSH EAX
005ee0b2  MOV ECX,dword ptr [EBP + -0x28]
005ee0b5  PUSH ECX
005ee0b6  PUSH 0x53544e46
005ee0bb  MOV ECX,dword ptr [EBP + 0xffffff40]
005ee0c1  CALL 0x005ec560
005ee0c6  MOV dword ptr [EBP + 0xfffffee4],EAX
005ee0cc  JMP 0x005ee0d8
005ee0ce  MOV dword ptr [EBP + 0xfffffee4],0x0
005ee0d8  MOV EDX,dword ptr [EBP + 0xfffffee4]
005ee0de  MOV dword ptr [EBP + 0xffffff44],EDX
005ee0e4  MOV dword ptr [EBP + -0x4],0xffffffff
005ee0eb  MOV EAX,dword ptr [EBP + 0xffffff28]
005ee0f1  MOV ECX,dword ptr [EBP + 0xffffff44]
005ee0f7  MOV dword ptr [EAX + 0xb0],ECX
005ee0fd  MOV EDX,dword ptr [EBP + 0xffffff28]
005ee103  MOV EAX,dword ptr [EDX + 0xb0]
005ee109  PUSH EAX
005ee10a  MOV ECX,dword ptr [0x007960d8]
005ee110  MOV ECX,dword ptr [ECX + 0x18]
005ee113  CALL 0x00603ae0
005ee118  PUSH 0x1
005ee11a  PUSH 0x1
005ee11c  PUSH 0x100
005ee121  PUSH 0x1
005ee123  MOV EDX,dword ptr [EBP + 0xffffff28]
005ee129  ADD EDX,0xd0
005ee12f  PUSH EDX
005ee130  PUSH 0x0
005ee132  MOV EAX,dword ptr [EBP + 0xffffff28]
005ee138  MOV ECX,dword ptr [EAX + 0xb0]
005ee13e  CALL 0x0061f1c0
005ee143  PUSH 0x1
005ee145  PUSH 0x1
005ee147  PUSH 0x2
005ee149  PUSH 0x1
005ee14b  MOV ECX,dword ptr [EBP + 0xffffff28]
005ee151  ADD ECX,0x96
005ee157  PUSH ECX
005ee158  PUSH 0x1
005ee15a  MOV EDX,dword ptr [EBP + 0xffffff28]
005ee160  MOV ECX,dword ptr [EDX + 0xb0]
005ee166  CALL 0x0061f1c0
005ee16b  PUSH 0x1
005ee16d  PUSH 0x0
005ee16f  PUSH 0x10
005ee171  PUSH 0x1
005ee173  MOV EAX,dword ptr [EBP + 0xffffff28]
005ee179  ADD EAX,0xc0
005ee17e  PUSH EAX
005ee17f  PUSH 0x2
005ee181  MOV ECX,dword ptr [EBP + 0xffffff28]
005ee187  MOV ECX,dword ptr [ECX + 0xb0]
005ee18d  CALL 0x0061f1c0
005ee192  MOV EDX,dword ptr [EBP + -0x20]
005ee195  MOV dword ptr [EBP + 0xffffff3c],EDX
005ee19b  MOV EAX,dword ptr [EBP + 0xffffff3c]
005ee1a1  PUSH EAX
005ee1a2  CALL 0x00686cae
005ee1a7  ADD ESP,0x4
005ee1aa  MOV ECX,dword ptr [EBP + -0x38]
005ee1ad  MOV dword ptr [EBP + 0xffffff34],ECX
005ee1b3  MOV EDX,dword ptr [EBP + 0xffffff34]
005ee1b9  MOV dword ptr [EBP + 0xffffff38],EDX
005ee1bf  CMP dword ptr [EBP + 0xffffff38],0x0
005ee1c6  JZ 0x005ee1e4
005ee1c8  PUSH 0x1
005ee1ca  MOV EAX,dword ptr [EBP + 0xffffff38]
005ee1d0  MOV EDX,dword ptr [EAX]
005ee1d2  MOV ECX,dword ptr [EBP + 0xffffff38]
005ee1d8  MOV EAX,dword ptr [EDX]
005ee1da  CALL EAX
005ee1dc  MOV dword ptr [EBP + 0xfffffee0],EAX
005ee1e2  JMP 0x005ee1ee
005ee1e4  MOV dword ptr [EBP + 0xfffffee0],0x0
005ee1ee  JMP 0x005ee467
005ee1f3  PUSH 0x0
005ee1f5  MOV ECX,dword ptr [EBP + 0x8]
005ee1f8  PUSH ECX
005ee1f9  PUSH 0x544e4f46
005ee1fe  MOV EDX,dword ptr [0x007960d8]
005ee204  MOV ECX,dword ptr [EDX + 0x18]
005ee207  CALL 0x00603c50
005ee20c  MOV dword ptr [EBP + -0x7c],EAX
005ee20f  CMP dword ptr [EBP + -0x7c],0x0
005ee213  JZ 0x005ee226
005ee215  MOV EAX,dword ptr [EBP + -0x7c]
005ee218  MOV EDX,dword ptr [EAX]
005ee21a  MOV ECX,dword ptr [EBP + -0x7c]
005ee21d  MOV EAX,dword ptr [EDX + 0x4]
005ee220  CALL EAX
005ee222  TEST EAX,EAX
005ee224  JNZ 0x005ee249
005ee226  MOV dword ptr [EBP + 0x8],0x2
005ee22d  PUSH 0x0
005ee22f  MOV ECX,dword ptr [EBP + 0x8]
005ee232  PUSH ECX
005ee233  PUSH 0x544e4f46
005ee238  MOV EDX,dword ptr [0x007960d8]
005ee23e  MOV ECX,dword ptr [EDX + 0x18]
005ee241  CALL 0x00603c50
005ee246  MOV dword ptr [EBP + -0x7c],EAX
005ee249  MOV EAX,dword ptr [EBP + 0xffffff28]
005ee24f  MOV ECX,dword ptr [EBP + 0x8]
005ee252  MOV dword ptr [EAX + 0x60],ECX
005ee255  MOV EDX,dword ptr [EBP + -0x7c]
005ee258  MOV EAX,dword ptr [EDX]
005ee25a  MOV ECX,dword ptr [EBP + -0x7c]
005ee25d  MOV EDX,dword ptr [EAX + 0x4]
005ee260  CALL EDX
005ee262  MOV dword ptr [EBP + -0x78],EAX
005ee265  MOV EAX,dword ptr [EBP + 0xffffff28]
005ee26b  MOV dword ptr [EAX + 0x64],0x1
005ee272  CMP dword ptr [EBP + -0x78],0x0
005ee276  JZ 0x005ee399
005ee27c  MOV ECX,dword ptr [EBP + -0x78]
005ee27f  MOV DX,word ptr [ECX]
005ee282  MOV word ptr [EBP + 0xffffff7c],DX
005ee289  MOVZX EAX,word ptr [EBP + 0xffffff7c]
005ee290  MOV ECX,dword ptr [EBP + 0xffffff28]
005ee296  MOV dword ptr [ECX + 0x8c],EAX
005ee29c  MOV EDX,dword ptr [EBP + 0xffffff28]
005ee2a2  MOV EAX,dword ptr [EBP + -0x78]
005ee2a5  MOV CX,word ptr [EAX + 0x2]
005ee2a9  MOV word ptr [EDX + 0x90],CX
005ee2b0  MOV EDX,dword ptr [EBP + 0xffffff28]
005ee2b6  MOV EAX,dword ptr [EBP + -0x78]
005ee2b9  MOV CX,word ptr [EAX + 0x4]
005ee2bd  MOV word ptr [EDX + 0x92],CX
005ee2c4  MOV EDX,dword ptr [EBP + 0xffffff28]
005ee2ca  MOV EAX,dword ptr [EBP + -0x78]
005ee2cd  MOV CX,word ptr [EAX + 0x6]
005ee2d1  MOV word ptr [EDX + 0x94],CX
005ee2d8  MOV EDX,dword ptr [EBP + 0xffffff28]
005ee2de  MOV EAX,dword ptr [EBP + -0x78]
005ee2e1  MOV CX,word ptr [EAX + 0x8]
005ee2e5  MOV word ptr [EDX + 0x96],CX
005ee2ec  MOV EDX,dword ptr [EBP + -0x78]
005ee2ef  MOV AX,word ptr [EDX + 0xa]
005ee2f3  MOV word ptr [EBP + 0xffffff7c],AX
005ee2fa  MOV ECX,dword ptr [EBP + 0xffffff28]
005ee300  CMP dword ptr [ECX + 0x98],0x0
005ee307  JNZ 0x005ee32e
005ee309  PUSH 0x802
005ee30e  CALL 0x00686d82
005ee313  ADD ESP,0x4
005ee316  MOV dword ptr [EBP + 0xffffff30],EAX
005ee31c  MOV EDX,dword ptr [EBP + 0xffffff28]
005ee322  MOV EAX,dword ptr [EBP + 0xffffff30]
005ee328  MOV dword ptr [EDX + 0x98],EAX
005ee32e  MOVZX ECX,word ptr [EBP + 0xffffff7c]
005ee335  LEA EDX,[ECX*0x8 + 0x2]
005ee33c  PUSH EDX
005ee33d  MOV EAX,dword ptr [EBP + -0x78]
005ee340  ADD EAX,0xa
005ee343  PUSH EAX
005ee344  MOV ECX,dword ptr [EBP + 0xffffff28]
005ee34a  MOV EDX,dword ptr [ECX + 0x98]
005ee350  PUSH EDX
005ee351  CALL 0x00686fde
005ee356  ADD ESP,0xc
005ee359  MOV EAX,dword ptr [EBP + 0xffffff28]
005ee35f  MOV ECX,dword ptr [EAX + 0x98]
005ee365  MOV DX,word ptr [EBP + 0xffffff7c]
005ee36c  MOV word ptr [ECX],DX
005ee36f  MOV dword ptr [EBP + -0x80],0x0
005ee376  JMP 0x005ee381
005ee378  MOV EAX,dword ptr [EBP + -0x80]
005ee37b  ADD EAX,0x1
005ee37e  MOV dword ptr [EBP + -0x80],EAX
005ee381  MOV ECX,dword ptr [EBP + 0xffffff28]
005ee387  MOV EDX,dword ptr [ECX + 0x98]
005ee38d  MOVZX EAX,word ptr [EDX]
005ee390  CMP dword ptr [EBP + -0x80],EAX
005ee393  JGE 0x005ee397
005ee395  JMP 0x005ee378
005ee397  JMP 0x005ee3fe
005ee399  MOV ECX,dword ptr [EBP + 0xffffff28]
005ee39f  CMP dword ptr [ECX + 0x98],0x0
005ee3a6  JZ 0x005ee3d9
005ee3a8  MOV EDX,dword ptr [EBP + 0xffffff28]
005ee3ae  MOV EAX,dword ptr [EDX + 0x98]
005ee3b4  MOV dword ptr [EBP + 0xffffff2c],EAX
005ee3ba  MOV ECX,dword ptr [EBP + 0xffffff2c]
005ee3c0  PUSH ECX
005ee3c1  CALL 0x00686cae
005ee3c6  ADD ESP,0x4
005ee3c9  MOV EDX,dword ptr [EBP + 0xffffff28]
005ee3cf  MOV dword ptr [EDX + 0x98],0x0
005ee3d9  PUSH 0xc
005ee3db  PUSH 0x0
005ee3dd  MOV EAX,dword ptr [EBP + 0xffffff28]
005ee3e3  ADD EAX,0x8c
005ee3e8  PUSH EAX
005ee3e9  CALL 0x00686fa2
005ee3ee  ADD ESP,0xc
005ee3f1  MOV ECX,dword ptr [EBP + 0xffffff28]
005ee3f7  MOV dword ptr [ECX + 0x64],0x0
005ee3fe  MOV EDX,dword ptr [EBP + -0x7c]
005ee401  PUSH EDX
005ee402  MOV EAX,[0x007960d8]
005ee407  MOV ECX,dword ptr [EAX + 0x18]
005ee40a  CALL 0x006041d0
005ee40f  MOV ECX,dword ptr [EBP + 0xffffff28]
005ee415  CMP dword ptr [ECX + 0xb0],0x0
005ee41c  JZ 0x005ee439
005ee41e  MOV EDX,dword ptr [EBP + 0xffffff28]
005ee424  MOV EAX,dword ptr [EDX + 0xb0]
005ee42a  PUSH EAX
005ee42b  MOV ECX,dword ptr [0x007960d8]
005ee431  MOV ECX,dword ptr [ECX + 0x18]
005ee434  CALL 0x006041d0
005ee439  PUSH 0x0
005ee43b  MOV EDX,dword ptr [EBP + 0xffffff28]
005ee441  MOV EAX,dword ptr [EDX + 0x8c]
005ee447  PUSH EAX
005ee448  PUSH 0x20584554
005ee44d  MOV ECX,dword ptr [0x007960d8]
005ee453  MOV ECX,dword ptr [ECX + 0x18]
005ee456  CALL 0x00603c50
005ee45b  MOV EDX,dword ptr [EBP + 0xffffff28]
005ee461  MOV dword ptr [EDX + 0xb0],EAX
005ee467  MOV EAX,dword ptr [EBP + 0xffffff28]
005ee46d  CMP dword ptr [EAX + 0x84],-0x1
005ee474  JZ 0x005ee490
005ee476  MOV ECX,dword ptr [EBP + 0xffffff28]
005ee47c  MOV EDX,dword ptr [EBP + 0xffffff28]
005ee482  MOV AX,word ptr [EDX + 0x84]
005ee489  MOV word ptr [ECX + 0x96],AX
005ee490  MOV ECX,dword ptr [EBP + 0xffffff28]
005ee496  MOV EDX,dword ptr [ECX]
005ee498  MOV ECX,dword ptr [EBP + 0xffffff28]
005ee49e  MOV EAX,dword ptr [EDX + 0xac]
005ee4a4  CALL EAX
005ee4a6  MOV ECX,dword ptr [EBP + -0xc]
005ee4a9  MOV dword ptr FS:[0x0],ECX
005ee4b0  POP ECX
005ee4b1  POP ESI
005ee4b2  POP EBX
005ee4b3  MOV ESP,EBP
005ee4b5  POP EBP
005ee4b6  RET 0xc
