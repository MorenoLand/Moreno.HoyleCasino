; FUN_0043fe60  0043fe60
0043fe60  PUSH EBP
0043fe61  MOV EBP,ESP
0043fe63  SUB ESP,0x4c
0043fe66  MOV EAX,[0x00781870]
0043fe6b  XOR EAX,EBP
0043fe6d  MOV dword ptr [EBP + -0x8],EAX
0043fe70  MOV dword ptr [EBP + -0x4c],ECX
0043fe73  PUSH 0x0
0043fe75  PUSH 0x0
0043fe77  CALL 0x0064c8a0
0043fe7c  ADD ESP,0x8
0043fe7f  MOV dword ptr [EBP + -0x34],EAX
0043fe82  MOV dword ptr [EBP + -0x30],EDX
0043fe85  MOV EAX,dword ptr [EBP + -0x34]
0043fe88  MOV dword ptr [EBP + -0x2c],EAX
0043fe8b  MOV ECX,dword ptr [EBP + -0x30]
0043fe8e  MOV dword ptr [EBP + -0x28],ECX
0043fe91  MOV dword ptr [EBP + -0x4],0x0
0043fe98  JMP 0x0043fea3
0043fe9a  MOV EDX,dword ptr [EBP + -0x4]
0043fe9d  ADD EDX,0x1
0043fea0  MOV dword ptr [EBP + -0x4],EDX
0043fea3  CMP dword ptr [EBP + -0x4],0x5
0043fea7  JGE 0x0043ff95
0043fead  MOV EAX,dword ptr [EBP + -0x4]
0043feb0  IMUL EAX,EAX,0x78
0043feb3  MOV ECX,dword ptr [0x007906f0]
0043feb9  MOV EDX,dword ptr [ECX + EAX*0x1 + 0x44]
0043febd  MOV dword ptr [EBP + -0x38],EDX
0043fec0  CMP dword ptr [EBP + -0x38],-0x1
0043fec4  JZ 0x0043ff73
0043feca  MOV EAX,dword ptr [EBP + -0x4]
0043fecd  PUSH EAX
0043fece  MOV ECX,dword ptr [0x007906f0]
0043fed4  CALL 0x00445a00
0043fed9  TEST EAX,EAX
0043fedb  JZ 0x0043ff73
0043fee1  MOV ECX,dword ptr [EBP + -0x4]
0043fee4  MOV EDX,dword ptr [EBP + -0x4c]
0043fee7  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x20]
0043feeb  MOV ECX,dword ptr [EBP + -0x4]
0043feee  MOV EDX,dword ptr [EBP + -0x4c]
0043fef1  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x20]
0043fef5  MOV EAX,dword ptr [EAX]
0043fef7  MOV EDX,dword ptr [EAX + 0x74]
0043fefa  CALL EDX
0043fefc  MOV EAX,dword ptr [EBP + -0x4]
0043feff  IMUL EAX,EAX,0x78
0043ff02  MOV ECX,dword ptr [0x007906f0]
0043ff08  MOV EDX,dword ptr [ECX + EAX*0x1 + 0x44]
0043ff0c  MOV dword ptr [EBP + -0x3c],EDX
0043ff0f  MOV EAX,dword ptr [EBP + -0x4]
0043ff12  IMUL EAX,EAX,0x78
0043ff15  MOV ECX,dword ptr [0x007906f0]
0043ff1b  LEA EDX,[ECX + EAX*0x1 + 0x4]
0043ff1f  MOV EAX,dword ptr [EBP + -0x3c]
0043ff22  MOV ECX,dword ptr [EDX + EAX*0x8 + 0x4c]
0043ff26  MOV dword ptr [EBP + -0x40],ECX
0043ff29  MOV EDX,dword ptr [EBP + -0x4]
0043ff2c  IMUL EDX,EDX,0x78
0043ff2f  MOV EAX,[0x007906f0]
0043ff34  MOV ECX,dword ptr [EAX + EDX*0x1 + 0x44]
0043ff38  MOV dword ptr [EBP + -0x44],ECX
0043ff3b  MOV EDX,dword ptr [EBP + -0x4]
0043ff3e  IMUL EDX,EDX,0x78
0043ff41  MOV EAX,[0x007906f0]
0043ff46  LEA ECX,[EAX + EDX*0x1 + 0x4]
0043ff4a  MOV EDX,dword ptr [EBP + -0x44]
0043ff4d  MOV EAX,dword ptr [ECX + EDX*0x8 + 0x50]
0043ff51  MOV dword ptr [EBP + -0x48],EAX
0043ff54  MOV ECX,dword ptr [EBP + -0x4]
0043ff57  PUSH ECX
0043ff58  MOV ECX,dword ptr [0x007906f0]
0043ff5e  CALL 0x00445a00
0043ff63  IMUL EAX,dword ptr [EBP + -0x40]
0043ff67  CDQ
0043ff68  IDIV dword ptr [EBP + -0x48]
0043ff6b  ADD EAX,dword ptr [EBP + -0x2c]
0043ff6e  MOV dword ptr [EBP + -0x2c],EAX
0043ff71  JMP 0x0043ff90
0043ff73  MOV EDX,dword ptr [EBP + -0x4]
0043ff76  MOV EAX,dword ptr [EBP + -0x4c]
0043ff79  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x20]
0043ff7d  MOV EDX,dword ptr [EBP + -0x4]
0043ff80  MOV EAX,dword ptr [EBP + -0x4c]
0043ff83  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x20]
0043ff87  MOV EAX,dword ptr [ECX]
0043ff89  MOV ECX,EDX
0043ff8b  MOV EDX,dword ptr [EAX + 0x70]
0043ff8e  CALL EDX
0043ff90  JMP 0x0043fe9a
0043ff95  CMP dword ptr [EBP + -0x2c],0x0
0043ff99  JZ 0x0043fff0
0043ff9b  PUSH 0x1
0043ff9d  PUSH 0x1
0043ff9f  PUSH 0x1
0043ffa1  LEA EAX,[EBP + -0x24]
0043ffa4  PUSH EAX
0043ffa5  MOV ECX,dword ptr [EBP + -0x28]
0043ffa8  PUSH ECX
0043ffa9  MOV EDX,dword ptr [EBP + -0x2c]
0043ffac  PUSH EDX
0043ffad  CALL 0x0064c8d0
0043ffb2  ADD ESP,0x18
0043ffb5  LEA EAX,[EBP + -0x24]
0043ffb8  PUSH EAX
0043ffb9  MOV ECX,dword ptr [EBP + -0x4c]
0043ffbc  MOV EDX,dword ptr [ECX + 0x9c]
0043ffc2  MOV EAX,dword ptr [EBP + -0x4c]
0043ffc5  MOV ECX,dword ptr [EAX + 0x9c]
0043ffcb  MOV EDX,dword ptr [EDX]
0043ffcd  MOV EAX,dword ptr [EDX + 0xb4]
0043ffd3  CALL EAX
0043ffd5  MOV ECX,dword ptr [EBP + -0x4c]
0043ffd8  MOV EDX,dword ptr [ECX + 0x9c]
0043ffde  MOV EAX,dword ptr [EBP + -0x4c]
0043ffe1  MOV ECX,dword ptr [EAX + 0x9c]
0043ffe7  MOV EDX,dword ptr [EDX]
0043ffe9  MOV EAX,dword ptr [EDX + 0x74]
0043ffec  CALL EAX
0043ffee  JMP 0x00440009
0043fff0  MOV ECX,dword ptr [EBP + -0x4c]
0043fff3  MOV EDX,dword ptr [ECX + 0x9c]
0043fff9  MOV EAX,dword ptr [EBP + -0x4c]
0043fffc  MOV ECX,dword ptr [EAX + 0x9c]
00440002  MOV EDX,dword ptr [EDX]
00440004  MOV EAX,dword ptr [EDX + 0x70]
00440007  CALL EAX
00440009  MOV ECX,dword ptr [EBP + -0x8]
0044000c  XOR ECX,EBP
0044000e  CALL 0x00686d72
00440013  MOV ESP,EBP
00440015  POP EBP
00440016  RET
