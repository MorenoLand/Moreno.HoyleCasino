; FUN_0042ca40  0042ca40
0042ca40  PUSH EBP
0042ca41  MOV EBP,ESP
0042ca43  SUB ESP,0x10
0042ca46  MOV dword ptr [EBP + -0xc],ECX
0042ca49  MOV EAX,dword ptr [EBP + 0x8]
0042ca4c  MOV ECX,dword ptr [EBP + -0xc]
0042ca4f  CMP dword ptr [ECX + EAX*0x4 + 0xaec],0x0
0042ca57  JZ 0x0042ca7c
0042ca59  MOV EDX,dword ptr [EBP + 0x8]
0042ca5c  MOV EAX,dword ptr [EBP + -0xc]
0042ca5f  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xaec]
0042ca66  MOV EDX,dword ptr [EBP + 0x8]
0042ca69  MOV EAX,dword ptr [EBP + -0xc]
0042ca6c  MOV EDX,dword ptr [EAX + EDX*0x4 + 0xaec]
0042ca73  MOV EAX,dword ptr [ECX]
0042ca75  MOV ECX,EDX
0042ca77  MOV EDX,dword ptr [EAX + 0x70]
0042ca7a  CALL EDX
0042ca7c  MOV EAX,dword ptr [EBP + 0x8]
0042ca7f  MOV ECX,dword ptr [EBP + -0xc]
0042ca82  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xaec]
0042ca89  MOV dword ptr [EBP + -0x8],EDX
0042ca8c  MOV EAX,dword ptr [EBP + -0x8]
0042ca8f  MOV dword ptr [EBP + -0x4],EAX
0042ca92  CMP dword ptr [EBP + -0x4],0x0
0042ca96  JZ 0x0042caab
0042ca98  PUSH 0x1
0042ca9a  MOV ECX,dword ptr [EBP + -0x4]
0042ca9d  MOV EDX,dword ptr [ECX]
0042ca9f  MOV ECX,dword ptr [EBP + -0x4]
0042caa2  MOV EAX,dword ptr [EDX]
0042caa4  CALL EAX
0042caa6  MOV dword ptr [EBP + -0x10],EAX
0042caa9  JMP 0x0042cab2
0042caab  MOV dword ptr [EBP + -0x10],0x0
0042cab2  MOV ECX,dword ptr [EBP + 0x8]
0042cab5  MOV EDX,dword ptr [EBP + -0xc]
0042cab8  MOV dword ptr [EDX + ECX*0x4 + 0xaec],0x0
0042cac3  MOV ESP,EBP
0042cac5  POP EBP
0042cac6  RET 0x8
