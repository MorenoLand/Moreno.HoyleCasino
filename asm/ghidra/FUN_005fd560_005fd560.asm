; FUN_005fd560  005fd560
005fd560  PUSH EBP
005fd561  MOV EBP,ESP
005fd563  SUB ESP,0x10
005fd566  MOV dword ptr [EBP + -0xc],ECX
005fd569  MOV EAX,dword ptr [EBP + -0xc]
005fd56c  CMP dword ptr [EAX + 0x1f8],0x0
005fd573  JZ 0x005fd5cd
005fd575  MOV ECX,dword ptr [EBP + -0xc]
005fd578  MOV EDX,dword ptr [ECX + 0x1f8]
005fd57e  MOV EAX,dword ptr [EBP + -0xc]
005fd581  MOV ECX,dword ptr [EAX + 0x1f8]
005fd587  MOV EDX,dword ptr [EDX]
005fd589  MOV EAX,dword ptr [EDX + 0x70]
005fd58c  CALL EAX
005fd58e  MOV ECX,dword ptr [EBP + -0xc]
005fd591  MOV EDX,dword ptr [ECX + 0x1f8]
005fd597  MOV dword ptr [EBP + -0x8],EDX
005fd59a  MOV EAX,dword ptr [EBP + -0x8]
005fd59d  MOV dword ptr [EBP + -0x4],EAX
005fd5a0  CMP dword ptr [EBP + -0x4],0x0
005fd5a4  JZ 0x005fd5b9
005fd5a6  PUSH 0x1
005fd5a8  MOV ECX,dword ptr [EBP + -0x4]
005fd5ab  MOV EDX,dword ptr [ECX]
005fd5ad  MOV ECX,dword ptr [EBP + -0x4]
005fd5b0  MOV EAX,dword ptr [EDX]
005fd5b2  CALL EAX
005fd5b4  MOV dword ptr [EBP + -0x10],EAX
005fd5b7  JMP 0x005fd5c0
005fd5b9  MOV dword ptr [EBP + -0x10],0x0
005fd5c0  MOV ECX,dword ptr [EBP + -0xc]
005fd5c3  MOV dword ptr [ECX + 0x1f8],0x0
005fd5cd  MOV ESP,EBP
005fd5cf  POP EBP
005fd5d0  RET
