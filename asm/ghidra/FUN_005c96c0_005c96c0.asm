; FUN_005c96c0  005c96c0
005c96c0  PUSH EBP
005c96c1  MOV EBP,ESP
005c96c3  SUB ESP,0x10
005c96c6  MOV dword ptr [EBP + -0x10],ECX
005c96c9  MOV dword ptr [EBP + -0x4],0x0
005c96d0  MOV dword ptr [EBP + -0x8],0x0
005c96d7  JMP 0x005c96e2
005c96d9  MOV EAX,dword ptr [EBP + -0x8]
005c96dc  ADD EAX,0x1
005c96df  MOV dword ptr [EBP + -0x8],EAX
005c96e2  MOV ECX,dword ptr [EBP + -0x8]
005c96e5  SHL ECX,0x5
005c96e8  MOV EDX,dword ptr [EBP + 0x8]
005c96eb  CMP dword ptr [EDX + ECX*0x1],-0x1
005c96ef  JZ 0x005c9735
005c96f1  MOV dword ptr [EBP + -0xc],0x0
005c96f8  JMP 0x005c9703
005c96fa  MOV EAX,dword ptr [EBP + -0xc]
005c96fd  ADD EAX,0x1
005c9700  MOV dword ptr [EBP + -0xc],EAX
005c9703  CMP dword ptr [EBP + -0xc],0x7
005c9707  JGE 0x005c9733
005c9709  MOV ECX,dword ptr [EBP + -0x8]
005c970c  SHL ECX,0x5
005c970f  ADD ECX,dword ptr [EBP + 0x8]
005c9712  MOV EDX,dword ptr [EBP + -0xc]
005c9715  MOV EAX,dword ptr [EBP + -0x4]
005c9718  CMP EAX,dword ptr [ECX + EDX*0x4 + 0x4]
005c971c  JGE 0x005c9731
005c971e  MOV ECX,dword ptr [EBP + -0x8]
005c9721  SHL ECX,0x5
005c9724  ADD ECX,dword ptr [EBP + 0x8]
005c9727  MOV EDX,dword ptr [EBP + -0xc]
005c972a  MOV EAX,dword ptr [ECX + EDX*0x4 + 0x4]
005c972e  MOV dword ptr [EBP + -0x4],EAX
005c9731  JMP 0x005c96fa
005c9733  JMP 0x005c96d9
005c9735  MOV EAX,dword ptr [EBP + -0x4]
005c9738  MOV ESP,EBP
005c973a  POP EBP
005c973b  RET 0x4
