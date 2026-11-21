; FUN_00623400  00623400
00623400  PUSH EBP
00623401  MOV EBP,ESP
00623403  SUB ESP,0x444
00623409  LEA EAX,[EBP + 0xfffffbf0]
0062340f  MOV dword ptr [EBP + 0xfffffbbc],EAX
00623415  MOV dword ptr [EBP + -0xc],0xff
0062341c  JMP 0x00623427
0062341e  MOV ECX,dword ptr [EBP + -0xc]
00623421  SUB ECX,0x1
00623424  MOV dword ptr [EBP + -0xc],ECX
00623427  CMP dword ptr [EBP + -0xc],0x0
0062342b  JL 0x0062344a
0062342d  MOV EDX,dword ptr [EBP + 0xfffffbbc]
00623433  MOV dword ptr [EDX],0x7fffffff
00623439  MOV EAX,dword ptr [EBP + 0xfffffbbc]
0062343f  ADD EAX,0x4
00623442  MOV dword ptr [EBP + 0xfffffbbc],EAX
00623448  JMP 0x0062341e
0062344a  MOV dword ptr [EBP + -0xc],0x0
00623451  JMP 0x0062345c
00623453  MOV ECX,dword ptr [EBP + -0xc]
00623456  ADD ECX,0x1
00623459  MOV dword ptr [EBP + -0xc],ECX
0062345c  MOV EDX,dword ptr [EBP + -0xc]
0062345f  CMP EDX,dword ptr [EBP + 0x18]
00623462  JGE 0x006236c3
00623468  MOV EAX,dword ptr [EBP + -0xc]
0062346b  MOV ECX,dword ptr [EBP + 0x1c]
0062346e  MOV EDX,dword ptr [ECX + EAX*0x4]
00623471  MOV dword ptr [EBP + 0xfffffbd0],EDX
00623477  MOV EAX,dword ptr [EBP + 0xfffffbd0]
0062347d  IMUL EAX,EAX,0x3
00623480  MOV ECX,dword ptr [EBP + 0x14]
00623483  MOVZX EDX,byte ptr [ECX + EAX*0x1]
00623487  MOV EAX,dword ptr [EBP + 0x8]
0062348a  SUB EAX,EDX
0062348c  IMUL EAX,EAX,0x1e
0062348f  MOV dword ptr [EBP + -0x8],EAX
00623492  MOV ECX,dword ptr [EBP + -0x8]
00623495  IMUL ECX,dword ptr [EBP + -0x8]
00623499  MOV dword ptr [EBP + -0x4],ECX
0062349c  MOV EDX,dword ptr [EBP + 0xfffffbd0]
006234a2  IMUL EDX,EDX,0x3
006234a5  MOV EAX,dword ptr [EBP + 0x14]
006234a8  MOVZX ECX,byte ptr [EAX + EDX*0x1 + 0x1]
006234ad  MOV EDX,dword ptr [EBP + 0xc]
006234b0  SUB EDX,ECX
006234b2  IMUL EDX,EDX,0x3b
006234b5  MOV dword ptr [EBP + 0xfffffbe4],EDX
006234bb  MOV EAX,dword ptr [EBP + 0xfffffbe4]
006234c1  IMUL EAX,dword ptr [EBP + 0xfffffbe4]
006234c8  ADD EAX,dword ptr [EBP + -0x4]
006234cb  MOV dword ptr [EBP + -0x4],EAX
006234ce  MOV ECX,dword ptr [EBP + 0xfffffbd0]
006234d4  IMUL ECX,ECX,0x3
006234d7  MOV EDX,dword ptr [EBP + 0x14]
006234da  MOVZX EAX,byte ptr [EDX + ECX*0x1 + 0x2]
006234df  MOV ECX,dword ptr [EBP + 0x10]
006234e2  SUB ECX,EAX
006234e4  IMUL ECX,ECX,0xb
006234e7  MOV dword ptr [EBP + 0xfffffbc0],ECX
006234ed  MOV EDX,dword ptr [EBP + 0xfffffbc0]
006234f3  IMUL EDX,dword ptr [EBP + 0xfffffbc0]
006234fa  ADD EDX,dword ptr [EBP + -0x4]
006234fd  MOV dword ptr [EBP + -0x4],EDX
00623500  MOV EAX,dword ptr [EBP + -0x8]
00623503  IMUL EAX,EAX,0xf0
00623509  ADD EAX,0x3840
0062350e  MOV dword ptr [EBP + -0x8],EAX
00623511  MOV ECX,dword ptr [EBP + 0xfffffbe4]
00623517  IMUL ECX,ECX,0x1d8
0062351d  ADD ECX,0xd990
00623523  MOV dword ptr [EBP + 0xfffffbe4],ECX
00623529  MOV EDX,dword ptr [EBP + 0xfffffbc0]
0062352f  IMUL EDX,EDX,0xb0
00623535  ADD EDX,0x1e40
0062353b  MOV dword ptr [EBP + 0xfffffbc0],EDX
00623541  LEA EAX,[EBP + 0xfffffbf0]
00623547  MOV dword ptr [EBP + 0xfffffbbc],EAX
0062354d  MOV ECX,dword ptr [EBP + 0x20]
00623550  MOV dword ptr [EBP + 0xfffffbe0],ECX
00623556  MOV EDX,dword ptr [EBP + -0x8]
00623559  MOV dword ptr [EBP + 0xfffffbd4],EDX
0062355f  MOV dword ptr [EBP + 0xfffffbd8],0x7
00623569  JMP 0x0062357a
0062356b  MOV EAX,dword ptr [EBP + 0xfffffbd8]
00623571  SUB EAX,0x1
00623574  MOV dword ptr [EBP + 0xfffffbd8],EAX
0062357a  CMP dword ptr [EBP + 0xfffffbd8],0x0
00623581  JL 0x006236be
00623587  MOV ECX,dword ptr [EBP + -0x4]
0062358a  MOV dword ptr [EBP + 0xfffffbc8],ECX
00623590  MOV EDX,dword ptr [EBP + 0xfffffbe4]
00623596  MOV dword ptr [EBP + 0xfffffbec],EDX
0062359c  MOV dword ptr [EBP + 0xfffffbcc],0x7
006235a6  JMP 0x006235b7
006235a8  MOV EAX,dword ptr [EBP + 0xfffffbcc]
006235ae  SUB EAX,0x1
006235b1  MOV dword ptr [EBP + 0xfffffbcc],EAX
006235b7  CMP dword ptr [EBP + 0xfffffbcc],0x0
006235be  JL 0x0062369b
006235c4  MOV ECX,dword ptr [EBP + 0xfffffbc8]
006235ca  MOV dword ptr [EBP + 0xfffffbe8],ECX
006235d0  MOV EDX,dword ptr [EBP + 0xfffffbc0]
006235d6  MOV dword ptr [EBP + 0xfffffbc4],EDX
006235dc  MOV dword ptr [EBP + 0xfffffbdc],0x3
006235e6  JMP 0x006235f7
006235e8  MOV EAX,dword ptr [EBP + 0xfffffbdc]
006235ee  SUB EAX,0x1
006235f1  MOV dword ptr [EBP + 0xfffffbdc],EAX
006235f7  CMP dword ptr [EBP + 0xfffffbdc],0x0
006235fe  JL 0x00623673
00623600  MOV ECX,dword ptr [EBP + 0xfffffbbc]
00623606  MOV EDX,dword ptr [EBP + 0xfffffbe8]
0062360c  CMP EDX,dword ptr [ECX]
0062360e  JGE 0x0062362c
00623610  MOV EAX,dword ptr [EBP + 0xfffffbbc]
00623616  MOV ECX,dword ptr [EBP + 0xfffffbe8]
0062361c  MOV dword ptr [EAX],ECX
0062361e  MOV EDX,dword ptr [EBP + 0xfffffbe0]
00623624  MOV EAX,dword ptr [EBP + 0xfffffbd0]
0062362a  MOV dword ptr [EDX],EAX
0062362c  MOV ECX,dword ptr [EBP + 0xfffffbe8]
00623632  ADD ECX,dword ptr [EBP + 0xfffffbc4]
00623638  MOV dword ptr [EBP + 0xfffffbe8],ECX
0062363e  MOV EDX,dword ptr [EBP + 0xfffffbc4]
00623644  ADD EDX,0x3c80
0062364a  MOV dword ptr [EBP + 0xfffffbc4],EDX
00623650  MOV EAX,dword ptr [EBP + 0xfffffbbc]
00623656  ADD EAX,0x4
00623659  MOV dword ptr [EBP + 0xfffffbbc],EAX
0062365f  MOV ECX,dword ptr [EBP + 0xfffffbe0]
00623665  ADD ECX,0x4
00623668  MOV dword ptr [EBP + 0xfffffbe0],ECX
0062366e  JMP 0x006235e8
00623673  MOV EDX,dword ptr [EBP + 0xfffffbc8]
00623679  ADD EDX,dword ptr [EBP + 0xfffffbec]
0062367f  MOV dword ptr [EBP + 0xfffffbc8],EDX
00623685  MOV EAX,dword ptr [EBP + 0xfffffbec]
0062368b  ADD EAX,0x1b320
00623690  MOV dword ptr [EBP + 0xfffffbec],EAX
00623696  JMP 0x006235a8
0062369b  MOV ECX,dword ptr [EBP + -0x4]
0062369e  ADD ECX,dword ptr [EBP + 0xfffffbd4]
006236a4  MOV dword ptr [EBP + -0x4],ECX
006236a7  MOV EDX,dword ptr [EBP + 0xfffffbd4]
006236ad  ADD EDX,0x7080
006236b3  MOV dword ptr [EBP + 0xfffffbd4],EDX
006236b9  JMP 0x0062356b
006236be  JMP 0x00623453
006236c3  MOV ESP,EBP
006236c5  POP EBP
006236c6  RET
