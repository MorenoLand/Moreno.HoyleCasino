; FUN_005d44f0  005d44f0
005d44f0  PUSH EBP
005d44f1  MOV EBP,ESP
005d44f3  SUB ESP,0x10
005d44f6  MOV dword ptr [EBP + -0xc],ECX
005d44f9  MOV EAX,dword ptr [EBP + -0xc]
005d44fc  CMP dword ptr [EAX + 0x8c],0x0
005d4503  JZ 0x005d455d
005d4505  MOV ECX,dword ptr [EBP + -0xc]
005d4508  MOV EDX,dword ptr [ECX + 0x8c]
005d450e  MOV EAX,dword ptr [EBP + -0xc]
005d4511  MOV ECX,dword ptr [EAX + 0x8c]
005d4517  MOV EDX,dword ptr [EDX]
005d4519  MOV EAX,dword ptr [EDX + 0x70]
005d451c  CALL EAX
005d451e  MOV ECX,dword ptr [EBP + -0xc]
005d4521  MOV EDX,dword ptr [ECX + 0x8c]
005d4527  MOV dword ptr [EBP + -0x8],EDX
005d452a  MOV EAX,dword ptr [EBP + -0x8]
005d452d  MOV dword ptr [EBP + -0x4],EAX
005d4530  CMP dword ptr [EBP + -0x4],0x0
005d4534  JZ 0x005d4549
005d4536  PUSH 0x1
005d4538  MOV ECX,dword ptr [EBP + -0x4]
005d453b  MOV EDX,dword ptr [ECX]
005d453d  MOV ECX,dword ptr [EBP + -0x4]
005d4540  MOV EAX,dword ptr [EDX]
005d4542  CALL EAX
005d4544  MOV dword ptr [EBP + -0x10],EAX
005d4547  JMP 0x005d4550
005d4549  MOV dword ptr [EBP + -0x10],0x0
005d4550  MOV ECX,dword ptr [EBP + -0xc]
005d4553  MOV dword ptr [ECX + 0x8c],0x0
005d455d  MOV ESP,EBP
005d455f  POP EBP
005d4560  RET
