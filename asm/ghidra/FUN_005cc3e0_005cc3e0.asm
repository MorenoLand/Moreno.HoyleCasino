; FUN_005cc3e0  005cc3e0
005cc3e0  PUSH EBP
005cc3e1  MOV EBP,ESP
005cc3e3  SUB ESP,0xc
005cc3e6  MOV dword ptr [EBP + -0xc],ECX
005cc3e9  MOV dword ptr [EBP + -0x4],0x0
005cc3f0  JMP 0x005cc3fb
005cc3f2  MOV EAX,dword ptr [EBP + -0x4]
005cc3f5  ADD EAX,0x1
005cc3f8  MOV dword ptr [EBP + -0x4],EAX
005cc3fb  CMP dword ptr [EBP + -0x4],0x5
005cc3ff  JGE 0x005cc42d
005cc401  MOV dword ptr [EBP + -0x8],0x0
005cc408  JMP 0x005cc413
005cc40a  MOV ECX,dword ptr [EBP + -0x8]
005cc40d  ADD ECX,0x1
005cc410  MOV dword ptr [EBP + -0x8],ECX
005cc413  CMP dword ptr [EBP + -0x8],0x4
005cc417  JGE 0x005cc42b
005cc419  MOV EDX,dword ptr [EBP + -0x8]
005cc41c  PUSH EDX
005cc41d  MOV EAX,dword ptr [EBP + -0x4]
005cc420  PUSH EAX
005cc421  MOV ECX,dword ptr [EBP + -0xc]
005cc424  CALL 0x005cc440
005cc429  JMP 0x005cc40a
005cc42b  JMP 0x005cc3f2
005cc42d  MOV ESP,EBP
005cc42f  POP EBP
005cc430  RET
