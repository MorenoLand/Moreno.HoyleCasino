; FUN_0066b970  0066b970
0066b970  PUSH EBP
0066b971  MOV EBP,ESP
0066b973  PUSH -0x1
0066b975  PUSH 0x6ace1b
0066b97a  MOV EAX,FS:[0x0]
0066b980  PUSH EAX
0066b981  SUB ESP,0x50
0066b984  MOV EAX,[0x00781870]
0066b989  XOR EAX,EBP
0066b98b  PUSH EAX
0066b98c  LEA EAX,[EBP + -0xc]
0066b98f  MOV FS:[0x0],EAX
0066b995  MOV dword ptr [EBP + -0x44],ECX
0066b998  MOV EAX,dword ptr [EBP + -0x44]
0066b99b  MOV dword ptr [EAX],0x6e079c
0066b9a1  MOV dword ptr [EBP + -0x4],0x0
0066b9a8  MOV dword ptr [0x016306c0],0x0
0066b9b2  MOV ECX,dword ptr [EBP + -0x44]
0066b9b5  CMP dword ptr [ECX + 0x60],0x0
0066b9b9  JZ 0x0066b9f4
0066b9bb  MOV EDX,dword ptr [EBP + -0x44]
0066b9be  MOV EAX,dword ptr [EDX + 0x60]
0066b9c1  MOV dword ptr [EBP + -0x14],EAX
0066b9c4  MOV ECX,dword ptr [EBP + -0x14]
0066b9c7  MOV dword ptr [EBP + -0x10],ECX
0066b9ca  CMP dword ptr [EBP + -0x10],0x0
0066b9ce  JZ 0x0066b9e3
0066b9d0  PUSH 0x1
0066b9d2  MOV EDX,dword ptr [EBP + -0x10]
0066b9d5  MOV EAX,dword ptr [EDX]
0066b9d7  MOV ECX,dword ptr [EBP + -0x10]
0066b9da  MOV EDX,dword ptr [EAX]
0066b9dc  CALL EDX
0066b9de  MOV dword ptr [EBP + -0x48],EAX
0066b9e1  JMP 0x0066b9ea
0066b9e3  MOV dword ptr [EBP + -0x48],0x0
0066b9ea  MOV EAX,dword ptr [EBP + -0x44]
0066b9ed  MOV dword ptr [EAX + 0x60],0x0
0066b9f4  MOV ECX,dword ptr [EBP + -0x44]
0066b9f7  MOV EDX,dword ptr [ECX + 0x64]
0066b9fa  MOV dword ptr [EBP + -0x1c],EDX
0066b9fd  MOV EAX,dword ptr [EBP + -0x1c]
0066ba00  MOV dword ptr [EBP + -0x18],EAX
0066ba03  CMP dword ptr [EBP + -0x18],0x0
0066ba07  JZ 0x0066ba1c
0066ba09  PUSH 0x1
0066ba0b  MOV ECX,dword ptr [EBP + -0x18]
0066ba0e  MOV EDX,dword ptr [ECX]
0066ba10  MOV ECX,dword ptr [EBP + -0x18]
0066ba13  MOV EAX,dword ptr [EDX]
0066ba15  CALL EAX
0066ba17  MOV dword ptr [EBP + -0x4c],EAX
0066ba1a  JMP 0x0066ba23
0066ba1c  MOV dword ptr [EBP + -0x4c],0x0
0066ba23  MOV ECX,dword ptr [EBP + -0x44]
0066ba26  MOV EDX,dword ptr [ECX + 0x68]
0066ba29  MOV dword ptr [EBP + -0x24],EDX
0066ba2c  MOV EAX,dword ptr [EBP + -0x24]
0066ba2f  MOV dword ptr [EBP + -0x20],EAX
0066ba32  CMP dword ptr [EBP + -0x20],0x0
0066ba36  JZ 0x0066ba4b
0066ba38  PUSH 0x1
0066ba3a  MOV ECX,dword ptr [EBP + -0x20]
0066ba3d  MOV EDX,dword ptr [ECX]
0066ba3f  MOV ECX,dword ptr [EBP + -0x20]
0066ba42  MOV EAX,dword ptr [EDX]
0066ba44  CALL EAX
0066ba46  MOV dword ptr [EBP + -0x50],EAX
0066ba49  JMP 0x0066ba52
0066ba4b  MOV dword ptr [EBP + -0x50],0x0
0066ba52  MOV ECX,dword ptr [EBP + -0x44]
0066ba55  MOV EDX,dword ptr [ECX + 0x6c]
0066ba58  MOV dword ptr [EBP + -0x2c],EDX
0066ba5b  MOV EAX,dword ptr [EBP + -0x2c]
0066ba5e  MOV dword ptr [EBP + -0x28],EAX
0066ba61  CMP dword ptr [EBP + -0x28],0x0
0066ba65  JZ 0x0066ba7a
0066ba67  PUSH 0x1
0066ba69  MOV ECX,dword ptr [EBP + -0x28]
0066ba6c  MOV EDX,dword ptr [ECX]
0066ba6e  MOV ECX,dword ptr [EBP + -0x28]
0066ba71  MOV EAX,dword ptr [EDX]
0066ba73  CALL EAX
0066ba75  MOV dword ptr [EBP + -0x54],EAX
0066ba78  JMP 0x0066ba81
0066ba7a  MOV dword ptr [EBP + -0x54],0x0
0066ba81  MOV ECX,dword ptr [EBP + -0x44]
0066ba84  MOV EDX,dword ptr [ECX + 0x70]
0066ba87  MOV dword ptr [EBP + -0x34],EDX
0066ba8a  MOV EAX,dword ptr [EBP + -0x34]
0066ba8d  MOV dword ptr [EBP + -0x30],EAX
0066ba90  CMP dword ptr [EBP + -0x30],0x0
0066ba94  JZ 0x0066baa9
0066ba96  PUSH 0x1
0066ba98  MOV ECX,dword ptr [EBP + -0x30]
0066ba9b  MOV EDX,dword ptr [ECX]
0066ba9d  MOV ECX,dword ptr [EBP + -0x30]
0066baa0  MOV EAX,dword ptr [EDX]
0066baa2  CALL EAX
0066baa4  MOV dword ptr [EBP + -0x58],EAX
0066baa7  JMP 0x0066bab0
0066baa9  MOV dword ptr [EBP + -0x58],0x0
0066bab0  MOV ECX,dword ptr [EBP + -0x44]
0066bab3  MOV EDX,dword ptr [ECX + 0x5c]
0066bab6  MOV dword ptr [EBP + -0x38],EDX
0066bab9  MOV EAX,dword ptr [EBP + -0x38]
0066babc  PUSH EAX
0066babd  CALL 0x00686cae
0066bac2  ADD ESP,0x4
0066bac5  MOV ECX,dword ptr [EBP + -0x44]
0066bac8  CMP dword ptr [ECX + 0x74],0x0
0066bacc  JZ 0x0066bb1a
0066bace  MOV EDX,dword ptr [EBP + -0x44]
0066bad1  MOV EAX,dword ptr [EDX + 0x74]
0066bad4  MOV ECX,dword ptr [EBP + -0x44]
0066bad7  MOV ECX,dword ptr [ECX + 0x74]
0066bada  MOV EDX,dword ptr [EAX]
0066badc  MOV EAX,dword ptr [EDX + 0x70]
0066badf  CALL EAX
0066bae1  MOV ECX,dword ptr [EBP + -0x44]
0066bae4  MOV EDX,dword ptr [ECX + 0x74]
0066bae7  MOV dword ptr [EBP + -0x40],EDX
0066baea  MOV EAX,dword ptr [EBP + -0x40]
0066baed  MOV dword ptr [EBP + -0x3c],EAX
0066baf0  CMP dword ptr [EBP + -0x3c],0x0
0066baf4  JZ 0x0066bb09
0066baf6  PUSH 0x1
0066baf8  MOV ECX,dword ptr [EBP + -0x3c]
0066bafb  MOV EDX,dword ptr [ECX]
0066bafd  MOV ECX,dword ptr [EBP + -0x3c]
0066bb00  MOV EAX,dword ptr [EDX]
0066bb02  CALL EAX
0066bb04  MOV dword ptr [EBP + -0x5c],EAX
0066bb07  JMP 0x0066bb10
0066bb09  MOV dword ptr [EBP + -0x5c],0x0
0066bb10  MOV ECX,dword ptr [EBP + -0x44]
0066bb13  MOV dword ptr [ECX + 0x74],0x0
0066bb1a  MOV dword ptr [EBP + -0x4],0xffffffff
0066bb21  MOV ECX,dword ptr [EBP + -0x44]
0066bb24  CALL 0x0064cc80
0066bb29  MOV ECX,dword ptr [EBP + -0xc]
0066bb2c  MOV dword ptr FS:[0x0],ECX
0066bb33  POP ECX
0066bb34  MOV ESP,EBP
0066bb36  POP EBP
0066bb37  RET
