; FUN_00648f50  00648f50
00648f50  PUSH EBP
00648f51  MOV EBP,ESP
00648f53  PUSH -0x1
00648f55  PUSH 0x6abe87
00648f5a  MOV EAX,FS:[0x0]
00648f60  PUSH EAX
00648f61  SUB ESP,0xf8
00648f67  PUSH ESI
00648f68  MOV EAX,[0x00781870]
00648f6d  XOR EAX,EBP
00648f6f  PUSH EAX
00648f70  LEA EAX,[EBP + -0xc]
00648f73  MOV FS:[0x0],EAX
00648f79  MOV dword ptr [EBP + 0xffffff3c],ECX
00648f7f  MOV dword ptr [EBP + -0x38],0x0
00648f86  MOV EAX,dword ptr [EBP + 0xffffff3c]
00648f8c  MOV ECX,dword ptr [EAX + 0x20]
00648f8f  MOV EDX,dword ptr [ECX + 0x4]
00648f92  MOV dword ptr [EBP + -0x68],EDX
00648f95  MOV ECX,dword ptr [EBP + -0x68]
00648f98  CALL 0x0063aac0
00648f9d  MOV EAX,dword ptr [EAX]
00648f9f  MOV dword ptr [EBP + -0x64],EAX
00648fa2  XOR ECX,ECX
00648fa4  CMP dword ptr [EBP + -0x64],0x0
00648fa8  SETZ CL
00648fab  MOVZX EDX,CL
00648fae  TEST EDX,EDX
00648fb0  JZ 0x00648fb7
00648fb2  JMP 0x0064a6ee
00648fb7  MOV EAX,dword ptr [EBP + 0xffffff3c]
00648fbd  MOV ECX,dword ptr [EAX + 0x20]
00648fc0  MOV EDX,dword ptr [ECX + 0x18]
00648fc3  MOV EAX,dword ptr [EDX + 0x4]
00648fc6  CMP EAX,dword ptr [0x016306a4]
00648fcc  JZ 0x00648ff0
00648fce  MOV ECX,dword ptr [0x0162ee80]
00648fd4  MOV EDX,dword ptr [ECX]
00648fd6  MOV ECX,dword ptr [0x0162ee80]
00648fdc  MOV EAX,dword ptr [EDX + 0xa4]
00648fe2  CALL EAX
00648fe4  MOVZX ECX,AL
00648fe7  TEST ECX,ECX
00648fe9  JNZ 0x00648ff0
00648feb  JMP 0x0064a6ee
00648ff0  MOV EDX,dword ptr [EBP + 0xffffff3c]
00648ff6  MOV EAX,dword ptr [EDX + 0x20]
00648ff9  MOV ECX,dword ptr [EAX + 0x4]
00648ffc  MOV EDX,dword ptr [ECX + 0x8]
00648fff  MOV dword ptr [EBP + -0x34],EDX
00649002  MOV EAX,dword ptr [EBP + 0xffffff3c]
00649008  MOV ECX,dword ptr [EAX + 0x20]
0064900b  MOV EDX,dword ptr [ECX + 0xc]
0064900e  MOV dword ptr [EBP + -0x3c],EDX
00649011  MOV EAX,dword ptr [EBP + 0xffffff3c]
00649017  MOV ECX,dword ptr [EAX + 0x20]
0064901a  MOV EDX,dword ptr [ECX + 0x8]
0064901d  MOV dword ptr [EBP + -0x40],EDX
00649020  MOV ECX,dword ptr [EBP + 0xffffff3c]
00649026  CALL 0x005fc360
0064902b  MOV dword ptr [EBP + 0xffffff38],EAX
00649031  CMP dword ptr [EBP + 0xffffff38],0xf
00649038  JA 0x0064a6ee
0064903e  MOV EAX,dword ptr [EBP + 0xffffff38]
00649044  JMP dword ptr [EAX*0x4 + 0x64a700]
0064a6ee  MOV ECX,dword ptr [EBP + -0xc]
0064a6f1  MOV dword ptr FS:[0x0],ECX
0064a6f8  POP ECX
0064a6f9  POP ESI
0064a6fa  MOV ESP,EBP
0064a6fc  POP EBP
0064a6fd  RET
