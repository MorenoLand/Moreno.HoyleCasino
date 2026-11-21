; FUN_006314a0  006314a0
006314a0  PUSH EBP
006314a1  MOV EBP,ESP
006314a3  SUB ESP,0x40
006314a6  MOV dword ptr [EBP + -0x38],0x0
006314ad  MOV dword ptr [EBP + -0x20],0x0
006314b4  MOV dword ptr [EBP + -0x1c],0x0
006314bb  MOV EAX,dword ptr [EBP + 0x10]
006314be  MOV ECX,dword ptr [EAX]
006314c0  MOV EDX,dword ptr [EAX + 0x4]
006314c3  MOV dword ptr [EBP + -0x18],ECX
006314c6  MOV dword ptr [EBP + -0x14],EDX
006314c9  MOV EAX,dword ptr [EBP + 0x10]
006314cc  MOV ECX,dword ptr [EAX + 0x8]
006314cf  MOV EDX,dword ptr [EAX + 0xc]
006314d2  MOV dword ptr [EBP + -0x40],ECX
006314d5  MOV dword ptr [EBP + -0x3c],EDX
006314d8  MOV dword ptr [EBP + -0x24],0x3
006314df  MOV EAX,dword ptr [EBP + 0x10]
006314e2  MOV ECX,dword ptr [EAX + 0x10]
006314e5  MOV EDX,dword ptr [EAX + 0x14]
006314e8  MOV dword ptr [EBP + -0x8],ECX
006314eb  MOV dword ptr [EBP + -0x4],EDX
006314ee  MOV EAX,dword ptr [EBP + -0x8]
006314f1  MOV dword ptr [EBP + -0x34],EAX
006314f4  MOV ECX,dword ptr [EBP + -0x4]
006314f7  MOV dword ptr [EBP + -0x30],ECX
006314fa  CMP dword ptr [EBP + 0x14],0x3
006314fe  JLE 0x00631511
00631500  MOV EDX,dword ptr [EBP + 0x10]
00631503  MOV EAX,dword ptr [EDX + 0x18]
00631506  MOV ECX,dword ptr [EDX + 0x1c]
00631509  MOV dword ptr [EBP + -0x10],EAX
0063150c  MOV dword ptr [EBP + -0xc],ECX
0063150f  JMP 0x0063151f
00631511  MOV EDX,dword ptr [EBP + 0x10]
00631514  MOV EAX,dword ptr [EDX]
00631516  MOV ECX,dword ptr [EDX + 0x4]
00631519  MOV dword ptr [EBP + -0x10],EAX
0063151c  MOV dword ptr [EBP + -0xc],ECX
0063151f  MOV EDX,dword ptr [EBP + -0x14]
00631522  CMP EDX,dword ptr [EBP + 0xc]
00631525  JG 0x0063152f
00631527  MOV EAX,dword ptr [EBP + 0xc]
0063152a  CMP EAX,dword ptr [EBP + -0x3c]
0063152d  JLE 0x0063153f
0063152f  MOV ECX,dword ptr [EBP + -0x3c]
00631532  CMP ECX,dword ptr [EBP + 0xc]
00631535  JG 0x0063159f
00631537  MOV EDX,dword ptr [EBP + 0xc]
0063153a  CMP EDX,dword ptr [EBP + -0x14]
0063153d  JG 0x0063159f
0063153f  MOV EAX,dword ptr [EBP + -0x18]
00631542  CMP EAX,dword ptr [EBP + 0x8]
00631545  JG 0x0063154f
00631547  MOV ECX,dword ptr [EBP + 0x8]
0063154a  CMP ECX,dword ptr [EBP + -0x40]
0063154d  JLE 0x0063155f
0063154f  MOV EDX,dword ptr [EBP + -0x40]
00631552  CMP EDX,dword ptr [EBP + 0x8]
00631555  JG 0x0063159f
00631557  MOV EAX,dword ptr [EBP + 0x8]
0063155a  CMP EAX,dword ptr [EBP + -0x18]
0063155d  JG 0x0063159f
0063155f  MOV ECX,dword ptr [EBP + 0x8]
00631562  SUB ECX,dword ptr [EBP + -0x18]
00631565  MOV dword ptr [EBP + -0x2c],ECX
00631568  MOV EDX,dword ptr [EBP + 0xc]
0063156b  SUB EDX,dword ptr [EBP + -0x14]
0063156e  MOV dword ptr [EBP + -0x28],EDX
00631571  MOV EAX,dword ptr [EBP + 0x8]
00631574  SUB EAX,dword ptr [EBP + -0x20]
00631577  MOV dword ptr [EBP + -0x20],EAX
0063157a  MOV ECX,dword ptr [EBP + 0xc]
0063157d  SUB ECX,dword ptr [EBP + -0x1c]
00631580  MOV dword ptr [EBP + -0x1c],ECX
00631583  MOV EDX,dword ptr [EBP + -0x2c]
00631586  IMUL EDX,dword ptr [EBP + -0x1c]
0063158a  MOV EAX,dword ptr [EBP + -0x28]
0063158d  IMUL EAX,dword ptr [EBP + -0x20]
00631591  SUB EDX,EAX
00631593  JNZ 0x0063159f
00631595  MOV EAX,0x1
0063159a  JMP 0x006316cd
0063159f  MOV ECX,dword ptr [EBP + -0x14]
006315a2  CMP ECX,dword ptr [EBP + 0xc]
006315a5  JGE 0x006315af
006315a7  MOV EDX,dword ptr [EBP + 0xc]
006315aa  CMP EDX,dword ptr [EBP + -0x3c]
006315ad  JL 0x006315bf
006315af  MOV EAX,dword ptr [EBP + -0x3c]
006315b2  CMP EAX,dword ptr [EBP + 0xc]
006315b5  JGE 0x00631614
006315b7  MOV ECX,dword ptr [EBP + 0xc]
006315ba  CMP ECX,dword ptr [EBP + -0x14]
006315bd  JGE 0x00631614
006315bf  MOV EDX,dword ptr [EBP + -0x40]
006315c2  SUB EDX,dword ptr [EBP + -0x18]
006315c5  MOV dword ptr [EBP + -0x2c],EDX
006315c8  MOV EAX,dword ptr [EBP + -0x3c]
006315cb  SUB EAX,dword ptr [EBP + -0x14]
006315ce  MOV dword ptr [EBP + -0x28],EAX
006315d1  JNS 0x006315e3
006315d3  MOV ECX,dword ptr [EBP + -0x2c]
006315d6  NEG ECX
006315d8  MOV dword ptr [EBP + -0x2c],ECX
006315db  MOV EDX,dword ptr [EBP + -0x28]
006315de  NEG EDX
006315e0  MOV dword ptr [EBP + -0x28],EDX
006315e3  MOV EAX,dword ptr [EBP + 0x8]
006315e6  SUB EAX,dword ptr [EBP + -0x18]
006315e9  MOV dword ptr [EBP + -0x20],EAX
006315ec  MOV ECX,dword ptr [EBP + 0xc]
006315ef  SUB ECX,dword ptr [EBP + -0x14]
006315f2  MOV dword ptr [EBP + -0x1c],ECX
006315f5  MOV EDX,dword ptr [EBP + -0x2c]
006315f8  IMUL EDX,dword ptr [EBP + -0x1c]
006315fc  MOV EAX,dword ptr [EBP + -0x28]
006315ff  IMUL EAX,dword ptr [EBP + -0x20]
00631603  SUB EDX,EAX
00631605  TEST EDX,EDX
00631607  JLE 0x00631612
00631609  MOV ECX,dword ptr [EBP + -0x38]
0063160c  ADD ECX,0x1
0063160f  MOV dword ptr [EBP + -0x38],ECX
00631612  JMP 0x00631666
00631614  MOV EDX,dword ptr [EBP + -0x3c]
00631617  CMP EDX,dword ptr [EBP + 0xc]
0063161a  JNZ 0x00631666
0063161c  MOV EAX,dword ptr [EBP + 0x8]
0063161f  CMP EAX,dword ptr [EBP + -0x40]
00631622  JGE 0x00631666
00631624  MOV ECX,dword ptr [EBP + -0x30]
00631627  CMP ECX,dword ptr [EBP + -0x3c]
0063162a  JZ 0x0063164a
0063162c  MOV EDX,dword ptr [EBP + -0x3c]
0063162f  SUB EDX,dword ptr [EBP + -0x14]
00631632  MOV EAX,dword ptr [EBP + -0x30]
00631635  SUB EAX,dword ptr [EBP + -0x3c]
00631638  IMUL EDX,EAX
0063163b  TEST EDX,EDX
0063163d  JLE 0x00631648
0063163f  MOV ECX,dword ptr [EBP + -0x38]
00631642  ADD ECX,0x1
00631645  MOV dword ptr [EBP + -0x38],ECX
00631648  JMP 0x00631666
0063164a  MOV EDX,dword ptr [EBP + -0x3c]
0063164d  SUB EDX,dword ptr [EBP + -0x14]
00631650  MOV EAX,dword ptr [EBP + -0xc]
00631653  SUB EAX,dword ptr [EBP + -0x30]
00631656  IMUL EDX,EAX
00631659  TEST EDX,EDX
0063165b  JLE 0x00631666
0063165d  MOV ECX,dword ptr [EBP + -0x38]
00631660  ADD ECX,0x1
00631663  MOV dword ptr [EBP + -0x38],ECX
00631666  MOV EDX,dword ptr [EBP + -0x40]
00631669  MOV dword ptr [EBP + -0x18],EDX
0063166c  MOV EAX,dword ptr [EBP + -0x3c]
0063166f  MOV dword ptr [EBP + -0x14],EAX
00631672  MOV ECX,dword ptr [EBP + -0x34]
00631675  MOV dword ptr [EBP + -0x40],ECX
00631678  MOV EDX,dword ptr [EBP + -0x30]
0063167b  MOV dword ptr [EBP + -0x3c],EDX
0063167e  MOV EAX,dword ptr [EBP + -0x10]
00631681  MOV dword ptr [EBP + -0x34],EAX
00631684  MOV ECX,dword ptr [EBP + -0xc]
00631687  MOV dword ptr [EBP + -0x30],ECX
0063168a  MOV EDX,dword ptr [EBP + -0x34]
0063168d  CMP EDX,dword ptr [EBP + -0x8]
00631690  JNZ 0x0063169c
00631692  MOV EAX,dword ptr [EBP + -0x30]
00631695  CMP EAX,dword ptr [EBP + -0x4]
00631698  JNZ 0x0063169c
0063169a  JMP 0x006316c1
0063169c  MOV ECX,dword ptr [EBP + -0x24]
0063169f  ADD ECX,0x1
006316a2  MOV dword ptr [EBP + -0x24],ECX
006316a5  MOV EAX,dword ptr [EBP + -0x24]
006316a8  CDQ
006316a9  IDIV dword ptr [EBP + 0x14]
006316ac  MOV EAX,dword ptr [EBP + 0x10]
006316af  MOV ECX,dword ptr [EAX + EDX*0x8]
006316b2  MOV EDX,dword ptr [EAX + EDX*0x8 + 0x4]
006316b6  MOV dword ptr [EBP + -0x10],ECX
006316b9  MOV dword ptr [EBP + -0xc],EDX
006316bc  JMP 0x0063151f
006316c1  MOV EAX,dword ptr [EBP + -0x38]
006316c4  AND EAX,0x1
006316c7  SETNZ CL
006316ca  MOVZX EAX,CL
006316cd  MOV ESP,EBP
006316cf  POP EBP
006316d0  RET
