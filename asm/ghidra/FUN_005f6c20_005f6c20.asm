; FUN_005f6c20  005f6c20
005f6c20  PUSH EBP
005f6c21  MOV EBP,ESP
005f6c23  SUB ESP,0x8
005f6c26  MOV dword ptr [EBP + -0x8],ECX
005f6c29  MOV ECX,dword ptr [EBP + -0x8]
005f6c2c  CALL 0x005f49d0
005f6c31  MOV EAX,dword ptr [EBP + -0x8]
005f6c34  MOV dword ptr [EAX],0x6d6bac
005f6c3a  MOV dword ptr [EBP + -0x4],0x0
005f6c41  JMP 0x005f6c4c
005f6c43  MOV ECX,dword ptr [EBP + -0x4]
005f6c46  ADD ECX,0x1
005f6c49  MOV dword ptr [EBP + -0x4],ECX
005f6c4c  CMP dword ptr [EBP + -0x4],0x4
005f6c50  JGE 0x005f6c62
005f6c52  MOV EDX,dword ptr [EBP + -0x4]
005f6c55  MOV EAX,dword ptr [EBP + -0x8]
005f6c58  MOV dword ptr [EAX + EDX*0x4 + 0x48],0x0
005f6c60  JMP 0x005f6c43
005f6c62  MOV EAX,dword ptr [EBP + -0x8]
005f6c65  MOV ESP,EBP
005f6c67  POP EBP
005f6c68  RET
