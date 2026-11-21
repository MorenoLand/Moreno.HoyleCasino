; FUN_00621f90  00621f90
00621f90  PUSH EBP
00621f91  MOV EBP,ESP
00621f93  SUB ESP,0x3c
00621f96  MOV dword ptr [EBP + -0x1c],0x0
00621f9d  MOV dword ptr [EBP + -0x14],0x0
00621fa4  MOV dword ptr [EBP + -0x20],0x0
00621fab  MOV dword ptr [EBP + -0x8],0x0
00621fb2  MOV EAX,dword ptr [EBP + 0x10]
00621fb5  MOV ECX,dword ptr [EAX]
00621fb7  MOV dword ptr [EBP + -0x24],ECX
00621fba  MOV EDX,dword ptr [EBP + 0x10]
00621fbd  MOV EAX,dword ptr [EDX + 0x4]
00621fc0  MOV dword ptr [EBP + -0x4],EAX
00621fc3  MOV ECX,dword ptr [EBP + 0x10]
00621fc6  MOV EDX,dword ptr [ECX + 0x8]
00621fc9  MOV dword ptr [EBP + -0x10],EDX
00621fcc  MOV EAX,dword ptr [EBP + 0x10]
00621fcf  MOV ECX,dword ptr [EAX + 0xc]
00621fd2  MOV dword ptr [EBP + -0x38],ECX
00621fd5  MOV EDX,dword ptr [EBP + 0x10]
00621fd8  MOV EAX,dword ptr [EDX + 0x10]
00621fdb  MOV dword ptr [EBP + -0x34],EAX
00621fde  MOV ECX,dword ptr [EBP + 0x10]
00621fe1  MOV EDX,dword ptr [ECX + 0x14]
00621fe4  MOV dword ptr [EBP + -0x2c],EDX
00621fe7  MOV EAX,dword ptr [EBP + -0x24]
00621fea  MOV dword ptr [EBP + -0x28],EAX
00621fed  JMP 0x00621ff8
00621fef  MOV ECX,dword ptr [EBP + -0x28]
00621ff2  ADD ECX,0x1
00621ff5  MOV dword ptr [EBP + -0x28],ECX
00621ff8  MOV EDX,dword ptr [EBP + -0x28]
00621ffb  CMP EDX,dword ptr [EBP + -0x4]
00621ffe  JG 0x006220c4
00622004  MOV EAX,dword ptr [EBP + -0x10]
00622007  MOV dword ptr [EBP + -0x3c],EAX
0062200a  JMP 0x00622015
0062200c  MOV ECX,dword ptr [EBP + -0x3c]
0062200f  ADD ECX,0x1
00622012  MOV dword ptr [EBP + -0x3c],ECX
00622015  MOV EDX,dword ptr [EBP + -0x3c]
00622018  CMP EDX,dword ptr [EBP + -0x38]
0062201b  JG 0x006220bf
00622021  MOV EAX,dword ptr [EBP + -0x28]
00622024  SHL EAX,0x6
00622027  SHL EAX,0x5
0062202a  MOV ECX,dword ptr [EBP + 0xc]
0062202d  LEA EDX,[ECX + EAX*0x4]
00622030  MOV EAX,dword ptr [EBP + -0x3c]
00622033  SHL EAX,0x5
00622036  LEA ECX,[EDX + EAX*0x4]
00622039  MOV EDX,dword ptr [EBP + -0x34]
0062203c  LEA EAX,[ECX + EDX*0x4]
0062203f  MOV dword ptr [EBP + -0x30],EAX
00622042  MOV ECX,dword ptr [EBP + -0x34]
00622045  MOV dword ptr [EBP + -0x18],ECX
00622048  JMP 0x00622053
0062204a  MOV EDX,dword ptr [EBP + -0x18]
0062204d  ADD EDX,0x1
00622050  MOV dword ptr [EBP + -0x18],EDX
00622053  MOV EAX,dword ptr [EBP + -0x18]
00622056  CMP EAX,dword ptr [EBP + -0x2c]
00622059  JG 0x006220ba
0062205b  MOV ECX,dword ptr [EBP + -0x30]
0062205e  MOV EDX,dword ptr [ECX]
00622060  MOV dword ptr [EBP + -0xc],EDX
00622063  MOV EAX,dword ptr [EBP + -0xc]
00622066  MOV ECX,dword ptr [EBP + -0x30]
00622069  ADD ECX,0x4
0062206c  MOV dword ptr [EBP + -0x30],ECX
0062206f  TEST EAX,EAX
00622071  JZ 0x006220b8
00622073  MOV EDX,dword ptr [EBP + -0x1c]
00622076  ADD EDX,dword ptr [EBP + -0xc]
00622079  MOV dword ptr [EBP + -0x1c],EDX
0062207c  MOV EAX,dword ptr [EBP + -0x28]
0062207f  LEA ECX,[EAX*0x4 + 0x2]
00622086  IMUL ECX,dword ptr [EBP + -0xc]
0062208a  ADD ECX,dword ptr [EBP + -0x14]
0062208d  MOV dword ptr [EBP + -0x14],ECX
00622090  MOV EDX,dword ptr [EBP + -0x3c]
00622093  LEA EAX,[EDX*0x4 + 0x2]
0062209a  IMUL EAX,dword ptr [EBP + -0xc]
0062209e  ADD EAX,dword ptr [EBP + -0x20]
006220a1  MOV dword ptr [EBP + -0x20],EAX
006220a4  MOV ECX,dword ptr [EBP + -0x18]
006220a7  LEA EDX,[ECX*0x8 + 0x4]
006220ae  IMUL EDX,dword ptr [EBP + -0xc]
006220b2  ADD EDX,dword ptr [EBP + -0x8]
006220b5  MOV dword ptr [EBP + -0x8],EDX
006220b8  JMP 0x0062204a
006220ba  JMP 0x0062200c
006220bf  JMP 0x00621fef
006220c4  CMP dword ptr [EBP + -0x1c],0x0
006220c8  JZ 0x00622116
006220ca  MOV EAX,dword ptr [EBP + -0x1c]
006220cd  SAR EAX,0x1
006220cf  ADD EAX,dword ptr [EBP + -0x14]
006220d2  CDQ
006220d3  IDIV dword ptr [EBP + -0x1c]
006220d6  MOV ECX,dword ptr [EBP + 0x14]
006220d9  IMUL ECX,ECX,0x3
006220dc  MOV EDX,dword ptr [EBP + 0x8]
006220df  MOV byte ptr [EDX + ECX*0x1],AL
006220e2  MOV EAX,dword ptr [EBP + -0x1c]
006220e5  SAR EAX,0x1
006220e7  ADD EAX,dword ptr [EBP + -0x20]
006220ea  CDQ
006220eb  IDIV dword ptr [EBP + -0x1c]
006220ee  MOV ECX,dword ptr [EBP + 0x14]
006220f1  IMUL ECX,ECX,0x3
006220f4  MOV EDX,dword ptr [EBP + 0x8]
006220f7  MOV byte ptr [EDX + ECX*0x1 + 0x1],AL
006220fb  MOV EAX,dword ptr [EBP + -0x1c]
006220fe  SAR EAX,0x1
00622100  ADD EAX,dword ptr [EBP + -0x8]
00622103  CDQ
00622104  IDIV dword ptr [EBP + -0x1c]
00622107  MOV ECX,dword ptr [EBP + 0x14]
0062210a  IMUL ECX,ECX,0x3
0062210d  MOV EDX,dword ptr [EBP + 0x8]
00622110  MOV byte ptr [EDX + ECX*0x1 + 0x2],AL
00622114  JMP 0x0062213f
00622116  MOV EAX,dword ptr [EBP + 0x14]
00622119  IMUL EAX,EAX,0x3
0062211c  MOV ECX,dword ptr [EBP + 0x8]
0062211f  MOV byte ptr [ECX + EAX*0x1 + 0x2],0x0
00622124  MOV EDX,dword ptr [EBP + 0x14]
00622127  IMUL EDX,EDX,0x3
0062212a  MOV EAX,dword ptr [EBP + 0x8]
0062212d  MOV byte ptr [EAX + EDX*0x1 + 0x1],0x0
00622132  MOV ECX,dword ptr [EBP + 0x14]
00622135  IMUL ECX,ECX,0x3
00622138  MOV EDX,dword ptr [EBP + 0x8]
0062213b  MOV byte ptr [EDX + ECX*0x1],0x0
0062213f  MOV ESP,EBP
00622141  POP EBP
00622142  RET
