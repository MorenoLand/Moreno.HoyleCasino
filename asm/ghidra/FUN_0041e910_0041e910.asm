; FUN_0041e910  0041e910
0041e910  PUSH EBP
0041e911  MOV EBP,ESP
0041e913  PUSH -0x1
0041e915  PUSH 0x69df94
0041e91a  MOV EAX,FS:[0x0]
0041e920  PUSH EAX
0041e921  SUB ESP,0xe8
0041e927  MOV EAX,[0x00781870]
0041e92c  XOR EAX,EBP
0041e92e  PUSH EAX
0041e92f  LEA EAX,[EBP + -0xc]
0041e932  MOV FS:[0x0],EAX
0041e938  MOV dword ptr [EBP + 0xffffff30],ECX
0041e93e  MOV dword ptr [EBP + -0x50],0x2
0041e945  MOV dword ptr [EBP + -0x4c],0x3
0041e94c  MOV dword ptr [EBP + -0x48],0x4
0041e953  MOV dword ptr [EBP + -0x44],0x5
0041e95a  MOV dword ptr [EBP + -0x40],0x0
0041e961  MOV dword ptr [EBP + -0x3c],0x1
0041e968  MOV dword ptr [EBP + -0x38],0x6
0041e96f  MOV dword ptr [EBP + -0x34],0x7
0041e976  MOV dword ptr [EBP + -0x60],0x3106d8
0041e97d  MOV dword ptr [EBP + -0x5c],0x3106d9
0041e984  MOV dword ptr [EBP + -0x58],0x3106d7
0041e98b  MOV dword ptr [EBP + -0x54],0x3106da
0041e992  MOV dword ptr [EBP + -0x30],0x168
0041e999  MOV dword ptr [EBP + -0x2c],0xf5
0041e9a0  MOV dword ptr [EBP + -0x28],0xef
0041e9a7  MOV dword ptr [EBP + -0x24],0xf4
0041e9ae  MOV dword ptr [EBP + -0x20],0x1da
0041e9b5  MOV dword ptr [EBP + -0x1c],0xc1
0041e9bc  MOV dword ptr [EBP + -0x18],0x75
0041e9c3  MOV dword ptr [EBP + -0x14],0xc2
0041e9ca  MOV dword ptr [EBP + -0x80],0x151
0041e9d1  MOV dword ptr [EBP + -0x7c],0x10b
0041e9d8  MOV dword ptr [EBP + -0x78],0xf0
0041e9df  MOV dword ptr [EBP + -0x74],0x10b
0041e9e6  MOV dword ptr [EBP + -0x70],0x1c1
0041e9ed  MOV dword ptr [EBP + -0x6c],0xd8
0041e9f4  MOV dword ptr [EBP + -0x68],0x76
0041e9fb  MOV dword ptr [EBP + -0x64],0xd9
0041ea02  PUSH 0x6b5d64
0041ea07  CALL 0x00630f40
0041ea0c  ADD ESP,0x4
0041ea0f  PUSH EAX
0041ea10  MOV ECX,dword ptr [0x0162ee84]
0041ea16  CALL 0x005f38b0
0041ea1b  PUSH 0x3106c8
0041ea20  MOV ECX,dword ptr [0x0162ee80]
0041ea26  CALL 0x005f1ad0
0041ea2b  PUSH 0x3106cb
0041ea30  MOV ECX,dword ptr [0x0162ee80]
0041ea36  CALL 0x005f2ba0
0041ea3b  PUSH 0x3106cc
0041ea40  MOV ECX,dword ptr [0x0162ee80]
0041ea46  CALL 0x005f2ba0
0041ea4b  MOV dword ptr [EBP + -0x10],0x0
0041ea52  JMP 0x0041ea5d
0041ea54  MOV EAX,dword ptr [EBP + -0x10]
0041ea57  ADD EAX,0x1
0041ea5a  MOV dword ptr [EBP + -0x10],EAX
0041ea5d  CMP dword ptr [EBP + -0x10],0x5
0041ea61  JGE 0x0041eb75
0041ea67  PUSH 0x24
0041ea69  CALL 0x00686d82
0041ea6e  ADD ESP,0x4
0041ea71  MOV dword ptr [EBP + 0xffffff78],EAX
0041ea77  MOV dword ptr [EBP + -0x4],0x0
0041ea7e  CMP dword ptr [EBP + 0xffffff78],0x0
0041ea85  JZ 0x0041ea9a
0041ea87  MOV ECX,dword ptr [EBP + 0xffffff78]
0041ea8d  CALL 0x0041fd80
0041ea92  MOV dword ptr [EBP + 0xffffff2c],EAX
0041ea98  JMP 0x0041eaa4
0041ea9a  MOV dword ptr [EBP + 0xffffff2c],0x0
0041eaa4  MOV ECX,dword ptr [EBP + 0xffffff2c]
0041eaaa  MOV dword ptr [EBP + 0xffffff7c],ECX
0041eab0  MOV dword ptr [EBP + -0x4],0xffffffff
0041eab7  MOV EDX,dword ptr [EBP + -0x10]
0041eaba  MOV EAX,dword ptr [EBP + 0xffffff30]
0041eac0  MOV ECX,dword ptr [EBP + 0xffffff7c]
0041eac6  MOV dword ptr [EAX + EDX*0x4 + 0x4],ECX
0041eaca  MOV EDX,dword ptr [EBP + -0x10]
0041eacd  PUSH EDX
0041eace  MOV EAX,dword ptr [EBP + -0x10]
0041ead1  MOV ECX,dword ptr [EBP + 0xffffff30]
0041ead7  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x4]
0041eadb  CALL 0x0041fef0
0041eae0  PUSH 0x1d0
0041eae5  CALL 0x00686d82
0041eaea  ADD ESP,0x4
0041eaed  MOV dword ptr [EBP + 0xffffff70],EAX
0041eaf3  MOV dword ptr [EBP + -0x4],0x1
0041eafa  CMP dword ptr [EBP + 0xffffff70],0x0
0041eb01  JZ 0x0041eb16
0041eb03  MOV ECX,dword ptr [EBP + 0xffffff70]
0041eb09  CALL 0x005ec5a0
0041eb0e  MOV dword ptr [EBP + 0xffffff28],EAX
0041eb14  JMP 0x0041eb20
0041eb16  MOV dword ptr [EBP + 0xffffff28],0x0
0041eb20  MOV EDX,dword ptr [EBP + 0xffffff28]
0041eb26  MOV dword ptr [EBP + 0xffffff74],EDX
0041eb2c  MOV dword ptr [EBP + -0x4],0xffffffff
0041eb33  MOV EAX,dword ptr [EBP + -0x10]
0041eb36  MOV ECX,dword ptr [EBP + 0xffffff30]
0041eb3c  MOV EDX,dword ptr [EBP + 0xffffff74]
0041eb42  MOV dword ptr [ECX + EAX*0x4 + 0x64],EDX
0041eb46  PUSH -0x1
0041eb48  PUSH 0x30
0041eb4a  PUSH 0x51
0041eb4c  PUSH 0x0
0041eb4e  PUSH 0x0
0041eb50  PUSH 0x14
0041eb52  PUSH 0xc8
0041eb57  PUSH 0x38
0041eb59  PUSH 0x6b27f8
0041eb5e  MOV EAX,dword ptr [EBP + -0x10]
0041eb61  MOV ECX,dword ptr [EBP + 0xffffff30]
0041eb67  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x64]
0041eb6b  CALL 0x005ec8f0
0041eb70  JMP 0x0041ea54
0041eb75  MOV dword ptr [EBP + -0x10],0x0
0041eb7c  JMP 0x0041eb87
0041eb7e  MOV EDX,dword ptr [EBP + -0x10]
0041eb81  ADD EDX,0x1
0041eb84  MOV dword ptr [EBP + -0x10],EDX
0041eb87  CMP dword ptr [EBP + -0x10],0x8
0041eb8b  JGE 0x0041ecb4
0041eb91  PUSH 0xae4
0041eb96  CALL 0x00686d82
0041eb9b  ADD ESP,0x4
0041eb9e  MOV dword ptr [EBP + 0xffffff68],EAX
0041eba4  MOV dword ptr [EBP + -0x4],0x2
0041ebab  CMP dword ptr [EBP + 0xffffff68],0x0
0041ebb2  JZ 0x0041ebc7
0041ebb4  MOV ECX,dword ptr [EBP + 0xffffff68]
0041ebba  CALL 0x00420950
0041ebbf  MOV dword ptr [EBP + 0xffffff24],EAX
0041ebc5  JMP 0x0041ebd1
0041ebc7  MOV dword ptr [EBP + 0xffffff24],0x0
0041ebd1  MOV EAX,dword ptr [EBP + 0xffffff24]
0041ebd7  MOV dword ptr [EBP + 0xffffff6c],EAX
0041ebdd  MOV dword ptr [EBP + -0x4],0xffffffff
0041ebe4  MOV ECX,dword ptr [EBP + -0x10]
0041ebe7  MOV EDX,dword ptr [EBP + 0xffffff30]
0041ebed  MOV EAX,dword ptr [EBP + 0xffffff6c]
0041ebf3  MOV dword ptr [EDX + ECX*0x4 + 0x18],EAX
0041ebf7  MOV ECX,dword ptr [EBP + -0x10]
0041ebfa  MOV EDX,dword ptr [EBP + 0xffffff30]
0041ec00  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x18]
0041ec04  MOV ECX,dword ptr [EBP + -0x10]
0041ec07  MOV dword ptr [EAX + 0xae0],ECX
0041ec0d  PUSH -0x1
0041ec0f  PUSH 0x2
0041ec11  PUSH 0x0
0041ec13  PUSH 0x0
0041ec15  PUSH 0x3106ce
0041ec1a  MOV EDX,dword ptr [EBP + -0x10]
0041ec1d  MOV EAX,dword ptr [EBP + 0xffffff30]
0041ec23  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x18]
0041ec27  CALL 0x005eae80
0041ec2c  MOV ECX,dword ptr [EBP + -0x10]
0041ec2f  MOV EDX,dword ptr [EBP + ECX*0x4 + -0x50]
0041ec33  PUSH EDX
0041ec34  MOV EAX,dword ptr [EBP + -0x10]
0041ec37  MOV ECX,dword ptr [EBP + 0xffffff30]
0041ec3d  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x18]
0041ec41  MOV EAX,dword ptr [EBP + -0x10]
0041ec44  MOV ECX,dword ptr [EBP + 0xffffff30]
0041ec4a  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x18]
0041ec4e  MOV EDX,dword ptr [EDX]
0041ec50  MOV EAX,dword ptr [EDX + 0xb0]
0041ec56  CALL EAX
0041ec58  PUSH 0x0
0041ec5a  MOV ECX,dword ptr [EBP + -0x10]
0041ec5d  MOV EDX,dword ptr [EBP + 0xffffff30]
0041ec63  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x18]
0041ec67  CALL 0x005eb5d0
0041ec6c  MOV EAX,dword ptr [EBP + -0x10]
0041ec6f  MOV ECX,dword ptr [0x00790358]
0041ec75  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x8]
0041ec79  PUSH EDX
0041ec7a  MOV EAX,dword ptr [EBP + -0x10]
0041ec7d  MOV ECX,dword ptr [EBP + 0xffffff30]
0041ec83  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x18]
0041ec87  CALL 0x005cc2c0
0041ec8c  MOV EDX,dword ptr [EBP + -0x10]
0041ec8f  MOV EAX,dword ptr [EBP + 0xffffff30]
0041ec95  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x18]
0041ec99  MOV EDX,dword ptr [EBP + -0x10]
0041ec9c  MOV EAX,dword ptr [EBP + 0xffffff30]
0041eca2  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x18]
0041eca6  MOV EAX,dword ptr [ECX]
0041eca8  MOV ECX,EDX
0041ecaa  MOV EDX,dword ptr [EAX + 0x74]
0041ecad  CALL EDX
0041ecaf  JMP 0x0041eb7e
0041ecb4  MOV dword ptr [EBP + -0x10],0x0
0041ecbb  JMP 0x0041ecc6
0041ecbd  MOV EAX,dword ptr [EBP + -0x10]
0041ecc0  ADD EAX,0x1
0041ecc3  MOV dword ptr [EBP + -0x10],EAX
0041ecc6  CMP dword ptr [EBP + -0x10],0x4
0041ecca  JGE 0x0041ee8e
0041ecd0  PUSH 0x1dc
0041ecd5  CALL 0x00686d82
0041ecda  ADD ESP,0x4
0041ecdd  MOV dword ptr [EBP + 0xffffff60],EAX
0041ece3  MOV dword ptr [EBP + -0x4],0x3
0041ecea  CMP dword ptr [EBP + 0xffffff60],0x0
0041ecf1  JZ 0x0041ed06
0041ecf3  MOV ECX,dword ptr [EBP + 0xffffff60]
0041ecf9  CALL 0x00601a80
0041ecfe  MOV dword ptr [EBP + 0xffffff20],EAX
0041ed04  JMP 0x0041ed10
0041ed06  MOV dword ptr [EBP + 0xffffff20],0x0
0041ed10  MOV ECX,dword ptr [EBP + 0xffffff20]
0041ed16  MOV dword ptr [EBP + 0xffffff64],ECX
0041ed1c  MOV dword ptr [EBP + -0x4],0xffffffff
0041ed23  MOV EDX,dword ptr [EBP + -0x10]
0041ed26  MOV EAX,dword ptr [EBP + 0xffffff30]
0041ed2c  MOV ECX,dword ptr [EBP + 0xffffff64]
0041ed32  MOV dword ptr [EAX + EDX*0x4 + 0x44],ECX
0041ed36  PUSH -0x1
0041ed38  PUSH 0x1
0041ed3a  MOV EDX,dword ptr [EBP + -0x10]
0041ed3d  MOV EAX,dword ptr [EBP + EDX*0x8 + -0x7c]
0041ed41  PUSH EAX
0041ed42  MOV ECX,dword ptr [EBP + -0x10]
0041ed45  MOV EDX,dword ptr [EBP + ECX*0x8 + -0x80]
0041ed49  PUSH EDX
0041ed4a  MOV EAX,dword ptr [EBP + -0x10]
0041ed4d  MOV ECX,dword ptr [EBP + EAX*0x4 + -0x60]
0041ed51  PUSH ECX
0041ed52  MOV EDX,dword ptr [EBP + -0x10]
0041ed55  MOV EAX,dword ptr [EBP + 0xffffff30]
0041ed5b  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x44]
0041ed5f  CALL 0x005eae80
0041ed64  MOV ECX,dword ptr [EBP + -0x10]
0041ed67  PUSH ECX
0041ed68  MOV EDX,dword ptr [EBP + -0x10]
0041ed6b  MOV EAX,dword ptr [EBP + 0xffffff30]
0041ed71  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x44]
0041ed75  CALL 0x005f53e0
0041ed7a  MOV ECX,dword ptr [EBP + -0x10]
0041ed7d  MOV EDX,dword ptr [EBP + 0xffffff30]
0041ed83  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x44]
0041ed87  CALL 0x00602eb0
0041ed8c  MOV EAX,dword ptr [EBP + -0x10]
0041ed8f  MOV ECX,dword ptr [EBP + 0xffffff30]
0041ed95  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x44]
0041ed99  MOV dword ptr [EDX + 0x178],0x3
0041eda3  MOV EAX,dword ptr [EBP + -0x10]
0041eda6  MOV ECX,dword ptr [EBP + 0xffffff30]
0041edac  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x44]
0041edb0  MOV dword ptr [EBP + 0xffffff34],EDX
0041edb6  MOV EAX,dword ptr [EBP + 0xffffff34]
0041edbc  MOV byte ptr [EAX + 0x1b5],0x1
0041edc3  MOV ECX,dword ptr [EBP + -0x10]
0041edc6  MOV EDX,dword ptr [EBP + 0xffffff30]
0041edcc  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x44]
0041edd0  MOV ECX,dword ptr [EBP + -0x10]
0041edd3  MOV EDX,dword ptr [EBP + 0xffffff30]
0041edd9  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x44]
0041eddd  MOV EAX,dword ptr [EAX]
0041eddf  MOV EDX,dword ptr [EAX + 0x74]
0041ede2  CALL EDX
0041ede4  PUSH 0x184
0041ede9  CALL 0x00686d82
0041edee  ADD ESP,0x4
0041edf1  MOV dword ptr [EBP + 0xffffff58],EAX
0041edf7  MOV dword ptr [EBP + -0x4],0x4
0041edfe  CMP dword ptr [EBP + 0xffffff58],0x0
0041ee05  JZ 0x0041ee2c
0041ee07  MOV ECX,dword ptr [EBP + 0xffffff58]
0041ee0d  CALL 0x005f5bf0
0041ee12  MOV EAX,dword ptr [EBP + 0xffffff58]
0041ee18  MOV dword ptr [EAX],0x6b5ca4
0041ee1e  MOV ECX,dword ptr [EBP + 0xffffff58]
0041ee24  MOV dword ptr [EBP + 0xffffff1c],ECX
0041ee2a  JMP 0x0041ee36
0041ee2c  MOV dword ptr [EBP + 0xffffff1c],0x0
0041ee36  MOV EDX,dword ptr [EBP + 0xffffff1c]
0041ee3c  MOV dword ptr [EBP + 0xffffff5c],EDX
0041ee42  MOV dword ptr [EBP + -0x4],0xffffffff
0041ee49  MOV EAX,dword ptr [EBP + -0x10]
0041ee4c  MOV ECX,dword ptr [EBP + 0xffffff30]
0041ee52  MOV EDX,dword ptr [EBP + 0xffffff5c]
0041ee58  MOV dword ptr [ECX + EAX*0x4 + 0x54],EDX
0041ee5c  MOV EAX,dword ptr [EBP + -0x10]
0041ee5f  PUSH EAX
0041ee60  PUSH 0x2
0041ee62  MOV ECX,dword ptr [EBP + -0x10]
0041ee65  MOV EDX,dword ptr [EBP + ECX*0x8 + -0x2c]
0041ee69  PUSH EDX
0041ee6a  MOV EAX,dword ptr [EBP + -0x10]
0041ee6d  MOV ECX,dword ptr [EBP + EAX*0x8 + -0x30]
0041ee71  PUSH ECX
0041ee72  PUSH 0x3106db
0041ee77  MOV EDX,dword ptr [EBP + -0x10]
0041ee7a  MOV EAX,dword ptr [EBP + 0xffffff30]
0041ee80  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x54]
0041ee84  CALL 0x005eae80
0041ee89  JMP 0x0041ecbd
0041ee8e  PUSH 0x48
0041ee90  CALL 0x00686d82
0041ee95  ADD ESP,0x4
0041ee98  MOV dword ptr [EBP + 0xffffff50],EAX
0041ee9e  MOV dword ptr [EBP + -0x4],0x5
0041eea5  CMP dword ptr [EBP + 0xffffff50],0x0
0041eeac  JZ 0x0041eec1
0041eeae  MOV ECX,dword ptr [EBP + 0xffffff50]
0041eeb4  CALL 0x00420bb0
0041eeb9  MOV dword ptr [EBP + 0xffffff18],EAX
0041eebf  JMP 0x0041eecb
0041eec1  MOV dword ptr [EBP + 0xffffff18],0x0
0041eecb  MOV ECX,dword ptr [EBP + 0xffffff18]
0041eed1  MOV dword ptr [EBP + 0xffffff54],ECX
0041eed7  MOV dword ptr [EBP + -0x4],0xffffffff
0041eede  MOV EDX,dword ptr [EBP + 0xffffff30]
0041eee4  MOV EAX,dword ptr [EBP + 0xffffff54]
0041eeea  MOV dword ptr [EDX + 0x3c],EAX
0041eeed  MOV ECX,dword ptr [EBP + 0xffffff30]
0041eef3  MOV ECX,dword ptr [ECX + 0x3c]
0041eef6  CALL 0x00420d90
0041eefb  MOV EDX,dword ptr [EBP + 0xffffff30]
0041ef01  MOV ECX,dword ptr [EDX + 0x3c]
0041ef04  CALL 0x00421070
0041ef09  PUSH 0x198
0041ef0e  CALL 0x00686d82
0041ef13  ADD ESP,0x4
0041ef16  MOV dword ptr [EBP + 0xffffff48],EAX
0041ef1c  MOV dword ptr [EBP + -0x4],0x6
0041ef23  CMP dword ptr [EBP + 0xffffff48],0x0
0041ef2a  JZ 0x0041ef51
0041ef2c  MOV ECX,dword ptr [EBP + 0xffffff48]
0041ef32  CALL 0x005cd6a0
0041ef37  MOV EAX,dword ptr [EBP + 0xffffff48]
0041ef3d  MOV dword ptr [EAX],0x6b5bdc
0041ef43  MOV ECX,dword ptr [EBP + 0xffffff48]
0041ef49  MOV dword ptr [EBP + 0xffffff14],ECX
0041ef4f  JMP 0x0041ef5b
0041ef51  MOV dword ptr [EBP + 0xffffff14],0x0
0041ef5b  MOV EDX,dword ptr [EBP + 0xffffff14]
0041ef61  MOV dword ptr [EBP + 0xffffff4c],EDX
0041ef67  MOV dword ptr [EBP + -0x4],0xffffffff
0041ef6e  MOV EAX,dword ptr [EBP + 0xffffff30]
0041ef74  MOV ECX,dword ptr [EBP + 0xffffff4c]
0041ef7a  MOV dword ptr [EAX + 0x38],ECX
0041ef7d  PUSH -0x1
0041ef7f  PUSH 0x0
0041ef81  PUSH 0x0
0041ef83  PUSH 0x0
0041ef85  PUSH 0x0
0041ef87  MOV EDX,dword ptr [EBP + 0xffffff30]
0041ef8d  MOV ECX,dword ptr [EDX + 0x38]
0041ef90  CALL 0x005eae80
0041ef95  PUSH 0x184
0041ef9a  CALL 0x00686d82
0041ef9f  ADD ESP,0x4
0041efa2  MOV dword ptr [EBP + 0xffffff40],EAX
0041efa8  MOV dword ptr [EBP + -0x4],0x7
0041efaf  CMP dword ptr [EBP + 0xffffff40],0x0
0041efb6  JZ 0x0041efcb
0041efb8  MOV ECX,dword ptr [EBP + 0xffffff40]
0041efbe  CALL 0x005f5bf0
0041efc3  MOV dword ptr [EBP + 0xffffff10],EAX
0041efc9  JMP 0x0041efd5
0041efcb  MOV dword ptr [EBP + 0xffffff10],0x0
0041efd5  MOV EAX,dword ptr [EBP + 0xffffff10]
0041efdb  MOV dword ptr [EBP + 0xffffff44],EAX
0041efe1  MOV dword ptr [EBP + -0x4],0xffffffff
0041efe8  MOV ECX,dword ptr [EBP + 0xffffff30]
0041efee  MOV EDX,dword ptr [EBP + 0xffffff44]
0041eff4  MOV dword ptr [ECX + 0x78],EDX
0041eff7  PUSH -0x1
0041eff9  PUSH 0x32
0041effb  PUSH 0x0
0041effd  PUSH 0x0
0041efff  PUSH 0x13a2
0041f004  MOV EAX,dword ptr [EBP + 0xffffff30]
0041f00a  MOV ECX,dword ptr [EAX + 0x78]
0041f00d  CALL 0x005eae80
0041f012  PUSH 0x184
0041f017  CALL 0x00686d82
0041f01c  ADD ESP,0x4
0041f01f  MOV dword ptr [EBP + 0xffffff38],EAX
0041f025  MOV dword ptr [EBP + -0x4],0x8
0041f02c  CMP dword ptr [EBP + 0xffffff38],0x0
0041f033  JZ 0x0041f048
0041f035  MOV ECX,dword ptr [EBP + 0xffffff38]
0041f03b  CALL 0x005f5bf0
0041f040  MOV dword ptr [EBP + 0xffffff0c],EAX
0041f046  JMP 0x0041f052
0041f048  MOV dword ptr [EBP + 0xffffff0c],0x0
0041f052  MOV ECX,dword ptr [EBP + 0xffffff0c]
0041f058  MOV dword ptr [EBP + 0xffffff3c],ECX
0041f05e  MOV dword ptr [EBP + -0x4],0xffffffff
0041f065  MOV EDX,dword ptr [EBP + 0xffffff30]
0041f06b  MOV EAX,dword ptr [EBP + 0xffffff3c]
0041f071  MOV dword ptr [EDX + 0x7c],EAX
0041f074  PUSH -0x1
0041f076  PUSH 0x33
0041f078  PUSH 0x0
0041f07a  PUSH 0x0
0041f07c  PUSH 0x13a3
0041f081  MOV ECX,dword ptr [EBP + 0xffffff30]
0041f087  MOV ECX,dword ptr [ECX + 0x7c]
0041f08a  CALL 0x005eae80
0041f08f  MOV ECX,dword ptr [EBP + -0xc]
0041f092  MOV dword ptr FS:[0x0],ECX
0041f099  POP ECX
0041f09a  MOV ESP,EBP
0041f09c  POP EBP
0041f09d  RET
