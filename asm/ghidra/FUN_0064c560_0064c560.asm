; FUN_0064c560  0064c560
0064c560  PUSH EBP
0064c561  MOV EBP,ESP
0064c563  SUB ESP,0xc
0064c566  MOV dword ptr [EBP + -0xc],ECX
0064c569  MOV EAX,dword ptr [EBP + -0xc]
0064c56c  FILD dword ptr [EAX]
0064c56e  FMUL double ptr [0x006b4b00]
0064c574  MOV ECX,dword ptr [EBP + -0xc]
0064c577  FIADD dword ptr [ECX + 0x4]
0064c57a  FSTP double ptr [EBP + -0x8]
0064c57d  FLD double ptr [EBP + -0x8]
0064c580  FMUL double ptr [EBP + 0x8]
0064c583  FSTP double ptr [EBP + -0x8]
0064c586  SUB ESP,0x8
0064c589  FLD double ptr [EBP + -0x8]
0064c58c  FSTP double ptr [ESP]
0064c58f  CALL dword ptr [0x006b2244]
0064c595  ADD ESP,0x8
0064c598  FSTP double ptr [EBP + -0x8]
0064c59b  SUB ESP,0x8
0064c59e  FLD double ptr [EBP + -0x8]
0064c5a1  FSTP double ptr [ESP]
0064c5a4  MOV ECX,dword ptr [EBP + -0xc]
0064c5a7  CALL 0x0064c450
0064c5ac  MOV ESP,EBP
0064c5ae  POP EBP
0064c5af  RET 0x8
