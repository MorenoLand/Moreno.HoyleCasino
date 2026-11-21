; FUN_0040dc70  0040dc70
0040dc70  PUSH EBP
0040dc71  MOV EBP,ESP
0040dc73  SUB ESP,0xc
0040dc76  MOV dword ptr [EBP + -0xc],ECX
0040dc79  MOV ECX,dword ptr [EBP + -0xc]
0040dc7c  CALL 0x005e9e20
0040dc81  MOV EAX,dword ptr [EBP + -0xc]
0040dc84  MOV dword ptr [EAX],0x6b38ec
0040dc8a  MOV dword ptr [EBP + -0x4],0x0
0040dc91  JMP 0x0040dc9c
0040dc93  MOV ECX,dword ptr [EBP + -0x4]
0040dc96  ADD ECX,0x1
0040dc99  MOV dword ptr [EBP + -0x4],ECX
0040dc9c  CMP dword ptr [EBP + -0x4],0x4
0040dca0  JGE 0x0040dcd5
0040dca2  MOV dword ptr [EBP + -0x8],0x0
0040dca9  JMP 0x0040dcb4
0040dcab  MOV EDX,dword ptr [EBP + -0x8]
0040dcae  ADD EDX,0x1
0040dcb1  MOV dword ptr [EBP + -0x8],EDX
0040dcb4  CMP dword ptr [EBP + -0x8],0x16
0040dcb8  JGE 0x0040dcd3
0040dcba  MOV EAX,dword ptr [EBP + -0x4]
0040dcbd  IMUL EAX,EAX,0x58
0040dcc0  MOV ECX,dword ptr [EBP + -0xc]
0040dcc3  LEA EDX,[ECX + EAX*0x1 + 0x28]
0040dcc7  MOV EAX,dword ptr [EBP + -0x8]
0040dcca  MOV dword ptr [EDX + EAX*0x4],0x0
0040dcd1  JMP 0x0040dcab
0040dcd3  JMP 0x0040dc93
0040dcd5  MOV dword ptr [EBP + -0x4],0x0
0040dcdc  JMP 0x0040dce7
0040dcde  MOV ECX,dword ptr [EBP + -0x4]
0040dce1  ADD ECX,0x1
0040dce4  MOV dword ptr [EBP + -0x4],ECX
0040dce7  CMP dword ptr [EBP + -0x4],0x4
0040dceb  JGE 0x0040dd0b
0040dced  MOV EDX,dword ptr [EBP + -0x4]
0040dcf0  MOV EAX,dword ptr [EBP + -0xc]
0040dcf3  MOV dword ptr [EAX + EDX*0x4 + 0x8],0x0
0040dcfb  MOV ECX,dword ptr [EBP + -0x4]
0040dcfe  MOV EDX,dword ptr [EBP + -0xc]
0040dd01  MOV dword ptr [EDX + ECX*0x4 + 0x18],0x0
0040dd09  JMP 0x0040dcde
0040dd0b  MOV EAX,dword ptr [EBP + -0xc]
0040dd0e  MOV ESP,EBP
0040dd10  POP EBP
0040dd11  RET
