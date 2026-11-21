; FUN_0053bc30  0053bc30
0053bc30  PUSH EBP
0053bc31  MOV EBP,ESP
0053bc33  PUSH -0x1
0053bc35  PUSH 0x6a4bb0
0053bc3a  MOV EAX,FS:[0x0]
0053bc40  PUSH EAX
0053bc41  SUB ESP,0x14
0053bc44  MOV EAX,[0x00781870]
0053bc49  XOR EAX,EBP
0053bc4b  PUSH EAX
0053bc4c  LEA EAX,[EBP + -0xc]
0053bc4f  MOV FS:[0x0],EAX
0053bc55  MOV dword ptr [EBP + -0x1c],ECX
0053bc58  MOV EAX,dword ptr [EBP + -0x1c]
0053bc5b  MOV ECX,dword ptr [EBP + 0x8]
0053bc5e  MOV dword ptr [EAX + 0x4],ECX
0053bc61  MOV dword ptr [EBP + -0x10],0x0
0053bc68  JMP 0x0053bc73
0053bc6a  MOV EDX,dword ptr [EBP + -0x10]
0053bc6d  ADD EDX,0x1
0053bc70  MOV dword ptr [EBP + -0x10],EDX
0053bc73  CMP dword ptr [EBP + -0x10],0x3
0053bc77  JGE 0x0053bce1
0053bc79  PUSH 0x178
0053bc7e  CALL 0x00686d82
0053bc83  ADD ESP,0x4
0053bc86  MOV dword ptr [EBP + -0x18],EAX
0053bc89  MOV dword ptr [EBP + -0x4],0x0
0053bc90  CMP dword ptr [EBP + -0x18],0x0
0053bc94  JZ 0x0053bca3
0053bc96  MOV ECX,dword ptr [EBP + -0x18]
0053bc99  CALL 0x005eaaf0
0053bc9e  MOV dword ptr [EBP + -0x20],EAX
0053bca1  JMP 0x0053bcaa
0053bca3  MOV dword ptr [EBP + -0x20],0x0
0053bcaa  MOV EAX,dword ptr [EBP + -0x20]
0053bcad  MOV dword ptr [EBP + -0x14],EAX
0053bcb0  MOV dword ptr [EBP + -0x4],0xffffffff
0053bcb7  MOV ECX,dword ptr [EBP + -0x10]
0053bcba  MOV EDX,dword ptr [EBP + -0x1c]
0053bcbd  MOV EAX,dword ptr [EBP + -0x14]
0053bcc0  MOV dword ptr [EDX + ECX*0x4 + 0x8],EAX
0053bcc4  MOV ECX,dword ptr [EBP + -0x10]
0053bcc7  MOV EDX,dword ptr [EBP + -0x1c]
0053bcca  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x8]
0053bcce  MOV ECX,dword ptr [EBP + -0x10]
0053bcd1  MOV EDX,dword ptr [EBP + -0x1c]
0053bcd4  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x8]
0053bcd8  MOV EAX,dword ptr [EAX]
0053bcda  MOV EDX,dword ptr [EAX + 0x40]
0053bcdd  CALL EDX
0053bcdf  JMP 0x0053bc6a
0053bce1  MOV ECX,dword ptr [EBP + -0xc]
0053bce4  MOV dword ptr FS:[0x0],ECX
0053bceb  POP ECX
0053bcec  MOV ESP,EBP
0053bcee  POP EBP
0053bcef  RET 0x4
