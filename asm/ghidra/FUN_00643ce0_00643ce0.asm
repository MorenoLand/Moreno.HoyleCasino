; FUN_00643ce0  00643ce0
00643ce0  PUSH EBP
00643ce1  MOV EBP,ESP
00643ce3  PUSH -0x1
00643ce5  PUSH 0x6abd28
00643cea  MOV EAX,FS:[0x0]
00643cf0  PUSH EAX
00643cf1  SUB ESP,0x8
00643cf4  MOV EAX,[0x00781870]
00643cf9  XOR EAX,EBP
00643cfb  PUSH EAX
00643cfc  LEA EAX,[EBP + -0xc]
00643cff  MOV FS:[0x0],EAX
00643d05  MOV dword ptr [EBP + -0x10],ECX
00643d08  MOV ECX,dword ptr [EBP + -0x10]
00643d0b  CALL 0x005f5f50
00643d10  MOV dword ptr [EBP + -0x4],0x0
00643d17  MOV EAX,dword ptr [EBP + -0x10]
00643d1a  MOV dword ptr [EAX],0x6dc45c
00643d20  MOV ECX,dword ptr [EBP + -0x10]
00643d23  MOV EDX,dword ptr [EBP + 0x8]
00643d26  MOV dword ptr [ECX + 0x194],EDX
00643d2c  MOV EAX,dword ptr [EBP + -0x10]
00643d2f  MOV word ptr [EAX + 0x190],0xffff
00643d38  MOV ECX,dword ptr [EBP + -0x10]
00643d3b  MOV dword ptr [ECX + 0x19c],0x0
00643d45  MOV EDX,dword ptr [EBP + -0x10]
00643d48  MOV byte ptr [EDX + 0x198],0x0
00643d4f  MOV EAX,dword ptr [EBP + -0x10]
00643d52  MOV byte ptr [EAX + 0xa],0x1
00643d56  CMP dword ptr [EBP + 0xc],0x0
00643d5a  JNZ 0x00643d6a
00643d5c  MOV ECX,dword ptr [0x0162ee84]
00643d62  MOV EDX,dword ptr [ECX + 0x14]
00643d65  MOV dword ptr [EBP + -0x14],EDX
00643d68  JMP 0x00643d70
00643d6a  MOV EAX,dword ptr [EBP + 0xc]
00643d6d  MOV dword ptr [EBP + -0x14],EAX
00643d70  MOV ECX,dword ptr [EBP + -0x10]
00643d73  MOV EDX,dword ptr [EBP + -0x14]
00643d76  MOV dword ptr [ECX + 0x4],EDX
00643d79  MOV ECX,dword ptr [EBP + -0x10]
00643d7c  CALL 0x005f5cc0
00643d81  MOV dword ptr [EBP + -0x4],0xffffffff
00643d88  MOV EAX,dword ptr [EBP + -0x10]
00643d8b  MOV ECX,dword ptr [EBP + -0xc]
00643d8e  MOV dword ptr FS:[0x0],ECX
00643d95  POP ECX
00643d96  MOV ESP,EBP
00643d98  POP EBP
00643d99  RET 0x8
