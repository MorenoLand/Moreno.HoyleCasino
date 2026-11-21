; FUN_00458b50  00458b50
00458b50  PUSH EBP
00458b51  MOV EBP,ESP
00458b53  SUB ESP,0xc
00458b56  MOV dword ptr [EBP + -0x8],ECX
00458b59  MOV EAX,dword ptr [EBP + 0xc]
00458b5c  MOV dword ptr [EBP + -0x4],EAX
00458b5f  CMP dword ptr [EBP + 0xc],0x2
00458b63  JL 0x00458b67
00458b65  JMP 0x00458bce
00458b67  MOV ECX,dword ptr [EBP + -0x4]
00458b6a  MOV EDX,dword ptr [EBP + 0x8]
00458b6d  LEA EAX,[EDX + ECX*0x4]
00458b70  MOV ECX,dword ptr [EBP + -0x8]
00458b73  CMP dword ptr [ECX + EAX*0x4 + 0x18],0x0
00458b78  JZ 0x00458bce
00458b7a  MOV EDX,dword ptr [EBP + 0xc]
00458b7d  PUSH EDX
00458b7e  MOV EAX,dword ptr [EBP + 0x8]
00458b81  PUSH EAX
00458b82  MOV ECX,dword ptr [EBP + -0x4]
00458b85  MOV EDX,dword ptr [EBP + 0x8]
00458b88  LEA EAX,[EDX + ECX*0x4]
00458b8b  MOV ECX,dword ptr [EBP + -0x8]
00458b8e  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x18]
00458b92  MOV EAX,dword ptr [EBP + -0x4]
00458b95  MOV ECX,dword ptr [EBP + 0x8]
00458b98  LEA EAX,[ECX + EAX*0x4]
00458b9b  MOV ECX,dword ptr [EBP + -0x8]
00458b9e  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x18]
00458ba2  MOV EDX,dword ptr [EDX]
00458ba4  MOV EAX,dword ptr [EDX + 0xb8]
00458baa  CALL EAX
00458bac  CMP dword ptr [EBP + 0x8],0x4
00458bb0  JZ 0x00458bce
00458bb2  MOV ECX,dword ptr [EBP + 0x8]
00458bb5  PUSH ECX
00458bb6  CALL 0x005dcb00
00458bbb  ADD ESP,0x4
00458bbe  MOV dword ptr [EBP + -0xc],EAX
00458bc1  MOV EDX,dword ptr [EBP + -0xc]
00458bc4  MOV EAX,dword ptr [EDX]
00458bc6  MOV ECX,dword ptr [EBP + -0xc]
00458bc9  MOV EDX,dword ptr [EAX + 0x14]
00458bcc  CALL EDX
00458bce  MOV ESP,EBP
00458bd0  POP EBP
00458bd1  RET 0x8
