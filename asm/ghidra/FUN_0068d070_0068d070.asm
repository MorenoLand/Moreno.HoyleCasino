; FUN_0068d070  0068d070
0068d070  PUSH EBP
0068d071  MOV EBP,ESP
0068d073  PUSH -0x1
0068d075  PUSH 0x6ae0c9
0068d07a  MOV EAX,FS:[0x0]
0068d080  PUSH EAX
0068d081  SUB ESP,0xb8
0068d087  MOV EAX,[0x00781870]
0068d08c  XOR EAX,EBP
0068d08e  PUSH EAX
0068d08f  LEA EAX,[EBP + -0xc]
0068d092  MOV FS:[0x0],EAX
0068d098  MOV dword ptr [EBP + 0xffffff40],ECX
0068d09e  MOV dword ptr [EBP + -0x5c],0x6666666
0068d0a5  CMP dword ptr [EBP + -0x5c],0x0
0068d0a9  JBE 0x0068d0b6
0068d0ab  MOV EAX,dword ptr [EBP + -0x5c]
0068d0ae  MOV dword ptr [EBP + 0xffffff3c],EAX
0068d0b4  JMP 0x0068d0c0
0068d0b6  MOV dword ptr [EBP + 0xffffff3c],0x1
0068d0c0  MOV ECX,dword ptr [EBP + 0xffffff3c]
0068d0c6  SUB ECX,0x1
0068d0c9  MOV EDX,dword ptr [EBP + 0xffffff40]
0068d0cf  CMP ECX,dword ptr [EDX + 0x8]
0068d0d2  JA 0x0068d11a
0068d0d4  PUSH 0x6e5660
0068d0d9  LEA ECX,[EBP + -0x58]
0068d0dc  CALL dword ptr [0x006b20fc]
0068d0e2  MOV dword ptr [EBP + -0x4],0x0
0068d0e9  LEA EAX,[EBP + -0x58]
0068d0ec  PUSH EAX
0068d0ed  LEA ECX,[EBP + -0x3c]
0068d0f0  CALL 0x0068d440
0068d0f5  MOV dword ptr [EBP + -0x3c],0x6d1be0
0068d0fc  PUSH 0x6fc53c
0068d101  LEA ECX,[EBP + -0x3c]
0068d104  PUSH ECX
0068d105  CALL 0x00686fc0
0068d11a  PUSH 0x0
0068d11c  MOV EDX,dword ptr [EBP + 0x14]
0068d11f  PUSH EDX
0068d120  MOV EAX,dword ptr [EBP + 0xffffff40]
0068d126  MOV ECX,dword ptr [EAX + 0x4]
0068d129  PUSH ECX
0068d12a  MOV EDX,dword ptr [EBP + 0x10]
0068d12d  PUSH EDX
0068d12e  MOV EAX,dword ptr [EBP + 0xffffff40]
0068d134  MOV ECX,dword ptr [EAX + 0x4]
0068d137  PUSH ECX
0068d138  MOV ECX,dword ptr [EBP + 0xffffff40]
0068d13e  CALL 0x0068e670
0068d143  MOV dword ptr [EBP + -0x10],EAX
0068d146  MOV EDX,dword ptr [EBP + 0xffffff40]
0068d14c  MOV EAX,dword ptr [EDX + 0x8]
0068d14f  ADD EAX,0x1
0068d152  MOV ECX,dword ptr [EBP + 0xffffff40]
0068d158  MOV dword ptr [ECX + 0x8],EAX
0068d15b  MOV EDX,dword ptr [EBP + 0xffffff40]
0068d161  MOV EAX,dword ptr [EBP + 0x10]
0068d164  CMP EAX,dword ptr [EDX + 0x4]
0068d167  JNZ 0x0068d19d
0068d169  MOV ECX,dword ptr [EBP + 0xffffff40]
0068d16f  MOV EDX,dword ptr [ECX + 0x4]
0068d172  MOV EAX,dword ptr [EBP + -0x10]
0068d175  MOV dword ptr [EDX + 0x4],EAX
0068d178  MOV ECX,dword ptr [EBP + 0xffffff40]
0068d17e  MOV EDX,dword ptr [ECX + 0x4]
0068d181  MOV dword ptr [EBP + -0x60],EDX
0068d184  MOV EAX,dword ptr [EBP + -0x60]
0068d187  MOV ECX,dword ptr [EBP + -0x10]
0068d18a  MOV dword ptr [EAX],ECX
0068d18c  MOV EDX,dword ptr [EBP + 0xffffff40]
0068d192  MOV EAX,dword ptr [EDX + 0x4]
0068d195  MOV ECX,dword ptr [EBP + -0x10]
0068d198  MOV dword ptr [EAX + 0x8],ECX
0068d19b  JMP 0x0068d202
0068d19d  MOVZX EDX,byte ptr [EBP + 0xc]
0068d1a1  TEST EDX,EDX
0068d1a3  JZ 0x0068d1d9
0068d1a5  MOV EAX,dword ptr [EBP + 0x10]
0068d1a8  MOV ECX,dword ptr [EBP + -0x10]
0068d1ab  MOV dword ptr [EAX],ECX
0068d1ad  MOV EDX,dword ptr [EBP + 0xffffff40]
0068d1b3  MOV EAX,dword ptr [EDX + 0x4]
0068d1b6  MOV dword ptr [EBP + -0x64],EAX
0068d1b9  MOV ECX,dword ptr [EBP + -0x64]
0068d1bc  MOV EDX,dword ptr [EBP + 0x10]
0068d1bf  CMP EDX,dword ptr [ECX]
0068d1c1  JNZ 0x0068d1d7
0068d1c3  MOV EAX,dword ptr [EBP + 0xffffff40]
0068d1c9  MOV ECX,dword ptr [EAX + 0x4]
0068d1cc  MOV dword ptr [EBP + -0x68],ECX
0068d1cf  MOV EDX,dword ptr [EBP + -0x68]
0068d1d2  MOV EAX,dword ptr [EBP + -0x10]
0068d1d5  MOV dword ptr [EDX],EAX
0068d1d7  JMP 0x0068d202
0068d1d9  MOV ECX,dword ptr [EBP + 0x10]
0068d1dc  MOV EDX,dword ptr [EBP + -0x10]
0068d1df  MOV dword ptr [ECX + 0x8],EDX
0068d1e2  MOV EAX,dword ptr [EBP + 0xffffff40]
0068d1e8  MOV ECX,dword ptr [EAX + 0x4]
0068d1eb  MOV EDX,dword ptr [EBP + 0x10]
0068d1ee  CMP EDX,dword ptr [ECX + 0x8]
0068d1f1  JNZ 0x0068d202
0068d1f3  MOV EAX,dword ptr [EBP + 0xffffff40]
0068d1f9  MOV ECX,dword ptr [EAX + 0x4]
0068d1fc  MOV EDX,dword ptr [EBP + -0x10]
0068d1ff  MOV dword ptr [ECX + 0x8],EDX
0068d202  MOV EAX,dword ptr [EBP + -0x10]
0068d205  MOV dword ptr [EBP + -0x14],EAX
0068d208  MOV ECX,dword ptr [EBP + -0x14]
0068d20b  MOV EDX,dword ptr [ECX + 0x4]
0068d20e  MOVSX EAX,byte ptr [EDX + 0x34]
0068d212  TEST EAX,EAX
0068d214  JNZ 0x0068d3d7
0068d21a  MOV ECX,dword ptr [EBP + -0x14]
0068d21d  MOV EDX,dword ptr [ECX + 0x4]
0068d220  ADD EDX,0x4
0068d223  MOV dword ptr [EBP + -0x6c],EDX
0068d226  MOV EAX,dword ptr [EBP + -0x6c]
0068d229  MOV ECX,dword ptr [EAX]
0068d22b  MOV dword ptr [EBP + -0x70],ECX
0068d22e  MOV EDX,dword ptr [EBP + -0x14]
0068d231  MOV EAX,dword ptr [EBP + -0x70]
0068d234  MOV ECX,dword ptr [EDX + 0x4]
0068d237  CMP ECX,dword ptr [EAX]
0068d239  JNZ 0x0068d2fa
0068d23f  MOV EDX,dword ptr [EBP + -0x14]
0068d242  MOV EAX,dword ptr [EDX + 0x4]
0068d245  ADD EAX,0x4
0068d248  MOV dword ptr [EBP + -0x74],EAX
0068d24b  MOV ECX,dword ptr [EBP + -0x74]
0068d24e  MOV EDX,dword ptr [ECX]
0068d250  MOV EAX,dword ptr [EDX + 0x8]
0068d253  MOV dword ptr [EBP + 0x10],EAX
0068d256  MOV ECX,dword ptr [EBP + 0x10]
0068d259  MOVSX EDX,byte ptr [ECX + 0x34]
0068d25d  TEST EDX,EDX
0068d25f  JNZ 0x0068d295
0068d261  MOV EAX,dword ptr [EBP + -0x14]
0068d264  MOV ECX,dword ptr [EAX + 0x4]
0068d267  MOV byte ptr [ECX + 0x34],0x1
0068d26b  MOV EDX,dword ptr [EBP + 0x10]
0068d26e  MOV byte ptr [EDX + 0x34],0x1
0068d272  MOV EAX,dword ptr [EBP + -0x14]
0068d275  MOV ECX,dword ptr [EAX + 0x4]
0068d278  ADD ECX,0x4
0068d27b  MOV dword ptr [EBP + -0x78],ECX
0068d27e  MOV EDX,dword ptr [EBP + -0x78]
0068d281  MOV EAX,dword ptr [EDX]
0068d283  MOV byte ptr [EAX + 0x34],0x0
0068d287  MOV ECX,dword ptr [EBP + -0x14]
0068d28a  MOV EDX,dword ptr [ECX + 0x4]
0068d28d  MOV EAX,dword ptr [EDX + 0x4]
0068d290  MOV dword ptr [EBP + -0x14],EAX
0068d293  JMP 0x0068d2f5
0068d295  MOV ECX,dword ptr [EBP + -0x14]
0068d298  MOV EDX,dword ptr [ECX + 0x4]
0068d29b  MOV EAX,dword ptr [EBP + -0x14]
0068d29e  CMP EAX,dword ptr [EDX + 0x8]
0068d2a1  JNZ 0x0068d2bb
0068d2a3  MOV ECX,dword ptr [EBP + -0x14]
0068d2a6  MOV EDX,dword ptr [ECX + 0x4]
0068d2a9  MOV dword ptr [EBP + -0x14],EDX
0068d2ac  MOV EAX,dword ptr [EBP + -0x14]
0068d2af  PUSH EAX
0068d2b0  MOV ECX,dword ptr [EBP + 0xffffff40]
0068d2b6  CALL 0x0068e3c0
0068d2bb  MOV ECX,dword ptr [EBP + -0x14]
0068d2be  MOV EDX,dword ptr [ECX + 0x4]
0068d2c1  MOV byte ptr [EDX + 0x34],0x1
0068d2c5  MOV EAX,dword ptr [EBP + -0x14]
0068d2c8  MOV ECX,dword ptr [EAX + 0x4]
0068d2cb  ADD ECX,0x4
0068d2ce  MOV dword ptr [EBP + 0xffffff78],ECX
0068d2d4  MOV EDX,dword ptr [EBP + 0xffffff78]
0068d2da  MOV EAX,dword ptr [EDX]
0068d2dc  MOV byte ptr [EAX + 0x34],0x0
0068d2e0  MOV ECX,dword ptr [EBP + -0x14]
0068d2e3  MOV EDX,dword ptr [ECX + 0x4]
0068d2e6  MOV EAX,dword ptr [EDX + 0x4]
0068d2e9  PUSH EAX
0068d2ea  MOV ECX,dword ptr [EBP + 0xffffff40]
0068d2f0  CALL 0x0068e470
0068d2f5  JMP 0x0068d3d2
0068d2fa  MOV ECX,dword ptr [EBP + -0x14]
0068d2fd  MOV EDX,dword ptr [ECX + 0x4]
0068d300  ADD EDX,0x4
0068d303  MOV dword ptr [EBP + 0xffffff6c],EDX
0068d309  MOV EAX,dword ptr [EBP + 0xffffff6c]
0068d30f  MOV ECX,dword ptr [EAX]
0068d311  MOV dword ptr [EBP + 0xffffff68],ECX
0068d317  MOV EDX,dword ptr [EBP + 0xffffff68]
0068d31d  MOV EAX,dword ptr [EDX]
0068d31f  MOV dword ptr [EBP + 0x10],EAX
0068d322  MOV ECX,dword ptr [EBP + 0x10]
0068d325  MOVSX EDX,byte ptr [ECX + 0x34]
0068d329  TEST EDX,EDX
0068d32b  JNZ 0x0068d367
0068d32d  MOV EAX,dword ptr [EBP + -0x14]
0068d330  MOV ECX,dword ptr [EAX + 0x4]
0068d333  MOV byte ptr [ECX + 0x34],0x1
0068d337  MOV EDX,dword ptr [EBP + 0x10]
0068d33a  MOV byte ptr [EDX + 0x34],0x1
0068d33e  MOV EAX,dword ptr [EBP + -0x14]
0068d341  MOV ECX,dword ptr [EAX + 0x4]
0068d344  ADD ECX,0x4
0068d347  MOV dword ptr [EBP + 0xffffff64],ECX
0068d34d  MOV EDX,dword ptr [EBP + 0xffffff64]
0068d353  MOV EAX,dword ptr [EDX]
0068d355  MOV byte ptr [EAX + 0x34],0x0
0068d359  MOV ECX,dword ptr [EBP + -0x14]
0068d35c  MOV EDX,dword ptr [ECX + 0x4]
0068d35f  MOV EAX,dword ptr [EDX + 0x4]
0068d362  MOV dword ptr [EBP + -0x14],EAX
0068d365  JMP 0x0068d3d2
0068d367  MOV ECX,dword ptr [EBP + -0x14]
0068d36a  MOV EDX,dword ptr [ECX + 0x4]
0068d36d  MOV dword ptr [EBP + 0xffffff60],EDX
0068d373  MOV EAX,dword ptr [EBP + 0xffffff60]
0068d379  MOV ECX,dword ptr [EBP + -0x14]
0068d37c  CMP ECX,dword ptr [EAX]
0068d37e  JNZ 0x0068d398
0068d380  MOV EDX,dword ptr [EBP + -0x14]
0068d383  MOV EAX,dword ptr [EDX + 0x4]
0068d386  MOV dword ptr [EBP + -0x14],EAX
0068d389  MOV ECX,dword ptr [EBP + -0x14]
0068d38c  PUSH ECX
0068d38d  MOV ECX,dword ptr [EBP + 0xffffff40]
0068d393  CALL 0x0068e470
0068d398  MOV EDX,dword ptr [EBP + -0x14]
0068d39b  MOV EAX,dword ptr [EDX + 0x4]
0068d39e  MOV byte ptr [EAX + 0x34],0x1
0068d3a2  MOV ECX,dword ptr [EBP + -0x14]
0068d3a5  MOV EDX,dword ptr [ECX + 0x4]
0068d3a8  ADD EDX,0x4
0068d3ab  MOV dword ptr [EBP + 0xffffff54],EDX
0068d3b1  MOV EAX,dword ptr [EBP + 0xffffff54]
0068d3b7  MOV ECX,dword ptr [EAX]
0068d3b9  MOV byte ptr [ECX + 0x34],0x0
0068d3bd  MOV EDX,dword ptr [EBP + -0x14]
0068d3c0  MOV EAX,dword ptr [EDX + 0x4]
0068d3c3  MOV ECX,dword ptr [EAX + 0x4]
0068d3c6  PUSH ECX
0068d3c7  MOV ECX,dword ptr [EBP + 0xffffff40]
0068d3cd  CALL 0x0068e3c0
0068d3d2  JMP 0x0068d208
0068d3d7  MOV EDX,dword ptr [EBP + 0xffffff40]
0068d3dd  MOV EAX,dword ptr [EDX + 0x4]
0068d3e0  ADD EAX,0x4
0068d3e3  MOV dword ptr [EBP + 0xffffff44],EAX
0068d3e9  MOV ECX,dword ptr [EBP + 0xffffff44]
0068d3ef  MOV EDX,dword ptr [ECX]
0068d3f1  MOV byte ptr [EDX + 0x34],0x1
0068d3f5  MOV EAX,dword ptr [EBP + 0x8]
0068d3f8  MOV dword ptr [EAX],0x0
0068d3fe  MOV ECX,dword ptr [EBP + 0x8]
0068d401  MOV EDX,dword ptr [EBP + -0x10]
0068d404  MOV dword ptr [ECX + 0x4],EDX
0068d407  CMP dword ptr [EBP + 0xffffff40],0x0
0068d40e  JNZ 0x0068d416
0068d410  CALL dword ptr [0x006b2274]
0068d416  MOV EAX,dword ptr [EBP + 0x8]
0068d419  MOV ECX,dword ptr [EBP + 0xffffff40]
0068d41f  MOV dword ptr [EAX],ECX
0068d421  MOV EAX,dword ptr [EBP + 0x8]
0068d424  MOV ECX,dword ptr [EBP + -0xc]
0068d427  MOV dword ptr FS:[0x0],ECX
0068d42e  POP ECX
0068d42f  MOV ESP,EBP
0068d431  POP EBP
0068d432  RET 0x10
