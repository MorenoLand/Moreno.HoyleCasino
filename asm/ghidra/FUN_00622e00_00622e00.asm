; FUN_00622e00  00622e00
00622e00  PUSH EBP
00622e01  MOV EBP,ESP
00622e03  SUB ESP,0x828
00622e09  MOV EAX,dword ptr [EBP + 0xc]
00622e0c  SAR EAX,0x3
00622e0f  MOV dword ptr [EBP + 0xc],EAX
00622e12  MOV ECX,dword ptr [EBP + 0x10]
00622e15  SAR ECX,0x3
00622e18  MOV dword ptr [EBP + 0x10],ECX
00622e1b  MOV EDX,dword ptr [EBP + 0x14]
00622e1e  SAR EDX,0x2
00622e21  MOV dword ptr [EBP + 0x14],EDX
00622e24  MOV EAX,dword ptr [EBP + 0xc]
00622e27  SHL EAX,0x5
00622e2a  ADD EAX,0x2
00622e2d  MOV dword ptr [EBP + 0xfffff7d8],EAX
00622e33  MOV ECX,dword ptr [EBP + 0x10]
00622e36  SHL ECX,0x5
00622e39  ADD ECX,0x2
00622e3c  MOV dword ptr [EBP + 0xfffffbe4],ECX
00622e42  MOV EDX,dword ptr [EBP + 0x14]
00622e45  SHL EDX,0x5
00622e48  ADD EDX,0x4
00622e4b  MOV dword ptr [EBP + 0xfffff7dc],EDX
00622e51  MOV EAX,dword ptr [EBP + 0x1c]
00622e54  PUSH EAX
00622e55  MOV ECX,dword ptr [EBP + 0x18]
00622e58  PUSH ECX
00622e59  LEA EDX,[EBP + 0xfffffc00]
00622e5f  PUSH EDX
00622e60  MOV EAX,dword ptr [EBP + 0xfffff7dc]
00622e66  PUSH EAX
00622e67  MOV ECX,dword ptr [EBP + 0xfffffbe4]
00622e6d  PUSH ECX
00622e6e  MOV EDX,dword ptr [EBP + 0xfffff7d8]
00622e74  PUSH EDX
00622e75  CALL 0x00622fd0
00622e7a  ADD ESP,0x18
00622e7d  MOV dword ptr [EBP + 0xfffffbfc],EAX
00622e83  LEA EAX,[EBP + 0xfffff7e0]
00622e89  PUSH EAX
00622e8a  LEA ECX,[EBP + 0xfffffc00]
00622e90  PUSH ECX
00622e91  MOV EDX,dword ptr [EBP + 0xfffffbfc]
00622e97  PUSH EDX
00622e98  MOV EAX,dword ptr [EBP + 0x18]
00622e9b  PUSH EAX
00622e9c  MOV ECX,dword ptr [EBP + 0xfffff7dc]
00622ea2  PUSH ECX
00622ea3  MOV EDX,dword ptr [EBP + 0xfffffbe4]
00622ea9  PUSH EDX
00622eaa  MOV EAX,dword ptr [EBP + 0xfffff7d8]
00622eb0  PUSH EAX
00622eb1  CALL 0x00623400
00622eb6  ADD ESP,0x1c
00622eb9  MOV ECX,dword ptr [EBP + 0xc]
00622ebc  SHL ECX,0x3
00622ebf  MOV dword ptr [EBP + 0xc],ECX
00622ec2  MOV EDX,dword ptr [EBP + 0x10]
00622ec5  SHL EDX,0x3
00622ec8  MOV dword ptr [EBP + 0x10],EDX
00622ecb  MOV EAX,dword ptr [EBP + 0x14]
00622ece  SHL EAX,0x2
00622ed1  MOV dword ptr [EBP + 0x14],EAX
00622ed4  LEA ECX,[EBP + 0xfffff7e0]
00622eda  MOV dword ptr [EBP + 0xfffffbf4],ECX
00622ee0  MOV dword ptr [EBP + 0xfffffbec],0x0
00622eea  JMP 0x00622efb
00622eec  MOV EDX,dword ptr [EBP + 0xfffffbec]
00622ef2  ADD EDX,0x1
00622ef5  MOV dword ptr [EBP + 0xfffffbec],EDX
00622efb  CMP dword ptr [EBP + 0xfffffbec],0x8
00622f02  JGE 0x00622fbd
00622f08  MOV dword ptr [EBP + 0xfffffbe8],0x0
00622f12  JMP 0x00622f23
00622f14  MOV EAX,dword ptr [EBP + 0xfffffbe8]
00622f1a  ADD EAX,0x1
00622f1d  MOV dword ptr [EBP + 0xfffffbe8],EAX
00622f23  CMP dword ptr [EBP + 0xfffffbe8],0x8
00622f2a  JGE 0x00622fb8
00622f30  MOV ECX,dword ptr [EBP + 0xc]
00622f33  ADD ECX,dword ptr [EBP + 0xfffffbec]
00622f39  SHL ECX,0x6
00622f3c  SHL ECX,0x5
00622f3f  MOV EDX,dword ptr [EBP + 0x10]
00622f42  ADD EDX,dword ptr [EBP + 0xfffffbe8]
00622f48  SHL EDX,0x5
00622f4b  ADD ECX,dword ptr [EBP + 0x14]
00622f4e  ADD EDX,ECX
00622f50  MOV EAX,dword ptr [EBP + 0x8]
00622f53  LEA ECX,[EAX + EDX*0x4]
00622f56  MOV dword ptr [EBP + 0xfffffbf8],ECX
00622f5c  MOV dword ptr [EBP + 0xfffffbf0],0x0
00622f66  JMP 0x00622f77
00622f68  MOV EDX,dword ptr [EBP + 0xfffffbf0]
00622f6e  ADD EDX,0x1
00622f71  MOV dword ptr [EBP + 0xfffffbf0],EDX
00622f77  CMP dword ptr [EBP + 0xfffffbf0],0x4
00622f7e  JGE 0x00622fb3
00622f80  MOV EAX,dword ptr [EBP + 0xfffffbf4]
00622f86  MOV ECX,dword ptr [EAX]
00622f88  ADD ECX,0x1
00622f8b  MOV EDX,dword ptr [EBP + 0xfffffbf8]
00622f91  MOV dword ptr [EDX],ECX
00622f93  MOV EAX,dword ptr [EBP + 0xfffffbf8]
00622f99  ADD EAX,0x4
00622f9c  MOV dword ptr [EBP + 0xfffffbf8],EAX
00622fa2  MOV ECX,dword ptr [EBP + 0xfffffbf4]
00622fa8  ADD ECX,0x4
00622fab  MOV dword ptr [EBP + 0xfffffbf4],ECX
00622fb1  JMP 0x00622f68
00622fb3  JMP 0x00622f14
00622fb8  JMP 0x00622eec
00622fbd  MOV ESP,EBP
00622fbf  POP EBP
00622fc0  RET
