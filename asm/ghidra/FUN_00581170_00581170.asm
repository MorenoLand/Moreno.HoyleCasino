; FUN_00581170  00581170
00581170  PUSH EBP
00581171  MOV EBP,ESP
00581173  PUSH -0x1
00581175  PUSH 0x6a6aa4
0058117a  MOV EAX,FS:[0x0]
00581180  PUSH EAX
00581181  SUB ESP,0x8c
00581187  MOV EAX,[0x00781870]
0058118c  XOR EAX,EBP
0058118e  PUSH EAX
0058118f  LEA EAX,[EBP + -0xc]
00581192  MOV FS:[0x0],EAX
00581198  MOV dword ptr [EBP + -0x6c],ECX
0058119b  MOV EAX,dword ptr [EBP + -0x6c]
0058119e  MOV dword ptr [EAX],0x6cc054
005811a4  MOV dword ptr [EBP + -0x4],0x0
005811ab  MOV dword ptr [EBP + -0x10],0x0
005811b2  JMP 0x005811bd
005811b4  MOV ECX,dword ptr [EBP + -0x10]
005811b7  ADD ECX,0x1
005811ba  MOV dword ptr [EBP + -0x10],ECX
005811bd  CMP dword ptr [EBP + -0x10],0x4
005811c1  JGE 0x0058121c
005811c3  MOV EDX,dword ptr [EBP + -0x10]
005811c6  MOV EAX,dword ptr [EBP + -0x6c]
005811c9  CMP dword ptr [EAX + EDX*0x4 + 0x4320],0x0
005811d1  JZ 0x0058121a
005811d3  MOV ECX,dword ptr [EBP + -0x10]
005811d6  MOV EDX,dword ptr [EBP + -0x6c]
005811d9  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x4320]
005811e0  MOV dword ptr [EBP + -0x18],EAX
005811e3  MOV ECX,dword ptr [EBP + -0x18]
005811e6  MOV dword ptr [EBP + -0x14],ECX
005811e9  CMP dword ptr [EBP + -0x14],0x0
005811ed  JZ 0x00581202
005811ef  PUSH 0x1
005811f1  MOV EDX,dword ptr [EBP + -0x14]
005811f4  MOV EAX,dword ptr [EDX]
005811f6  MOV ECX,dword ptr [EBP + -0x14]
005811f9  MOV EDX,dword ptr [EAX]
005811fb  CALL EDX
005811fd  MOV dword ptr [EBP + -0x70],EAX
00581200  JMP 0x00581209
00581202  MOV dword ptr [EBP + -0x70],0x0
00581209  MOV EAX,dword ptr [EBP + -0x10]
0058120c  MOV ECX,dword ptr [EBP + -0x6c]
0058120f  MOV dword ptr [ECX + EAX*0x4 + 0x4320],0x0
0058121a  JMP 0x005811b4
0058121c  MOV EDX,dword ptr [EBP + -0x6c]
0058121f  CMP dword ptr [EDX + 0x4080],0x0
00581226  JZ 0x00581267
00581228  MOV EAX,dword ptr [EBP + -0x6c]
0058122b  MOV ECX,dword ptr [EAX + 0x4080]
00581231  MOV dword ptr [EBP + -0x20],ECX
00581234  MOV EDX,dword ptr [EBP + -0x20]
00581237  MOV dword ptr [EBP + -0x1c],EDX
0058123a  CMP dword ptr [EBP + -0x1c],0x0
0058123e  JZ 0x00581253
00581240  PUSH 0x1
00581242  MOV EAX,dword ptr [EBP + -0x1c]
00581245  MOV EDX,dword ptr [EAX]
00581247  MOV ECX,dword ptr [EBP + -0x1c]
0058124a  MOV EAX,dword ptr [EDX]
0058124c  CALL EAX
0058124e  MOV dword ptr [EBP + -0x74],EAX
00581251  JMP 0x0058125a
00581253  MOV dword ptr [EBP + -0x74],0x0
0058125a  MOV ECX,dword ptr [EBP + -0x6c]
0058125d  MOV dword ptr [ECX + 0x4080],0x0
00581267  MOV EDX,dword ptr [EBP + -0x6c]
0058126a  CMP dword ptr [EDX + 0x4084],0x0
00581271  JZ 0x005812b2
00581273  MOV EAX,dword ptr [EBP + -0x6c]
00581276  MOV ECX,dword ptr [EAX + 0x4084]
0058127c  MOV dword ptr [EBP + -0x28],ECX
0058127f  MOV EDX,dword ptr [EBP + -0x28]
00581282  MOV dword ptr [EBP + -0x24],EDX
00581285  CMP dword ptr [EBP + -0x24],0x0
00581289  JZ 0x0058129e
0058128b  PUSH 0x1
0058128d  MOV EAX,dword ptr [EBP + -0x24]
00581290  MOV EDX,dword ptr [EAX]
00581292  MOV ECX,dword ptr [EBP + -0x24]
00581295  MOV EAX,dword ptr [EDX]
00581297  CALL EAX
00581299  MOV dword ptr [EBP + -0x78],EAX
0058129c  JMP 0x005812a5
0058129e  MOV dword ptr [EBP + -0x78],0x0
005812a5  MOV ECX,dword ptr [EBP + -0x6c]
005812a8  MOV dword ptr [ECX + 0x4084],0x0
005812b2  MOV EDX,dword ptr [EBP + -0x6c]
005812b5  CMP dword ptr [EDX + 0x4088],0x0
005812bc  JZ 0x005812fd
005812be  MOV EAX,dword ptr [EBP + -0x6c]
005812c1  MOV ECX,dword ptr [EAX + 0x4088]
005812c7  MOV dword ptr [EBP + -0x30],ECX
005812ca  MOV EDX,dword ptr [EBP + -0x30]
005812cd  MOV dword ptr [EBP + -0x2c],EDX
005812d0  CMP dword ptr [EBP + -0x2c],0x0
005812d4  JZ 0x005812e9
005812d6  PUSH 0x1
005812d8  MOV EAX,dword ptr [EBP + -0x2c]
005812db  MOV EDX,dword ptr [EAX]
005812dd  MOV ECX,dword ptr [EBP + -0x2c]
005812e0  MOV EAX,dword ptr [EDX]
005812e2  CALL EAX
005812e4  MOV dword ptr [EBP + -0x7c],EAX
005812e7  JMP 0x005812f0
005812e9  MOV dword ptr [EBP + -0x7c],0x0
005812f0  MOV ECX,dword ptr [EBP + -0x6c]
005812f3  MOV dword ptr [ECX + 0x4088],0x0
005812fd  MOV EDX,dword ptr [EBP + -0x6c]
00581300  CMP dword ptr [EDX + 0x408c],0x0
00581307  JZ 0x00581348
00581309  MOV EAX,dword ptr [EBP + -0x6c]
0058130c  MOV ECX,dword ptr [EAX + 0x408c]
00581312  MOV dword ptr [EBP + -0x38],ECX
00581315  MOV EDX,dword ptr [EBP + -0x38]
00581318  MOV dword ptr [EBP + -0x34],EDX
0058131b  CMP dword ptr [EBP + -0x34],0x0
0058131f  JZ 0x00581334
00581321  PUSH 0x1
00581323  MOV EAX,dword ptr [EBP + -0x34]
00581326  MOV EDX,dword ptr [EAX]
00581328  MOV ECX,dword ptr [EBP + -0x34]
0058132b  MOV EAX,dword ptr [EDX]
0058132d  CALL EAX
0058132f  MOV dword ptr [EBP + -0x80],EAX
00581332  JMP 0x0058133b
00581334  MOV dword ptr [EBP + -0x80],0x0
0058133b  MOV ECX,dword ptr [EBP + -0x6c]
0058133e  MOV dword ptr [ECX + 0x408c],0x0
00581348  MOV EDX,dword ptr [EBP + -0x6c]
0058134b  CMP dword ptr [EDX + 0x4090],0x0
00581352  JZ 0x00581399
00581354  MOV EAX,dword ptr [EBP + -0x6c]
00581357  MOV ECX,dword ptr [EAX + 0x4090]
0058135d  MOV dword ptr [EBP + -0x40],ECX
00581360  MOV EDX,dword ptr [EBP + -0x40]
00581363  MOV dword ptr [EBP + -0x3c],EDX
00581366  CMP dword ptr [EBP + -0x3c],0x0
0058136a  JZ 0x00581382
0058136c  PUSH 0x1
0058136e  MOV EAX,dword ptr [EBP + -0x3c]
00581371  MOV EDX,dword ptr [EAX]
00581373  MOV ECX,dword ptr [EBP + -0x3c]
00581376  MOV EAX,dword ptr [EDX]
00581378  CALL EAX
0058137a  MOV dword ptr [EBP + 0xffffff7c],EAX
00581380  JMP 0x0058138c
00581382  MOV dword ptr [EBP + 0xffffff7c],0x0
0058138c  MOV ECX,dword ptr [EBP + -0x6c]
0058138f  MOV dword ptr [ECX + 0x4090],0x0
00581399  MOV EDX,dword ptr [EBP + -0x6c]
0058139c  CMP dword ptr [EDX + 0x4094],0x0
005813a3  JZ 0x005813ea
005813a5  MOV EAX,dword ptr [EBP + -0x6c]
005813a8  MOV ECX,dword ptr [EAX + 0x4094]
005813ae  MOV dword ptr [EBP + -0x48],ECX
005813b1  MOV EDX,dword ptr [EBP + -0x48]
005813b4  MOV dword ptr [EBP + -0x44],EDX
005813b7  CMP dword ptr [EBP + -0x44],0x0
005813bb  JZ 0x005813d3
005813bd  PUSH 0x1
005813bf  MOV EAX,dword ptr [EBP + -0x44]
005813c2  MOV EDX,dword ptr [EAX]
005813c4  MOV ECX,dword ptr [EBP + -0x44]
005813c7  MOV EAX,dword ptr [EDX]
005813c9  CALL EAX
005813cb  MOV dword ptr [EBP + 0xffffff78],EAX
005813d1  JMP 0x005813dd
005813d3  MOV dword ptr [EBP + 0xffffff78],0x0
005813dd  MOV ECX,dword ptr [EBP + -0x6c]
005813e0  MOV dword ptr [ECX + 0x4094],0x0
005813ea  MOV EDX,dword ptr [EBP + -0x6c]
005813ed  CMP dword ptr [EDX + 0x4318],0x0
005813f4  JZ 0x0058143b
005813f6  MOV EAX,dword ptr [EBP + -0x6c]
005813f9  MOV ECX,dword ptr [EAX + 0x4318]
005813ff  MOV dword ptr [EBP + -0x50],ECX
00581402  MOV EDX,dword ptr [EBP + -0x50]
00581405  MOV dword ptr [EBP + -0x4c],EDX
00581408  CMP dword ptr [EBP + -0x4c],0x0
0058140c  JZ 0x00581424
0058140e  PUSH 0x1
00581410  MOV EAX,dword ptr [EBP + -0x4c]
00581413  MOV EDX,dword ptr [EAX]
00581415  MOV ECX,dword ptr [EBP + -0x4c]
00581418  MOV EAX,dword ptr [EDX]
0058141a  CALL EAX
0058141c  MOV dword ptr [EBP + 0xffffff74],EAX
00581422  JMP 0x0058142e
00581424  MOV dword ptr [EBP + 0xffffff74],0x0
0058142e  MOV ECX,dword ptr [EBP + -0x6c]
00581431  MOV dword ptr [ECX + 0x4318],0x0
0058143b  MOV EDX,dword ptr [EBP + -0x6c]
0058143e  CMP dword ptr [EDX + 0x431c],0x0
00581445  JZ 0x0058148c
00581447  MOV EAX,dword ptr [EBP + -0x6c]
0058144a  MOV ECX,dword ptr [EAX + 0x431c]
00581450  MOV dword ptr [EBP + -0x58],ECX
00581453  MOV EDX,dword ptr [EBP + -0x58]
00581456  MOV dword ptr [EBP + -0x54],EDX
00581459  CMP dword ptr [EBP + -0x54],0x0
0058145d  JZ 0x00581475
0058145f  PUSH 0x1
00581461  MOV EAX,dword ptr [EBP + -0x54]
00581464  MOV EDX,dword ptr [EAX]
00581466  MOV ECX,dword ptr [EBP + -0x54]
00581469  MOV EAX,dword ptr [EDX]
0058146b  CALL EAX
0058146d  MOV dword ptr [EBP + 0xffffff70],EAX
00581473  JMP 0x0058147f
00581475  MOV dword ptr [EBP + 0xffffff70],0x0
0058147f  MOV ECX,dword ptr [EBP + -0x6c]
00581482  MOV dword ptr [ECX + 0x431c],0x0
0058148c  MOV dword ptr [EBP + -0x10],0x0
00581493  JMP 0x0058149e
00581495  MOV EDX,dword ptr [EBP + -0x10]
00581498  ADD EDX,0x1
0058149b  MOV dword ptr [EBP + -0x10],EDX
0058149e  CMP dword ptr [EBP + -0x10],0x50
005814a2  JGE 0x00581567
005814a8  MOV EAX,dword ptr [EBP + -0x10]
005814ab  MOV ECX,dword ptr [EBP + -0x6c]
005814ae  CMP dword ptr [ECX + EAX*0x4 + 0x4098],0x0
005814b6  JZ 0x00581505
005814b8  MOV EDX,dword ptr [EBP + -0x10]
005814bb  MOV EAX,dword ptr [EBP + -0x6c]
005814be  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x4098]
005814c5  MOV dword ptr [EBP + -0x60],ECX
005814c8  MOV EDX,dword ptr [EBP + -0x60]
005814cb  MOV dword ptr [EBP + -0x5c],EDX
005814ce  CMP dword ptr [EBP + -0x5c],0x0
005814d2  JZ 0x005814ea
005814d4  PUSH 0x1
005814d6  MOV EAX,dword ptr [EBP + -0x5c]
005814d9  MOV EDX,dword ptr [EAX]
005814db  MOV ECX,dword ptr [EBP + -0x5c]
005814de  MOV EAX,dword ptr [EDX]
005814e0  CALL EAX
005814e2  MOV dword ptr [EBP + 0xffffff6c],EAX
005814e8  JMP 0x005814f4
005814ea  MOV dword ptr [EBP + 0xffffff6c],0x0
005814f4  MOV ECX,dword ptr [EBP + -0x10]
005814f7  MOV EDX,dword ptr [EBP + -0x6c]
005814fa  MOV dword ptr [EDX + ECX*0x4 + 0x4098],0x0
00581505  MOV EAX,dword ptr [EBP + -0x10]
00581508  MOV ECX,dword ptr [EBP + -0x6c]
0058150b  CMP dword ptr [ECX + EAX*0x4 + 0x41d8],0x0
00581513  JZ 0x00581562
00581515  MOV EDX,dword ptr [EBP + -0x10]
00581518  MOV EAX,dword ptr [EBP + -0x6c]
0058151b  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x41d8]
00581522  MOV dword ptr [EBP + -0x68],ECX
00581525  MOV EDX,dword ptr [EBP + -0x68]
00581528  MOV dword ptr [EBP + -0x64],EDX
0058152b  CMP dword ptr [EBP + -0x64],0x0
0058152f  JZ 0x00581547
00581531  PUSH 0x1
00581533  MOV EAX,dword ptr [EBP + -0x64]
00581536  MOV EDX,dword ptr [EAX]
00581538  MOV ECX,dword ptr [EBP + -0x64]
0058153b  MOV EAX,dword ptr [EDX]
0058153d  CALL EAX
0058153f  MOV dword ptr [EBP + 0xffffff68],EAX
00581545  JMP 0x00581551
00581547  MOV dword ptr [EBP + 0xffffff68],0x0
00581551  MOV ECX,dword ptr [EBP + -0x10]
00581554  MOV EDX,dword ptr [EBP + -0x6c]
00581557  MOV dword ptr [EDX + ECX*0x4 + 0x41d8],0x0
00581562  JMP 0x00581495
00581567  MOV dword ptr [EBP + -0x4],0xffffffff
0058156e  MOV ECX,dword ptr [EBP + -0x6c]
00581571  CALL 0x005eac00
00581576  MOV ECX,dword ptr [EBP + -0xc]
00581579  MOV dword ptr FS:[0x0],ECX
00581580  POP ECX
00581581  MOV ESP,EBP
00581583  POP EBP
00581584  RET
