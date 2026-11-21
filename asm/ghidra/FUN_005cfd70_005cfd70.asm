; FUN_005cfd70  005cfd70
005cfd70  PUSH EBP
005cfd71  MOV EBP,ESP
005cfd73  SUB ESP,0x8
005cfd76  MOV dword ptr [EBP + -0x8],ECX
005cfd79  MOV dword ptr [EBP + -0x4],0x0
005cfd80  CMP dword ptr [EBP + 0x8],0x1
005cfd84  JNZ 0x005cfd93
005cfd86  MOV ECX,dword ptr [0x007947e4]
005cfd8c  CALL 0x005dc3b0
005cfd91  JMP 0x005cfde2
005cfd93  PUSH 0x0
005cfd95  MOV ECX,dword ptr [EBP + -0x8]
005cfd98  CALL 0x005fb8b0
005cfd9d  PUSH EAX
005cfd9e  CALL dword ptr [0x006b223c]
005cfda4  ADD ESP,0x4
005cfda7  MOV dword ptr [EBP + -0x4],EAX
005cfdaa  CMP dword ptr [EBP + -0x4],0x0
005cfdae  JLE 0x005cfdd7
005cfdb0  MOV EAX,[0x007947e0]
005cfdb5  MOV ECX,dword ptr [EBP + -0x4]
005cfdb8  MOV dword ptr [EAX + 0x4f08],ECX
005cfdbe  MOV EDX,dword ptr [EBP + -0x4]
005cfdc1  PUSH EDX
005cfdc2  MOV EAX,[0x007947e4]
005cfdc7  MOV EDX,dword ptr [EAX]
005cfdc9  MOV ECX,dword ptr [0x007947e4]
005cfdcf  MOV EAX,dword ptr [EDX + 0x2bc]
005cfdd5  CALL EAX
005cfdd7  MOV ECX,dword ptr [0x007947e4]
005cfddd  CALL 0x005dc3b0
005cfde2  MOV ESP,EBP
005cfde4  POP EBP
005cfde5  RET 0x4
