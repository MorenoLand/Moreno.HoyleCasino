; FUN_0064c5c0  0064c5c0
0064c5c0  PUSH EBP
0064c5c1  MOV EBP,ESP
0064c5c3  SUB ESP,0x14
0064c5c6  MOV dword ptr [EBP + -0x14],ECX
0064c5c9  MOV EAX,dword ptr [EBP + -0x14]
0064c5cc  MOV ECX,dword ptr [EAX + 0x4]
0064c5cf  PUSH ECX
0064c5d0  MOV EDX,dword ptr [EBP + -0x14]
0064c5d3  MOV EAX,dword ptr [EDX]
0064c5d5  PUSH EAX
0064c5d6  CALL 0x0064c8a0
0064c5db  ADD ESP,0x8
0064c5de  MOV dword ptr [EBP + -0x10],EAX
0064c5e1  MOV dword ptr [EBP + -0xc],EDX
0064c5e4  MOV ECX,dword ptr [EBP + -0x10]
0064c5e7  MOV dword ptr [EBP + -0x8],ECX
0064c5ea  MOV EDX,dword ptr [EBP + -0xc]
0064c5ed  MOV dword ptr [EBP + -0x4],EDX
0064c5f0  FILD dword ptr [EBP + 0xc]
0064c5f3  FMUL double ptr [0x006b4b00]
0064c5f9  FIADD dword ptr [EBP + 0x10]
0064c5fc  SUB ESP,0x8
0064c5ff  FSTP double ptr [ESP]
0064c602  LEA ECX,[EBP + -0x8]
0064c605  CALL 0x0064c510
0064c60a  MOV EAX,dword ptr [EBP + 0x8]
0064c60d  MOV ECX,dword ptr [EBP + -0x8]
0064c610  MOV dword ptr [EAX],ECX
0064c612  MOV EDX,dword ptr [EBP + -0x4]
0064c615  MOV dword ptr [EAX + 0x4],EDX
0064c618  MOV EAX,dword ptr [EBP + 0x8]
0064c61b  MOV ESP,EBP
0064c61d  POP EBP
0064c61e  RET 0xc
