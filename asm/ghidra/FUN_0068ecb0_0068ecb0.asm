; FUN_0068ecb0  0068ecb0
0068ecb0  PUSH EBP
0068ecb1  MOV EBP,ESP
0068ecb3  PUSH -0x1
0068ecb5  PUSH 0x6ae24a
0068ecba  MOV EAX,FS:[0x0]
0068ecc0  PUSH EAX
0068ecc1  PUSH ECX
0068ecc2  SUB ESP,0x2c
0068ecc5  PUSH EBX
0068ecc6  PUSH ESI
0068ecc7  PUSH EDI
0068ecc8  MOV EAX,[0x00781870]
0068eccd  XOR EAX,EBP
0068eccf  PUSH EAX
0068ecd0  LEA EAX,[EBP + -0xc]
0068ecd3  MOV FS:[0x0],EAX
0068ecd9  MOV dword ptr [EBP + -0x10],ESP
0068ecdc  MOV dword ptr [EBP + -0x34],ECX
0068ecdf  PUSH 0x0
0068ece1  PUSH 0x1
0068ece3  CALL 0x0068fa30
0068ece8  ADD ESP,0x8
0068eceb  MOV dword ptr [EBP + -0x14],EAX
0068ecee  MOV dword ptr [EBP + -0x4],0x0
0068ecf5  MOV EAX,dword ptr [EBP + -0x14]
0068ecf8  MOV dword ptr [EBP + -0x1c],EAX
0068ecfb  MOV byte ptr [EBP + -0x4],0x1
0068ecff  CMP dword ptr [EBP + -0x1c],0x0
0068ed03  JZ 0x0068ed6b
0068ed05  MOV ECX,dword ptr [EBP + -0x1c]
0068ed08  MOV EDX,dword ptr [EBP + 0x8]
0068ed0b  MOV dword ptr [ECX],EDX
0068ed0d  MOV EAX,dword ptr [EBP + -0x1c]
0068ed10  MOV ECX,dword ptr [EBP + 0xc]
0068ed13  MOV dword ptr [EAX + 0x4],ECX
0068ed16  MOV EDX,dword ptr [EBP + -0x1c]
0068ed19  MOV EAX,dword ptr [EBP + 0x10]
0068ed1c  MOV dword ptr [EDX + 0x8],EAX
0068ed1f  MOV ECX,dword ptr [EBP + -0x1c]
0068ed22  ADD ECX,0xc
0068ed25  MOV dword ptr [EBP + -0x30],ECX
0068ed28  MOV EDX,dword ptr [EBP + 0x14]
0068ed2b  PUSH EDX
0068ed2c  MOV ECX,dword ptr [EBP + -0x30]
0068ed2f  CALL dword ptr [0x006b20f8]
0068ed35  MOV dword ptr [EBP + -0x38],EAX
0068ed38  MOV byte ptr [EBP + -0x4],0x2
0068ed3c  MOV EAX,dword ptr [EBP + 0x14]
0068ed3f  ADD EAX,0x1c
0068ed42  PUSH EAX
0068ed43  MOV ECX,dword ptr [EBP + -0x30]
0068ed46  ADD ECX,0x1c
0068ed49  CALL dword ptr [0x006b20f8]
0068ed4f  MOV byte ptr [EBP + -0x4],0x1
0068ed53  MOV ECX,dword ptr [EBP + -0x1c]
0068ed56  MOV DL,byte ptr [EBP + 0x18]
0068ed59  MOV byte ptr [ECX + 0x44],DL
0068ed5c  MOV EAX,dword ptr [EBP + -0x1c]
0068ed5f  MOV byte ptr [EAX + 0x45],0x0
0068ed63  MOV ECX,dword ptr [EBP + -0x1c]
0068ed66  MOV dword ptr [EBP + -0x3c],ECX
0068ed69  JMP 0x0068ed72
0068ed6b  MOV dword ptr [EBP + -0x3c],0x0
0068ed72  MOV EDX,dword ptr [EBP + -0x3c]
0068ed75  MOV dword ptr [EBP + -0x18],EDX
0068ed78  MOV byte ptr [EBP + -0x4],0x0
0068ed7c  JMP 0x0068eda0
