; FUN_005df3f0  005df3f0
005df3f0  PUSH EBP
005df3f1  MOV EBP,ESP
005df3f3  SUB ESP,0x8
005df3f6  MOV dword ptr [EBP + -0x4],ECX
005df3f9  MOV EAX,dword ptr [EBP + 0x8]
005df3fc  MOV dword ptr [EBP + -0x8],EAX
005df3ff  CMP dword ptr [EBP + -0x8],0x0
005df403  JZ 0x005df413
005df405  CMP dword ptr [EBP + -0x8],0x1
005df409  JZ 0x005df41f
005df40b  CMP dword ptr [EBP + -0x8],0x2
005df40f  JZ 0x005df42b
005df411  JMP 0x005df437
005df413  MOV ECX,dword ptr [EBP + 0xc]
005df416  MOV EAX,dword ptr [ECX*0x4 + 0x75d99c]
005df41d  JMP 0x005df439
005df41f  MOV EDX,dword ptr [EBP + 0xc]
005df422  MOV EAX,dword ptr [EDX*0x4 + 0x75d9b4]
005df429  JMP 0x005df439
005df42b  MOV EAX,dword ptr [EBP + 0xc]
005df42e  MOV EAX,dword ptr [EAX*0x4 + 0x75d864]
005df435  JMP 0x005df439
005df437  XOR EAX,EAX
005df439  MOV ESP,EBP
005df43b  POP EBP
005df43c  RET 0x8
