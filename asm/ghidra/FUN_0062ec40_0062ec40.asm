; FUN_0062ec40  0062ec40
0062ec40  PUSH EBP
0062ec41  MOV EBP,ESP
0062ec43  PUSH -0x1
0062ec45  PUSH 0x6ab7cb
0062ec4a  MOV EAX,FS:[0x0]
0062ec50  PUSH EAX
0062ec51  SUB ESP,0xc
0062ec54  MOV EAX,[0x00781870]
0062ec59  XOR EAX,EBP
0062ec5b  PUSH EAX
0062ec5c  LEA EAX,[EBP + -0xc]
0062ec5f  MOV FS:[0x0],EAX
0062ec65  MOV dword ptr [EBP + -0x18],ECX
0062ec68  MOV EAX,dword ptr [EBP + -0x18]
0062ec6b  MOV dword ptr [EAX],0x6d9ba4
0062ec71  MOV ECX,dword ptr [EBP + -0x18]
0062ec74  ADD ECX,0x4
0062ec77  CALL 0x0062f920
0062ec7c  MOV dword ptr [EBP + -0x4],0x0
0062ec83  MOV ECX,dword ptr [EBP + -0x18]
0062ec86  MOV dword ptr [ECX + 0x20],0x0
0062ec8d  MOV EDX,dword ptr [EBP + -0x18]
0062ec90  MOV dword ptr [EDX + 0x24],0x0
0062ec97  PUSH 0x1000
0062ec9c  CALL 0x00686d82
0062eca1  ADD ESP,0x4
0062eca4  MOV dword ptr [EBP + -0x10],EAX
0062eca7  MOV EAX,dword ptr [EBP + -0x18]
0062ecaa  MOV ECX,dword ptr [EBP + -0x10]
0062ecad  MOV dword ptr [EAX + 0x2c],ECX
0062ecb0  MOV EDX,dword ptr [EBP + -0x18]
0062ecb3  MOV dword ptr [EDX + 0x28],0x0
0062ecba  MOV EAX,dword ptr [EBP + -0x18]
0062ecbd  MOV byte ptr [EAX + 0x3c],0x2c
0062ecc1  MOV ECX,dword ptr [EBP + -0x18]
0062ecc4  MOV byte ptr [ECX + 0x3d],0xa
0062ecc8  MOV EDX,dword ptr [EBP + -0x18]
0062eccb  MOV byte ptr [EDX + 0x3e],0x0
0062eccf  MOV EAX,dword ptr [EBP + -0x18]
0062ecd2  MOV byte ptr [EAX + 0x3f],0x1
0062ecd6  MOV dword ptr [EBP + -0x4],0xffffffff
0062ecdd  MOV EAX,dword ptr [EBP + -0x18]
0062ece0  MOV ECX,dword ptr [EBP + -0xc]
0062ece3  MOV dword ptr FS:[0x0],ECX
0062ecea  POP ECX
0062eceb  MOV ESP,EBP
0062eced  POP EBP
0062ecee  RET
