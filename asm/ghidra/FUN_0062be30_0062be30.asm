; FUN_0062be30  0062be30
0062be30  PUSH EBP
0062be31  MOV EBP,ESP
0062be33  SUB ESP,0xc
0062be36  MOV dword ptr [EBP + -0xc],ECX
0062be39  MOV EAX,dword ptr [EBP + -0xc]
0062be3c  CMP dword ptr [EAX + 0xc],0x0
0062be40  JZ 0x0062be5c
0062be42  MOV ECX,dword ptr [EBP + -0xc]
0062be45  MOV EDX,dword ptr [ECX + 0xc]
0062be48  PUSH EDX
0062be49  CALL dword ptr [0x006b2258]
0062be4f  ADD ESP,0x4
0062be52  MOV EAX,dword ptr [EBP + -0xc]
0062be55  MOV dword ptr [EAX + 0xc],0x0
0062be5c  PUSH 0x6d9768
0062be61  MOV ECX,dword ptr [EBP + 0x8]
0062be64  PUSH ECX
0062be65  CALL 0x005ea9c0
0062be6a  ADD ESP,0x8
0062be6d  MOV EDX,dword ptr [EBP + -0xc]
0062be70  MOV dword ptr [EDX + 0xc],EAX
0062be73  MOV EAX,dword ptr [EBP + -0xc]
0062be76  CMP dword ptr [EAX + 0xc],0x0
0062be7a  JNZ 0x0062be83
0062be7c  XOR AL,AL
0062be7e  JMP 0x0062bf61
0062be83  PUSH 0x18
0062be85  CALL 0x00686d82
0062be8a  ADD ESP,0x4
0062be8d  MOV dword ptr [EBP + -0x4],EAX
0062be90  MOV ECX,dword ptr [EBP + -0xc]
0062be93  MOV EDX,dword ptr [EBP + -0x4]
0062be96  MOV dword ptr [ECX + 0x10],EDX
0062be99  MOV EAX,dword ptr [EBP + -0xc]
0062be9c  MOV ECX,dword ptr [EAX + 0x10]
0062be9f  MOV dword ptr [ECX],0x1
0062bea5  MOV EDX,dword ptr [EBP + -0xc]
0062bea8  MOV EAX,dword ptr [EDX + 0x10]
0062beab  MOV dword ptr [EAX + 0x4],0x465250
0062beb2  MOV ECX,dword ptr [EBP + -0xc]
0062beb5  MOV EDX,dword ptr [ECX + 0x10]
0062beb8  MOV dword ptr [EDX + 0x8],0x2
0062bebf  MOV EAX,dword ptr [EBP + -0xc]
0062bec2  MOV ECX,dword ptr [EAX + 0x10]
0062bec5  MOV dword ptr [ECX + 0x10],0x28
0062becc  MOV EDX,dword ptr [EBP + -0xc]
0062becf  MOV EAX,dword ptr [EDX + 0x10]
0062bed2  MOV ECX,dword ptr [EAX + 0x10]
0062bed5  ADD ECX,0x18
0062bed8  MOV EDX,dword ptr [EBP + -0xc]
0062bedb  MOV EAX,dword ptr [EDX + 0x10]
0062bede  MOV dword ptr [EAX + 0xc],ECX
0062bee1  MOV ECX,dword ptr [EBP + -0xc]
0062bee4  MOV EDX,dword ptr [ECX + 0x10]
0062bee7  MOV dword ptr [EDX + 0x14],0x18
0062beee  MOV EAX,dword ptr [EBP + -0xc]
0062bef1  MOV ECX,dword ptr [EAX + 0x10]
0062bef4  MOV EDX,dword ptr [ECX + 0x10]
0062bef7  PUSH EDX
0062bef8  CALL 0x00686d82
0062befd  ADD ESP,0x4
0062bf00  MOV dword ptr [EBP + -0x8],EAX
0062bf03  MOV EAX,dword ptr [EBP + -0xc]
0062bf06  MOV ECX,dword ptr [EBP + -0x8]
0062bf09  MOV dword ptr [EAX + 0x14],ECX
0062bf0c  MOV EDX,dword ptr [EBP + -0xc]
0062bf0f  MOV EAX,dword ptr [EDX + 0x14]
0062bf12  MOV dword ptr [EAX],0x1
0062bf18  MOV ECX,dword ptr [EBP + -0xc]
0062bf1b  MOV EDX,dword ptr [ECX + 0x14]
0062bf1e  MOV dword ptr [EDX + 0x4],0x1
0062bf25  MOV EAX,dword ptr [EBP + -0xc]
0062bf28  MOV ECX,dword ptr [EAX + 0x14]
0062bf2b  MOV dword ptr [ECX + 0x8],0x0
0062bf32  MOV EDX,dword ptr [EBP + -0xc]
0062bf35  MOV EAX,dword ptr [EDX + 0x14]
0062bf38  MOV dword ptr [EAX + 0xc],0x0
0062bf3f  MOV ECX,dword ptr [EBP + -0xc]
0062bf42  MOV EDX,dword ptr [ECX + 0x14]
0062bf45  MOV dword ptr [EDX + 0x10],0x18
0062bf4c  MOV EAX,dword ptr [EBP + -0xc]
0062bf4f  MOV ECX,dword ptr [EAX + 0x14]
0062bf52  MOV dword ptr [ECX + 0x14],0x0
0062bf59  MOV ECX,dword ptr [EBP + -0xc]
0062bf5c  CALL 0x0062bf70
0062bf61  MOV ESP,EBP
0062bf63  POP EBP
0062bf64  RET 0x4
