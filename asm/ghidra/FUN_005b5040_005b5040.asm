; FUN_005b5040  005b5040
005b5040  PUSH EBP
005b5041  MOV EBP,ESP
005b5043  SUB ESP,0x14
005b5046  MOV dword ptr [EBP + -0x14],ECX
005b5049  CMP dword ptr [EBP + 0xc],-0x1
005b504d  JNZ 0x005b505e
005b504f  MOV EAX,dword ptr [EBP + 0x8]
005b5052  PUSH EAX
005b5053  MOV ECX,dword ptr [EBP + -0x14]
005b5056  CALL 0x005b4e50
005b505b  MOV dword ptr [EBP + 0xc],EAX
005b505e  MOV dword ptr [EBP + -0x8],0x0
005b5065  MOV ECX,dword ptr [EBP + 0xc]
005b5068  PUSH ECX
005b5069  MOV EDX,dword ptr [EBP + 0x8]
005b506c  PUSH EDX
005b506d  MOV ECX,dword ptr [EBP + -0x14]
005b5070  CALL 0x005b5830
005b5075  MOV dword ptr [EBP + -0x4],EAX
005b5078  MOV dword ptr [EBP + -0xc],0x0
005b507f  JMP 0x005b508a
005b5081  MOV EAX,dword ptr [EBP + -0xc]
005b5084  ADD EAX,0x1
005b5087  MOV dword ptr [EBP + -0xc],EAX
005b508a  MOV ECX,dword ptr [EBP + -0xc]
005b508d  CMP ECX,dword ptr [EBP + -0x4]
005b5090  JGE 0x005b50c1
005b5092  MOV EDX,dword ptr [EBP + -0xc]
005b5095  PUSH EDX
005b5096  MOV EAX,dword ptr [EBP + 0xc]
005b5099  PUSH EAX
005b509a  MOV ECX,dword ptr [EBP + 0x8]
005b509d  PUSH ECX
005b509e  MOV ECX,dword ptr [EBP + -0x14]
005b50a1  CALL 0x005b5f60
005b50a6  MOV dword ptr [EBP + -0x10],EAX
005b50a9  CMP dword ptr [EBP + -0x10],0x1
005b50ad  JNZ 0x005b50b6
005b50af  MOV dword ptr [EBP + -0x10],0xb
005b50b6  MOV EDX,dword ptr [EBP + -0x8]
005b50b9  ADD EDX,dword ptr [EBP + -0x10]
005b50bc  MOV dword ptr [EBP + -0x8],EDX
005b50bf  JMP 0x005b5081
005b50c1  MOV EAX,dword ptr [EBP + -0x8]
005b50c4  MOV ESP,EBP
005b50c6  POP EBP
005b50c7  RET 0x8
