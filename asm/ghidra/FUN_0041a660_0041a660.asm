; FUN_0041a660  0041a660
0041a660  PUSH EBP
0041a661  MOV EBP,ESP
0041a663  SUB ESP,0x20
0041a666  MOV dword ptr [EBP + -0x20],ECX
0041a669  MOV EAX,dword ptr [EBP + 0xc]
0041a66c  MOV ECX,dword ptr [EBP + -0x20]
0041a66f  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x468]
0041a676  MOV dword ptr [EBP + -0x1c],EDX
0041a679  MOV EAX,dword ptr [EBP + 0xc]
0041a67c  SHL EAX,0x5
0041a67f  MOV ECX,dword ptr [EBP + -0x1c]
0041a682  LEA EDX,[ECX + EAX*0x1 + 0x48]
0041a686  XOR EAX,EAX
0041a688  SHL EAX,0x3
0041a68b  MOV ECX,dword ptr [EDX + EAX*0x1]
0041a68e  MOV EDX,dword ptr [EDX + EAX*0x1 + 0x4]
0041a692  MOV dword ptr [EBP + -0x8],ECX
0041a695  MOV dword ptr [EBP + -0x4],EDX
0041a698  PUSH 0x0
0041a69a  PUSH 0x0
0041a69c  CALL 0x0064c8a0
0041a6a1  ADD ESP,0x8
0041a6a4  MOV dword ptr [EBP + -0x18],EAX
0041a6a7  MOV dword ptr [EBP + -0x14],EDX
0041a6aa  MOV EAX,dword ptr [EBP + -0x18]
0041a6ad  MOV dword ptr [EBP + -0x10],EAX
0041a6b0  MOV ECX,dword ptr [EBP + -0x14]
0041a6b3  MOV dword ptr [EBP + -0xc],ECX
0041a6b6  MOV EDX,dword ptr [EBP + -0x8]
0041a6b9  AND EDX,0x80000001
0041a6bf  JNS 0x0041a6c6
0041a6c1  DEC EDX
0041a6c2  OR EDX,0xfffffffe
0041a6c5  INC EDX
0041a6c6  TEST EDX,EDX
0041a6c8  JZ 0x0041a6d1
0041a6ca  MOV dword ptr [EBP + -0xc],0x32
0041a6d1  MOV EAX,dword ptr [EBP + -0x8]
0041a6d4  CDQ
0041a6d5  SUB EAX,EDX
0041a6d7  SAR EAX,0x1
0041a6d9  MOV dword ptr [EBP + -0x10],EAX
0041a6dc  MOV EAX,dword ptr [EBP + 0x8]
0041a6df  MOV ECX,dword ptr [EBP + -0x10]
0041a6e2  MOV dword ptr [EAX],ECX
0041a6e4  MOV EDX,dword ptr [EBP + -0xc]
0041a6e7  MOV dword ptr [EAX + 0x4],EDX
0041a6ea  MOV EAX,dword ptr [EBP + 0x8]
0041a6ed  MOV ESP,EBP
0041a6ef  POP EBP
0041a6f0  RET 0x8
