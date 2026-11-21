; FUN_0061f8a0  0061f8a0
0061f8a0  PUSH EBP
0061f8a1  MOV EBP,ESP
0061f8a3  SUB ESP,0x98
0061f8a9  MOV dword ptr [EBP + 0xffffff7c],ECX
0061f8af  MOV EAX,dword ptr [EBP + 0xffffff7c]
0061f8b5  MOV ECX,dword ptr [EAX + 0x30c]
0061f8bb  MOV EDX,dword ptr [EBP + 0xffffff7c]
0061f8c1  MOV EAX,dword ptr [EDX + 0x310]
0061f8c7  LEA ECX,[EAX + ECX*0x8 + -0x8]
0061f8cb  MOV dword ptr [EBP + -0x1c],ECX
0061f8ce  MOV EDX,dword ptr [EBP + -0x1c]
0061f8d1  MOV EAX,dword ptr [EDX]
0061f8d3  ADD EAX,0x1
0061f8d6  XOR ECX,ECX
0061f8d8  MOV EDX,0x18
0061f8dd  MUL EDX
0061f8df  SETO CL
0061f8e2  NEG ECX
0061f8e4  OR ECX,EAX
0061f8e6  PUSH ECX
0061f8e7  CALL 0x00686d82
0061f8ec  ADD ESP,0x4
0061f8ef  MOV dword ptr [EBP + -0x5c],EAX
0061f8f2  MOV EAX,dword ptr [EBP + -0x5c]
0061f8f5  MOV dword ptr [EBP + -0x48],EAX
0061f8f8  MOV dword ptr [EBP + -0x18],0x0
0061f8ff  JMP 0x0061f90a
0061f901  MOV ECX,dword ptr [EBP + -0x18]
0061f904  ADD ECX,0x1
0061f907  MOV dword ptr [EBP + -0x18],ECX
0061f90a  MOV EDX,dword ptr [EBP + -0x1c]
0061f90d  MOV EAX,dword ptr [EBP + -0x18]
0061f910  CMP EAX,dword ptr [EDX]
0061f912  JGE 0x0061f94f
0061f914  MOV ECX,dword ptr [EBP + -0x18]
0061f917  IMUL ECX,ECX,0x18
0061f91a  MOV EDX,dword ptr [EBP + -0x1c]
0061f91d  MOV EAX,dword ptr [EDX + 0x4]
0061f920  ADD EAX,ECX
0061f922  MOV ECX,dword ptr [EBP + -0x18]
0061f925  IMUL ECX,ECX,0x18
0061f928  ADD ECX,dword ptr [EBP + -0x48]
0061f92b  MOV EDX,dword ptr [EAX]
0061f92d  MOV dword ptr [ECX],EDX
0061f92f  MOV EDX,dword ptr [EAX + 0x4]
0061f932  MOV dword ptr [ECX + 0x4],EDX
0061f935  MOV EDX,dword ptr [EAX + 0x8]
0061f938  MOV dword ptr [ECX + 0x8],EDX
0061f93b  MOV EDX,dword ptr [EAX + 0xc]
0061f93e  MOV dword ptr [ECX + 0xc],EDX
0061f941  MOV EDX,dword ptr [EAX + 0x10]
0061f944  MOV dword ptr [ECX + 0x10],EDX
0061f947  MOV EAX,dword ptr [EAX + 0x14]
0061f94a  MOV dword ptr [ECX + 0x14],EAX
0061f94d  JMP 0x0061f901
0061f94f  MOV ECX,dword ptr [EBP + -0x1c]
0061f952  MOV EDX,dword ptr [ECX + 0x4]
0061f955  MOV dword ptr [EBP + -0x60],EDX
0061f958  MOV EAX,dword ptr [EBP + -0x60]
0061f95b  PUSH EAX
0061f95c  CALL 0x00686cae
0061f961  ADD ESP,0x4
0061f964  MOV ECX,dword ptr [EBP + -0x1c]
0061f967  MOV EDX,dword ptr [EBP + -0x48]
0061f96a  MOV dword ptr [ECX + 0x4],EDX
0061f96d  MOV byte ptr [EBP + -0x5],0x0
0061f971  MOV byte ptr [EBP + -0x25],0x0
0061f975  MOV dword ptr [EBP + -0x18],0x0
0061f97c  JMP 0x0061f987
0061f97e  MOV EAX,dword ptr [EBP + -0x18]
0061f981  ADD EAX,0x1
0061f984  MOV dword ptr [EBP + -0x18],EAX
0061f987  MOV ECX,dword ptr [EBP + 0xc]
0061f98a  IMUL ECX,dword ptr [EBP + 0x10]
0061f98e  CMP dword ptr [EBP + -0x18],ECX
0061f991  JGE 0x0061f9da
0061f993  MOV EDX,dword ptr [EBP + -0x18]
0061f996  MOV EAX,dword ptr [EBP + 0x8]
0061f999  MOVZX ECX,byte ptr [EAX + EDX*0x4]
0061f99d  TEST ECX,ECX
0061f99f  JNZ 0x0061f9bf
0061f9a1  MOV EDX,dword ptr [EBP + -0x18]
0061f9a4  MOV EAX,dword ptr [EBP + 0x8]
0061f9a7  MOVZX ECX,byte ptr [EAX + EDX*0x4 + 0x1]
0061f9ac  TEST ECX,ECX
0061f9ae  JNZ 0x0061f9bf
0061f9b0  MOV EDX,dword ptr [EBP + -0x18]
0061f9b3  MOV EAX,dword ptr [EBP + 0x8]
0061f9b6  MOVZX ECX,byte ptr [EAX + EDX*0x4 + 0x2]
0061f9bb  TEST ECX,ECX
0061f9bd  JZ 0x0061f9c3
0061f9bf  MOV byte ptr [EBP + -0x5],0x1
0061f9c3  MOV EDX,dword ptr [EBP + -0x18]
0061f9c6  MOV EAX,dword ptr [EBP + 0x8]
0061f9c9  MOVZX ECX,byte ptr [EAX + EDX*0x4 + 0x3]
0061f9ce  TEST ECX,ECX
0061f9d0  JZ 0x0061f9d8
0061f9d2  MOV byte ptr [EBP + -0x25],0x1
0061f9d6  JMP 0x0061f9da
0061f9d8  JMP 0x0061f97e
0061f9da  MOV EDX,dword ptr [EBP + 0x14]
0061f9dd  MOV dword ptr [EBP + 0xffffff78],EDX
0061f9e3  CMP dword ptr [EBP + 0xffffff78],0x4
0061f9ea  JZ 0x0061f9fa
0061f9ec  CMP dword ptr [EBP + 0xffffff78],0x80
0061f9f6  JZ 0x0061f9fa
0061f9f8  JMP 0x0061fa2b
0061f9fa  MOVZX EAX,byte ptr [EBP + -0x5]
0061f9fe  TEST EAX,EAX
0061fa00  JZ 0x0061fa16
0061fa02  MOVZX ECX,byte ptr [EBP + -0x25]
0061fa06  TEST ECX,ECX
0061fa08  JNZ 0x0061fa16
0061fa0a  MOV dword ptr [EBP + 0xffffff74],0x1
0061fa14  JMP 0x0061fa20
0061fa16  MOV dword ptr [EBP + 0xffffff74],0x0
0061fa20  MOV DL,byte ptr [EBP + 0xffffff74]
0061fa26  MOV byte ptr [EBP + -0x41],DL
0061fa29  JMP 0x0061fa2f
0061fa2b  MOV byte ptr [EBP + -0x41],0x1
0061fa2f  MOVZX EAX,byte ptr [EBP + -0x41]
0061fa33  TEST EAX,EAX
0061fa35  JZ 0x0061fb36
0061fa3b  CMP dword ptr [EBP + 0x14],0x4
0061fa3f  JZ 0x0061fa4a
0061fa41  CMP dword ptr [EBP + 0x14],0x80
0061fa48  JNZ 0x0061fa7a
0061fa4a  MOV dword ptr [EBP + -0x18],0x0
0061fa51  JMP 0x0061fa5c
0061fa53  MOV ECX,dword ptr [EBP + -0x18]
0061fa56  ADD ECX,0x1
0061fa59  MOV dword ptr [EBP + -0x18],ECX
0061fa5c  MOV EDX,dword ptr [EBP + 0xc]
0061fa5f  IMUL EDX,dword ptr [EBP + 0x10]
0061fa63  CMP dword ptr [EBP + -0x18],EDX
0061fa66  JGE 0x0061fa75
0061fa68  MOV EAX,dword ptr [EBP + -0x18]
0061fa6b  MOV ECX,dword ptr [EBP + 0x8]
0061fa6e  MOV byte ptr [ECX + EAX*0x4 + 0x3],0xff
0061fa73  JMP 0x0061fa53
0061fa75  JMP 0x0061fb36
0061fa7a  MOV dword ptr [EBP + -0x4c],0xffffffff
0061fa81  MOV EDX,dword ptr [EBP + 0x14]
0061fa84  MOV dword ptr [EBP + 0xffffff70],EDX
0061fa8a  MOV EAX,dword ptr [EBP + 0xffffff70]
0061fa90  SUB EAX,0xe
0061fa93  MOV dword ptr [EBP + 0xffffff70],EAX
0061fa99  CMP dword ptr [EBP + 0xffffff70],0x32
0061faa0  JA 0x0061facf
0061faa2  MOV ECX,dword ptr [EBP + 0xffffff70]
0061faa8  MOVZX EDX,byte ptr [ECX + 0x62001c]
0061faaf  JMP dword ptr [EDX*0x4 + 0x62000c]
0061fab6  MOV dword ptr [EBP + -0x4c],0x0
0061fabd  JMP 0x0061facf
0061fabf  MOV dword ptr [EBP + -0x4c],0x80
0061fac6  JMP 0x0061facf
0061fac8  MOV dword ptr [EBP + -0x4c],0xff
0061facf  MOV dword ptr [EBP + -0x18],0x0
0061fad6  JMP 0x0061fae1
0061fad8  MOV EAX,dword ptr [EBP + -0x18]
0061fadb  ADD EAX,0x1
0061fade  MOV dword ptr [EBP + -0x18],EAX
0061fae1  MOV ECX,dword ptr [EBP + 0xc]
0061fae4  IMUL ECX,dword ptr [EBP + 0x10]
0061fae8  CMP dword ptr [EBP + -0x18],ECX
0061faeb  JGE 0x0061fb36
0061faed  MOV EDX,dword ptr [EBP + -0x18]
0061faf0  MOV EAX,dword ptr [EBP + 0x8]
0061faf3  MOVZX ECX,byte ptr [EAX + EDX*0x4]
0061faf7  CMP ECX,dword ptr [EBP + -0x4c]
0061fafa  JNZ 0x0061fb29
0061fafc  MOV EDX,dword ptr [EBP + -0x18]
0061faff  MOV EAX,dword ptr [EBP + 0x8]
0061fb02  MOVZX ECX,byte ptr [EAX + EDX*0x4 + 0x1]
0061fb07  CMP ECX,dword ptr [EBP + -0x4c]
0061fb0a  JNZ 0x0061fb29
0061fb0c  MOV EDX,dword ptr [EBP + -0x18]
0061fb0f  MOV EAX,dword ptr [EBP + 0x8]
0061fb12  MOVZX ECX,byte ptr [EAX + EDX*0x4 + 0x2]
0061fb17  CMP ECX,dword ptr [EBP + -0x4c]
0061fb1a  JNZ 0x0061fb29
0061fb1c  MOV EDX,dword ptr [EBP + -0x18]
0061fb1f  MOV EAX,dword ptr [EBP + 0x8]
0061fb22  MOV byte ptr [EAX + EDX*0x4 + 0x3],0x0
0061fb27  JMP 0x0061fb34
0061fb29  MOV ECX,dword ptr [EBP + -0x18]
0061fb2c  MOV EDX,dword ptr [EBP + 0x8]
0061fb2f  MOV byte ptr [EDX + ECX*0x4 + 0x3],0xff
0061fb34  JMP 0x0061fad8
0061fb36  MOV dword ptr [EBP + -0x30],0x1
0061fb3d  MOV dword ptr [EBP + -0x4],0x0
0061fb44  MOV dword ptr [EBP + -0x2c],0x0
0061fb4b  MOV dword ptr [EBP + -0x40],0x0
0061fb52  JMP 0x0061fb5d
0061fb54  MOV EAX,dword ptr [EBP + -0x40]
0061fb57  ADD EAX,0x1
0061fb5a  MOV dword ptr [EBP + -0x40],EAX
0061fb5d  MOV ECX,dword ptr [EBP + -0x40]
0061fb60  CMP ECX,dword ptr [EBP + 0x10]
0061fb63  JGE 0x0061fc23
0061fb69  MOV dword ptr [EBP + -0x3c],0x0
0061fb70  JMP 0x0061fb7b
0061fb72  MOV EDX,dword ptr [EBP + -0x3c]
0061fb75  ADD EDX,0x1
0061fb78  MOV dword ptr [EBP + -0x3c],EDX
0061fb7b  MOV EAX,dword ptr [EBP + -0x3c]
0061fb7e  CMP EAX,dword ptr [EBP + 0xc]
0061fb81  JGE 0x0061fc09
0061fb87  MOV dword ptr [EBP + -0x30],0x1
0061fb8e  MOV ECX,dword ptr [EBP + -0x40]
0061fb91  IMUL ECX,dword ptr [EBP + 0xc]
0061fb95  ADD ECX,dword ptr [EBP + -0x3c]
0061fb98  MOV EDX,dword ptr [EBP + 0x8]
0061fb9b  MOV EAX,dword ptr [EDX + ECX*0x4]
0061fb9e  MOV dword ptr [EBP + -0x10],EAX
0061fba1  MOV ECX,dword ptr [EBP + -0x3c]
0061fba4  AND ECX,0x80000001
0061fbaa  JNS 0x0061fbb1
0061fbac  DEC ECX
0061fbad  OR ECX,0xfffffffe
0061fbb0  INC ECX
0061fbb1  TEST ECX,ECX
0061fbb3  JZ 0x0061fbd8
0061fbb5  MOVZX EDX,byte ptr [EBP + -0x10]
0061fbb9  TEST EDX,EDX
0061fbbb  JG 0x0061fbcd
0061fbbd  MOVZX EAX,byte ptr [EBP + -0xf]
0061fbc1  TEST EAX,EAX
0061fbc3  JG 0x0061fbcd
0061fbc5  MOVZX ECX,byte ptr [EBP + -0xe]
0061fbc9  TEST ECX,ECX
0061fbcb  JLE 0x0061fbd6
0061fbcd  MOV dword ptr [EBP + -0x30],0x0
0061fbd4  JMP 0x0061fc09
0061fbd6  JMP 0x0061fc04
0061fbd8  MOVZX EDX,byte ptr [EBP + -0x10]
0061fbdc  CMP EDX,0xff
0061fbe2  JL 0x0061fbfb
0061fbe4  MOVZX EAX,byte ptr [EBP + -0xf]
0061fbe8  CMP EAX,0xff
0061fbed  JL 0x0061fbfb
0061fbef  MOVZX ECX,byte ptr [EBP + -0xe]
0061fbf3  CMP ECX,0xff
0061fbf9  JGE 0x0061fc04
0061fbfb  MOV dword ptr [EBP + -0x30],0x0
0061fc02  JMP 0x0061fc09
0061fc04  JMP 0x0061fb72
0061fc09  CMP dword ptr [EBP + -0x30],0x0
0061fc0d  JZ 0x0061fc1e
0061fc0f  MOV dword ptr [EBP + -0x4],0x1
0061fc16  MOV EDX,dword ptr [EBP + -0x40]
0061fc19  MOV dword ptr [EBP + -0x2c],EDX
0061fc1c  JMP 0x0061fc23
0061fc1e  JMP 0x0061fb54
0061fc23  CMP dword ptr [EBP + -0x4],0x0
0061fc27  JZ 0x0061fc77
0061fc29  MOV dword ptr [EBP + -0x40],0x0
0061fc30  JMP 0x0061fc3f
0061fc32  MOV EAX,dword ptr [EBP + -0x2c]
0061fc35  MOV ECX,dword ptr [EBP + -0x40]
0061fc38  LEA EDX,[ECX + EAX*0x1 + 0x1]
0061fc3c  MOV dword ptr [EBP + -0x40],EDX
0061fc3f  MOV EAX,dword ptr [EBP + -0x40]
0061fc42  CMP EAX,dword ptr [EBP + 0x10]
0061fc45  JGE 0x0061fc72
0061fc47  MOV CL,byte ptr [EBP + 0x18]
0061fc4a  PUSH ECX
0061fc4b  MOV EDX,dword ptr [EBP + 0x14]
0061fc4e  PUSH EDX
0061fc4f  MOV EAX,dword ptr [EBP + -0x2c]
0061fc52  PUSH EAX
0061fc53  MOV ECX,dword ptr [EBP + 0xc]
0061fc56  PUSH ECX
0061fc57  MOV EDX,dword ptr [EBP + -0x40]
0061fc5a  IMUL EDX,dword ptr [EBP + 0xc]
0061fc5e  MOV EAX,dword ptr [EBP + 0x8]
0061fc61  LEA ECX,[EAX + EDX*0x4]
0061fc64  PUSH ECX
0061fc65  MOV ECX,dword ptr [EBP + 0xffffff7c]
0061fc6b  CALL 0x0061f8a0
0061fc70  JMP 0x0061fc32
0061fc72  JMP 0x00620005
0061fc77  MOVZX EDX,byte ptr [EBP + 0x18]
0061fc7b  TEST EDX,EDX
0061fc7d  JZ 0x0061fca8
0061fc7f  LEA EAX,[EBP + -0xc]
0061fc82  PUSH EAX
0061fc83  LEA ECX,[EBP + -0x38]
0061fc86  PUSH ECX
0061fc87  LEA EDX,[EBP + -0x34]
0061fc8a  PUSH EDX
0061fc8b  LEA EAX,[EBP + -0x24]
0061fc8e  PUSH EAX
0061fc8f  MOV ECX,dword ptr [EBP + 0x10]
0061fc92  PUSH ECX
0061fc93  MOV EDX,dword ptr [EBP + 0xc]
0061fc96  PUSH EDX
0061fc97  MOV EAX,dword ptr [EBP + 0x8]
0061fc9a  PUSH EAX
0061fc9b  MOV ECX,dword ptr [EBP + 0xffffff7c]
0061fca1  CALL 0x00620650
0061fca6  JMP 0x0061fcc4
0061fca8  MOV dword ptr [EBP + -0x24],0x0
0061fcaf  MOV dword ptr [EBP + -0x34],0x0
0061fcb6  MOV dword ptr [EBP + -0x38],0x0
0061fcbd  MOV dword ptr [EBP + -0xc],0x0
0061fcc4  MOV ECX,dword ptr [EBP + -0x1c]
0061fcc7  MOV EDX,dword ptr [ECX]
0061fcc9  IMUL EDX,EDX,0x18
0061fccc  MOV EAX,dword ptr [EBP + -0x1c]
0061fccf  ADD EDX,dword ptr [EAX + 0x4]
0061fcd2  MOV dword ptr [EBP + -0x20],EDX
0061fcd5  MOV ECX,dword ptr [EBP + -0x24]
0061fcd8  CMP ECX,dword ptr [EBP + 0xc]
0061fcdb  JZ 0x0061fcf5
0061fcdd  MOV EDX,dword ptr [EBP + -0x34]
0061fce0  CMP EDX,dword ptr [EBP + 0x10]
0061fce3  JZ 0x0061fcf5
0061fce5  MOV EAX,dword ptr [EBP + -0x38]
0061fce8  CMP EAX,dword ptr [EBP + 0xc]
0061fceb  JZ 0x0061fcf5
0061fced  MOV ECX,dword ptr [EBP + -0xc]
0061fcf0  CMP ECX,dword ptr [EBP + 0x10]
0061fcf3  JNZ 0x0061fd35
0061fcf5  MOV EDX,dword ptr [EBP + -0x20]
0061fcf8  MOV dword ptr [EDX + 0x8],0x0
0061fcff  MOV EAX,dword ptr [EBP + -0x20]
0061fd02  MOV dword ptr [EAX + 0xc],0x0
0061fd09  MOV ECX,dword ptr [EBP + -0x20]
0061fd0c  MOV dword ptr [ECX],0x0
0061fd12  MOV EDX,dword ptr [EBP + -0x20]
0061fd15  MOV dword ptr [EDX + 0x4],0x0
0061fd1c  MOV EAX,dword ptr [EBP + -0x20]
0061fd1f  MOV dword ptr [EAX + 0x14],0x0
0061fd26  MOV ECX,dword ptr [EBP + -0x20]
0061fd29  MOV dword ptr [ECX + 0x10],0x0
0061fd30  JMP 0x0061fff8
0061fd35  MOV EDX,dword ptr [EBP + -0x20]
0061fd38  MOV EAX,dword ptr [EBP + -0x24]
0061fd3b  MOV dword ptr [EDX + 0x8],EAX
0061fd3e  MOV ECX,dword ptr [EBP + -0x20]
0061fd41  MOV EDX,dword ptr [EBP + -0x34]
0061fd44  MOV dword ptr [ECX + 0xc],EDX
0061fd47  MOV EAX,dword ptr [EBP + 0xc]
0061fd4a  SUB EAX,dword ptr [EBP + -0x24]
0061fd4d  SUB EAX,dword ptr [EBP + -0x38]
0061fd50  MOV ECX,dword ptr [EBP + -0x20]
0061fd53  MOV dword ptr [ECX],EAX
0061fd55  MOV EDX,dword ptr [EBP + 0x10]
0061fd58  SUB EDX,dword ptr [EBP + -0x34]
0061fd5b  SUB EDX,dword ptr [EBP + -0xc]
0061fd5e  MOV EAX,dword ptr [EBP + -0x20]
0061fd61  MOV dword ptr [EAX + 0x4],EDX
0061fd64  XOR ECX,ECX
0061fd66  MOV EDX,dword ptr [EBP + -0x20]
0061fd69  MOV EAX,dword ptr [EDX + 0x4]
0061fd6c  MOV EDX,0x4
0061fd71  MUL EDX
0061fd73  SETO CL
0061fd76  NEG ECX
0061fd78  OR ECX,EAX
0061fd7a  PUSH ECX
0061fd7b  CALL 0x00686d82
0061fd80  ADD ESP,0x4
0061fd83  MOV dword ptr [EBP + -0x64],EAX
0061fd86  MOV EAX,dword ptr [EBP + -0x20]
0061fd89  MOV ECX,dword ptr [EBP + -0x64]
0061fd8c  MOV dword ptr [EAX + 0x14],ECX
0061fd8f  XOR ECX,ECX
0061fd91  MOV EDX,dword ptr [EBP + -0x20]
0061fd94  MOV EAX,dword ptr [EDX + 0x4]
0061fd97  MOV EDX,0x4
0061fd9c  MUL EDX
0061fd9e  SETO CL
0061fda1  NEG ECX
0061fda3  OR ECX,EAX
0061fda5  PUSH ECX
0061fda6  CALL 0x00686d82
0061fdab  ADD ESP,0x4
0061fdae  MOV dword ptr [EBP + -0x68],EAX
0061fdb1  MOV EAX,dword ptr [EBP + -0x20]
0061fdb4  MOV ECX,dword ptr [EBP + -0x68]
0061fdb7  MOV dword ptr [EAX + 0x10],ECX
0061fdba  MOV EDX,dword ptr [EBP + 0xffffff7c]
0061fdc0  MOV EAX,dword ptr [EDX + 0x31c]
0061fdc6  MOV dword ptr [EBP + -0x50],EAX
0061fdc9  CMP dword ptr [EBP + -0x50],0x0
0061fdcd  JNZ 0x0061fde5
0061fdcf  PUSH 0x80000
0061fdd4  CALL 0x00686d82
0061fdd9  ADD ESP,0x4
0061fddc  MOV dword ptr [EBP + -0x6c],EAX
0061fddf  MOV ECX,dword ptr [EBP + -0x6c]
0061fde2  MOV dword ptr [EBP + -0x50],ECX
0061fde5  MOV EDX,dword ptr [EBP + -0x20]
0061fde8  MOV EAX,dword ptr [EBP + -0x20]
0061fdeb  MOV ECX,dword ptr [EDX]
0061fded  IMUL ECX,dword ptr [EAX + 0x4]
0061fdf1  PUSH ECX
0061fdf2  CALL 0x00686d82
0061fdf7  ADD ESP,0x4
0061fdfa  MOV dword ptr [EBP + -0x70],EAX
0061fdfd  MOV EDX,dword ptr [EBP + -0x70]
0061fe00  MOV dword ptr [EBP + -0x54],EDX
0061fe03  MOV EAX,dword ptr [EBP + -0x20]
0061fe06  MOV ECX,dword ptr [EBP + -0x20]
0061fe09  MOV EDX,dword ptr [EAX]
0061fe0b  IMUL EDX,dword ptr [ECX + 0x4]
0061fe0f  PUSH EDX
0061fe10  CALL 0x00686d82
0061fe15  ADD ESP,0x4
0061fe18  MOV dword ptr [EBP + -0x74],EAX
0061fe1b  MOV EAX,dword ptr [EBP + -0x74]
0061fe1e  MOV dword ptr [EBP + -0x58],EAX
0061fe21  PUSH 0x80000
0061fe26  PUSH 0x0
0061fe28  MOV ECX,dword ptr [EBP + -0x50]
0061fe2b  PUSH ECX
0061fe2c  CALL 0x00686fa2
0061fe31  ADD ESP,0xc
0061fe34  MOV EDX,dword ptr [EBP + 0xffffff7c]
0061fe3a  MOVZX EAX,word ptr [EDX + 0x308]
0061fe41  CMP EAX,0x100
0061fe46  JGE 0x0061fe90
0061fe48  MOV ECX,dword ptr [EBP + -0x20]
0061fe4b  MOV EDX,dword ptr [ECX + 0x4]
0061fe4e  PUSH EDX
0061fe4f  MOV EAX,dword ptr [EBP + -0x20]
0061fe52  MOV ECX,dword ptr [EAX]
0061fe54  PUSH ECX
0061fe55  MOV EDX,dword ptr [EBP + -0x58]
0061fe58  PUSH EDX
0061fe59  MOV EAX,dword ptr [EBP + -0x54]
0061fe5c  PUSH EAX
0061fe5d  MOV ECX,dword ptr [EBP + -0x34]
0061fe60  IMUL ECX,dword ptr [EBP + 0xc]
0061fe64  ADD ECX,dword ptr [EBP + -0x24]
0061fe67  MOV EDX,dword ptr [EBP + 0x8]
0061fe6a  LEA EAX,[EDX + ECX*0x4]
0061fe6d  PUSH EAX
0061fe6e  MOV ECX,dword ptr [EBP + 0xffffff7c]
0061fe74  MOVZX EDX,word ptr [ECX + 0x308]
0061fe7b  PUSH EDX
0061fe7c  MOV EAX,dword ptr [EBP + 0xffffff7c]
0061fe82  ADD EAX,0x8
0061fe85  PUSH EAX
0061fe86  CALL 0x00622150
0061fe8b  ADD ESP,0x1c
0061fe8e  JMP 0x0061feda
0061fe90  MOV ECX,dword ptr [EBP + -0x20]
0061fe93  MOV EDX,dword ptr [ECX + 0x4]
0061fe96  PUSH EDX
0061fe97  MOV EAX,dword ptr [EBP + -0x20]
0061fe9a  MOV ECX,dword ptr [EAX]
0061fe9c  PUSH ECX
0061fe9d  MOV EDX,dword ptr [EBP + -0x58]
0061fea0  PUSH EDX
0061fea1  MOV EAX,dword ptr [EBP + -0x54]
0061fea4  PUSH EAX
0061fea5  MOV ECX,dword ptr [EBP + -0x34]
0061fea8  IMUL ECX,dword ptr [EBP + 0xc]
0061feac  ADD ECX,dword ptr [EBP + -0x24]
0061feaf  MOV EDX,dword ptr [EBP + 0x8]
0061feb2  LEA EAX,[EDX + ECX*0x4]
0061feb5  PUSH EAX
0061feb6  MOV ECX,dword ptr [EBP + -0x50]
0061feb9  PUSH ECX
0061feba  MOV EDX,dword ptr [EBP + 0xffffff7c]
0061fec0  MOVZX EAX,word ptr [EDX + 0x308]
0061fec7  PUSH EAX
0061fec8  MOV ECX,dword ptr [EBP + 0xffffff7c]
0061fece  ADD ECX,0x8
0061fed1  PUSH ECX
0061fed2  CALL 0x00622340
0061fed7  ADD ESP,0x20
0061feda  MOV dword ptr [EBP + -0x14],0x0
0061fee1  JMP 0x0061feec
0061fee3  MOV EDX,dword ptr [EBP + -0x14]
0061fee6  ADD EDX,0x1
0061fee9  MOV dword ptr [EBP + -0x14],EDX
0061feec  MOV EAX,dword ptr [EBP + -0x20]
0061feef  MOV ECX,dword ptr [EBP + -0x14]
0061fef2  CMP ECX,dword ptr [EAX + 0x4]
0061fef5  JGE 0x0061ffb1
0061fefb  CMP dword ptr [EBP + 0x14],0x80
0061ff02  JZ 0x0061ff2b
0061ff04  CMP dword ptr [EBP + 0x14],0x82
0061ff0b  JZ 0x0061ff2b
0061ff0d  CMP dword ptr [EBP + 0x14],0x84
0061ff14  JZ 0x0061ff2b
0061ff16  CMP dword ptr [EBP + 0x14],0x88
0061ff1d  JZ 0x0061ff2b
0061ff1f  MOV dword ptr [EBP + 0xffffff6c],0x0
0061ff29  JMP 0x0061ff35
0061ff2b  MOV dword ptr [EBP + 0xffffff6c],0x1
0061ff35  MOVZX EDX,byte ptr [EBP + 0xffffff6c]
0061ff3c  TEST EDX,EDX
0061ff3e  JZ 0x0061ff5b
0061ff40  MOV EAX,dword ptr [EBP + -0x14]
0061ff43  ADD EAX,dword ptr [EBP + -0x34]
0061ff46  IMUL EAX,dword ptr [EBP + 0xc]
0061ff4a  ADD EAX,dword ptr [EBP + -0x24]
0061ff4d  MOV ECX,dword ptr [EBP + 0x8]
0061ff50  LEA EDX,[ECX + EAX*0x4]
0061ff53  MOV dword ptr [EBP + 0xffffff68],EDX
0061ff59  JMP 0x0061ff6d
0061ff5b  MOV EAX,dword ptr [EBP + -0x20]
0061ff5e  MOV ECX,dword ptr [EBP + -0x14]
0061ff61  IMUL ECX,dword ptr [EAX]
0061ff64  ADD ECX,dword ptr [EBP + -0x54]
0061ff67  MOV dword ptr [EBP + 0xffffff68],ECX
0061ff6d  MOV EDX,dword ptr [EBP + 0x14]
0061ff70  PUSH EDX
0061ff71  MOV EAX,dword ptr [EBP + -0x20]
0061ff74  MOV ECX,dword ptr [EBP + -0x14]
0061ff77  IMUL ECX,dword ptr [EAX]
0061ff7a  ADD ECX,dword ptr [EBP + -0x58]
0061ff7d  PUSH ECX
0061ff7e  MOV EDX,dword ptr [EBP + -0x20]
0061ff81  MOV EAX,dword ptr [EDX + 0x10]
0061ff84  MOV ECX,dword ptr [EBP + -0x14]
0061ff87  LEA EDX,[EAX + ECX*0x4]
0061ff8a  PUSH EDX
0061ff8b  MOV EAX,dword ptr [EBP + -0x20]
0061ff8e  MOV ECX,dword ptr [EAX]
0061ff90  PUSH ECX
0061ff91  MOV EDX,dword ptr [EBP + 0xffffff68]
0061ff97  PUSH EDX
0061ff98  CALL 0x00618330
0061ff9d  ADD ESP,0x14
0061ffa0  MOV ECX,dword ptr [EBP + -0x20]
0061ffa3  MOV EDX,dword ptr [ECX + 0x14]
0061ffa6  MOV ECX,dword ptr [EBP + -0x14]
0061ffa9  MOV dword ptr [EDX + ECX*0x4],EAX
0061ffac  JMP 0x0061fee3
0061ffb1  MOV EDX,dword ptr [EBP + -0x54]
0061ffb4  MOV dword ptr [EBP + -0x78],EDX
0061ffb7  MOV EAX,dword ptr [EBP + -0x78]
0061ffba  PUSH EAX
0061ffbb  CALL 0x00686cae
0061ffc0  ADD ESP,0x4
0061ffc3  MOV ECX,dword ptr [EBP + -0x58]
0061ffc6  MOV dword ptr [EBP + -0x7c],ECX
0061ffc9  MOV EDX,dword ptr [EBP + -0x7c]
0061ffcc  PUSH EDX
0061ffcd  CALL 0x00686cae
0061ffd2  ADD ESP,0x4
0061ffd5  MOV EAX,dword ptr [EBP + 0xffffff7c]
0061ffdb  MOV ECX,dword ptr [EBP + -0x50]
0061ffde  CMP ECX,dword ptr [EAX + 0x31c]
0061ffe4  JZ 0x0061fff8
0061ffe6  MOV EDX,dword ptr [EBP + -0x50]
0061ffe9  MOV dword ptr [EBP + -0x80],EDX
0061ffec  MOV EAX,dword ptr [EBP + -0x80]
0061ffef  PUSH EAX
0061fff0  CALL 0x00686cae
0061fff5  ADD ESP,0x4
0061fff8  MOV ECX,dword ptr [EBP + -0x1c]
0061fffb  MOV EDX,dword ptr [ECX]
0061fffd  ADD EDX,0x1
00620000  MOV EAX,dword ptr [EBP + -0x1c]
00620003  MOV dword ptr [EAX],EDX
00620005  MOV ESP,EBP
00620007  POP EBP
00620008  RET 0x14
