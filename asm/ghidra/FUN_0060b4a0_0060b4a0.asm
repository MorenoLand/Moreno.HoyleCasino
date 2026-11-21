; FUN_0060b4a0  0060b4a0
0060b4a0  PUSH EBP
0060b4a1  MOV EBP,ESP
0060b4a3  PUSH -0x1
0060b4a5  PUSH 0x6aacb8
0060b4aa  MOV EAX,FS:[0x0]
0060b4b0  PUSH EAX
0060b4b1  PUSH ECX
0060b4b2  MOV EAX,[0x00781870]
0060b4b7  XOR EAX,EBP
0060b4b9  PUSH EAX
0060b4ba  LEA EAX,[EBP + -0xc]
0060b4bd  MOV FS:[0x0],EAX
0060b4c3  MOV dword ptr [EBP + -0x10],ECX
0060b4c6  MOV ECX,dword ptr [EBP + -0x10]
0060b4c9  CALL 0x005ec5a0
0060b4ce  MOV dword ptr [EBP + -0x4],0x0
0060b4d5  MOV EAX,dword ptr [EBP + -0x10]
0060b4d8  MOV dword ptr [EAX],0x6d8184
0060b4de  MOV ECX,dword ptr [EBP + -0x10]
0060b4e1  MOV dword ptr [ECX + 0x1dc],0x0
0060b4eb  MOV EDX,dword ptr [EBP + -0x10]
0060b4ee  MOV dword ptr [EDX + 0x1e0],0x0
0060b4f8  MOV EAX,dword ptr [EBP + -0x10]
0060b4fb  MOV byte ptr [EAX + 0x1d0],0x1
0060b502  PUSH 0x3e8
0060b507  MOV ECX,dword ptr [EBP + -0x10]
0060b50a  CALL 0x005f5300
0060b50f  MOV ECX,dword ptr [EBP + -0x10]
0060b512  MOV dword ptr [ECX + 0x1e4],0x0
0060b51c  MOV EDX,dword ptr [EBP + -0x10]
0060b51f  MOV byte ptr [EDX + 0x1e8],0x0
0060b526  MOV EAX,dword ptr [EBP + -0x10]
0060b529  MOV byte ptr [EAX + 0x1f0],0x0
0060b530  MOV ECX,dword ptr [EBP + -0x10]
0060b533  MOV dword ptr [ECX + 0x1ec],0x0
0060b53d  MOV EDX,dword ptr [EBP + -0x10]
0060b540  MOV byte ptr [EDX + 0x1f0],0x0
0060b547  MOV EAX,dword ptr [EBP + -0x10]
0060b54a  MOV dword ptr [EAX + 0x1f4],0x0
0060b554  MOV ECX,dword ptr [EBP + -0x10]
0060b557  MOV dword ptr [ECX + 0x1d4],0x0
0060b561  MOV EDX,dword ptr [EBP + -0x10]
0060b564  MOV dword ptr [EDX + 0x1d8],0x0
0060b56e  MOV EAX,dword ptr [EBP + -0x10]
0060b571  MOV byte ptr [EAX + 0x1f8],0x3c
0060b578  MOV ECX,dword ptr [EBP + -0x10]
0060b57b  MOV byte ptr [ECX + 0x1f9],0x78
0060b582  MOV EDX,dword ptr [EBP + -0x10]
0060b585  MOV byte ptr [EDX + 0x1fa],0xc8
0060b58c  MOV dword ptr [EBP + -0x4],0xffffffff
0060b593  MOV EAX,dword ptr [EBP + -0x10]
0060b596  MOV ECX,dword ptr [EBP + -0xc]
0060b599  MOV dword ptr FS:[0x0],ECX
0060b5a0  POP ECX
0060b5a1  MOV ESP,EBP
0060b5a3  POP EBP
0060b5a4  RET
