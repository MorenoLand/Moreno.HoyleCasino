; FUN_005ac240  005ac240
005ac240  PUSH EBP
005ac241  MOV EBP,ESP
005ac243  PUSH -0x1
005ac245  PUSH 0x6a7c61
005ac24a  MOV EAX,FS:[0x0]
005ac250  PUSH EAX
005ac251  SUB ESP,0x34
005ac254  MOV EAX,[0x00781870]
005ac259  XOR EAX,EBP
005ac25b  PUSH EAX
005ac25c  LEA EAX,[EBP + -0xc]
005ac25f  MOV FS:[0x0],EAX
005ac265  MOV dword ptr [EBP + -0x34],ECX
005ac268  MOV EAX,dword ptr [EBP + -0x34]
005ac26b  MOV ECX,dword ptr [EBP + 0x8]
005ac26e  MOV dword ptr [EAX + 0x4],ECX
005ac271  MOV dword ptr [EBP + -0x10],0x0
005ac278  JMP 0x005ac283
005ac27a  MOV EDX,dword ptr [EBP + -0x10]
005ac27d  ADD EDX,0x1
005ac280  MOV dword ptr [EBP + -0x10],EDX
005ac283  CMP dword ptr [EBP + -0x10],0x4
005ac287  JGE 0x005ac334
005ac28d  MOV dword ptr [EBP + -0x14],0x0
005ac294  JMP 0x005ac29f
005ac296  MOV EAX,dword ptr [EBP + -0x14]
005ac299  ADD EAX,0x1
005ac29c  MOV dword ptr [EBP + -0x14],EAX
005ac29f  CMP dword ptr [EBP + -0x14],0x16
005ac2a3  JGE 0x005ac32f
005ac2a9  PUSH 0x178
005ac2ae  CALL 0x00686d82
005ac2b3  ADD ESP,0x4
005ac2b6  MOV dword ptr [EBP + -0x20],EAX
005ac2b9  MOV dword ptr [EBP + -0x4],0x0
005ac2c0  CMP dword ptr [EBP + -0x20],0x0
005ac2c4  JZ 0x005ac2d3
005ac2c6  MOV ECX,dword ptr [EBP + -0x20]
005ac2c9  CALL 0x005eaaf0
005ac2ce  MOV dword ptr [EBP + -0x38],EAX
005ac2d1  JMP 0x005ac2da
005ac2d3  MOV dword ptr [EBP + -0x38],0x0
005ac2da  MOV ECX,dword ptr [EBP + -0x38]
005ac2dd  MOV dword ptr [EBP + -0x1c],ECX
005ac2e0  MOV dword ptr [EBP + -0x4],0xffffffff
005ac2e7  MOV EDX,dword ptr [EBP + -0x10]
005ac2ea  IMUL EDX,EDX,0x58
005ac2ed  MOV EAX,dword ptr [EBP + -0x34]
005ac2f0  LEA ECX,[EAX + EDX*0x1 + 0x28]
005ac2f4  MOV EDX,dword ptr [EBP + -0x14]
005ac2f7  MOV EAX,dword ptr [EBP + -0x1c]
005ac2fa  MOV dword ptr [ECX + EDX*0x4],EAX
005ac2fd  MOV ECX,dword ptr [EBP + -0x10]
005ac300  IMUL ECX,ECX,0x58
005ac303  MOV EDX,dword ptr [EBP + -0x34]
005ac306  LEA EAX,[EDX + ECX*0x1 + 0x28]
005ac30a  MOV ECX,dword ptr [EBP + -0x14]
005ac30d  MOV EDX,dword ptr [EAX + ECX*0x4]
005ac310  MOV EAX,dword ptr [EBP + -0x10]
005ac313  IMUL EAX,EAX,0x58
005ac316  MOV ECX,dword ptr [EBP + -0x34]
005ac319  LEA EAX,[ECX + EAX*0x1 + 0x28]
005ac31d  MOV ECX,dword ptr [EBP + -0x14]
005ac320  MOV ECX,dword ptr [EAX + ECX*0x4]
005ac323  MOV EDX,dword ptr [EDX]
005ac325  MOV EAX,dword ptr [EDX + 0x40]
005ac328  CALL EAX
005ac32a  JMP 0x005ac296
005ac32f  JMP 0x005ac27a
005ac334  MOV dword ptr [EBP + -0x18],0x0
005ac33b  JMP 0x005ac346
005ac33d  MOV ECX,dword ptr [EBP + -0x18]
005ac340  ADD ECX,0x1
005ac343  MOV dword ptr [EBP + -0x18],ECX
005ac346  CMP dword ptr [EBP + -0x18],0x4
005ac34a  JGE 0x005ac449
005ac350  PUSH 0x1d4
005ac355  CALL 0x00686d82
005ac35a  ADD ESP,0x4
005ac35d  MOV dword ptr [EBP + -0x28],EAX
005ac360  MOV dword ptr [EBP + -0x4],0x1
005ac367  CMP dword ptr [EBP + -0x28],0x0
005ac36b  JZ 0x005ac37a
005ac36d  MOV ECX,dword ptr [EBP + -0x28]
005ac370  CALL 0x005cd360
005ac375  MOV dword ptr [EBP + -0x3c],EAX
005ac378  JMP 0x005ac381
005ac37a  MOV dword ptr [EBP + -0x3c],0x0
005ac381  MOV EDX,dword ptr [EBP + -0x3c]
005ac384  MOV dword ptr [EBP + -0x24],EDX
005ac387  MOV dword ptr [EBP + -0x4],0xffffffff
005ac38e  MOV EAX,dword ptr [EBP + -0x18]
005ac391  MOV ECX,dword ptr [EBP + -0x34]
005ac394  MOV EDX,dword ptr [EBP + -0x24]
005ac397  MOV dword ptr [ECX + EAX*0x4 + 0x8],EDX
005ac39b  PUSH -0x1
005ac39d  PUSH 0x30
005ac39f  PUSH 0x78
005ac3a1  PUSH 0x0
005ac3a3  PUSH 0x0
005ac3a5  PUSH 0xf
005ac3a7  PUSH 0x1e
005ac3a9  PUSH 0x4
005ac3ab  PUSH 0x6b27f8
005ac3b0  MOV EAX,dword ptr [EBP + -0x18]
005ac3b3  MOV ECX,dword ptr [EBP + -0x34]
005ac3b6  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x8]
005ac3ba  CALL 0x005ec8f0
005ac3bf  PUSH 0xcc
005ac3c4  PUSH 0xff
005ac3c9  PUSH 0xff
005ac3ce  MOV EDX,dword ptr [EBP + -0x18]
005ac3d1  MOV EAX,dword ptr [EBP + -0x34]
005ac3d4  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x8]
005ac3d8  CALL 0x005ee8c0
005ac3dd  PUSH 0x178
005ac3e2  CALL 0x00686d82
005ac3e7  ADD ESP,0x4
005ac3ea  MOV dword ptr [EBP + -0x30],EAX
005ac3ed  MOV dword ptr [EBP + -0x4],0x2
005ac3f4  CMP dword ptr [EBP + -0x30],0x0
005ac3f8  JZ 0x005ac407
005ac3fa  MOV ECX,dword ptr [EBP + -0x30]
005ac3fd  CALL 0x005eaaf0
005ac402  MOV dword ptr [EBP + -0x40],EAX
005ac405  JMP 0x005ac40e
005ac407  MOV dword ptr [EBP + -0x40],0x0
005ac40e  MOV ECX,dword ptr [EBP + -0x40]
005ac411  MOV dword ptr [EBP + -0x2c],ECX
005ac414  MOV dword ptr [EBP + -0x4],0xffffffff
005ac41b  MOV EDX,dword ptr [EBP + -0x18]
005ac41e  MOV EAX,dword ptr [EBP + -0x34]
005ac421  MOV ECX,dword ptr [EBP + -0x2c]
005ac424  MOV dword ptr [EAX + EDX*0x4 + 0x18],ECX
005ac428  PUSH -0x1
005ac42a  PUSH 0x50
005ac42c  PUSH 0x0
005ac42e  PUSH 0x0
005ac430  PUSH 0x13b2
005ac435  MOV EDX,dword ptr [EBP + -0x18]
005ac438  MOV EAX,dword ptr [EBP + -0x34]
005ac43b  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x18]
005ac43f  CALL 0x005eae80
005ac444  JMP 0x005ac33d
005ac449  MOV ECX,dword ptr [EBP + -0xc]
005ac44c  MOV dword ptr FS:[0x0],ECX
005ac453  POP ECX
005ac454  MOV ESP,EBP
005ac456  POP EBP
005ac457  RET 0x4
