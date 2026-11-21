; FUN_0062e890  0062e890
0062e890  PUSH EBP
0062e891  MOV EBP,ESP
0062e893  SUB ESP,0x34
0062e896  PUSH ESI
0062e897  PUSH EDI
0062e898  MOV dword ptr [EBP + -0x34],ECX
0062e89b  MOV EAX,dword ptr [EBP + -0x34]
0062e89e  MOV ECX,dword ptr [EBP + 0x8]
0062e8a1  IMUL ECX,dword ptr [EAX + 0x418]
0062e8a8  ADD ECX,0x3
0062e8ab  MOV EDX,dword ptr [EBP + -0x34]
0062e8ae  MOV EAX,dword ptr [EBP + 0x8]
0062e8b1  IMUL EAX,dword ptr [EDX + 0x418]
0062e8b8  SUB EAX,0x1
0062e8bb  AND EAX,0x80000003
0062e8c0  JNS 0x0062e8c7
0062e8c2  DEC EAX
0062e8c3  OR EAX,0xfffffffc
0062e8c6  INC EAX
0062e8c7  SUB ECX,EAX
0062e8c9  MOV dword ptr [EBP + -0x4],ECX
0062e8cc  MOV ECX,dword ptr [EBP + -0x4]
0062e8cf  IMUL ECX,dword ptr [EBP + 0xc]
0062e8d3  PUSH ECX
0062e8d4  CALL 0x00686d82
0062e8d9  ADD ESP,0x4
0062e8dc  MOV dword ptr [EBP + -0x2c],EAX
0062e8df  MOV EDX,dword ptr [EBP + -0x2c]
0062e8e2  MOV dword ptr [EBP + -0x1c],EDX
0062e8e5  MOV EAX,dword ptr [EBP + -0x34]
0062e8e8  FILD dword ptr [EAX + 0x40c]
0062e8ee  FIDIV dword ptr [EBP + 0x8]
0062e8f1  FSTP double ptr [EBP + -0x28]
0062e8f4  MOV ECX,dword ptr [EBP + -0x34]
0062e8f7  FILD dword ptr [ECX + 0x410]
0062e8fd  FIDIV dword ptr [EBP + 0xc]
0062e900  FSTP double ptr [EBP + -0x10]
0062e903  MOV dword ptr [EBP + -0x14],0x0
0062e90a  JMP 0x0062e915
0062e90c  MOV EDX,dword ptr [EBP + -0x14]
0062e90f  ADD EDX,0x1
0062e912  MOV dword ptr [EBP + -0x14],EDX
0062e915  MOV EAX,dword ptr [EBP + -0x14]
0062e918  CMP EAX,dword ptr [EBP + 0xc]
0062e91b  JGE 0x0062e992
0062e91d  MOV dword ptr [EBP + -0x18],0x0
0062e924  JMP 0x0062e92f
0062e926  MOV ECX,dword ptr [EBP + -0x18]
0062e929  ADD ECX,0x1
0062e92c  MOV dword ptr [EBP + -0x18],ECX
0062e92f  MOV EDX,dword ptr [EBP + -0x18]
0062e932  CMP EDX,dword ptr [EBP + 0x8]
0062e935  JGE 0x0062e98d
0062e937  FILD dword ptr [EBP + -0x14]
0062e93a  FMUL double ptr [EBP + -0x10]
0062e93d  CALL 0x00686cc0
0062e942  MOV ESI,EAX
0062e944  MOV EAX,dword ptr [EBP + -0x34]
0062e947  IMUL ESI,dword ptr [EAX + 0x414]
0062e94e  FILD dword ptr [EBP + -0x18]
0062e951  FMUL double ptr [EBP + -0x28]
0062e954  CALL 0x00686cc0
0062e959  MOV ECX,dword ptr [EBP + -0x34]
0062e95c  IMUL EAX,dword ptr [ECX + 0x418]
0062e963  ADD ESI,EAX
0062e965  MOV EDX,dword ptr [EBP + -0x34]
0062e968  MOV EAX,dword ptr [EDX + 0x408]
0062e96e  MOV ECX,dword ptr [EBP + -0x14]
0062e971  IMUL ECX,dword ptr [EBP + -0x4]
0062e975  ADD ECX,dword ptr [EBP + -0x1c]
0062e978  MOV EDX,dword ptr [EBP + -0x34]
0062e97b  MOV EDI,dword ptr [EBP + -0x18]
0062e97e  IMUL EDI,dword ptr [EDX + 0x418]
0062e985  MOV EAX,dword ptr [ESI + EAX*0x1]
0062e988  MOV dword ptr [ECX + EDI*0x1],EAX
0062e98b  JMP 0x0062e926
0062e98d  JMP 0x0062e90c
0062e992  MOV ECX,dword ptr [EBP + -0x34]
0062e995  MOV EDX,dword ptr [EBP + 0x8]
0062e998  MOV dword ptr [ECX + 0x40c],EDX
0062e99e  MOV EAX,dword ptr [EBP + -0x34]
0062e9a1  MOV ECX,dword ptr [EBP + 0xc]
0062e9a4  MOV dword ptr [EAX + 0x410],ECX
0062e9aa  MOV EDX,dword ptr [EBP + -0x34]
0062e9ad  MOV EAX,dword ptr [EBP + -0x4]
0062e9b0  MOV dword ptr [EDX + 0x414],EAX
0062e9b6  MOV ECX,dword ptr [EBP + -0x34]
0062e9b9  MOV EDX,dword ptr [ECX + 0x408]
0062e9bf  MOV dword ptr [EBP + -0x30],EDX
0062e9c2  MOV EAX,dword ptr [EBP + -0x30]
0062e9c5  PUSH EAX
0062e9c6  CALL 0x00686cae
0062e9cb  ADD ESP,0x4
0062e9ce  MOV ECX,dword ptr [EBP + -0x34]
0062e9d1  MOV EDX,dword ptr [EBP + -0x1c]
0062e9d4  MOV dword ptr [ECX + 0x408],EDX
0062e9da  POP EDI
0062e9db  POP ESI
0062e9dc  MOV ESP,EBP
0062e9de  POP EBP
0062e9df  RET 0x8
