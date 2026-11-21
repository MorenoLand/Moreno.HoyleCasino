; FUN_0041fde0  0041fde0
0041fde0  PUSH EBP
0041fde1  MOV EBP,ESP
0041fde3  PUSH -0x1
0041fde5  PUSH 0x69e006
0041fdea  MOV EAX,FS:[0x0]
0041fdf0  PUSH EAX
0041fdf1  SUB ESP,0x2c
0041fdf4  MOV EAX,[0x00781870]
0041fdf9  XOR EAX,EBP
0041fdfb  PUSH EAX
0041fdfc  LEA EAX,[EBP + -0xc]
0041fdff  MOV FS:[0x0],EAX
0041fe05  MOV dword ptr [EBP + -0x2c],ECX
0041fe08  MOV EAX,dword ptr [EBP + -0x2c]
0041fe0b  MOV dword ptr [EAX],0x6b5dd4
0041fe11  MOV dword ptr [EBP + -0x4],0x0
0041fe18  MOV dword ptr [EBP + -0x10],0x0
0041fe1f  JMP 0x0041fe2a
0041fe21  MOV ECX,dword ptr [EBP + -0x10]
0041fe24  ADD ECX,0x1
0041fe27  MOV dword ptr [EBP + -0x10],ECX
0041fe2a  CMP dword ptr [EBP + -0x10],0x5
0041fe2e  JGE 0x0041fe65
0041fe30  MOV EDX,dword ptr [EBP + -0x10]
0041fe33  MOV EAX,dword ptr [EBP + -0x2c]
0041fe36  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x8]
0041fe3a  MOV dword ptr [EBP + -0x18],ECX
0041fe3d  MOV EDX,dword ptr [EBP + -0x18]
0041fe40  MOV dword ptr [EBP + -0x14],EDX
0041fe43  CMP dword ptr [EBP + -0x14],0x0
0041fe47  JZ 0x0041fe5c
0041fe49  PUSH 0x1
0041fe4b  MOV EAX,dword ptr [EBP + -0x14]
0041fe4e  MOV EDX,dword ptr [EAX]
0041fe50  MOV ECX,dword ptr [EBP + -0x14]
0041fe53  MOV EAX,dword ptr [EDX]
0041fe55  CALL EAX
0041fe57  MOV dword ptr [EBP + -0x30],EAX
0041fe5a  JMP 0x0041fe63
0041fe5c  MOV dword ptr [EBP + -0x30],0x0
0041fe63  JMP 0x0041fe21
0041fe65  MOV ECX,dword ptr [EBP + -0x2c]
0041fe68  MOV EDX,dword ptr [ECX + 0x1c]
0041fe6b  MOV dword ptr [EBP + -0x20],EDX
0041fe6e  MOV EAX,dword ptr [EBP + -0x20]
0041fe71  MOV dword ptr [EBP + -0x1c],EAX
0041fe74  CMP dword ptr [EBP + -0x1c],0x0
0041fe78  JZ 0x0041fe8d
0041fe7a  PUSH 0x1
0041fe7c  MOV ECX,dword ptr [EBP + -0x1c]
0041fe7f  MOV EDX,dword ptr [ECX]
0041fe81  MOV ECX,dword ptr [EBP + -0x1c]
0041fe84  MOV EAX,dword ptr [EDX]
0041fe86  CALL EAX
0041fe88  MOV dword ptr [EBP + -0x34],EAX
0041fe8b  JMP 0x0041fe94
0041fe8d  MOV dword ptr [EBP + -0x34],0x0
0041fe94  MOV ECX,dword ptr [EBP + -0x2c]
0041fe97  MOV EDX,dword ptr [ECX + 0x20]
0041fe9a  MOV dword ptr [EBP + -0x28],EDX
0041fe9d  MOV EAX,dword ptr [EBP + -0x28]
0041fea0  MOV dword ptr [EBP + -0x24],EAX
0041fea3  CMP dword ptr [EBP + -0x24],0x0
0041fea7  JZ 0x0041febc
0041fea9  PUSH 0x1
0041feab  MOV ECX,dword ptr [EBP + -0x24]
0041feae  MOV EDX,dword ptr [ECX]
0041feb0  MOV ECX,dword ptr [EBP + -0x24]
0041feb3  MOV EAX,dword ptr [EDX]
0041feb5  CALL EAX
0041feb7  MOV dword ptr [EBP + -0x38],EAX
0041feba  JMP 0x0041fec3
0041febc  MOV dword ptr [EBP + -0x38],0x0
0041fec3  MOV dword ptr [EBP + -0x4],0xffffffff
0041feca  MOV ECX,dword ptr [EBP + -0x2c]
0041fecd  CALL 0x005e9e40
0041fed2  MOV ECX,dword ptr [EBP + -0xc]
0041fed5  MOV dword ptr FS:[0x0],ECX
0041fedc  POP ECX
0041fedd  MOV ESP,EBP
0041fedf  POP EBP
0041fee0  RET
