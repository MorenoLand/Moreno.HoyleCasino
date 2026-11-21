; FUN_0064fa90  0064fa90
0064fa90  PUSH EBP
0064fa91  MOV EBP,ESP
0064fa93  PUSH -0x1
0064fa95  PUSH 0x6ac267
0064fa9a  MOV EAX,FS:[0x0]
0064faa0  PUSH EAX
0064faa1  SUB ESP,0x14
0064faa4  MOV EAX,[0x00781870]
0064faa9  XOR EAX,EBP
0064faab  PUSH EAX
0064faac  LEA EAX,[EBP + -0xc]
0064faaf  MOV FS:[0x0],EAX
0064fab5  MOV dword ptr [EBP + -0x18],ECX
0064fab8  MOV EAX,dword ptr [EBP + -0x18]
0064fabb  MOV CL,byte ptr [EBP + 0x8]
0064fabe  MOV byte ptr [EAX + 0x48],CL
0064fac1  MOV EDX,dword ptr [EBP + -0x18]
0064fac4  CMP dword ptr [EDX + 0x4],0x0
0064fac8  JNZ 0x0064fae1
0064faca  PUSH 0x507
0064facf  PUSH 0x6dd084
0064fad4  PUSH 0x6dd10c
0064fad9  CALL 0x005e9f20
0064fade  ADD ESP,0xc
0064fae1  MOVZX ECX,byte ptr [EBP + 0x8]
0064fae5  TEST ECX,ECX
0064fae7  JZ 0x0064fb79
0064faed  MOV ECX,dword ptr [0x0162ee84]
0064faf3  CALL 0x005f3bf0
0064faf8  PUSH EAX
0064faf9  MOV EDX,dword ptr [0x0162ee84]
0064faff  MOV EAX,dword ptr [EDX]
0064fb01  MOV ECX,dword ptr [0x0162ee84]
0064fb07  MOV EDX,dword ptr [EAX + 0xe0]
0064fb0d  CALL EDX
0064fb0f  MOV dword ptr [EBP + -0x1c],EAX
0064fb12  MOV EAX,dword ptr [EBP + -0x1c]
0064fb15  MOV EDX,dword ptr [EAX]
0064fb17  MOV ECX,dword ptr [EBP + -0x1c]
0064fb1a  MOV EAX,dword ptr [EDX + 0xac]
0064fb20  CALL EAX
0064fb22  MOVZX ECX,AL
0064fb25  TEST ECX,ECX
0064fb27  JZ 0x0064fb79
0064fb29  PUSH 0x2c
0064fb2b  CALL 0x00686d82
0064fb30  ADD ESP,0x4
0064fb33  MOV dword ptr [EBP + -0x14],EAX
0064fb36  MOV dword ptr [EBP + -0x4],0x0
0064fb3d  CMP dword ptr [EBP + -0x14],0x0
0064fb41  JZ 0x0064fb54
0064fb43  MOV EDX,dword ptr [EBP + 0xc]
0064fb46  PUSH EDX
0064fb47  MOV ECX,dword ptr [EBP + -0x14]
0064fb4a  CALL 0x00678690
0064fb4f  MOV dword ptr [EBP + -0x20],EAX
0064fb52  JMP 0x0064fb5b
0064fb54  MOV dword ptr [EBP + -0x20],0x0
0064fb5b  MOV EAX,dword ptr [EBP + -0x20]
0064fb5e  MOV dword ptr [EBP + -0x10],EAX
0064fb61  MOV dword ptr [EBP + -0x4],0xffffffff
0064fb68  MOV ECX,dword ptr [EBP + -0x10]
0064fb6b  PUSH ECX
0064fb6c  MOV EDX,dword ptr [EBP + -0x18]
0064fb6f  MOV ECX,dword ptr [EDX + 0x4]
0064fb72  CALL 0x005fc420
0064fb77  JMP 0x0064fb86
0064fb79  PUSH 0x0
0064fb7b  MOV EAX,dword ptr [EBP + -0x18]
0064fb7e  MOV ECX,dword ptr [EAX + 0x4]
0064fb81  CALL 0x005fc420
0064fb86  MOV ECX,dword ptr [EBP + -0xc]
0064fb89  MOV dword ptr FS:[0x0],ECX
0064fb90  POP ECX
0064fb91  MOV ESP,EBP
0064fb93  POP EBP
0064fb94  RET 0x8
