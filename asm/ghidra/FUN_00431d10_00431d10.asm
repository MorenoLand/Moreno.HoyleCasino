; FUN_00431d10  00431d10
00431d10  PUSH EBP
00431d11  MOV EBP,ESP
00431d13  PUSH -0x1
00431d15  PUSH 0x69e6eb
00431d1a  MOV EAX,FS:[0x0]
00431d20  PUSH EAX
00431d21  SUB ESP,0x34
00431d24  MOV EAX,[0x00781870]
00431d29  XOR EAX,EBP
00431d2b  PUSH EAX
00431d2c  LEA EAX,[EBP + -0xc]
00431d2f  MOV FS:[0x0],EAX
00431d35  MOV dword ptr [EBP + -0x30],ECX
00431d38  MOV EAX,dword ptr [EBP + -0x30]
00431d3b  MOV dword ptr [EAX],0x6b76fc
00431d41  MOV dword ptr [EBP + -0x4],0x0
00431d48  MOV dword ptr [0x007906d0],0x0
00431d52  MOV ECX,dword ptr [0x007906d4]
00431d58  MOV dword ptr [EBP + -0x14],ECX
00431d5b  MOV EDX,dword ptr [EBP + -0x14]
00431d5e  MOV dword ptr [EBP + -0x10],EDX
00431d61  CMP dword ptr [EBP + -0x10],0x0
00431d65  JZ 0x00431d7a
00431d67  PUSH 0x1
00431d69  MOV EAX,dword ptr [EBP + -0x10]
00431d6c  MOV EDX,dword ptr [EAX]
00431d6e  MOV ECX,dword ptr [EBP + -0x10]
00431d71  MOV EAX,dword ptr [EDX]
00431d73  CALL EAX
00431d75  MOV dword ptr [EBP + -0x34],EAX
00431d78  JMP 0x00431d81
00431d7a  MOV dword ptr [EBP + -0x34],0x0
00431d81  MOV dword ptr [0x007906d4],0x0
00431d8b  MOV ECX,dword ptr [0x007906d8]
00431d91  MOV dword ptr [EBP + -0x1c],ECX
00431d94  MOV EDX,dword ptr [EBP + -0x1c]
00431d97  MOV dword ptr [EBP + -0x18],EDX
00431d9a  CMP dword ptr [EBP + -0x18],0x0
00431d9e  JZ 0x00431db3
00431da0  PUSH 0x1
00431da2  MOV EAX,dword ptr [EBP + -0x18]
00431da5  MOV EDX,dword ptr [EAX]
00431da7  MOV ECX,dword ptr [EBP + -0x18]
00431daa  MOV EAX,dword ptr [EDX]
00431dac  CALL EAX
00431dae  MOV dword ptr [EBP + -0x38],EAX
00431db1  JMP 0x00431dba
00431db3  MOV dword ptr [EBP + -0x38],0x0
00431dba  MOV dword ptr [0x007906d8],0x0
00431dc4  MOV ECX,dword ptr [0x007906dc]
00431dca  MOV dword ptr [EBP + -0x24],ECX
00431dcd  MOV EDX,dword ptr [EBP + -0x24]
00431dd0  MOV dword ptr [EBP + -0x20],EDX
00431dd3  CMP dword ptr [EBP + -0x20],0x0
00431dd7  JZ 0x00431dec
00431dd9  PUSH 0x1
00431ddb  MOV EAX,dword ptr [EBP + -0x20]
00431dde  MOV EDX,dword ptr [EAX]
00431de0  MOV ECX,dword ptr [EBP + -0x20]
00431de3  MOV EAX,dword ptr [EDX]
00431de5  CALL EAX
00431de7  MOV dword ptr [EBP + -0x3c],EAX
00431dea  JMP 0x00431df3
00431dec  MOV dword ptr [EBP + -0x3c],0x0
00431df3  MOV dword ptr [0x007906dc],0x0
00431dfd  MOV ECX,dword ptr [0x007906e0]
00431e03  MOV dword ptr [EBP + -0x2c],ECX
00431e06  MOV EDX,dword ptr [EBP + -0x2c]
00431e09  MOV dword ptr [EBP + -0x28],EDX
00431e0c  CMP dword ptr [EBP + -0x28],0x0
00431e10  JZ 0x00431e25
00431e12  PUSH 0x1
00431e14  MOV EAX,dword ptr [EBP + -0x28]
00431e17  MOV EDX,dword ptr [EAX]
00431e19  MOV ECX,dword ptr [EBP + -0x28]
00431e1c  MOV EAX,dword ptr [EDX]
00431e1e  CALL EAX
00431e20  MOV dword ptr [EBP + -0x40],EAX
00431e23  JMP 0x00431e2c
00431e25  MOV dword ptr [EBP + -0x40],0x0
00431e2c  MOV dword ptr [0x007906e0],0x0
00431e36  MOV dword ptr [EBP + -0x4],0xffffffff
00431e3d  MOV ECX,dword ptr [EBP + -0x30]
00431e40  CALL 0x005d7bd0
00431e45  MOV ECX,dword ptr [EBP + -0xc]
00431e48  MOV dword ptr FS:[0x0],ECX
00431e4f  POP ECX
00431e50  MOV ESP,EBP
00431e52  POP EBP
00431e53  RET
