; FUN_00612138  00612138
00612138  MOV dword ptr [EBP + -0x4],0x0
0061213f  MOV EAX,dword ptr [EBP + 0xfffffd6c]
00612145  CMP dword ptr [EAX + 0x4],0x0
00612149  JNZ 0x00612157
0061214b  MOV dword ptr [EBP + 0xfffffd44],0x0
00612155  JMP 0x00612177
00612157  MOV ECX,dword ptr [EBP + 0xfffffd6c]
0061215d  MOV EDX,dword ptr [EBP + 0xfffffd6c]
00612163  MOV EAX,dword ptr [ECX + 0x8]
00612166  SUB EAX,dword ptr [EDX + 0x4]
00612169  CDQ
0061216a  MOV ECX,0x48
0061216f  IDIV ECX
00612171  MOV dword ptr [EBP + 0xfffffd44],EAX
00612177  MOV EDX,dword ptr [EBP + 0x10]
0061217a  ADD EDX,dword ptr [EBP + 0xfffffd44]
00612180  MOV dword ptr [EBP + 0x10],EDX
00612183  MOV EAX,dword ptr [EBP + 0xfffffd6c]
00612189  CMP dword ptr [EAX + 0x4],0x0
0061218d  JZ 0x0061227c
00612193  MOV ECX,dword ptr [EBP + 0xfffffd6c]
00612199  MOV EDX,dword ptr [ECX + 0x8]
0061219c  MOV dword ptr [EBP + 0xfffffea4],EDX
006121a2  MOV EAX,dword ptr [EBP + 0xfffffd6c]
006121a8  MOV ECX,dword ptr [EAX + 0x4]
006121ab  MOV dword ptr [EBP + 0xfffffea8],ECX
006121b1  MOV EDX,dword ptr [EBP + 0xfffffea4]
006121b7  MOV dword ptr [EBP + 0xfffffeac],EDX
006121bd  MOV EAX,dword ptr [EBP + 0xfffffea8]
006121c3  MOV dword ptr [EBP + 0xfffffeb0],EAX
006121c9  MOV CL,byte ptr [EBP + 0xfffffeda]
006121cf  MOV byte ptr [EBP + 0xfffffedb],CL
006121d5  MOV EDX,dword ptr [EBP + 0xfffffeac]
006121db  MOV dword ptr [EBP + 0xfffffeb4],EDX
006121e1  MOV EAX,dword ptr [EBP + 0xfffffeb0]
006121e7  MOV dword ptr [EBP + 0xfffffeb8],EAX
006121ed  JMP 0x006121fe
006121ef  MOV ECX,dword ptr [EBP + 0xfffffeb8]
006121f5  ADD ECX,0x48
006121f8  MOV dword ptr [EBP + 0xfffffeb8],ECX
006121fe  MOV EDX,dword ptr [EBP + 0xfffffeb8]
00612204  CMP EDX,dword ptr [EBP + 0xfffffeb4]
0061220a  JZ 0x0061223e
0061220c  MOV EAX,dword ptr [EBP + 0xfffffeb8]
00612212  ADD EAX,0x20
00612215  MOV dword ptr [EBP + 0xfffffebc],EAX
0061221b  MOV ECX,dword ptr [EBP + 0xfffffebc]
00612221  CALL 0x005be450
00612226  XOR ECX,ECX
00612228  AND ECX,0x1
0061222b  JZ 0x0061223c
0061222d  MOV EDX,dword ptr [EBP + 0xfffffeb8]
00612233  PUSH EDX
00612234  CALL 0x00686cae
00612239  ADD ESP,0x4
0061223c  JMP 0x006121ef
0061223e  MOV EAX,dword ptr [EBP + 0xfffffd6c]
00612244  MOV ECX,dword ptr [EBP + 0xfffffd6c]
0061224a  MOV EAX,dword ptr [EAX + 0xc]
0061224d  SUB EAX,dword ptr [ECX + 0x4]
00612250  CDQ
00612251  MOV ECX,0x48
00612256  IDIV ECX
00612258  MOV dword ptr [EBP + 0xfffffe9c],EAX
0061225e  MOV EDX,dword ptr [EBP + 0xfffffd6c]
00612264  MOV EAX,dword ptr [EDX + 0x4]
00612267  MOV dword ptr [EBP + 0xfffffea0],EAX
0061226d  MOV ECX,dword ptr [EBP + 0xfffffea0]
00612273  PUSH ECX
00612274  CALL 0x00686cae
00612279  ADD ESP,0x4
0061227c  MOV EDX,dword ptr [EBP + -0x5c]
0061227f  IMUL EDX,EDX,0x48
00612282  ADD EDX,dword ptr [EBP + -0x64]
00612285  MOV EAX,dword ptr [EBP + 0xfffffd6c]
0061228b  MOV dword ptr [EAX + 0xc],EDX
0061228e  MOV ECX,dword ptr [EBP + 0x10]
00612291  IMUL ECX,ECX,0x48
00612294  ADD ECX,dword ptr [EBP + -0x64]
00612297  MOV EDX,dword ptr [EBP + 0xfffffd6c]
0061229d  MOV dword ptr [EDX + 0x8],ECX
006122a0  MOV EAX,dword ptr [EBP + 0xfffffd6c]
006122a6  MOV ECX,dword ptr [EBP + -0x64]
006122a9  MOV dword ptr [EAX + 0x4],ECX
006122ac  JMP 0x00612661
