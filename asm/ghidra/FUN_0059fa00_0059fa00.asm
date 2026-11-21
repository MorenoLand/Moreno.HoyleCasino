; FUN_0059fa00  0059fa00
0059fa00  PUSH EBP
0059fa01  MOV EBP,ESP
0059fa03  PUSH -0x1
0059fa05  PUSH 0x6a7752
0059fa0a  MOV EAX,FS:[0x0]
0059fa10  PUSH EAX
0059fa11  SUB ESP,0x64
0059fa14  MOV EAX,[0x00781870]
0059fa19  XOR EAX,EBP
0059fa1b  PUSH EAX
0059fa1c  LEA EAX,[EBP + -0xc]
0059fa1f  MOV FS:[0x0],EAX
0059fa25  MOV dword ptr [EBP + -0x58],ECX
0059fa28  MOV ECX,dword ptr [0x007935c4]
0059fa2e  CALL 0x0059c2d0
0059fa33  MOV ECX,dword ptr [0x007935d0]
0059fa39  CALL 0x005a2260
0059fa3e  CMP EAX,-0x1
0059fa41  JZ 0x0059fa50
0059fa43  MOV ECX,dword ptr [EBP + -0x58]
0059fa46  CALL 0x0059e9b0
0059fa4b  JMP 0x0059ff5d
0059fa50  MOV EAX,dword ptr [EBP + -0x58]
0059fa53  MOVZX ECX,byte ptr [EAX + 0x4]
0059fa57  TEST ECX,ECX
0059fa59  JNZ 0x0059fa94
0059fa5b  MOV EDX,dword ptr [EBP + -0x58]
0059fa5e  MOV byte ptr [EDX + 0x4],0x1
0059fa62  PUSH 0x4
0059fa64  PUSH 0x4
0059fa66  MOV ECX,dword ptr [0x007935d0]
0059fa6c  CALL 0x005a3b40
0059fa71  PUSH 0x0
0059fa73  PUSH 0x1
0059fa75  MOV EAX,[0x007935cc]
0059fa7a  MOV ECX,dword ptr [EAX + 0x4]
0059fa7d  MOV EDX,dword ptr [0x007935cc]
0059fa83  MOV EAX,dword ptr [EDX + 0x4]
0059fa86  MOV EDX,dword ptr [ECX]
0059fa88  MOV ECX,EAX
0059fa8a  MOV EAX,dword ptr [EDX + 0x8]
0059fa8d  CALL EAX
0059fa8f  JMP 0x0059ff5d
0059fa94  MOV ECX,dword ptr [0x007935d0]
0059fa9a  CALL 0x005a2460
0059fa9f  MOV dword ptr [EBP + -0x10],EAX
0059faa2  MOV ECX,dword ptr [0x0162ee84]
0059faa8  MOV DL,byte ptr [ECX + 0x25]
0059faab  MOV byte ptr [EBP + -0x19],DL
0059faae  MOVZX EAX,byte ptr [EBP + -0x19]
0059fab2  TEST EAX,EAX
0059fab4  JZ 0x0059fb30
0059fab6  CMP dword ptr [EBP + -0x10],-0x1
0059faba  JZ 0x0059fb30
0059fabc  MOV ECX,dword ptr [EBP + -0x10]
0059fabf  PUSH ECX
0059fac0  CALL 0x005dcb00
0059fac5  ADD ESP,0x4
0059fac8  MOV dword ptr [EBP + -0x28],EAX
0059facb  MOV ECX,dword ptr [EBP + -0x28]
0059face  CALL 0x0063aac0
0059fad3  MOV EDX,dword ptr [EAX]
0059fad5  MOV dword ptr [EBP + -0x20],EDX
0059fad8  CMP dword ptr [EBP + -0x20],0x2
0059fadc  JZ 0x0059fafa
0059fade  MOV ECX,dword ptr [EBP + -0x28]
0059fae1  CALL 0x0063aac0
0059fae6  MOV EAX,dword ptr [EAX]
0059fae8  MOV dword ptr [EBP + -0x24],EAX
0059faeb  CMP dword ptr [EBP + -0x24],0x3
0059faef  JZ 0x0059fafa
0059faf1  MOV dword ptr [EBP + -0x5c],0x0
0059faf8  JMP 0x0059fb01
0059fafa  MOV dword ptr [EBP + -0x5c],0x1
0059fb01  MOVZX ECX,byte ptr [EBP + -0x5c]
0059fb05  TEST ECX,ECX
0059fb07  JZ 0x0059fb30
0059fb09  MOV EDX,dword ptr [EBP + -0x10]
0059fb0c  PUSH EDX
0059fb0d  CALL 0x005dcb00
0059fb12  ADD ESP,0x4
0059fb15  MOV dword ptr [EBP + -0x2c],EAX
0059fb18  MOV EAX,dword ptr [EBP + -0x2c]
0059fb1b  MOV byte ptr [EAX + 0x4a1],0x1
0059fb22  MOV ECX,dword ptr [0x007935d0]
0059fb28  CALL 0x005a2460
0059fb2d  MOV dword ptr [EBP + -0x10],EAX
0059fb30  CMP dword ptr [EBP + -0x10],-0x1
0059fb34  JZ 0x0059fb9f
0059fb36  MOV ECX,dword ptr [EBP + -0x10]
0059fb39  PUSH ECX
0059fb3a  CALL 0x005dcb00
0059fb3f  ADD ESP,0x4
0059fb42  MOV dword ptr [EBP + -0x38],EAX
0059fb45  MOV ECX,dword ptr [EBP + -0x38]
0059fb48  CALL 0x0063aac0
0059fb4d  MOV EDX,dword ptr [EAX]
0059fb4f  MOV dword ptr [EBP + -0x30],EDX
0059fb52  CMP dword ptr [EBP + -0x30],0x2
0059fb56  JZ 0x0059fb74
0059fb58  MOV ECX,dword ptr [EBP + -0x38]
0059fb5b  CALL 0x0063aac0
0059fb60  MOV EAX,dword ptr [EAX]
0059fb62  MOV dword ptr [EBP + -0x34],EAX
0059fb65  CMP dword ptr [EBP + -0x34],0x3
0059fb69  JZ 0x0059fb74
0059fb6b  MOV dword ptr [EBP + -0x60],0x0
0059fb72  JMP 0x0059fb7b
0059fb74  MOV dword ptr [EBP + -0x60],0x1
0059fb7b  MOV CL,byte ptr [EBP + -0x60]
0059fb7e  PUSH ECX
0059fb7f  MOV EDX,dword ptr [EBP + -0x10]
0059fb82  PUSH EDX
0059fb83  MOV ECX,dword ptr [0x007935d0]
0059fb89  CALL 0x005a3ad0
0059fb8e  MOV EAX,dword ptr [EBP + -0x10]
0059fb91  PUSH EAX
0059fb92  MOV ECX,dword ptr [EBP + -0x58]
0059fb95  CALL 0x0059f2e0
0059fb9a  JMP 0x0059ff5d
0059fb9f  MOV ECX,dword ptr [EBP + -0x58]
0059fba2  MOVZX EDX,byte ptr [ECX + 0xb]
0059fba6  TEST EDX,EDX
0059fba8  JNZ 0x0059fbbc
0059fbaa  MOV ECX,dword ptr [0x007935d0]
0059fbb0  CALL 0x005a39e0
0059fbb5  MOV EAX,dword ptr [EBP + -0x58]
0059fbb8  MOV byte ptr [EAX + 0xb],0x1
0059fbbc  MOV ECX,dword ptr [EBP + -0x58]
0059fbbf  MOVZX EDX,byte ptr [ECX + 0x5]
0059fbc3  TEST EDX,EDX
0059fbc5  JNZ 0x0059fbfe
0059fbc7  MOV EAX,dword ptr [EBP + -0x58]
0059fbca  MOV byte ptr [EAX + 0x5],0x1
0059fbce  PUSH 0x4
0059fbd0  PUSH 0x5
0059fbd2  MOV ECX,dword ptr [0x007935d0]
0059fbd8  CALL 0x005a3b40
0059fbdd  PUSH 0x0
0059fbdf  PUSH 0x1
0059fbe1  MOV ECX,dword ptr [0x007935cc]
0059fbe7  MOV EDX,dword ptr [ECX + 0x4]
0059fbea  MOV EAX,[0x007935cc]
0059fbef  MOV ECX,dword ptr [EAX + 0x4]
0059fbf2  MOV EDX,dword ptr [EDX]
0059fbf4  MOV EAX,dword ptr [EDX + 0x8]
0059fbf7  CALL EAX
0059fbf9  JMP 0x0059ff5d
0059fbfe  MOV ECX,dword ptr [0x007935d0]
0059fc04  CALL 0x005a29b0
0059fc09  MOVZX ECX,AL
0059fc0c  TEST ECX,ECX
0059fc0e  JZ 0x0059fc37
0059fc10  MOV ECX,dword ptr [0x0162ee80]
0059fc16  CALL 0x005f2870
0059fc1b  PUSH 0x0
0059fc1d  PUSH -0x1
0059fc1f  MOV ECX,dword ptr [0x007935d0]
0059fc25  CALL 0x005a3ad0
0059fc2a  MOV ECX,dword ptr [EBP + -0x58]
0059fc2d  CALL 0x0059e920
0059fc32  JMP 0x0059ff5d
0059fc37  MOV ECX,dword ptr [0x007935d0]
0059fc3d  CALL 0x005a2540
0059fc42  MOV dword ptr [EBP + -0x10],EAX
0059fc45  CMP dword ptr [EBP + -0x10],-0x1
0059fc49  JZ 0x0059fcc1
0059fc4b  MOV EDX,dword ptr [0x007935d0]
0059fc51  MOV byte ptr [EDX + 0x103],0x0
0059fc58  MOV EAX,dword ptr [EBP + -0x10]
0059fc5b  PUSH EAX
0059fc5c  CALL 0x005dcb00
0059fc61  ADD ESP,0x4
0059fc64  MOV dword ptr [EBP + -0x44],EAX
0059fc67  MOV ECX,dword ptr [EBP + -0x44]
0059fc6a  CALL 0x0063aac0
0059fc6f  MOV ECX,dword ptr [EAX]
0059fc71  MOV dword ptr [EBP + -0x3c],ECX
0059fc74  CMP dword ptr [EBP + -0x3c],0x2
0059fc78  JZ 0x0059fc96
0059fc7a  MOV ECX,dword ptr [EBP + -0x44]
0059fc7d  CALL 0x0063aac0
0059fc82  MOV EDX,dword ptr [EAX]
0059fc84  MOV dword ptr [EBP + -0x40],EDX
0059fc87  CMP dword ptr [EBP + -0x40],0x3
0059fc8b  JZ 0x0059fc96
0059fc8d  MOV dword ptr [EBP + -0x64],0x0
0059fc94  JMP 0x0059fc9d
0059fc96  MOV dword ptr [EBP + -0x64],0x1
0059fc9d  MOV AL,byte ptr [EBP + -0x64]
0059fca0  PUSH EAX
0059fca1  MOV ECX,dword ptr [EBP + -0x10]
0059fca4  PUSH ECX
0059fca5  MOV ECX,dword ptr [0x007935d0]
0059fcab  CALL 0x005a3ad0
0059fcb0  MOV EDX,dword ptr [EBP + -0x10]
0059fcb3  PUSH EDX
0059fcb4  MOV ECX,dword ptr [EBP + -0x58]
0059fcb7  CALL 0x0059f6b0
0059fcbc  JMP 0x0059ff5d
0059fcc1  MOV EAX,dword ptr [EBP + -0x58]
0059fcc4  MOVZX ECX,byte ptr [EAX + 0x6]
0059fcc8  TEST ECX,ECX
0059fcca  JNZ 0x0059fd65
0059fcd0  MOV EDX,dword ptr [EBP + -0x58]
0059fcd3  MOV byte ptr [EDX + 0x6],0x1
0059fcd7  PUSH 0x1
0059fcd9  PUSH 0x4
0059fcdb  MOV ECX,dword ptr [0x007935d0]
0059fce1  CALL 0x005a3c20
0059fce6  PUSH 0x24
0059fce8  CALL 0x00686d82
0059fced  ADD ESP,0x4
0059fcf0  MOV dword ptr [EBP + -0x18],EAX
0059fcf3  MOV dword ptr [EBP + -0x4],0x0
0059fcfa  CMP dword ptr [EBP + -0x18],0x0
0059fcfe  JZ 0x0059fd0d
0059fd00  MOV ECX,dword ptr [EBP + -0x18]
0059fd03  CALL 0x0059d4d0
0059fd08  MOV dword ptr [EBP + -0x68],EAX
0059fd0b  JMP 0x0059fd14
0059fd0d  MOV dword ptr [EBP + -0x68],0x0
0059fd14  MOV EAX,dword ptr [EBP + -0x68]
0059fd17  MOV dword ptr [EBP + -0x14],EAX
0059fd1a  MOV dword ptr [EBP + -0x4],0xffffffff
0059fd21  MOV ECX,dword ptr [EBP + -0x14]
0059fd24  PUSH ECX
0059fd25  MOV EDX,dword ptr [0x007935cc]
0059fd2b  MOV ECX,dword ptr [EDX + 0x4]
0059fd2e  CALL 0x005fc420
0059fd33  PUSH 0x1
0059fd35  PUSH 0x5
0059fd37  MOV ECX,dword ptr [0x007935d0]
0059fd3d  CALL 0x005a3c20
0059fd42  PUSH 0x0
0059fd44  PUSH 0x1
0059fd46  MOV EAX,[0x007935cc]
0059fd4b  MOV ECX,dword ptr [EAX + 0x4]
0059fd4e  MOV EDX,dword ptr [0x007935cc]
0059fd54  MOV EAX,dword ptr [EDX + 0x4]
0059fd57  MOV EDX,dword ptr [ECX]
0059fd59  MOV ECX,EAX
0059fd5b  MOV EAX,dword ptr [EDX + 0x8]
0059fd5e  CALL EAX
0059fd60  JMP 0x0059ff5d
0059fd65  MOV ECX,dword ptr [0x007935d0]
0059fd6b  CALL 0x005a2290
0059fd70  MOV dword ptr [EBP + -0x10],EAX
0059fd73  CMP dword ptr [EBP + -0x10],-0x1
0059fd77  JZ 0x0059fe8c
0059fd7d  PUSH 0x0
0059fd7f  MOV ECX,dword ptr [EBP + -0x10]
0059fd82  PUSH ECX
0059fd83  MOV ECX,dword ptr [0x007935d0]
0059fd89  CALL 0x005a3ad0
0059fd8e  MOV EDX,dword ptr [EBP + -0x58]
0059fd91  MOVZX EAX,byte ptr [EDX + 0xa]
0059fd95  TEST EAX,EAX
0059fd97  JNZ 0x0059fde9
0059fd99  MOV ECX,dword ptr [EBP + -0x10]
0059fd9c  PUSH ECX
0059fd9d  MOV ECX,dword ptr [0x007935d0]
0059fda3  CALL 0x005a3e80
0059fda8  MOVZX EDX,AL
0059fdab  TEST EDX,EDX
0059fdad  JZ 0x0059fde9
0059fdaf  PUSH 0x1
0059fdb1  MOV EAX,dword ptr [EBP + -0x10]
0059fdb4  PUSH EAX
0059fdb5  MOV ECX,dword ptr [0x007935d0]
0059fdbb  CALL 0x005a3c20
0059fdc0  MOV ECX,dword ptr [EBP + -0x58]
0059fdc3  MOV byte ptr [ECX + 0xa],0x1
0059fdc7  PUSH 0x0
0059fdc9  PUSH 0x1
0059fdcb  MOV EDX,dword ptr [0x007935cc]
0059fdd1  MOV EAX,dword ptr [EDX + 0x4]
0059fdd4  MOV ECX,dword ptr [0x007935cc]
0059fdda  MOV ECX,dword ptr [ECX + 0x4]
0059fddd  MOV EDX,dword ptr [EAX]
0059fddf  MOV EAX,dword ptr [EDX + 0x8]
0059fde2  CALL EAX
0059fde4  JMP 0x0059ff5d
0059fde9  MOV ECX,dword ptr [EBP + -0x58]
0059fdec  MOV byte ptr [ECX + 0xa],0x0
0059fdf0  MOV EDX,dword ptr [EBP + -0x10]
0059fdf3  PUSH EDX
0059fdf4  MOV ECX,dword ptr [EBP + -0x58]
0059fdf7  CALL 0x0059f640
0059fdfc  MOV EAX,dword ptr [EBP + -0x10]
0059fdff  PUSH EAX
0059fe00  CALL 0x005dcb00
0059fe05  ADD ESP,0x4
0059fe08  MOV dword ptr [EBP + -0x50],EAX
0059fe0b  MOV ECX,dword ptr [EBP + -0x50]
0059fe0e  CALL 0x0063aac0
0059fe13  MOV ECX,dword ptr [EAX]
0059fe15  MOV dword ptr [EBP + -0x48],ECX
0059fe18  CMP dword ptr [EBP + -0x48],0x2
0059fe1c  JZ 0x0059fe3a
0059fe1e  MOV ECX,dword ptr [EBP + -0x50]
0059fe21  CALL 0x0063aac0
0059fe26  MOV EDX,dword ptr [EAX]
0059fe28  MOV dword ptr [EBP + -0x4c],EDX
0059fe2b  CMP dword ptr [EBP + -0x4c],0x3
0059fe2f  JZ 0x0059fe3a
0059fe31  MOV dword ptr [EBP + -0x6c],0x0
0059fe38  JMP 0x0059fe41
0059fe3a  MOV dword ptr [EBP + -0x6c],0x1
0059fe41  MOVZX EAX,byte ptr [EBP + -0x6c]
0059fe45  TEST EAX,EAX
0059fe47  JZ 0x0059fe52
0059fe49  MOV dword ptr [EBP + -0x70],0xffffffff
0059fe50  JMP 0x0059fe58
0059fe52  MOV ECX,dword ptr [EBP + -0x10]
0059fe55  MOV dword ptr [EBP + -0x70],ECX
0059fe58  MOV EDX,dword ptr [EBP + -0x70]
0059fe5b  PUSH EDX
0059fe5c  PUSH 0x2
0059fe5e  MOV ECX,dword ptr [0x007935d0]
0059fe64  CALL 0x005a3b40
0059fe69  PUSH 0x0
0059fe6b  PUSH 0x1
0059fe6d  MOV EAX,[0x007935cc]
0059fe72  MOV ECX,dword ptr [EAX + 0x4]
0059fe75  MOV EDX,dword ptr [0x007935cc]
0059fe7b  MOV EAX,dword ptr [EDX + 0x4]
0059fe7e  MOV EDX,dword ptr [ECX]
0059fe80  MOV ECX,EAX
0059fe82  MOV EAX,dword ptr [EDX + 0x8]
0059fe85  CALL EAX
0059fe87  JMP 0x0059ff5d
0059fe8c  PUSH 0x0
0059fe8e  PUSH -0x1
0059fe90  MOV ECX,dword ptr [0x007935d0]
0059fe96  CALL 0x005a3ad0
0059fe9b  MOV ECX,dword ptr [0x007935cc]
0059fea1  CALL 0x005da7b0
0059fea6  MOVZX ECX,AL
0059fea9  TEST ECX,ECX
0059feab  JZ 0x0059feed
0059fead  MOV EDX,dword ptr [EBP + -0x58]
0059feb0  MOVZX EAX,byte ptr [EDX + 0x9]
0059feb4  TEST EAX,EAX
0059feb6  JNZ 0x0059feed
0059feb8  MOV ECX,dword ptr [EBP + -0x58]
0059febb  MOV byte ptr [ECX + 0x9],0x1
0059febf  PUSH -0x1
0059fec1  PUSH 0x3
0059fec3  MOV ECX,dword ptr [0x007935d0]
0059fec9  CALL 0x005a3b40
0059fece  PUSH 0x0
0059fed0  PUSH 0x1
0059fed2  MOV EDX,dword ptr [0x007935cc]
0059fed8  MOV EAX,dword ptr [EDX + 0x4]
0059fedb  MOV ECX,dword ptr [0x007935cc]
0059fee1  MOV ECX,dword ptr [ECX + 0x4]
0059fee4  MOV EDX,dword ptr [EAX]
0059fee6  MOV EAX,dword ptr [EDX + 0x8]
0059fee9  CALL EAX
0059feeb  JMP 0x0059ff5d
0059feed  PUSH 0x4
0059feef  MOV ECX,dword ptr [0x007935d0]
0059fef5  CALL 0x005a3e30
0059fefa  MOVZX ECX,AL
0059fefd  TEST ECX,ECX
0059feff  JNZ 0x0059ff2f
0059ff01  PUSH 0x1
0059ff03  PUSH 0x4
0059ff05  MOV ECX,dword ptr [0x007935d0]
0059ff0b  CALL 0x005a3c20
0059ff10  PUSH 0x0
0059ff12  PUSH 0x1
0059ff14  MOV EDX,dword ptr [0x007935cc]
0059ff1a  MOV EAX,dword ptr [EDX + 0x4]
0059ff1d  MOV ECX,dword ptr [0x007935cc]
0059ff23  MOV ECX,dword ptr [ECX + 0x4]
0059ff26  MOV EDX,dword ptr [EAX]
0059ff28  MOV EAX,dword ptr [EDX + 0x8]
0059ff2b  CALL EAX
0059ff2d  JMP 0x0059ff5d
0059ff2f  MOV ECX,dword ptr [0x0162ee84]
0059ff35  MOV DL,byte ptr [ECX + 0x25]
0059ff38  MOV byte ptr [EBP + -0x51],DL
0059ff3b  MOVZX EAX,byte ptr [EBP + -0x51]
0059ff3f  TEST EAX,EAX
0059ff41  JZ 0x0059ff52
0059ff43  PUSH 0xc8
0059ff48  MOV ECX,dword ptr [EBP + -0x58]
0059ff4b  CALL 0x0059f960
0059ff50  JMP 0x0059ff5d
0059ff52  MOV ECX,dword ptr [0x007935c4]
0059ff58  CALL 0x0059ca00
0059ff5d  MOV ECX,dword ptr [EBP + -0xc]
0059ff60  MOV dword ptr FS:[0x0],ECX
0059ff67  POP ECX
0059ff68  MOV ESP,EBP
0059ff6a  POP EBP
0059ff6b  RET
