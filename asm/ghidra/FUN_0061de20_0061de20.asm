; FUN_0061de20  0061de20
0061de20  PUSH EBP
0061de21  MOV EBP,ESP
0061de23  PUSH -0x1
0061de25  PUSH 0x6ab31e
0061de2a  MOV EAX,FS:[0x0]
0061de30  PUSH EAX
0061de31  SUB ESP,0x110
0061de37  MOV EAX,[0x00781870]
0061de3c  XOR EAX,EBP
0061de3e  MOV dword ptr [EBP + -0x10],EAX
0061de41  PUSH EAX
0061de42  LEA EAX,[EBP + -0xc]
0061de45  MOV FS:[0x0],EAX
0061de4b  MOV dword ptr [EBP + 0xfffffee4],ECX
0061de51  MOV ECX,dword ptr [EBP + 0xfffffee4]
0061de57  CALL 0x0062aea0
0061de5c  MOV dword ptr [EBP + -0x4],0x0
0061de63  MOV EAX,dword ptr [EBP + 0xfffffee4]
0061de69  MOV dword ptr [EAX],0x6d8ba4
0061de6f  MOV ECX,dword ptr [EBP + 0xfffffee4]
0061de75  MOV dword ptr [ECX + 0x14c],0x0
0061de7f  MOV EDX,dword ptr [EBP + 0xfffffee4]
0061de85  MOV dword ptr [EDX + 0x158],0x0
0061de8f  MOV EAX,dword ptr [EBP + 0xfffffee4]
0061de95  MOV dword ptr [EAX + 0x13c],0x0
0061de9f  MOV ECX,dword ptr [EBP + 0xfffffee4]
0061dea5  MOV dword ptr [ECX + 0x140],0x0
0061deaf  MOV EDX,dword ptr [EBP + 0xfffffee4]
0061deb5  MOV dword ptr [EDX + 0x144],0x0
0061debf  MOV EAX,dword ptr [EBP + 0xfffffee4]
0061dec5  MOV byte ptr [EAX + 0x154],0x0
0061decc  MOV ECX,dword ptr [EBP + 0xfffffee4]
0061ded2  MOV EDX,dword ptr [EBP + 0x8]
0061ded5  MOV dword ptr [ECX + 0x30],EDX
0061ded8  MOV EAX,dword ptr [EBP + 0xfffffee4]
0061dede  MOV ECX,dword ptr [EBP + 0xc]
0061dee1  MOV dword ptr [EAX + 0x34],ECX
0061dee4  MOV EDX,dword ptr [EBP + 0xfffffee4]
0061deea  MOV byte ptr [EDX + 0x38],0x0
0061deee  MOV EAX,dword ptr [EBP + 0xfffffee4]
0061def4  CMP dword ptr [EAX + 0x34],0x0
0061def8  JNZ 0x0061deff
0061defa  JMP 0x0061dfc7
0061deff  CMP dword ptr [EBP + 0x10],0x0
0061df03  JZ 0x0061df0b
0061df05  CMP dword ptr [EBP + 0x14],0x0
0061df09  JNZ 0x0061df21
0061df0b  PUSH -0x1
0061df0d  MOV ECX,dword ptr [EBP + 0x18]
0061df10  PUSH ECX
0061df11  MOV ECX,dword ptr [EBP + 0xfffffee4]
0061df17  CALL 0x0061dff0
0061df1c  JMP 0x0061dfc7
0061df21  MOV EDX,dword ptr [EBP + 0xfffffee4]
0061df27  MOV EAX,dword ptr [EBP + 0x14]
0061df2a  MOV dword ptr [EDX + 0x14c],EAX
0061df30  MOV ECX,dword ptr [EBP + 0xfffffee4]
0061df36  MOV EDX,dword ptr [ECX + 0x14c]
0061df3c  PUSH EDX
0061df3d  CALL 0x00686d82
0061df42  ADD ESP,0x4
0061df45  MOV dword ptr [EBP + 0xfffffee8],EAX
0061df4b  MOV EAX,dword ptr [EBP + 0xfffffee4]
0061df51  MOV ECX,dword ptr [EBP + 0xfffffee8]
0061df57  MOV dword ptr [EAX + 0x158],ECX
0061df5d  MOV EDX,dword ptr [EBP + 0xfffffee4]
0061df63  MOV EAX,dword ptr [EDX + 0x14c]
0061df69  PUSH EAX
0061df6a  MOV ECX,dword ptr [EBP + 0x10]
0061df6d  PUSH ECX
0061df6e  MOV EDX,dword ptr [EBP + 0xfffffee4]
0061df74  MOV EAX,dword ptr [EDX + 0x158]
0061df7a  PUSH EAX
0061df7b  CALL 0x00686fde
0061df80  ADD ESP,0xc
0061df83  MOVZX ECX,byte ptr [0x00795fb2]
0061df8a  TEST ECX,ECX
0061df8c  JZ 0x0061dfb6
0061df8e  MOV EDX,dword ptr [EBP + 0xc]
0061df91  PUSH EDX
0061df92  PUSH 0x6d8bac
0061df97  LEA EAX,[EBP + 0xfffffeec]
0061df9d  PUSH EAX
0061df9e  CALL dword ptr [0x006b2220]
0061dfa4  ADD ESP,0xc
0061dfa7  LEA ECX,[EBP + 0xfffffeec]
0061dfad  PUSH ECX
0061dfae  CALL 0x0062fde0
0061dfb3  ADD ESP,0x4
0061dfb6  PUSH -0x1
0061dfb8  MOV EDX,dword ptr [EBP + 0x18]
0061dfbb  PUSH EDX
0061dfbc  MOV ECX,dword ptr [EBP + 0xfffffee4]
0061dfc2  CALL 0x0061dff0
0061dfc7  MOV dword ptr [EBP + -0x4],0xffffffff
0061dfce  MOV EAX,dword ptr [EBP + 0xfffffee4]
0061dfd4  MOV ECX,dword ptr [EBP + -0xc]
0061dfd7  MOV dword ptr FS:[0x0],ECX
0061dfde  POP ECX
0061dfdf  MOV ECX,dword ptr [EBP + -0x10]
0061dfe2  XOR ECX,EBP
0061dfe4  CALL 0x00686d72
0061dfe9  MOV ESP,EBP
0061dfeb  POP EBP
0061dfec  RET 0x14
