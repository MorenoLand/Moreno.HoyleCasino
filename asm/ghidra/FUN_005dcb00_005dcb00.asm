; FUN_005dcb00  005dcb00
005dcb00  PUSH EBP
005dcb01  MOV EBP,ESP
005dcb03  PUSH ECX
005dcb04  CMP dword ptr [0x0162ee84],0x0
005dcb0b  JZ 0x005dcb64
005dcb0d  MOV EAX,[0x0162ee84]
005dcb12  CMP dword ptr [EAX + 0x58],0x0
005dcb16  JZ 0x005dcb64
005dcb18  CMP dword ptr [EBP + 0x8],0x0
005dcb1c  JL 0x005dcb64
005dcb1e  MOV ECX,dword ptr [0x0162ee84]
005dcb24  MOV EDX,dword ptr [ECX]
005dcb26  MOV ECX,dword ptr [0x0162ee84]
005dcb2c  MOV EAX,dword ptr [EDX + 0x10c]
005dcb32  CALL EAX
005dcb34  CMP dword ptr [EBP + 0x8],EAX
005dcb37  JGE 0x005dcb64
005dcb39  PUSH 0x0
005dcb3b  PUSH 0x75d708
005dcb40  PUSH 0x75d724
005dcb45  PUSH 0x0
005dcb47  MOV ECX,dword ptr [0x0162ee84]
005dcb4d  MOV EDX,dword ptr [ECX + 0x58]
005dcb50  MOV EAX,dword ptr [EBP + 0x8]
005dcb53  MOV ECX,dword ptr [EDX + EAX*0x4]
005dcb56  PUSH ECX
005dcb57  CALL 0x00686ede
005dcb5c  ADD ESP,0x14
005dcb5f  MOV dword ptr [EBP + -0x4],EAX
005dcb62  JMP 0x005dcb6b
005dcb64  MOV dword ptr [EBP + -0x4],0x0
005dcb6b  MOV EAX,dword ptr [EBP + -0x4]
005dcb6e  MOV ESP,EBP
005dcb70  POP EBP
005dcb71  RET
