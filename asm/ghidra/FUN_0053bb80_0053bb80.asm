; FUN_0053bb80  0053bb80
0053bb80  PUSH EBP
0053bb81  MOV EBP,ESP
0053bb83  PUSH -0x1
0053bb85  PUSH 0x6a4b8a
0053bb8a  MOV EAX,FS:[0x0]
0053bb90  PUSH EAX
0053bb91  SUB ESP,0x14
0053bb94  MOV EAX,[0x00781870]
0053bb99  XOR EAX,EBP
0053bb9b  PUSH EAX
0053bb9c  LEA EAX,[EBP + -0xc]
0053bb9f  MOV FS:[0x0],EAX
0053bba5  MOV dword ptr [EBP + -0x1c],ECX
0053bba8  MOV EAX,dword ptr [EBP + -0x1c]
0053bbab  MOV dword ptr [EAX],0x6c5bdc
0053bbb1  MOV dword ptr [EBP + -0x4],0x0
0053bbb8  MOV dword ptr [EBP + -0x10],0x0
0053bbbf  JMP 0x0053bbca
0053bbc1  MOV ECX,dword ptr [EBP + -0x10]
0053bbc4  ADD ECX,0x1
0053bbc7  MOV dword ptr [EBP + -0x10],ECX
0053bbca  CMP dword ptr [EBP + -0x10],0x3
0053bbce  JGE 0x0053bc05
0053bbd0  MOV EDX,dword ptr [EBP + -0x10]
0053bbd3  MOV EAX,dword ptr [EBP + -0x1c]
0053bbd6  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x8]
0053bbda  MOV dword ptr [EBP + -0x18],ECX
0053bbdd  MOV EDX,dword ptr [EBP + -0x18]
0053bbe0  MOV dword ptr [EBP + -0x14],EDX
0053bbe3  CMP dword ptr [EBP + -0x14],0x0
0053bbe7  JZ 0x0053bbfc
0053bbe9  PUSH 0x1
0053bbeb  MOV EAX,dword ptr [EBP + -0x14]
0053bbee  MOV EDX,dword ptr [EAX]
0053bbf0  MOV ECX,dword ptr [EBP + -0x14]
0053bbf3  MOV EAX,dword ptr [EDX]
0053bbf5  CALL EAX
0053bbf7  MOV dword ptr [EBP + -0x20],EAX
0053bbfa  JMP 0x0053bc03
0053bbfc  MOV dword ptr [EBP + -0x20],0x0
0053bc03  JMP 0x0053bbc1
0053bc05  MOV dword ptr [EBP + -0x4],0xffffffff
0053bc0c  MOV ECX,dword ptr [EBP + -0x1c]
0053bc0f  CALL 0x005e9e40
0053bc14  MOV ECX,dword ptr [EBP + -0xc]
0053bc17  MOV dword ptr FS:[0x0],ECX
0053bc1e  POP ECX
0053bc1f  MOV ESP,EBP
0053bc21  POP EBP
0053bc22  RET
