; FUN_0052aac0  0052aac0
0052aac0  PUSH EBP
0052aac1  MOV EBP,ESP
0052aac3  PUSH -0x1
0052aac5  PUSH 0x6a4284
0052aaca  MOV EAX,FS:[0x0]
0052aad0  PUSH EAX
0052aad1  SUB ESP,0x14
0052aad4  MOV EAX,[0x00781870]
0052aad9  XOR EAX,EBP
0052aadb  PUSH EAX
0052aadc  LEA EAX,[EBP + -0xc]
0052aadf  MOV FS:[0x0],EAX
0052aae5  MOV dword ptr [EBP + -0x1c],ECX
0052aae8  MOV dword ptr [EBP + -0x10],0x0
0052aaef  JMP 0x0052aafa
0052aaf1  MOV EAX,dword ptr [EBP + -0x10]
0052aaf4  ADD EAX,0x1
0052aaf7  MOV dword ptr [EBP + -0x10],EAX
0052aafa  CMP dword ptr [EBP + -0x10],0x8
0052aafe  JGE 0x0052abcf
0052ab04  PUSH 0x184
0052ab09  CALL 0x00686d82
0052ab0e  ADD ESP,0x4
0052ab11  MOV dword ptr [EBP + -0x18],EAX
0052ab14  MOV dword ptr [EBP + -0x4],0x0
0052ab1b  CMP dword ptr [EBP + -0x18],0x0
0052ab1f  JZ 0x0052ab2e
0052ab21  MOV ECX,dword ptr [EBP + -0x18]
0052ab24  CALL 0x005f5bf0
0052ab29  MOV dword ptr [EBP + -0x20],EAX
0052ab2c  JMP 0x0052ab35
0052ab2e  MOV dword ptr [EBP + -0x20],0x0
0052ab35  MOV ECX,dword ptr [EBP + -0x20]
0052ab38  MOV dword ptr [EBP + -0x14],ECX
0052ab3b  MOV dword ptr [EBP + -0x4],0xffffffff
0052ab42  MOV EDX,dword ptr [EBP + -0x10]
0052ab45  MOV EAX,dword ptr [EBP + -0x1c]
0052ab48  MOV ECX,dword ptr [EBP + -0x14]
0052ab4b  MOV dword ptr [EAX + EDX*0x4 + 0x3c],ECX
0052ab4f  PUSH -0x1
0052ab51  PUSH 0x32
0052ab53  MOV EDX,dword ptr [EBP + -0x1c]
0052ab56  MOV EAX,dword ptr [EDX + 0x100]
0052ab5c  PUSH EAX
0052ab5d  PUSH 0x0
0052ab5f  MOV ECX,dword ptr [EBP + -0x10]
0052ab62  MOV EDX,dword ptr [ECX*0x4 + 0x724d5c]
0052ab69  PUSH EDX
0052ab6a  MOV EAX,dword ptr [EBP + -0x10]
0052ab6d  MOV ECX,dword ptr [EBP + -0x1c]
0052ab70  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x3c]
0052ab74  CALL 0x005eae80
0052ab79  PUSH 0x0
0052ab7b  MOV EDX,dword ptr [EBP + -0x10]
0052ab7e  MOV EAX,dword ptr [EBP + -0x1c]
0052ab81  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x3c]
0052ab85  MOV EDX,dword ptr [EBP + -0x10]
0052ab88  MOV EAX,dword ptr [EBP + -0x1c]
0052ab8b  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x3c]
0052ab8f  MOV EAX,dword ptr [ECX]
0052ab91  MOV ECX,EDX
0052ab93  MOV EDX,dword ptr [EAX + 0xb0]
0052ab99  CALL EDX
0052ab9b  MOV EAX,dword ptr [EBP + -0x10]
0052ab9e  MOV ECX,dword ptr [EBP + -0x1c]
0052aba1  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x3c]
0052aba5  MOV dword ptr [EDX + 0x178],0x8
0052abaf  MOV EAX,dword ptr [EBP + -0x10]
0052abb2  MOV ECX,dword ptr [EBP + -0x1c]
0052abb5  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x3c]
0052abb9  MOV EAX,dword ptr [EBP + -0x10]
0052abbc  MOV ECX,dword ptr [EBP + -0x1c]
0052abbf  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x3c]
0052abc3  MOV EDX,dword ptr [EDX]
0052abc5  MOV EAX,dword ptr [EDX + 0x70]
0052abc8  CALL EAX
0052abca  JMP 0x0052aaf1
0052abcf  MOV ECX,dword ptr [EBP + -0xc]
0052abd2  MOV dword ptr FS:[0x0],ECX
0052abd9  POP ECX
0052abda  MOV ESP,EBP
0052abdc  POP EBP
0052abdd  RET
