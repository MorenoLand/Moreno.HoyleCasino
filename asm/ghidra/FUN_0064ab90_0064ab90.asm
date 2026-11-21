; FUN_0064ab90  0064ab90
0064ab90  PUSH EBP
0064ab91  MOV EBP,ESP
0064ab93  PUSH -0x1
0064ab95  PUSH 0x6abef3
0064ab9a  MOV EAX,FS:[0x0]
0064aba0  PUSH EAX
0064aba1  SUB ESP,0x28
0064aba4  MOV EAX,[0x00781870]
0064aba9  XOR EAX,EBP
0064abab  PUSH EAX
0064abac  LEA EAX,[EBP + -0xc]
0064abaf  MOV FS:[0x0],EAX
0064abb5  MOV dword ptr [EBP + -0x28],ECX
0064abb8  MOV EAX,dword ptr [EBP + -0x28]
0064abbb  MOV dword ptr [EAX],0x6dc9e4
0064abc1  MOV dword ptr [EBP + -0x4],0x0
0064abc8  MOV ECX,dword ptr [EBP + -0x28]
0064abcb  CMP dword ptr [ECX + 0x18c],0x0
0064abd2  JZ 0x0064ac13
0064abd4  MOV EDX,dword ptr [EBP + -0x28]
0064abd7  MOV EAX,dword ptr [EDX + 0x18c]
0064abdd  MOV dword ptr [EBP + -0x14],EAX
0064abe0  MOV ECX,dword ptr [EBP + -0x14]
0064abe3  MOV dword ptr [EBP + -0x10],ECX
0064abe6  CMP dword ptr [EBP + -0x10],0x0
0064abea  JZ 0x0064abff
0064abec  PUSH 0x1
0064abee  MOV EDX,dword ptr [EBP + -0x10]
0064abf1  MOV EAX,dword ptr [EDX]
0064abf3  MOV ECX,dword ptr [EBP + -0x10]
0064abf6  MOV EDX,dword ptr [EAX]
0064abf8  CALL EDX
0064abfa  MOV dword ptr [EBP + -0x2c],EAX
0064abfd  JMP 0x0064ac06
0064abff  MOV dword ptr [EBP + -0x2c],0x0
0064ac06  MOV EAX,dword ptr [EBP + -0x28]
0064ac09  MOV dword ptr [EAX + 0x18c],0x0
0064ac13  MOV ECX,dword ptr [EBP + -0x28]
0064ac16  CMP dword ptr [ECX + 0x190],0x0
0064ac1d  JZ 0x0064ac5e
0064ac1f  MOV EDX,dword ptr [EBP + -0x28]
0064ac22  MOV EAX,dword ptr [EDX + 0x190]
0064ac28  MOV dword ptr [EBP + -0x1c],EAX
0064ac2b  MOV ECX,dword ptr [EBP + -0x1c]
0064ac2e  MOV dword ptr [EBP + -0x18],ECX
0064ac31  CMP dword ptr [EBP + -0x18],0x0
0064ac35  JZ 0x0064ac4a
0064ac37  PUSH 0x1
0064ac39  MOV EDX,dword ptr [EBP + -0x18]
0064ac3c  MOV EAX,dword ptr [EDX]
0064ac3e  MOV ECX,dword ptr [EBP + -0x18]
0064ac41  MOV EDX,dword ptr [EAX]
0064ac43  CALL EDX
0064ac45  MOV dword ptr [EBP + -0x30],EAX
0064ac48  JMP 0x0064ac51
0064ac4a  MOV dword ptr [EBP + -0x30],0x0
0064ac51  MOV EAX,dword ptr [EBP + -0x28]
0064ac54  MOV dword ptr [EAX + 0x190],0x0
0064ac5e  MOV ECX,dword ptr [EBP + -0x28]
0064ac61  CMP dword ptr [ECX + 0x194],0x0
0064ac68  JZ 0x0064aca9
0064ac6a  MOV EDX,dword ptr [EBP + -0x28]
0064ac6d  MOV EAX,dword ptr [EDX + 0x194]
0064ac73  MOV dword ptr [EBP + -0x24],EAX
0064ac76  MOV ECX,dword ptr [EBP + -0x24]
0064ac79  MOV dword ptr [EBP + -0x20],ECX
0064ac7c  CMP dword ptr [EBP + -0x20],0x0
0064ac80  JZ 0x0064ac95
0064ac82  PUSH 0x1
0064ac84  MOV EDX,dword ptr [EBP + -0x20]
0064ac87  MOV EAX,dword ptr [EDX]
0064ac89  MOV ECX,dword ptr [EBP + -0x20]
0064ac8c  MOV EDX,dword ptr [EAX]
0064ac8e  CALL EDX
0064ac90  MOV dword ptr [EBP + -0x34],EAX
0064ac93  JMP 0x0064ac9c
0064ac95  MOV dword ptr [EBP + -0x34],0x0
0064ac9c  MOV EAX,dword ptr [EBP + -0x28]
0064ac9f  MOV dword ptr [EAX + 0x194],0x0
0064aca9  MOV ECX,dword ptr [EBP + -0x28]
0064acac  CALL 0x0064b830
0064acb1  MOV dword ptr [EBP + -0x4],0xffffffff
0064acb8  MOV ECX,dword ptr [EBP + -0x28]
0064acbb  CALL 0x005f5c40
0064acc0  MOV ECX,dword ptr [EBP + -0xc]
0064acc3  MOV dword ptr FS:[0x0],ECX
0064acca  POP ECX
0064accb  MOV ESP,EBP
0064accd  POP EBP
0064acce  RET
