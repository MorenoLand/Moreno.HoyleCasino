; FUN_005d6600  005d6600
005d6600  PUSH EBP
005d6601  MOV EBP,ESP
005d6603  SUB ESP,0x14
005d6606  MOV dword ptr [EBP + -0x10],ECX
005d6609  MOV dword ptr [EBP + -0x4],0x0
005d6610  JMP 0x005d661b
005d6612  MOV EAX,dword ptr [EBP + -0x4]
005d6615  ADD EAX,0x1
005d6618  MOV dword ptr [EBP + -0x4],EAX
005d661b  CMP dword ptr [EBP + -0x4],0x1e
005d661f  JGE 0x005d669e
005d6621  MOV ECX,dword ptr [EBP + -0x4]
005d6624  MOV EDX,dword ptr [EBP + -0x10]
005d6627  CMP dword ptr [EDX + ECX*0x4 + 0x424],0x0
005d662f  JZ 0x005d6699
005d6631  MOV EAX,dword ptr [EBP + -0x4]
005d6634  MOV ECX,dword ptr [EBP + -0x10]
005d6637  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x424]
005d663e  MOV EAX,dword ptr [EBP + -0x4]
005d6641  MOV ECX,dword ptr [EBP + -0x10]
005d6644  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x424]
005d664b  MOV EDX,dword ptr [EDX]
005d664d  MOV EAX,dword ptr [EDX + 0x70]
005d6650  CALL EAX
005d6652  MOV ECX,dword ptr [EBP + -0x4]
005d6655  MOV EDX,dword ptr [EBP + -0x10]
005d6658  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x424]
005d665f  MOV dword ptr [EBP + -0xc],EAX
005d6662  MOV ECX,dword ptr [EBP + -0xc]
005d6665  MOV dword ptr [EBP + -0x8],ECX
005d6668  CMP dword ptr [EBP + -0x8],0x0
005d666c  JZ 0x005d6681
005d666e  PUSH 0x1
005d6670  MOV EDX,dword ptr [EBP + -0x8]
005d6673  MOV EAX,dword ptr [EDX]
005d6675  MOV ECX,dword ptr [EBP + -0x8]
005d6678  MOV EDX,dword ptr [EAX]
005d667a  CALL EDX
005d667c  MOV dword ptr [EBP + -0x14],EAX
005d667f  JMP 0x005d6688
005d6681  MOV dword ptr [EBP + -0x14],0x0
005d6688  MOV EAX,dword ptr [EBP + -0x4]
005d668b  MOV ECX,dword ptr [EBP + -0x10]
005d668e  MOV dword ptr [ECX + EAX*0x4 + 0x424],0x0
005d6699  JMP 0x005d6612
005d669e  MOV ESP,EBP
005d66a0  POP EBP
005d66a1  RET
