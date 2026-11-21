; FUN_0054a0c0  0054a0c0
0054a0c0  PUSH EBP
0054a0c1  MOV EBP,ESP
0054a0c3  SUB ESP,0xc
0054a0c6  MOV dword ptr [EBP + -0x8],ECX
0054a0c9  MOV EAX,dword ptr [EBP + 0x8]
0054a0cc  IMUL EAX,EAX,0xc
0054a0cf  MOV ECX,dword ptr [EBP + -0x8]
0054a0d2  LEA EDX,[ECX + EAX*0x1 + 0x28]
0054a0d6  MOV EAX,dword ptr [EBP + 0xc]
0054a0d9  MOV CX,word ptr [EDX + EAX*0x2]
0054a0dd  PUSH ECX
0054a0de  CALL 0x00641280
0054a0e3  ADD ESP,0x4
0054a0e6  MOV dword ptr [EBP + -0x4],EAX
0054a0e9  CMP dword ptr [EBP + -0x4],0xa
0054a0ed  JLE 0x0054a0f8
0054a0ef  MOV dword ptr [EBP + -0xc],0xa
0054a0f6  JMP 0x0054a0fe
0054a0f8  MOV EDX,dword ptr [EBP + -0x4]
0054a0fb  MOV dword ptr [EBP + -0xc],EDX
0054a0fe  MOV EAX,dword ptr [EBP + -0xc]
0054a101  MOV ESP,EBP
0054a103  POP EBP
0054a104  RET 0x8
