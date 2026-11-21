; FUN_0041a190  0041a190
0041a190  PUSH EBP
0041a191  MOV EBP,ESP
0041a193  SUB ESP,0x24
0041a196  PUSH ESI
0041a197  MOV dword ptr [EBP + -0x24],ECX
0041a19a  MOV dword ptr [EBP + -0x4],0x0
0041a1a1  JMP 0x0041a1ac
0041a1a3  MOV EAX,dword ptr [EBP + -0x4]
0041a1a6  ADD EAX,0x1
0041a1a9  MOV dword ptr [EBP + -0x4],EAX
0041a1ac  CMP dword ptr [EBP + -0x4],0x4
0041a1b0  JGE 0x0041a255
0041a1b6  MOV ECX,dword ptr [EBP + -0x4]
0041a1b9  PUSH ECX
0041a1ba  CALL 0x005dcb00
0041a1bf  ADD ESP,0x4
0041a1c2  MOV dword ptr [EBP + -0x18],EAX
0041a1c5  MOV EDX,dword ptr [EBP + -0x18]
0041a1c8  MOV AL,byte ptr [EDX + 0x4a0]
0041a1ce  MOV byte ptr [EBP + -0x19],AL
0041a1d1  MOVZX ECX,byte ptr [EBP + -0x19]
0041a1d5  TEST ECX,ECX
0041a1d7  JZ 0x0041a224
0041a1d9  MOV EDX,dword ptr [EBP + -0x4]
0041a1dc  MOV EAX,dword ptr [EBP + -0x24]
0041a1df  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x468]
0041a1e6  MOV dword ptr [EBP + -0x20],ECX
0041a1e9  MOV EDX,dword ptr [EBP + -0x4]
0041a1ec  SHL EDX,0x5
0041a1ef  MOV EAX,dword ptr [EBP + -0x20]
0041a1f2  LEA ECX,[EAX + EDX*0x1 + 0x48]
0041a1f6  XOR EDX,EDX
0041a1f8  SHL EDX,0x3
0041a1fb  MOV EAX,dword ptr [ECX + EDX*0x1]
0041a1fe  MOV ECX,dword ptr [ECX + EDX*0x1 + 0x4]
0041a202  MOV dword ptr [EBP + -0xc],EAX
0041a205  MOV dword ptr [EBP + -0x8],ECX
0041a208  MOV EDX,dword ptr [EBP + -0xc]
0041a20b  MOV EAX,dword ptr [EBP + -0x8]
0041a20e  MOV ECX,dword ptr [EBP + -0x4]
0041a211  MOV ESI,dword ptr [EBP + -0x24]
0041a214  MOV dword ptr [ESI + ECX*0x8 + 0x478],EDX
0041a21b  MOV dword ptr [ESI + ECX*0x8 + 0x47c],EAX
0041a222  JMP 0x0041a250
0041a224  PUSH 0x0
0041a226  PUSH 0x0
0041a228  CALL 0x0064c8a0
0041a22d  ADD ESP,0x8
0041a230  MOV dword ptr [EBP + -0x14],EAX
0041a233  MOV dword ptr [EBP + -0x10],EDX
0041a236  MOV EDX,dword ptr [EBP + -0x4]
0041a239  MOV EAX,dword ptr [EBP + -0x24]
0041a23c  MOV ECX,dword ptr [EBP + -0x14]
0041a23f  MOV dword ptr [EAX + EDX*0x8 + 0x478],ECX
0041a246  MOV ECX,dword ptr [EBP + -0x10]
0041a249  MOV dword ptr [EAX + EDX*0x8 + 0x47c],ECX
0041a250  JMP 0x0041a1a3
0041a255  POP ESI
0041a256  MOV ESP,EBP
0041a258  POP EBP
0041a259  RET
