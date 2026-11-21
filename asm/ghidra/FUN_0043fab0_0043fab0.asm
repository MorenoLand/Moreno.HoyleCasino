; FUN_0043fab0  0043fab0
0043fab0  PUSH EBP
0043fab1  MOV EBP,ESP
0043fab3  SUB ESP,0x54
0043fab6  MOV dword ptr [EBP + -0x54],ECX
0043fab9  MOV dword ptr [EBP + -0x50],0x1d4c4
0043fac0  MOV dword ptr [EBP + -0x4c],0x1d4c5
0043fac7  MOV dword ptr [EBP + -0x48],0x1d4c6
0043face  MOV dword ptr [EBP + -0x44],0x1d4d3
0043fad5  MOV dword ptr [EBP + -0x40],0x1d4d0
0043fadc  MOV dword ptr [EBP + -0x3c],0x1d4d1
0043fae3  MOV dword ptr [EBP + -0x38],0x1d4d2
0043faea  MOV dword ptr [EBP + -0x34],0x1d4d4
0043faf1  MOV dword ptr [EBP + -0x30],0x1d4d9
0043faf8  MOV dword ptr [EBP + -0x2c],0x1d4da
0043faff  MOV dword ptr [EBP + -0x28],0x1d4db
0043fb06  MOV dword ptr [EBP + -0x24],0x1d4e0
0043fb0d  MOV dword ptr [EBP + -0x20],0x1d4e1
0043fb14  MOV dword ptr [EBP + -0x1c],0x1d4e2
0043fb1b  MOV dword ptr [EBP + -0x18],0x1d4e3
0043fb22  MOV dword ptr [EBP + -0x14],0x1d4e4
0043fb29  MOV dword ptr [EBP + -0x10],0x1d4e5
0043fb30  MOV dword ptr [EBP + -0xc],0x1d4e6
0043fb37  MOV dword ptr [EBP + -0x8],0x1d4e7
0043fb3e  MOV dword ptr [EBP + -0x4],0x1d4e8
0043fb45  MOV EAX,dword ptr [EBP + 0x8]
0043fb48  MOV ECX,dword ptr [EBP + 0xc]
0043fb4b  LEA EDX,[ECX + EAX*0x4]
0043fb4e  MOV EAX,dword ptr [EBP + EDX*0x4 + -0x50]
0043fb52  PUSH EAX
0043fb53  MOV ECX,dword ptr [EBP + 0x8]
0043fb56  MOV EDX,dword ptr [EBP + -0x54]
0043fb59  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x4]
0043fb5d  CALL 0x005eaf00
0043fb62  MOV ESP,EBP
0043fb64  POP EBP
0043fb65  RET 0x8
