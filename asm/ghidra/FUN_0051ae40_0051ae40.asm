; FUN_0051ae40  0051ae40
0051ae40  PUSH EBP
0051ae41  MOV EBP,ESP
0051ae43  SUB ESP,0x118
0051ae49  MOV EAX,[0x00781870]
0051ae4e  XOR EAX,EBP
0051ae50  MOV dword ptr [EBP + -0x10],EAX
0051ae53  MOV dword ptr [EBP + 0xfffffeec],ECX
0051ae59  MOV dword ptr [EBP + -0x8],0x0
0051ae60  MOV dword ptr [EBP + -0xc],0x0
0051ae67  JMP 0x0051ae72
0051ae69  MOV EAX,dword ptr [EBP + -0xc]
0051ae6c  ADD EAX,0x1
0051ae6f  MOV dword ptr [EBP + -0xc],EAX
0051ae72  CMP dword ptr [EBP + -0xc],0x6
0051ae76  JGE 0x0051ae9c
0051ae78  MOV ECX,dword ptr [0x00791eb8]
0051ae7e  MOV EDX,dword ptr [ECX + 0xa4]
0051ae84  MOV EAX,dword ptr [EBP + -0xc]
0051ae87  CMP dword ptr [EDX + EAX*0x4 + 0x3e4],-0x1
0051ae8f  JZ 0x0051ae9a
0051ae91  MOV ECX,dword ptr [EBP + -0x8]
0051ae94  ADD ECX,0x1
0051ae97  MOV dword ptr [EBP + -0x8],ECX
0051ae9a  JMP 0x0051ae69
0051ae9c  CMP dword ptr [EBP + -0x8],0x6
0051aea0  JGE 0x0051aeb3
0051aea2  MOV EDX,dword ptr [0x00791eb8]
0051aea8  MOV ECX,dword ptr [EDX + 0xa4]
0051aeae  CALL 0x0047ffe0
0051aeb3  MOV dword ptr [EBP + -0xc],0x6
0051aeba  JMP 0x0051aec5
0051aebc  MOV EAX,dword ptr [EBP + -0xc]
0051aebf  SUB EAX,0x1
0051aec2  MOV dword ptr [EBP + -0xc],EAX
0051aec5  CMP dword ptr [EBP + -0xc],0x0
0051aec9  JL 0x0051af69
0051aecf  MOV ECX,dword ptr [0x00791eb8]
0051aed5  MOV EDX,dword ptr [ECX + 0xa4]
0051aedb  MOV EAX,dword ptr [EBP + -0xc]
0051aede  CMP dword ptr [EDX + EAX*0x4 + 0x3e4],-0x1
0051aee6  JNZ 0x0051aeea
0051aee8  JMP 0x0051aebc
0051aeea  MOV ECX,dword ptr [0x00791eb8]
0051aef0  MOV EDX,dword ptr [ECX + 0xa4]
0051aef6  MOV EAX,dword ptr [EBP + -0xc]
0051aef9  MOV ECX,dword ptr [EDX + EAX*0x4 + 0x3e4]
0051af00  PUSH ECX
0051af01  MOV ECX,dword ptr [0x00791364]
0051af07  CALL 0x0047e390
0051af0c  MOV dword ptr [EBP + -0x4],EAX
0051af0f  MOV ECX,dword ptr [EBP + -0x4]
0051af12  CALL 0x004c6150
0051af17  PUSH EAX
0051af18  PUSH 0x6b2fd8
0051af1d  LEA EDX,[EBP + 0xfffffef0]
0051af23  PUSH EDX
0051af24  CALL dword ptr [0x006b2220]
0051af2a  ADD ESP,0xc
0051af2d  MOV EAX,0x17
0051af32  SUB EAX,dword ptr [EBP + -0xc]
0051af35  PUSH EAX
0051af36  MOV ECX,dword ptr [EBP + 0xfffffeec]
0051af3c  CALL 0x005fb550
0051af41  MOV dword ptr [EBP + 0xfffffee8],EAX
0051af47  LEA ECX,[EBP + 0xfffffef0]
0051af4d  PUSH ECX
0051af4e  MOV EDX,dword ptr [EBP + 0xfffffee8]
0051af54  MOV EAX,dword ptr [EDX]
0051af56  MOV ECX,dword ptr [EBP + 0xfffffee8]
0051af5c  MOV EDX,dword ptr [EAX + 0xb4]
0051af62  CALL EDX
0051af64  JMP 0x0051aebc
0051af69  MOV ECX,dword ptr [EBP + -0x10]
0051af6c  XOR ECX,EBP
0051af6e  CALL 0x00686d72
0051af73  MOV ESP,EBP
0051af75  POP EBP
0051af76  RET
