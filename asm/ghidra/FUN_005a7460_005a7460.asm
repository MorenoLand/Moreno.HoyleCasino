; FUN_005a7460  005a7460
005a7460  PUSH EBP
005a7461  MOV EBP,ESP
005a7463  SUB ESP,0xcc
005a7469  MOV dword ptr [EBP + 0xffffff34],ECX
005a746f  MOV dword ptr [EBP + 0xffffff38],0x180
005a7479  MOV dword ptr [EBP + 0xffffff3c],0xd2
005a7483  MOV dword ptr [EBP + 0xffffff40],0x143
005a748d  MOV dword ptr [EBP + 0xffffff44],0xec
005a7497  MOV dword ptr [EBP + 0xffffff48],0x192
005a74a1  MOV dword ptr [EBP + 0xffffff4c],0xd2
005a74ab  MOV dword ptr [EBP + 0xffffff50],0x176
005a74b5  MOV dword ptr [EBP + 0xffffff54],0x78
005a74bf  MOV dword ptr [EBP + 0xffffff58],0x143
005a74c9  MOV dword ptr [EBP + 0xffffff5c],0x93
005a74d3  MOV dword ptr [EBP + 0xffffff60],0x192
005a74dd  MOV dword ptr [EBP + 0xffffff64],0x93
005a74e7  MOV dword ptr [EBP + 0xffffff68],0xc0
005a74f1  MOV dword ptr [EBP + 0xffffff6c],0xec
005a74fb  MOV dword ptr [EBP + 0xffffff70],0x91
005a7505  MOV dword ptr [EBP + 0xffffff74],0xec
005a750f  MOV dword ptr [EBP + 0xffffff78],0xe0
005a7519  MOV dword ptr [EBP + 0xffffff7c],0xec
005a7523  MOV dword ptr [EBP + -0x80],0xca
005a752a  MOV dword ptr [EBP + -0x7c],0x93
005a7531  MOV dword ptr [EBP + -0x78],0x9b
005a7538  MOV dword ptr [EBP + -0x74],0x93
005a753f  MOV dword ptr [EBP + -0x70],0xea
005a7546  MOV dword ptr [EBP + -0x6c],0x93
005a754d  MOV dword ptr [EBP + -0x68],0x203
005a7554  MOV dword ptr [EBP + -0x64],0xae
005a755b  MOV dword ptr [EBP + -0x60],0x1d5
005a7562  MOV dword ptr [EBP + -0x5c],0xae
005a7569  MOV dword ptr [EBP + -0x58],0x224
005a7570  MOV dword ptr [EBP + -0x54],0xae
005a7577  MOV dword ptr [EBP + -0x50],0x203
005a757e  MOV dword ptr [EBP + -0x4c],0x59
005a7585  MOV dword ptr [EBP + -0x48],0x1d5
005a758c  MOV dword ptr [EBP + -0x44],0x59
005a7593  MOV dword ptr [EBP + -0x40],0x224
005a759a  MOV dword ptr [EBP + -0x3c],0x59
005a75a1  MOV dword ptr [EBP + -0x38],0x39
005a75a8  MOV dword ptr [EBP + -0x34],0xae
005a75af  MOV dword ptr [EBP + -0x30],0x1
005a75b6  MOV dword ptr [EBP + -0x2c],0xae
005a75bd  MOV dword ptr [EBP + -0x28],0x50
005a75c4  MOV dword ptr [EBP + -0x24],0xae
005a75cb  MOV dword ptr [EBP + -0x20],0x39
005a75d2  MOV dword ptr [EBP + -0x1c],0x59
005a75d9  MOV dword ptr [EBP + -0x18],0x1
005a75e0  MOV dword ptr [EBP + -0x14],0x59
005a75e7  MOV dword ptr [EBP + -0x10],0x50
005a75ee  MOV dword ptr [EBP + -0xc],0x59
005a75f5  CMP dword ptr [EBP + 0x8],0x4
005a75f9  JNZ 0x005a7602
005a75fb  MOV EAX,0x46
005a7600  JMP 0x005a7649
005a7602  MOV EAX,dword ptr [EBP + 0xc]
005a7605  PUSH EAX
005a7606  MOV ECX,dword ptr [EBP + 0x8]
005a7609  PUSH ECX
005a760a  MOV ECX,dword ptr [0x00793604]
005a7610  CALL 0x005b58f0
005a7615  PUSH EAX
005a7616  MOV ECX,dword ptr [EBP + 0xffffff34]
005a761c  CALL 0x005a7190
005a7621  MOV dword ptr [EBP + -0x4],EAX
005a7624  MOV EDX,dword ptr [EBP + 0x8]
005a7627  IMUL EDX,EDX,0x30
005a762a  LEA EAX,[EBP + EDX*0x1 + 0xffffff38]
005a7631  MOV ECX,dword ptr [EBP + 0xc]
005a7634  ADD ECX,dword ptr [EBP + -0x4]
005a7637  MOV EDX,dword ptr [EBP + 0x10]
005a763a  IMUL EDX,EDX,0x6
005a763d  MOV EAX,dword ptr [EAX + ECX*0x8 + 0x4]
005a7641  SUB EAX,EDX
005a7643  MOV dword ptr [EBP + -0x8],EAX
005a7646  MOV EAX,dword ptr [EBP + -0x8]
005a7649  MOV ESP,EBP
005a764b  POP EBP
005a764c  RET 0xc
