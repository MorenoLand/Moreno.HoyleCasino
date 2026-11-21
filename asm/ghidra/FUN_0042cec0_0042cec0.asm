; FUN_0042cec0  0042cec0
0042cec0  PUSH EBP
0042cec1  MOV EBP,ESP
0042cec3  PUSH -0x1
0042cec5  PUSH 0x69e600
0042ceca  MOV EAX,FS:[0x0]
0042ced0  PUSH EAX
0042ced1  SUB ESP,0x10
0042ced4  MOV EAX,[0x00781870]
0042ced9  XOR EAX,EBP
0042cedb  PUSH EAX
0042cedc  LEA EAX,[EBP + -0xc]
0042cedf  MOV FS:[0x0],EAX
0042cee5  MOV dword ptr [EBP + -0x18],ECX
0042cee8  MOV ECX,dword ptr [0x007906dc]
0042ceee  CALL 0x0042bda0
0042cef3  MOV EAX,dword ptr [EBP + -0x18]
0042cef6  CMP dword ptr [EAX + 0xae0],0x0
0042cefd  JNZ 0x0042cf49
0042ceff  PUSH 0x1d4
0042cf04  CALL 0x00686d82
0042cf09  ADD ESP,0x4
0042cf0c  MOV dword ptr [EBP + -0x14],EAX
0042cf0f  MOV dword ptr [EBP + -0x4],0x0
0042cf16  CMP dword ptr [EBP + -0x14],0x0
0042cf1a  JZ 0x0042cf29
0042cf1c  MOV ECX,dword ptr [EBP + -0x14]
0042cf1f  CALL 0x005cd360
0042cf24  MOV dword ptr [EBP + -0x1c],EAX
0042cf27  JMP 0x0042cf30
0042cf29  MOV dword ptr [EBP + -0x1c],0x0
0042cf30  MOV ECX,dword ptr [EBP + -0x1c]
0042cf33  MOV dword ptr [EBP + -0x10],ECX
0042cf36  MOV dword ptr [EBP + -0x4],0xffffffff
0042cf3d  MOV EDX,dword ptr [EBP + -0x18]
0042cf40  MOV EAX,dword ptr [EBP + -0x10]
0042cf43  MOV dword ptr [EDX + 0xae0],EAX
0042cf49  PUSH -0x1
0042cf4b  PUSH 0x11
0042cf4d  PUSH 0xc8
0042cf52  PUSH 0x0
0042cf54  PUSH 0x0
0042cf56  MOV ECX,dword ptr [EBP + -0x18]
0042cf59  MOV EDX,dword ptr [ECX]
0042cf5b  MOV ECX,dword ptr [EBP + -0x18]
0042cf5e  MOV EAX,dword ptr [EDX + 0xd8]
0042cf64  CALL EAX
0042cf66  SUB EAX,0x9
0042cf69  PUSH EAX
0042cf6a  PUSH 0x0
0042cf6c  PUSH 0x0
0042cf6e  MOV ECX,dword ptr [EBP + -0x18]
0042cf71  MOV EDX,dword ptr [ECX]
0042cf73  MOV ECX,dword ptr [EBP + -0x18]
0042cf76  MOV EAX,dword ptr [EDX + 0xd4]
0042cf7c  CALL EAX
0042cf7e  PUSH EAX
0042cf7f  PUSH 0xf
0042cf81  PUSH 0x41
0042cf83  PUSH 0x4
0042cf85  PUSH 0x6b27f8
0042cf8a  MOV ECX,dword ptr [EBP + -0x18]
0042cf8d  MOV ECX,dword ptr [ECX + 0xae0]
0042cf93  CALL 0x005ec8f0
0042cf98  PUSH 0xcc
0042cf9d  PUSH 0xff
0042cfa2  PUSH 0xff
0042cfa7  MOV EDX,dword ptr [EBP + -0x18]
0042cfaa  MOV ECX,dword ptr [EDX + 0xae0]
0042cfb0  CALL 0x005ee8c0
0042cfb5  PUSH 0x0
0042cfb7  PUSH 0x5
0042cfb9  MOV EAX,dword ptr [EBP + -0x18]
0042cfbc  MOV ECX,dword ptr [EAX + 0xae0]
0042cfc2  CALL 0x005ef340
0042cfc7  MOV ECX,dword ptr [EBP + -0x18]
0042cfca  MOV ECX,dword ptr [ECX + 0x178]
0042cfd0  CALL 0x005f5400
0042cfd5  PUSH EAX
0042cfd6  MOV ECX,dword ptr [0x007906d4]
0042cfdc  CALL 0x004388a0
0042cfe1  MOVZX EDX,AL
0042cfe4  TEST EDX,EDX
0042cfe6  JZ 0x0042d016
0042cfe8  PUSH 0x6b6cb4
0042cfed  CALL 0x00630f40
0042cff2  ADD ESP,0x4
0042cff5  PUSH EAX
0042cff6  MOV EAX,dword ptr [EBP + -0x18]
0042cff9  MOV ECX,dword ptr [EAX + 0xae0]
0042cfff  MOV EDX,dword ptr [EBP + -0x18]
0042d002  MOV EAX,dword ptr [EDX + 0xae0]
0042d008  MOV EDX,dword ptr [ECX]
0042d00a  MOV ECX,EAX
0042d00c  MOV EAX,dword ptr [EDX + 0xb4]
0042d012  CALL EAX
0042d014  JMP 0x0042d040
0042d016  PUSH 0x6b6ca0
0042d01b  CALL 0x00630f40
0042d020  ADD ESP,0x4
0042d023  PUSH EAX
0042d024  MOV ECX,dword ptr [EBP + -0x18]
0042d027  MOV EDX,dword ptr [ECX + 0xae0]
0042d02d  MOV EAX,dword ptr [EBP + -0x18]
0042d030  MOV ECX,dword ptr [EAX + 0xae0]
0042d036  MOV EDX,dword ptr [EDX]
0042d038  MOV EAX,dword ptr [EDX + 0xb4]
0042d03e  CALL EAX
0042d040  MOV ECX,dword ptr [EBP + -0x18]
0042d043  MOV EDX,dword ptr [ECX + 0xae0]
0042d049  MOV EAX,dword ptr [EBP + -0x18]
0042d04c  MOV ECX,dword ptr [EAX + 0xae0]
0042d052  MOV EDX,dword ptr [EDX]
0042d054  MOV EAX,dword ptr [EDX + 0x74]
0042d057  CALL EAX
0042d059  MOV ECX,dword ptr [EBP + -0xc]
0042d05c  MOV dword ptr FS:[0x0],ECX
0042d063  POP ECX
0042d064  MOV ESP,EBP
0042d066  POP EBP
0042d067  RET
