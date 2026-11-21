; FUN_005ca570  005ca570
005ca570  PUSH EBP
005ca571  MOV EBP,ESP
005ca573  PUSH ECX
005ca574  MOV dword ptr [EBP + -0x4],ECX
005ca577  MOV EAX,[0x007947e4]
005ca57c  MOV EDX,dword ptr [EAX]
005ca57e  MOV ECX,dword ptr [0x007947e4]
005ca584  MOV EAX,dword ptr [EDX + 0x25c]
005ca58a  CALL EAX
005ca58c  TEST EAX,EAX
005ca58e  JNZ 0x005ca595
005ca590  JMP 0x005ca63c
005ca595  MOV ECX,dword ptr [EBP + -0x4]
005ca598  MOV EDX,dword ptr [ECX + 0x4]
005ca59b  FLD1
005ca59d  FCOMP double ptr [EDX + 0x1e0]
005ca5a3  FNSTSW AX
005ca5a5  TEST AH,0x44
005ca5a8  JP 0x005ca5c4
005ca5aa  MOV EAX,dword ptr [EBP + -0x4]
005ca5ad  MOV ECX,dword ptr [EAX + 0x14]
005ca5b0  MOV EDX,dword ptr [EBP + -0x4]
005ca5b3  MOV EAX,dword ptr [EDX + 0x14]
005ca5b6  MOV EDX,dword ptr [ECX]
005ca5b8  MOV ECX,EAX
005ca5ba  MOV EAX,dword ptr [EDX + 0xd0]
005ca5c0  CALL EAX
005ca5c2  JMP 0x005ca5da
005ca5c4  MOV ECX,dword ptr [EBP + -0x4]
005ca5c7  MOV EDX,dword ptr [ECX + 0x14]
005ca5ca  MOV EAX,dword ptr [EBP + -0x4]
005ca5cd  MOV ECX,dword ptr [EAX + 0x14]
005ca5d0  MOV EDX,dword ptr [EDX]
005ca5d2  MOV EAX,dword ptr [EDX + 0xcc]
005ca5d8  CALL EAX
005ca5da  MOV ECX,dword ptr [EBP + -0x4]
005ca5dd  MOV EDX,dword ptr [ECX + 0x10]
005ca5e0  FLD double ptr [0x006d2438]
005ca5e6  FCOMP double ptr [EDX + 0x1e0]
005ca5ec  FNSTSW AX
005ca5ee  TEST AH,0x44
005ca5f1  JNP 0x005ca60c
005ca5f3  MOV EAX,dword ptr [EBP + -0x4]
005ca5f6  MOV ECX,dword ptr [EAX + 0x10]
005ca5f9  MOV EDX,dword ptr [EBP + -0x4]
005ca5fc  FILD dword ptr [EDX + 0x30]
005ca5ff  FCOMP double ptr [ECX + 0x1e0]
005ca605  FNSTSW AX
005ca607  TEST AH,0x44
005ca60a  JP 0x005ca626
005ca60c  MOV EAX,dword ptr [EBP + -0x4]
005ca60f  MOV ECX,dword ptr [EAX + 0x18]
005ca612  MOV EDX,dword ptr [EBP + -0x4]
005ca615  MOV EAX,dword ptr [EDX + 0x18]
005ca618  MOV EDX,dword ptr [ECX]
005ca61a  MOV ECX,EAX
005ca61c  MOV EAX,dword ptr [EDX + 0xd0]
005ca622  CALL EAX
005ca624  JMP 0x005ca63c
005ca626  MOV ECX,dword ptr [EBP + -0x4]
005ca629  MOV EDX,dword ptr [ECX + 0x18]
005ca62c  MOV EAX,dword ptr [EBP + -0x4]
005ca62f  MOV ECX,dword ptr [EAX + 0x18]
005ca632  MOV EDX,dword ptr [EDX]
005ca634  MOV EAX,dword ptr [EDX + 0xcc]
005ca63a  CALL EAX
005ca63c  MOV ESP,EBP
005ca63e  POP EBP
005ca63f  RET
