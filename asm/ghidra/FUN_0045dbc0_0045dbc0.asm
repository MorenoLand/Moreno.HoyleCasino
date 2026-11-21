; FUN_0045dbc0  0045dbc0
0045dbc0  PUSH EBP
0045dbc1  MOV EBP,ESP
0045dbc3  SUB ESP,0x134
0045dbc9  MOV EAX,[0x00781870]
0045dbce  XOR EAX,EBP
0045dbd0  MOV dword ptr [EBP + -0x4],EAX
0045dbd3  MOV dword ptr [EBP + 0xfffffecc],ECX
0045dbd9  MOV byte ptr [EBP + 0xfffffedb],0x0
0045dbe0  CMP dword ptr [EBP + 0x18],0xf4240
0045dbe7  JL 0x0045dbf5
0045dbe9  PUSH 0x55
0045dbeb  MOV ECX,dword ptr [EBP + 0x14]
0045dbee  CALL 0x005ecc60
0045dbf3  JMP 0x0045dbff
0045dbf5  PUSH 0x41
0045dbf7  MOV ECX,dword ptr [EBP + 0x14]
0045dbfa  CALL 0x005ecc60
0045dbff  MOV EAX,dword ptr [EBP + 0x1c]
0045dc02  PUSH EAX
0045dc03  MOV ECX,dword ptr [EBP + 0x18]
0045dc06  PUSH ECX
0045dc07  CALL 0x0064c8a0
0045dc0c  ADD ESP,0x8
0045dc0f  MOV dword ptr [EBP + 0xfffffed0],EAX
0045dc15  MOV dword ptr [EBP + 0xfffffed4],EDX
0045dc1b  PUSH 0x0
0045dc1d  PUSH 0x1
0045dc1f  PUSH 0x1
0045dc21  LEA EDX,[EBP + 0xfffffedc]
0045dc27  PUSH EDX
0045dc28  MOV EAX,dword ptr [EBP + 0xfffffed4]
0045dc2e  PUSH EAX
0045dc2f  MOV ECX,dword ptr [EBP + 0xfffffed0]
0045dc35  PUSH ECX
0045dc36  CALL 0x0064c8d0
0045dc3b  ADD ESP,0x18
0045dc3e  LEA EDX,[EBP + 0xfffffedc]
0045dc44  PUSH EDX
0045dc45  PUSH 0x6b2fd8
0045dc4a  LEA EAX,[EBP + 0xfffffef8]
0045dc50  PUSH EAX
0045dc51  CALL dword ptr [0x006b2220]
0045dc57  ADD ESP,0xc
0045dc5a  LEA ECX,[EBP + 0xfffffef8]
0045dc60  PUSH ECX
0045dc61  MOV EDX,dword ptr [EBP + 0x14]
0045dc64  MOV EAX,dword ptr [EDX]
0045dc66  MOV ECX,dword ptr [EBP + 0x14]
0045dc69  MOV EDX,dword ptr [EAX + 0xb4]
0045dc6f  CALL EDX
0045dc71  MOV AL,0x1
0045dc73  MOV ECX,dword ptr [EBP + -0x4]
0045dc76  XOR ECX,EBP
0045dc78  CALL 0x00686d72
0045dc7d  MOV ESP,EBP
0045dc7f  POP EBP
0045dc80  RET 0x1c
