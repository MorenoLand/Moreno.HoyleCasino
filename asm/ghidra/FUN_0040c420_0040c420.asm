; FUN_0040c420  0040c420
0040c420  PUSH EBP
0040c421  MOV EBP,ESP
0040c423  SUB ESP,0x8
0040c426  MOV dword ptr [EBP + -0x8],ECX
0040c429  MOV ECX,dword ptr [EBP + -0x8]
0040c42c  CALL 0x005e9e20
0040c431  MOV EAX,dword ptr [EBP + -0x8]
0040c434  MOV dword ptr [EAX],0x6b37a8
0040c43a  MOV dword ptr [EBP + -0x4],0x0
0040c441  JMP 0x0040c44c
0040c443  MOV ECX,dword ptr [EBP + -0x4]
0040c446  ADD ECX,0x1
0040c449  MOV dword ptr [EBP + -0x4],ECX
0040c44c  CMP dword ptr [EBP + -0x4],0x5
0040c450  JGE 0x0040c462
0040c452  MOV EDX,dword ptr [EBP + -0x4]
0040c455  MOV EAX,dword ptr [EBP + -0x8]
0040c458  MOV dword ptr [EAX + EDX*0x4 + 0x4],0x0
0040c460  JMP 0x0040c443
0040c462  MOV dword ptr [EBP + -0x4],0x0
0040c469  JMP 0x0040c474
0040c46b  MOV ECX,dword ptr [EBP + -0x4]
0040c46e  ADD ECX,0x1
0040c471  MOV dword ptr [EBP + -0x4],ECX
0040c474  CMP dword ptr [EBP + -0x4],0x4
0040c478  JGE 0x0040c48a
0040c47a  MOV EDX,dword ptr [EBP + -0x4]
0040c47d  MOV EAX,dword ptr [EBP + -0x8]
0040c480  MOV dword ptr [EAX + EDX*0x4 + 0x18],0x0
0040c488  JMP 0x0040c46b
0040c48a  MOV ECX,dword ptr [EBP + -0x8]
0040c48d  MOV dword ptr [ECX + 0x28],0x0
0040c494  MOV EDX,dword ptr [EBP + -0x8]
0040c497  MOV dword ptr [EDX + 0x2c],0x0
0040c49e  MOV EAX,dword ptr [EBP + -0x8]
0040c4a1  MOV dword ptr [EAX + 0x3c],0x0
0040c4a8  MOV ECX,dword ptr [EBP + -0x8]
0040c4ab  MOV dword ptr [ECX + 0x40],0x0
0040c4b2  MOV EDX,dword ptr [EBP + -0x8]
0040c4b5  MOV dword ptr [EDX + 0x44],0x0
0040c4bc  MOV EAX,dword ptr [EBP + -0x8]
0040c4bf  MOV dword ptr [EAX + 0x30],0x0
0040c4c6  MOV ECX,dword ptr [EBP + -0x8]
0040c4c9  MOV dword ptr [ECX + 0x34],0x0
0040c4d0  MOV EDX,dword ptr [EBP + -0x8]
0040c4d3  MOV dword ptr [EDX + 0x38],0x0
0040c4da  MOV EAX,dword ptr [EBP + -0x8]
0040c4dd  MOV ESP,EBP
0040c4df  POP EBP
0040c4e0  RET
