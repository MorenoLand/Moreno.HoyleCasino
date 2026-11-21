; FUN_0045d290  0045d290
0045d290  PUSH EBP
0045d291  MOV EBP,ESP
0045d293  PUSH -0x1
0045d295  PUSH 0x69f26b
0045d29a  MOV EAX,FS:[0x0]
0045d2a0  PUSH EAX
0045d2a1  SUB ESP,0x34
0045d2a4  MOV EAX,[0x00781870]
0045d2a9  XOR EAX,EBP
0045d2ab  PUSH EAX
0045d2ac  LEA EAX,[EBP + -0xc]
0045d2af  MOV FS:[0x0],EAX
0045d2b5  MOV dword ptr [EBP + -0x30],ECX
0045d2b8  MOV EAX,dword ptr [EBP + -0x30]
0045d2bb  MOV dword ptr [EAX],0x6b9b94
0045d2c1  MOV dword ptr [EBP + -0x4],0x0
0045d2c8  MOV dword ptr [0x00790734],0x0
0045d2d2  MOV ECX,dword ptr [0x00790738]
0045d2d8  MOV dword ptr [EBP + -0x14],ECX
0045d2db  MOV EDX,dword ptr [EBP + -0x14]
0045d2de  MOV dword ptr [EBP + -0x10],EDX
0045d2e1  CMP dword ptr [EBP + -0x10],0x0
0045d2e5  JZ 0x0045d2fa
0045d2e7  PUSH 0x1
0045d2e9  MOV EAX,dword ptr [EBP + -0x10]
0045d2ec  MOV EDX,dword ptr [EAX]
0045d2ee  MOV ECX,dword ptr [EBP + -0x10]
0045d2f1  MOV EAX,dword ptr [EDX]
0045d2f3  CALL EAX
0045d2f5  MOV dword ptr [EBP + -0x34],EAX
0045d2f8  JMP 0x0045d301
0045d2fa  MOV dword ptr [EBP + -0x34],0x0
0045d301  MOV dword ptr [0x00790738],0x0
0045d30b  MOV ECX,dword ptr [0x0079073c]
0045d311  MOV dword ptr [EBP + -0x1c],ECX
0045d314  MOV EDX,dword ptr [EBP + -0x1c]
0045d317  MOV dword ptr [EBP + -0x18],EDX
0045d31a  CMP dword ptr [EBP + -0x18],0x0
0045d31e  JZ 0x0045d333
0045d320  PUSH 0x1
0045d322  MOV EAX,dword ptr [EBP + -0x18]
0045d325  MOV EDX,dword ptr [EAX]
0045d327  MOV ECX,dword ptr [EBP + -0x18]
0045d32a  MOV EAX,dword ptr [EDX]
0045d32c  CALL EAX
0045d32e  MOV dword ptr [EBP + -0x38],EAX
0045d331  JMP 0x0045d33a
0045d333  MOV dword ptr [EBP + -0x38],0x0
0045d33a  MOV dword ptr [0x0079073c],0x0
0045d344  MOV ECX,dword ptr [0x00790740]
0045d34a  MOV dword ptr [EBP + -0x24],ECX
0045d34d  MOV EDX,dword ptr [EBP + -0x24]
0045d350  MOV dword ptr [EBP + -0x20],EDX
0045d353  CMP dword ptr [EBP + -0x20],0x0
0045d357  JZ 0x0045d36c
0045d359  PUSH 0x1
0045d35b  MOV EAX,dword ptr [EBP + -0x20]
0045d35e  MOV EDX,dword ptr [EAX]
0045d360  MOV ECX,dword ptr [EBP + -0x20]
0045d363  MOV EAX,dword ptr [EDX]
0045d365  CALL EAX
0045d367  MOV dword ptr [EBP + -0x3c],EAX
0045d36a  JMP 0x0045d373
0045d36c  MOV dword ptr [EBP + -0x3c],0x0
0045d373  MOV dword ptr [0x00790740],0x0
0045d37d  MOV ECX,dword ptr [0x00790744]
0045d383  MOV dword ptr [EBP + -0x2c],ECX
0045d386  MOV EDX,dword ptr [EBP + -0x2c]
0045d389  MOV dword ptr [EBP + -0x28],EDX
0045d38c  CMP dword ptr [EBP + -0x28],0x0
0045d390  JZ 0x0045d3a5
0045d392  PUSH 0x1
0045d394  MOV EAX,dword ptr [EBP + -0x28]
0045d397  MOV EDX,dword ptr [EAX]
0045d399  MOV ECX,dword ptr [EBP + -0x28]
0045d39c  MOV EAX,dword ptr [EDX]
0045d39e  CALL EAX
0045d3a0  MOV dword ptr [EBP + -0x40],EAX
0045d3a3  JMP 0x0045d3ac
0045d3a5  MOV dword ptr [EBP + -0x40],0x0
0045d3ac  MOV dword ptr [0x00790744],0x0
0045d3b6  MOV dword ptr [EBP + -0x4],0xffffffff
0045d3bd  MOV ECX,dword ptr [EBP + -0x30]
0045d3c0  CALL 0x005d7bd0
0045d3c5  MOV ECX,dword ptr [EBP + -0xc]
0045d3c8  MOV dword ptr FS:[0x0],ECX
0045d3cf  POP ECX
0045d3d0  MOV ESP,EBP
0045d3d2  POP EBP
0045d3d3  RET
