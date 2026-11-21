; FUN_0063a3e0  0063a3e0
0063a3e0  PUSH EBP
0063a3e1  MOV EBP,ESP
0063a3e3  SUB ESP,0x10
0063a3e6  MOV dword ptr [EBP + -0x10],ECX
0063a3e9  MOV EAX,dword ptr [EBP + -0x10]
0063a3ec  MOV ECX,dword ptr [EBP + 0x8]
0063a3ef  MOV dword ptr [EAX + 0x4],ECX
0063a3f2  MOV EDX,dword ptr [EBP + -0x10]
0063a3f5  MOV dword ptr [EDX + 0x8],0xffffffff
0063a3fc  MOV EAX,dword ptr [EBP + -0x10]
0063a3ff  MOV dword ptr [EAX + 0xc],0xffffffff
0063a406  MOV ECX,dword ptr [EBP + -0x10]
0063a409  MOV byte ptr [ECX + 0x10],0x0
0063a40d  MOV ECX,dword ptr [EBP + -0x10]
0063a410  CALL 0x0063a4d0
0063a415  MOV ECX,dword ptr [EBP + -0x10]
0063a418  CALL 0x0063aac0
0063a41d  MOV EDX,dword ptr [EBP + 0xc]
0063a420  MOV dword ptr [EAX],EDX
0063a422  MOV dword ptr [EBP + -0x4],0x0
0063a429  JMP 0x0063a434
0063a42b  MOV EAX,dword ptr [EBP + -0x4]
0063a42e  ADD EAX,0x1
0063a431  MOV dword ptr [EBP + -0x4],EAX
0063a434  MOV ECX,dword ptr [0x0162ee84]
0063a43a  MOV EDX,dword ptr [ECX]
0063a43c  MOV ECX,dword ptr [0x0162ee84]
0063a442  MOV EAX,dword ptr [EDX + 0xec]
0063a448  CALL EAX
0063a44a  CMP dword ptr [EBP + -0x4],EAX
0063a44d  JGE 0x0063a45d
0063a44f  MOV ECX,dword ptr [EBP + -0x4]
0063a452  PUSH ECX
0063a453  MOV ECX,dword ptr [EBP + -0x10]
0063a456  CALL 0x0063a720
0063a45b  JMP 0x0063a42b
0063a45d  MOV EDX,dword ptr [EBP + -0x10]
0063a460  CMP dword ptr [EDX + 0x3a4],0x0
0063a467  JZ 0x0063a481
0063a469  MOV EAX,dword ptr [EBP + -0x10]
0063a46c  MOV ECX,dword ptr [EAX + 0x3a4]
0063a472  MOV dword ptr [EBP + -0x8],ECX
0063a475  MOV EDX,dword ptr [EBP + -0x8]
0063a478  PUSH EDX
0063a479  CALL 0x00686cae
0063a47e  ADD ESP,0x4
0063a481  MOV EAX,[0x0162ee84]
0063a486  MOV EDX,dword ptr [EAX]
0063a488  MOV ECX,dword ptr [0x0162ee84]
0063a48e  MOV EAX,dword ptr [EDX + 0xf0]
0063a494  CALL EAX
0063a496  PUSH EAX
0063a497  CALL 0x00686d82
0063a49c  ADD ESP,0x4
0063a49f  MOV dword ptr [EBP + -0xc],EAX
0063a4a2  MOV ECX,dword ptr [EBP + -0x10]
0063a4a5  MOV EDX,dword ptr [EBP + -0xc]
0063a4a8  MOV dword ptr [ECX + 0x3a4],EDX
0063a4ae  MOV EAX,dword ptr [EBP + -0x10]
0063a4b1  MOV EDX,dword ptr [EAX]
0063a4b3  MOV ECX,dword ptr [EBP + -0x10]
0063a4b6  MOV EAX,dword ptr [EDX + 0x8]
0063a4b9  CALL EAX
0063a4bb  MOV ESP,EBP
0063a4bd  POP EBP
0063a4be  RET 0x8
