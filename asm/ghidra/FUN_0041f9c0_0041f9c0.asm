; FUN_0041f9c0  0041f9c0
0041f9c0  PUSH EBP
0041f9c1  MOV EBP,ESP
0041f9c3  PUSH -0x1
0041f9c5  PUSH 0x69dfbd
0041f9ca  MOV EAX,FS:[0x0]
0041f9d0  PUSH EAX
0041f9d1  SUB ESP,0x10
0041f9d4  MOV EAX,[0x00781870]
0041f9d9  XOR EAX,EBP
0041f9db  PUSH EAX
0041f9dc  LEA EAX,[EBP + -0xc]
0041f9df  MOV FS:[0x0],EAX
0041f9e5  MOV dword ptr [EBP + -0x18],ECX
0041f9e8  PUSH 0x0
0041f9ea  MOV EAX,dword ptr [EBP + 0x8]
0041f9ed  MOV ECX,dword ptr [EBP + -0x18]
0041f9f0  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x54]
0041f9f4  MOV EAX,dword ptr [EBP + 0x8]
0041f9f7  MOV ECX,dword ptr [EBP + -0x18]
0041f9fa  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x54]
0041f9fe  MOV EDX,dword ptr [EDX]
0041fa00  MOV EAX,dword ptr [EDX + 0xb0]
0041fa06  CALL EAX
0041fa08  MOV ECX,dword ptr [EBP + 0x8]
0041fa0b  MOV EDX,dword ptr [EBP + -0x18]
0041fa0e  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x54]
0041fa12  MOV ECX,dword ptr [EBP + 0x8]
0041fa15  MOV EDX,dword ptr [EBP + -0x18]
0041fa18  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x54]
0041fa1c  MOV EAX,dword ptr [EAX]
0041fa1e  MOV EDX,dword ptr [EAX + 0x74]
0041fa21  CALL EDX
0041fa23  PUSH 0x20
0041fa25  CALL 0x00686d82
0041fa2a  ADD ESP,0x4
0041fa2d  MOV dword ptr [EBP + -0x14],EAX
0041fa30  MOV dword ptr [EBP + -0x4],0x0
0041fa37  CMP dword ptr [EBP + -0x14],0x0
0041fa3b  JZ 0x0041fa4e
0041fa3d  PUSH 0x0
0041fa3f  PUSH 0x3
0041fa41  MOV ECX,dword ptr [EBP + -0x14]
0041fa44  CALL 0x00600f30
0041fa49  MOV dword ptr [EBP + -0x1c],EAX
0041fa4c  JMP 0x0041fa55
0041fa4e  MOV dword ptr [EBP + -0x1c],0x0
0041fa55  MOV EAX,dword ptr [EBP + -0x1c]
0041fa58  MOV dword ptr [EBP + -0x10],EAX
0041fa5b  MOV dword ptr [EBP + -0x4],0xffffffff
0041fa62  MOV ECX,dword ptr [EBP + -0x10]
0041fa65  PUSH ECX
0041fa66  MOV EDX,dword ptr [EBP + 0x8]
0041fa69  MOV EAX,dword ptr [EBP + -0x18]
0041fa6c  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x54]
0041fa70  CALL 0x005f5d50
0041fa75  PUSH 0x0
0041fa77  PUSH ECX
0041fa78  FLD float ptr [0x006b3654]
0041fa7e  FSTP float ptr [ESP]
0041fa81  PUSH ECX
0041fa82  FLD1
0041fa84  FSTP float ptr [ESP]
0041fa87  PUSH 0x1
0041fa89  PUSH 0x5
0041fa8b  PUSH 0x0
0041fa8d  PUSH 0x0
0041fa8f  PUSH 0x3106c8
0041fa94  MOV ECX,dword ptr [0x0162ee84]
0041fa9a  MOV EDX,dword ptr [ECX]
0041fa9c  MOV ECX,dword ptr [0x0162ee84]
0041faa2  MOV EAX,dword ptr [EDX + 0x80]
0041faa8  CALL EAX
0041faaa  MOV ECX,dword ptr [EBP + -0xc]
0041faad  MOV dword ptr FS:[0x0],ECX
0041fab4  POP ECX
0041fab5  MOV ESP,EBP
0041fab7  POP EBP
0041fab8  RET 0x4
