; FUN_00518980  00518980
00518980  PUSH EBP
00518981  MOV EBP,ESP
00518983  PUSH -0x1
00518985  PUSH 0x6a3c68
0051898a  MOV EAX,FS:[0x0]
00518990  PUSH EAX
00518991  SUB ESP,0x28
00518994  MOV EAX,[0x00781870]
00518999  XOR EAX,EBP
0051899b  PUSH EAX
0051899c  LEA EAX,[EBP + -0xc]
0051899f  MOV FS:[0x0],EAX
005189a5  MOV dword ptr [EBP + -0x28],ECX
005189a8  MOV EAX,dword ptr [EBP + -0x28]
005189ab  MOV dword ptr [EAX],0x6c13dc
005189b1  MOV dword ptr [EBP + -0x4],0x0
005189b8  MOV ECX,dword ptr [EBP + -0x28]
005189bb  CMP dword ptr [ECX + 0x1bc],0x0
005189c2  JZ 0x00518a03
005189c4  MOV EDX,dword ptr [EBP + -0x28]
005189c7  MOV EAX,dword ptr [EDX + 0x1bc]
005189cd  MOV dword ptr [EBP + -0x14],EAX
005189d0  MOV ECX,dword ptr [EBP + -0x14]
005189d3  MOV dword ptr [EBP + -0x10],ECX
005189d6  CMP dword ptr [EBP + -0x10],0x0
005189da  JZ 0x005189ef
005189dc  PUSH 0x1
005189de  MOV EDX,dword ptr [EBP + -0x10]
005189e1  MOV EAX,dword ptr [EDX]
005189e3  MOV ECX,dword ptr [EBP + -0x10]
005189e6  MOV EDX,dword ptr [EAX]
005189e8  CALL EDX
005189ea  MOV dword ptr [EBP + -0x2c],EAX
005189ed  JMP 0x005189f6
005189ef  MOV dword ptr [EBP + -0x2c],0x0
005189f6  MOV EAX,dword ptr [EBP + -0x28]
005189f9  MOV dword ptr [EAX + 0x1bc],0x0
00518a03  MOV ECX,dword ptr [EBP + -0x28]
00518a06  CMP dword ptr [ECX + 0x1c0],0x0
00518a0d  JZ 0x00518a4e
00518a0f  MOV EDX,dword ptr [EBP + -0x28]
00518a12  MOV EAX,dword ptr [EDX + 0x1c0]
00518a18  MOV dword ptr [EBP + -0x1c],EAX
00518a1b  MOV ECX,dword ptr [EBP + -0x1c]
00518a1e  MOV dword ptr [EBP + -0x18],ECX
00518a21  CMP dword ptr [EBP + -0x18],0x0
00518a25  JZ 0x00518a3a
00518a27  PUSH 0x1
00518a29  MOV EDX,dword ptr [EBP + -0x18]
00518a2c  MOV EAX,dword ptr [EDX]
00518a2e  MOV ECX,dword ptr [EBP + -0x18]
00518a31  MOV EDX,dword ptr [EAX]
00518a33  CALL EDX
00518a35  MOV dword ptr [EBP + -0x30],EAX
00518a38  JMP 0x00518a41
00518a3a  MOV dword ptr [EBP + -0x30],0x0
00518a41  MOV EAX,dword ptr [EBP + -0x28]
00518a44  MOV dword ptr [EAX + 0x1c0],0x0
00518a4e  MOV ECX,dword ptr [EBP + -0x28]
00518a51  CMP dword ptr [ECX + 0x1c8],0x0
00518a58  JZ 0x00518a99
00518a5a  MOV EDX,dword ptr [EBP + -0x28]
00518a5d  MOV EAX,dword ptr [EDX + 0x1c8]
00518a63  MOV dword ptr [EBP + -0x24],EAX
00518a66  MOV ECX,dword ptr [EBP + -0x24]
00518a69  MOV dword ptr [EBP + -0x20],ECX
00518a6c  CMP dword ptr [EBP + -0x20],0x0
00518a70  JZ 0x00518a85
00518a72  PUSH 0x1
00518a74  MOV EDX,dword ptr [EBP + -0x20]
00518a77  MOV EAX,dword ptr [EDX]
00518a79  MOV ECX,dword ptr [EBP + -0x20]
00518a7c  MOV EDX,dword ptr [EAX]
00518a7e  CALL EDX
00518a80  MOV dword ptr [EBP + -0x34],EAX
00518a83  JMP 0x00518a8c
00518a85  MOV dword ptr [EBP + -0x34],0x0
00518a8c  MOV EAX,dword ptr [EBP + -0x28]
00518a8f  MOV dword ptr [EAX + 0x1c8],0x0
00518a99  MOV dword ptr [EBP + -0x4],0xffffffff
00518aa0  MOV ECX,dword ptr [EBP + -0x28]
00518aa3  CALL 0x005f7260
00518aa8  MOV ECX,dword ptr [EBP + -0xc]
00518aab  MOV dword ptr FS:[0x0],ECX
00518ab2  POP ECX
00518ab3  MOV ESP,EBP
00518ab5  POP EBP
00518ab6  RET
