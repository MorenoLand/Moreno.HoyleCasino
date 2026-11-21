; FUN_0060c890  0060c890
0060c890  PUSH EBP
0060c891  MOV EBP,ESP
0060c893  SUB ESP,0x8
0060c896  MOV dword ptr [EBP + -0x8],ECX
0060c899  MOV EAX,dword ptr [EBP + 0x8]
0060c89c  PUSH EAX
0060c89d  MOV ECX,dword ptr [EBP + -0x8]
0060c8a0  CALL 0x0060cac0
0060c8a5  MOV dword ptr [EBP + -0x4],EAX
0060c8a8  CMP dword ptr [EBP + -0x4],-0x1
0060c8ac  JZ 0x0060c906
0060c8ae  MOV ECX,dword ptr [EBP + -0x8]
0060c8b1  MOV EDX,dword ptr [ECX + 0x4]
0060c8b4  SUB EDX,dword ptr [EBP + -0x4]
0060c8b7  LEA EAX,[EDX*0x4 + 0xfffffffc]
0060c8be  PUSH EAX
0060c8bf  MOV ECX,dword ptr [EBP + -0x8]
0060c8c2  MOV EDX,dword ptr [ECX + 0xc]
0060c8c5  MOV EAX,dword ptr [EBP + -0x4]
0060c8c8  LEA ECX,[EDX + EAX*0x4 + 0x4]
0060c8cc  PUSH ECX
0060c8cd  MOV EDX,dword ptr [EBP + -0x8]
0060c8d0  MOV EAX,dword ptr [EDX + 0xc]
0060c8d3  MOV ECX,dword ptr [EBP + -0x4]
0060c8d6  LEA EDX,[EAX + ECX*0x4]
0060c8d9  PUSH EDX
0060c8da  CALL dword ptr [0x006b22d8]
0060c8e0  ADD ESP,0xc
0060c8e3  MOV EAX,dword ptr [EBP + -0x8]
0060c8e6  MOV ECX,dword ptr [EAX + 0x4]
0060c8e9  MOV EDX,dword ptr [EBP + -0x8]
0060c8ec  MOV EAX,dword ptr [EDX + 0xc]
0060c8ef  MOV dword ptr [EAX + ECX*0x4 + -0x4],0x0
0060c8f7  MOV ECX,dword ptr [EBP + -0x8]
0060c8fa  MOV EDX,dword ptr [ECX + 0x4]
0060c8fd  SUB EDX,0x1
0060c900  MOV EAX,dword ptr [EBP + -0x8]
0060c903  MOV dword ptr [EAX + 0x4],EDX
0060c906  MOV ESP,EBP
0060c908  POP EBP
0060c909  RET 0x4
