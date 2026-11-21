; FUN_0041d950  0041d950
0041d950  PUSH EBP
0041d951  MOV EBP,ESP
0041d953  SUB ESP,0x54
0041d956  MOV dword ptr [EBP + -0x4c],ECX
0041d959  MOV EAX,dword ptr [EBP + 0x8]
0041d95c  SHL EAX,0x5
0041d95f  MOV ECX,dword ptr [EBP + -0x4c]
0041d962  LEA EDX,[ECX + EAX*0x1 + 0x48]
0041d966  MOV EAX,dword ptr [EBP + 0xc]
0041d969  MOV ECX,dword ptr [EDX + EAX*0x8]
0041d96c  MOV EDX,dword ptr [EDX + EAX*0x8 + 0x4]
0041d970  MOV dword ptr [EBP + -0x8],ECX
0041d973  MOV dword ptr [EBP + -0x4],EDX
0041d976  PUSH 0x0
0041d978  PUSH 0x0
0041d97a  CALL 0x0064c8a0
0041d97f  ADD ESP,0x8
0041d982  MOV dword ptr [EBP + -0x28],EAX
0041d985  MOV dword ptr [EBP + -0x24],EDX
0041d988  MOV EAX,dword ptr [EBP + -0x28]
0041d98b  MOV dword ptr [EBP + -0x20],EAX
0041d98e  MOV ECX,dword ptr [EBP + -0x24]
0041d991  MOV dword ptr [EBP + -0x1c],ECX
0041d994  PUSH 0x0
0041d996  PUSH 0x0
0041d998  CALL 0x0064c8a0
0041d99d  ADD ESP,0x8
0041d9a0  MOV dword ptr [EBP + -0x30],EAX
0041d9a3  MOV dword ptr [EBP + -0x2c],EDX
0041d9a6  MOV EDX,dword ptr [EBP + -0x30]
0041d9a9  MOV dword ptr [EBP + -0x10],EDX
0041d9ac  MOV EAX,dword ptr [EBP + -0x2c]
0041d9af  MOV dword ptr [EBP + -0xc],EAX
0041d9b2  FILD dword ptr [EBP + 0x14]
0041d9b5  FIDIV dword ptr [EBP + 0x18]
0041d9b8  FSTP double ptr [EBP + -0x18]
0041d9bb  MOV ECX,dword ptr [EBP + 0x8]
0041d9be  PUSH ECX
0041d9bf  CALL 0x005dcb00
0041d9c4  ADD ESP,0x4
0041d9c7  MOV ECX,EAX
0041d9c9  CALL 0x005d5a50
0041d9ce  CMP EAX,0x3b9aca00
0041d9d3  JL 0x0041d9da
0041d9d5  JMP 0x0041dc1d
0041d9da  MOV EDX,dword ptr [EBP + 0x10]
0041d9dd  MOV dword ptr [EBP + -0x50],EDX
0041d9e0  CMP dword ptr [EBP + -0x50],0x0
0041d9e4  JZ 0x0041d9ff
0041d9e6  CMP dword ptr [EBP + -0x50],0x1
0041d9ea  JZ 0x0041dafb
0041d9f0  CMP dword ptr [EBP + -0x50],0x2
0041d9f4  JZ 0x0041dadb
0041d9fa  JMP 0x0041dc1d
0041d9ff  MOV EAX,dword ptr [EBP + 0xc]
0041da02  PUSH EAX
0041da03  MOV ECX,dword ptr [EBP + 0x8]
0041da06  PUSH ECX
0041da07  MOV EDX,dword ptr [EBP + 0x8]
0041da0a  MOV EAX,[0x0079032c]
0041da0f  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x18]
0041da13  MOV EDX,dword ptr [EBP + 0x8]
0041da16  MOV EAX,[0x0079032c]
0041da1b  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x18]
0041da1f  MOV EAX,dword ptr [ECX]
0041da21  MOV ECX,EDX
0041da23  MOV EDX,dword ptr [EAX + 0xc0]
0041da29  CALL EDX
0041da2b  MOV EAX,dword ptr [EBP + 0x8]
0041da2e  PUSH EAX
0041da2f  CALL 0x005dcb00
0041da34  ADD ESP,0x4
0041da37  CMP dword ptr [EAX + 0x4a8],0x0
0041da3e  JLE 0x0041da56
0041da40  MOV ECX,dword ptr [EBP + 0x8]
0041da43  PUSH ECX
0041da44  CALL 0x005dcb00
0041da49  ADD ESP,0x4
0041da4c  MOV dword ptr [EAX + 0x4a8],0x0
0041da56  MOV EDX,dword ptr [EBP + 0x8]
0041da59  PUSH EDX
0041da5a  CALL 0x005dcb00
0041da5f  ADD ESP,0x4
0041da62  ADD EAX,0x4a8
0041da67  MOV dword ptr [EBP + -0x54],EAX
0041da6a  MOV EAX,dword ptr [EBP + -0x54]
0041da6d  MOV ECX,dword ptr [EAX]
0041da6f  SUB ECX,0x1
0041da72  MOV EDX,dword ptr [EBP + -0x54]
0041da75  MOV dword ptr [EDX],ECX
0041da77  MOV EAX,dword ptr [EBP + -0x8]
0041da7a  IMUL EAX,EAX,-0x1
0041da7d  MOV dword ptr [EBP + -0x20],EAX
0041da80  MOV ECX,dword ptr [EBP + -0x4]
0041da83  IMUL ECX,ECX,-0x1
0041da86  MOV dword ptr [EBP + -0x1c],ECX
0041da89  MOV EDX,dword ptr [EBP + -0x1c]
0041da8c  PUSH EDX
0041da8d  MOV EAX,dword ptr [EBP + -0x20]
0041da90  PUSH EAX
0041da91  MOV ECX,dword ptr [EBP + 0x8]
0041da94  PUSH ECX
0041da95  CALL 0x005dcb00
0041da9a  ADD ESP,0x4
0041da9d  MOV ECX,EAX
0041da9f  CALL 0x005d5fb0
0041daa4  PUSH 0x0
0041daa6  PUSH 0x0
0041daa8  CALL 0x0064c8a0
0041daad  ADD ESP,0x8
0041dab0  MOV dword ptr [EBP + -0x38],EAX
0041dab3  MOV dword ptr [EBP + -0x34],EDX
0041dab6  MOV EDX,dword ptr [EBP + 0xc]
0041dab9  PUSH EDX
0041daba  MOV EAX,dword ptr [EBP + 0x8]
0041dabd  PUSH EAX
0041dabe  MOV ECX,dword ptr [EBP + -0x34]
0041dac1  PUSH ECX
0041dac2  MOV EDX,dword ptr [EBP + -0x38]
0041dac5  PUSH EDX
0041dac6  MOV EAX,dword ptr [EBP + -0x4c]
0041dac9  MOV EDX,dword ptr [EAX]
0041dacb  MOV ECX,dword ptr [EBP + -0x4c]
0041dace  MOV EAX,dword ptr [EDX + 0xb8]
0041dad4  CALL EAX
0041dad6  JMP 0x0041dc1d
0041dadb  MOV ECX,dword ptr [EBP + -0x4]
0041dade  PUSH ECX
0041dadf  MOV EDX,dword ptr [EBP + -0x8]
0041dae2  PUSH EDX
0041dae3  MOV EAX,dword ptr [EBP + 0x8]
0041dae6  PUSH EAX
0041dae7  CALL 0x005dcb00
0041daec  ADD ESP,0x4
0041daef  MOV ECX,EAX
0041daf1  CALL 0x005d5cf0
0041daf6  JMP 0x0041dc1d
0041dafb  MOV ECX,dword ptr [EBP + 0x8]
0041dafe  PUSH ECX
0041daff  CALL 0x005dcb00
0041db04  ADD ESP,0x4
0041db07  CMP dword ptr [EAX + 0x4a8],0x0
0041db0e  JGE 0x0041db26
0041db10  MOV EDX,dword ptr [EBP + 0x8]
0041db13  PUSH EDX
0041db14  CALL 0x005dcb00
0041db19  ADD ESP,0x4
0041db1c  MOV dword ptr [EAX + 0x4a8],0x0
0041db26  MOV EAX,dword ptr [EBP + 0x8]
0041db29  PUSH EAX
0041db2a  CALL 0x005dcb00
0041db2f  ADD ESP,0x4
0041db32  MOV ECX,EAX
0041db34  CALL 0x005d7540
0041db39  MOV ECX,dword ptr [EBP + -0x8]
0041db3c  MOV dword ptr [EBP + -0x20],ECX
0041db3f  MOV EDX,dword ptr [EBP + -0x4]
0041db42  MOV dword ptr [EBP + -0x1c],EDX
0041db45  SUB ESP,0x8
0041db48  FLD double ptr [EBP + -0x18]
0041db4b  FSTP double ptr [ESP]
0041db4e  LEA ECX,[EBP + -0x20]
0041db51  CALL 0x0064c560
0041db56  CMP dword ptr [EBP + -0x20],0x3b9aca00
0041db5d  JLE 0x0041db6d
0041db5f  MOV dword ptr [EBP + -0x20],0x3b9aca00
0041db66  MOV dword ptr [EBP + -0x1c],0x0
0041db6d  MOV EAX,dword ptr [EBP + 0x8]
0041db70  SHL EAX,0x5
0041db73  MOV ECX,dword ptr [EBP + -0x4c]
0041db76  LEA EDX,[ECX + EAX*0x1 + 0x48]
0041db7a  MOV EAX,dword ptr [EBP + 0xc]
0041db7d  MOV ECX,dword ptr [EDX + EAX*0x8 + 0x4]
0041db81  PUSH ECX
0041db82  MOV EDX,dword ptr [EDX + EAX*0x8]
0041db85  PUSH EDX
0041db86  LEA EAX,[EBP + -0x40]
0041db89  PUSH EAX
0041db8a  LEA ECX,[EBP + -0x20]
0041db8d  CALL 0x0064c5c0
0041db92  MOV ECX,dword ptr [EAX]
0041db94  MOV EDX,dword ptr [EAX + 0x4]
0041db97  MOV dword ptr [EBP + -0x10],ECX
0041db9a  MOV dword ptr [EBP + -0xc],EDX
0041db9d  CMP dword ptr [EBP + -0x10],0x3b9aca00
0041dba4  JL 0x0041dbc7
0041dba6  PUSH 0x0
0041dba8  PUSH 0x3b9aca00
0041dbad  CALL 0x0064c8a0
0041dbb2  ADD ESP,0x8
0041dbb5  MOV dword ptr [EBP + -0x48],EAX
0041dbb8  MOV dword ptr [EBP + -0x44],EDX
0041dbbb  MOV EAX,dword ptr [EBP + -0x48]
0041dbbe  MOV dword ptr [EBP + -0x10],EAX
0041dbc1  MOV ECX,dword ptr [EBP + -0x44]
0041dbc4  MOV dword ptr [EBP + -0xc],ECX
0041dbc7  MOV EDX,dword ptr [EBP + -0xc]
0041dbca  PUSH EDX
0041dbcb  MOV EAX,dword ptr [EBP + -0x10]
0041dbce  PUSH EAX
0041dbcf  MOV ECX,dword ptr [EBP + 0x8]
0041dbd2  PUSH ECX
0041dbd3  CALL 0x005dcb00
0041dbd8  ADD ESP,0x4
0041dbdb  MOV ECX,EAX
0041dbdd  CALL 0x005d5cf0
0041dbe2  MOV EDX,dword ptr [EBP + -0x1c]
0041dbe5  PUSH EDX
0041dbe6  MOV EAX,dword ptr [EBP + -0x20]
0041dbe9  PUSH EAX
0041dbea  MOV ECX,dword ptr [EBP + 0x8]
0041dbed  PUSH ECX
0041dbee  CALL 0x005dcb00
0041dbf3  ADD ESP,0x4
0041dbf6  MOV ECX,EAX
0041dbf8  CALL 0x005d5fb0
0041dbfd  MOV EDX,dword ptr [EBP + 0xc]
0041dc00  PUSH EDX
0041dc01  MOV EAX,dword ptr [EBP + 0x8]
0041dc04  PUSH EAX
0041dc05  MOV ECX,dword ptr [EBP + -0xc]
0041dc08  PUSH ECX
0041dc09  MOV EDX,dword ptr [EBP + -0x10]
0041dc0c  PUSH EDX
0041dc0d  MOV EAX,dword ptr [EBP + -0x4c]
0041dc10  MOV EDX,dword ptr [EAX]
0041dc12  MOV ECX,dword ptr [EBP + -0x4c]
0041dc15  MOV EAX,dword ptr [EDX + 0xb8]
0041dc1b  CALL EAX
0041dc1d  MOV ESP,EBP
0041dc1f  POP EBP
0041dc20  RET 0x14
