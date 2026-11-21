; FUN_0056e230  0056e230
0056e230  PUSH EBP
0056e231  MOV EBP,ESP
0056e233  PUSH -0x1
0056e235  PUSH 0x6a5e40
0056e23a  MOV EAX,FS:[0x0]
0056e240  PUSH EAX
0056e241  SUB ESP,0x38
0056e244  MOV EAX,[0x00781870]
0056e249  XOR EAX,EBP
0056e24b  PUSH EAX
0056e24c  LEA EAX,[EBP + -0xc]
0056e24f  MOV FS:[0x0],EAX
0056e255  MOV dword ptr [EBP + -0x40],ECX
0056e258  MOV dword ptr [EBP + -0x34],0x4
0056e25f  MOV dword ptr [EBP + -0x30],0x3
0056e266  MOV dword ptr [EBP + -0x2c],0x0
0056e26d  MOV dword ptr [EBP + -0x28],0x1
0056e274  MOV dword ptr [EBP + -0x24],0x2
0056e27b  MOV dword ptr [EBP + -0x20],0x5
0056e282  MOV dword ptr [EBP + -0x1c],0x6
0056e289  MOV dword ptr [EBP + -0x18],0x7
0056e290  MOV dword ptr [EBP + -0x14],0xffffffff
0056e297  MOV dword ptr [EBP + -0x10],0xffffffff
0056e29e  MOV ECX,dword ptr [EBP + -0x40]
0056e2a1  CALL 0x0056f0d0
0056e2a6  MOV EAX,dword ptr [EBP + EAX*0x4 + -0x34]
0056e2aa  PUSH EAX
0056e2ab  MOV ECX,dword ptr [EBP + -0x40]
0056e2ae  MOV EDX,dword ptr [ECX + 0x68]
0056e2b1  MOV EAX,dword ptr [EBP + -0x40]
0056e2b4  MOV ECX,dword ptr [EAX + 0x68]
0056e2b7  MOV EDX,dword ptr [EDX]
0056e2b9  MOV EAX,dword ptr [EDX + 0xb0]
0056e2bf  CALL EAX
0056e2c1  PUSH 0x28
0056e2c3  CALL 0x00686d82
0056e2c8  ADD ESP,0x4
0056e2cb  MOV dword ptr [EBP + -0x3c],EAX
0056e2ce  MOV dword ptr [EBP + -0x4],0x0
0056e2d5  CMP dword ptr [EBP + -0x3c],0x0
0056e2d9  JZ 0x0056e2f2
0056e2db  PUSH 0x0
0056e2dd  PUSH 0x0
0056e2df  PUSH 0x1
0056e2e1  PUSH 0x0
0056e2e3  PUSH 0x0
0056e2e5  MOV ECX,dword ptr [EBP + -0x3c]
0056e2e8  CALL 0x00601110
0056e2ed  MOV dword ptr [EBP + -0x44],EAX
0056e2f0  JMP 0x0056e2f9
0056e2f2  MOV dword ptr [EBP + -0x44],0x0
0056e2f9  MOV ECX,dword ptr [EBP + -0x44]
0056e2fc  MOV dword ptr [EBP + -0x38],ECX
0056e2ff  MOV dword ptr [EBP + -0x4],0xffffffff
0056e306  MOV EDX,dword ptr [EBP + -0x38]
0056e309  PUSH EDX
0056e30a  MOV EAX,dword ptr [EBP + -0x40]
0056e30d  MOV ECX,dword ptr [EAX + 0x68]
0056e310  CALL 0x005f5d50
0056e315  MOV ECX,dword ptr [EBP + -0x40]
0056e318  MOV EDX,dword ptr [ECX + 0x68]
0056e31b  MOV EAX,dword ptr [EBP + -0x40]
0056e31e  MOV ECX,dword ptr [EAX + 0x68]
0056e321  MOV EDX,dword ptr [EDX]
0056e323  MOV EAX,dword ptr [EDX + 0x74]
0056e326  CALL EAX
0056e328  MOV ECX,dword ptr [EBP + -0xc]
0056e32b  MOV dword ptr FS:[0x0],ECX
0056e332  POP ECX
0056e333  MOV ESP,EBP
0056e335  POP EBP
0056e336  RET
