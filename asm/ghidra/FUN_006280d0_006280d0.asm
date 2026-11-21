; FUN_006280d0  006280d0
006280d0  PUSH EBP
006280d1  MOV EBP,ESP
006280d3  PUSH -0x1
006280d5  PUSH 0x6ab513
006280da  MOV EAX,FS:[0x0]
006280e0  PUSH EAX
006280e1  PUSH ECX
006280e2  MOV EAX,[0x00781870]
006280e7  XOR EAX,EBP
006280e9  PUSH EAX
006280ea  LEA EAX,[EBP + -0xc]
006280ed  MOV FS:[0x0],EAX
006280f3  MOV dword ptr [EBP + -0x10],ECX
006280f6  MOV ECX,dword ptr [EBP + -0x10]
006280f9  CALL 0x00614810
006280fe  MOV dword ptr [EBP + -0x4],0x0
00628105  MOV EAX,dword ptr [EBP + -0x10]
00628108  MOV dword ptr [EAX],0x6d934c
0062810e  MOV ECX,dword ptr [EBP + -0x10]
00628111  ADD ECX,0x70
00628114  CALL 0x0060c5f0
00628119  MOV byte ptr [EBP + -0x4],0x1
0062811d  MOV ECX,dword ptr [EBP + -0x10]
00628120  ADD ECX,0x80
00628126  CALL 0x0060c5f0
0062812b  MOV ECX,dword ptr [EBP + -0x10]
0062812e  MOV dword ptr [ECX + 0x98],0x0
00628138  MOV EDX,dword ptr [EBP + -0x10]
0062813b  MOV dword ptr [EDX + 0x9c],0x0
00628145  MOV EAX,dword ptr [EBP + -0x10]
00628148  MOV dword ptr [EAX + 0xa0],0x0
00628152  MOV ECX,dword ptr [EBP + -0x10]
00628155  MOV dword ptr [ECX + 0xa4],0x0
0062815f  MOV EDX,dword ptr [EBP + -0x10]
00628162  MOV dword ptr [EDX + 0xa8],0x0
0062816c  MOV EAX,dword ptr [EBP + -0x10]
0062816f  MOV dword ptr [EAX + 0xac],0x0
00628179  MOV ECX,dword ptr [EBP + -0x10]
0062817c  MOV dword ptr [ECX + 0xb0],0x0
00628186  MOV EDX,dword ptr [EBP + -0x10]
00628189  MOV dword ptr [EDX + 0xb8],0x5
00628193  MOV EAX,dword ptr [EBP + -0x10]
00628196  MOV dword ptr [EAX + 0x90],0xffffffff
006281a0  MOV ECX,dword ptr [EBP + -0x10]
006281a3  MOV dword ptr [ECX + 0x94],0x0
006281ad  MOV EDX,dword ptr [EBP + -0x10]
006281b0  MOV byte ptr [EDX + 0xb4],0x0
006281b7  MOV EAX,dword ptr [EBP + -0x10]
006281ba  MOV byte ptr [EAX + 0xb5],0x0
006281c1  MOV ECX,dword ptr [EBP + -0x10]
006281c4  MOV byte ptr [ECX + 0xb6],0x0
006281cb  MOV EDX,dword ptr [EBP + -0x10]
006281ce  MOV dword ptr [EDX + 0xbc],0x0
006281d8  MOV EAX,dword ptr [EBP + -0x10]
006281db  MOV byte ptr [EAX + 0xc0],0x0
006281e2  MOV ECX,dword ptr [EBP + -0x10]
006281e5  MOV dword ptr [ECX + 0xc4],0x0
006281ef  MOV EDX,dword ptr [EBP + -0x10]
006281f2  MOV dword ptr [EDX + 0xc8],0x0
006281fc  MOV dword ptr [EBP + -0x4],0xffffffff
00628203  MOV EAX,dword ptr [EBP + -0x10]
00628206  MOV ECX,dword ptr [EBP + -0xc]
00628209  MOV dword ptr FS:[0x0],ECX
00628210  POP ECX
00628211  MOV ESP,EBP
00628213  POP EBP
00628214  RET
