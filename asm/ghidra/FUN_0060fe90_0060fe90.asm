; FUN_0060fe90  0060fe90
0060fe90  PUSH EBP
0060fe91  MOV EBP,ESP
0060fe93  PUSH -0x1
0060fe95  PUSH 0x6aaeba
0060fe9a  MOV EAX,FS:[0x0]
0060fea0  PUSH EAX
0060fea1  SUB ESP,0xc
0060fea4  MOV EAX,[0x00781870]
0060fea9  XOR EAX,EBP
0060feab  PUSH EAX
0060feac  LEA EAX,[EBP + -0xc]
0060feaf  MOV FS:[0x0],EAX
0060feb5  MOV dword ptr [EBP + -0x14],ECX
0060feb8  MOV EAX,dword ptr [EBP + -0x14]
0060febb  MOV dword ptr [EAX],0x6d8424
0060fec1  MOV dword ptr [EBP + -0x4],0x0
0060fec8  MOV ECX,dword ptr [EBP + -0x14]
0060fecb  CMP dword ptr [ECX + 0x34],0x0
0060fecf  JZ 0x0060ff10
0060fed1  MOV EDX,dword ptr [EBP + -0x14]
0060fed4  MOVZX EAX,byte ptr [EDX + 0x30]
0060fed8  TEST EAX,EAX
0060feda  JZ 0x0060feed
0060fedc  MOV ECX,dword ptr [EBP + -0x14]
0060fedf  MOV EDX,dword ptr [ECX + 0x34]
0060fee2  ADD EDX,0x190
0060fee8  MOV dword ptr [EBP + -0x18],EDX
0060feeb  JMP 0x0060fefc
0060feed  MOV EAX,dword ptr [EBP + -0x14]
0060fef0  MOV ECX,dword ptr [EAX + 0x34]
0060fef3  ADD ECX,0x1b0
0060fef9  MOV dword ptr [EBP + -0x18],ECX
0060fefc  MOV EDX,dword ptr [EBP + -0x18]
0060feff  MOV dword ptr [EBP + -0x10],EDX
0060ff02  PUSH 0x0
0060ff04  MOV EAX,dword ptr [EBP + -0x10]
0060ff07  PUSH EAX
0060ff08  CALL 0x006110a0
0060ff0d  ADD ESP,0x8
0060ff10  MOV ECX,dword ptr [EBP + -0x14]
0060ff13  MOV dword ptr [ECX + 0x34],0x0
0060ff1a  MOV dword ptr [EBP + -0x4],0xffffffff
0060ff21  MOV ECX,dword ptr [EBP + -0x14]
0060ff24  CALL 0x005fc150
0060ff29  MOV ECX,dword ptr [EBP + -0xc]
0060ff2c  MOV dword ptr FS:[0x0],ECX
0060ff33  POP ECX
0060ff34  MOV ESP,EBP
0060ff36  POP EBP
0060ff37  RET
