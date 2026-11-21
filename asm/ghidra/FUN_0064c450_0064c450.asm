; FUN_0064c450  0064c450
0064c450  PUSH EBP
0064c451  MOV EBP,ESP
0064c453  SUB ESP,0x8
0064c456  MOV dword ptr [EBP + -0x8],ECX
0064c459  MOV byte ptr [EBP + -0x1],0x0
0064c45d  FLDZ
0064c45f  FCOMP double ptr [EBP + 0x8]
0064c462  FNSTSW AX
0064c464  TEST AH,0x41
0064c467  JNZ 0x0064c479
0064c469  MOV byte ptr [EBP + -0x1],0x1
0064c46d  FLD double ptr [EBP + 0x8]
0064c470  FMUL double ptr [0x006dcd70]
0064c476  FSTP double ptr [EBP + 0x8]
0064c479  FLD double ptr [0x006dcd68]
0064c47f  FCOMP double ptr [EBP + 0x8]
0064c482  FNSTSW AX
0064c484  TEST AH,0x5
0064c487  JP 0x0064c492
0064c489  FLD double ptr [0x006dcd68]
0064c48f  FSTP double ptr [EBP + 0x8]
0064c492  FLD double ptr [0x006dcd60]
0064c498  FCOMP double ptr [EBP + 0x8]
0064c49b  FNSTSW AX
0064c49d  TEST AH,0x41
0064c4a0  JNZ 0x0064c4ab
0064c4a2  FLD double ptr [0x006dcd60]
0064c4a8  FSTP double ptr [EBP + 0x8]
0064c4ab  FLD double ptr [EBP + 0x8]
0064c4ae  FDIV double ptr [0x006b4b00]
0064c4b4  CALL 0x00686cc0
0064c4b9  MOV ECX,dword ptr [EBP + -0x8]
0064c4bc  MOV dword ptr [ECX],EAX
0064c4be  MOV EDX,dword ptr [EBP + -0x8]
0064c4c1  FILD dword ptr [EDX]
0064c4c3  FMUL double ptr [0x006b4b00]
0064c4c9  FSUBR double ptr [EBP + 0x8]
0064c4cc  FSTP double ptr [EBP + 0x8]
0064c4cf  FLD double ptr [EBP + 0x8]
0064c4d2  CALL 0x00686cc0
0064c4d7  CDQ
0064c4d8  MOV ECX,0x64
0064c4dd  IDIV ECX
0064c4df  MOV EAX,dword ptr [EBP + -0x8]
0064c4e2  MOV dword ptr [EAX + 0x4],EDX
0064c4e5  MOVZX ECX,byte ptr [EBP + -0x1]
0064c4e9  TEST ECX,ECX
0064c4eb  JZ 0x0064c509
0064c4ed  MOV EDX,dword ptr [EBP + -0x8]
0064c4f0  MOV EAX,dword ptr [EDX]
0064c4f2  IMUL EAX,EAX,-0x1
0064c4f5  MOV ECX,dword ptr [EBP + -0x8]
0064c4f8  MOV dword ptr [ECX],EAX
0064c4fa  MOV EDX,dword ptr [EBP + -0x8]
0064c4fd  MOV EAX,dword ptr [EDX + 0x4]
0064c500  IMUL EAX,EAX,-0x1
0064c503  MOV ECX,dword ptr [EBP + -0x8]
0064c506  MOV dword ptr [ECX + 0x4],EAX
0064c509  MOV ESP,EBP
0064c50b  POP EBP
0064c50c  RET 0x8
