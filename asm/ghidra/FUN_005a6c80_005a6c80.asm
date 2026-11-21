; FUN_005a6c80  005a6c80
005a6c80  PUSH EBP
005a6c81  MOV EBP,ESP
005a6c83  SUB ESP,0xc
005a6c86  MOV dword ptr [EBP + -0xc],ECX
005a6c89  MOV ECX,dword ptr [EBP + -0xc]
005a6c8c  CALL 0x005e9e20
005a6c91  MOV EAX,dword ptr [EBP + -0xc]
005a6c94  MOV dword ptr [EAX],0x6cf81c
005a6c9a  MOV dword ptr [EBP + -0x4],0x0
005a6ca1  JMP 0x005a6cac
005a6ca3  MOV ECX,dword ptr [EBP + -0x4]
005a6ca6  ADD ECX,0x1
005a6ca9  MOV dword ptr [EBP + -0x4],ECX
005a6cac  CMP dword ptr [EBP + -0x4],0x5
005a6cb0  JGE 0x005a6cc2
005a6cb2  MOV EDX,dword ptr [EBP + -0x4]
005a6cb5  MOV EAX,dword ptr [EBP + -0xc]
005a6cb8  MOV dword ptr [EAX + EDX*0x4 + 0x4],0x0
005a6cc0  JMP 0x005a6ca3
005a6cc2  MOV dword ptr [EBP + -0x8],0x0
005a6cc9  JMP 0x005a6cd4
005a6ccb  MOV ECX,dword ptr [EBP + -0x8]
005a6cce  ADD ECX,0x1
005a6cd1  MOV dword ptr [EBP + -0x8],ECX
005a6cd4  CMP dword ptr [EBP + -0x8],0x4
005a6cd8  JGE 0x005a6d06
005a6cda  MOV EDX,dword ptr [EBP + -0x8]
005a6cdd  MOV EAX,dword ptr [EBP + -0xc]
005a6ce0  MOV dword ptr [EAX + EDX*0x4 + 0x18],0x0
005a6ce8  MOV ECX,dword ptr [EBP + -0x8]
005a6ceb  MOV EDX,dword ptr [EBP + -0xc]
005a6cee  MOV dword ptr [EDX + ECX*0x4 + 0x48],0x0
005a6cf6  MOV EAX,dword ptr [EBP + -0x8]
005a6cf9  MOV ECX,dword ptr [EBP + -0xc]
005a6cfc  MOV dword ptr [ECX + EAX*0x4 + 0x58],0x0
005a6d04  JMP 0x005a6ccb
005a6d06  MOV EDX,dword ptr [EBP + -0xc]
005a6d09  MOV dword ptr [EDX + 0x28],0x0
005a6d10  MOV EAX,dword ptr [EBP + -0xc]
005a6d13  MOV dword ptr [EAX + 0x2c],0x0
005a6d1a  MOV ECX,dword ptr [EBP + -0xc]
005a6d1d  MOV dword ptr [ECX + 0x3c],0x0
005a6d24  MOV EDX,dword ptr [EBP + -0xc]
005a6d27  MOV dword ptr [EDX + 0x40],0x0
005a6d2e  MOV EAX,dword ptr [EBP + -0xc]
005a6d31  MOV dword ptr [EAX + 0x44],0x0
005a6d38  MOV ECX,dword ptr [EBP + -0xc]
005a6d3b  MOV dword ptr [ECX + 0x30],0x0
005a6d42  MOV EDX,dword ptr [EBP + -0xc]
005a6d45  MOV dword ptr [EDX + 0x34],0x0
005a6d4c  MOV EAX,dword ptr [EBP + -0xc]
005a6d4f  MOV dword ptr [EAX + 0x38],0x0
005a6d56  MOV EAX,dword ptr [EBP + -0xc]
005a6d59  MOV ESP,EBP
005a6d5b  POP EBP
005a6d5c  RET
