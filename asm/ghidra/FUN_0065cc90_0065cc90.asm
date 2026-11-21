; FUN_0065cc90  0065cc90
0065cc90  PUSH EBP
0065cc91  MOV EBP,ESP
0065cc93  PUSH -0x1
0065cc95  PUSH 0x6ac7d0
0065cc9a  MOV EAX,FS:[0x0]
0065cca0  PUSH EAX
0065cca1  SUB ESP,0x10
0065cca4  MOV EAX,[0x00781870]
0065cca9  XOR EAX,EBP
0065ccab  PUSH EAX
0065ccac  LEA EAX,[EBP + -0xc]
0065ccaf  MOV FS:[0x0],EAX
0065ccb5  MOV dword ptr [EBP + -0x18],ECX
0065ccb8  MOV EAX,dword ptr [EBP + -0x18]
0065ccbb  MOV dword ptr [EAX],0x6de83c
0065ccc1  MOV dword ptr [EBP + -0x4],0x1
0065ccc8  MOV ECX,dword ptr [EBP + -0x18]
0065cccb  CMP dword ptr [ECX + 0x70],0x0
0065cccf  JZ 0x0065cd0a
0065ccd1  MOV EDX,dword ptr [EBP + -0x18]
0065ccd4  MOV EAX,dword ptr [EDX + 0x70]
0065ccd7  MOV dword ptr [EBP + -0x14],EAX
0065ccda  MOV ECX,dword ptr [EBP + -0x14]
0065ccdd  MOV dword ptr [EBP + -0x10],ECX
0065cce0  CMP dword ptr [EBP + -0x10],0x0
0065cce4  JZ 0x0065ccf9
0065cce6  PUSH 0x1
0065cce8  MOV EDX,dword ptr [EBP + -0x10]
0065cceb  MOV EAX,dword ptr [EDX]
0065cced  MOV ECX,dword ptr [EBP + -0x10]
0065ccf0  MOV EDX,dword ptr [EAX]
0065ccf2  CALL EDX
0065ccf4  MOV dword ptr [EBP + -0x1c],EAX
0065ccf7  JMP 0x0065cd00
0065ccf9  MOV dword ptr [EBP + -0x1c],0x0
0065cd00  MOV EAX,dword ptr [EBP + -0x18]
0065cd03  MOV dword ptr [EAX + 0x70],0x0
0065cd0a  MOV byte ptr [EBP + -0x4],0x0
0065cd0e  MOV ECX,dword ptr [EBP + -0x18]
0065cd11  ADD ECX,0x74
0065cd14  CALL 0x00663570
0065cd19  MOV dword ptr [EBP + -0x4],0xffffffff
0065cd20  MOV ECX,dword ptr [EBP + -0x18]
0065cd23  CALL 0x00614a10
0065cd28  MOV ECX,dword ptr [EBP + -0xc]
0065cd2b  MOV dword ptr FS:[0x0],ECX
0065cd32  POP ECX
0065cd33  MOV ESP,EBP
0065cd35  POP EBP
0065cd36  RET
