; FUN_005a7240  005a7240
005a7240  PUSH EBP
005a7241  MOV EBP,ESP
005a7243  SUB ESP,0xcc
005a7249  MOV dword ptr [EBP + 0xffffff34],ECX
005a724f  MOV dword ptr [EBP + 0xffffff38],0x180
005a7259  MOV dword ptr [EBP + 0xffffff3c],0xd2
005a7263  MOV dword ptr [EBP + 0xffffff40],0x143
005a726d  MOV dword ptr [EBP + 0xffffff44],0xec
005a7277  MOV dword ptr [EBP + 0xffffff48],0x192
005a7281  MOV dword ptr [EBP + 0xffffff4c],0xd2
005a728b  MOV dword ptr [EBP + 0xffffff50],0x176
005a7295  MOV dword ptr [EBP + 0xffffff54],0x78
005a729f  MOV dword ptr [EBP + 0xffffff58],0x143
005a72a9  MOV dword ptr [EBP + 0xffffff5c],0x93
005a72b3  MOV dword ptr [EBP + 0xffffff60],0x192
005a72bd  MOV dword ptr [EBP + 0xffffff64],0x93
005a72c7  MOV dword ptr [EBP + 0xffffff68],0xc0
005a72d1  MOV dword ptr [EBP + 0xffffff6c],0xec
005a72db  MOV dword ptr [EBP + 0xffffff70],0x91
005a72e5  MOV dword ptr [EBP + 0xffffff74],0xec
005a72ef  MOV dword ptr [EBP + 0xffffff78],0xe0
005a72f9  MOV dword ptr [EBP + 0xffffff7c],0xec
005a7303  MOV dword ptr [EBP + -0x80],0xca
005a730a  MOV dword ptr [EBP + -0x7c],0x93
005a7311  MOV dword ptr [EBP + -0x78],0x9b
005a7318  MOV dword ptr [EBP + -0x74],0x93
005a731f  MOV dword ptr [EBP + -0x70],0xea
005a7326  MOV dword ptr [EBP + -0x6c],0x93
005a732d  MOV dword ptr [EBP + -0x68],0x203
005a7334  MOV dword ptr [EBP + -0x64],0xae
005a733b  MOV dword ptr [EBP + -0x60],0x1d5
005a7342  MOV dword ptr [EBP + -0x5c],0xae
005a7349  MOV dword ptr [EBP + -0x58],0x224
005a7350  MOV dword ptr [EBP + -0x54],0xae
005a7357  MOV dword ptr [EBP + -0x50],0x203
005a735e  MOV dword ptr [EBP + -0x4c],0x59
005a7365  MOV dword ptr [EBP + -0x48],0x1d5
005a736c  MOV dword ptr [EBP + -0x44],0x59
005a7373  MOV dword ptr [EBP + -0x40],0x224
005a737a  MOV dword ptr [EBP + -0x3c],0x59
005a7381  MOV dword ptr [EBP + -0x38],0x39
005a7388  MOV dword ptr [EBP + -0x34],0xae
005a738f  MOV dword ptr [EBP + -0x30],0x1
005a7396  MOV dword ptr [EBP + -0x2c],0xae
005a739d  MOV dword ptr [EBP + -0x28],0x50
005a73a4  MOV dword ptr [EBP + -0x24],0xae
005a73ab  MOV dword ptr [EBP + -0x20],0x39
005a73b2  MOV dword ptr [EBP + -0x1c],0x59
005a73b9  MOV dword ptr [EBP + -0x18],0x1
005a73c0  MOV dword ptr [EBP + -0x14],0x59
005a73c7  MOV dword ptr [EBP + -0x10],0x50
005a73ce  MOV dword ptr [EBP + -0xc],0x59
005a73d5  CMP dword ptr [EBP + 0x8],0x4
005a73d9  JNZ 0x005a73e8
005a73db  MOV EAX,dword ptr [EBP + 0x10]
005a73de  IMUL EAX,EAX,0xe
005a73e1  ADD EAX,0x109
005a73e6  JMP 0x005a7455
005a73e8  MOV EAX,dword ptr [EBP + 0xc]
005a73eb  PUSH EAX
005a73ec  MOV ECX,dword ptr [EBP + 0x8]
005a73ef  PUSH ECX
005a73f0  MOV ECX,dword ptr [0x00793604]
005a73f6  CALL 0x005b58f0
005a73fb  PUSH EAX
005a73fc  MOV ECX,dword ptr [EBP + 0xffffff34]
005a7402  CALL 0x005a7190
005a7407  MOV dword ptr [EBP + -0x8],EAX
005a740a  MOV EDX,dword ptr [EBP + 0x10]
005a740d  IMUL EDX,EDX,0xc
005a7410  MOV EAX,dword ptr [EBP + 0x8]
005a7413  IMUL EAX,EAX,0x30
005a7416  LEA ECX,[EBP + EAX*0x1 + 0xffffff38]
005a741d  MOV EAX,dword ptr [EBP + 0xc]
005a7420  ADD EAX,dword ptr [EBP + -0x8]
005a7423  ADD EDX,dword ptr [ECX + EAX*0x8]
005a7426  MOV dword ptr [EBP + -0x4],EDX
005a7429  MOV ECX,dword ptr [EBP + 0xc]
005a742c  PUSH ECX
005a742d  MOV EDX,dword ptr [EBP + 0x8]
005a7430  PUSH EDX
005a7431  MOV ECX,dword ptr [0x00793604]
005a7437  CALL 0x005b60a0
005a743c  MOVZX EAX,AL
005a743f  TEST EAX,EAX
005a7441  JZ 0x005a7452
005a7443  CMP dword ptr [EBP + 0x10],0x2
005a7447  JNZ 0x005a7452
005a7449  MOV ECX,dword ptr [EBP + -0x4]
005a744c  SUB ECX,0x14
005a744f  MOV dword ptr [EBP + -0x4],ECX
005a7452  MOV EAX,dword ptr [EBP + -0x4]
005a7455  MOV ESP,EBP
005a7457  POP EBP
005a7458  RET 0xc
