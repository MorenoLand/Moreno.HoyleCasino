; FUN_00614450  00614450
00614450  PUSH EBP
00614451  MOV EBP,ESP
00614453  SUB ESP,0x14
00614456  MOV EAX,dword ptr [EBP + 0xc]
00614459  MOV ECX,dword ptr [EBP + 0xc]
0061445c  MOV EDX,dword ptr [EAX]
0061445e  CMP EDX,dword ptr [ECX + 0x8]
00614461  JL 0x00614469
00614463  MOV byte ptr [EBP + -0x1],0x1
00614467  JMP 0x00614481
00614469  MOV EAX,dword ptr [EBP + 0xc]
0061446c  MOV ECX,dword ptr [EBP + 0xc]
0061446f  MOV EDX,dword ptr [EAX + 0x4]
00614472  CMP EDX,dword ptr [ECX + 0xc]
00614475  JL 0x0061447d
00614477  MOV byte ptr [EBP + -0x1],0x1
0061447b  JMP 0x00614481
0061447d  MOV byte ptr [EBP + -0x1],0x0
00614481  MOVZX EAX,byte ptr [EBP + -0x1]
00614485  TEST EAX,EAX
00614487  JZ 0x006144aa
00614489  MOV ECX,dword ptr [EBP + 0x10]
0061448c  MOV EDX,dword ptr [EBP + 0x8]
0061448f  MOV EAX,dword ptr [ECX]
00614491  MOV dword ptr [EDX],EAX
00614493  MOV EAX,dword ptr [ECX + 0x4]
00614496  MOV dword ptr [EDX + 0x4],EAX
00614499  MOV EAX,dword ptr [ECX + 0x8]
0061449c  MOV dword ptr [EDX + 0x8],EAX
0061449f  MOV ECX,dword ptr [ECX + 0xc]
006144a2  MOV dword ptr [EDX + 0xc],ECX
006144a5  JMP 0x006145a5
006144aa  MOV EDX,dword ptr [EBP + 0x10]
006144ad  MOV EAX,dword ptr [EBP + 0x10]
006144b0  MOV ECX,dword ptr [EDX]
006144b2  CMP ECX,dword ptr [EAX + 0x8]
006144b5  JL 0x006144bd
006144b7  MOV byte ptr [EBP + -0x2],0x1
006144bb  JMP 0x006144d5
006144bd  MOV EDX,dword ptr [EBP + 0x10]
006144c0  MOV EAX,dword ptr [EBP + 0x10]
006144c3  MOV ECX,dword ptr [EDX + 0x4]
006144c6  CMP ECX,dword ptr [EAX + 0xc]
006144c9  JL 0x006144d1
006144cb  MOV byte ptr [EBP + -0x2],0x1
006144cf  JMP 0x006144d5
006144d1  MOV byte ptr [EBP + -0x2],0x0
006144d5  MOVZX EDX,byte ptr [EBP + -0x2]
006144d9  TEST EDX,EDX
006144db  JZ 0x006144fe
006144dd  MOV EAX,dword ptr [EBP + 0xc]
006144e0  MOV ECX,dword ptr [EBP + 0x8]
006144e3  MOV EDX,dword ptr [EAX]
006144e5  MOV dword ptr [ECX],EDX
006144e7  MOV EDX,dword ptr [EAX + 0x4]
006144ea  MOV dword ptr [ECX + 0x4],EDX
006144ed  MOV EDX,dword ptr [EAX + 0x8]
006144f0  MOV dword ptr [ECX + 0x8],EDX
006144f3  MOV EAX,dword ptr [EAX + 0xc]
006144f6  MOV dword ptr [ECX + 0xc],EAX
006144f9  JMP 0x006145a5
006144fe  MOV ECX,dword ptr [EBP + 0xc]
00614501  MOV EDX,dword ptr [EBP + 0x10]
00614504  MOV EAX,dword ptr [ECX]
00614506  CMP EAX,dword ptr [EDX]
00614508  JGE 0x00614514
0061450a  MOV ECX,dword ptr [EBP + 0xc]
0061450d  MOV EDX,dword ptr [ECX]
0061450f  MOV dword ptr [EBP + -0x8],EDX
00614512  JMP 0x0061451c
00614514  MOV EAX,dword ptr [EBP + 0x10]
00614517  MOV ECX,dword ptr [EAX]
00614519  MOV dword ptr [EBP + -0x8],ECX
0061451c  MOV EDX,dword ptr [EBP + 0x8]
0061451f  MOV EAX,dword ptr [EBP + -0x8]
00614522  MOV dword ptr [EDX],EAX
00614524  MOV ECX,dword ptr [EBP + 0xc]
00614527  MOV EDX,dword ptr [EBP + 0x10]
0061452a  MOV EAX,dword ptr [ECX + 0x4]
0061452d  CMP EAX,dword ptr [EDX + 0x4]
00614530  JGE 0x0061453d
00614532  MOV ECX,dword ptr [EBP + 0xc]
00614535  MOV EDX,dword ptr [ECX + 0x4]
00614538  MOV dword ptr [EBP + -0xc],EDX
0061453b  JMP 0x00614546
0061453d  MOV EAX,dword ptr [EBP + 0x10]
00614540  MOV ECX,dword ptr [EAX + 0x4]
00614543  MOV dword ptr [EBP + -0xc],ECX
00614546  MOV EDX,dword ptr [EBP + 0x8]
00614549  MOV EAX,dword ptr [EBP + -0xc]
0061454c  MOV dword ptr [EDX + 0x4],EAX
0061454f  MOV ECX,dword ptr [EBP + 0xc]
00614552  MOV EDX,dword ptr [EBP + 0x10]
00614555  MOV EAX,dword ptr [ECX + 0x8]
00614558  CMP EAX,dword ptr [EDX + 0x8]
0061455b  JLE 0x00614568
0061455d  MOV ECX,dword ptr [EBP + 0xc]
00614560  MOV EDX,dword ptr [ECX + 0x8]
00614563  MOV dword ptr [EBP + -0x10],EDX
00614566  JMP 0x00614571
00614568  MOV EAX,dword ptr [EBP + 0x10]
0061456b  MOV ECX,dword ptr [EAX + 0x8]
0061456e  MOV dword ptr [EBP + -0x10],ECX
00614571  MOV EDX,dword ptr [EBP + 0x8]
00614574  MOV EAX,dword ptr [EBP + -0x10]
00614577  MOV dword ptr [EDX + 0x8],EAX
0061457a  MOV ECX,dword ptr [EBP + 0xc]
0061457d  MOV EDX,dword ptr [EBP + 0x10]
00614580  MOV EAX,dword ptr [ECX + 0xc]
00614583  CMP EAX,dword ptr [EDX + 0xc]
00614586  JLE 0x00614593
00614588  MOV ECX,dword ptr [EBP + 0xc]
0061458b  MOV EDX,dword ptr [ECX + 0xc]
0061458e  MOV dword ptr [EBP + -0x14],EDX
00614591  JMP 0x0061459c
00614593  MOV EAX,dword ptr [EBP + 0x10]
00614596  MOV ECX,dword ptr [EAX + 0xc]
00614599  MOV dword ptr [EBP + -0x14],ECX
0061459c  MOV EDX,dword ptr [EBP + 0x8]
0061459f  MOV EAX,dword ptr [EBP + -0x14]
006145a2  MOV dword ptr [EDX + 0xc],EAX
006145a5  MOV ESP,EBP
006145a7  POP EBP
006145a8  RET
