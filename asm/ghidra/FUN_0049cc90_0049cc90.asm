; FUN_0049cc90  0049cc90
0049cc90  PUSH EBP
0049cc91  MOV EBP,ESP
0049cc93  PUSH -0x1
0049cc95  PUSH 0x6a0ea9
0049cc9a  MOV EAX,FS:[0x0]
0049cca0  PUSH EAX
0049cca1  SUB ESP,0x10
0049cca4  MOV EAX,[0x00781870]
0049cca9  XOR EAX,EBP
0049ccab  PUSH EAX
0049ccac  LEA EAX,[EBP + -0xc]
0049ccaf  MOV FS:[0x0],EAX
0049ccb5  MOV dword ptr [EBP + -0x1c],ECX
0049ccb8  LEA ECX,[EBP + -0x18]
0049ccbb  CALL 0x004646a0
0049ccc0  MOV dword ptr [EBP + -0x4],0x0
0049ccc7  LEA ECX,[EBP + -0x18]
0049ccca  CALL 0x004646f0
0049cccf  MOV EAX,dword ptr [EBP + -0x1c]
0049ccd2  PUSH EAX
0049ccd3  LEA ECX,[EBP + -0x18]
0049ccd6  CALL 0x004649c0
0049ccdb  MOV ECX,dword ptr [EBP + 0x2c]
0049ccde  PUSH ECX
0049ccdf  MOV EDX,dword ptr [EBP + 0x28]
0049cce2  PUSH EDX
0049cce3  MOV EAX,dword ptr [EBP + 0x24]
0049cce6  PUSH EAX
0049cce7  MOV ECX,dword ptr [EBP + 0x20]
0049ccea  PUSH ECX
0049cceb  MOV EDX,dword ptr [EBP + 0x1c]
0049ccee  PUSH EDX
0049ccef  MOV EAX,dword ptr [EBP + 0x18]
0049ccf2  PUSH EAX
0049ccf3  MOV ECX,dword ptr [EBP + 0x14]
0049ccf6  PUSH ECX
0049ccf7  MOV EDX,dword ptr [EBP + 0x10]
0049ccfa  PUSH EDX
0049ccfb  MOV EAX,dword ptr [EBP + 0xc]
0049ccfe  PUSH EAX
0049ccff  MOV ECX,dword ptr [EBP + 0x8]
0049cd02  PUSH ECX
0049cd03  SUB ESP,0xc
0049cd06  MOV EDX,ESP
0049cd08  MOV EAX,dword ptr [EBP + -0x18]
0049cd0b  MOV dword ptr [EDX],EAX
0049cd0d  MOV ECX,dword ptr [EBP + -0x14]
0049cd10  MOV dword ptr [EDX + 0x4],ECX
0049cd13  MOV AX,word ptr [EBP + -0x10]
0049cd17  MOV word ptr [EDX + 0x8],AX
0049cd1b  MOV ECX,dword ptr [EBP + -0x1c]
0049cd1e  CALL 0x004966e0
0049cd23  MOV dword ptr [EBP + -0x4],0xffffffff
0049cd2a  LEA ECX,[EBP + -0x18]
0049cd2d  CALL 0x004646e0
0049cd32  MOV ECX,dword ptr [EBP + -0xc]
0049cd35  MOV dword ptr FS:[0x0],ECX
0049cd3c  POP ECX
0049cd3d  MOV ESP,EBP
0049cd3f  POP EBP
0049cd40  RET 0x28
