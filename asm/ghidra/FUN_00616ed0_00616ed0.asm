; FUN_00616ed0  00616ed0
00616ed0  PUSH EBP
00616ed1  MOV EBP,ESP
00616ed3  SUB ESP,0x48
00616ed6  MOV dword ptr [EBP + -0xc],0x0
00616edd  MOV EAX,dword ptr [EBP + 0x8]
00616ee0  MOV dword ptr [EBP + -0x8],EAX
00616ee3  MOV ECX,dword ptr [EBP + -0x8]
00616ee6  MOV dword ptr [EBP + -0x4],ECX
00616ee9  MOV EDX,dword ptr [EBP + -0x4]
00616eec  ADD EDX,0x12
00616eef  MOV dword ptr [EBP + -0x4],EDX
00616ef2  MOV EAX,dword ptr [EBP + -0x8]
00616ef5  MOVZX ECX,byte ptr [EAX]
00616ef8  ADD ECX,dword ptr [EBP + -0x4]
00616efb  MOV dword ptr [EBP + -0x4],ECX
00616efe  MOV EDX,dword ptr [EBP + -0x8]
00616f01  MOVZX EAX,word ptr [EDX + 0xc]
00616f05  MOV ECX,dword ptr [EBP + -0x8]
00616f08  MOVZX EDX,word ptr [ECX + 0xe]
00616f0c  IMUL EAX,EDX
00616f0f  XOR ECX,ECX
00616f11  MOV EDX,0x4
00616f16  MUL EDX
00616f18  SETO CL
00616f1b  NEG ECX
00616f1d  OR ECX,EAX
00616f1f  PUSH ECX
00616f20  CALL 0x00686d82
00616f25  ADD ESP,0x4
00616f28  MOV dword ptr [EBP + -0x28],EAX
00616f2b  MOV EAX,dword ptr [EBP + -0x28]
00616f2e  MOV dword ptr [EBP + -0xc],EAX
00616f31  MOV ECX,dword ptr [EBP + -0x8]
00616f34  MOVZX EDX,byte ptr [ECX + 0x2]
00616f38  CMP EDX,0x2
00616f3b  JZ 0x00616f54
00616f3d  LEA ECX,[EBP + -0x34]
00616f40  CALL dword ptr [0x006b227c]
00616f46  PUSH 0x6ffe04
00616f4b  LEA EAX,[EBP + -0x34]
00616f4e  PUSH EAX
00616f4f  CALL 0x00686fc0
00616f54  MOV dword ptr [EBP + -0x10],0x0
00616f5b  JMP 0x00616f66
00616f5d  MOV ECX,dword ptr [EBP + -0x10]
00616f60  ADD ECX,0x1
00616f63  MOV dword ptr [EBP + -0x10],ECX
00616f66  MOV EDX,dword ptr [EBP + -0x8]
00616f69  MOVZX EAX,word ptr [EDX + 0xe]
00616f6d  CMP dword ptr [EBP + -0x10],EAX
00616f70  JGE 0x006170db
00616f76  MOV ECX,dword ptr [EBP + -0x8]
00616f79  MOVZX EDX,byte ptr [ECX + 0x11]
00616f7d  AND EDX,0x20
00616f80  JZ 0x00616f8a
00616f82  MOV EAX,dword ptr [EBP + -0x10]
00616f85  MOV dword ptr [EBP + -0x44],EAX
00616f88  JMP 0x00616f9a
00616f8a  MOV ECX,dword ptr [EBP + -0x8]
00616f8d  MOVZX EDX,word ptr [ECX + 0xe]
00616f91  SUB EDX,0x1
00616f94  SUB EDX,dword ptr [EBP + -0x10]
00616f97  MOV dword ptr [EBP + -0x44],EDX
00616f9a  MOV EAX,dword ptr [EBP + -0x44]
00616f9d  MOV dword ptr [EBP + -0x14],EAX
00616fa0  MOV ECX,dword ptr [EBP + -0x8]
00616fa3  MOVZX EDX,word ptr [ECX + 0xc]
00616fa7  IMUL EDX,dword ptr [EBP + -0x10]
00616fab  MOV EAX,dword ptr [EBP + -0xc]
00616fae  LEA ECX,[EAX + EDX*0x4]
00616fb1  MOV dword ptr [EBP + -0x1c],ECX
00616fb4  MOV EDX,dword ptr [EBP + -0x8]
00616fb7  MOVZX EAX,word ptr [EDX + 0xc]
00616fbb  IMUL EAX,dword ptr [EBP + -0x14]
00616fbf  MOV ECX,dword ptr [EBP + -0x8]
00616fc2  MOVZX EDX,byte ptr [ECX + 0x10]
00616fc6  IMUL EAX,EDX
00616fc9  CDQ
00616fca  AND EDX,0x7
00616fcd  ADD EAX,EDX
00616fcf  SAR EAX,0x3
00616fd2  ADD EAX,dword ptr [EBP + -0x4]
00616fd5  MOV dword ptr [EBP + -0x18],EAX
00616fd8  MOV EAX,dword ptr [EBP + -0x8]
00616fdb  MOV CL,byte ptr [EAX + 0x10]
00616fde  MOV byte ptr [EBP + -0x48],CL
00616fe1  CMP byte ptr [EBP + -0x48],0x18
00616fe5  JZ 0x0061705b
00616fe7  CMP byte ptr [EBP + -0x48],0x20
00616feb  JZ 0x00616ff2
00616fed  JMP 0x006170bf
00616ff2  MOV dword ptr [EBP + -0x20],0x0
00616ff9  JMP 0x00617004
00616ffb  MOV EDX,dword ptr [EBP + -0x20]
00616ffe  ADD EDX,0x1
00617001  MOV dword ptr [EBP + -0x20],EDX
00617004  MOV EAX,dword ptr [EBP + -0x8]
00617007  MOVZX ECX,word ptr [EAX + 0xc]
0061700b  CMP dword ptr [EBP + -0x20],ECX
0061700e  JGE 0x00617059
00617010  MOV EDX,dword ptr [EBP + -0x20]
00617013  MOV EAX,dword ptr [EBP + -0x1c]
00617016  MOV ECX,dword ptr [EBP + -0x18]
00617019  MOV CL,byte ptr [ECX + 0x2]
0061701c  MOV byte ptr [EAX + EDX*0x4],CL
0061701f  MOV EDX,dword ptr [EBP + -0x20]
00617022  MOV EAX,dword ptr [EBP + -0x1c]
00617025  MOV ECX,dword ptr [EBP + -0x18]
00617028  MOV CL,byte ptr [ECX + 0x1]
0061702b  MOV byte ptr [EAX + EDX*0x4 + 0x1],CL
0061702f  MOV EDX,dword ptr [EBP + -0x20]
00617032  MOV EAX,dword ptr [EBP + -0x1c]
00617035  MOV ECX,dword ptr [EBP + -0x18]
00617038  MOV CL,byte ptr [ECX]
0061703a  MOV byte ptr [EAX + EDX*0x4 + 0x2],CL
0061703e  MOV EDX,dword ptr [EBP + -0x20]
00617041  MOV EAX,dword ptr [EBP + -0x1c]
00617044  MOV ECX,dword ptr [EBP + -0x18]
00617047  MOV CL,byte ptr [ECX + 0x3]
0061704a  MOV byte ptr [EAX + EDX*0x4 + 0x3],CL
0061704e  MOV EDX,dword ptr [EBP + -0x18]
00617051  ADD EDX,0x4
00617054  MOV dword ptr [EBP + -0x18],EDX
00617057  JMP 0x00616ffb
00617059  JMP 0x006170d6
0061705b  MOV dword ptr [EBP + -0x24],0x0
00617062  JMP 0x0061706d
00617064  MOV EAX,dword ptr [EBP + -0x24]
00617067  ADD EAX,0x1
0061706a  MOV dword ptr [EBP + -0x24],EAX
0061706d  MOV ECX,dword ptr [EBP + -0x8]
00617070  MOVZX EDX,word ptr [ECX + 0xc]
00617074  CMP dword ptr [EBP + -0x24],EDX
00617077  JGE 0x006170bd
00617079  MOV EAX,dword ptr [EBP + -0x24]
0061707c  MOV ECX,dword ptr [EBP + -0x1c]
0061707f  MOV EDX,dword ptr [EBP + -0x18]
00617082  MOV DL,byte ptr [EDX + 0x2]
00617085  MOV byte ptr [ECX + EAX*0x4],DL
00617088  MOV EAX,dword ptr [EBP + -0x24]
0061708b  MOV ECX,dword ptr [EBP + -0x1c]
0061708e  MOV EDX,dword ptr [EBP + -0x18]
00617091  MOV DL,byte ptr [EDX + 0x1]
00617094  MOV byte ptr [ECX + EAX*0x4 + 0x1],DL
00617098  MOV EAX,dword ptr [EBP + -0x24]
0061709b  MOV ECX,dword ptr [EBP + -0x1c]
0061709e  MOV EDX,dword ptr [EBP + -0x18]
006170a1  MOV DL,byte ptr [EDX]
006170a3  MOV byte ptr [ECX + EAX*0x4 + 0x2],DL
006170a7  MOV EAX,dword ptr [EBP + -0x24]
006170aa  MOV ECX,dword ptr [EBP + -0x1c]
006170ad  MOV byte ptr [ECX + EAX*0x4 + 0x3],0xff
006170b2  MOV EDX,dword ptr [EBP + -0x18]
006170b5  ADD EDX,0x3
006170b8  MOV dword ptr [EBP + -0x18],EDX
006170bb  JMP 0x00617064
006170bd  JMP 0x006170d6
006170bf  LEA ECX,[EBP + -0x40]
006170c2  CALL dword ptr [0x006b227c]
006170c8  PUSH 0x6ffe04
006170cd  LEA EAX,[EBP + -0x40]
006170d0  PUSH EAX
006170d1  CALL 0x00686fc0
006170d6  JMP 0x00616f5d
006170db  MOV ECX,dword ptr [EBP + 0x14]
006170de  MOV EDX,dword ptr [EBP + -0xc]
006170e1  MOV dword ptr [ECX],EDX
006170e3  MOV EAX,dword ptr [EBP + -0x8]
006170e6  MOVZX ECX,word ptr [EAX + 0xc]
006170ea  MOV EDX,dword ptr [EBP + 0xc]
006170ed  MOV dword ptr [EDX],ECX
006170ef  MOV EAX,dword ptr [EBP + -0x8]
006170f2  MOVZX ECX,word ptr [EAX + 0xe]
006170f6  MOV EDX,dword ptr [EBP + 0x10]
006170f9  MOV dword ptr [EDX],ECX
006170fb  MOV ESP,EBP
006170fd  POP EBP
006170fe  RET
