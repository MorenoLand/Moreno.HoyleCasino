; FUN_0040cd50  0040cd50
0040cd50  PUSH EBP
0040cd51  MOV EBP,ESP
0040cd53  SUB ESP,0x8
0040cd56  MOV dword ptr [EBP + -0x4],ECX
0040cd59  CMP dword ptr [EBP + 0x8],0x0
0040cd5d  JL 0x0040cd65
0040cd5f  CMP dword ptr [EBP + 0x8],0x4
0040cd63  JL 0x0040cd67
0040cd65  JMP 0x0040cdb6
0040cd67  MOV EAX,dword ptr [EBP + 0x8]
0040cd6a  MOV ECX,dword ptr [EBP + -0x4]
0040cd6d  CMP dword ptr [ECX + EAX*0x4 + 0x18],0x0
0040cd72  JZ 0x0040cdb6
0040cd74  MOV EDX,dword ptr [EBP + 0xc]
0040cd77  PUSH EDX
0040cd78  MOV EAX,dword ptr [EBP + 0x8]
0040cd7b  PUSH EAX
0040cd7c  MOV ECX,dword ptr [EBP + 0x8]
0040cd7f  MOV EDX,dword ptr [EBP + -0x4]
0040cd82  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x18]
0040cd86  MOV ECX,dword ptr [EBP + 0x8]
0040cd89  MOV EDX,dword ptr [EBP + -0x4]
0040cd8c  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x18]
0040cd90  MOV EAX,dword ptr [EAX]
0040cd92  MOV EDX,dword ptr [EAX + 0xb8]
0040cd98  CALL EDX
0040cd9a  MOV EAX,dword ptr [EBP + 0x8]
0040cd9d  PUSH EAX
0040cd9e  CALL 0x005dcb00
0040cda3  ADD ESP,0x4
0040cda6  MOV dword ptr [EBP + -0x8],EAX
0040cda9  MOV ECX,dword ptr [EBP + -0x8]
0040cdac  MOV EDX,dword ptr [ECX]
0040cdae  MOV ECX,dword ptr [EBP + -0x8]
0040cdb1  MOV EAX,dword ptr [EDX + 0x14]
0040cdb4  CALL EAX
0040cdb6  MOV ESP,EBP
0040cdb8  POP EBP
0040cdb9  RET 0x8
