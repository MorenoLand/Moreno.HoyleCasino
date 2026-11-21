; FUN_0042de30  0042de30
0042de30  PUSH EBP
0042de31  MOV EBP,ESP
0042de33  SUB ESP,0x28
0042de36  MOV dword ptr [EBP + -0x1c],ECX
0042de39  FLD double ptr [0x006b3e40]
0042de3f  FSTP double ptr [EBP + -0x10]
0042de42  MOV ECX,dword ptr [EBP + -0x1c]
0042de45  CALL 0x005cd8b0
0042de4a  MOVZX EAX,AL
0042de4d  TEST EAX,EAX
0042de4f  JNZ 0x0042de58
0042de51  XOR AL,AL
0042de53  JMP 0x0042def4
0042de58  MOV ECX,dword ptr [0x0162ee84]
0042de5e  CALL 0x006377b0
0042de63  MOV dword ptr [EBP + -0x20],EAX
0042de66  FILD dword ptr [EBP + -0x20]
0042de69  FSTP double ptr [EBP + -0x18]
0042de6c  FLD double ptr [0x006b2c38]
0042de72  FCOMP double ptr [EBP + -0x10]
0042de75  FNSTSW AX
0042de77  TEST AH,0x5
0042de7a  JP 0x0042de9e
0042de7c  FLD double ptr [EBP + -0x10]
0042de7f  FSUB double ptr [0x006b2c38]
0042de85  FDIV double ptr [0x006b2c38]
0042de8b  FSTP double ptr [EBP + -0x8]
0042de8e  FLD1
0042de90  FSUB double ptr [EBP + -0x18]
0042de93  FMUL double ptr [EBP + -0x8]
0042de96  FADD double ptr [EBP + -0x18]
0042de99  FSTP double ptr [EBP + -0x18]
0042de9c  JMP 0x0042debc
0042de9e  FLD double ptr [0x006b2c38]
0042dea4  FSUB double ptr [EBP + -0x10]
0042dea7  FDIV double ptr [0x006b2c38]
0042dead  FSTP double ptr [EBP + -0x8]
0042deb0  FLD double ptr [EBP + -0x18]
0042deb3  FMUL double ptr [EBP + -0x8]
0042deb6  FSUBR double ptr [EBP + -0x18]
0042deb9  FSTP double ptr [EBP + -0x18]
0042debc  PUSH 0x100
0042dec1  CALL 0x0062fbf0
0042dec6  ADD ESP,0x4
0042dec9  MOV dword ptr [EBP + -0x24],EAX
0042decc  FILD dword ptr [EBP + -0x24]
0042decf  FLD double ptr [EBP + -0x18]
0042ded2  FMUL double ptr [0x006b6e18]
0042ded8  FCOMPP
0042deda  FNSTSW AX
0042dedc  TEST AH,0x1
0042dedf  JNZ 0x0042deea
0042dee1  MOV dword ptr [EBP + -0x28],0x1
0042dee8  JMP 0x0042def1
0042deea  MOV dword ptr [EBP + -0x28],0x0
0042def1  MOV AL,byte ptr [EBP + -0x28]
0042def4  MOV ESP,EBP
0042def6  POP EBP
0042def7  RET
