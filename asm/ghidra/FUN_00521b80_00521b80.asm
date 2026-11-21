; FUN_00521b80  00521b80
00521b80  PUSH EBP
00521b81  MOV EBP,ESP
00521b83  PUSH -0x1
00521b85  PUSH 0x6a3ed3
00521b8a  MOV EAX,FS:[0x0]
00521b90  PUSH EAX
00521b91  SUB ESP,0x14
00521b94  MOV EAX,[0x00781870]
00521b99  XOR EAX,EBP
00521b9b  PUSH EAX
00521b9c  LEA EAX,[EBP + -0xc]
00521b9f  MOV FS:[0x0],EAX
00521ba5  MOV dword ptr [EBP + -0x1c],ECX
00521ba8  MOV ECX,dword ptr [EBP + -0x1c]
00521bab  CALL 0x005e9e20
00521bb0  MOV dword ptr [EBP + -0x4],0x0
00521bb7  MOV EAX,dword ptr [EBP + -0x1c]
00521bba  MOV dword ptr [EAX],0x6c2e20
00521bc0  MOV ECX,dword ptr [EBP + -0x1c]
00521bc3  MOV dword ptr [ECX + 0x314],0x2
00521bcd  MOV EDX,dword ptr [EBP + -0x1c]
00521bd0  MOV dword ptr [EDX + 0x8],0x0
00521bd7  PUSH 0x190
00521bdc  CALL 0x00686d82
00521be1  ADD ESP,0x4
00521be4  MOV dword ptr [EBP + -0x18],EAX
00521be7  MOV byte ptr [EBP + -0x4],0x1
00521beb  CMP dword ptr [EBP + -0x18],0x0
00521bef  JZ 0x00521bfe
00521bf1  MOV ECX,dword ptr [EBP + -0x18]
00521bf4  CALL 0x005f5f50
00521bf9  MOV dword ptr [EBP + -0x20],EAX
00521bfc  JMP 0x00521c05
00521bfe  MOV dword ptr [EBP + -0x20],0x0
00521c05  MOV EAX,dword ptr [EBP + -0x20]
00521c08  MOV dword ptr [EBP + -0x14],EAX
00521c0b  MOV byte ptr [EBP + -0x4],0x0
00521c0f  MOV ECX,dword ptr [EBP + -0x1c]
00521c12  MOV EDX,dword ptr [EBP + -0x14]
00521c15  MOV dword ptr [ECX + 0xc],EDX
00521c18  MOV EAX,dword ptr [EBP + -0x1c]
00521c1b  MOV dword ptr [EAX + 0x4],0x0
00521c22  MOV ECX,dword ptr [EBP + -0x1c]
00521c25  MOV dword ptr [ECX + 0x10],0x0
00521c2c  MOV EDX,dword ptr [EBP + -0x1c]
00521c2f  MOV dword ptr [EDX + 0x14],0x0
00521c36  MOV EAX,dword ptr [EBP + -0x1c]
00521c39  MOV dword ptr [EAX + 0x318],0x0
00521c43  MOV dword ptr [EBP + -0x10],0x0
00521c4a  JMP 0x00521c55
00521c4c  MOV ECX,dword ptr [EBP + -0x10]
00521c4f  ADD ECX,0x1
00521c52  MOV dword ptr [EBP + -0x10],ECX
00521c55  CMP dword ptr [EBP + -0x10],0x4
00521c59  JGE 0x00521c6e
00521c5b  MOV EDX,dword ptr [EBP + -0x10]
00521c5e  MOV EAX,dword ptr [EBP + -0x1c]
00521c61  MOV dword ptr [EAX + EDX*0x4 + 0x304],0x0
00521c6c  JMP 0x00521c4c
00521c6e  MOV dword ptr [EBP + -0x10],0x0
00521c75  JMP 0x00521c80
00521c77  MOV ECX,dword ptr [EBP + -0x10]
00521c7a  ADD ECX,0x1
00521c7d  MOV dword ptr [EBP + -0x10],ECX
00521c80  CMP dword ptr [EBP + -0x10],0x1a
00521c84  JGE 0x00521c96
00521c86  MOV EDX,dword ptr [EBP + -0x10]
00521c89  MOV EAX,dword ptr [EBP + -0x1c]
00521c8c  MOV dword ptr [EAX + EDX*0x4 + 0x18],0x0
00521c94  JMP 0x00521c77
00521c96  MOV dword ptr [EBP + -0x10],0x0
00521c9d  JMP 0x00521ca8
00521c9f  MOV ECX,dword ptr [EBP + -0x10]
00521ca2  ADD ECX,0x1
00521ca5  MOV dword ptr [EBP + -0x10],ECX
00521ca8  CMP dword ptr [EBP + -0x10],0xa1
00521caf  JGE 0x00521cc4
00521cb1  MOV EDX,dword ptr [EBP + -0x10]
00521cb4  MOV EAX,dword ptr [EBP + -0x1c]
00521cb7  MOV dword ptr [EAX + EDX*0x4 + 0x80],0x0
00521cc2  JMP 0x00521c9f
00521cc4  MOV dword ptr [EBP + -0x4],0xffffffff
00521ccb  MOV EAX,dword ptr [EBP + -0x1c]
00521cce  MOV ECX,dword ptr [EBP + -0xc]
00521cd1  MOV dword ptr FS:[0x0],ECX
00521cd8  POP ECX
00521cd9  MOV ESP,EBP
00521cdb  POP EBP
00521cdc  RET
