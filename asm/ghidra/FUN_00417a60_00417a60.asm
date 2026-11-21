; FUN_00417a60  00417a60
00417a60  PUSH EBP
00417a61  MOV EBP,ESP
00417a63  SUB ESP,0x8
00417a66  MOV dword ptr [EBP + -0x8],ECX
00417a69  CMP dword ptr [EBP + 0x8],0x0
00417a6d  JNZ 0x00417a73
00417a6f  XOR AL,AL
00417a71  JMP 0x00417adf
00417a73  MOV EAX,dword ptr [EBP + 0x8]
00417a76  MOV dword ptr [EBP + -0x4],EAX
00417a79  MOV ECX,dword ptr [EBP + -0x4]
00417a7c  MOV dword ptr [ECX + 0x10],0x0
00417a83  MOV EDX,dword ptr [EBP + -0x4]
00417a86  MOV dword ptr [EDX + 0x14],0x0
00417a8d  MOV EAX,dword ptr [EBP + -0x4]
00417a90  MOV dword ptr [EAX + 0x18],0x0
00417a97  MOV ECX,dword ptr [EBP + -0x4]
00417a9a  MOV dword ptr [ECX + 0x1c],0x0
00417aa1  MOV EDX,dword ptr [EBP + -0x4]
00417aa4  MOV dword ptr [EDX + 0x20],0x0
00417aab  MOV EAX,dword ptr [EBP + -0x4]
00417aae  MOV dword ptr [EAX + 0x24],0x0
00417ab5  MOV ECX,dword ptr [EBP + -0x4]
00417ab8  MOV dword ptr [ECX + 0x28],0x0
00417abf  MOV EDX,dword ptr [EBP + -0x4]
00417ac2  MOV dword ptr [EDX + 0x2c],0x0
00417ac9  MOV EAX,dword ptr [EBP + -0x4]
00417acc  MOV dword ptr [EAX + 0x30],0x0
00417ad3  MOV ECX,dword ptr [EBP + -0x4]
00417ad6  MOV dword ptr [ECX + 0x34],0x0
00417add  MOV AL,0x1
00417adf  MOV ESP,EBP
00417ae1  POP EBP
00417ae2  RET 0x4
