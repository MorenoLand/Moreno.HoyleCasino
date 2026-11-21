; FUN_0062a980  0062a980
0062a980  PUSH EBP
0062a981  MOV EBP,ESP
0062a983  SUB ESP,0x18
0062a986  MOV dword ptr [EBP + -0x18],ECX
0062a989  MOV EAX,dword ptr [EBP + -0x18]
0062a98c  MOV ECX,dword ptr [EAX + 0x10]
0062a98f  SHL ECX,0x2
0062a992  MOV dword ptr [EBP + -0x4],ECX
0062a995  MOV EDX,dword ptr [EBP + -0x18]
0062a998  MOV EAX,dword ptr [EDX + 0x10]
0062a99b  LEA ECX,[EAX*0x4 + 0x28]
0062a9a2  MOV dword ptr [EBP + -0x8],ECX
0062a9a5  MOV EDX,dword ptr [EBP + -0x8]
0062a9a8  PUSH EDX
0062a9a9  CALL 0x00686d82
0062a9ae  ADD ESP,0x4
0062a9b1  MOV dword ptr [EBP + -0x10],EAX
0062a9b4  MOV EAX,dword ptr [EBP + -0x10]
0062a9b7  MOV dword ptr [EBP + -0xc],EAX
0062a9ba  MOV ECX,dword ptr [EBP + -0x8]
0062a9bd  PUSH ECX
0062a9be  PUSH 0x0
0062a9c0  MOV EDX,dword ptr [EBP + -0xc]
0062a9c3  PUSH EDX
0062a9c4  CALL 0x00686fa2
0062a9c9  ADD ESP,0xc
0062a9cc  MOV EAX,dword ptr [EBP + -0x4]
0062a9cf  PUSH EAX
0062a9d0  MOV ECX,dword ptr [EBP + -0x18]
0062a9d3  MOV EDX,dword ptr [ECX + 0xc]
0062a9d6  PUSH EDX
0062a9d7  MOV EAX,dword ptr [EBP + -0xc]
0062a9da  PUSH EAX
0062a9db  CALL 0x00686fde
0062a9e0  ADD ESP,0xc
0062a9e3  MOV ECX,dword ptr [EBP + -0x18]
0062a9e6  MOV EDX,dword ptr [ECX + 0xc]
0062a9e9  MOV dword ptr [EBP + -0x14],EDX
0062a9ec  MOV EAX,dword ptr [EBP + -0x14]
0062a9ef  PUSH EAX
0062a9f0  CALL 0x00686cae
0062a9f5  ADD ESP,0x4
0062a9f8  MOV ECX,dword ptr [EBP + -0x18]
0062a9fb  MOV EDX,dword ptr [EBP + -0xc]
0062a9fe  MOV dword ptr [ECX + 0xc],EDX
0062aa01  MOV EAX,dword ptr [EBP + -0x18]
0062aa04  MOV ECX,dword ptr [EAX + 0x10]
0062aa07  ADD ECX,0xa
0062aa0a  MOV EDX,dword ptr [EBP + -0x18]
0062aa0d  MOV dword ptr [EDX + 0x10],ECX
0062aa10  MOV ESP,EBP
0062aa12  POP EBP
0062aa13  RET
