; FUN_00622fd0  00622fd0
00622fd0  PUSH EBP
00622fd1  MOV EBP,ESP
00622fd3  SUB ESP,0x43c
00622fd9  MOV EAX,dword ptr [EBP + 0x1c]
00622fdc  MOV dword ptr [EBP + -0x24],EAX
00622fdf  MOV ECX,dword ptr [EBP + 0x8]
00622fe2  ADD ECX,0x1c
00622fe5  MOV dword ptr [EBP + -0x1c],ECX
00622fe8  MOV EDX,dword ptr [EBP + 0x8]
00622feb  ADD EDX,dword ptr [EBP + -0x1c]
00622fee  SAR EDX,0x1
00622ff0  MOV dword ptr [EBP + 0xfffffbc4],EDX
00622ff6  MOV EAX,dword ptr [EBP + 0xc]
00622ff9  ADD EAX,0x1c
00622ffc  MOV dword ptr [EBP + 0xfffffbcc],EAX
00623002  MOV ECX,dword ptr [EBP + 0xc]
00623005  ADD ECX,dword ptr [EBP + 0xfffffbcc]
0062300b  SAR ECX,0x1
0062300d  MOV dword ptr [EBP + -0x14],ECX
00623010  MOV EDX,dword ptr [EBP + 0x10]
00623013  ADD EDX,0x18
00623016  MOV dword ptr [EBP + -0x18],EDX
00623019  MOV EAX,dword ptr [EBP + 0x10]
0062301c  ADD EAX,dword ptr [EBP + -0x18]
0062301f  SAR EAX,0x1
00623021  MOV dword ptr [EBP + 0xfffffbd0],EAX
00623027  MOV dword ptr [EBP + -0x4],0x7fffffff
0062302e  MOV dword ptr [EBP + -0x20],0x0
00623035  JMP 0x00623040
00623037  MOV ECX,dword ptr [EBP + -0x20]
0062303a  ADD ECX,0x1
0062303d  MOV dword ptr [EBP + -0x20],ECX
00623040  MOV EDX,dword ptr [EBP + -0x20]
00623043  CMP EDX,dword ptr [EBP + -0x24]
00623046  JGE 0x006233ae
0062304c  MOV EAX,dword ptr [EBP + -0x20]
0062304f  IMUL EAX,EAX,0x3
00623052  MOV ECX,dword ptr [EBP + 0x18]
00623055  MOVZX EDX,byte ptr [ECX + EAX*0x1]
00623059  MOV dword ptr [EBP + -0x10],EDX
0062305c  MOV EAX,dword ptr [EBP + -0x10]
0062305f  CMP EAX,dword ptr [EBP + 0x8]
00623062  JGE 0x006230aa
00623064  MOV ECX,dword ptr [EBP + -0x10]
00623067  SUB ECX,dword ptr [EBP + 0x8]
0062306a  IMUL ECX,ECX,0x1e
0062306d  MOV dword ptr [EBP + 0xfffffbc8],ECX
00623073  MOV EDX,dword ptr [EBP + 0xfffffbc8]
00623079  IMUL EDX,dword ptr [EBP + 0xfffffbc8]
00623080  MOV dword ptr [EBP + -0x8],EDX
00623083  MOV EAX,dword ptr [EBP + -0x10]
00623086  SUB EAX,dword ptr [EBP + -0x1c]
00623089  IMUL EAX,EAX,0x1e
0062308c  MOV dword ptr [EBP + 0xfffffbc8],EAX
00623092  MOV ECX,dword ptr [EBP + 0xfffffbc8]
00623098  IMUL ECX,dword ptr [EBP + 0xfffffbc8]
0062309f  MOV dword ptr [EBP + 0xfffffbd4],ECX
006230a5  JMP 0x0062314d
006230aa  MOV EDX,dword ptr [EBP + -0x10]
006230ad  CMP EDX,dword ptr [EBP + -0x1c]
006230b0  JLE 0x006230f5
006230b2  MOV EAX,dword ptr [EBP + -0x10]
006230b5  SUB EAX,dword ptr [EBP + -0x1c]
006230b8  IMUL EAX,EAX,0x1e
006230bb  MOV dword ptr [EBP + 0xfffffbc8],EAX
006230c1  MOV ECX,dword ptr [EBP + 0xfffffbc8]
006230c7  IMUL ECX,dword ptr [EBP + 0xfffffbc8]
006230ce  MOV dword ptr [EBP + -0x8],ECX
006230d1  MOV EDX,dword ptr [EBP + -0x10]
006230d4  SUB EDX,dword ptr [EBP + 0x8]
006230d7  IMUL EDX,EDX,0x1e
006230da  MOV dword ptr [EBP + 0xfffffbc8],EDX
006230e0  MOV EAX,dword ptr [EBP + 0xfffffbc8]
006230e6  IMUL EAX,dword ptr [EBP + 0xfffffbc8]
006230ed  MOV dword ptr [EBP + 0xfffffbd4],EAX
006230f3  JMP 0x0062314d
006230f5  MOV dword ptr [EBP + -0x8],0x0
006230fc  MOV ECX,dword ptr [EBP + -0x10]
006230ff  CMP ECX,dword ptr [EBP + 0xfffffbc4]
00623105  JG 0x0062312b
00623107  MOV EDX,dword ptr [EBP + -0x10]
0062310a  SUB EDX,dword ptr [EBP + -0x1c]
0062310d  IMUL EDX,EDX,0x1e
00623110  MOV dword ptr [EBP + 0xfffffbc8],EDX
00623116  MOV EAX,dword ptr [EBP + 0xfffffbc8]
0062311c  IMUL EAX,dword ptr [EBP + 0xfffffbc8]
00623123  MOV dword ptr [EBP + 0xfffffbd4],EAX
00623129  JMP 0x0062314d
0062312b  MOV ECX,dword ptr [EBP + -0x10]
0062312e  SUB ECX,dword ptr [EBP + 0x8]
00623131  IMUL ECX,ECX,0x1e
00623134  MOV dword ptr [EBP + 0xfffffbc8],ECX
0062313a  MOV EDX,dword ptr [EBP + 0xfffffbc8]
00623140  IMUL EDX,dword ptr [EBP + 0xfffffbc8]
00623147  MOV dword ptr [EBP + 0xfffffbd4],EDX
0062314d  MOV EAX,dword ptr [EBP + -0x20]
00623150  IMUL EAX,EAX,0x3
00623153  MOV ECX,dword ptr [EBP + 0x18]
00623156  MOVZX EDX,byte ptr [ECX + EAX*0x1 + 0x1]
0062315b  MOV dword ptr [EBP + -0x10],EDX
0062315e  MOV EAX,dword ptr [EBP + -0x10]
00623161  CMP EAX,dword ptr [EBP + 0xc]
00623164  JGE 0x006231b8
00623166  MOV ECX,dword ptr [EBP + -0x10]
00623169  SUB ECX,dword ptr [EBP + 0xc]
0062316c  IMUL ECX,ECX,0x3b
0062316f  MOV dword ptr [EBP + 0xfffffbc8],ECX
00623175  MOV EDX,dword ptr [EBP + 0xfffffbc8]
0062317b  IMUL EDX,dword ptr [EBP + 0xfffffbc8]
00623182  ADD EDX,dword ptr [EBP + -0x8]
00623185  MOV dword ptr [EBP + -0x8],EDX
00623188  MOV EAX,dword ptr [EBP + -0x10]
0062318b  SUB EAX,dword ptr [EBP + 0xfffffbcc]
00623191  IMUL EAX,EAX,0x3b
00623194  MOV dword ptr [EBP + 0xfffffbc8],EAX
0062319a  MOV ECX,dword ptr [EBP + 0xfffffbc8]
006231a0  IMUL ECX,dword ptr [EBP + 0xfffffbc8]
006231a7  ADD ECX,dword ptr [EBP + 0xfffffbd4]
006231ad  MOV dword ptr [EBP + 0xfffffbd4],ECX
006231b3  JMP 0x0062326f
006231b8  MOV EDX,dword ptr [EBP + -0x10]
006231bb  CMP EDX,dword ptr [EBP + 0xfffffbcc]
006231c1  JLE 0x00623212
006231c3  MOV EAX,dword ptr [EBP + -0x10]
006231c6  SUB EAX,dword ptr [EBP + 0xfffffbcc]
006231cc  IMUL EAX,EAX,0x3b
006231cf  MOV dword ptr [EBP + 0xfffffbc8],EAX
006231d5  MOV ECX,dword ptr [EBP + 0xfffffbc8]
006231db  IMUL ECX,dword ptr [EBP + 0xfffffbc8]
006231e2  ADD ECX,dword ptr [EBP + -0x8]
006231e5  MOV dword ptr [EBP + -0x8],ECX
006231e8  MOV EDX,dword ptr [EBP + -0x10]
006231eb  SUB EDX,dword ptr [EBP + 0xc]
006231ee  IMUL EDX,EDX,0x3b
006231f1  MOV dword ptr [EBP + 0xfffffbc8],EDX
006231f7  MOV EAX,dword ptr [EBP + 0xfffffbc8]
006231fd  IMUL EAX,dword ptr [EBP + 0xfffffbc8]
00623204  ADD EAX,dword ptr [EBP + 0xfffffbd4]
0062320a  MOV dword ptr [EBP + 0xfffffbd4],EAX
00623210  JMP 0x0062326f
00623212  MOV ECX,dword ptr [EBP + -0x10]
00623215  CMP ECX,dword ptr [EBP + -0x14]
00623218  JG 0x00623247
0062321a  MOV EDX,dword ptr [EBP + -0x10]
0062321d  SUB EDX,dword ptr [EBP + 0xfffffbcc]
00623223  IMUL EDX,EDX,0x3b
00623226  MOV dword ptr [EBP + 0xfffffbc8],EDX
0062322c  MOV EAX,dword ptr [EBP + 0xfffffbc8]
00623232  IMUL EAX,dword ptr [EBP + 0xfffffbc8]
00623239  ADD EAX,dword ptr [EBP + 0xfffffbd4]
0062323f  MOV dword ptr [EBP + 0xfffffbd4],EAX
00623245  JMP 0x0062326f
00623247  MOV ECX,dword ptr [EBP + -0x10]
0062324a  SUB ECX,dword ptr [EBP + 0xc]
0062324d  IMUL ECX,ECX,0x3b
00623250  MOV dword ptr [EBP + 0xfffffbc8],ECX
00623256  MOV EDX,dword ptr [EBP + 0xfffffbc8]
0062325c  IMUL EDX,dword ptr [EBP + 0xfffffbc8]
00623263  ADD EDX,dword ptr [EBP + 0xfffffbd4]
00623269  MOV dword ptr [EBP + 0xfffffbd4],EDX
0062326f  MOV EAX,dword ptr [EBP + -0x20]
00623272  IMUL EAX,EAX,0x3
00623275  MOV ECX,dword ptr [EBP + 0x18]
00623278  MOVZX EDX,byte ptr [ECX + EAX*0x1 + 0x2]
0062327d  MOV dword ptr [EBP + -0x10],EDX
00623280  MOV EAX,dword ptr [EBP + -0x10]
00623283  CMP EAX,dword ptr [EBP + 0x10]
00623286  JGE 0x006232d7
00623288  MOV ECX,dword ptr [EBP + -0x10]
0062328b  SUB ECX,dword ptr [EBP + 0x10]
0062328e  IMUL ECX,ECX,0xb
00623291  MOV dword ptr [EBP + 0xfffffbc8],ECX
00623297  MOV EDX,dword ptr [EBP + 0xfffffbc8]
0062329d  IMUL EDX,dword ptr [EBP + 0xfffffbc8]
006232a4  ADD EDX,dword ptr [EBP + -0x8]
006232a7  MOV dword ptr [EBP + -0x8],EDX
006232aa  MOV EAX,dword ptr [EBP + -0x10]
006232ad  SUB EAX,dword ptr [EBP + -0x18]
006232b0  IMUL EAX,EAX,0xb
006232b3  MOV dword ptr [EBP + 0xfffffbc8],EAX
006232b9  MOV ECX,dword ptr [EBP + 0xfffffbc8]
006232bf  IMUL ECX,dword ptr [EBP + 0xfffffbc8]
006232c6  ADD ECX,dword ptr [EBP + 0xfffffbd4]
006232cc  MOV dword ptr [EBP + 0xfffffbd4],ECX
006232d2  JMP 0x00623388
006232d7  MOV EDX,dword ptr [EBP + -0x10]
006232da  CMP EDX,dword ptr [EBP + -0x18]
006232dd  JLE 0x0062332b
006232df  MOV EAX,dword ptr [EBP + -0x10]
006232e2  SUB EAX,dword ptr [EBP + -0x18]
006232e5  IMUL EAX,EAX,0xb
006232e8  MOV dword ptr [EBP + 0xfffffbc8],EAX
006232ee  MOV ECX,dword ptr [EBP + 0xfffffbc8]
006232f4  IMUL ECX,dword ptr [EBP + 0xfffffbc8]
006232fb  ADD ECX,dword ptr [EBP + -0x8]
006232fe  MOV dword ptr [EBP + -0x8],ECX
00623301  MOV EDX,dword ptr [EBP + -0x10]
00623304  SUB EDX,dword ptr [EBP + 0x10]
00623307  IMUL EDX,EDX,0xb
0062330a  MOV dword ptr [EBP + 0xfffffbc8],EDX
00623310  MOV EAX,dword ptr [EBP + 0xfffffbc8]
00623316  IMUL EAX,dword ptr [EBP + 0xfffffbc8]
0062331d  ADD EAX,dword ptr [EBP + 0xfffffbd4]
00623323  MOV dword ptr [EBP + 0xfffffbd4],EAX
00623329  JMP 0x00623388
0062332b  MOV ECX,dword ptr [EBP + -0x10]
0062332e  CMP ECX,dword ptr [EBP + 0xfffffbd0]
00623334  JG 0x00623360
00623336  MOV EDX,dword ptr [EBP + -0x10]
00623339  SUB EDX,dword ptr [EBP + -0x18]
0062333c  IMUL EDX,EDX,0xb
0062333f  MOV dword ptr [EBP + 0xfffffbc8],EDX
00623345  MOV EAX,dword ptr [EBP + 0xfffffbc8]
0062334b  IMUL EAX,dword ptr [EBP + 0xfffffbc8]
00623352  ADD EAX,dword ptr [EBP + 0xfffffbd4]
00623358  MOV dword ptr [EBP + 0xfffffbd4],EAX
0062335e  JMP 0x00623388
00623360  MOV ECX,dword ptr [EBP + -0x10]
00623363  SUB ECX,dword ptr [EBP + 0x10]
00623366  IMUL ECX,ECX,0xb
00623369  MOV dword ptr [EBP + 0xfffffbc8],ECX
0062336f  MOV EDX,dword ptr [EBP + 0xfffffbc8]
00623375  IMUL EDX,dword ptr [EBP + 0xfffffbc8]
0062337c  ADD EDX,dword ptr [EBP + 0xfffffbd4]
00623382  MOV dword ptr [EBP + 0xfffffbd4],EDX
00623388  MOV EAX,dword ptr [EBP + -0x20]
0062338b  MOV ECX,dword ptr [EBP + -0x8]
0062338e  MOV dword ptr [EBP + EAX*0x4 + 0xfffffbd8],ECX
00623395  MOV EDX,dword ptr [EBP + 0xfffffbd4]
0062339b  CMP EDX,dword ptr [EBP + -0x4]
0062339e  JGE 0x006233a9
006233a0  MOV EAX,dword ptr [EBP + 0xfffffbd4]
006233a6  MOV dword ptr [EBP + -0x4],EAX
006233a9  JMP 0x00623037
006233ae  MOV dword ptr [EBP + -0xc],0x0
006233b5  MOV dword ptr [EBP + -0x20],0x0
006233bc  JMP 0x006233c7
006233be  MOV ECX,dword ptr [EBP + -0x20]
006233c1  ADD ECX,0x1
006233c4  MOV dword ptr [EBP + -0x20],ECX
006233c7  MOV EDX,dword ptr [EBP + -0x20]
006233ca  CMP EDX,dword ptr [EBP + -0x24]
006233cd  JGE 0x006233f5
006233cf  MOV EAX,dword ptr [EBP + -0x20]
006233d2  MOV ECX,dword ptr [EBP + EAX*0x4 + 0xfffffbd8]
006233d9  CMP ECX,dword ptr [EBP + -0x4]
006233dc  JG 0x006233f3
006233de  MOV EDX,dword ptr [EBP + -0xc]
006233e1  MOV EAX,dword ptr [EBP + 0x14]
006233e4  MOV ECX,dword ptr [EBP + -0x20]
006233e7  MOV dword ptr [EAX + EDX*0x4],ECX
006233ea  MOV EDX,dword ptr [EBP + -0xc]
006233ed  ADD EDX,0x1
006233f0  MOV dword ptr [EBP + -0xc],EDX
006233f3  JMP 0x006233be
006233f5  MOV EAX,dword ptr [EBP + -0xc]
006233f8  MOV ESP,EBP
006233fa  POP EBP
006233fb  RET
