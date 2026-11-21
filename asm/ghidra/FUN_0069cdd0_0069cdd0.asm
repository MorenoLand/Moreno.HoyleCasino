; FUN_0069cdd0  0069cdd0
0069cdd0  PUSH EBP
0069cdd1  MOV EBP,ESP
0069cdd3  AND ESP,0xfffffff8
0069cdd6  SUB ESP,0x14
0069cdd9  MOV EAX,dword ptr [EBP + 0x8]
0069cddc  PUSH EBX
0069cddd  PUSH ESI
0069cdde  PUSH EDI
0069cddf  MOV EDI,dword ptr [EBP + 0x10]
0069cde2  MOV EBX,dword ptr [EAX + 0x1c]
0069cde5  MOV dword ptr [ESP + 0x14],EBX
0069cde9  MOV ECX,dword ptr [EDI + 0x8]
0069cdec  CMP dword ptr [ECX + EBX*0x4],0x0
0069cdf0  JNZ 0x0069cf25
0069cdf6  MOV EDX,dword ptr [EAX + 0x40]
0069cdf9  MOV EAX,dword ptr [EDX + 0x4]
0069cdfc  MOV ECX,dword ptr [EAX + 0x1c]
0069cdff  MOV EAX,dword ptr [ECX + EBX*0x4]
0069ce02  CDQ
0069ce03  SUB EAX,EDX
0069ce05  MOV EDX,dword ptr [EBP + 0xc]
0069ce08  MOV ESI,EAX
0069ce0a  FILD dword ptr [EDX + 0x4]
0069ce0d  SAR ESI,0x1
0069ce0f  MOV dword ptr [ESP + 0x18],ESI
0069ce13  FMUL float ptr [0x006b3654]
0069ce19  LEA EAX,[ESI*0x4 + 0x4]
0069ce20  PUSH EAX
0069ce21  FLD ST0
0069ce23  FILD dword ptr [EDI]
0069ce25  FLD ST1
0069ce27  FMUL ST2
0069ce29  FMUL float ptr [0x006e5754]
0069ce2f  FLD1
0069ce31  FPATAN
0069ce33  FMUL double ptr [0x006e5738]
0069ce39  FLD ST3
0069ce3b  FMUL float ptr [0x006e5750]
0069ce41  FLD1
0069ce43  FPATAN
0069ce45  FMUL double ptr [0x006e5730]
0069ce4b  FADDP
0069ce4d  FXCH ST3
0069ce4f  FMUL float ptr [0x006e574c]
0069ce55  FADDP ST3,ST0
0069ce57  FXCH ST2
0069ce59  FDIVP ST2,ST0
0069ce5b  FXCH
0069ce5d  FSTP float ptr [ESP + 0x20]
0069ce61  FSTP ST0
0069ce63  CALL 0x006872fa
0069ce68  MOV ECX,dword ptr [EDI + 0x8]
0069ce6b  ADD ESP,0x4
0069ce6e  MOV dword ptr [ECX + EBX*0x4],EAX
0069ce71  XOR EBX,EBX
0069ce73  TEST ESI,ESI
0069ce75  MOV dword ptr [ESP + 0x10],EBX
0069ce79  JLE 0x0069cf10
0069ce7f  FILD dword ptr [ESP + 0x18]
0069ce83  FSTP float ptr [ESP + 0x18]
0069ce87  MOV EDX,dword ptr [EBP + 0xc]
0069ce8a  SUB ESP,0x8
0069ce8d  FILD dword ptr [EDX + 0x4]
0069ce90  FMUL float ptr [0x006b3654]
0069ce96  FDIV float ptr [ESP + 0x20]
0069ce9a  FIMUL dword ptr [ESP + 0x18]
0069ce9e  FLD ST0
0069cea0  FLD ST0
0069cea2  FMUL ST1
0069cea4  FMUL float ptr [0x006e5754]
0069ceaa  FLD1
0069ceac  FPATAN
0069ceae  FMUL double ptr [0x006e5738]
0069ceb4  FLD ST2
0069ceb6  FMUL float ptr [0x006e5750]
0069cebc  FLD1
0069cebe  FPATAN
0069cec0  FMUL double ptr [0x006e5730]
0069cec6  FADDP
0069cec8  FXCH ST2
0069ceca  FMUL float ptr [0x006e574c]
0069ced0  FADDP ST2,ST0
0069ced2  FLD float ptr [ESP + 0x24]
0069ced6  FMULP ST2
0069ced8  FXCH
0069ceda  FSTP double ptr [ESP]
0069cedd  FSTP ST0
0069cedf  CALL 0x00686fb4
0069cee4  ADD ESP,0x8
0069cee7  CALL 0x00687450
0069ceec  MOV ECX,dword ptr [EDI]
0069ceee  CMP EAX,ECX
0069cef0  JL 0x0069cef5
0069cef2  LEA EAX,[ECX + -0x1]
0069cef5  MOV ECX,dword ptr [EDI + 0x8]
0069cef8  MOV EDX,dword ptr [ESP + 0x14]
0069cefc  INC EBX
0069cefd  MOV ECX,dword ptr [ECX + EDX*0x4]
0069cf00  CMP EBX,ESI
0069cf02  MOV dword ptr [ESP + 0x10],EBX
0069cf06  MOV dword ptr [ECX + EBX*0x4 + -0x4],EAX
0069cf0a  JL 0x0069ce87
0069cf10  MOV EDX,dword ptr [EDI + 0x8]
0069cf13  MOV EAX,dword ptr [ESP + 0x14]
0069cf17  MOV ECX,dword ptr [EDX + EAX*0x4]
0069cf1a  MOV dword ptr [ECX + EBX*0x4],0xffffffff
0069cf21  MOV dword ptr [EDI + EAX*0x4 + 0xc],ESI
0069cf25  POP EDI
0069cf26  POP ESI
0069cf27  POP EBX
0069cf28  MOV ESP,EBP
0069cf2a  POP EBP
0069cf2b  RET
