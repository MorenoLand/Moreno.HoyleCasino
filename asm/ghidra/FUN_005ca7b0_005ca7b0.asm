; FUN_005ca7b0  005ca7b0
005ca7b0  PUSH EBP
005ca7b1  MOV EBP,ESP
005ca7b3  SUB ESP,0x8
005ca7b6  MOV dword ptr [EBP + -0x8],ECX
005ca7b9  MOV dword ptr [EBP + -0x4],0x0
005ca7c0  JMP 0x005ca7cb
005ca7c2  MOV EAX,dword ptr [EBP + -0x4]
005ca7c5  ADD EAX,0x1
005ca7c8  MOV dword ptr [EBP + -0x4],EAX
005ca7cb  CMP dword ptr [EBP + -0x4],0x4
005ca7cf  JGE 0x005ca7f1
005ca7d1  MOV ECX,dword ptr [EBP + -0x4]
005ca7d4  MOV EDX,dword ptr [EBP + -0x8]
005ca7d7  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x4]
005ca7db  MOV ECX,dword ptr [EBP + -0x4]
005ca7de  MOV EDX,dword ptr [EBP + -0x8]
005ca7e1  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x4]
005ca7e5  MOV EAX,dword ptr [EAX]
005ca7e7  MOV EDX,dword ptr [EAX + 0xcc]
005ca7ed  CALL EDX
005ca7ef  JMP 0x005ca7c2
005ca7f1  MOV EAX,dword ptr [EBP + -0x8]
005ca7f4  CMP dword ptr [EAX + 0x2c],0x0
005ca7f8  JNZ 0x005ca7ff
005ca7fa  JMP 0x005ca89d
005ca7ff  MOV dword ptr [EBP + -0x4],0x0
005ca806  JMP 0x005ca811
005ca808  MOV ECX,dword ptr [EBP + -0x4]
005ca80b  ADD ECX,0x1
005ca80e  MOV dword ptr [EBP + -0x4],ECX
005ca811  CMP dword ptr [EBP + -0x4],0x4
005ca815  JGE 0x005ca89d
005ca81b  MOV EDX,dword ptr [EBP + -0x4]
005ca81e  MOV EAX,dword ptr [EBP + -0x8]
005ca821  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x4]
005ca825  FLD double ptr [0x006b3e40]
005ca82b  FCOMP double ptr [ECX + 0x1e0]
005ca831  FNSTSW AX
005ca833  TEST AH,0x44
005ca836  JNP 0x005ca858
005ca838  MOV EDX,dword ptr [EBP + -0x4]
005ca83b  MOV EAX,dword ptr [EBP + -0x8]
005ca83e  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x4]
005ca842  FLD double ptr [ECX + 0x1e0]
005ca848  CALL 0x00686cc0
005ca84d  MOV ECX,dword ptr [EBP + -0x8]
005ca850  CDQ
005ca851  IDIV dword ptr [ECX + 0x2c]
005ca854  TEST EDX,EDX
005ca856  JZ 0x005ca87a
005ca858  MOV EDX,dword ptr [EBP + -0x4]
005ca85b  MOV EAX,dword ptr [EBP + -0x8]
005ca85e  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x4]
005ca862  MOV EDX,dword ptr [EBP + -0x4]
005ca865  MOV EAX,dword ptr [EBP + -0x8]
005ca868  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x4]
005ca86c  MOV EAX,dword ptr [ECX]
005ca86e  MOV ECX,EDX
005ca870  MOV EDX,dword ptr [EAX + 0xd0]
005ca876  CALL EDX
005ca878  JMP 0x005ca898
005ca87a  MOV EAX,dword ptr [EBP + -0x4]
005ca87d  MOV ECX,dword ptr [EBP + -0x8]
005ca880  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x4]
005ca884  MOV EAX,dword ptr [EBP + -0x4]
005ca887  MOV ECX,dword ptr [EBP + -0x8]
005ca88a  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x4]
005ca88e  MOV EDX,dword ptr [EDX]
005ca890  MOV EAX,dword ptr [EDX + 0xcc]
005ca896  CALL EAX
005ca898  JMP 0x005ca808
005ca89d  MOV ESP,EBP
005ca89f  POP EBP
005ca8a0  RET
