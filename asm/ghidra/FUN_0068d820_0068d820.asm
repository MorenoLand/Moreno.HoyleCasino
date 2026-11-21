; FUN_0068d820  0068d820
0068d820  PUSH EBP
0068d821  MOV EBP,ESP
0068d823  PUSH -0x1
0068d825  PUSH 0x6ae149
0068d82a  MOV EAX,FS:[0x0]
0068d830  PUSH EAX
0068d831  SUB ESP,0xb8
0068d837  MOV EAX,[0x00781870]
0068d83c  XOR EAX,EBP
0068d83e  PUSH EAX
0068d83f  LEA EAX,[EBP + -0xc]
0068d842  MOV FS:[0x0],EAX
0068d848  MOV dword ptr [EBP + 0xffffff40],ECX
0068d84e  MOV dword ptr [EBP + -0x5c],0x4924924
0068d855  CMP dword ptr [EBP + -0x5c],0x0
0068d859  JBE 0x0068d866
0068d85b  MOV EAX,dword ptr [EBP + -0x5c]
0068d85e  MOV dword ptr [EBP + 0xffffff3c],EAX
0068d864  JMP 0x0068d870
0068d866  MOV dword ptr [EBP + 0xffffff3c],0x1
0068d870  MOV ECX,dword ptr [EBP + 0xffffff3c]
0068d876  SUB ECX,0x1
0068d879  MOV EDX,dword ptr [EBP + 0xffffff40]
0068d87f  CMP ECX,dword ptr [EDX + 0x8]
0068d882  JA 0x0068d8ca
0068d884  PUSH 0x6e5660
0068d889  LEA ECX,[EBP + -0x58]
0068d88c  CALL dword ptr [0x006b20fc]
0068d892  MOV dword ptr [EBP + -0x4],0x0
0068d899  LEA EAX,[EBP + -0x58]
0068d89c  PUSH EAX
0068d89d  LEA ECX,[EBP + -0x3c]
0068d8a0  CALL 0x0068d440
0068d8a5  MOV dword ptr [EBP + -0x3c],0x6d1be0
0068d8ac  PUSH 0x6fc53c
0068d8b1  LEA ECX,[EBP + -0x3c]
0068d8b4  PUSH ECX
0068d8b5  CALL 0x00686fc0
0068d8ca  PUSH 0x0
0068d8cc  MOV EDX,dword ptr [EBP + 0x14]
0068d8cf  PUSH EDX
0068d8d0  MOV EAX,dword ptr [EBP + 0xffffff40]
0068d8d6  MOV ECX,dword ptr [EAX + 0x4]
0068d8d9  PUSH ECX
0068d8da  MOV EDX,dword ptr [EBP + 0x10]
0068d8dd  PUSH EDX
0068d8de  MOV EAX,dword ptr [EBP + 0xffffff40]
0068d8e4  MOV ECX,dword ptr [EAX + 0x4]
0068d8e7  PUSH ECX
0068d8e8  MOV ECX,dword ptr [EBP + 0xffffff40]
0068d8ee  CALL 0x0068ecb0
0068d8f3  MOV dword ptr [EBP + -0x10],EAX
0068d8f6  MOV EDX,dword ptr [EBP + 0xffffff40]
0068d8fc  MOV EAX,dword ptr [EDX + 0x8]
0068d8ff  ADD EAX,0x1
0068d902  MOV ECX,dword ptr [EBP + 0xffffff40]
0068d908  MOV dword ptr [ECX + 0x8],EAX
0068d90b  MOV EDX,dword ptr [EBP + 0xffffff40]
0068d911  MOV EAX,dword ptr [EBP + 0x10]
0068d914  CMP EAX,dword ptr [EDX + 0x4]
0068d917  JNZ 0x0068d94d
0068d919  MOV ECX,dword ptr [EBP + 0xffffff40]
0068d91f  MOV EDX,dword ptr [ECX + 0x4]
0068d922  MOV EAX,dword ptr [EBP + -0x10]
0068d925  MOV dword ptr [EDX + 0x4],EAX
0068d928  MOV ECX,dword ptr [EBP + 0xffffff40]
0068d92e  MOV EDX,dword ptr [ECX + 0x4]
0068d931  MOV dword ptr [EBP + -0x60],EDX
0068d934  MOV EAX,dword ptr [EBP + -0x60]
0068d937  MOV ECX,dword ptr [EBP + -0x10]
0068d93a  MOV dword ptr [EAX],ECX
0068d93c  MOV EDX,dword ptr [EBP + 0xffffff40]
0068d942  MOV EAX,dword ptr [EDX + 0x4]
0068d945  MOV ECX,dword ptr [EBP + -0x10]
0068d948  MOV dword ptr [EAX + 0x8],ECX
0068d94b  JMP 0x0068d9b2
0068d94d  MOVZX EDX,byte ptr [EBP + 0xc]
0068d951  TEST EDX,EDX
0068d953  JZ 0x0068d989
0068d955  MOV EAX,dword ptr [EBP + 0x10]
0068d958  MOV ECX,dword ptr [EBP + -0x10]
0068d95b  MOV dword ptr [EAX],ECX
0068d95d  MOV EDX,dword ptr [EBP + 0xffffff40]
0068d963  MOV EAX,dword ptr [EDX + 0x4]
0068d966  MOV dword ptr [EBP + -0x64],EAX
0068d969  MOV ECX,dword ptr [EBP + -0x64]
0068d96c  MOV EDX,dword ptr [EBP + 0x10]
0068d96f  CMP EDX,dword ptr [ECX]
0068d971  JNZ 0x0068d987
0068d973  MOV EAX,dword ptr [EBP + 0xffffff40]
0068d979  MOV ECX,dword ptr [EAX + 0x4]
0068d97c  MOV dword ptr [EBP + -0x68],ECX
0068d97f  MOV EDX,dword ptr [EBP + -0x68]
0068d982  MOV EAX,dword ptr [EBP + -0x10]
0068d985  MOV dword ptr [EDX],EAX
0068d987  JMP 0x0068d9b2
0068d989  MOV ECX,dword ptr [EBP + 0x10]
0068d98c  MOV EDX,dword ptr [EBP + -0x10]
0068d98f  MOV dword ptr [ECX + 0x8],EDX
0068d992  MOV EAX,dword ptr [EBP + 0xffffff40]
0068d998  MOV ECX,dword ptr [EAX + 0x4]
0068d99b  MOV EDX,dword ptr [EBP + 0x10]
0068d99e  CMP EDX,dword ptr [ECX + 0x8]
0068d9a1  JNZ 0x0068d9b2
0068d9a3  MOV EAX,dword ptr [EBP + 0xffffff40]
0068d9a9  MOV ECX,dword ptr [EAX + 0x4]
0068d9ac  MOV EDX,dword ptr [EBP + -0x10]
0068d9af  MOV dword ptr [ECX + 0x8],EDX
0068d9b2  MOV EAX,dword ptr [EBP + -0x10]
0068d9b5  MOV dword ptr [EBP + -0x14],EAX
0068d9b8  MOV ECX,dword ptr [EBP + -0x14]
0068d9bb  MOV EDX,dword ptr [ECX + 0x4]
0068d9be  MOVSX EAX,byte ptr [EDX + 0x44]
0068d9c2  TEST EAX,EAX
0068d9c4  JNZ 0x0068db87
0068d9ca  MOV ECX,dword ptr [EBP + -0x14]
0068d9cd  MOV EDX,dword ptr [ECX + 0x4]
0068d9d0  ADD EDX,0x4
0068d9d3  MOV dword ptr [EBP + -0x6c],EDX
0068d9d6  MOV EAX,dword ptr [EBP + -0x6c]
0068d9d9  MOV ECX,dword ptr [EAX]
0068d9db  MOV dword ptr [EBP + -0x70],ECX
0068d9de  MOV EDX,dword ptr [EBP + -0x14]
0068d9e1  MOV EAX,dword ptr [EBP + -0x70]
0068d9e4  MOV ECX,dword ptr [EDX + 0x4]
0068d9e7  CMP ECX,dword ptr [EAX]
0068d9e9  JNZ 0x0068daaa
0068d9ef  MOV EDX,dword ptr [EBP + -0x14]
0068d9f2  MOV EAX,dword ptr [EDX + 0x4]
0068d9f5  ADD EAX,0x4
0068d9f8  MOV dword ptr [EBP + -0x74],EAX
0068d9fb  MOV ECX,dword ptr [EBP + -0x74]
0068d9fe  MOV EDX,dword ptr [ECX]
0068da00  MOV EAX,dword ptr [EDX + 0x8]
0068da03  MOV dword ptr [EBP + 0x10],EAX
0068da06  MOV ECX,dword ptr [EBP + 0x10]
0068da09  MOVSX EDX,byte ptr [ECX + 0x44]
0068da0d  TEST EDX,EDX
0068da0f  JNZ 0x0068da45
0068da11  MOV EAX,dword ptr [EBP + -0x14]
0068da14  MOV ECX,dword ptr [EAX + 0x4]
0068da17  MOV byte ptr [ECX + 0x44],0x1
0068da1b  MOV EDX,dword ptr [EBP + 0x10]
0068da1e  MOV byte ptr [EDX + 0x44],0x1
0068da22  MOV EAX,dword ptr [EBP + -0x14]
0068da25  MOV ECX,dword ptr [EAX + 0x4]
0068da28  ADD ECX,0x4
0068da2b  MOV dword ptr [EBP + -0x78],ECX
0068da2e  MOV EDX,dword ptr [EBP + -0x78]
0068da31  MOV EAX,dword ptr [EDX]
0068da33  MOV byte ptr [EAX + 0x44],0x0
0068da37  MOV ECX,dword ptr [EBP + -0x14]
0068da3a  MOV EDX,dword ptr [ECX + 0x4]
0068da3d  MOV EAX,dword ptr [EDX + 0x4]
0068da40  MOV dword ptr [EBP + -0x14],EAX
0068da43  JMP 0x0068daa5
0068da45  MOV ECX,dword ptr [EBP + -0x14]
0068da48  MOV EDX,dword ptr [ECX + 0x4]
0068da4b  MOV EAX,dword ptr [EBP + -0x14]
0068da4e  CMP EAX,dword ptr [EDX + 0x8]
0068da51  JNZ 0x0068da6b
0068da53  MOV ECX,dword ptr [EBP + -0x14]
0068da56  MOV EDX,dword ptr [ECX + 0x4]
0068da59  MOV dword ptr [EBP + -0x14],EDX
0068da5c  MOV EAX,dword ptr [EBP + -0x14]
0068da5f  PUSH EAX
0068da60  MOV ECX,dword ptr [EBP + 0xffffff40]
0068da66  CALL 0x0068eb50
0068da6b  MOV ECX,dword ptr [EBP + -0x14]
0068da6e  MOV EDX,dword ptr [ECX + 0x4]
0068da71  MOV byte ptr [EDX + 0x44],0x1
0068da75  MOV EAX,dword ptr [EBP + -0x14]
0068da78  MOV ECX,dword ptr [EAX + 0x4]
0068da7b  ADD ECX,0x4
0068da7e  MOV dword ptr [EBP + 0xffffff78],ECX
0068da84  MOV EDX,dword ptr [EBP + 0xffffff78]
0068da8a  MOV EAX,dword ptr [EDX]
0068da8c  MOV byte ptr [EAX + 0x44],0x0
0068da90  MOV ECX,dword ptr [EBP + -0x14]
0068da93  MOV EDX,dword ptr [ECX + 0x4]
0068da96  MOV EAX,dword ptr [EDX + 0x4]
0068da99  PUSH EAX
0068da9a  MOV ECX,dword ptr [EBP + 0xffffff40]
0068daa0  CALL 0x0068ec00
0068daa5  JMP 0x0068db82
0068daaa  MOV ECX,dword ptr [EBP + -0x14]
0068daad  MOV EDX,dword ptr [ECX + 0x4]
0068dab0  ADD EDX,0x4
0068dab3  MOV dword ptr [EBP + 0xffffff6c],EDX
0068dab9  MOV EAX,dword ptr [EBP + 0xffffff6c]
0068dabf  MOV ECX,dword ptr [EAX]
0068dac1  MOV dword ptr [EBP + 0xffffff68],ECX
0068dac7  MOV EDX,dword ptr [EBP + 0xffffff68]
0068dacd  MOV EAX,dword ptr [EDX]
0068dacf  MOV dword ptr [EBP + 0x10],EAX
0068dad2  MOV ECX,dword ptr [EBP + 0x10]
0068dad5  MOVSX EDX,byte ptr [ECX + 0x44]
0068dad9  TEST EDX,EDX
0068dadb  JNZ 0x0068db17
0068dadd  MOV EAX,dword ptr [EBP + -0x14]
0068dae0  MOV ECX,dword ptr [EAX + 0x4]
0068dae3  MOV byte ptr [ECX + 0x44],0x1
0068dae7  MOV EDX,dword ptr [EBP + 0x10]
0068daea  MOV byte ptr [EDX + 0x44],0x1
0068daee  MOV EAX,dword ptr [EBP + -0x14]
0068daf1  MOV ECX,dword ptr [EAX + 0x4]
0068daf4  ADD ECX,0x4
0068daf7  MOV dword ptr [EBP + 0xffffff64],ECX
0068dafd  MOV EDX,dword ptr [EBP + 0xffffff64]
0068db03  MOV EAX,dword ptr [EDX]
0068db05  MOV byte ptr [EAX + 0x44],0x0
0068db09  MOV ECX,dword ptr [EBP + -0x14]
0068db0c  MOV EDX,dword ptr [ECX + 0x4]
0068db0f  MOV EAX,dword ptr [EDX + 0x4]
0068db12  MOV dword ptr [EBP + -0x14],EAX
0068db15  JMP 0x0068db82
0068db17  MOV ECX,dword ptr [EBP + -0x14]
0068db1a  MOV EDX,dword ptr [ECX + 0x4]
0068db1d  MOV dword ptr [EBP + 0xffffff60],EDX
0068db23  MOV EAX,dword ptr [EBP + 0xffffff60]
0068db29  MOV ECX,dword ptr [EBP + -0x14]
0068db2c  CMP ECX,dword ptr [EAX]
0068db2e  JNZ 0x0068db48
0068db30  MOV EDX,dword ptr [EBP + -0x14]
0068db33  MOV EAX,dword ptr [EDX + 0x4]
0068db36  MOV dword ptr [EBP + -0x14],EAX
0068db39  MOV ECX,dword ptr [EBP + -0x14]
0068db3c  PUSH ECX
0068db3d  MOV ECX,dword ptr [EBP + 0xffffff40]
0068db43  CALL 0x0068ec00
0068db48  MOV EDX,dword ptr [EBP + -0x14]
0068db4b  MOV EAX,dword ptr [EDX + 0x4]
0068db4e  MOV byte ptr [EAX + 0x44],0x1
0068db52  MOV ECX,dword ptr [EBP + -0x14]
0068db55  MOV EDX,dword ptr [ECX + 0x4]
0068db58  ADD EDX,0x4
0068db5b  MOV dword ptr [EBP + 0xffffff54],EDX
0068db61  MOV EAX,dword ptr [EBP + 0xffffff54]
0068db67  MOV ECX,dword ptr [EAX]
0068db69  MOV byte ptr [ECX + 0x44],0x0
0068db6d  MOV EDX,dword ptr [EBP + -0x14]
0068db70  MOV EAX,dword ptr [EDX + 0x4]
0068db73  MOV ECX,dword ptr [EAX + 0x4]
0068db76  PUSH ECX
0068db77  MOV ECX,dword ptr [EBP + 0xffffff40]
0068db7d  CALL 0x0068eb50
0068db82  JMP 0x0068d9b8
0068db87  MOV EDX,dword ptr [EBP + 0xffffff40]
0068db8d  MOV EAX,dword ptr [EDX + 0x4]
0068db90  ADD EAX,0x4
0068db93  MOV dword ptr [EBP + 0xffffff44],EAX
0068db99  MOV ECX,dword ptr [EBP + 0xffffff44]
0068db9f  MOV EDX,dword ptr [ECX]
0068dba1  MOV byte ptr [EDX + 0x44],0x1
0068dba5  MOV EAX,dword ptr [EBP + 0x8]
0068dba8  MOV dword ptr [EAX],0x0
0068dbae  MOV ECX,dword ptr [EBP + 0x8]
0068dbb1  MOV EDX,dword ptr [EBP + -0x10]
0068dbb4  MOV dword ptr [ECX + 0x4],EDX
0068dbb7  CMP dword ptr [EBP + 0xffffff40],0x0
0068dbbe  JNZ 0x0068dbc6
0068dbc0  CALL dword ptr [0x006b2274]
0068dbc6  MOV EAX,dword ptr [EBP + 0x8]
0068dbc9  MOV ECX,dword ptr [EBP + 0xffffff40]
0068dbcf  MOV dword ptr [EAX],ECX
0068dbd1  MOV EAX,dword ptr [EBP + 0x8]
0068dbd4  MOV ECX,dword ptr [EBP + -0xc]
0068dbd7  MOV dword ptr FS:[0x0],ECX
0068dbde  POP ECX
0068dbdf  MOV ESP,EBP
0068dbe1  POP EBP
0068dbe2  RET 0x10
