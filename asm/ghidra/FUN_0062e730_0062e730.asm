; FUN_0062e730  0062e730
0062e730  PUSH EBP
0062e731  MOV EBP,ESP
0062e733  SUB ESP,0x40
0062e736  PUSH ESI
0062e737  MOV dword ptr [EBP + -0x30],ECX
0062e73a  MOV EAX,dword ptr [EBP + -0x30]
0062e73d  CMP dword ptr [EAX + 0x408],0x0
0062e744  JZ 0x0062e752
0062e746  MOV ECX,dword ptr [EBP + 0x8]
0062e749  CMP dword ptr [ECX + 0x408],0x0
0062e750  JNZ 0x0062e757
0062e752  JMP 0x0062e83f
0062e757  FLDZ
0062e759  FSTP double ptr [EBP + -0x10]
0062e75c  JMP 0x0062e76a
0062e75e  FLD double ptr [EBP + -0x10]
0062e761  FADD double ptr [0x006b2c48]
0062e767  FSTP double ptr [EBP + -0x10]
0062e76a  MOV ECX,dword ptr [EBP + 0x8]
0062e76d  CALL 0x0062e360
0062e772  MOV dword ptr [EBP + -0x34],EAX
0062e775  FILD dword ptr [EBP + -0x34]
0062e778  FMUL double ptr [EBP + 0x14]
0062e77b  FCOMP double ptr [EBP + -0x10]
0062e77e  FNSTSW AX
0062e780  TEST AH,0x41
0062e783  JNZ 0x0062e83f
0062e789  FLD double ptr [EBP + -0x10]
0062e78c  FSTP double ptr [EBP + -0x28]
0062e78f  FLD double ptr [EBP + -0x10]
0062e792  FDIV double ptr [EBP + 0x14]
0062e795  FSTP double ptr [EBP + -0x8]
0062e798  FLDZ
0062e79a  FSTP double ptr [EBP + -0x18]
0062e79d  JMP 0x0062e7ab
0062e79f  FLD double ptr [EBP + -0x18]
0062e7a2  FADD double ptr [0x006b2c48]
0062e7a8  FSTP double ptr [EBP + -0x18]
0062e7ab  MOV ECX,dword ptr [EBP + 0x8]
0062e7ae  CALL 0x0062e340
0062e7b3  MOV dword ptr [EBP + -0x38],EAX
0062e7b6  FILD dword ptr [EBP + -0x38]
0062e7b9  FMUL double ptr [EBP + 0xc]
0062e7bc  FCOMP double ptr [EBP + -0x18]
0062e7bf  FNSTSW AX
0062e7c1  TEST AH,0x41
0062e7c4  JNZ 0x0062e83a
0062e7c6  MOV ECX,dword ptr [EBP + 0x8]
0062e7c9  CALL 0x0062e6f0
0062e7ce  MOV dword ptr [EBP + -0x3c],EAX
0062e7d1  FILD dword ptr [EBP + -0x3c]
0062e7d4  FMUL double ptr [EBP + -0x28]
0062e7d7  MOV EDX,dword ptr [EBP + -0x30]
0062e7da  FILD dword ptr [EDX + 0x418]
0062e7e0  FMUL double ptr [EBP + -0x18]
0062e7e3  FADDP
0062e7e5  CALL 0x00686cc0
0062e7ea  MOV dword ptr [EBP + -0x1c],EAX
0062e7ed  MOV ECX,dword ptr [EBP + -0x30]
0062e7f0  CALL 0x0062e6f0
0062e7f5  MOV dword ptr [EBP + -0x40],EAX
0062e7f8  FILD dword ptr [EBP + -0x40]
0062e7fb  FMUL double ptr [EBP + -0x8]
0062e7fe  MOV EAX,dword ptr [EBP + -0x30]
0062e801  FILD dword ptr [EAX + 0x418]
0062e807  FMUL double ptr [EBP + -0x18]
0062e80a  FDIV double ptr [EBP + 0xc]
0062e80d  FADDP
0062e80f  CALL 0x00686cc0
0062e814  MOV dword ptr [EBP + -0x2c],EAX
0062e817  MOV ECX,dword ptr [EBP + -0x30]
0062e81a  MOV EDX,dword ptr [ECX + 0x408]
0062e820  MOV EAX,dword ptr [EBP + 0x8]
0062e823  MOV ECX,dword ptr [EAX + 0x408]
0062e829  MOV EAX,dword ptr [EBP + -0x1c]
0062e82c  MOV ESI,dword ptr [EBP + -0x2c]
0062e82f  MOV EDX,dword ptr [EDX + ESI*0x1]
0062e832  MOV dword ptr [ECX + EAX*0x1],EDX
0062e835  JMP 0x0062e79f
0062e83a  JMP 0x0062e75e
0062e83f  POP ESI
0062e840  MOV ESP,EBP
0062e842  POP EBP
0062e843  RET 0x14
