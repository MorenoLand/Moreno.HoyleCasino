; FUN_005f6d30  005f6d30
005f6d30  PUSH EBP
005f6d31  MOV EBP,ESP
005f6d33  PUSH -0x1
005f6d35  PUSH 0x6a9fbe
005f6d3a  MOV EAX,FS:[0x0]
005f6d40  PUSH EAX
005f6d41  SUB ESP,0x14
005f6d44  MOV EAX,[0x00781870]
005f6d49  XOR EAX,EBP
005f6d4b  PUSH EAX
005f6d4c  LEA EAX,[EBP + -0xc]
005f6d4f  MOV FS:[0x0],EAX
005f6d55  MOV dword ptr [EBP + -0x1c],ECX
005f6d58  MOV ECX,dword ptr [EBP + -0x1c]
005f6d5b  CALL 0x005f5010
005f6d60  MOV dword ptr [EBP + -0x10],0x0
005f6d67  JMP 0x005f6d72
005f6d69  MOV EAX,dword ptr [EBP + -0x10]
005f6d6c  ADD EAX,0x1
005f6d6f  MOV dword ptr [EBP + -0x10],EAX
005f6d72  CMP dword ptr [EBP + -0x10],0x4
005f6d76  JGE 0x005f6df3
005f6d78  PUSH 0x5c
005f6d7a  CALL 0x00686d82
005f6d7f  ADD ESP,0x4
005f6d82  MOV dword ptr [EBP + -0x18],EAX
005f6d85  MOV dword ptr [EBP + -0x4],0x0
005f6d8c  CMP dword ptr [EBP + -0x18],0x0
005f6d90  JZ 0x005f6d9f
005f6d92  MOV ECX,dword ptr [EBP + -0x18]
005f6d95  CALL 0x005f6130
005f6d9a  MOV dword ptr [EBP + -0x20],EAX
005f6d9d  JMP 0x005f6da6
005f6d9f  MOV dword ptr [EBP + -0x20],0x0
005f6da6  MOV ECX,dword ptr [EBP + -0x20]
005f6da9  MOV dword ptr [EBP + -0x14],ECX
005f6dac  MOV dword ptr [EBP + -0x4],0xffffffff
005f6db3  MOV EDX,dword ptr [EBP + -0x10]
005f6db6  MOV EAX,dword ptr [EBP + -0x1c]
005f6db9  MOV ECX,dword ptr [EBP + -0x14]
005f6dbc  MOV dword ptr [EAX + EDX*0x4 + 0x48],ECX
005f6dc0  MOV EDX,dword ptr [EBP + -0x10]
005f6dc3  MOV EAX,dword ptr [EBP + -0x1c]
005f6dc6  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x48]
005f6dca  MOV EDX,dword ptr [EBP + -0x1c]
005f6dcd  MOV EAX,dword ptr [EDX + 0x4]
005f6dd0  MOV dword ptr [ECX + 0x4],EAX
005f6dd3  MOV ECX,dword ptr [EBP + -0x10]
005f6dd6  MOV EDX,dword ptr [EBP + -0x1c]
005f6dd9  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x48]
005f6ddd  MOV ECX,dword ptr [EBP + -0x10]
005f6de0  MOV EDX,dword ptr [EBP + -0x1c]
005f6de3  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x48]
005f6de7  MOV EAX,dword ptr [EAX]
005f6de9  MOV EDX,dword ptr [EAX + 0x40]
005f6dec  CALL EDX
005f6dee  JMP 0x005f6d69
005f6df3  MOV ECX,dword ptr [EBP + -0xc]
005f6df6  MOV dword ptr FS:[0x0],ECX
005f6dfd  POP ECX
005f6dfe  MOV ESP,EBP
005f6e00  POP EBP
005f6e01  RET
