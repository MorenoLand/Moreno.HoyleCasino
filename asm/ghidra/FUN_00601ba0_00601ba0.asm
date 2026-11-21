; FUN_00601ba0  00601ba0
00601ba0  PUSH EBP
00601ba1  MOV EBP,ESP
00601ba3  PUSH -0x1
00601ba5  PUSH 0x6aa8ab
00601baa  MOV EAX,FS:[0x0]
00601bb0  PUSH EAX
00601bb1  SUB ESP,0x10
00601bb4  MOV EAX,[0x00781870]
00601bb9  XOR EAX,EBP
00601bbb  PUSH EAX
00601bbc  LEA EAX,[EBP + -0xc]
00601bbf  MOV FS:[0x0],EAX
00601bc5  MOV dword ptr [EBP + -0x18],ECX
00601bc8  MOV EAX,dword ptr [EBP + -0x18]
00601bcb  MOV dword ptr [EAX],0x6d75fc
00601bd1  MOV dword ptr [EBP + -0x4],0x0
00601bd8  MOV ECX,dword ptr [EBP + -0x18]
00601bdb  CMP dword ptr [ECX + 0x190],0x0
00601be2  JZ 0x00601c23
00601be4  MOV EDX,dword ptr [EBP + -0x18]
00601be7  MOV EAX,dword ptr [EDX + 0x190]
00601bed  MOV dword ptr [EBP + -0x14],EAX
00601bf0  MOV ECX,dword ptr [EBP + -0x14]
00601bf3  MOV dword ptr [EBP + -0x10],ECX
00601bf6  CMP dword ptr [EBP + -0x10],0x0
00601bfa  JZ 0x00601c0f
00601bfc  PUSH 0x1
00601bfe  MOV EDX,dword ptr [EBP + -0x10]
00601c01  MOV EAX,dword ptr [EDX]
00601c03  MOV ECX,dword ptr [EBP + -0x10]
00601c06  MOV EDX,dword ptr [EAX]
00601c08  CALL EDX
00601c0a  MOV dword ptr [EBP + -0x1c],EAX
00601c0d  JMP 0x00601c16
00601c0f  MOV dword ptr [EBP + -0x1c],0x0
00601c16  MOV EAX,dword ptr [EBP + -0x18]
00601c19  MOV dword ptr [EAX + 0x190],0x0
00601c23  MOV dword ptr [EBP + -0x4],0xffffffff
00601c2a  MOV ECX,dword ptr [EBP + -0x18]
00601c2d  CALL 0x005f5fa0
00601c32  MOV ECX,dword ptr [EBP + -0xc]
00601c35  MOV dword ptr FS:[0x0],ECX
00601c3c  POP ECX
00601c3d  MOV ESP,EBP
00601c3f  POP EBP
00601c40  RET
