; FUN_00562b10  00562b10
00562b10  PUSH EBP
00562b11  MOV EBP,ESP
00562b13  SUB ESP,0x28
00562b16  MOV dword ptr [EBP + -0x1c],ECX
00562b19  MOV EAX,dword ptr [EBP + -0x1c]
00562b1c  MOV ECX,dword ptr [EAX]
00562b1e  MOV dword ptr [EBP + -0x8],ECX
00562b21  MOV EDX,dword ptr [EBP + -0x8]
00562b24  MOV dword ptr [EBP + -0x4],EDX
00562b27  CMP dword ptr [EBP + -0x4],0x0
00562b2b  JZ 0x00562b40
00562b2d  PUSH 0x1
00562b2f  MOV EAX,dword ptr [EBP + -0x4]
00562b32  MOV EDX,dword ptr [EAX]
00562b34  MOV ECX,dword ptr [EBP + -0x4]
00562b37  MOV EAX,dword ptr [EDX]
00562b39  CALL EAX
00562b3b  MOV dword ptr [EBP + -0x20],EAX
00562b3e  JMP 0x00562b47
00562b40  MOV dword ptr [EBP + -0x20],0x0
00562b47  MOV ECX,dword ptr [EBP + -0x1c]
00562b4a  MOV EDX,dword ptr [ECX + 0x4]
00562b4d  MOV dword ptr [EBP + -0x10],EDX
00562b50  MOV EAX,dword ptr [EBP + -0x10]
00562b53  MOV dword ptr [EBP + -0xc],EAX
00562b56  CMP dword ptr [EBP + -0xc],0x0
00562b5a  JZ 0x00562b82
00562b5c  MOV ECX,dword ptr [EBP + -0xc]
00562b5f  CALL 0x00565630
00562b64  MOV ECX,0x1
00562b69  AND ECX,0x1
00562b6c  JZ 0x00562b7a
00562b6e  MOV EDX,dword ptr [EBP + -0xc]
00562b71  PUSH EDX
00562b72  CALL 0x00686cae
00562b77  ADD ESP,0x4
00562b7a  MOV EAX,dword ptr [EBP + -0xc]
00562b7d  MOV dword ptr [EBP + -0x24],EAX
00562b80  JMP 0x00562b89
00562b82  MOV dword ptr [EBP + -0x24],0x0
00562b89  MOV ECX,dword ptr [EBP + -0x1c]
00562b8c  MOV EDX,dword ptr [ECX + 0x8]
00562b8f  MOV dword ptr [EBP + -0x18],EDX
00562b92  MOV EAX,dword ptr [EBP + -0x18]
00562b95  MOV dword ptr [EBP + -0x14],EAX
00562b98  CMP dword ptr [EBP + -0x14],0x0
00562b9c  JZ 0x00562bc4
00562b9e  MOV ECX,dword ptr [EBP + -0x14]
00562ba1  CALL 0x00565630
00562ba6  MOV ECX,0x1
00562bab  AND ECX,0x1
00562bae  JZ 0x00562bbc
00562bb0  MOV EDX,dword ptr [EBP + -0x14]
00562bb3  PUSH EDX
00562bb4  CALL 0x00686cae
00562bb9  ADD ESP,0x4
00562bbc  MOV EAX,dword ptr [EBP + -0x14]
00562bbf  MOV dword ptr [EBP + -0x28],EAX
00562bc2  JMP 0x00562bcb
00562bc4  MOV dword ptr [EBP + -0x28],0x0
00562bcb  MOV ESP,EBP
00562bcd  POP EBP
00562bce  RET
