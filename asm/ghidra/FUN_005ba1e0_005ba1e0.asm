; FUN_005ba1e0  005ba1e0
005ba1e0  PUSH EBP
005ba1e1  MOV EBP,ESP
005ba1e3  PUSH -0x1
005ba1e5  PUSH 0x6a7f48
005ba1ea  MOV EAX,FS:[0x0]
005ba1f0  PUSH EAX
005ba1f1  SUB ESP,0xbc
005ba1f7  MOV EAX,[0x00781870]
005ba1fc  XOR EAX,EBP
005ba1fe  PUSH EAX
005ba1ff  LEA EAX,[EBP + -0xc]
005ba202  MOV FS:[0x0],EAX
005ba208  MOV dword ptr [EBP + 0xffffff44],ECX
005ba20e  MOV dword ptr [EBP + -0x4],0x0
005ba215  MOV EAX,dword ptr [EBP + 0xffffff44]
005ba21b  CMP dword ptr [EAX + 0x4],0x0
005ba21f  JNZ 0x005ba22d
005ba221  MOV dword ptr [EBP + 0xffffff40],0x0
005ba22b  JMP 0x005ba248
005ba22d  MOV ECX,dword ptr [EBP + 0xffffff44]
005ba233  MOV EDX,dword ptr [EBP + 0xffffff44]
005ba239  MOV EAX,dword ptr [ECX + 0x8]
005ba23c  SUB EAX,dword ptr [EDX + 0x4]
005ba23f  SAR EAX,0x4
005ba242  MOV dword ptr [EBP + 0xffffff40],EAX
005ba248  MOV ECX,dword ptr [EBP + 0xffffff40]
005ba24e  CMP ECX,dword ptr [EBP + 0x8]
005ba251  JNC 0x005ba2fd
005ba257  MOV EDX,dword ptr [EBP + 0xffffff44]
005ba25d  CMP dword ptr [EDX + 0x4],0x0
005ba261  JNZ 0x005ba26f
005ba263  MOV dword ptr [EBP + 0xffffff3c],0x0
005ba26d  JMP 0x005ba28a
005ba26f  MOV EAX,dword ptr [EBP + 0xffffff44]
005ba275  MOV ECX,dword ptr [EBP + 0xffffff44]
005ba27b  MOV EDX,dword ptr [EAX + 0x8]
005ba27e  SUB EDX,dword ptr [ECX + 0x4]
005ba281  SAR EDX,0x4
005ba284  MOV dword ptr [EBP + 0xffffff3c],EDX
005ba28a  MOV EAX,dword ptr [EBP + 0xffffff44]
005ba290  MOV ECX,dword ptr [EAX + 0x8]
005ba293  MOV dword ptr [EBP + -0x38],ECX
005ba296  MOV dword ptr [EBP + -0x14],0x0
005ba29d  CMP dword ptr [EBP + 0xffffff44],0x0
005ba2a4  JZ 0x005ba2c2
005ba2a6  MOV EDX,dword ptr [EBP + 0xffffff44]
005ba2ac  MOV EAX,dword ptr [EDX + 0x4]
005ba2af  CMP EAX,dword ptr [EBP + -0x38]
005ba2b2  JA 0x005ba2c2
005ba2b4  MOV ECX,dword ptr [EBP + 0xffffff44]
005ba2ba  MOV EDX,dword ptr [EBP + -0x38]
005ba2bd  CMP EDX,dword ptr [ECX + 0x8]
005ba2c0  JBE 0x005ba2c8
005ba2c2  CALL dword ptr [0x006b2274]
005ba2c8  MOV EAX,dword ptr [EBP + 0xffffff44]
005ba2ce  MOV dword ptr [EBP + -0x14],EAX
005ba2d1  MOV ECX,dword ptr [EBP + -0x38]
005ba2d4  MOV dword ptr [EBP + -0x10],ECX
005ba2d7  LEA EDX,[EBP + 0xc]
005ba2da  PUSH EDX
005ba2db  MOV EAX,dword ptr [EBP + 0x8]
005ba2de  SUB EAX,dword ptr [EBP + 0xffffff3c]
005ba2e4  PUSH EAX
005ba2e5  MOV ECX,dword ptr [EBP + -0x10]
005ba2e8  PUSH ECX
005ba2e9  MOV EDX,dword ptr [EBP + -0x14]
005ba2ec  PUSH EDX
005ba2ed  MOV ECX,dword ptr [EBP + 0xffffff44]
005ba2f3  CALL 0x005ba640
005ba2f8  JMP 0x005ba41c
005ba2fd  MOV EAX,dword ptr [EBP + 0xffffff44]
005ba303  CMP dword ptr [EAX + 0x4],0x0
005ba307  JNZ 0x005ba315
005ba309  MOV dword ptr [EBP + 0xffffff38],0x0
005ba313  JMP 0x005ba330
005ba315  MOV ECX,dword ptr [EBP + 0xffffff44]
005ba31b  MOV EDX,dword ptr [EBP + 0xffffff44]
005ba321  MOV EAX,dword ptr [ECX + 0x8]
005ba324  SUB EAX,dword ptr [EDX + 0x4]
005ba327  SAR EAX,0x4
005ba32a  MOV dword ptr [EBP + 0xffffff38],EAX
005ba330  MOV ECX,dword ptr [EBP + 0x8]
005ba333  CMP ECX,dword ptr [EBP + 0xffffff38]
005ba339  JNC 0x005ba41c
005ba33f  MOV EDX,dword ptr [EBP + 0xffffff44]
005ba345  MOV EAX,dword ptr [EDX + 0x8]
005ba348  MOV dword ptr [EBP + -0x3c],EAX
005ba34b  MOV dword ptr [EBP + -0x1c],0x0
005ba352  CMP dword ptr [EBP + 0xffffff44],0x0
005ba359  JZ 0x005ba377
005ba35b  MOV ECX,dword ptr [EBP + 0xffffff44]
005ba361  MOV EDX,dword ptr [ECX + 0x4]
005ba364  CMP EDX,dword ptr [EBP + -0x3c]
005ba367  JA 0x005ba377
005ba369  MOV EAX,dword ptr [EBP + 0xffffff44]
005ba36f  MOV ECX,dword ptr [EBP + -0x3c]
005ba372  CMP ECX,dword ptr [EAX + 0x8]
005ba375  JBE 0x005ba37d
005ba377  CALL dword ptr [0x006b2274]
005ba37d  MOV EDX,dword ptr [EBP + 0xffffff44]
005ba383  MOV dword ptr [EBP + -0x1c],EDX
005ba386  MOV EAX,dword ptr [EBP + -0x3c]
005ba389  MOV dword ptr [EBP + -0x18],EAX
005ba38c  MOV ECX,dword ptr [EBP + 0xffffff44]
005ba392  MOV EDX,dword ptr [ECX + 0x4]
005ba395  MOV dword ptr [EBP + -0x40],EDX
005ba398  MOV dword ptr [EBP + -0x24],0x0
005ba39f  CMP dword ptr [EBP + 0xffffff44],0x0
005ba3a6  JZ 0x005ba3c4
005ba3a8  MOV EAX,dword ptr [EBP + 0xffffff44]
005ba3ae  MOV ECX,dword ptr [EAX + 0x4]
005ba3b1  CMP ECX,dword ptr [EBP + -0x40]
005ba3b4  JA 0x005ba3c4
005ba3b6  MOV EDX,dword ptr [EBP + 0xffffff44]
005ba3bc  MOV EAX,dword ptr [EBP + -0x40]
005ba3bf  CMP EAX,dword ptr [EDX + 0x8]
005ba3c2  JBE 0x005ba3ca
005ba3c4  CALL dword ptr [0x006b2274]
005ba3ca  MOV ECX,dword ptr [EBP + 0xffffff44]
005ba3d0  MOV dword ptr [EBP + -0x24],ECX
005ba3d3  MOV EDX,dword ptr [EBP + -0x40]
005ba3d6  MOV dword ptr [EBP + -0x20],EDX
005ba3d9  MOV EAX,dword ptr [EBP + -0x24]
005ba3dc  MOV ECX,dword ptr [EBP + -0x20]
005ba3df  MOV dword ptr [EBP + -0x48],EAX
005ba3e2  MOV dword ptr [EBP + -0x44],ECX
005ba3e5  MOV EDX,dword ptr [EBP + 0x8]
005ba3e8  PUSH EDX
005ba3e9  LEA ECX,[EBP + -0x48]
005ba3ec  CALL 0x005bba90
005ba3f1  MOV EAX,dword ptr [EBP + -0x48]
005ba3f4  MOV ECX,dword ptr [EBP + -0x44]
005ba3f7  MOV dword ptr [EBP + -0x2c],EAX
005ba3fa  MOV dword ptr [EBP + -0x28],ECX
005ba3fd  MOV EDX,dword ptr [EBP + -0x18]
005ba400  PUSH EDX
005ba401  MOV EAX,dword ptr [EBP + -0x1c]
005ba404  PUSH EAX
005ba405  MOV ECX,dword ptr [EBP + -0x28]
005ba408  PUSH ECX
005ba409  MOV EDX,dword ptr [EBP + -0x2c]
005ba40c  PUSH EDX
005ba40d  LEA EAX,[EBP + -0x34]
005ba410  PUSH EAX
005ba411  MOV ECX,dword ptr [EBP + 0xffffff44]
005ba417  CALL 0x005ba570
005ba41c  MOV dword ptr [EBP + -0x4],0xffffffff
005ba423  LEA ECX,[EBP + 0xc]
005ba426  CALL 0x005be450
005ba42b  MOV ECX,dword ptr [EBP + -0xc]
005ba42e  MOV dword ptr FS:[0x0],ECX
005ba435  POP ECX
005ba436  MOV ESP,EBP
005ba438  POP EBP
005ba439  RET 0x14
