; FUN_0068a940  0068a940
0068a940  PUSH EBP
0068a941  MOV EBP,ESP
0068a943  SUB ESP,0x25c
0068a949  MOV EAX,[0x00781870]
0068a94e  XOR EAX,EBP
0068a950  MOV dword ptr [EBP + -0xc],EAX
0068a953  PUSH ESI
0068a954  MOV dword ptr [EBP + 0xfffffda8],ECX
0068a95a  PUSH 0x104
0068a95f  PUSH 0x6e564c
0068a964  LEA EAX,[EBP + 0xfffffed4]
0068a96a  PUSH EAX
0068a96b  CALL dword ptr [0x006b2220]
0068a971  ADD ESP,0xc
0068a974  PUSH 0x104
0068a979  PUSH 0x6e5640
0068a97e  LEA ECX,[EBP + 0xfffffec0]
0068a984  PUSH ECX
0068a985  CALL dword ptr [0x006b2220]
0068a98b  ADD ESP,0xc
0068a98e  PUSH 0x105
0068a993  PUSH 0x0
0068a995  LEA EDX,[EBP + 0xfffffdb8]
0068a99b  PUSH EDX
0068a99c  CALL 0x00686fa2
0068a9a1  ADD ESP,0xc
0068a9a4  CMP dword ptr [EBP + 0x8],0x0
0068a9a8  JZ 0x0068a9c0
0068a9aa  MOV EAX,dword ptr [EBP + 0x8]
0068a9ad  MOVSX ECX,byte ptr [EAX]
0068a9b0  TEST ECX,ECX
0068a9b2  JZ 0x0068a9c0
0068a9b4  CMP dword ptr [EBP + 0xc],0x0
0068a9b8  JZ 0x0068a9c0
0068a9ba  CMP dword ptr [EBP + 0x10],0x0
0068a9be  JNZ 0x0068a9c7
0068a9c0  XOR AL,AL
0068a9c2  JMP 0x0068abf7
0068a9c7  LEA EDX,[EBP + 0xfffffdb8]
0068a9cd  PUSH EDX
0068a9ce  LEA EAX,[EBP + 0xfffffed4]
0068a9d4  PUSH EAX
0068a9d5  MOV ECX,dword ptr [EBP + 0xfffffda8]
0068a9db  MOV EDX,dword ptr [ECX + 0x208]
0068a9e1  PUSH EDX
0068a9e2  CALL dword ptr [0x006b21f4]
0068a9e8  ADD ESP,0xc
0068a9eb  MOV dword ptr [EBP + 0xfffffdac],EAX
0068a9f1  CMP dword ptr [EBP + 0xfffffdac],0x0
0068a9f8  JZ 0x0068aa03
0068a9fa  CMP dword ptr [EBP + 0xfffffdac],-0x1
0068aa01  JNZ 0x0068aa0a
0068aa03  XOR AL,AL
0068aa05  JMP 0x0068abf7
0068aa0a  LEA EAX,[EBP + 0xfffffee8]
0068aa10  PUSH EAX
0068aa11  LEA ECX,[EBP + 0xfffffec0]
0068aa17  PUSH ECX
0068aa18  MOV EDX,dword ptr [EBP + 0xfffffda8]
0068aa1e  MOV EAX,dword ptr [EDX + 0x208]
0068aa24  PUSH EAX
0068aa25  CALL dword ptr [0x006b21f4]
0068aa2b  ADD ESP,0xc
0068aa2e  MOV dword ptr [EBP + 0xfffffdac],EAX
0068aa34  LEA ECX,[EBP + 0xfffffdb8]
0068aa3a  PUSH ECX
0068aa3b  MOV ECX,dword ptr [EBP + 0xfffffda8]
0068aa41  CALL 0x0068afc0
0068aa46  MOVSX EDX,byte ptr [EBP + 0xfffffdb8]
0068aa4d  CMP EDX,0x3b
0068aa50  JNZ 0x0068aa57
0068aa52  JMP 0x0068abd7
0068aa57  MOVSX EAX,byte ptr [EBP + 0xfffffdb8]
0068aa5e  CMP EAX,0x5b
0068aa61  JNZ 0x0068aa6a
0068aa63  XOR AL,AL
0068aa65  JMP 0x0068abf7
0068aa6a  PUSH 0x3d
0068aa6c  LEA ECX,[EBP + 0xfffffdb8]
0068aa72  PUSH ECX
0068aa73  CALL dword ptr [0x006b22b8]
0068aa79  ADD ESP,0x8
0068aa7c  MOV dword ptr [EBP + -0x8],EAX
0068aa7f  CMP dword ptr [EBP + -0x8],0x0
0068aa83  JNZ 0x0068aa8a
0068aa85  JMP 0x0068abd7
0068aa8a  MOV EDX,dword ptr [EBP + -0x8]
0068aa8d  MOV byte ptr [EDX],0x0
0068aa90  MOV EAX,dword ptr [EBP + -0x8]
0068aa93  ADD EAX,0x1
0068aa96  MOV dword ptr [EBP + -0x4],EAX
0068aa99  MOV ECX,dword ptr [EBP + -0x8]
0068aa9c  SUB ECX,0x1
0068aa9f  MOV dword ptr [EBP + 0xfffffdb0],ECX
0068aaa5  MOV EDX,dword ptr [EBP + 0xfffffdb0]
0068aaab  MOVSX EAX,byte ptr [EDX]
0068aaae  CMP EAX,0x20
0068aab1  JNZ 0x0068aacd
0068aab3  MOV ECX,dword ptr [EBP + 0xfffffdb0]
0068aab9  MOV byte ptr [ECX],0x0
0068aabc  MOV EDX,dword ptr [EBP + 0xfffffdb0]
0068aac2  SUB EDX,0x1
0068aac5  MOV dword ptr [EBP + 0xfffffdb0],EDX
0068aacb  JMP 0x0068aaa5
0068aacd  LEA EAX,[EBP + 0xfffffdb8]
0068aad3  MOV dword ptr [EBP + 0xfffffdb0],EAX
0068aad9  MOV ECX,dword ptr [EBP + 0x8]
0068aadc  MOV dword ptr [EBP + 0xfffffdb4],ECX
0068aae2  MOV EDX,dword ptr [EBP + 0xfffffdb4]
0068aae8  MOVSX EAX,byte ptr [EDX]
0068aaeb  TEST EAX,EAX
0068aaed  JZ 0x0068ab4a
0068aaef  MOV ECX,dword ptr [EBP + 0xfffffdb0]
0068aaf5  MOVSX EDX,byte ptr [ECX]
0068aaf8  TEST EDX,EDX
0068aafa  JZ 0x0068ab4a
0068aafc  MOV EAX,dword ptr [EBP + 0xfffffdb4]
0068ab02  MOVSX ECX,byte ptr [EAX]
0068ab05  PUSH ECX
0068ab06  CALL dword ptr [0x006b21e8]
0068ab0c  ADD ESP,0x4
0068ab0f  MOV ESI,EAX
0068ab11  MOV EDX,dword ptr [EBP + 0xfffffdb0]
0068ab17  MOVSX EAX,byte ptr [EDX]
0068ab1a  PUSH EAX
0068ab1b  CALL dword ptr [0x006b21e8]
0068ab21  ADD ESP,0x4
0068ab24  CMP ESI,EAX
0068ab26  JZ 0x0068ab2a
0068ab28  JMP 0x0068ab4a
0068ab2a  MOV ECX,dword ptr [EBP + 0xfffffdb4]
0068ab30  ADD ECX,0x1
0068ab33  MOV dword ptr [EBP + 0xfffffdb4],ECX
0068ab39  MOV EDX,dword ptr [EBP + 0xfffffdb0]
0068ab3f  ADD EDX,0x1
0068ab42  MOV dword ptr [EBP + 0xfffffdb0],EDX
0068ab48  JMP 0x0068aae2
0068ab4a  MOV EAX,dword ptr [EBP + 0xfffffdb4]
0068ab50  MOVSX ECX,byte ptr [EAX]
0068ab53  TEST ECX,ECX
0068ab55  JNZ 0x0068ab64
0068ab57  MOV EDX,dword ptr [EBP + 0xfffffdb0]
0068ab5d  MOVSX EAX,byte ptr [EDX]
0068ab60  TEST EAX,EAX
0068ab62  JZ 0x0068ab66
0068ab64  JMP 0x0068abd7
0068ab66  MOV ECX,dword ptr [EBP + -0x4]
0068ab69  PUSH ECX
0068ab6a  MOV ECX,dword ptr [EBP + 0xfffffda8]
0068ab70  CALL 0x0068afc0
0068ab75  MOV EDX,dword ptr [EBP + -0x4]
0068ab78  PUSH EDX
0068ab79  CALL 0x00686ecc
0068ab7e  ADD ESP,0x4
0068ab81  ADD EAX,0x1
0068ab84  MOV ECX,dword ptr [EBP + 0x10]
0068ab87  SUB ECX,0x1
0068ab8a  CMP EAX,ECX
0068ab8c  JNC 0x0068aba5
0068ab8e  MOV EDX,dword ptr [EBP + -0x4]
0068ab91  PUSH EDX
0068ab92  CALL 0x00686ecc
0068ab97  ADD ESP,0x4
0068ab9a  ADD EAX,0x1
0068ab9d  MOV dword ptr [EBP + 0xfffffda4],EAX
0068aba3  JMP 0x0068abb1
0068aba5  MOV EAX,dword ptr [EBP + 0x10]
0068aba8  SUB EAX,0x1
0068abab  MOV dword ptr [EBP + 0xfffffda4],EAX
0068abb1  MOV ECX,dword ptr [EBP + 0xfffffda4]
0068abb7  PUSH ECX
0068abb8  MOV EDX,dword ptr [EBP + -0x4]
0068abbb  PUSH EDX
0068abbc  MOV EAX,dword ptr [EBP + 0xc]
0068abbf  PUSH EAX
0068abc0  CALL dword ptr [0x006b22d8]
0068abc6  ADD ESP,0xc
0068abc9  MOV ECX,dword ptr [EBP + 0xc]
0068abcc  ADD ECX,dword ptr [EBP + 0x10]
0068abcf  MOV byte ptr [ECX + -0x1],0x0
0068abd3  MOV AL,0x1
0068abd5  JMP 0x0068abf7
0068abd7  MOV EDX,dword ptr [EBP + 0xfffffda8]
0068abdd  MOV EAX,dword ptr [EDX + 0x208]
0068abe3  PUSH EAX
0068abe4  CALL dword ptr [0x006b21f0]
0068abea  ADD ESP,0x4
0068abed  TEST EAX,EAX
0068abef  JZ 0x0068a9c7
0068abf5  XOR AL,AL
0068abf7  POP ESI
0068abf8  MOV ECX,dword ptr [EBP + -0xc]
0068abfb  XOR ECX,EBP
0068abfd  CALL 0x00686d72
0068ac02  MOV ESP,EBP
0068ac04  POP EBP
0068ac05  RET 0xc
