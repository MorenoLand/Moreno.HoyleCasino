; FUN_00527a00  00527a00
00527a00  PUSH EBP
00527a01  MOV EBP,ESP
00527a03  PUSH -0x1
00527a05  PUSH 0x6a41e8
00527a0a  MOV EAX,FS:[0x0]
00527a10  PUSH EAX
00527a11  SUB ESP,0xc
00527a14  MOV EAX,[0x00781870]
00527a19  XOR EAX,EBP
00527a1b  PUSH EAX
00527a1c  LEA EAX,[EBP + -0xc]
00527a1f  MOV FS:[0x0],EAX
00527a25  MOV dword ptr [EBP + -0x18],ECX
00527a28  MOV ECX,dword ptr [EBP + -0x18]
00527a2b  CALL 0x005e9e20
00527a30  MOV dword ptr [EBP + -0x4],0x0
00527a37  MOV EAX,dword ptr [EBP + -0x18]
00527a3a  MOV dword ptr [EAX],0x6c37c4
00527a40  MOV ECX,dword ptr [EBP + -0x18]
00527a43  MOV dword ptr [ECX + 0xd3c],0xffffffff
00527a4d  PUSH 0x0
00527a4f  PUSH -0x1
00527a51  MOV ECX,dword ptr [EBP + -0x18]
00527a54  CALL 0x00528030
00527a59  MOV EDX,dword ptr [EBP + -0x18]
00527a5c  MOV dword ptr [EDX + 0xdb8],0xffffffff
00527a66  MOV EAX,dword ptr [EBP + -0x18]
00527a69  MOV byte ptr [EAX + 0xdbc],0x0
00527a70  MOV dword ptr [EBP + -0x10],0x0
00527a77  JMP 0x00527a82
00527a79  MOV ECX,dword ptr [EBP + -0x10]
00527a7c  ADD ECX,0x1
00527a7f  MOV dword ptr [EBP + -0x10],ECX
00527a82  CMP dword ptr [EBP + -0x10],0x1a
00527a86  JGE 0x00527a9b
00527a88  MOV EDX,dword ptr [EBP + -0x10]
00527a8b  MOV EAX,dword ptr [EBP + -0x18]
00527a8e  MOV dword ptr [EAX + EDX*0x4 + 0xd44],0xffffffff
00527a99  JMP 0x00527a79
00527a9b  MOV dword ptr [EBP + -0x10],0x0
00527aa2  JMP 0x00527aad
00527aa4  MOV ECX,dword ptr [EBP + -0x10]
00527aa7  ADD ECX,0x1
00527aaa  MOV dword ptr [EBP + -0x10],ECX
00527aad  CMP dword ptr [EBP + -0x10],0xa1
00527ab4  JGE 0x00527ac6
00527ab6  MOV EDX,dword ptr [EBP + -0x10]
00527ab9  MOV EAX,dword ptr [EBP + -0x18]
00527abc  MOV dword ptr [EAX + EDX*0x4 + 0x4],0x0
00527ac4  JMP 0x00527aa4
00527ac6  MOV dword ptr [EBP + -0x10],0x0
00527acd  JMP 0x00527ad8
00527acf  MOV ECX,dword ptr [EBP + -0x10]
00527ad2  ADD ECX,0x1
00527ad5  MOV dword ptr [EBP + -0x10],ECX
00527ad8  CMP dword ptr [EBP + -0x10],0x4
00527adc  JGE 0x00527b1a
00527ade  MOV dword ptr [EBP + -0x14],0x0
00527ae5  JMP 0x00527af0
00527ae7  MOV EDX,dword ptr [EBP + -0x14]
00527aea  ADD EDX,0x1
00527aed  MOV dword ptr [EBP + -0x14],EDX
00527af0  CMP dword ptr [EBP + -0x14],0xa1
00527af7  JGE 0x00527b18
00527af9  MOV EAX,dword ptr [EBP + -0x10]
00527afc  IMUL EAX,EAX,0x284
00527b02  MOV ECX,dword ptr [EBP + -0x18]
00527b05  LEA EDX,[ECX + EAX*0x1 + 0x288]
00527b0c  MOV EAX,dword ptr [EBP + -0x14]
00527b0f  MOV dword ptr [EDX + EAX*0x4],0x0
00527b16  JMP 0x00527ae7
00527b18  JMP 0x00527acf
00527b1a  MOV dword ptr [EBP + -0x10],0x0
00527b21  JMP 0x00527b2c
00527b23  MOV ECX,dword ptr [EBP + -0x10]
00527b26  ADD ECX,0x1
00527b29  MOV dword ptr [EBP + -0x10],ECX
00527b2c  CMP dword ptr [EBP + -0x10],0x4
00527b30  JGE 0x00527b98
00527b32  MOV EDX,dword ptr [EBP + -0x10]
00527b35  IMUL EDX,EDX,0x28
00527b38  MOV EAX,dword ptr [EBP + -0x18]
00527b3b  MOV dword ptr [EAX + EDX*0x1 + 0xc9c],0x824
00527b46  MOV ECX,dword ptr [EBP + -0x10]
00527b49  IMUL ECX,ECX,0x28
00527b4c  MOV EDX,dword ptr [EBP + -0x18]
00527b4f  MOV dword ptr [EDX + ECX*0x1 + 0xca4],0x821
00527b5a  MOV EAX,dword ptr [EBP + -0x10]
00527b5d  IMUL EAX,EAX,0x28
00527b60  MOV ECX,dword ptr [EBP + -0x18]
00527b63  MOV dword ptr [ECX + EAX*0x1 + 0xcac],0x822
00527b6e  MOV EDX,dword ptr [EBP + -0x10]
00527b71  IMUL EDX,EDX,0x28
00527b74  MOV EAX,dword ptr [EBP + -0x18]
00527b77  MOV dword ptr [EAX + EDX*0x1 + 0xcb4],0x823
00527b82  MOV ECX,dword ptr [EBP + -0x10]
00527b85  IMUL ECX,ECX,0x28
00527b88  MOV EDX,dword ptr [EBP + -0x18]
00527b8b  MOV dword ptr [EDX + ECX*0x1 + 0xcbc],0x825
00527b96  JMP 0x00527b23
00527b98  PUSH 0x7228e0
00527b9d  PUSH 0x7
00527b9f  MOV ECX,dword ptr [0x00793578]
00527ba5  CALL 0x0057ab80
00527baa  MOV dword ptr [EBP + -0x4],0xffffffff
00527bb1  MOV EAX,dword ptr [EBP + -0x18]
00527bb4  MOV ECX,dword ptr [EBP + -0xc]
00527bb7  MOV dword ptr FS:[0x0],ECX
00527bbe  POP ECX
00527bbf  MOV ESP,EBP
00527bc1  POP EBP
00527bc2  RET
