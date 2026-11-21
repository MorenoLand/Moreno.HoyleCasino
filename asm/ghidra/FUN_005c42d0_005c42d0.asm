; FUN_005c42d0  005c42d0
005c42d0  PUSH EBP
005c42d1  MOV EBP,ESP
005c42d3  SUB ESP,0x1c
005c42d6  MOV dword ptr [EBP + -0x1c],ECX
005c42d9  FILD dword ptr [EBP + 0x8]
005c42dc  MOV EAX,dword ptr [EBP + -0x1c]
005c42df  FSTP float ptr [EAX + 0x18]
005c42e2  MOV ECX,dword ptr [EBP + -0x1c]
005c42e5  CMP dword ptr [ECX + 0x1c],0x5
005c42e9  JNZ 0x005c43e8
005c42ef  MOV EDX,dword ptr [EBP + -0x1c]
005c42f2  MOV EAX,dword ptr [EDX]
005c42f4  MOV ECX,dword ptr [EAX + 0x50]
005c42f7  FLD float ptr [ECX + 0x7c]
005c42fa  FSTP float ptr [EBP + -0x4]
005c42fd  MOV EDX,dword ptr [EBP + -0x1c]
005c4300  FLD float ptr [EDX + 0xc]
005c4303  FDIV float ptr [EBP + -0x4]
005c4306  FSTP float ptr [EBP + -0x8]
005c4309  MOV EAX,dword ptr [EBP + -0x1c]
005c430c  MOV ECX,dword ptr [EAX]
005c430e  MOV EDX,dword ptr [ECX + 0x50]
005c4311  FLD float ptr [EDX + 0x7c]
005c4314  FMUL float ptr [EBP + -0x8]
005c4317  FMUL float ptr [EBP + -0x8]
005c431a  FMUL double ptr [0x006b2c38]
005c4320  FSTP float ptr [EBP + -0x18]
005c4323  MOV EAX,dword ptr [EBP + -0x1c]
005c4326  FLD float ptr [EAX + 0x18]
005c4329  FADD float ptr [EBP + -0x18]
005c432c  FSTP float ptr [EBP + -0x14]
005c432f  MOV ECX,dword ptr [EBP + -0x1c]
005c4332  MOV EDX,dword ptr [ECX]
005c4334  MOV EAX,dword ptr [EDX + 0x4]
005c4337  MOV ECX,dword ptr [EAX + 0x10]
005c433a  MOV EDX,dword ptr [EBP + -0x1c]
005c433d  MOV EAX,dword ptr [EDX + 0x4]
005c4340  IMUL EAX,EAX,0x7c
005c4343  MOV ECX,dword ptr [ECX + EAX*0x1 + 0x20]
005c4347  MOV dword ptr [EBP + -0xc],ECX
005c434a  FLD float ptr [EBP + -0x14]
005c434d  FCOMP double ptr [0x006b2c50]
005c4353  FNSTSW AX
005c4355  TEST AH,0x5
005c4358  JP 0x005c4365
005c435a  FILD dword ptr [EBP + -0xc]
005c435d  FADD float ptr [EBP + -0x14]
005c4360  FSTP float ptr [EBP + -0x14]
005c4363  JMP 0x005c434a
005c4365  FILD dword ptr [EBP + -0xc]
005c4368  FLD float ptr [EBP + -0x14]
005c436b  FCOMPP
005c436d  FNSTSW AX
005c436f  TEST AH,0x1
005c4372  JNZ 0x005c437f
005c4374  FILD dword ptr [EBP + -0xc]
005c4377  FSUBR float ptr [EBP + -0x14]
005c437a  FSTP float ptr [EBP + -0x14]
005c437d  JMP 0x005c4365
005c437f  FLD float ptr [EBP + -0x14]
005c4382  MOV EDX,dword ptr [EBP + -0x1c]
005c4385  FLD float ptr [EDX + 0x8]
005c4388  FCOMPP
005c438a  FNSTSW AX
005c438c  TEST AH,0x5
005c438f  JP 0x005c439a
005c4391  FILD dword ptr [EBP + -0xc]
005c4394  FSUBR float ptr [EBP + -0x14]
005c4397  FSTP float ptr [EBP + -0x14]
005c439a  FLD float ptr [EBP + -0x14]
005c439d  MOV EAX,dword ptr [EBP + -0x1c]
005c43a0  FSUB float ptr [EAX + 0x8]
005c43a3  FSTP float ptr [EBP + -0x10]
005c43a6  FLD float ptr [EBP + -0x10]
005c43a9  MOV ECX,dword ptr [EBP + -0x1c]
005c43ac  FDIV float ptr [ECX + 0xc]
005c43af  MOV EDX,dword ptr [EBP + -0x1c]
005c43b2  FSTP float ptr [EDX + 0x14]
005c43b5  MOV EAX,dword ptr [EBP + -0x1c]
005c43b8  FLD float ptr [EAX + 0x14]
005c43bb  FCOMP double ptr [0x006b2c50]
005c43c1  FNSTSW AX
005c43c3  TEST AH,0x5
005c43c6  JP 0x005c43d0
005c43c8  MOV ECX,dword ptr [EBP + -0x1c]
005c43cb  FLDZ
005c43cd  FSTP float ptr [ECX + 0x14]
005c43d0  MOV EDX,dword ptr [EBP + -0x1c]
005c43d3  FILD dword ptr [EDX + 0x4]
005c43d6  FMUL double ptr [0x006bc270]
005c43dc  MOV EAX,dword ptr [EBP + -0x1c]
005c43df  FSUBR float ptr [EAX + 0x14]
005c43e2  MOV ECX,dword ptr [EBP + -0x1c]
005c43e5  FSTP float ptr [ECX + 0x14]
005c43e8  MOV ESP,EBP
005c43ea  POP EBP
005c43eb  RET 0x4
