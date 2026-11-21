; FUN_004fd640  004fd640
004fd640  PUSH EBP
004fd641  MOV EBP,ESP
004fd643  SUB ESP,0x8
004fd646  MOV dword ptr [EBP + -0x4],ECX
004fd649  MOV ECX,dword ptr [EBP + -0x4]
004fd64c  CALL 0x005fc360
004fd651  MOV dword ptr [EBP + -0x8],EAX
004fd654  CMP dword ptr [EBP + -0x8],0x0
004fd658  JZ 0x004fd66b
004fd65a  CMP dword ptr [EBP + -0x8],0x1
004fd65e  JZ 0x004fd688
004fd660  CMP dword ptr [EBP + -0x8],0x2
004fd664  JZ 0x004fd6d8
004fd666  JMP 0x004fd702
004fd66b  MOV EAX,dword ptr [EBP + -0x4]
004fd66e  MOV dword ptr [EAX + 0x20],0x0
004fd675  PUSH 0x0
004fd677  PUSH 0x1
004fd679  MOV ECX,dword ptr [EBP + -0x4]
004fd67c  MOV EDX,dword ptr [ECX]
004fd67e  MOV ECX,dword ptr [EBP + -0x4]
004fd681  MOV EAX,dword ptr [EDX + 0x8]
004fd684  CALL EAX
004fd686  JMP 0x004fd702
004fd688  MOV ECX,dword ptr [EBP + -0x4]
004fd68b  MOV EDX,dword ptr [ECX + 0x20]
004fd68e  PUSH EDX
004fd68f  MOV EAX,dword ptr [EBP + -0x4]
004fd692  PUSH EAX
004fd693  MOV ECX,dword ptr [0x00791364]
004fd699  CALL 0x00483910
004fd69e  MOV ECX,dword ptr [EBP + -0x4]
004fd6a1  MOV EDX,dword ptr [ECX + 0x20]
004fd6a4  ADD EDX,0x1
004fd6a7  MOV EAX,dword ptr [EBP + -0x4]
004fd6aa  MOV dword ptr [EAX + 0x20],EDX
004fd6ad  MOV ECX,dword ptr [EBP + -0x4]
004fd6b0  CMP dword ptr [ECX + 0x20],0x7
004fd6b4  JL 0x004fd6c7
004fd6b6  PUSH 0x2
004fd6b8  MOV EDX,dword ptr [EBP + -0x4]
004fd6bb  MOV EAX,dword ptr [EDX]
004fd6bd  MOV ECX,dword ptr [EBP + -0x4]
004fd6c0  MOV EDX,dword ptr [EAX + 0x4]
004fd6c3  CALL EDX
004fd6c5  JMP 0x004fd6d6
004fd6c7  PUSH 0x1
004fd6c9  MOV EAX,dword ptr [EBP + -0x4]
004fd6cc  MOV EDX,dword ptr [EAX]
004fd6ce  MOV ECX,dword ptr [EBP + -0x4]
004fd6d1  MOV EAX,dword ptr [EDX + 0x4]
004fd6d4  CALL EAX
004fd6d6  JMP 0x004fd702
004fd6d8  PUSH 0x0
004fd6da  MOV ECX,dword ptr [0x00791eb8]
004fd6e0  MOV EDX,dword ptr [ECX + 0x4]
004fd6e3  MOV EAX,[0x00791eb8]
004fd6e8  MOV ECX,dword ptr [EAX + 0x4]
004fd6eb  MOV EDX,dword ptr [EDX]
004fd6ed  MOV EAX,dword ptr [EDX + 0x1c]
004fd6f0  CALL EAX
004fd6f2  PUSH 0x0
004fd6f4  MOV ECX,dword ptr [0x00791eb8]
004fd6fa  MOV ECX,dword ptr [ECX + 0x4]
004fd6fd  CALL 0x005fc420
004fd702  MOV ESP,EBP
004fd704  POP EBP
004fd705  RET
