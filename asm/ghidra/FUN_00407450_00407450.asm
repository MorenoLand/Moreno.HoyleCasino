; FUN_00407450  00407450
00407450  PUSH EBP
00407451  MOV EBP,ESP
00407453  SUB ESP,0x8
00407456  MOV dword ptr [EBP + -0x8],ECX
00407459  MOV EAX,dword ptr [EBP + -0x8]
0040745c  MOV ECX,dword ptr [EAX]
0040745e  ADD ECX,0x1
00407461  MOV EDX,dword ptr [EBP + -0x8]
00407464  MOV dword ptr [EDX],ECX
00407466  MOV EAX,dword ptr [EBP + -0x8]
00407469  MOV dword ptr [EAX + 0x4],0x0
00407470  MOV ECX,dword ptr [EBP + -0x8]
00407473  MOV dword ptr [ECX + 0x8],0x0
0040747a  MOV EDX,dword ptr [EBP + -0x8]
0040747d  MOV dword ptr [EDX + 0xc],0x0
00407484  MOV EAX,dword ptr [EBP + -0x8]
00407487  MOV dword ptr [EAX + 0x10],0x0
0040748e  MOV ECX,dword ptr [EBP + -0x8]
00407491  MOV dword ptr [ECX + 0x14],0x0
00407498  MOV EDX,dword ptr [EBP + -0x8]
0040749b  MOV dword ptr [EDX + 0x18],0x0
004074a2  MOV EAX,dword ptr [EBP + -0x8]
004074a5  MOV dword ptr [EAX + 0x1c],0x0
004074ac  MOV dword ptr [EBP + -0x4],0x0
004074b3  JMP 0x004074be
004074b5  MOV ECX,dword ptr [EBP + -0x4]
004074b8  ADD ECX,0x1
004074bb  MOV dword ptr [EBP + -0x4],ECX
004074be  CMP dword ptr [EBP + -0x4],0x63
004074c2  JGE 0x004074e5
004074c4  MOV EDX,dword ptr [EBP + -0x4]
004074c7  MOV EAX,dword ptr [EBP + -0x8]
004074ca  MOV dword ptr [EAX + EDX*0x4 + 0x20],0x0
004074d2  MOV ECX,dword ptr [EBP + -0x4]
004074d5  MOV EDX,dword ptr [EBP + -0x8]
004074d8  MOV dword ptr [EDX + ECX*0x4 + 0x1ac],0x0
004074e3  JMP 0x004074b5
004074e5  MOV ESP,EBP
004074e7  POP EBP
004074e8  RET
