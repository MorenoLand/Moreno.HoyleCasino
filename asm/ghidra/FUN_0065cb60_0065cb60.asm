; FUN_0065cb60  0065cb60
0065cb60  PUSH EBP
0065cb61  MOV EBP,ESP
0065cb63  PUSH -0x1
0065cb65  PUSH 0x6ac7a2
0065cb6a  MOV EAX,FS:[0x0]
0065cb70  PUSH EAX
0065cb71  SUB ESP,0x8
0065cb74  MOV EAX,[0x00781870]
0065cb79  XOR EAX,EBP
0065cb7b  PUSH EAX
0065cb7c  LEA EAX,[EBP + -0xc]
0065cb7f  MOV FS:[0x0],EAX
0065cb85  MOV dword ptr [EBP + -0x14],ECX
0065cb88  MOV ECX,dword ptr [EBP + -0x14]
0065cb8b  CALL 0x00614810
0065cb90  MOV dword ptr [EBP + -0x4],0x0
0065cb97  MOV EAX,dword ptr [EBP + -0x14]
0065cb9a  MOV dword ptr [EAX],0x6de83c
0065cba0  MOV ECX,dword ptr [EBP + -0x14]
0065cba3  ADD ECX,0x74
0065cba6  CALL 0x00663500
0065cbab  MOV byte ptr [EBP + -0x4],0x1
0065cbaf  MOV ECX,dword ptr [EBP + -0x14]
0065cbb2  MOV EDX,dword ptr [EBP + 0x8]
0065cbb5  MOV dword ptr [ECX + 0x8c],EDX
0065cbbb  MOV EAX,[0x0162ee84]
0065cbc0  MOV EDX,dword ptr [EAX]
0065cbc2  MOV ECX,dword ptr [0x0162ee84]
0065cbc8  MOV EAX,dword ptr [EDX + 0x31c]
0065cbce  CALL EAX
0065cbd0  MOV ECX,dword ptr [EBP + -0x14]
0065cbd3  MOV dword ptr [ECX + 0x70],EAX
0065cbd6  PUSH 0x0
0065cbd8  PUSH -0x1
0065cbda  MOV EDX,dword ptr [EBP + -0x14]
0065cbdd  MOV ECX,dword ptr [EDX + 0x70]
0065cbe0  CALL 0x0063a3e0
0065cbe5  PUSH 0x0
0065cbe7  PUSH 0x0
0065cbe9  PUSH 0x0
0065cbeb  MOV EAX,dword ptr [EBP + 0x8]
0065cbee  PUSH EAX
0065cbef  PUSH -0x1
0065cbf1  MOV ECX,dword ptr [EBP + -0x14]
0065cbf4  MOV ECX,dword ptr [ECX + 0x70]
0065cbf7  CALL 0x0063a8d0
0065cbfc  MOV EDX,dword ptr [EBP + -0x14]
0065cbff  MOV EAX,dword ptr [EDX + 0x70]
0065cc02  MOV dword ptr [EBP + -0x10],EAX
0065cc05  MOV ECX,dword ptr [EBP + -0x10]
0065cc08  CALL 0x0063aac0
0065cc0d  MOV dword ptr [EAX],0x3
0065cc13  MOV ECX,dword ptr [EBP + -0x14]
0065cc16  MOV EDX,dword ptr [ECX + 0x8c]
0065cc1c  MOV EAX,dword ptr [EBP + -0x14]
0065cc1f  MOV ECX,dword ptr [EAX + 0x8c]
0065cc25  MOV EDX,dword ptr [EDX]
0065cc27  MOV EAX,dword ptr [EDX + 0x78]
0065cc2a  CALL EAX
0065cc2c  ADD EAX,0x18
0065cc2f  PUSH EAX
0065cc30  MOV ECX,dword ptr [EBP + -0x14]
0065cc33  MOV EDX,dword ptr [ECX + 0x8c]
0065cc39  MOV EAX,dword ptr [EBP + -0x14]
0065cc3c  MOV ECX,dword ptr [EAX + 0x8c]
0065cc42  MOV EDX,dword ptr [EDX]
0065cc44  MOV EAX,dword ptr [EDX + 0x74]
0065cc47  CALL EAX
0065cc49  ADD EAX,0x1c
0065cc4c  PUSH EAX
0065cc4d  MOV ECX,dword ptr [EBP + -0x14]
0065cc50  MOV EDX,dword ptr [ECX + 0x70]
0065cc53  MOV ECX,dword ptr [EDX + 0x20]
0065cc56  CALL 0x00646150
0065cc5b  MOV ECX,dword ptr [EBP + -0x14]
0065cc5e  ADD ECX,0x74
0065cc61  CALL 0x00663a30
0065cc66  MOV dword ptr [EBP + -0x4],0xffffffff
0065cc6d  MOV EAX,dword ptr [EBP + -0x14]
0065cc70  MOV ECX,dword ptr [EBP + -0xc]
0065cc73  MOV dword ptr FS:[0x0],ECX
0065cc7a  POP ECX
0065cc7b  MOV ESP,EBP
0065cc7d  POP EBP
0065cc7e  RET 0x4
