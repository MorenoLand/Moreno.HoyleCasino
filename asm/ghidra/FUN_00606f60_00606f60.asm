; FUN_00606f60  00606f60
00606f60  PUSH EBP
00606f61  MOV EBP,ESP
00606f63  SUB ESP,0x24
00606f66  MOV dword ptr [EBP + -0xc],ECX
00606f69  MOV EAX,dword ptr [EBP + -0xc]
00606f6c  CMP dword ptr [EAX + 0x2c],-0x1
00606f70  JNZ 0x00606f87
00606f72  MOV ECX,dword ptr [EBP + 0xc]
00606f75  PUSH ECX
00606f76  MOV EDX,dword ptr [EBP + 0x8]
00606f79  PUSH EDX
00606f7a  MOV ECX,dword ptr [EBP + -0xc]
00606f7d  CALL 0x00606bc0
00606f82  JMP 0x0060711b
00606f87  MOV EAX,dword ptr [EBP + -0xc]
00606f8a  MOV ECX,dword ptr [EBP + 0x8]
00606f8d  MOV dword ptr [EAX + 0x10],ECX
00606f90  MOV EDX,dword ptr [EBP + -0xc]
00606f93  MOV EAX,dword ptr [EBP + 0xc]
00606f96  MOV dword ptr [EDX + 0x14],EAX
00606f99  MOV ECX,dword ptr [EBP + -0xc]
00606f9c  CMP dword ptr [ECX + 0x4],0x0
00606fa0  JNZ 0x00606fa7
00606fa2  JMP 0x0060711b
00606fa7  MOV EDX,dword ptr [EBP + -0xc]
00606faa  MOV byte ptr [EDX + 0xc],0x1
00606fae  MOV EAX,dword ptr [EBP + -0xc]
00606fb1  MOV ECX,dword ptr [EAX + 0x4]
00606fb4  MOV EDX,dword ptr [EBP + -0xc]
00606fb7  MOV EAX,dword ptr [EDX + 0x4]
00606fba  MOV EDX,dword ptr [ECX]
00606fbc  MOV ECX,EAX
00606fbe  MOV EAX,dword ptr [EDX + 0x4c]
00606fc1  CALL EAX
00606fc3  MOV dword ptr [EBP + -0x10],EAX
00606fc6  FILD dword ptr [EBP + -0x10]
00606fc9  MOV ECX,dword ptr [EBP + -0xc]
00606fcc  FSTP float ptr [ECX + 0x18]
00606fcf  MOV EDX,dword ptr [EBP + -0xc]
00606fd2  MOV EAX,dword ptr [EDX + 0x4]
00606fd5  MOV ECX,dword ptr [EBP + -0xc]
00606fd8  MOV ECX,dword ptr [ECX + 0x4]
00606fdb  MOV EDX,dword ptr [EAX]
00606fdd  MOV EAX,dword ptr [EDX + 0x54]
00606fe0  CALL EAX
00606fe2  MOV dword ptr [EBP + -0x14],EAX
00606fe5  FILD dword ptr [EBP + -0x14]
00606fe8  MOV ECX,dword ptr [EBP + -0xc]
00606feb  FSTP float ptr [ECX + 0x1c]
00606fee  MOV EDX,dword ptr [EBP + -0xc]
00606ff1  FILD dword ptr [EDX + 0x10]
00606ff4  MOV EAX,dword ptr [EBP + -0xc]
00606ff7  FSUB float ptr [EAX + 0x18]
00606ffa  MOV ECX,dword ptr [EBP + -0xc]
00606ffd  FSTP float ptr [ECX + 0x20]
00607000  MOV EDX,dword ptr [EBP + -0xc]
00607003  FILD dword ptr [EDX + 0x14]
00607006  MOV EAX,dword ptr [EBP + -0xc]
00607009  FSUB float ptr [EAX + 0x1c]
0060700c  MOV ECX,dword ptr [EBP + -0xc]
0060700f  FSTP float ptr [ECX + 0x24]
00607012  MOV EDX,dword ptr [EBP + -0xc]
00607015  FLD float ptr [EDX + 0x20]
00607018  FCOMP double ptr [0x006b2c50]
0060701e  FNSTSW AX
00607020  TEST AH,0x5
00607023  JP 0x00607032
00607025  MOV EAX,dword ptr [EBP + -0xc]
00607028  FLD float ptr [EAX + 0x20]
0060702b  FCHS
0060702d  FSTP float ptr [EBP + -0x18]
00607030  JMP 0x0060703b
00607032  MOV ECX,dword ptr [EBP + -0xc]
00607035  FLD float ptr [ECX + 0x20]
00607038  FSTP float ptr [EBP + -0x18]
0060703b  MOV EDX,dword ptr [EBP + -0xc]
0060703e  FLD float ptr [EDX + 0x24]
00607041  FCOMP double ptr [0x006b2c50]
00607047  FNSTSW AX
00607049  TEST AH,0x5
0060704c  JP 0x0060705b
0060704e  MOV EAX,dword ptr [EBP + -0xc]
00607051  FLD float ptr [EAX + 0x24]
00607054  FCHS
00607056  FSTP float ptr [EBP + -0x1c]
00607059  JMP 0x00607064
0060705b  MOV ECX,dword ptr [EBP + -0xc]
0060705e  FLD float ptr [ECX + 0x24]
00607061  FSTP float ptr [EBP + -0x1c]
00607064  FLD float ptr [EBP + -0x18]
00607067  FLD float ptr [EBP + -0x1c]
0060706a  FCOMPP
0060706c  FNSTSW AX
0060706e  TEST AH,0x41
00607071  JNZ 0x0060707e
00607073  MOV EDX,dword ptr [EBP + -0xc]
00607076  FLD float ptr [EDX + 0x24]
00607079  FSTP float ptr [EBP + -0x20]
0060707c  JMP 0x00607087
0060707e  MOV EAX,dword ptr [EBP + -0xc]
00607081  FLD float ptr [EAX + 0x20]
00607084  FSTP float ptr [EBP + -0x20]
00607087  MOV ECX,dword ptr [EBP + -0xc]
0060708a  FILD dword ptr [ECX + 0x2c]
0060708d  FDIVR float ptr [EBP + -0x20]
00607090  FSTP float ptr [EBP + -0x8]
00607093  FLD float ptr [EBP + -0x8]
00607096  FCOMP double ptr [0x006b2c50]
0060709c  FNSTSW AX
0060709e  TEST AH,0x5
006070a1  JP 0x006070ad
006070a3  FLD float ptr [EBP + -0x8]
006070a6  FCHS
006070a8  FSTP float ptr [EBP + -0x24]
006070ab  JMP 0x006070b3
006070ad  FLD float ptr [EBP + -0x8]
006070b0  FSTP float ptr [EBP + -0x24]
006070b3  FLD float ptr [EBP + -0x24]
006070b6  FSTP float ptr [EBP + -0x8]
006070b9  FLD float ptr [EBP + -0x8]
006070bc  FADD double ptr [0x006b2c48]
006070c2  CALL 0x00686cc0
006070c7  MOV EDX,dword ptr [EBP + -0xc]
006070ca  MOV ECX,dword ptr [EDX + 0x4]
006070cd  MOV dword ptr [ECX + 0x188],EAX
006070d3  MOV EDX,dword ptr [EBP + -0xc]
006070d6  MOV EAX,dword ptr [EDX + 0x2c]
006070d9  MOV dword ptr [EBP + -0x4],EAX
006070dc  MOV ECX,dword ptr [EBP + -0xc]
006070df  MOV EDX,dword ptr [ECX + 0x4]
006070e2  MOV dword ptr [EDX + 0x184],0x1
006070ec  FILD dword ptr [EBP + -0x4]
006070ef  MOV EAX,dword ptr [EBP + -0xc]
006070f2  FDIVR float ptr [EAX + 0x20]
006070f5  MOV ECX,dword ptr [EBP + -0xc]
006070f8  FSTP float ptr [ECX + 0x20]
006070fb  FILD dword ptr [EBP + -0x4]
006070fe  MOV EDX,dword ptr [EBP + -0xc]
00607101  FDIVR float ptr [EDX + 0x24]
00607104  MOV EAX,dword ptr [EBP + -0xc]
00607107  FSTP float ptr [EAX + 0x24]
0060710a  MOV ECX,dword ptr [0x015e55e8]
00607110  CALL 0x005f3e50
00607115  MOV ECX,dword ptr [EBP + -0xc]
00607118  MOV dword ptr [ECX + 0x28],EAX
0060711b  MOV ESP,EBP
0060711d  POP EBP
0060711e  RET 0x8
