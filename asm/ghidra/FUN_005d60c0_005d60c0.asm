; FUN_005d60c0  005d60c0
005d60c0  PUSH EBP
005d60c1  MOV EBP,ESP
005d60c3  PUSH -0x1
005d60c5  PUSH 0x6a9042
005d60ca  MOV EAX,FS:[0x0]
005d60d0  PUSH EAX
005d60d1  SUB ESP,0x90
005d60d7  PUSH ESI
005d60d8  MOV EAX,[0x00781870]
005d60dd  XOR EAX,EBP
005d60df  PUSH EAX
005d60e0  LEA EAX,[EBP + -0xc]
005d60e3  MOV FS:[0x0],EAX
005d60e9  MOV dword ptr [EBP + 0xffffff6c],ECX
005d60ef  MOV dword ptr [EBP + -0x78],0x0
005d60f6  MOV dword ptr [EBP + -0x74],0x5f5e100
005d60fd  MOV dword ptr [EBP + -0x70],0x989680
005d6104  MOV dword ptr [EBP + -0x6c],0xf4240
005d610b  MOV dword ptr [EBP + -0x68],0x7a120
005d6112  MOV dword ptr [EBP + -0x64],0x186a0
005d6119  MOV dword ptr [EBP + -0x60],0xc350
005d6120  MOV dword ptr [EBP + -0x5c],0x61a8
005d6127  MOV dword ptr [EBP + -0x58],0x2710
005d612e  MOV dword ptr [EBP + -0x54],0x1388
005d6135  MOV dword ptr [EBP + -0x50],0x3e8
005d613c  MOV dword ptr [EBP + -0x4c],0x1f4
005d6143  MOV dword ptr [EBP + -0x48],0x64
005d614a  MOV dword ptr [EBP + -0x44],0x32
005d6151  MOV dword ptr [EBP + -0x40],0x19
005d6158  MOV dword ptr [EBP + -0x3c],0xa
005d615f  MOV dword ptr [EBP + -0x38],0x5
005d6166  MOV dword ptr [EBP + -0x34],0x1
005d616d  MOV dword ptr [EBP + -0x30],0x0
005d6174  MOV EAX,dword ptr [EBP + -0x78]
005d6177  MOV ECX,dword ptr [EBP + EAX*0x4 + -0x74]
005d617b  MOV dword ptr [EBP + -0x2c],ECX
005d617e  MOV dword ptr [EBP + -0x7c],0x0
005d6185  MOV dword ptr [EBP + -0x20],0x0
005d618c  MOV dword ptr [EBP + -0x80],0xfaa
005d6193  MOV EDX,dword ptr [EBP + 0x8]
005d6196  MOV dword ptr [EBP + -0x10],EDX
005d6199  MOV AL,byte ptr [EBP + 0xc]
005d619c  MOV byte ptr [EBP + -0x25],AL
005d619f  MOVZX ECX,byte ptr [EBP + 0x10]
005d61a3  TEST ECX,ECX
005d61a5  JZ 0x005d61ac
005d61a7  JMP 0x005d653d
005d61ac  MOVZX EDX,byte ptr [EBP + 0x10]
005d61b0  TEST EDX,EDX
005d61b2  JZ 0x005d61c9
005d61b4  MOV EAX,dword ptr [EBP + 0xffffff6c]
005d61ba  MOV EDX,dword ptr [EAX]
005d61bc  MOV ECX,dword ptr [EBP + 0xffffff6c]
005d61c2  MOV EAX,dword ptr [EDX + 0x10]
005d61c5  CALL EAX
005d61c7  JMP 0x005d61dc
005d61c9  MOV ECX,dword ptr [EBP + 0xffffff6c]
005d61cf  MOV EDX,dword ptr [ECX]
005d61d1  MOV ECX,dword ptr [EBP + 0xffffff6c]
005d61d7  MOV EAX,dword ptr [EDX + 0x14]
005d61da  CALL EAX
005d61dc  CMP dword ptr [EBP + -0x10],0x0
005d61e0  JNZ 0x005d61ef
005d61e2  MOVSX ECX,byte ptr [EBP + -0x25]
005d61e6  TEST ECX,ECX
005d61e8  JNZ 0x005d61ef
005d61ea  JMP 0x005d653d
005d61ef  CMP dword ptr [EBP + -0x2c],0x0
005d61f3  JLE 0x005d653d
005d61f9  MOV EAX,dword ptr [EBP + -0x10]
005d61fc  CDQ
005d61fd  IDIV dword ptr [EBP + -0x2c]
005d6200  MOV dword ptr [EBP + -0x7c],EAX
005d6203  MOV EAX,dword ptr [EBP + -0x10]
005d6206  CDQ
005d6207  IDIV dword ptr [EBP + -0x2c]
005d620a  MOV dword ptr [EBP + -0x10],EDX
005d620d  MOV dword ptr [EBP + -0x18],0x0
005d6214  JMP 0x005d621f
005d6216  MOV EDX,dword ptr [EBP + -0x18]
005d6219  ADD EDX,0x1
005d621c  MOV dword ptr [EBP + -0x18],EDX
005d621f  MOV EAX,dword ptr [EBP + -0x18]
005d6222  CMP EAX,dword ptr [EBP + -0x7c]
005d6225  JGE 0x005d6525
005d622b  MOVZX ECX,byte ptr [EBP + 0x10]
005d622f  TEST ECX,ECX
005d6231  JZ 0x005d63a6
005d6237  MOV EDX,dword ptr [EBP + 0xffffff6c]
005d623d  MOV ECX,dword ptr [EDX + 0x20]
005d6240  CALL 0x00646e40
005d6245  ADD EAX,0x5
005d6248  MOV dword ptr [EBP + -0x1c],EAX
005d624b  MOV EAX,dword ptr [EBP + 0xffffff6c]
005d6251  MOV ECX,dword ptr [EAX + 0x20]
005d6254  CALL 0x00646e70
005d6259  ADD EAX,0x50
005d625c  MOV dword ptr [EBP + -0x14],EAX
005d625f  CMP dword ptr [EBP + -0x78],0x5
005d6263  JLE 0x005d6289
005d6265  CMP dword ptr [EBP + -0x78],0x10
005d6269  JGE 0x005d6289
005d626b  MOV ESI,0x10
005d6270  SUB ESI,dword ptr [EBP + -0x78]
005d6273  IMUL ESI,ESI,0x3
005d6276  PUSH 0x3
005d6278  CALL 0x0062fbf0
005d627d  ADD ESP,0x4
005d6280  LEA ECX,[ESI + EAX*0x1 + -0x2]
005d6284  MOV dword ptr [EBP + -0x24],ECX
005d6287  JMP 0x005d62ae
005d6289  CMP dword ptr [EBP + -0x78],0x10
005d628d  JNZ 0x005d6298
005d628f  MOV dword ptr [EBP + -0x24],0x0
005d6296  JMP 0x005d62ae
005d6298  CMP dword ptr [EBP + -0x78],0x2
005d629c  JLE 0x005d62a7
005d629e  MOV dword ptr [EBP + -0x24],0x1f
005d62a5  JMP 0x005d62ae
005d62a7  MOV dword ptr [EBP + -0x24],0x20
005d62ae  PUSH 0x178
005d62b3  CALL 0x00686d82
005d62b8  ADD ESP,0x4
005d62bb  MOV dword ptr [EBP + 0xffffff78],EAX
005d62c1  MOV dword ptr [EBP + -0x4],0x0
005d62c8  CMP dword ptr [EBP + 0xffffff78],0x0
005d62cf  JZ 0x005d62e4
005d62d1  MOV ECX,dword ptr [EBP + 0xffffff78]
005d62d7  CALL 0x005eaaf0
005d62dc  MOV dword ptr [EBP + 0xffffff68],EAX
005d62e2  JMP 0x005d62ee
005d62e4  MOV dword ptr [EBP + 0xffffff68],0x0
005d62ee  MOV EDX,dword ptr [EBP + 0xffffff68]
005d62f4  MOV dword ptr [EBP + 0xffffff7c],EDX
005d62fa  MOV dword ptr [EBP + -0x4],0xffffffff
005d6301  MOV EAX,dword ptr [EBP + -0x20]
005d6304  MOV ECX,dword ptr [EBP + 0xffffff6c]
005d630a  MOV EDX,dword ptr [EBP + 0xffffff7c]
005d6310  MOV dword ptr [ECX + EAX*0x4 + 0x3ac],EDX
005d6317  PUSH -0x1
005d6319  MOV EAX,dword ptr [EBP + -0x20]
005d631c  ADD EAX,0xc9
005d6321  PUSH EAX
005d6322  MOV ECX,dword ptr [EBP + -0x20]
005d6325  SHL ECX,0x1
005d6327  MOV EDX,dword ptr [EBP + -0x14]
005d632a  SUB EDX,ECX
005d632c  PUSH EDX
005d632d  MOV EAX,dword ptr [EBP + -0x1c]
005d6330  PUSH EAX
005d6331  MOV ECX,dword ptr [EBP + -0x80]
005d6334  PUSH ECX
005d6335  MOV EDX,dword ptr [EBP + -0x20]
005d6338  MOV EAX,dword ptr [EBP + 0xffffff6c]
005d633e  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x3ac]
005d6345  CALL 0x005eae80
005d634a  MOV ECX,dword ptr [EBP + -0x24]
005d634d  PUSH ECX
005d634e  MOV EDX,dword ptr [EBP + -0x20]
005d6351  MOV EAX,dword ptr [EBP + 0xffffff6c]
005d6357  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x3ac]
005d635e  MOV EDX,dword ptr [EBP + -0x20]
005d6361  MOV EAX,dword ptr [EBP + 0xffffff6c]
005d6367  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x3ac]
005d636e  MOV EAX,dword ptr [ECX]
005d6370  MOV ECX,EDX
005d6372  MOV EDX,dword ptr [EAX + 0xb0]
005d6378  CALL EDX
005d637a  MOV EAX,dword ptr [EBP + -0x20]
005d637d  MOV ECX,dword ptr [EBP + 0xffffff6c]
005d6383  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x3ac]
005d638a  MOV EAX,dword ptr [EBP + -0x20]
005d638d  MOV ECX,dword ptr [EBP + 0xffffff6c]
005d6393  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x3ac]
005d639a  MOV EDX,dword ptr [EDX]
005d639c  MOV EAX,dword ptr [EDX + 0x74]
005d639f  CALL EAX
005d63a1  JMP 0x005d650f
005d63a6  MOV ECX,dword ptr [EBP + 0xffffff6c]
005d63ac  MOV ECX,dword ptr [ECX + 0x20]
005d63af  CALL 0x00646e40
005d63b4  ADD EAX,0x4b
005d63b7  MOV dword ptr [EBP + -0x1c],EAX
005d63ba  MOV EDX,dword ptr [EBP + 0xffffff6c]
005d63c0  MOV ECX,dword ptr [EDX + 0x20]
005d63c3  CALL 0x00646e70
005d63c8  ADD EAX,0x51
005d63cb  MOV dword ptr [EBP + -0x14],EAX
005d63ce  CMP dword ptr [EBP + -0x78],0x5
005d63d2  JLE 0x005d63f8
005d63d4  CMP dword ptr [EBP + -0x78],0x10
005d63d8  JGE 0x005d63f8
005d63da  MOV ESI,0x10
005d63df  SUB ESI,dword ptr [EBP + -0x78]
005d63e2  IMUL ESI,ESI,0x3
005d63e5  PUSH 0x3
005d63e7  CALL 0x0062fbf0
005d63ec  ADD ESP,0x4
005d63ef  LEA EAX,[ESI + EAX*0x1 + -0x2]
005d63f3  MOV dword ptr [EBP + -0x24],EAX
005d63f6  JMP 0x005d641d
005d63f8  CMP dword ptr [EBP + -0x78],0x10
005d63fc  JNZ 0x005d6407
005d63fe  MOV dword ptr [EBP + -0x24],0x0
005d6405  JMP 0x005d641d
005d6407  CMP dword ptr [EBP + -0x78],0x2
005d640b  JLE 0x005d6416
005d640d  MOV dword ptr [EBP + -0x24],0x1f
005d6414  JMP 0x005d641d
005d6416  MOV dword ptr [EBP + -0x24],0x20
005d641d  PUSH 0x178
005d6422  CALL 0x00686d82
005d6427  ADD ESP,0x4
005d642a  MOV dword ptr [EBP + 0xffffff70],EAX
005d6430  MOV dword ptr [EBP + -0x4],0x1
005d6437  CMP dword ptr [EBP + 0xffffff70],0x0
005d643e  JZ 0x005d6453
005d6440  MOV ECX,dword ptr [EBP + 0xffffff70]
005d6446  CALL 0x005eaaf0
005d644b  MOV dword ptr [EBP + 0xffffff64],EAX
005d6451  JMP 0x005d645d
005d6453  MOV dword ptr [EBP + 0xffffff64],0x0
005d645d  MOV ECX,dword ptr [EBP + 0xffffff64]
005d6463  MOV dword ptr [EBP + 0xffffff74],ECX
005d6469  MOV dword ptr [EBP + -0x4],0xffffffff
005d6470  MOV EDX,dword ptr [EBP + -0x20]
005d6473  MOV EAX,dword ptr [EBP + 0xffffff6c]
005d6479  MOV ECX,dword ptr [EBP + 0xffffff74]
005d647f  MOV dword ptr [EAX + EDX*0x4 + 0x424],ECX
005d6486  PUSH -0x1
005d6488  MOV EDX,dword ptr [EBP + -0x20]
005d648b  ADD EDX,0xc9
005d6491  PUSH EDX
005d6492  MOV EAX,dword ptr [EBP + -0x20]
005d6495  SHL EAX,0x1
005d6497  MOV ECX,dword ptr [EBP + -0x14]
005d649a  SUB ECX,EAX
005d649c  PUSH ECX
005d649d  MOV EDX,dword ptr [EBP + -0x1c]
005d64a0  PUSH EDX
005d64a1  MOV EAX,dword ptr [EBP + -0x80]
005d64a4  PUSH EAX
005d64a5  MOV ECX,dword ptr [EBP + -0x20]
005d64a8  MOV EDX,dword ptr [EBP + 0xffffff6c]
005d64ae  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x424]
005d64b5  CALL 0x005eae80
005d64ba  MOV EAX,dword ptr [EBP + -0x24]
005d64bd  PUSH EAX
005d64be  MOV ECX,dword ptr [EBP + -0x20]
005d64c1  MOV EDX,dword ptr [EBP + 0xffffff6c]
005d64c7  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x424]
005d64ce  MOV ECX,dword ptr [EBP + -0x20]
005d64d1  MOV EDX,dword ptr [EBP + 0xffffff6c]
005d64d7  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x424]
005d64de  MOV EAX,dword ptr [EAX]
005d64e0  MOV EDX,dword ptr [EAX + 0xb0]
005d64e6  CALL EDX
005d64e8  MOV EAX,dword ptr [EBP + -0x20]
005d64eb  MOV ECX,dword ptr [EBP + 0xffffff6c]
005d64f1  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x424]
005d64f8  MOV EAX,dword ptr [EBP + -0x20]
005d64fb  MOV ECX,dword ptr [EBP + 0xffffff6c]
005d6501  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x424]
005d6508  MOV EDX,dword ptr [EDX]
005d650a  MOV EAX,dword ptr [EDX + 0x74]
005d650d  CALL EAX
005d650f  MOV ECX,dword ptr [EBP + -0x20]
005d6512  ADD ECX,0x1
005d6515  MOV dword ptr [EBP + -0x20],ECX
005d6518  CMP dword ptr [EBP + -0x20],0x1e
005d651c  JNZ 0x005d6520
005d651e  JMP 0x005d653d
005d6520  JMP 0x005d6216
005d6525  MOV EDX,dword ptr [EBP + -0x78]
005d6528  ADD EDX,0x1
005d652b  MOV dword ptr [EBP + -0x78],EDX
005d652e  MOV EAX,dword ptr [EBP + -0x78]
005d6531  MOV ECX,dword ptr [EBP + EAX*0x4 + -0x74]
005d6535  MOV dword ptr [EBP + -0x2c],ECX
005d6538  JMP 0x005d61ef
005d653d  MOV ECX,dword ptr [EBP + -0xc]
005d6540  MOV dword ptr FS:[0x0],ECX
005d6547  POP ECX
005d6548  POP ESI
005d6549  MOV ESP,EBP
005d654b  POP EBP
005d654c  RET 0xc
