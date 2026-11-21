; FUN_0064ba60  0064ba60
0064ba60  PUSH EBP
0064ba61  MOV EBP,ESP
0064ba63  PUSH -0x1
0064ba65  PUSH 0x6abfa9
0064ba6a  MOV EAX,FS:[0x0]
0064ba70  PUSH EAX
0064ba71  SUB ESP,0x1c
0064ba74  MOV EAX,[0x00781870]
0064ba79  XOR EAX,EBP
0064ba7b  PUSH EAX
0064ba7c  LEA EAX,[EBP + -0xc]
0064ba7f  MOV FS:[0x0],EAX
0064ba85  MOV dword ptr [EBP + -0x20],ECX
0064ba88  PUSH -0x1
0064ba8a  MOV EAX,dword ptr [EBP + -0x20]
0064ba8d  MOV ECX,dword ptr [EAX + 0x178]
0064ba93  CALL 0x005f53c0
0064ba98  ADD EAX,0x5
0064ba9b  PUSH EAX
0064ba9c  PUSH 0x0
0064ba9e  PUSH 0x0
0064baa0  MOV ECX,dword ptr [EBP + 0x8]
0064baa3  PUSH ECX
0064baa4  MOV ECX,dword ptr [EBP + -0x20]
0064baa7  CALL 0x005eae80
0064baac  CMP dword ptr [EBP + 0xc],0x0
0064bab0  JZ 0x0064bba3
0064bab6  PUSH 0x5c
0064bab8  CALL 0x00686d82
0064babd  ADD ESP,0x4
0064bac0  MOV dword ptr [EBP + -0x14],EAX
0064bac3  MOV dword ptr [EBP + -0x4],0x0
0064baca  CMP dword ptr [EBP + -0x14],0x0
0064bace  JZ 0x0064badd
0064bad0  MOV ECX,dword ptr [EBP + -0x14]
0064bad3  CALL 0x005f6130
0064bad8  MOV dword ptr [EBP + -0x24],EAX
0064badb  JMP 0x0064bae4
0064badd  MOV dword ptr [EBP + -0x24],0x0
0064bae4  MOV EDX,dword ptr [EBP + -0x24]
0064bae7  MOV dword ptr [EBP + -0x10],EDX
0064baea  MOV dword ptr [EBP + -0x4],0xffffffff
0064baf1  MOV EAX,dword ptr [EBP + -0x20]
0064baf4  MOV ECX,dword ptr [EBP + -0x10]
0064baf7  MOV dword ptr [EAX + 0x17c],ECX
0064bafd  PUSH -0x1
0064baff  PUSH 0x3e8
0064bb04  PUSH 0x0
0064bb06  PUSH 0x0
0064bb08  PUSH 0x0
0064bb0a  PUSH 0x0
0064bb0c  MOV EDX,dword ptr [EBP + -0x20]
0064bb0f  MOV ECX,dword ptr [EDX + 0x17c]
0064bb15  CALL 0x005f61d0
0064bb1a  PUSH 0xc7
0064bb1f  PUSH 0xf8
0064bb24  PUSH 0xfc
0064bb29  MOV EAX,dword ptr [EBP + -0x20]
0064bb2c  MOV ECX,dword ptr [EAX + 0x17c]
0064bb32  CALL 0x005f6580
0064bb37  PUSH 0x1d0
0064bb3c  CALL 0x00686d82
0064bb41  ADD ESP,0x4
0064bb44  MOV dword ptr [EBP + -0x1c],EAX
0064bb47  MOV dword ptr [EBP + -0x4],0x1
0064bb4e  CMP dword ptr [EBP + -0x1c],0x0
0064bb52  JZ 0x0064bb61
0064bb54  MOV ECX,dword ptr [EBP + -0x1c]
0064bb57  CALL 0x005ec5a0
0064bb5c  MOV dword ptr [EBP + -0x28],EAX
0064bb5f  JMP 0x0064bb68
0064bb61  MOV dword ptr [EBP + -0x28],0x0
0064bb68  MOV ECX,dword ptr [EBP + -0x28]
0064bb6b  MOV dword ptr [EBP + -0x18],ECX
0064bb6e  MOV dword ptr [EBP + -0x4],0xffffffff
0064bb75  MOV EDX,dword ptr [EBP + -0x20]
0064bb78  MOV EAX,dword ptr [EBP + -0x18]
0064bb7b  MOV dword ptr [EDX + 0x180],EAX
0064bb81  PUSH -0x1
0064bb83  PUSH 0x30
0064bb85  PUSH 0x4
0064bb87  PUSH 0x0
0064bb89  PUSH 0x0
0064bb8b  PUSH 0x0
0064bb8d  PUSH 0x0
0064bb8f  PUSH 0x4
0064bb91  MOV ECX,dword ptr [EBP + 0xc]
0064bb94  PUSH ECX
0064bb95  MOV EDX,dword ptr [EBP + -0x20]
0064bb98  MOV ECX,dword ptr [EDX + 0x180]
0064bb9e  CALL 0x005ec8f0
0064bba3  MOV EAX,dword ptr [EBP + -0x20]
0064bba6  MOV EDX,dword ptr [EAX]
0064bba8  MOV ECX,dword ptr [EBP + -0x20]
0064bbab  MOV EAX,dword ptr [EDX + 0x70]
0064bbae  CALL EAX
0064bbb0  MOV ECX,dword ptr [EBP + -0xc]
0064bbb3  MOV dword ptr FS:[0x0],ECX
0064bbba  POP ECX
0064bbbb  MOV ESP,EBP
0064bbbd  POP EBP
0064bbbe  RET 0x8
