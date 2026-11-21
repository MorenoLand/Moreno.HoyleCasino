; FUN_005782c0  005782c0
005782c0  PUSH EBP
005782c1  MOV EBP,ESP
005782c3  SUB ESP,0x120
005782c9  MOV EAX,[0x00781870]
005782ce  XOR EAX,EBP
005782d0  MOV dword ptr [EBP + -0x4],EAX
005782d3  MOV dword ptr [EBP + 0xfffffef0],ECX
005782d9  MOV EAX,dword ptr [EBP + 0xfffffef0]
005782df  MOV ECX,dword ptr [EBP + 0xc]
005782e2  MOV dword ptr [EAX + 0x24],ECX
005782e5  MOV dword ptr [EBP + 0xfffffef4],0x0
005782ef  JMP 0x00578300
005782f1  MOV EDX,dword ptr [EBP + 0xfffffef4]
005782f7  ADD EDX,0x1
005782fa  MOV dword ptr [EBP + 0xfffffef4],EDX
00578300  MOV EAX,dword ptr [EBP + 0xfffffef4]
00578306  CMP EAX,dword ptr [EBP + 0x8]
00578309  JGE 0x00578365
0057830b  MOV ECX,dword ptr [EBP + 0xfffffef0]
00578311  CMP dword ptr [ECX + 0x10],0x0
00578315  JL 0x00578326
00578317  MOV EDX,dword ptr [EBP + 0xfffffef0]
0057831d  MOV dword ptr [EDX + 0x24],0x3
00578324  JMP 0x00578332
00578326  MOV EAX,dword ptr [EBP + 0xfffffef0]
0057832c  MOV ECX,dword ptr [EBP + 0xc]
0057832f  MOV dword ptr [EAX + 0x24],ECX
00578332  MOV EDX,dword ptr [EBP + 0xfffffef0]
00578338  MOV EAX,dword ptr [EDX + 0x20]
0057833b  MOV ECX,dword ptr [EBP + 0xfffffef0]
00578341  ADD EAX,dword ptr [ECX + 0x24]
00578344  MOV EDX,dword ptr [EBP + 0xfffffef0]
0057834a  MOV dword ptr [EDX + 0x20],EAX
0057834d  MOV ECX,dword ptr [EBP + 0xfffffef0]
00578353  CALL 0x00578420
00578358  MOV ECX,dword ptr [EBP + 0xfffffef0]
0057835e  CALL 0x005784e0
00578363  JMP 0x005782f1
00578365  MOV EAX,dword ptr [EBP + 0xfffffef0]
0057836b  MOV ECX,dword ptr [EAX + 0x18]
0057836e  MOV EDX,dword ptr [EBP + 0xfffffef0]
00578374  ADD ECX,dword ptr [EDX + 0x1c]
00578377  MOV dword ptr [EBP + 0xfffffeec],ECX
0057837d  FILD dword ptr [EBP + 0xfffffeec]
00578383  MOV EAX,dword ptr [EBP + 0xfffffef0]
00578389  MOV ECX,dword ptr [EBP + 0x8]
0057838c  IMUL ECX,dword ptr [EAX + 0x24]
00578390  MOV dword ptr [EBP + 0xfffffee8],ECX
00578396  FIDIV dword ptr [EBP + 0xfffffee8]
0057839c  FSTP float ptr [EBP + 0xfffffee4]
005783a2  FLD float ptr [EBP + 0xfffffee4]
005783a8  FMUL double ptr [0x006b4b00]
005783ae  FSTP float ptr [EBP + 0xfffffee0]
005783b4  FLD float ptr [EBP + 0xfffffee0]
005783ba  SUB ESP,0x8
005783bd  FSTP double ptr [ESP]
005783c0  MOV EDX,dword ptr [EBP + 0xfffffef0]
005783c6  MOV EAX,dword ptr [EDX + 0x1c]
005783c9  PUSH EAX
005783ca  MOV ECX,dword ptr [EBP + 0xfffffef0]
005783d0  MOV EDX,dword ptr [ECX + 0x18]
005783d3  PUSH EDX
005783d4  MOV EAX,dword ptr [EBP + 0xfffffef0]
005783da  MOV ECX,dword ptr [EAX + 0x18]
005783dd  MOV EDX,dword ptr [EBP + 0xfffffef0]
005783e3  ADD ECX,dword ptr [EDX + 0x1c]
005783e6  PUSH ECX
005783e7  MOV EAX,dword ptr [EBP + 0x8]
005783ea  PUSH EAX
005783eb  PUSH 0x6cb194
005783f0  LEA ECX,[EBP + 0xfffffef8]
005783f6  PUSH ECX
005783f7  CALL dword ptr [0x006b2220]
005783fd  ADD ESP,0x20
00578400  LEA EDX,[EBP + 0xfffffef8]
00578406  PUSH EDX
00578407  CALL 0x0062fde0
0057840c  ADD ESP,0x4
0057840f  MOV ECX,dword ptr [EBP + -0x4]
00578412  XOR ECX,EBP
00578414  CALL 0x00686d72
00578419  MOV ESP,EBP
0057841b  POP EBP
0057841c  RET 0x8
