; FUN_005bafc0  005bafc0
005bafc0  PUSH EBP
005bafc1  MOV EBP,ESP
005bafc3  PUSH -0x1
005bafc5  PUSH 0x6a7fa0
005bafca  MOV EAX,FS:[0x0]
005bafd0  PUSH EAX
005bafd1  PUSH ECX
005bafd2  SUB ESP,0x220
005bafd8  PUSH EBX
005bafd9  PUSH ESI
005bafda  PUSH EDI
005bafdb  MOV EAX,[0x00781870]
005bafe0  XOR EAX,EBP
005bafe2  PUSH EAX
005bafe3  LEA EAX,[EBP + -0xc]
005bafe6  MOV FS:[0x0],EAX
005bafec  MOV dword ptr [EBP + -0x10],ESP
005bafef  MOV dword ptr [EBP + 0xfffffdf8],ECX
005baff5  MOV EAX,dword ptr [EBP + 0x14]
005baff8  MOV ECX,dword ptr [EAX]
005baffa  MOV dword ptr [EBP + -0x14],ECX
005baffd  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005bb003  CMP dword ptr [EDX + 0x4],0x0
005bb007  JNZ 0x005bb015
005bb009  MOV dword ptr [EBP + 0xfffffdf4],0x0
005bb013  JMP 0x005bb030
005bb015  MOV EAX,dword ptr [EBP + 0xfffffdf8]
005bb01b  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005bb021  MOV EDX,dword ptr [EAX + 0xc]
005bb024  SUB EDX,dword ptr [ECX + 0x4]
005bb027  SAR EDX,0x2
005bb02a  MOV dword ptr [EBP + 0xfffffdf4],EDX
005bb030  MOV EAX,dword ptr [EBP + 0xfffffdf4]
005bb036  MOV dword ptr [EBP + -0x18],EAX
005bb039  CMP dword ptr [EBP + 0x10],0x0
005bb03d  JNZ 0x005bb044
005bb03f  JMP 0x005bb731
005bb044  MOV dword ptr [EBP + -0x28],0x3fffffff
005bb04b  CMP dword ptr [EBP + -0x28],0x0
005bb04f  JBE 0x005bb05c
005bb051  MOV ECX,dword ptr [EBP + -0x28]
005bb054  MOV dword ptr [EBP + 0xfffffdf0],ECX
005bb05a  JMP 0x005bb066
005bb05c  MOV dword ptr [EBP + 0xfffffdf0],0x1
005bb066  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005bb06c  CMP dword ptr [EDX + 0x4],0x0
005bb070  JNZ 0x005bb07e
005bb072  MOV dword ptr [EBP + 0xfffffdec],0x0
005bb07c  JMP 0x005bb099
005bb07e  MOV EAX,dword ptr [EBP + 0xfffffdf8]
005bb084  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005bb08a  MOV EDX,dword ptr [EAX + 0x8]
005bb08d  SUB EDX,dword ptr [ECX + 0x4]
005bb090  SAR EDX,0x2
005bb093  MOV dword ptr [EBP + 0xfffffdec],EDX
005bb099  MOV EAX,dword ptr [EBP + 0xfffffdf0]
005bb09f  SUB EAX,dword ptr [EBP + 0xfffffdec]
005bb0a5  CMP EAX,dword ptr [EBP + 0x10]
005bb0a8  JNC 0x005bb0b4
005bb0aa  CALL 0x005bb8f0
005bb0af  JMP 0x005bb731
005bb0b4  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005bb0ba  CMP dword ptr [ECX + 0x4],0x0
005bb0be  JNZ 0x005bb0cc
005bb0c0  MOV dword ptr [EBP + 0xfffffde8],0x0
005bb0ca  JMP 0x005bb0e7
005bb0cc  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005bb0d2  MOV EAX,dword ptr [EBP + 0xfffffdf8]
005bb0d8  MOV ECX,dword ptr [EDX + 0x8]
005bb0db  SUB ECX,dword ptr [EAX + 0x4]
005bb0de  SAR ECX,0x2
005bb0e1  MOV dword ptr [EBP + 0xfffffde8],ECX
005bb0e7  MOV EDX,dword ptr [EBP + 0xfffffde8]
005bb0ed  ADD EDX,dword ptr [EBP + 0x10]
005bb0f0  CMP dword ptr [EBP + -0x18],EDX
005bb0f3  JNC 0x005bb4ab
005bb0f9  MOV dword ptr [EBP + -0x70],0x3fffffff
005bb100  CMP dword ptr [EBP + -0x70],0x0
005bb104  JBE 0x005bb111
005bb106  MOV EAX,dword ptr [EBP + -0x70]
005bb109  MOV dword ptr [EBP + 0xfffffde4],EAX
005bb10f  JMP 0x005bb11b
005bb111  MOV dword ptr [EBP + 0xfffffde4],0x1
005bb11b  MOV ECX,dword ptr [EBP + -0x18]
005bb11e  SHR ECX,0x1
005bb120  MOV EDX,dword ptr [EBP + 0xfffffde4]
005bb126  SUB EDX,ECX
005bb128  CMP EDX,dword ptr [EBP + -0x18]
005bb12b  JNC 0x005bb139
005bb12d  MOV dword ptr [EBP + 0xfffffde0],0x0
005bb137  JMP 0x005bb147
005bb139  MOV EAX,dword ptr [EBP + -0x18]
005bb13c  SHR EAX,0x1
005bb13e  ADD EAX,dword ptr [EBP + -0x18]
005bb141  MOV dword ptr [EBP + 0xfffffde0],EAX
005bb147  MOV ECX,dword ptr [EBP + 0xfffffde0]
005bb14d  MOV dword ptr [EBP + -0x18],ECX
005bb150  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005bb156  CMP dword ptr [EDX + 0x4],0x0
005bb15a  JNZ 0x005bb168
005bb15c  MOV dword ptr [EBP + 0xfffffddc],0x0
005bb166  JMP 0x005bb183
005bb168  MOV EAX,dword ptr [EBP + 0xfffffdf8]
005bb16e  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005bb174  MOV EDX,dword ptr [EAX + 0x8]
005bb177  SUB EDX,dword ptr [ECX + 0x4]
005bb17a  SAR EDX,0x2
005bb17d  MOV dword ptr [EBP + 0xfffffddc],EDX
005bb183  MOV EAX,dword ptr [EBP + 0xfffffddc]
005bb189  ADD EAX,dword ptr [EBP + 0x10]
005bb18c  CMP dword ptr [EBP + -0x18],EAX
005bb18f  JNC 0x005bb1d0
005bb191  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005bb197  CMP dword ptr [ECX + 0x4],0x0
005bb19b  JNZ 0x005bb1a9
005bb19d  MOV dword ptr [EBP + 0xfffffdd8],0x0
005bb1a7  JMP 0x005bb1c4
005bb1a9  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005bb1af  MOV EAX,dword ptr [EBP + 0xfffffdf8]
005bb1b5  MOV ECX,dword ptr [EDX + 0x8]
005bb1b8  SUB ECX,dword ptr [EAX + 0x4]
005bb1bb  SAR ECX,0x2
005bb1be  MOV dword ptr [EBP + 0xfffffdd8],ECX
005bb1c4  MOV EDX,dword ptr [EBP + 0xfffffdd8]
005bb1ca  ADD EDX,dword ptr [EBP + 0x10]
005bb1cd  MOV dword ptr [EBP + -0x18],EDX
005bb1d0  PUSH 0x0
005bb1d2  MOV EAX,dword ptr [EBP + -0x18]
005bb1d5  PUSH EAX
005bb1d6  CALL 0x005c6310
005bb1db  ADD ESP,0x8
005bb1de  MOV dword ptr [EBP + -0x20],EAX
005bb1e1  MOV ECX,dword ptr [EBP + -0x20]
005bb1e4  MOV dword ptr [EBP + -0x1c],ECX
005bb1e7  MOV dword ptr [EBP + -0x4],0x0
005bb1ee  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005bb1f4  MOV EAX,dword ptr [EDX + 0x4]
005bb1f7  MOV dword ptr [EBP + 0xffffff68],EAX
005bb1fd  MOV ECX,dword ptr [EBP + -0x20]
005bb200  MOV dword ptr [EBP + 0xffffff6c],ECX
005bb206  MOV EDX,dword ptr [EBP + 0xc]
005bb209  MOV dword ptr [EBP + 0xffffff70],EDX
005bb20f  MOV EAX,dword ptr [EBP + 0xffffff68]
005bb215  MOV dword ptr [EBP + 0xffffff74],EAX
005bb21b  XOR ECX,ECX
005bb21d  MOV byte ptr [EBP + -0x71],CL
005bb220  MOV DL,byte ptr [EBP + -0x73]
005bb223  MOV byte ptr [EBP + -0x72],DL
005bb226  MOV EAX,dword ptr [EBP + 0xffffff70]
005bb22c  MOV dword ptr [EBP + -0x78],EAX
005bb22f  MOV ECX,dword ptr [EBP + 0xffffff74]
005bb235  MOV dword ptr [EBP + -0x80],ECX
005bb238  MOV DL,byte ptr [EBP + -0x71]
005bb23b  MOV byte ptr [EBP + 0xffffff7b],DL
005bb241  MOV EAX,dword ptr [EBP + 0xffffff6c]
005bb247  MOV dword ptr [EBP + 0xffffff7c],EAX
005bb24d  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005bb253  PUSH ECX
005bb254  MOV EDX,dword ptr [EBP + 0xffffff7c]
005bb25a  PUSH EDX
005bb25b  MOV EAX,dword ptr [EBP + -0x78]
005bb25e  PUSH EAX
005bb25f  MOV ECX,dword ptr [EBP + -0x80]
005bb262  PUSH ECX
005bb263  CALL 0x005bf010
005bb268  ADD ESP,0x10
005bb26b  MOV dword ptr [EBP + 0xfffffdd4],EAX
005bb271  MOV EDX,dword ptr [EBP + 0xfffffdd4]
005bb277  MOV dword ptr [EBP + -0x1c],EDX
005bb27a  MOV EAX,dword ptr [EBP + -0x1c]
005bb27d  MOV dword ptr [EBP + 0xffffff58],EAX
005bb283  XOR ECX,ECX
005bb285  MOV byte ptr [EBP + 0xffffff67],CL
005bb28b  MOV DL,byte ptr [EBP + 0xffffff65]
005bb291  MOV byte ptr [EBP + 0xffffff66],DL
005bb297  MOV AL,byte ptr [EBP + 0xffffff67]
005bb29d  MOV byte ptr [EBP + 0xffffff5f],AL
005bb2a3  MOV ECX,dword ptr [EBP + 0xffffff58]
005bb2a9  MOV dword ptr [EBP + 0xffffff60],ECX
005bb2af  LEA EDX,[EBP + -0x14]
005bb2b2  PUSH EDX
005bb2b3  MOV EAX,dword ptr [EBP + 0x10]
005bb2b6  PUSH EAX
005bb2b7  MOV ECX,dword ptr [EBP + 0xffffff60]
005bb2bd  PUSH ECX
005bb2be  CALL 0x005c0910
005bb2c3  ADD ESP,0xc
005bb2c6  MOV EDX,dword ptr [EBP + 0x10]
005bb2c9  MOV EAX,dword ptr [EBP + -0x1c]
005bb2cc  LEA ECX,[EAX + EDX*0x4]
005bb2cf  MOV dword ptr [EBP + -0x1c],ECX
005bb2d2  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005bb2d8  MOV EAX,dword ptr [EDX + 0x8]
005bb2db  MOV dword ptr [EBP + 0xffffff30],EAX
005bb2e1  MOV ECX,dword ptr [EBP + -0x1c]
005bb2e4  MOV dword ptr [EBP + 0xffffff34],ECX
005bb2ea  MOV EDX,dword ptr [EBP + 0xffffff30]
005bb2f0  MOV dword ptr [EBP + 0xffffff38],EDX
005bb2f6  MOV EAX,dword ptr [EBP + 0xc]
005bb2f9  MOV dword ptr [EBP + 0xffffff3c],EAX
005bb2ff  XOR ECX,ECX
005bb301  MOV byte ptr [EBP + 0xffffff57],CL
005bb307  MOV DL,byte ptr [EBP + 0xffffff55]
005bb30d  MOV byte ptr [EBP + 0xffffff56],DL
005bb313  MOV EAX,dword ptr [EBP + 0xffffff38]
005bb319  MOV dword ptr [EBP + 0xffffff50],EAX
005bb31f  MOV ECX,dword ptr [EBP + 0xffffff3c]
005bb325  MOV dword ptr [EBP + 0xffffff48],ECX
005bb32b  MOV DL,byte ptr [EBP + 0xffffff57]
005bb331  MOV byte ptr [EBP + 0xffffff43],DL
005bb337  MOV EAX,dword ptr [EBP + 0xffffff34]
005bb33d  MOV dword ptr [EBP + 0xffffff44],EAX
005bb343  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005bb349  PUSH ECX
005bb34a  MOV EDX,dword ptr [EBP + 0xffffff44]
005bb350  PUSH EDX
005bb351  MOV EAX,dword ptr [EBP + 0xffffff50]
005bb357  PUSH EAX
005bb358  MOV ECX,dword ptr [EBP + 0xffffff48]
005bb35e  PUSH ECX
005bb35f  CALL 0x005bf010
005bb364  ADD ESP,0x10
005bb367  JMP 0x005bb3a9
005bb4ab  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005bb4b1  MOV EAX,dword ptr [EDX + 0x8]
005bb4b4  SUB EAX,dword ptr [EBP + 0xc]
005bb4b7  SAR EAX,0x2
005bb4ba  CMP EAX,dword ptr [EBP + 0x10]
005bb4bd  JNC 0x005bb607
005bb4c3  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005bb4c9  MOV EDX,dword ptr [ECX + 0x8]
005bb4cc  MOV dword ptr [EBP + 0xfffffed0],EDX
005bb4d2  MOV EAX,dword ptr [EBP + 0xfffffdf8]
005bb4d8  PUSH EAX
005bb4d9  MOV ECX,dword ptr [EBP + 0x10]
005bb4dc  MOV EDX,dword ptr [EBP + 0xc]
005bb4df  LEA EAX,[EDX + ECX*0x4]
005bb4e2  PUSH EAX
005bb4e3  MOV ECX,dword ptr [EBP + 0xfffffed0]
005bb4e9  PUSH ECX
005bb4ea  MOV EDX,dword ptr [EBP + 0xc]
005bb4ed  PUSH EDX
005bb4ee  CALL 0x005befc0
005bb4f3  ADD ESP,0x10
005bb4f6  MOV dword ptr [EBP + -0x4],0x2
005bb4fd  LEA EAX,[EBP + -0x14]
005bb500  PUSH EAX
005bb501  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005bb507  MOV EDX,dword ptr [ECX + 0x8]
005bb50a  SUB EDX,dword ptr [EBP + 0xc]
005bb50d  SAR EDX,0x2
005bb510  MOV EAX,dword ptr [EBP + 0x10]
005bb513  SUB EAX,EDX
005bb515  PUSH EAX
005bb516  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005bb51c  MOV EDX,dword ptr [ECX + 0x8]
005bb51f  PUSH EDX
005bb520  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005bb526  CALL 0x005c5fd0
005bb52b  JMP 0x005bb57f
005bb607  MOV EAX,dword ptr [EBP + 0xfffffdf8]
005bb60d  MOV ECX,dword ptr [EAX + 0x8]
005bb610  MOV dword ptr [EBP + -0x24],ECX
005bb613  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005bb619  MOV EAX,dword ptr [EDX + 0x8]
005bb61c  MOV dword ptr [EBP + 0xfffffe48],EAX
005bb622  MOV ECX,dword ptr [EBP + 0xfffffe48]
005bb628  MOV dword ptr [EBP + 0xfffffe4c],ECX
005bb62e  MOV EDX,dword ptr [EBP + -0x24]
005bb631  MOV dword ptr [EBP + 0xfffffe50],EDX
005bb637  MOV EAX,dword ptr [EBP + 0x10]
005bb63a  SHL EAX,0x2
005bb63d  MOV ECX,dword ptr [EBP + -0x24]
005bb640  SUB ECX,EAX
005bb642  MOV dword ptr [EBP + 0xfffffe54],ECX
005bb648  XOR EDX,EDX
005bb64a  MOV byte ptr [EBP + 0xfffffe8f],DL
005bb650  MOV AL,byte ptr [EBP + 0xfffffe8d]
005bb656  MOV byte ptr [EBP + 0xfffffe8e],AL
005bb65c  MOV ECX,dword ptr [EBP + 0xfffffe50]
005bb662  MOV dword ptr [EBP + 0xfffffe88],ECX
005bb668  MOV EDX,dword ptr [EBP + 0xfffffe54]
005bb66e  MOV dword ptr [EBP + 0xfffffe80],EDX
005bb674  MOV AL,byte ptr [EBP + 0xfffffe8f]
005bb67a  MOV byte ptr [EBP + 0xfffffe5b],AL
005bb680  MOV ECX,dword ptr [EBP + 0xfffffe4c]
005bb686  MOV dword ptr [EBP + 0xfffffe5c],ECX
005bb68c  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005bb692  PUSH EDX
005bb693  MOV EAX,dword ptr [EBP + 0xfffffe5c]
005bb699  PUSH EAX
005bb69a  MOV ECX,dword ptr [EBP + 0xfffffe88]
005bb6a0  PUSH ECX
005bb6a1  MOV EDX,dword ptr [EBP + 0xfffffe80]
005bb6a7  PUSH EDX
005bb6a8  CALL 0x005bf010
005bb6ad  ADD ESP,0x10
005bb6b0  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005bb6b6  MOV dword ptr [ECX + 0x8],EAX
005bb6b9  MOV EDX,dword ptr [EBP + -0x24]
005bb6bc  PUSH EDX
005bb6bd  MOV EAX,dword ptr [EBP + 0x10]
005bb6c0  SHL EAX,0x2
005bb6c3  MOV ECX,dword ptr [EBP + -0x24]
005bb6c6  SUB ECX,EAX
005bb6c8  PUSH ECX
005bb6c9  MOV EDX,dword ptr [EBP + 0xc]
005bb6cc  PUSH EDX
005bb6cd  CALL 0x005c61d0
005bb6d2  ADD ESP,0xc
005bb6d5  MOV EAX,dword ptr [EBP + 0x10]
005bb6d8  MOV ECX,dword ptr [EBP + 0xc]
005bb6db  LEA EDX,[ECX + EAX*0x4]
005bb6de  MOV dword ptr [EBP + 0xfffffdfc],EDX
005bb6e4  MOV EAX,dword ptr [EBP + 0xc]
005bb6e7  MOV dword ptr [EBP + 0xfffffe00],EAX
005bb6ed  MOV ECX,dword ptr [EBP + 0xfffffdfc]
005bb6f3  MOV dword ptr [EBP + 0xfffffe0c],ECX
005bb6f9  MOV EDX,dword ptr [EBP + 0xfffffe00]
005bb6ff  MOV dword ptr [EBP + 0xfffffe04],EDX
005bb705  JMP 0x005bb716
005bb707  MOV EAX,dword ptr [EBP + 0xfffffe04]
005bb70d  ADD EAX,0x4
005bb710  MOV dword ptr [EBP + 0xfffffe04],EAX
005bb716  MOV ECX,dword ptr [EBP + 0xfffffe04]
005bb71c  CMP ECX,dword ptr [EBP + 0xfffffe0c]
005bb722  JZ 0x005bb731
005bb724  MOV EDX,dword ptr [EBP + 0xfffffe04]
005bb72a  MOV EAX,dword ptr [EBP + -0x14]
005bb72d  MOV dword ptr [EDX],EAX
005bb72f  JMP 0x005bb707
