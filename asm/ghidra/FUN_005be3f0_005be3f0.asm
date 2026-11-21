; FUN_005be3f0  005be3f0
005be3f0  PUSH EBP
005be3f1  MOV EBP,ESP
005be3f3  SUB ESP,0xc
005be3f6  MOV dword ptr [EBP + -0xc],ECX
005be3f9  MOV dword ptr [EBP + -0x4],0x0
005be400  MOV ECX,dword ptr [EBP + -0xc]
005be403  CALL 0x005c9140
005be408  MOV dword ptr [EBP + -0x8],0x0
005be40f  JMP 0x005be41a
005be411  MOV EAX,dword ptr [EBP + -0x8]
005be414  ADD EAX,0x1
005be417  MOV dword ptr [EBP + -0x8],EAX
005be41a  MOV ECX,dword ptr [EBP + -0xc]
005be41d  MOV EDX,dword ptr [ECX + 0x10]
005be420  MOV EAX,dword ptr [EBP + -0x8]
005be423  CMP EAX,dword ptr [EDX + 0x8]
005be426  JGE 0x005be441
005be428  MOV ECX,dword ptr [EBP + -0xc]
005be42b  ADD ECX,dword ptr [EBP + -0x8]
005be42e  MOVZX EDX,byte ptr [ECX + 0x34]
005be432  TEST EDX,EDX
005be434  JZ 0x005be43f
005be436  MOV EAX,dword ptr [EBP + -0x4]
005be439  ADD EAX,0x1
005be43c  MOV dword ptr [EBP + -0x4],EAX
005be43f  JMP 0x005be411
005be441  MOV EAX,dword ptr [EBP + -0x4]
005be444  MOV ESP,EBP
005be446  POP EBP
005be447  RET
