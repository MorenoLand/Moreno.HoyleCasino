; FUN_0059e9b0  0059e9b0
0059e9b0  PUSH EBP
0059e9b1  MOV EBP,ESP
0059e9b3  SUB ESP,0x138
0059e9b9  MOV dword ptr [EBP + 0xffffff0c],ECX
0059e9bf  PUSH 0x0
0059e9c1  PUSH 0x0
0059e9c3  CALL 0x0064c8a0
0059e9c8  ADD ESP,0x8
0059e9cb  MOV dword ptr [EBP + -0x60],EAX
0059e9ce  MOV dword ptr [EBP + -0x5c],EDX
0059e9d1  MOV EAX,dword ptr [EBP + -0x60]
0059e9d4  MOV dword ptr [EBP + -0x58],EAX
0059e9d7  MOV ECX,dword ptr [EBP + -0x5c]
0059e9da  MOV dword ptr [EBP + -0x54],ECX
0059e9dd  MOV dword ptr [EBP + -0x48],0xffffffff
0059e9e4  MOV dword ptr [EBP + -0x20],0xffffffff
0059e9eb  MOV dword ptr [EBP + -0x4c],0xffffffff
0059e9f2  FLDZ
0059e9f4  FSTP double ptr [EBP + -0x18]
0059e9f7  FLD1
0059e9f9  FSTP double ptr [EBP + -0x10]
0059e9fc  MOV ECX,dword ptr [0x007935d0]
0059ea02  CALL 0x005a2020
0059ea07  MOV dword ptr [EBP + -0x4],EAX
0059ea0a  MOV dword ptr [EBP + -0x1c],0xffffffff
0059ea11  MOV dword ptr [EBP + -0x8],0xffffffff
0059ea18  MOV dword ptr [EBP + -0x50],0xffffffff
0059ea1f  MOV dword ptr [EBP + -0x44],0x0
0059ea26  MOV ECX,dword ptr [0x007935d0]
0059ea2c  CALL 0x005a2720
0059ea31  MOV dword ptr [EBP + -0x48],EAX
0059ea34  MOV ECX,dword ptr [0x007935d0]
0059ea3a  CALL 0x005a2260
0059ea3f  MOV dword ptr [EBP + 0xffffff08],EAX
0059ea45  CMP dword ptr [EBP + 0xffffff08],0x5
0059ea4c  JA 0x0059f129
0059ea52  MOV EDX,dword ptr [EBP + 0xffffff08]
0059ea58  JMP dword ptr [EDX*0x4 + 0x59f2c8]
0059ea5f  MOV dword ptr [EBP + -0x20],0x7fd
0059ea66  FLD double ptr [0x006b2c40]
0059ea6c  FSTP double ptr [EBP + -0x10]
0059ea6f  JMP 0x0059f129
0059ea74  MOV dword ptr [EBP + -0x20],0x82e
0059ea7b  FLD double ptr [0x006b2c40]
0059ea81  FSTP double ptr [EBP + -0x10]
0059ea84  JMP 0x0059f129
0059ea89  LEA EAX,[EBP + -0x58]
0059ea8c  PUSH EAX
0059ea8d  MOV ECX,dword ptr [EBP + -0x4]
0059ea90  PUSH ECX
0059ea91  CALL 0x005dcb00
0059ea96  ADD ESP,0x4
0059ea99  MOV ECX,EAX
0059ea9b  CALL 0x005d6020
0059eaa0  MOV EDX,dword ptr [EBP + -0x4]
0059eaa3  PUSH EDX
0059eaa4  CALL 0x005dcb00
0059eaa9  ADD ESP,0x4
0059eaac  CMP dword ptr [EAX + 0x4a8],0x3
0059eab3  JLE 0x0059eb32
0059eab5  PUSH 0x2
0059eab7  CALL 0x0062fbf0
0059eabc  ADD ESP,0x4
0059eabf  TEST EAX,EAX
0059eac1  JNZ 0x0059eb32
0059eac3  MOV EAX,dword ptr [EBP + -0x4]
0059eac6  PUSH EAX
0059eac7  CALL 0x005dcb00
0059eacc  ADD ESP,0x4
0059eacf  MOV dword ptr [EBP + -0x6c],EAX
0059ead2  MOV ECX,dword ptr [EBP + -0x6c]
0059ead5  CALL 0x0063aac0
0059eada  MOV ECX,dword ptr [EAX]
0059eadc  MOV dword ptr [EBP + -0x64],ECX
0059eadf  CMP dword ptr [EBP + -0x64],0x2
0059eae3  JZ 0x0059eb04
0059eae5  MOV ECX,dword ptr [EBP + -0x6c]
0059eae8  CALL 0x0063aac0
0059eaed  MOV EDX,dword ptr [EAX]
0059eaef  MOV dword ptr [EBP + -0x68],EDX
0059eaf2  CMP dword ptr [EBP + -0x68],0x3
0059eaf6  JZ 0x0059eb04
0059eaf8  MOV dword ptr [EBP + 0xffffff04],0x0
0059eb02  JMP 0x0059eb0e
0059eb04  MOV dword ptr [EBP + 0xffffff04],0x1
0059eb0e  MOVZX EAX,byte ptr [EBP + 0xffffff04]
0059eb15  NEG EAX
0059eb17  SBB EAX,EAX
0059eb19  AND EAX,0x14
0059eb1c  ADD EAX,0x400
0059eb21  MOV dword ptr [EBP + -0x20],EAX
0059eb24  FLD double ptr [0x006b2c40]
0059eb2a  FSTP double ptr [EBP + -0x10]
0059eb2d  JMP 0x0059f129
0059eb32  MOV ECX,dword ptr [EBP + -0x4]
0059eb35  PUSH ECX
0059eb36  CALL 0x005dcb00
0059eb3b  ADD ESP,0x4
0059eb3e  CMP dword ptr [EAX + 0x4a8],-0x3
0059eb45  JGE 0x0059ebc5
0059eb47  PUSH 0x2
0059eb49  CALL 0x0062fbf0
0059eb4e  ADD ESP,0x4
0059eb51  TEST EAX,EAX
0059eb53  JNZ 0x0059ebc5
0059eb55  MOV EDX,dword ptr [EBP + -0x4]
0059eb58  PUSH EDX
0059eb59  CALL 0x005dcb00
0059eb5e  ADD ESP,0x4
0059eb61  MOV dword ptr [EBP + -0x78],EAX
0059eb64  MOV ECX,dword ptr [EBP + -0x78]
0059eb67  CALL 0x0063aac0
0059eb6c  MOV EAX,dword ptr [EAX]
0059eb6e  MOV dword ptr [EBP + -0x70],EAX
0059eb71  CMP dword ptr [EBP + -0x70],0x2
0059eb75  JZ 0x0059eb96
0059eb77  MOV ECX,dword ptr [EBP + -0x78]
0059eb7a  CALL 0x0063aac0
0059eb7f  MOV ECX,dword ptr [EAX]
0059eb81  MOV dword ptr [EBP + -0x74],ECX
0059eb84  CMP dword ptr [EBP + -0x74],0x3
0059eb88  JZ 0x0059eb96
0059eb8a  MOV dword ptr [EBP + 0xffffff00],0x0
0059eb94  JMP 0x0059eba0
0059eb96  MOV dword ptr [EBP + 0xffffff00],0x1
0059eba0  MOVZX EDX,byte ptr [EBP + 0xffffff00]
0059eba7  NEG EDX
0059eba9  SBB EDX,EDX
0059ebab  AND EDX,0xa
0059ebae  ADD EDX,0x3ff
0059ebb4  MOV dword ptr [EBP + -0x20],EDX
0059ebb7  FLD double ptr [0x006b2c40]
0059ebbd  FSTP double ptr [EBP + -0x10]
0059ebc0  JMP 0x0059f129
0059ebc5  MOV EAX,[0x007935d0]
0059ebca  ADD EAX,dword ptr [EBP + -0x4]
0059ebcd  MOVZX ECX,byte ptr [EAX + 0x104]
0059ebd4  TEST ECX,ECX
0059ebd6  JZ 0x0059ec4d
0059ebd8  MOV EDX,dword ptr [EBP + -0x4]
0059ebdb  PUSH EDX
0059ebdc  CALL 0x005dcb00
0059ebe1  ADD ESP,0x4
0059ebe4  MOV dword ptr [EBP + 0xffffff7c],EAX
0059ebea  MOV ECX,dword ptr [EBP + 0xffffff7c]
0059ebf0  CALL 0x0063aac0
0059ebf5  MOV EAX,dword ptr [EAX]
0059ebf7  MOV dword ptr [EBP + -0x7c],EAX
0059ebfa  CMP dword ptr [EBP + -0x7c],0x2
0059ebfe  JZ 0x0059ec22
0059ec00  MOV ECX,dword ptr [EBP + 0xffffff7c]
0059ec06  CALL 0x0063aac0
0059ec0b  MOV ECX,dword ptr [EAX]
0059ec0d  MOV dword ptr [EBP + -0x80],ECX
0059ec10  CMP dword ptr [EBP + -0x80],0x3
0059ec14  JZ 0x0059ec22
0059ec16  MOV dword ptr [EBP + 0xfffffefc],0x0
0059ec20  JMP 0x0059ec2c
0059ec22  MOV dword ptr [EBP + 0xfffffefc],0x1
0059ec2c  MOVZX EDX,byte ptr [EBP + 0xfffffefc]
0059ec33  NEG EDX
0059ec35  SBB EDX,EDX
0059ec37  AND EDX,0x15
0059ec3a  ADD EDX,0x3fe
0059ec40  MOV dword ptr [EBP + -0x20],EDX
0059ec43  FLD1
0059ec45  FSTP double ptr [EBP + -0x10]
0059ec48  JMP 0x0059f129
0059ec4d  CMP dword ptr [EBP + -0x58],0x0
0059ec51  JGE 0x0059ecdb
0059ec57  MOV EAX,dword ptr [EBP + -0x4]
0059ec5a  PUSH EAX
0059ec5b  CALL 0x005dcb00
0059ec60  ADD ESP,0x4
0059ec63  MOV dword ptr [EBP + 0xffffff70],EAX
0059ec69  MOV ECX,dword ptr [EBP + 0xffffff70]
0059ec6f  CALL 0x0063aac0
0059ec74  MOV ECX,dword ptr [EAX]
0059ec76  MOV dword ptr [EBP + 0xffffff78],ECX
0059ec7c  CMP dword ptr [EBP + 0xffffff78],0x2
0059ec83  JZ 0x0059ecad
0059ec85  MOV ECX,dword ptr [EBP + 0xffffff70]
0059ec8b  CALL 0x0063aac0
0059ec90  MOV EDX,dword ptr [EAX]
0059ec92  MOV dword ptr [EBP + 0xffffff74],EDX
0059ec98  CMP dword ptr [EBP + 0xffffff74],0x3
0059ec9f  JZ 0x0059ecad
0059eca1  MOV dword ptr [EBP + 0xfffffef8],0x0
0059ecab  JMP 0x0059ecb7
0059ecad  MOV dword ptr [EBP + 0xfffffef8],0x1
0059ecb7  MOVZX EAX,byte ptr [EBP + 0xfffffef8]
0059ecbe  NEG EAX
0059ecc0  SBB EAX,EAX
0059ecc2  AND EAX,0xffffffe6
0059ecc5  ADD EAX,0x402
0059ecca  MOV dword ptr [EBP + -0x20],EAX
0059eccd  FLD double ptr [0x006b2c38]
0059ecd3  FSTP double ptr [EBP + -0x10]
0059ecd6  JMP 0x0059f129
0059ecdb  CMP dword ptr [EBP + -0x58],0x0
0059ecdf  JLE 0x0059ed6a
0059ece5  MOV ECX,dword ptr [EBP + -0x4]
0059ece8  PUSH ECX
0059ece9  CALL 0x005dcb00
0059ecee  ADD ESP,0x4
0059ecf1  MOV dword ptr [EBP + 0xffffff64],EAX
0059ecf7  MOV ECX,dword ptr [EBP + 0xffffff64]
0059ecfd  CALL 0x0063aac0
0059ed02  MOV EDX,dword ptr [EAX]
0059ed04  MOV dword ptr [EBP + 0xffffff6c],EDX
0059ed0a  CMP dword ptr [EBP + 0xffffff6c],0x2
0059ed11  JZ 0x0059ed3b
0059ed13  MOV ECX,dword ptr [EBP + 0xffffff64]
0059ed19  CALL 0x0063aac0
0059ed1e  MOV EAX,dword ptr [EAX]
0059ed20  MOV dword ptr [EBP + 0xffffff68],EAX
0059ed26  CMP dword ptr [EBP + 0xffffff68],0x3
0059ed2d  JZ 0x0059ed3b
0059ed2f  MOV dword ptr [EBP + 0xfffffef4],0x0
0059ed39  JMP 0x0059ed45
0059ed3b  MOV dword ptr [EBP + 0xfffffef4],0x1
0059ed45  MOVZX ECX,byte ptr [EBP + 0xfffffef4]
0059ed4c  NEG ECX
0059ed4e  SBB ECX,ECX
0059ed50  AND ECX,0xffffffec
0059ed53  ADD ECX,0x404
0059ed59  MOV dword ptr [EBP + -0x20],ECX
0059ed5c  FLD double ptr [0x006b2c38]
0059ed62  FSTP double ptr [EBP + -0x10]
0059ed65  JMP 0x0059f129
0059ed6a  JMP 0x0059f129
0059ed6f  MOV ECX,dword ptr [0x007935cc]
0059ed75  CALL 0x005dac90
0059ed7a  MOV dword ptr [EBP + -0x8],EAX
0059ed7d  MOV ECX,dword ptr [0x007935cc]
0059ed83  CALL 0x005dada0
0059ed88  MOV dword ptr [EBP + -0x50],EAX
0059ed8b  MOV ECX,dword ptr [0x007935cc]
0059ed91  CALL 0x005db190
0059ed96  MOVZX EDX,AL
0059ed99  TEST EDX,EDX
0059ed9b  JZ 0x0059eeb4
0059eda1  CMP dword ptr [EBP + -0x8],-0x1
0059eda5  JZ 0x0059eeb4
0059edab  MOV EAX,dword ptr [EBP + -0x8]
0059edae  PUSH EAX
0059edaf  CALL 0x005dcb00
0059edb4  ADD ESP,0x4
0059edb7  MOV dword ptr [EBP + 0xffffff58],EAX
0059edbd  MOV ECX,dword ptr [EBP + 0xffffff58]
0059edc3  CALL 0x0063aac0
0059edc8  MOV ECX,dword ptr [EAX]
0059edca  MOV dword ptr [EBP + 0xffffff60],ECX
0059edd0  CMP dword ptr [EBP + 0xffffff60],0x2
0059edd7  JZ 0x0059ee01
0059edd9  MOV ECX,dword ptr [EBP + 0xffffff58]
0059eddf  CALL 0x0063aac0
0059ede4  MOV EDX,dword ptr [EAX]
0059ede6  MOV dword ptr [EBP + 0xffffff5c],EDX
0059edec  CMP dword ptr [EBP + 0xffffff5c],0x3
0059edf3  JZ 0x0059ee01
0059edf5  MOV dword ptr [EBP + 0xfffffef0],0x0
0059edff  JMP 0x0059ee0b
0059ee01  MOV dword ptr [EBP + 0xfffffef0],0x1
0059ee0b  MOVZX EAX,byte ptr [EBP + 0xfffffef0]
0059ee12  TEST EAX,EAX
0059ee14  JZ 0x0059ee22
0059ee16  MOV dword ptr [EBP + 0xfffffeec],0xffffffff
0059ee20  JMP 0x0059ee2b
0059ee22  MOV ECX,dword ptr [EBP + -0x8]
0059ee25  MOV dword ptr [EBP + 0xfffffeec],ECX
0059ee2b  MOV EDX,dword ptr [EBP + 0xfffffeec]
0059ee31  MOV dword ptr [EBP + -0x48],EDX
0059ee34  MOV EAX,dword ptr [EBP + -0x8]
0059ee37  PUSH EAX
0059ee38  CALL 0x005dcb00
0059ee3d  ADD ESP,0x4
0059ee40  MOV dword ptr [EBP + 0xffffff4c],EAX
0059ee46  MOV ECX,dword ptr [EBP + 0xffffff4c]
0059ee4c  CALL 0x0063aac0
0059ee51  MOV ECX,dword ptr [EAX]
0059ee53  MOV dword ptr [EBP + 0xffffff54],ECX
0059ee59  CMP dword ptr [EBP + 0xffffff54],0x2
0059ee60  JZ 0x0059ee8a
0059ee62  MOV ECX,dword ptr [EBP + 0xffffff4c]
0059ee68  CALL 0x0063aac0
0059ee6d  MOV EDX,dword ptr [EAX]
0059ee6f  MOV dword ptr [EBP + 0xffffff50],EDX
0059ee75  CMP dword ptr [EBP + 0xffffff50],0x3
0059ee7c  JZ 0x0059ee8a
0059ee7e  MOV dword ptr [EBP + 0xfffffee8],0x0
0059ee88  JMP 0x0059ee94
0059ee8a  MOV dword ptr [EBP + 0xfffffee8],0x1
0059ee94  MOVZX EAX,byte ptr [EBP + 0xfffffee8]
0059ee9b  NEG EAX
0059ee9d  SBB EAX,EAX
0059ee9f  AND EAX,0x15
0059eea2  ADD EAX,0x3fd
0059eea7  MOV dword ptr [EBP + -0x20],EAX
0059eeaa  FLD1
0059eeac  FSTP double ptr [EBP + -0x10]
0059eeaf  JMP 0x0059f117
0059eeb4  CMP dword ptr [EBP + -0x8],-0x1
0059eeb8  JZ 0x0059eed1
0059eeba  LEA ECX,[EBP + -0x58]
0059eebd  PUSH ECX
0059eebe  MOV EDX,dword ptr [EBP + -0x8]
0059eec1  PUSH EDX
0059eec2  CALL 0x005dcb00
0059eec7  ADD ESP,0x4
0059eeca  MOV ECX,EAX
0059eecc  CALL 0x005d6020
0059eed1  CMP dword ptr [EBP + -0x8],-0x1
0059eed5  JZ 0x0059f004
0059eedb  CMP dword ptr [EBP + -0x58],0x0
0059eedf  JLE 0x0059f004
0059eee5  PUSH 0x2
0059eee7  CALL 0x0062fbf0
0059eeec  ADD ESP,0x4
0059eeef  TEST EAX,EAX
0059eef1  JNZ 0x0059f004
0059eef7  MOV EAX,dword ptr [EBP + -0x8]
0059eefa  PUSH EAX
0059eefb  CALL 0x005dcb00
0059ef00  ADD ESP,0x4
0059ef03  MOV dword ptr [EBP + 0xffffff40],EAX
0059ef09  MOV ECX,dword ptr [EBP + 0xffffff40]
0059ef0f  CALL 0x0063aac0
0059ef14  MOV ECX,dword ptr [EAX]
0059ef16  MOV dword ptr [EBP + 0xffffff48],ECX
0059ef1c  CMP dword ptr [EBP + 0xffffff48],0x2
0059ef23  JZ 0x0059ef4d
0059ef25  MOV ECX,dword ptr [EBP + 0xffffff40]
0059ef2b  CALL 0x0063aac0
0059ef30  MOV EDX,dword ptr [EAX]
0059ef32  MOV dword ptr [EBP + 0xffffff44],EDX
0059ef38  CMP dword ptr [EBP + 0xffffff44],0x3
0059ef3f  JZ 0x0059ef4d
0059ef41  MOV dword ptr [EBP + 0xfffffee4],0x0
0059ef4b  JMP 0x0059ef57
0059ef4d  MOV dword ptr [EBP + 0xfffffee4],0x1
0059ef57  MOVZX EAX,byte ptr [EBP + 0xfffffee4]
0059ef5e  TEST EAX,EAX
0059ef60  JZ 0x0059ef6e
0059ef62  MOV dword ptr [EBP + 0xfffffee0],0xffffffff
0059ef6c  JMP 0x0059ef77
0059ef6e  MOV ECX,dword ptr [EBP + -0x8]
0059ef71  MOV dword ptr [EBP + 0xfffffee0],ECX
0059ef77  MOV EDX,dword ptr [EBP + 0xfffffee0]
0059ef7d  MOV dword ptr [EBP + -0x48],EDX
0059ef80  MOV EAX,dword ptr [EBP + -0x8]
0059ef83  PUSH EAX
0059ef84  CALL 0x005dcb00
0059ef89  ADD ESP,0x4
0059ef8c  MOV dword ptr [EBP + 0xffffff34],EAX
0059ef92  MOV ECX,dword ptr [EBP + 0xffffff34]
0059ef98  CALL 0x0063aac0
0059ef9d  MOV ECX,dword ptr [EAX]
0059ef9f  MOV dword ptr [EBP + 0xffffff3c],ECX
0059efa5  CMP dword ptr [EBP + 0xffffff3c],0x2
0059efac  JZ 0x0059efd6
0059efae  MOV ECX,dword ptr [EBP + 0xffffff34]
0059efb4  CALL 0x0063aac0
0059efb9  MOV EDX,dword ptr [EAX]
0059efbb  MOV dword ptr [EBP + 0xffffff38],EDX
0059efc1  CMP dword ptr [EBP + 0xffffff38],0x3
0059efc8  JZ 0x0059efd6
0059efca  MOV dword ptr [EBP + 0xfffffedc],0x0
0059efd4  JMP 0x0059efe0
0059efd6  MOV dword ptr [EBP + 0xfffffedc],0x1
0059efe0  MOVZX EAX,byte ptr [EBP + 0xfffffedc]
0059efe7  NEG EAX
0059efe9  SBB EAX,EAX
0059efeb  AND EAX,0x19
0059efee  ADD EAX,0x3f2
0059eff3  MOV dword ptr [EBP + -0x20],EAX
0059eff6  FLD double ptr [0x006b2c38]
0059effc  FSTP double ptr [EBP + -0x10]
0059efff  JMP 0x0059f117
0059f004  CMP dword ptr [EBP + -0x50],-0x1
0059f008  JZ 0x0059f117
0059f00e  MOV ECX,dword ptr [EBP + -0x50]
0059f011  PUSH ECX
0059f012  CALL 0x005dcb00
0059f017  ADD ESP,0x4
0059f01a  MOV dword ptr [EBP + 0xffffff28],EAX
0059f020  MOV ECX,dword ptr [EBP + 0xffffff28]
0059f026  CALL 0x0063aac0
0059f02b  MOV EDX,dword ptr [EAX]
0059f02d  MOV dword ptr [EBP + 0xffffff30],EDX
0059f033  CMP dword ptr [EBP + 0xffffff30],0x2
0059f03a  JZ 0x0059f064
0059f03c  MOV ECX,dword ptr [EBP + 0xffffff28]
0059f042  CALL 0x0063aac0
0059f047  MOV EAX,dword ptr [EAX]
0059f049  MOV dword ptr [EBP + 0xffffff2c],EAX
0059f04f  CMP dword ptr [EBP + 0xffffff2c],0x3
0059f056  JZ 0x0059f064
0059f058  MOV dword ptr [EBP + 0xfffffed8],0x0
0059f062  JMP 0x0059f06e
0059f064  MOV dword ptr [EBP + 0xfffffed8],0x1
0059f06e  MOVZX ECX,byte ptr [EBP + 0xfffffed8]
0059f075  TEST ECX,ECX
0059f077  JZ 0x0059f085
0059f079  MOV dword ptr [EBP + 0xfffffed4],0xffffffff
0059f083  JMP 0x0059f08e
0059f085  MOV EDX,dword ptr [EBP + -0x50]
0059f088  MOV dword ptr [EBP + 0xfffffed4],EDX
0059f08e  MOV EAX,dword ptr [EBP + 0xfffffed4]
0059f094  MOV dword ptr [EBP + -0x48],EAX
0059f097  MOV ECX,dword ptr [EBP + -0x50]
0059f09a  PUSH ECX
0059f09b  CALL 0x005dcb00
0059f0a0  ADD ESP,0x4
0059f0a3  MOV dword ptr [EBP + 0xffffff1c],EAX
0059f0a9  MOV ECX,dword ptr [EBP + 0xffffff1c]
0059f0af  CALL 0x0063aac0
0059f0b4  MOV EDX,dword ptr [EAX]
0059f0b6  MOV dword ptr [EBP + 0xffffff24],EDX
0059f0bc  CMP dword ptr [EBP + 0xffffff24],0x2
0059f0c3  JZ 0x0059f0ed
0059f0c5  MOV ECX,dword ptr [EBP + 0xffffff1c]
0059f0cb  CALL 0x0063aac0
0059f0d0  MOV EAX,dword ptr [EAX]
0059f0d2  MOV dword ptr [EBP + 0xffffff20],EAX
0059f0d8  CMP dword ptr [EBP + 0xffffff20],0x3
0059f0df  JZ 0x0059f0ed
0059f0e1  MOV dword ptr [EBP + 0xfffffed0],0x0
0059f0eb  JMP 0x0059f0f7
0059f0ed  MOV dword ptr [EBP + 0xfffffed0],0x1
0059f0f7  MOVZX ECX,byte ptr [EBP + 0xfffffed0]
0059f0fe  NEG ECX
0059f100  SBB ECX,ECX
0059f102  AND ECX,0x19
0059f105  ADD ECX,0x3f3
0059f10b  MOV dword ptr [EBP + -0x20],ECX
0059f10e  FLD double ptr [0x006b2c38]
0059f114  FSTP double ptr [EBP + -0x10]
0059f117  JMP 0x0059f129
0059f119  MOV dword ptr [EBP + -0x1c],0x29810
0059f120  JMP 0x0059f129
0059f122  MOV dword ptr [EBP + -0x1c],0x29816
0059f129  PUSH -0x1
0059f12b  PUSH -0x1
0059f12d  MOV ECX,dword ptr [0x007935d0]
0059f133  CALL 0x005a3b40
0059f138  CMP dword ptr [EBP + -0x48],0x4
0059f13c  JNZ 0x0059f189
0059f13e  CMP dword ptr [EBP + -0x1c],-0x1
0059f142  JNZ 0x0059f166
0059f144  PUSH 0x0
0059f146  PUSH 0x1
0059f148  MOV EDX,dword ptr [0x0162ee80]
0059f14e  MOV EAX,dword ptr [EDX + 0x4]
0059f151  MOV ECX,dword ptr [0x0162ee80]
0059f157  MOV ECX,dword ptr [ECX + 0x4]
0059f15a  MOV EDX,dword ptr [EAX]
0059f15c  MOV EAX,dword ptr [EDX + 0x8]
0059f15f  CALL EAX
0059f161  JMP 0x0059f2c1
0059f166  PUSH 0x0
0059f168  MOV ECX,dword ptr [0x0162ee80]
0059f16e  MOV EDX,dword ptr [ECX + 0x4]
0059f171  PUSH EDX
0059f172  MOV EAX,dword ptr [EBP + -0x1c]
0059f175  PUSH EAX
0059f176  MOV ECX,dword ptr [0x007935c4]
0059f17c  MOV ECX,dword ptr [ECX + 0x4c]
0059f17f  CALL 0x005cd7c0
0059f184  JMP 0x0059f2c1
0059f189  CMP dword ptr [EBP + -0x20],-0x1
0059f18d  JZ 0x0059f217
0059f193  MOV ECX,dword ptr [0x0162ee84]
0059f199  CALL 0x00636730
0059f19e  TEST EAX,EAX
0059f1a0  JZ 0x0059f217
0059f1a2  CMP dword ptr [EBP + -0x48],-0x1
0059f1a6  JLE 0x0059f23a
0059f1ac  MOV EDX,dword ptr [EBP + -0x48]
0059f1af  PUSH EDX
0059f1b0  CALL 0x005dcb00
0059f1b5  ADD ESP,0x4
0059f1b8  MOV dword ptr [EBP + 0xffffff10],EAX
0059f1be  MOV ECX,dword ptr [EBP + 0xffffff10]
0059f1c4  CALL 0x0063aac0
0059f1c9  MOV EAX,dword ptr [EAX]
0059f1cb  MOV dword ptr [EBP + 0xffffff18],EAX
0059f1d1  CMP dword ptr [EBP + 0xffffff18],0x2
0059f1d8  JZ 0x0059f202
0059f1da  MOV ECX,dword ptr [EBP + 0xffffff10]
0059f1e0  CALL 0x0063aac0
0059f1e5  MOV ECX,dword ptr [EAX]
0059f1e7  MOV dword ptr [EBP + 0xffffff14],ECX
0059f1ed  CMP dword ptr [EBP + 0xffffff14],0x3
0059f1f4  JZ 0x0059f202
0059f1f6  MOV dword ptr [EBP + 0xfffffecc],0x0
0059f200  JMP 0x0059f20c
0059f202  MOV dword ptr [EBP + 0xfffffecc],0x1
0059f20c  MOVZX EDX,byte ptr [EBP + 0xfffffecc]
0059f213  TEST EDX,EDX
0059f215  JZ 0x0059f23a
0059f217  PUSH 0x0
0059f219  PUSH 0x1
0059f21b  MOV EAX,[0x0162ee80]
0059f220  MOV ECX,dword ptr [EAX + 0x4]
0059f223  MOV EDX,dword ptr [0x0162ee80]
0059f229  MOV EAX,dword ptr [EDX + 0x4]
0059f22c  MOV EDX,dword ptr [ECX]
0059f22e  MOV ECX,EAX
0059f230  MOV EAX,dword ptr [EDX + 0x8]
0059f233  CALL EAX
0059f235  JMP 0x0059f2c1
0059f23a  CMP dword ptr [EBP + -0x48],-0x1
0059f23e  JZ 0x0059f24b
0059f240  MOV ECX,dword ptr [EBP + -0x48]
0059f243  MOV dword ptr [EBP + 0xfffffec8],ECX
0059f249  JMP 0x0059f25c
0059f24b  MOV ECX,dword ptr [0x0162ee84]
0059f251  CALL 0x00636c50
0059f256  MOV dword ptr [EBP + 0xfffffec8],EAX
0059f25c  MOV EDX,dword ptr [EBP + 0xfffffec8]
0059f262  MOV dword ptr [EBP + -0x40],EDX
0059f265  MOV EAX,dword ptr [EBP + -0x20]
0059f268  MOV dword ptr [EBP + -0x3c],EAX
0059f26b  MOV ECX,dword ptr [EBP + -0x4c]
0059f26e  MOV dword ptr [EBP + -0x38],ECX
0059f271  FLD double ptr [EBP + -0x18]
0059f274  FSTP double ptr [EBP + -0x30]
0059f277  FLD double ptr [EBP + -0x10]
0059f27a  FSTP double ptr [EBP + -0x28]
0059f27d  PUSH 0x1
0059f27f  MOV EDX,dword ptr [0x0162ee80]
0059f285  MOV EAX,dword ptr [EDX + 0x4]
0059f288  MOV ECX,dword ptr [0x0162ee80]
0059f28e  MOV ECX,dword ptr [ECX + 0x4]
0059f291  MOV EDX,dword ptr [EAX]
0059f293  MOV EAX,dword ptr [EDX + 0x4]
0059f296  CALL EAX
0059f298  PUSH 0x1
0059f29a  PUSH 0x2
0059f29c  MOV ECX,dword ptr [0x0162ee84]
0059f2a2  CALL 0x00637810
0059f2a7  PUSH EAX
0059f2a8  MOV ECX,dword ptr [0x0162ee80]
0059f2ae  MOV EDX,dword ptr [ECX + 0x4]
0059f2b1  PUSH EDX
0059f2b2  LEA EAX,[EBP + -0x40]
0059f2b5  PUSH EAX
0059f2b6  MOV ECX,dword ptr [0x0162ee84]
0059f2bc  CALL 0x00639390
0059f2c1  MOV ESP,EBP
0059f2c3  POP EBP
0059f2c4  RET
