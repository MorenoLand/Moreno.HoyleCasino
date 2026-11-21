; FUN_004830e0  004830e0
004830e0  PUSH EBP
004830e1  MOV EBP,ESP
004830e3  SUB ESP,0x24
004830e6  MOV dword ptr [EBP + -0x1c],ECX
004830e9  MOV dword ptr [EBP + -0x8],0x0
004830f0  MOV dword ptr [EBP + -0x4],0x6
004830f7  FLDZ
004830f9  FSTP double ptr [EBP + -0x18]
004830fc  FILD dword ptr [EBP + 0x14]
004830ff  MOV EAX,dword ptr [EBP + 0xc]
00483102  FADD double ptr [EAX]
00483104  MOV ECX,dword ptr [EBP + 0xc]
00483107  FSTP double ptr [ECX]
00483109  MOV EDX,dword ptr [EBP + -0x8]
0048310c  ADD EDX,0x1
0048310f  MOV dword ptr [EBP + -0x8],EDX
00483112  MOV EAX,dword ptr [EBP + 0x20]
00483115  CMP dword ptr [EAX],0x0
00483118  JLE 0x00483132
0048311a  MOV ECX,dword ptr [EBP + 0x20]
0048311d  FILD dword ptr [ECX]
0048311f  MOV EDX,dword ptr [EBP + 0xc]
00483122  FADD double ptr [EDX]
00483124  MOV EAX,dword ptr [EBP + 0xc]
00483127  FSTP double ptr [EAX]
00483129  MOV ECX,dword ptr [EBP + -0x8]
0048312c  ADD ECX,0x1
0048312f  MOV dword ptr [EBP + -0x8],ECX
00483132  CMP dword ptr [EBP + 0x10],0x2
00483136  JNZ 0x0048315a
00483138  MOV EDX,dword ptr [EBP + 0x20]
0048313b  CMP dword ptr [EDX + 0x4],0x0
0048313f  JLE 0x0048315a
00483141  MOV EAX,dword ptr [EBP + 0x20]
00483144  FILD dword ptr [EAX + 0x4]
00483147  MOV ECX,dword ptr [EBP + 0xc]
0048314a  FADD double ptr [ECX]
0048314c  MOV EDX,dword ptr [EBP + 0xc]
0048314f  FSTP double ptr [EDX]
00483151  MOV EAX,dword ptr [EBP + -0x8]
00483154  ADD EAX,0x1
00483157  MOV dword ptr [EBP + -0x8],EAX
0048315a  MOV dword ptr [EBP + -0xc],0x0
00483161  JMP 0x0048316c
00483163  MOV ECX,dword ptr [EBP + -0xc]
00483166  ADD ECX,0x1
00483169  MOV dword ptr [EBP + -0xc],ECX
0048316c  MOV EDX,dword ptr [EBP + -0xc]
0048316f  CMP EDX,dword ptr [EBP + -0x4]
00483172  JGE 0x004831b5
00483174  MOV EAX,dword ptr [EBP + 0x18]
00483177  IMUL EAX,EAX,0x30
0048317a  MOV ECX,dword ptr [EBP + 0x10]
0048317d  SUB ECX,0x2
00483180  IMUL ECX,ECX,0x18
00483183  LEA EDX,[EAX + ECX*0x1 + 0x71e3c8]
0048318a  MOV EAX,dword ptr [EBP + -0xc]
0048318d  MOV ECX,dword ptr [EDX + EAX*0x4]
00483190  IMUL ECX,dword ptr [EBP + 0x1c]
00483194  MOV dword ptr [EBP + -0x20],ECX
00483197  FILD dword ptr [EBP + -0x20]
0048319a  FDIV double ptr [0x006bc208]
004831a0  MOV EDX,dword ptr [EBP + 0xc]
004831a3  FADD double ptr [EDX]
004831a5  MOV EAX,dword ptr [EBP + 0xc]
004831a8  FSTP double ptr [EAX]
004831aa  MOV ECX,dword ptr [EBP + -0x8]
004831ad  ADD ECX,0x1
004831b0  MOV dword ptr [EBP + -0x8],ECX
004831b3  JMP 0x00483163
004831b5  FILD dword ptr [EBP + -0x8]
004831b8  MOV EDX,dword ptr [EBP + 0xc]
004831bb  FDIVR double ptr [EDX]
004831bd  MOV EAX,dword ptr [EBP + 0xc]
004831c0  FSTP double ptr [EAX]
004831c2  FILD dword ptr [EBP + 0x14]
004831c5  MOV ECX,dword ptr [EBP + 0xc]
004831c8  FSUB double ptr [ECX]
004831ca  FSTP double ptr [EBP + -0x18]
004831cd  FLD double ptr [EBP + -0x18]
004831d0  FMUL double ptr [EBP + -0x18]
004831d3  FSTP double ptr [EBP + -0x18]
004831d6  MOV EDX,dword ptr [EBP + 0x8]
004831d9  FLD double ptr [EDX]
004831db  FADD double ptr [EBP + -0x18]
004831de  MOV EAX,dword ptr [EBP + 0x8]
004831e1  FSTP double ptr [EAX]
004831e3  MOV ECX,dword ptr [EBP + 0x20]
004831e6  CMP dword ptr [ECX],0x0
004831e9  JLE 0x0048320e
004831eb  MOV EDX,dword ptr [EBP + 0x20]
004831ee  FILD dword ptr [EDX]
004831f0  MOV EAX,dword ptr [EBP + 0xc]
004831f3  FSUB double ptr [EAX]
004831f5  FSTP double ptr [EBP + -0x18]
004831f8  FLD double ptr [EBP + -0x18]
004831fb  FMUL double ptr [EBP + -0x18]
004831fe  FSTP double ptr [EBP + -0x18]
00483201  MOV ECX,dword ptr [EBP + 0x8]
00483204  FLD double ptr [ECX]
00483206  FADD double ptr [EBP + -0x18]
00483209  MOV EDX,dword ptr [EBP + 0x8]
0048320c  FSTP double ptr [EDX]
0048320e  CMP dword ptr [EBP + 0x10],0x2
00483212  JNZ 0x00483241
00483214  MOV EAX,dword ptr [EBP + 0x20]
00483217  CMP dword ptr [EAX + 0x4],0x0
0048321b  JLE 0x00483241
0048321d  MOV ECX,dword ptr [EBP + 0x20]
00483220  FILD dword ptr [ECX + 0x4]
00483223  MOV EDX,dword ptr [EBP + 0xc]
00483226  FSUB double ptr [EDX]
00483228  FSTP double ptr [EBP + -0x18]
0048322b  FLD double ptr [EBP + -0x18]
0048322e  FMUL double ptr [EBP + -0x18]
00483231  FSTP double ptr [EBP + -0x18]
00483234  MOV EAX,dword ptr [EBP + 0x8]
00483237  FLD double ptr [EAX]
00483239  FADD double ptr [EBP + -0x18]
0048323c  MOV ECX,dword ptr [EBP + 0x8]
0048323f  FSTP double ptr [ECX]
00483241  MOV dword ptr [EBP + -0xc],0x0
00483248  JMP 0x00483253
0048324a  MOV EDX,dword ptr [EBP + -0xc]
0048324d  ADD EDX,0x1
00483250  MOV dword ptr [EBP + -0xc],EDX
00483253  MOV EAX,dword ptr [EBP + -0xc]
00483256  CMP EAX,dword ptr [EBP + -0x4]
00483259  JGE 0x004832a7
0048325b  MOV ECX,dword ptr [EBP + 0x18]
0048325e  IMUL ECX,ECX,0x30
00483261  MOV EDX,dword ptr [EBP + 0x10]
00483264  SUB EDX,0x2
00483267  IMUL EDX,EDX,0x18
0048326a  LEA EAX,[ECX + EDX*0x1 + 0x71e3c8]
00483271  MOV ECX,dword ptr [EBP + -0xc]
00483274  MOV EDX,dword ptr [EAX + ECX*0x4]
00483277  IMUL EDX,dword ptr [EBP + 0x1c]
0048327b  MOV dword ptr [EBP + -0x24],EDX
0048327e  FILD dword ptr [EBP + -0x24]
00483281  FDIV double ptr [0x006bc208]
00483287  MOV EAX,dword ptr [EBP + 0xc]
0048328a  FSUB double ptr [EAX]
0048328c  FSTP double ptr [EBP + -0x18]
0048328f  FLD double ptr [EBP + -0x18]
00483292  FMUL double ptr [EBP + -0x18]
00483295  FSTP double ptr [EBP + -0x18]
00483298  MOV ECX,dword ptr [EBP + 0x8]
0048329b  FLD double ptr [ECX]
0048329d  FADD double ptr [EBP + -0x18]
004832a0  MOV EDX,dword ptr [EBP + 0x8]
004832a3  FSTP double ptr [EDX]
004832a5  JMP 0x0048324a
004832a7  FILD dword ptr [EBP + -0x8]
004832aa  MOV EAX,dword ptr [EBP + 0x8]
004832ad  FDIVR double ptr [EAX]
004832af  MOV ECX,dword ptr [EBP + 0x8]
004832b2  FSTP double ptr [ECX]
004832b4  MOV EDX,dword ptr [EBP + 0x8]
004832b7  SUB ESP,0x8
004832ba  FLD double ptr [EDX]
004832bc  FSTP double ptr [ESP]
004832bf  CALL 0x00686ee4
004832c4  ADD ESP,0x8
004832c7  MOV EAX,dword ptr [EBP + 0x8]
004832ca  FSTP double ptr [EAX]
004832cc  MOV ESP,EBP
004832ce  POP EBP
004832cf  RET 0x1c
