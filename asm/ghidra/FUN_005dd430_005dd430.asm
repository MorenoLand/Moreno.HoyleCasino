; FUN_005dd430  005dd430
005dd430  PUSH EBP
005dd431  MOV EBP,ESP
005dd433  SUB ESP,0x34
005dd436  MOV dword ptr [EBP + -0xc],ECX
005dd439  MOV byte ptr [EBP + -0x6],0x0
005dd43d  MOV byte ptr [EBP + -0x5],0x0
005dd441  MOV dword ptr [EBP + -0x4],0x0
005dd448  CMP dword ptr [0x007947e4],0x0
005dd44f  JZ 0x005dd483
005dd451  MOV EAX,[0x007947e4]
005dd456  MOV EDX,dword ptr [EAX]
005dd458  MOV ECX,dword ptr [0x007947e4]
005dd45e  MOV EAX,dword ptr [EDX + 0x254]
005dd464  CALL EAX
005dd466  TEST EAX,EAX
005dd468  JZ 0x005dd483
005dd46a  MOV ECX,dword ptr [0x007947e4]
005dd470  MOV EDX,dword ptr [ECX]
005dd472  MOV ECX,dword ptr [0x007947e4]
005dd478  MOV EAX,dword ptr [EDX + 0x254]
005dd47e  CALL EAX
005dd480  MOV dword ptr [EBP + -0x4],EAX
005dd483  MOV ECX,dword ptr [EBP + -0x4]
005dd486  PUSH ECX
005dd487  MOV ECX,dword ptr [EBP + -0xc]
005dd48a  CALL 0x005f4720
005dd48f  MOV byte ptr [EBP + -0x6],AL
005dd492  PUSH 0x24b49a
005dd497  MOV ECX,dword ptr [EBP + -0xc]
005dd49a  CALL 0x005f4720
005dd49f  MOV byte ptr [EBP + -0x5],AL
005dd4a2  MOV ECX,dword ptr [EBP + -0xc]
005dd4a5  CALL 0x005f3bf0
005dd4aa  CMP EAX,0x3ea
005dd4af  JNZ 0x005dd4f2
005dd4b1  MOVZX EDX,byte ptr [EBP + -0x6]
005dd4b5  TEST EDX,EDX
005dd4b7  JZ 0x005dd4c5
005dd4b9  MOV EAX,dword ptr [EBP + -0x4]
005dd4bc  PUSH EAX
005dd4bd  MOV ECX,dword ptr [EBP + -0xc]
005dd4c0  CALL 0x005f47e0
005dd4c5  MOVZX ECX,byte ptr [EBP + -0x5]
005dd4c9  TEST ECX,ECX
005dd4cb  JZ 0x005dd4da
005dd4cd  PUSH 0x24b49a
005dd4d2  MOV ECX,dword ptr [EBP + -0xc]
005dd4d5  CALL 0x005f47e0
005dd4da  PUSH ECX
005dd4db  FLD1
005dd4dd  FSTP float ptr [ESP]
005dd4e0  PUSH 0x30d401
005dd4e5  MOV ECX,dword ptr [EBP + -0xc]
005dd4e8  CALL 0x005f4620
005dd4ed  JMP 0x005dd67e
005dd4f2  PUSH 0x30d401
005dd4f7  MOV ECX,dword ptr [EBP + -0xc]
005dd4fa  CALL 0x005f4720
005dd4ff  MOVZX EDX,AL
005dd502  TEST EDX,EDX
005dd504  JZ 0x005dd513
005dd506  PUSH 0x30d401
005dd50b  MOV ECX,dword ptr [EBP + -0xc]
005dd50e  CALL 0x005f47e0
005dd513  PUSH -0x1
005dd515  MOV EAX,dword ptr [EBP + -0xc]
005dd518  MOV EDX,dword ptr [EAX]
005dd51a  MOV ECX,dword ptr [EBP + -0xc]
005dd51d  MOV EAX,dword ptr [EDX + 0x33c]
005dd523  CALL EAX
005dd525  MOVZX ECX,AL
005dd528  TEST ECX,ECX
005dd52a  JNZ 0x005dd53f
005dd52c  MOV ECX,dword ptr [EBP + -0xc]
005dd52f  CALL 0x005f3bf0
005dd534  CMP EAX,0x30d400
005dd539  JNZ 0x005dd67e
005dd53f  MOV ECX,dword ptr [EBP + -0xc]
005dd542  CALL 0x006376d0
005dd547  MOVZX EDX,AL
005dd54a  TEST EDX,EDX
005dd54c  JZ 0x005dd568
005dd54e  MOVZX EAX,byte ptr [EBP + -0x6]
005dd552  TEST EAX,EAX
005dd554  JNZ 0x005dd568
005dd556  PUSH ECX
005dd557  FLD1
005dd559  FSTP float ptr [ESP]
005dd55c  MOV ECX,dword ptr [EBP + -0x4]
005dd55f  PUSH ECX
005dd560  MOV ECX,dword ptr [EBP + -0xc]
005dd563  CALL 0x005f4620
005dd568  MOV ECX,dword ptr [EBP + -0xc]
005dd56b  CALL 0x006376d0
005dd570  MOVZX EDX,AL
005dd573  TEST EDX,EDX
005dd575  JNZ 0x005dd58b
005dd577  MOVZX EAX,byte ptr [EBP + -0x6]
005dd57b  TEST EAX,EAX
005dd57d  JZ 0x005dd58b
005dd57f  MOV ECX,dword ptr [EBP + -0x4]
005dd582  PUSH ECX
005dd583  MOV ECX,dword ptr [EBP + -0xc]
005dd586  CALL 0x005f47e0
005dd58b  MOV ECX,dword ptr [EBP + -0xc]
005dd58e  CALL 0x00637670
005dd593  MOVZX EDX,AL
005dd596  TEST EDX,EDX
005dd598  JZ 0x005dd5f4
005dd59a  MOVZX EAX,byte ptr [EBP + -0x5]
005dd59e  TEST EAX,EAX
005dd5a0  JNZ 0x005dd5f4
005dd5a2  MOV ECX,dword ptr [EBP + -0xc]
005dd5a5  MOVZX EDX,byte ptr [ECX + 0x94]
005dd5ac  TEST EDX,EDX
005dd5ae  JZ 0x005dd5bb
005dd5b0  FLD double ptr [0x006be700]
005dd5b6  FSTP double ptr [EBP + -0x14]
005dd5b9  JMP 0x005dd5c0
005dd5bb  FLD1
005dd5bd  FSTP double ptr [EBP + -0x14]
005dd5c0  MOV ECX,dword ptr [EBP + -0xc]
005dd5c3  CALL 0x006377e0
005dd5c8  MOV dword ptr [EBP + -0x18],EAX
005dd5cb  FILD dword ptr [EBP + -0x18]
005dd5ce  FDIV double ptr [0x006be518]
005dd5d4  FSTP float ptr [EBP + -0x1c]
005dd5d7  FLD float ptr [EBP + -0x1c]
005dd5da  FMUL double ptr [EBP + -0x14]
005dd5dd  FSTP float ptr [EBP + -0x20]
005dd5e0  FLD float ptr [EBP + -0x20]
005dd5e3  PUSH ECX
005dd5e4  FSTP float ptr [ESP]
005dd5e7  PUSH 0x24b49a
005dd5ec  MOV ECX,dword ptr [EBP + -0xc]
005dd5ef  CALL 0x005f4620
005dd5f4  MOV ECX,dword ptr [EBP + -0xc]
005dd5f7  CALL 0x00637670
005dd5fc  MOVZX EAX,AL
005dd5ff  TEST EAX,EAX
005dd601  JNZ 0x005dd618
005dd603  MOVZX ECX,byte ptr [EBP + -0x5]
005dd607  TEST ECX,ECX
005dd609  JZ 0x005dd618
005dd60b  PUSH 0x24b49a
005dd610  MOV ECX,dword ptr [EBP + -0xc]
005dd613  CALL 0x005f47e0
005dd618  PUSH 0x24b49a
005dd61d  MOV ECX,dword ptr [EBP + -0xc]
005dd620  CALL 0x005f4720
005dd625  MOVZX EDX,AL
005dd628  TEST EDX,EDX
005dd62a  JZ 0x005dd67e
005dd62c  MOV EAX,dword ptr [EBP + -0xc]
005dd62f  MOVZX ECX,byte ptr [EAX + 0x94]
005dd636  TEST ECX,ECX
005dd638  JZ 0x005dd645
005dd63a  FLD double ptr [0x006be700]
005dd640  FSTP double ptr [EBP + -0x28]
005dd643  JMP 0x005dd64a
005dd645  FLD1
005dd647  FSTP double ptr [EBP + -0x28]
005dd64a  MOV ECX,dword ptr [EBP + -0xc]
005dd64d  CALL 0x006377e0
005dd652  MOV dword ptr [EBP + -0x2c],EAX
005dd655  FILD dword ptr [EBP + -0x2c]
005dd658  FDIV double ptr [0x006be518]
005dd65e  FSTP float ptr [EBP + -0x30]
005dd661  FLD float ptr [EBP + -0x30]
005dd664  FMUL double ptr [EBP + -0x28]
005dd667  FSTP float ptr [EBP + -0x34]
005dd66a  FLD float ptr [EBP + -0x34]
005dd66d  PUSH ECX
005dd66e  FSTP float ptr [ESP]
005dd671  PUSH 0x24b49a
005dd676  MOV ECX,dword ptr [EBP + -0xc]
005dd679  CALL 0x005f4830
005dd67e  MOV ESP,EBP
005dd680  POP EBP
005dd681  RET
