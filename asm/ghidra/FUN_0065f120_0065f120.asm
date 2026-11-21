; FUN_0065f120  0065f120
0065f120  PUSH EBP
0065f121  MOV EBP,ESP
0065f123  SUB ESP,0xd4
0065f129  MOV dword ptr [EBP + 0xffffff3c],ECX
0065f12f  CMP dword ptr [EBP + 0x8],0x0
0065f133  JNZ 0x0065f13a
0065f135  JMP 0x0065f8e6
0065f13a  MOV EAX,dword ptr [EBP + 0x8]
0065f13d  MOV dword ptr [EBP + -0x10],EAX
0065f140  MOV ECX,dword ptr [EBP + 0x8]
0065f143  ADD ECX,0x14
0065f146  MOV dword ptr [EBP + -0x14],ECX
0065f149  CMP dword ptr [0x0163068c],0x0
0065f150  JZ 0x0065f19f
0065f152  MOV EDX,dword ptr [EBP + -0x10]
0065f155  MOVSX EAX,byte ptr [EDX + 0x3a]
0065f159  CMP EAX,0x2
0065f15c  JNZ 0x0065f16a
0065f15e  MOV dword ptr [EBP + 0xffffff38],0x6b27f8
0065f168  JMP 0x0065f176
0065f16a  MOV ECX,dword ptr [EBP + -0x10]
0065f16d  ADD ECX,0x21
0065f170  MOV dword ptr [EBP + 0xffffff38],ECX
0065f176  MOV EDX,dword ptr [EBP + 0xffffff38]
0065f17c  PUSH EDX
0065f17d  MOV EAX,dword ptr [EBP + -0x10]
0065f180  MOV CL,byte ptr [EAX + 0x3b]
0065f183  PUSH ECX
0065f184  MOV EDX,dword ptr [EBP + -0x10]
0065f187  MOV AL,byte ptr [EDX + 0x3a]
0065f18a  PUSH EAX
0065f18b  MOV ECX,dword ptr [EBP + -0x14]
0065f18e  PUSH ECX
0065f18f  MOV ECX,dword ptr [0x0163068c]
0065f195  CALL 0x0063db60
0065f19a  JMP 0x0065f8e6
0065f19f  MOV EDX,dword ptr [EBP + 0xffffff3c]
0065f1a5  MOVZX EAX,byte ptr [EDX + 0x1d5]
0065f1ac  TEST EAX,EAX
0065f1ae  JZ 0x0065f363
0065f1b4  MOV ECX,dword ptr [0x0162ee84]
0065f1ba  MOV EDX,dword ptr [ECX + 0x58]
0065f1bd  MOV EAX,dword ptr [EDX]
0065f1bf  MOV dword ptr [EBP + -0x24],EAX
0065f1c2  MOV ECX,dword ptr [EBP + -0x24]
0065f1c5  CALL 0x0063aac0
0065f1ca  MOV ECX,dword ptr [EAX]
0065f1cc  MOV dword ptr [EBP + -0x20],ECX
0065f1cf  XOR EDX,EDX
0065f1d1  CMP dword ptr [EBP + -0x20],0x0
0065f1d5  SETZ DL
0065f1d8  MOVZX EAX,DL
0065f1db  TEST EAX,EAX
0065f1dd  JNZ 0x0065f1ef
0065f1df  MOV ECX,dword ptr [0x0162ee84]
0065f1e5  MOV EDX,dword ptr [ECX + 0x58]
0065f1e8  MOV ECX,dword ptr [EDX]
0065f1ea  CALL 0x0063b0a0
0065f1ef  MOV ECX,dword ptr [EBP + -0x10]
0065f1f2  CALL 0x00629c70
0065f1f7  PUSH EAX
0065f1f8  MOV ECX,dword ptr [0x0162ee84]
0065f1fe  CALL 0x006368b0
0065f203  MOVZX EAX,AL
0065f206  TEST EAX,EAX
0065f208  JZ 0x0065f27f
0065f20a  MOV ECX,dword ptr [0x0162ee84]
0065f210  MOV EDX,dword ptr [ECX + 0x58]
0065f213  MOV EAX,dword ptr [EDX]
0065f215  MOV dword ptr [EBP + -0x8],EAX
0065f218  MOV ECX,dword ptr [EBP + -0x10]
0065f21b  CALL 0x00629c70
0065f220  PUSH EAX
0065f221  MOV ECX,dword ptr [0x0162ee84]
0065f227  CALL 0x006369b0
0065f22c  MOV dword ptr [EBP + -0x4],EAX
0065f22f  MOV ECX,dword ptr [0x0162ee84]
0065f235  MOV EDX,dword ptr [ECX + 0x58]
0065f238  MOV EAX,[0x0162ee84]
0065f23d  MOV ECX,dword ptr [EAX + 0x58]
0065f240  MOV EAX,dword ptr [EBP + -0x4]
0065f243  MOV EDX,dword ptr [EDX + EAX*0x4]
0065f246  MOV dword ptr [ECX],EDX
0065f248  MOV EAX,[0x0162ee84]
0065f24d  MOV ECX,dword ptr [EAX + 0x58]
0065f250  MOV EDX,dword ptr [ECX]
0065f252  MOV dword ptr [EDX + 0x4],0x0
0065f259  MOV EAX,[0x0162ee84]
0065f25e  MOV ECX,dword ptr [EAX + 0x58]
0065f261  MOV EDX,dword ptr [EBP + -0x4]
0065f264  MOV EAX,dword ptr [EBP + -0x8]
0065f267  MOV dword ptr [ECX + EDX*0x4],EAX
0065f26a  MOV ECX,dword ptr [0x0162ee84]
0065f270  MOV EDX,dword ptr [ECX + 0x58]
0065f273  MOV EAX,dword ptr [EBP + -0x4]
0065f276  MOV ECX,dword ptr [EDX + EAX*0x4]
0065f279  MOV EDX,dword ptr [EBP + -0x4]
0065f27c  MOV dword ptr [ECX + 0x4],EDX
0065f27f  MOV EAX,dword ptr [EBP + -0x14]
0065f282  PUSH EAX
0065f283  MOV ECX,dword ptr [0x0162ee84]
0065f289  MOV EDX,dword ptr [ECX + 0x58]
0065f28c  MOV ECX,dword ptr [EDX]
0065f28e  CALL 0x0063ab10
0065f293  MOV EAX,dword ptr [EBP + -0x10]
0065f296  MOVSX ECX,byte ptr [EAX + 0x3a]
0065f29a  MOV dword ptr [EBP + -0x2c],ECX
0065f29d  MOV EDX,dword ptr [0x0162ee84]
0065f2a3  MOV EAX,dword ptr [EDX + 0x58]
0065f2a6  MOV ECX,dword ptr [EAX]
0065f2a8  MOV dword ptr [EBP + -0x28],ECX
0065f2ab  MOV ECX,dword ptr [EBP + -0x28]
0065f2ae  CALL 0x0063aac0
0065f2b3  MOV EDX,dword ptr [EBP + -0x2c]
0065f2b6  MOV dword ptr [EAX],EDX
0065f2b8  MOV EAX,[0x0162ee84]
0065f2bd  MOV ECX,dword ptr [EAX + 0x58]
0065f2c0  MOV EDX,dword ptr [ECX]
0065f2c2  MOV dword ptr [EBP + -0x30],EDX
0065f2c5  MOV ECX,dword ptr [EBP + -0x30]
0065f2c8  CALL 0x0063aac0
0065f2cd  MOV EAX,dword ptr [EAX]
0065f2cf  MOV dword ptr [EBP + -0x34],EAX
0065f2d2  CMP dword ptr [EBP + -0x34],0x2
0065f2d6  JNZ 0x0065f326
0065f2d8  MOV ECX,dword ptr [0x0162ee84]
0065f2de  MOV EDX,dword ptr [ECX + 0x58]
0065f2e1  MOV EAX,dword ptr [EDX]
0065f2e3  MOV dword ptr [EBP + -0x38],EAX
0065f2e6  PUSH 0x6b27f8
0065f2eb  MOV ECX,dword ptr [EBP + -0x38]
0065f2ee  CALL 0x0063aac0
0065f2f3  ADD EAX,0x38
0065f2f6  PUSH EAX
0065f2f7  CALL 0x00686d8e
0065f2fc  ADD ESP,0x8
0065f2ff  MOV ECX,dword ptr [EBP + -0x10]
0065f302  MOVSX EDX,byte ptr [ECX + 0x3b]
0065f306  MOV dword ptr [EBP + -0x40],EDX
0065f309  MOV EAX,[0x0162ee84]
0065f30e  MOV ECX,dword ptr [EAX + 0x58]
0065f311  MOV EDX,dword ptr [ECX]
0065f313  MOV dword ptr [EBP + -0x3c],EDX
0065f316  MOV ECX,dword ptr [EBP + -0x3c]
0065f319  CALL 0x0063aac0
0065f31e  MOV ECX,dword ptr [EBP + -0x40]
0065f321  MOV dword ptr [EAX + 0x54],ECX
0065f324  JMP 0x0065f34f
0065f326  MOV EDX,dword ptr [0x0162ee84]
0065f32c  MOV EAX,dword ptr [EDX + 0x58]
0065f32f  MOV ECX,dword ptr [EAX]
0065f331  MOV dword ptr [EBP + -0x44],ECX
0065f334  MOV EDX,dword ptr [EBP + -0x10]
0065f337  ADD EDX,0x21
0065f33a  PUSH EDX
0065f33b  MOV ECX,dword ptr [EBP + -0x44]
0065f33e  CALL 0x0063aac0
0065f343  ADD EAX,0x38
0065f346  PUSH EAX
0065f347  CALL 0x00686d8e
0065f34c  ADD ESP,0x8
0065f34f  MOV EAX,[0x0162ee84]
0065f354  MOV ECX,dword ptr [EAX + 0x58]
0065f357  MOV ECX,dword ptr [ECX]
0065f359  CALL 0x0063b0a0
0065f35e  JMP 0x0065f88c
0065f363  MOV EDX,dword ptr [EBP + 0xffffff3c]
0065f369  MOVZX EAX,byte ptr [EDX + 0x1d6]
0065f370  TEST EAX,EAX
0065f372  JZ 0x0065f6b6
0065f378  MOV ECX,dword ptr [0x0162ee80]
0065f37e  CMP dword ptr [ECX + 0x34],0x0
0065f382  JZ 0x0065f6b6
0065f388  MOV EDX,dword ptr [0x0162ee84]
0065f38e  MOV EAX,dword ptr [EDX]
0065f390  MOV ECX,dword ptr [0x0162ee84]
0065f396  MOV EDX,dword ptr [EAX + 0x31c]
0065f39c  CALL EDX
0065f39e  MOV dword ptr [EBP + -0x8],EAX
0065f3a1  PUSH 0x0
0065f3a3  PUSH 0x0
0065f3a5  MOV ECX,dword ptr [EBP + -0x8]
0065f3a8  CALL 0x0063a3e0
0065f3ad  MOV EAX,dword ptr [EBP + -0x14]
0065f3b0  PUSH EAX
0065f3b1  MOV ECX,dword ptr [EBP + -0x8]
0065f3b4  CALL 0x0063ab10
0065f3b9  MOV ECX,dword ptr [EBP + -0x10]
0065f3bc  MOVSX EDX,byte ptr [ECX + 0x3a]
0065f3c0  MOV dword ptr [EBP + -0x48],EDX
0065f3c3  MOV ECX,dword ptr [EBP + -0x8]
0065f3c6  CALL 0x0063aac0
0065f3cb  MOV ECX,dword ptr [EBP + -0x48]
0065f3ce  MOV dword ptr [EAX],ECX
0065f3d0  MOV ECX,dword ptr [EBP + -0x8]
0065f3d3  CALL 0x0063aac0
0065f3d8  MOV EDX,dword ptr [EAX]
0065f3da  MOV dword ptr [EBP + -0x4c],EDX
0065f3dd  CMP dword ptr [EBP + -0x4c],0x2
0065f3e1  JNZ 0x0065f416
0065f3e3  PUSH 0x6b27f8
0065f3e8  MOV ECX,dword ptr [EBP + -0x8]
0065f3eb  CALL 0x0063aac0
0065f3f0  ADD EAX,0x38
0065f3f3  PUSH EAX
0065f3f4  CALL 0x00686d8e
0065f3f9  ADD ESP,0x8
0065f3fc  MOV EAX,dword ptr [EBP + -0x10]
0065f3ff  MOVSX ECX,byte ptr [EAX + 0x3b]
0065f403  MOV dword ptr [EBP + -0x50],ECX
0065f406  MOV ECX,dword ptr [EBP + -0x8]
0065f409  CALL 0x0063aac0
0065f40e  MOV EDX,dword ptr [EBP + -0x50]
0065f411  MOV dword ptr [EAX + 0x54],EDX
0065f414  JMP 0x0065f431
0065f416  MOV EAX,dword ptr [EBP + -0x10]
0065f419  ADD EAX,0x21
0065f41c  PUSH EAX
0065f41d  MOV ECX,dword ptr [EBP + -0x8]
0065f420  CALL 0x0063aac0
0065f425  ADD EAX,0x38
0065f428  PUSH EAX
0065f429  CALL 0x00686d8e
0065f42e  ADD ESP,0x8
0065f431  MOV ECX,dword ptr [EBP + -0x8]
0065f434  CALL 0x0063b0a0
0065f439  CMP dword ptr [0x0163068c],0x0
0065f440  JNZ 0x0065f647
0065f446  MOV dword ptr [EBP + -0xc],0x0
0065f44d  JMP 0x0065f458
0065f44f  MOV ECX,dword ptr [EBP + -0xc]
0065f452  ADD ECX,0x1
0065f455  MOV dword ptr [EBP + -0xc],ECX
0065f458  MOV EDX,dword ptr [0x0162ee84]
0065f45e  MOV EAX,dword ptr [EDX]
0065f460  MOV ECX,dword ptr [0x0162ee84]
0065f466  MOV EDX,dword ptr [EAX + 0x10c]
0065f46c  CALL EDX
0065f46e  CMP dword ptr [EBP + -0xc],EAX
0065f471  JGE 0x0065f647
0065f477  MOV EAX,[0x0162ee80]
0065f47c  MOV ECX,dword ptr [EAX + 0x34]
0065f47f  MOV EDX,dword ptr [EBP + -0xc]
0065f482  CMP EDX,dword ptr [ECX + 0x4]
0065f485  JNZ 0x0065f489
0065f487  JMP 0x0065f44f
0065f489  MOV EAX,[0x0162ee84]
0065f48e  MOV ECX,dword ptr [EAX + 0x58]
0065f491  MOV EDX,dword ptr [EBP + -0xc]
0065f494  MOV EAX,dword ptr [ECX + EDX*0x4]
0065f497  MOV dword ptr [EBP + -0x5c],EAX
0065f49a  MOV ECX,dword ptr [EBP + -0x5c]
0065f49d  CALL 0x0063aac0
0065f4a2  MOV ECX,dword ptr [EAX]
0065f4a4  MOV dword ptr [EBP + -0x54],ECX
0065f4a7  CMP dword ptr [EBP + -0x54],0x2
0065f4ab  JZ 0x0065f4cc
0065f4ad  MOV ECX,dword ptr [EBP + -0x5c]
0065f4b0  CALL 0x0063aac0
0065f4b5  MOV EDX,dword ptr [EAX]
0065f4b7  MOV dword ptr [EBP + -0x58],EDX
0065f4ba  CMP dword ptr [EBP + -0x58],0x3
0065f4be  JZ 0x0065f4cc
0065f4c0  MOV dword ptr [EBP + 0xffffff34],0x0
0065f4ca  JMP 0x0065f4d6
0065f4cc  MOV dword ptr [EBP + 0xffffff34],0x1
0065f4d6  MOVZX EAX,byte ptr [EBP + 0xffffff34]
0065f4dd  TEST EAX,EAX
0065f4df  JZ 0x0065f642
0065f4e5  MOV ECX,dword ptr [EBP + -0x8]
0065f4e8  CALL 0x0063aac0
0065f4ed  ADD EAX,0x4
0065f4f0  MOV dword ptr [EBP + -0x60],EAX
0065f4f3  MOV ECX,dword ptr [0x0162ee84]
0065f4f9  MOV EDX,dword ptr [ECX + 0x58]
0065f4fc  MOV EAX,dword ptr [EBP + -0xc]
0065f4ff  MOV ECX,dword ptr [EDX + EAX*0x4]
0065f502  MOV dword ptr [EBP + -0x64],ECX
0065f505  MOV ECX,dword ptr [EBP + -0x64]
0065f508  CALL 0x0063aac0
0065f50d  ADD EAX,0x4
0065f510  MOV dword ptr [EBP + -0x68],EAX
0065f513  MOV EDX,dword ptr [EBP + -0x60]
0065f516  PUSH EDX
0065f517  MOV EAX,dword ptr [EBP + -0x68]
0065f51a  PUSH EAX
0065f51b  CALL 0x00686ec0
0065f520  ADD ESP,0x8
0065f523  TEST EAX,EAX
0065f525  JNZ 0x0065f642
0065f52b  MOV ECX,dword ptr [EBP + -0x10]
0065f52e  MOVSX EDX,byte ptr [ECX + 0x3a]
0065f532  MOV dword ptr [EBP + -0x70],EDX
0065f535  MOV EAX,[0x0162ee84]
0065f53a  MOV ECX,dword ptr [EAX + 0x58]
0065f53d  MOV EDX,dword ptr [EBP + -0xc]
0065f540  MOV EAX,dword ptr [ECX + EDX*0x4]
0065f543  MOV dword ptr [EBP + -0x6c],EAX
0065f546  MOV ECX,dword ptr [EBP + -0x6c]
0065f549  CALL 0x0063aac0
0065f54e  MOV ECX,dword ptr [EBP + -0x70]
0065f551  MOV dword ptr [EAX],ECX
0065f553  MOV ECX,dword ptr [EBP + -0x8]
0065f556  CALL 0x0063aac0
0065f55b  MOV EDX,dword ptr [EAX]
0065f55d  MOV dword ptr [EBP + -0x74],EDX
0065f560  CMP dword ptr [EBP + -0x74],0x2
0065f564  JNZ 0x0065f5bb
0065f566  MOV EAX,[0x0162ee84]
0065f56b  MOV ECX,dword ptr [EAX + 0x58]
0065f56e  MOV EDX,dword ptr [EBP + -0xc]
0065f571  MOV EAX,dword ptr [ECX + EDX*0x4]
0065f574  MOV dword ptr [EBP + -0x78],EAX
0065f577  PUSH 0x6b27f8
0065f57c  MOV ECX,dword ptr [EBP + -0x78]
0065f57f  CALL 0x0063aac0
0065f584  ADD EAX,0x38
0065f587  PUSH EAX
0065f588  CALL 0x00686d8e
0065f58d  ADD ESP,0x8
0065f590  MOV ECX,dword ptr [EBP + -0x10]
0065f593  MOVSX EDX,byte ptr [ECX + 0x3b]
0065f597  MOV dword ptr [EBP + -0x80],EDX
0065f59a  MOV EAX,[0x0162ee84]
0065f59f  MOV ECX,dword ptr [EAX + 0x58]
0065f5a2  MOV EDX,dword ptr [EBP + -0xc]
0065f5a5  MOV EAX,dword ptr [ECX + EDX*0x4]
0065f5a8  MOV dword ptr [EBP + -0x7c],EAX
0065f5ab  MOV ECX,dword ptr [EBP + -0x7c]
0065f5ae  CALL 0x0063aac0
0065f5b3  MOV ECX,dword ptr [EBP + -0x80]
0065f5b6  MOV dword ptr [EAX + 0x54],ECX
0065f5b9  JMP 0x0065f61b
0065f5bb  MOV EDX,dword ptr [0x0162ee84]
0065f5c1  MOV EAX,dword ptr [EDX + 0x58]
0065f5c4  MOV ECX,dword ptr [EBP + -0xc]
0065f5c7  MOV EDX,dword ptr [EAX + ECX*0x4]
0065f5ca  MOV dword ptr [EBP + 0xffffff7c],EDX
0065f5d0  MOV EAX,dword ptr [EBP + -0x10]
0065f5d3  ADD EAX,0x21
0065f5d6  PUSH EAX
0065f5d7  MOV ECX,dword ptr [EBP + 0xffffff7c]
0065f5dd  CALL 0x0063aac0
0065f5e2  ADD EAX,0x38
0065f5e5  PUSH EAX
0065f5e6  CALL 0x00686d8e
0065f5eb  ADD ESP,0x8
0065f5ee  MOV ECX,dword ptr [0x0162ee84]
0065f5f4  MOV EDX,dword ptr [ECX + 0x58]
0065f5f7  MOV EAX,dword ptr [EBP + -0xc]
0065f5fa  MOV ECX,dword ptr [EDX + EAX*0x4]
0065f5fd  MOV EDX,dword ptr [ECX + 0x20]
0065f600  MOV dword ptr [EBP + 0xffffff78],EDX
0065f606  MOV EAX,dword ptr [EBP + -0x10]
0065f609  ADD EAX,0x21
0065f60c  PUSH EAX
0065f60d  MOV ECX,dword ptr [EBP + 0xffffff78]
0065f613  MOV ECX,dword ptr [ECX + 0x14]
0065f616  CALL 0x00664300
0065f61b  MOV EDX,dword ptr [0x0162ee84]
0065f621  MOV EAX,dword ptr [EDX + 0x58]
0065f624  MOV ECX,dword ptr [EBP + -0xc]
0065f627  MOV EDX,dword ptr [EAX + ECX*0x4]
0065f62a  MOV EAX,dword ptr [EDX + 0x20]
0065f62d  MOV dword ptr [EBP + 0xffffff74],EAX
0065f633  PUSH 0x0
0065f635  PUSH 0x0
0065f637  MOV ECX,dword ptr [EBP + 0xffffff74]
0065f63d  CALL 0x006464d0
0065f642  JMP 0x0065f44f
0065f647  MOV ECX,dword ptr [EBP + -0x8]
0065f64a  PUSH ECX
0065f64b  MOV EDX,dword ptr [0x0162ee80]
0065f651  MOV EAX,dword ptr [EDX + 0x34]
0065f654  MOV ECX,dword ptr [EAX + 0x4]
0065f657  PUSH ECX
0065f658  MOV EDX,dword ptr [0x0162ee80]
0065f65e  MOV EAX,dword ptr [EDX]
0065f660  MOV ECX,dword ptr [0x0162ee80]
0065f666  MOV EDX,dword ptr [EAX + 0x150]
0065f66c  CALL EDX
0065f66e  MOV EAX,[0x0162ee80]
0065f673  MOV dword ptr [EAX + 0x34],0x0
0065f67a  MOV ECX,dword ptr [EBP + -0x8]
0065f67d  MOV dword ptr [EBP + -0x1c],ECX
0065f680  MOV EDX,dword ptr [EBP + -0x1c]
0065f683  MOV dword ptr [EBP + -0x18],EDX
0065f686  CMP dword ptr [EBP + -0x18],0x0
0065f68a  JZ 0x0065f6a2
0065f68c  PUSH 0x1
0065f68e  MOV EAX,dword ptr [EBP + -0x18]
0065f691  MOV EDX,dword ptr [EAX]
0065f693  MOV ECX,dword ptr [EBP + -0x18]
0065f696  MOV EAX,dword ptr [EDX]
0065f698  CALL EAX
0065f69a  MOV dword ptr [EBP + 0xffffff30],EAX
0065f6a0  JMP 0x0065f6ac
0065f6a2  MOV dword ptr [EBP + 0xffffff30],0x0
0065f6ac  JMP 0x0065f8e6
0065f6b6  MOV dword ptr [EBP + -0xc],0x0
0065f6bd  JMP 0x0065f6c8
0065f6bf  MOV ECX,dword ptr [EBP + -0xc]
0065f6c2  ADD ECX,0x1
0065f6c5  MOV dword ptr [EBP + -0xc],ECX
0065f6c8  MOV EDX,dword ptr [0x0162ee84]
0065f6ce  MOV EAX,dword ptr [EDX]
0065f6d0  MOV ECX,dword ptr [0x0162ee84]
0065f6d6  MOV EDX,dword ptr [EAX + 0x10c]
0065f6dc  CALL EDX
0065f6de  CMP dword ptr [EBP + -0xc],EAX
0065f6e1  JGE 0x0065f88c
0065f6e7  MOV EAX,[0x0162ee84]
0065f6ec  MOV ECX,dword ptr [EAX + 0x58]
0065f6ef  MOV EDX,dword ptr [EBP + -0xc]
0065f6f2  MOV EAX,dword ptr [ECX + EDX*0x4]
0065f6f5  MOV dword ptr [EBP + 0xffffff68],EAX
0065f6fb  MOV ECX,dword ptr [EBP + 0xffffff68]
0065f701  CALL 0x0063aac0
0065f706  MOV ECX,dword ptr [EAX]
0065f708  MOV dword ptr [EBP + 0xffffff70],ECX
0065f70e  CMP dword ptr [EBP + 0xffffff70],0x2
0065f715  JZ 0x0065f73f
0065f717  MOV ECX,dword ptr [EBP + 0xffffff68]
0065f71d  CALL 0x0063aac0
0065f722  MOV EDX,dword ptr [EAX]
0065f724  MOV dword ptr [EBP + 0xffffff6c],EDX
0065f72a  CMP dword ptr [EBP + 0xffffff6c],0x3
0065f731  JZ 0x0065f73f
0065f733  MOV dword ptr [EBP + 0xffffff2c],0x0
0065f73d  JMP 0x0065f749
0065f73f  MOV dword ptr [EBP + 0xffffff2c],0x1
0065f749  MOVZX EAX,byte ptr [EBP + 0xffffff2c]
0065f750  TEST EAX,EAX
0065f752  JNZ 0x0065f887
0065f758  MOV ECX,dword ptr [EBP + -0x14]
0065f75b  PUSH ECX
0065f75c  MOV EDX,dword ptr [0x0162ee84]
0065f762  MOV EAX,dword ptr [EDX + 0x58]
0065f765  MOV ECX,dword ptr [EBP + -0xc]
0065f768  MOV ECX,dword ptr [EAX + ECX*0x4]
0065f76b  CALL 0x0063ab10
0065f770  MOV EDX,dword ptr [EBP + -0x10]
0065f773  MOVSX EAX,byte ptr [EDX + 0x3a]
0065f777  MOV dword ptr [EBP + 0xffffff60],EAX
0065f77d  MOV ECX,dword ptr [0x0162ee84]
0065f783  MOV EDX,dword ptr [ECX + 0x58]
0065f786  MOV EAX,dword ptr [EBP + -0xc]
0065f789  MOV ECX,dword ptr [EDX + EAX*0x4]
0065f78c  MOV dword ptr [EBP + 0xffffff64],ECX
0065f792  MOV ECX,dword ptr [EBP + 0xffffff64]
0065f798  CALL 0x0063aac0
0065f79d  MOV EDX,dword ptr [EBP + 0xffffff60]
0065f7a3  MOV dword ptr [EAX],EDX
0065f7a5  MOV EAX,[0x0162ee84]
0065f7aa  MOV ECX,dword ptr [EAX + 0x58]
0065f7ad  MOV EDX,dword ptr [EBP + -0xc]
0065f7b0  MOV EAX,dword ptr [ECX + EDX*0x4]
0065f7b3  MOV dword ptr [EBP + 0xffffff5c],EAX
0065f7b9  MOV ECX,dword ptr [EBP + 0xffffff5c]
0065f7bf  CALL 0x0063aac0
0065f7c4  MOV ECX,dword ptr [EAX]
0065f7c6  MOV dword ptr [EBP + 0xffffff58],ECX
0065f7cc  CMP dword ptr [EBP + 0xffffff58],0x2
0065f7d3  JNZ 0x0065f83e
0065f7d5  MOV EDX,dword ptr [0x0162ee84]
0065f7db  MOV EAX,dword ptr [EDX + 0x58]
0065f7de  MOV ECX,dword ptr [EBP + -0xc]
0065f7e1  MOV EDX,dword ptr [EAX + ECX*0x4]
0065f7e4  MOV dword ptr [EBP + 0xffffff54],EDX
0065f7ea  PUSH 0x6b27f8
0065f7ef  MOV ECX,dword ptr [EBP + 0xffffff54]
0065f7f5  CALL 0x0063aac0
0065f7fa  ADD EAX,0x38
0065f7fd  PUSH EAX
0065f7fe  CALL 0x00686d8e
0065f803  ADD ESP,0x8
0065f806  MOV EAX,dword ptr [EBP + -0x10]
0065f809  MOVSX ECX,byte ptr [EAX + 0x3b]
0065f80d  MOV dword ptr [EBP + 0xffffff4c],ECX
0065f813  MOV EDX,dword ptr [0x0162ee84]
0065f819  MOV EAX,dword ptr [EDX + 0x58]
0065f81c  MOV ECX,dword ptr [EBP + -0xc]
0065f81f  MOV EDX,dword ptr [EAX + ECX*0x4]
0065f822  MOV dword ptr [EBP + 0xffffff50],EDX
0065f828  MOV ECX,dword ptr [EBP + 0xffffff50]
0065f82e  CALL 0x0063aac0
0065f833  MOV ECX,dword ptr [EBP + 0xffffff4c]
0065f839  MOV dword ptr [EAX + 0x54],ECX
0065f83c  JMP 0x0065f871
0065f83e  MOV EDX,dword ptr [0x0162ee84]
0065f844  MOV EAX,dword ptr [EDX + 0x58]
0065f847  MOV ECX,dword ptr [EBP + -0xc]
0065f84a  MOV EDX,dword ptr [EAX + ECX*0x4]
0065f84d  MOV dword ptr [EBP + 0xffffff48],EDX
0065f853  MOV EAX,dword ptr [EBP + -0x10]
0065f856  ADD EAX,0x21
0065f859  PUSH EAX
0065f85a  MOV ECX,dword ptr [EBP + 0xffffff48]
0065f860  CALL 0x0063aac0
0065f865  ADD EAX,0x38
0065f868  PUSH EAX
0065f869  CALL 0x00686d8e
0065f86e  ADD ESP,0x8
0065f871  MOV ECX,dword ptr [0x0162ee84]
0065f877  MOV EDX,dword ptr [ECX + 0x58]
0065f87a  MOV EAX,dword ptr [EBP + -0xc]
0065f87d  MOV ECX,dword ptr [EDX + EAX*0x4]
0065f880  CALL 0x0063b0a0
0065f885  JMP 0x0065f8e6
0065f887  JMP 0x0065f6bf
0065f88c  MOV ECX,dword ptr [EBP + 0xffffff3c]
0065f892  MOVZX EDX,byte ptr [ECX + 0x1d5]
0065f899  TEST EDX,EDX
0065f89b  JZ 0x0065f8e6
0065f89d  MOV ECX,dword ptr [0x0162ee84]
0065f8a3  CALL 0x006375b0
0065f8a8  MOV dword ptr [EBP + 0xffffff44],EAX
0065f8ae  MOV ECX,dword ptr [EBP + 0xffffff44]
0065f8b4  CALL 0x0063aac0
0065f8b9  ADD EAX,0x4
0065f8bc  MOV dword ptr [EBP + 0xffffff40],EAX
0065f8c2  MOV EAX,dword ptr [EBP + 0xffffff40]
0065f8c8  PUSH EAX
0065f8c9  PUSH 0x6dec9c
0065f8ce  MOV ECX,dword ptr [0x007960d8]
0065f8d4  MOV EDX,dword ptr [ECX + 0x14]
0065f8d7  MOV EAX,[0x007960d8]
0065f8dc  MOV ECX,dword ptr [EAX + 0x14]
0065f8df  MOV EDX,dword ptr [EDX]
0065f8e1  MOV EAX,dword ptr [EDX + 0x14]
0065f8e4  CALL EAX
0065f8e6  MOV ESP,EBP
0065f8e8  POP EBP
0065f8e9  RET 0x4
