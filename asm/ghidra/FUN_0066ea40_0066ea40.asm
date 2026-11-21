; FUN_0066ea40  0066ea40
0066ea40  PUSH EBP
0066ea41  MOV EBP,ESP
0066ea43  SUB ESP,0x17c
0066ea49  MOV EAX,[0x00781870]
0066ea4e  XOR EAX,EBP
0066ea50  MOV dword ptr [EBP + -0x8],EAX
0066ea53  PUSH ESI
0066ea54  MOV dword ptr [EBP + 0xfffffe88],ECX
0066ea5a  PUSH -0x1
0066ea5c  MOV EAX,[0x0162ee84]
0066ea61  MOV EDX,dword ptr [EAX]
0066ea63  MOV ECX,dword ptr [0x0162ee84]
0066ea69  MOV EAX,dword ptr [EDX + 0x33c]
0066ea6f  CALL EAX
0066ea71  MOVZX ECX,AL
0066ea74  TEST ECX,ECX
0066ea76  JNZ 0x0066ea7d
0066ea78  JMP 0x0066f04e
0066ea7d  MOV EDX,dword ptr [EBP + 0xfffffe88]
0066ea83  MOV ECX,dword ptr [EDX + 0x1f0]
0066ea89  CALL 0x005f54c0
0066ea8e  MOVZX EAX,AL
0066ea91  TEST EAX,EAX
0066ea93  JZ 0x0066eb01
0066ea95  MOV ECX,dword ptr [EBP + 0xfffffe88]
0066ea9b  MOV EDX,dword ptr [ECX]
0066ea9d  MOV ECX,dword ptr [EBP + 0xfffffe88]
0066eaa3  MOV EAX,dword ptr [EDX + 0x54]
0066eaa6  CALL EAX
0066eaa8  ADD EAX,0x65
0066eaab  PUSH EAX
0066eaac  MOV ECX,dword ptr [EBP + 0xfffffe88]
0066eab2  MOV EDX,dword ptr [ECX]
0066eab4  MOV ECX,dword ptr [EBP + 0xfffffe88]
0066eaba  MOV EAX,dword ptr [EDX + 0x4c]
0066eabd  CALL EAX
0066eabf  ADD EAX,0x67
0066eac2  PUSH EAX
0066eac3  MOV ECX,dword ptr [EBP + 0xfffffe88]
0066eac9  MOV EDX,dword ptr [ECX + 0x1f0]
0066eacf  MOV EAX,dword ptr [EBP + 0xfffffe88]
0066ead5  MOV ECX,dword ptr [EAX + 0x1f0]
0066eadb  MOV EDX,dword ptr [EDX]
0066eadd  MOV EAX,dword ptr [EDX + 0x44]
0066eae0  CALL EAX
0066eae2  MOV ECX,dword ptr [EBP + 0xfffffe88]
0066eae8  MOV EDX,dword ptr [ECX + 0x1f0]
0066eaee  MOV EAX,dword ptr [EBP + 0xfffffe88]
0066eaf4  MOV ECX,dword ptr [EAX + 0x1f0]
0066eafa  MOV EDX,dword ptr [EDX]
0066eafc  MOV EAX,dword ptr [EDX + 0x74]
0066eaff  CALL EAX
0066eb01  MOV ECX,dword ptr [EBP + 0xfffffe88]
0066eb07  MOV ECX,dword ptr [ECX + 0x1f4]
0066eb0d  CALL 0x005f54c0
0066eb12  MOVZX EDX,AL
0066eb15  TEST EDX,EDX
0066eb17  JZ 0x0066eb85
0066eb19  MOV EAX,dword ptr [EBP + 0xfffffe88]
0066eb1f  MOV EDX,dword ptr [EAX]
0066eb21  MOV ECX,dword ptr [EBP + 0xfffffe88]
0066eb27  MOV EAX,dword ptr [EDX + 0x54]
0066eb2a  CALL EAX
0066eb2c  ADD EAX,0x4a
0066eb2f  PUSH EAX
0066eb30  MOV ECX,dword ptr [EBP + 0xfffffe88]
0066eb36  MOV EDX,dword ptr [ECX]
0066eb38  MOV ECX,dword ptr [EBP + 0xfffffe88]
0066eb3e  MOV EAX,dword ptr [EDX + 0x4c]
0066eb41  CALL EAX
0066eb43  ADD EAX,0x77
0066eb46  PUSH EAX
0066eb47  MOV ECX,dword ptr [EBP + 0xfffffe88]
0066eb4d  MOV EDX,dword ptr [ECX + 0x1f4]
0066eb53  MOV EAX,dword ptr [EBP + 0xfffffe88]
0066eb59  MOV ECX,dword ptr [EAX + 0x1f4]
0066eb5f  MOV EDX,dword ptr [EDX]
0066eb61  MOV EAX,dword ptr [EDX + 0x44]
0066eb64  CALL EAX
0066eb66  MOV ECX,dword ptr [EBP + 0xfffffe88]
0066eb6c  MOV EDX,dword ptr [ECX + 0x1f4]
0066eb72  MOV EAX,dword ptr [EBP + 0xfffffe88]
0066eb78  MOV ECX,dword ptr [EAX + 0x1f4]
0066eb7e  MOV EDX,dword ptr [EDX]
0066eb80  MOV EAX,dword ptr [EDX + 0x74]
0066eb83  CALL EAX
0066eb85  MOV ECX,dword ptr [EBP + 0xfffffe88]
0066eb8b  MOV EDX,dword ptr [ECX]
0066eb8d  MOV ECX,dword ptr [EBP + 0xfffffe88]
0066eb93  MOV EAX,dword ptr [EDX + 0x54]
0066eb96  CALL EAX
0066eb98  ADD EAX,0x17c
0066eb9d  PUSH EAX
0066eb9e  MOV ECX,dword ptr [EBP + 0xfffffe88]
0066eba4  MOV EDX,dword ptr [ECX]
0066eba6  MOV ECX,dword ptr [EBP + 0xfffffe88]
0066ebac  MOV EAX,dword ptr [EDX + 0x4c]
0066ebaf  CALL EAX
0066ebb1  ADD EAX,0x186
0066ebb6  PUSH EAX
0066ebb7  MOV ECX,dword ptr [EBP + 0xfffffe88]
0066ebbd  MOV EDX,dword ptr [ECX + 0x204]
0066ebc3  MOV EAX,dword ptr [EBP + 0xfffffe88]
0066ebc9  MOV ECX,dword ptr [EAX + 0x204]
0066ebcf  MOV EDX,dword ptr [EDX]
0066ebd1  MOV EAX,dword ptr [EDX + 0x44]
0066ebd4  CALL EAX
0066ebd6  MOV ECX,dword ptr [EBP + 0xfffffe88]
0066ebdc  MOV EDX,dword ptr [ECX + 0x204]
0066ebe2  MOV EAX,dword ptr [EBP + 0xfffffe88]
0066ebe8  MOV ECX,dword ptr [EAX + 0x204]
0066ebee  MOV EDX,dword ptr [EDX]
0066ebf0  MOV EAX,dword ptr [EDX + 0x74]
0066ebf3  CALL EAX
0066ebf5  MOV ECX,dword ptr [EBP + 0x8]
0066ebf8  MOV dword ptr [EBP + -0x4],ECX
0066ebfb  JMP 0x0066ec06
0066ebfd  MOV EDX,dword ptr [EBP + -0x4]
0066ec00  ADD EDX,0x1
0066ec03  MOV dword ptr [EBP + -0x4],EDX
0066ec06  CMP dword ptr [EBP + -0x4],0xa
0066ec0a  JGE 0x0066efb2
0066ec10  MOV EAX,dword ptr [EBP + -0x4]
0066ec13  IMUL EAX,EAX,0x98
0066ec19  MOV ECX,dword ptr [EBP + 0xfffffe88]
0066ec1f  LEA EDX,[ECX + EAX*0x1 + 0x210]
0066ec26  PUSH EDX
0066ec27  PUSH 0x6b2fd8
0066ec2c  LEA EAX,[EBP + -0x70]
0066ec2f  PUSH EAX
0066ec30  CALL dword ptr [0x006b2220]
0066ec36  ADD ESP,0xc
0066ec39  LEA ECX,[EBP + -0x70]
0066ec3c  PUSH ECX
0066ec3d  MOV EDX,dword ptr [EBP + -0x4]
0066ec40  MOV EAX,dword ptr [EBP + 0xfffffe88]
0066ec46  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x178]
0066ec4d  MOV EDX,dword ptr [EBP + -0x4]
0066ec50  MOV EAX,dword ptr [EBP + 0xfffffe88]
0066ec56  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x178]
0066ec5d  MOV EAX,dword ptr [ECX]
0066ec5f  MOV ECX,EDX
0066ec61  MOV EDX,dword ptr [EAX + 0xb4]
0066ec67  CALL EDX
0066ec69  CMP dword ptr [EBP + 0x8],0x0
0066ec6d  JNZ 0x0066ecc8
0066ec6f  MOV EAX,dword ptr [EBP + 0xfffffe88]
0066ec75  MOV EDX,dword ptr [EAX]
0066ec77  MOV ECX,dword ptr [EBP + 0xfffffe88]
0066ec7d  MOV EAX,dword ptr [EDX + 0x54]
0066ec80  CALL EAX
0066ec82  ADD EAX,0x65
0066ec85  PUSH EAX
0066ec86  MOV ECX,dword ptr [EBP + 0xfffffe88]
0066ec8c  MOV EDX,dword ptr [ECX]
0066ec8e  MOV ECX,dword ptr [EBP + 0xfffffe88]
0066ec94  MOV EAX,dword ptr [EDX + 0x4c]
0066ec97  CALL EAX
0066ec99  ADD EAX,0xe2
0066ec9e  PUSH EAX
0066ec9f  MOV ECX,dword ptr [EBP + -0x4]
0066eca2  MOV EDX,dword ptr [EBP + 0xfffffe88]
0066eca8  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x178]
0066ecaf  MOV ECX,dword ptr [EBP + -0x4]
0066ecb2  MOV EDX,dword ptr [EBP + 0xfffffe88]
0066ecb8  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x178]
0066ecbf  MOV EAX,dword ptr [EAX]
0066ecc1  MOV EDX,dword ptr [EAX + 0x44]
0066ecc4  CALL EDX
0066ecc6  JMP 0x0066ed2c
0066ecc8  MOV ESI,dword ptr [EBP + -0x4]
0066eccb  SUB ESI,0x1
0066ecce  IMUL ESI,ESI,0x18
0066ecd1  MOV EAX,dword ptr [EBP + 0xfffffe88]
0066ecd7  MOV EDX,dword ptr [EAX]
0066ecd9  MOV ECX,dword ptr [EBP + 0xfffffe88]
0066ecdf  MOV EAX,dword ptr [EDX + 0x54]
0066ece2  CALL EAX
0066ece4  LEA ECX,[ESI + EAX*0x1 + 0xa2]
0066eceb  PUSH ECX
0066ecec  MOV EDX,dword ptr [EBP + 0xfffffe88]
0066ecf2  MOV EAX,dword ptr [EDX]
0066ecf4  MOV ECX,dword ptr [EBP + 0xfffffe88]
0066ecfa  MOV EDX,dword ptr [EAX + 0x4c]
0066ecfd  CALL EDX
0066ecff  ADD EAX,0xa6
0066ed04  PUSH EAX
0066ed05  MOV EAX,dword ptr [EBP + -0x4]
0066ed08  MOV ECX,dword ptr [EBP + 0xfffffe88]
0066ed0e  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x178]
0066ed15  MOV EAX,dword ptr [EBP + -0x4]
0066ed18  MOV ECX,dword ptr [EBP + 0xfffffe88]
0066ed1e  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x178]
0066ed25  MOV EDX,dword ptr [EDX]
0066ed27  MOV EAX,dword ptr [EDX + 0x44]
0066ed2a  CALL EAX
0066ed2c  MOV ECX,dword ptr [EBP + -0x4]
0066ed2f  MOV EDX,dword ptr [EBP + 0xfffffe88]
0066ed35  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x178]
0066ed3c  MOV ECX,dword ptr [EBP + -0x4]
0066ed3f  MOV EDX,dword ptr [EBP + 0xfffffe88]
0066ed45  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x178]
0066ed4c  MOV EAX,dword ptr [EAX]
0066ed4e  MOV EDX,dword ptr [EAX + 0x74]
0066ed51  CALL EDX
0066ed53  MOV ECX,dword ptr [0x0162ee84]
0066ed59  CALL 0x005f3bf0
0066ed5e  PUSH EAX
0066ed5f  MOV EAX,[0x0162ee84]
0066ed64  MOV EDX,dword ptr [EAX]
0066ed66  MOV ECX,dword ptr [0x0162ee84]
0066ed6c  MOV EAX,dword ptr [EDX + 0xe0]
0066ed72  CALL EAX
0066ed74  MOV dword ptr [EBP + 0xfffffe84],EAX
0066ed7a  LEA ECX,[EBP + 0xfffffe90]
0066ed80  PUSH ECX
0066ed81  MOV EDX,dword ptr [EBP + -0x4]
0066ed84  IMUL EDX,EDX,0x98
0066ed8a  MOV EAX,dword ptr [EBP + 0xfffffe88]
0066ed90  MOV ECX,dword ptr [EAX + EDX*0x1 + 0x244]
0066ed97  PUSH ECX
0066ed98  MOV EDX,dword ptr [EBP + 0xfffffe84]
0066ed9e  MOV EAX,dword ptr [EDX]
0066eda0  MOV ECX,dword ptr [EBP + 0xfffffe84]
0066eda6  MOV EDX,dword ptr [EAX + 0xd8]
0066edac  CALL EDX
0066edae  LEA EAX,[EBP + 0xfffffe90]
0066edb4  PUSH EAX
0066edb5  MOV ECX,dword ptr [EBP + -0x4]
0066edb8  MOV EDX,dword ptr [EBP + 0xfffffe88]
0066edbe  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x1a0]
0066edc5  MOV ECX,dword ptr [EBP + -0x4]
0066edc8  MOV EDX,dword ptr [EBP + 0xfffffe88]
0066edce  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x1a0]
0066edd5  MOV EAX,dword ptr [EAX]
0066edd7  MOV EDX,dword ptr [EAX + 0xb4]
0066eddd  CALL EDX
0066eddf  CMP dword ptr [EBP + 0x8],0x0
0066ede3  JNZ 0x0066ee3e
0066ede5  MOV EAX,dword ptr [EBP + 0xfffffe88]
0066edeb  MOV EDX,dword ptr [EAX]
0066eded  MOV ECX,dword ptr [EBP + 0xfffffe88]
0066edf3  MOV EAX,dword ptr [EDX + 0x54]
0066edf6  CALL EAX
0066edf8  ADD EAX,0x65
0066edfb  PUSH EAX
0066edfc  MOV ECX,dword ptr [EBP + 0xfffffe88]
0066ee02  MOV EDX,dword ptr [ECX]
0066ee04  MOV ECX,dword ptr [EBP + 0xfffffe88]
0066ee0a  MOV EAX,dword ptr [EDX + 0x4c]
0066ee0d  CALL EAX
0066ee0f  ADD EAX,0xe2
0066ee14  PUSH EAX
0066ee15  MOV ECX,dword ptr [EBP + -0x4]
0066ee18  MOV EDX,dword ptr [EBP + 0xfffffe88]
0066ee1e  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x1a0]
0066ee25  MOV ECX,dword ptr [EBP + -0x4]
0066ee28  MOV EDX,dword ptr [EBP + 0xfffffe88]
0066ee2e  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x1a0]
0066ee35  MOV EAX,dword ptr [EAX]
0066ee37  MOV EDX,dword ptr [EAX + 0x44]
0066ee3a  CALL EDX
0066ee3c  JMP 0x0066eea2
0066ee3e  MOV ESI,dword ptr [EBP + -0x4]
0066ee41  SUB ESI,0x1
0066ee44  IMUL ESI,ESI,0x18
0066ee47  MOV EAX,dword ptr [EBP + 0xfffffe88]
0066ee4d  MOV EDX,dword ptr [EAX]
0066ee4f  MOV ECX,dword ptr [EBP + 0xfffffe88]
0066ee55  MOV EAX,dword ptr [EDX + 0x54]
0066ee58  CALL EAX
0066ee5a  LEA ECX,[ESI + EAX*0x1 + 0xa2]
0066ee61  PUSH ECX
0066ee62  MOV EDX,dword ptr [EBP + 0xfffffe88]
0066ee68  MOV EAX,dword ptr [EDX]
0066ee6a  MOV ECX,dword ptr [EBP + 0xfffffe88]
0066ee70  MOV EDX,dword ptr [EAX + 0x4c]
0066ee73  CALL EDX
0066ee75  ADD EAX,0xa6
0066ee7a  PUSH EAX
0066ee7b  MOV EAX,dword ptr [EBP + -0x4]
0066ee7e  MOV ECX,dword ptr [EBP + 0xfffffe88]
0066ee84  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x1a0]
0066ee8b  MOV EAX,dword ptr [EBP + -0x4]
0066ee8e  MOV ECX,dword ptr [EBP + 0xfffffe88]
0066ee94  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x1a0]
0066ee9b  MOV EDX,dword ptr [EDX]
0066ee9d  MOV EAX,dword ptr [EDX + 0x44]
0066eea0  CALL EAX
0066eea2  MOV ECX,dword ptr [EBP + -0x4]
0066eea5  MOV EDX,dword ptr [EBP + 0xfffffe88]
0066eeab  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x1a0]
0066eeb2  MOV ECX,dword ptr [EBP + -0x4]
0066eeb5  MOV EDX,dword ptr [EBP + 0xfffffe88]
0066eebb  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x1a0]
0066eec2  MOV EAX,dword ptr [EAX]
0066eec4  MOV EDX,dword ptr [EAX + 0x74]
0066eec7  CALL EDX
0066eec9  MOV EAX,dword ptr [EBP + -0x4]
0066eecc  ADD EAX,0x1
0066eecf  PUSH EAX
0066eed0  PUSH 0x6b2828
0066eed5  LEA ECX,[EBP + -0x70]
0066eed8  PUSH ECX
0066eed9  CALL dword ptr [0x006b2220]
0066eedf  ADD ESP,0xc
0066eee2  CMP dword ptr [EBP + -0x4],0x0
0066eee6  JLE 0x0066efa5
0066eeec  LEA EDX,[EBP + -0x70]
0066eeef  PUSH EDX
0066eef0  MOV EAX,dword ptr [EBP + -0x4]
0066eef3  MOV ECX,dword ptr [EBP + 0xfffffe88]
0066eef9  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x1c8]
0066ef00  MOV EAX,dword ptr [EBP + -0x4]
0066ef03  MOV ECX,dword ptr [EBP + 0xfffffe88]
0066ef09  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x1c8]
0066ef10  MOV EDX,dword ptr [EDX]
0066ef12  MOV EAX,dword ptr [EDX + 0xb4]
0066ef18  CALL EAX
0066ef1a  MOV ESI,dword ptr [EBP + -0x4]
0066ef1d  SUB ESI,0x1
0066ef20  IMUL ESI,ESI,0x18
0066ef23  MOV ECX,dword ptr [EBP + 0xfffffe88]
0066ef29  MOV EDX,dword ptr [ECX]
0066ef2b  MOV ECX,dword ptr [EBP + 0xfffffe88]
0066ef31  MOV EAX,dword ptr [EDX + 0x54]
0066ef34  CALL EAX
0066ef36  LEA ECX,[ESI + EAX*0x1 + 0xa2]
0066ef3d  PUSH ECX
0066ef3e  MOV EDX,dword ptr [EBP + 0xfffffe88]
0066ef44  MOV EAX,dword ptr [EDX]
0066ef46  MOV ECX,dword ptr [EBP + 0xfffffe88]
0066ef4c  MOV EDX,dword ptr [EAX + 0x4c]
0066ef4f  CALL EDX
0066ef51  ADD EAX,0x82
0066ef56  PUSH EAX
0066ef57  MOV EAX,dword ptr [EBP + -0x4]
0066ef5a  MOV ECX,dword ptr [EBP + 0xfffffe88]
0066ef60  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x1c8]
0066ef67  MOV EAX,dword ptr [EBP + -0x4]
0066ef6a  MOV ECX,dword ptr [EBP + 0xfffffe88]
0066ef70  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x1c8]
0066ef77  MOV EDX,dword ptr [EDX]
0066ef79  MOV EAX,dword ptr [EDX + 0x44]
0066ef7c  CALL EAX
0066ef7e  MOV ECX,dword ptr [EBP + -0x4]
0066ef81  MOV EDX,dword ptr [EBP + 0xfffffe88]
0066ef87  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x1c8]
0066ef8e  MOV ECX,dword ptr [EBP + -0x4]
0066ef91  MOV EDX,dword ptr [EBP + 0xfffffe88]
0066ef97  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x1c8]
0066ef9e  MOV EAX,dword ptr [EAX]
0066efa0  MOV EDX,dword ptr [EAX + 0x74]
0066efa3  CALL EDX
0066efa5  CMP dword ptr [EBP + 0x8],0x0
0066efa9  JNZ 0x0066efad
0066efab  JMP 0x0066efb2
0066efad  JMP 0x0066ebfd
0066efb2  CMP dword ptr [EBP + 0x8],0x0
0066efb6  JNZ 0x0066f04e
0066efbc  MOV EAX,dword ptr [EBP + 0xfffffe88]
0066efc2  MOV ECX,dword ptr [EAX + 0x20c]
0066efc8  MOV EDX,dword ptr [ECX + 0x20]
0066efcb  MOV dword ptr [EBP + 0xfffffe8c],EDX
0066efd1  PUSH 0x0
0066efd3  PUSH 0x1
0066efd5  MOV ECX,dword ptr [EBP + 0xfffffe8c]
0066efdb  CALL 0x006464d0
0066efe0  MOV EAX,dword ptr [EBP + 0xfffffe8c]
0066efe6  MOV byte ptr [EAX + 0x28],0x0
0066efea  MOV ECX,dword ptr [EBP + 0xfffffe8c]
0066eff0  MOV byte ptr [ECX + 0x29],0x0
0066eff4  MOV EDX,dword ptr [EBP + 0xfffffe88]
0066effa  MOV EAX,dword ptr [EDX]
0066effc  MOV ECX,dword ptr [EBP + 0xfffffe88]
0066f002  MOV EDX,dword ptr [EAX + 0x54]
0066f005  CALL EDX
0066f007  ADD EAX,0x4a
0066f00a  PUSH EAX
0066f00b  MOV EAX,dword ptr [EBP + 0xfffffe88]
0066f011  MOV EDX,dword ptr [EAX]
0066f013  MOV ECX,dword ptr [EBP + 0xfffffe88]
0066f019  MOV EAX,dword ptr [EDX + 0x4c]
0066f01c  CALL EAX
0066f01e  ADD EAX,0x77
0066f021  PUSH EAX
0066f022  MOV ECX,dword ptr [EBP + 0xfffffe88]
0066f028  MOV EDX,dword ptr [ECX + 0x20c]
0066f02e  MOV ECX,dword ptr [EDX + 0x20]
0066f031  CALL 0x00646150
0066f036  PUSH 0x0
0066f038  PUSH 0x0
0066f03a  MOV EAX,dword ptr [EBP + 0xfffffe88]
0066f040  MOV ECX,dword ptr [EAX + 0x20c]
0066f046  MOV ECX,dword ptr [ECX + 0x20]
0066f049  CALL 0x006464d0
0066f04e  POP ESI
0066f04f  MOV ECX,dword ptr [EBP + -0x8]
0066f052  XOR ECX,EBP
0066f054  CALL 0x00686d72
0066f059  MOV ESP,EBP
0066f05b  POP EBP
0066f05c  RET 0x4
