; FUN_0062caa0  0062caa0
0062caa0  PUSH EBP
0062caa1  MOV EBP,ESP
0062caa3  SUB ESP,0xac
0062caa9  MOV EAX,[0x00781870]
0062caae  XOR EAX,EBP
0062cab0  MOV dword ptr [EBP + -0x10],EAX
0062cab3  MOV dword ptr [EBP + 0xffffff54],ECX
0062cab9  MOV dword ptr [EBP + -0xc],0x0
0062cac0  MOV dword ptr [EBP + 0xffffff60],0x0
0062caca  MOV EAX,dword ptr [EBP + 0xffffff54]
0062cad0  CMP dword ptr [EAX + 0x8],0x0
0062cad4  JZ 0x0062caf6
0062cad6  XOR ECX,ECX
0062cad8  JNZ 0x0062caf1
0062cada  PUSH 0x326
0062cadf  PUSH 0x6d974c
0062cae4  PUSH 0x6b2f58
0062cae9  CALL 0x005e9f20
0062caee  ADD ESP,0xc
0062caf1  JMP 0x0062ccd6
0062caf6  MOV dword ptr [EBP + -0x8],0x0
0062cafd  JMP 0x0062cb08
0062caff  MOV EAX,dword ptr [EBP + -0x8]
0062cb02  ADD EAX,0x1
0062cb05  MOV dword ptr [EBP + -0x8],EAX
0062cb08  MOV ECX,dword ptr [EBP + 0xffffff54]
0062cb0e  MOV EDX,dword ptr [ECX + 0x14]
0062cb11  MOV EAX,dword ptr [EBP + -0x8]
0062cb14  CMP EAX,dword ptr [EDX]
0062cb16  JNC 0x0062ccd6
0062cb1c  MOV ECX,dword ptr [EBP + 0xffffff54]
0062cb22  MOV EDX,dword ptr [ECX + 0x14]
0062cb25  MOV EAX,dword ptr [EBP + -0x8]
0062cb28  SHL EAX,0x4
0062cb2b  LEA ECX,[EDX + EAX*0x1 + 0x8]
0062cb2f  MOV dword ptr [EBP + 0xffffff68],ECX
0062cb35  MOV dword ptr [EBP + 0xffffff5c],0x0
0062cb3f  MOV EDX,dword ptr [EBP + 0xffffff5c]
0062cb45  CMP dword ptr [EDX*0x4 + 0x761f44],0x0
0062cb4d  JZ 0x0062cb77
0062cb4f  MOV EAX,dword ptr [EBP + 0xffffff68]
0062cb55  MOV ECX,dword ptr [EBP + 0xffffff5c]
0062cb5b  MOV EDX,dword ptr [EAX]
0062cb5d  CMP EDX,dword ptr [ECX*0x4 + 0x761f1c]
0062cb64  JZ 0x0062cb77
0062cb66  MOV EAX,dword ptr [EBP + 0xffffff5c]
0062cb6c  ADD EAX,0x1
0062cb6f  MOV dword ptr [EBP + 0xffffff5c],EAX
0062cb75  JMP 0x0062cb3f
0062cb77  MOV ECX,dword ptr [EBP + 0xffffff5c]
0062cb7d  CMP dword ptr [ECX*0x4 + 0x761f44],0x0
0062cb85  JZ 0x0062ccd1
0062cb8b  MOV EDX,dword ptr [EBP + 0xffffff5c]
0062cb91  MOV EAX,dword ptr [EDX*0x4 + 0x761f44]
0062cb98  PUSH EAX
0062cb99  MOV ECX,dword ptr [EBP + 0xffffff68]
0062cb9f  MOV EDX,dword ptr [ECX + 0x4]
0062cba2  PUSH EDX
0062cba3  PUSH 0x6d97b0
0062cba8  LEA EAX,[EBP + 0xffffff70]
0062cbae  PUSH EAX
0062cbaf  CALL dword ptr [0x006b2220]
0062cbb5  ADD ESP,0x10
0062cbb8  PUSH 0x6c2d2c
0062cbbd  LEA ECX,[EBP + 0xffffff70]
0062cbc3  PUSH ECX
0062cbc4  CALL 0x005ea9c0
0062cbc9  ADD ESP,0x8
0062cbcc  MOV dword ptr [EBP + -0x4],EAX
0062cbcf  CMP dword ptr [EBP + -0x4],0x0
0062cbd3  JZ 0x0062ccd1
0062cbd9  LEA EDX,[EBP + 0xffffff70]
0062cbdf  PUSH EDX
0062cbe0  CALL 0x0062fde0
0062cbe5  ADD ESP,0x4
0062cbe8  PUSH 0x6bedd8
0062cbed  CALL 0x0062fde0
0062cbf2  ADD ESP,0x4
0062cbf5  LEA EAX,[EBP + 0xffffff60]
0062cbfb  PUSH EAX
0062cbfc  LEA ECX,[EBP + -0xc]
0062cbff  PUSH ECX
0062cc00  MOV EDX,dword ptr [EBP + 0xffffff68]
0062cc06  MOV EAX,dword ptr [EDX + 0x4]
0062cc09  PUSH EAX
0062cc0a  MOV ECX,dword ptr [EBP + 0xffffff68]
0062cc10  MOV EDX,dword ptr [ECX]
0062cc12  PUSH EDX
0062cc13  MOV ECX,dword ptr [EBP + 0xffffff54]
0062cc19  CALL 0x0062b220
0062cc1e  MOV EAX,dword ptr [EBP + 0xffffff68]
0062cc24  CMP dword ptr [EAX],0x434e5953
0062cc2a  JNZ 0x0062cc92
0062cc2c  MOV ECX,dword ptr [EBP + -0xc]
0062cc2f  MOV dword ptr [EBP + 0xffffff64],ECX
0062cc35  MOV dword ptr [EBP + 0xffffff6c],0x0
0062cc3f  JMP 0x0062cc50
0062cc41  MOV EDX,dword ptr [EBP + 0xffffff6c]
0062cc47  ADD EDX,0x2
0062cc4a  MOV dword ptr [EBP + 0xffffff6c],EDX
0062cc50  MOV EAX,dword ptr [EBP + 0xffffff6c]
0062cc56  CMP EAX,dword ptr [EBP + 0xffffff60]
0062cc5c  JGE 0x0062cc92
0062cc5e  MOV ECX,dword ptr [EBP + 0xffffff64]
0062cc64  MOVZX EDX,word ptr [ECX]
0062cc67  SHL EDX,0x8
0062cc6a  MOV EAX,dword ptr [EBP + 0xffffff64]
0062cc70  MOVZX ECX,word ptr [EAX]
0062cc73  SAR ECX,0x8
0062cc76  OR EDX,ECX
0062cc78  MOV EAX,dword ptr [EBP + 0xffffff64]
0062cc7e  MOV word ptr [EAX],DX
0062cc81  MOV ECX,dword ptr [EBP + 0xffffff64]
0062cc87  ADD ECX,0x2
0062cc8a  MOV dword ptr [EBP + 0xffffff64],ECX
0062cc90  JMP 0x0062cc41
0062cc92  MOV EDX,dword ptr [EBP + -0x4]
0062cc95  PUSH EDX
0062cc96  PUSH 0x1
0062cc98  MOV EAX,dword ptr [EBP + 0xffffff60]
0062cc9e  PUSH EAX
0062cc9f  MOV ECX,dword ptr [EBP + -0xc]
0062cca2  PUSH ECX
0062cca3  CALL dword ptr [0x006b2260]
0062cca9  ADD ESP,0x10
0062ccac  MOV EDX,dword ptr [EBP + -0xc]
0062ccaf  MOV dword ptr [EBP + 0xffffff58],EDX
0062ccb5  MOV EAX,dword ptr [EBP + 0xffffff58]
0062ccbb  PUSH EAX
0062ccbc  CALL 0x00686cae
0062ccc1  ADD ESP,0x4
0062ccc4  MOV ECX,dword ptr [EBP + -0x4]
0062ccc7  PUSH ECX
0062ccc8  CALL dword ptr [0x006b2258]
0062ccce  ADD ESP,0x4
0062ccd1  JMP 0x0062caff
0062ccd6  MOV ECX,dword ptr [EBP + -0x10]
0062ccd9  XOR ECX,EBP
0062ccdb  CALL 0x00686d72
0062cce0  MOV ESP,EBP
0062cce2  POP EBP
0062cce3  RET
