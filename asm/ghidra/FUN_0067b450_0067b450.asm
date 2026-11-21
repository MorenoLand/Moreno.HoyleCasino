; FUN_0067b450  0067b450
0067b450  PUSH EBP
0067b451  MOV EBP,ESP
0067b453  PUSH -0x1
0067b455  PUSH 0x6ad98f
0067b45a  MOV EAX,FS:[0x0]
0067b460  PUSH EAX
0067b461  SUB ESP,0xa8
0067b467  MOV EAX,[0x00781870]
0067b46c  XOR EAX,EBP
0067b46e  PUSH EAX
0067b46f  LEA EAX,[EBP + -0xc]
0067b472  MOV FS:[0x0],EAX
0067b478  MOV dword ptr [EBP + -0x7c],ECX
0067b47b  PUSH 0x0
0067b47d  PUSH 0x1f57
0067b482  PUSH 0x20564157
0067b487  MOV EAX,[0x007960d8]
0067b48c  MOV ECX,dword ptr [EAX + 0x18]
0067b48f  CALL 0x006044b0
0067b494  PUSH 0x0
0067b496  PUSH 0x1f58
0067b49b  PUSH 0x20564157
0067b4a0  MOV ECX,dword ptr [0x007960d8]
0067b4a6  MOV ECX,dword ptr [ECX + 0x18]
0067b4a9  CALL 0x006044b0
0067b4ae  MOV dword ptr [EBP + -0x10],0x0
0067b4b5  JMP 0x0067b4c0
0067b4b7  MOV EDX,dword ptr [EBP + -0x10]
0067b4ba  ADD EDX,0x1
0067b4bd  MOV dword ptr [EBP + -0x10],EDX
0067b4c0  CMP dword ptr [EBP + -0x10],0x3
0067b4c4  JGE 0x0067b4e6
0067b4c6  PUSH 0x0
0067b4c8  MOV EAX,dword ptr [EBP + -0x10]
0067b4cb  ADD EAX,0x249f2d
0067b4d0  PUSH EAX
0067b4d1  PUSH 0x20584554
0067b4d6  MOV ECX,dword ptr [0x007960d8]
0067b4dc  MOV ECX,dword ptr [ECX + 0x18]
0067b4df  CALL 0x006044b0
0067b4e4  JMP 0x0067b4b7
0067b4e6  PUSH 0x0
0067b4e8  PUSH 0x249f2c
0067b4ed  PUSH 0x20584554
0067b4f2  MOV EDX,dword ptr [0x007960d8]
0067b4f8  MOV ECX,dword ptr [EDX + 0x18]
0067b4fb  CALL 0x006044b0
0067b500  MOV EAX,dword ptr [EBP + 0x8]
0067b503  MOV dword ptr [EBP + -0x80],EAX
0067b506  CMP dword ptr [EBP + -0x80],0x32
0067b50a  JA 0x0067bec2
0067b510  MOV ECX,dword ptr [EBP + -0x80]
0067b513  MOVZX EDX,byte ptr [ECX + 0x67bf08]
0067b51a  JMP dword ptr [EDX*0x4 + 0x67bed4]
0067b521  MOV word ptr [0x016306e4],0x0
0067b52a  PUSH 0x190
0067b52f  CALL 0x00686d82
0067b534  ADD ESP,0x4
0067b537  MOV dword ptr [EBP + -0x18],EAX
0067b53a  MOV dword ptr [EBP + -0x4],0x0
0067b541  CMP dword ptr [EBP + -0x18],0x0
0067b545  JZ 0x0067b557
0067b547  MOV ECX,dword ptr [EBP + -0x18]
0067b54a  CALL 0x005f5f50
0067b54f  MOV dword ptr [EBP + 0xffffff7c],EAX
0067b555  JMP 0x0067b561
0067b557  MOV dword ptr [EBP + 0xffffff7c],0x0
0067b561  MOV EAX,dword ptr [EBP + 0xffffff7c]
0067b567  MOV dword ptr [EBP + -0x14],EAX
0067b56a  MOV dword ptr [EBP + -0x4],0xffffffff
0067b571  MOV ECX,dword ptr [EBP + -0x7c]
0067b574  MOV EDX,dword ptr [EBP + -0x14]
0067b577  MOV dword ptr [ECX + 0x240],EDX
0067b57d  MOV EAX,dword ptr [EBP + -0x7c]
0067b580  MOV ECX,dword ptr [EAX + 0x240]
0067b586  MOV EDX,dword ptr [EBP + -0x7c]
0067b589  MOV EAX,dword ptr [EDX + 0x4]
0067b58c  MOV dword ptr [ECX + 0x4],EAX
0067b58f  PUSH 0x249f2c
0067b594  MOV ECX,dword ptr [EBP + -0x7c]
0067b597  MOV ECX,dword ptr [ECX + 0x240]
0067b59d  CALL 0x005eaf00
0067b5a2  MOV EDX,dword ptr [EBP + -0x7c]
0067b5a5  MOV EAX,dword ptr [EDX + 0x240]
0067b5ab  MOV ECX,dword ptr [EBP + -0x7c]
0067b5ae  MOV ECX,dword ptr [ECX + 0x240]
0067b5b4  MOV EDX,dword ptr [EAX]
0067b5b6  MOV EAX,dword ptr [EDX + 0x40]
0067b5b9  CALL EAX
0067b5bb  PUSH 0x0
0067b5bd  PUSH 0xea60
0067b5c2  PUSH 0x95
0067b5c7  PUSH 0x0
0067b5c9  PUSH 0x249f2c
0067b5ce  MOV ECX,dword ptr [EBP + -0x7c]
0067b5d1  MOV ECX,dword ptr [ECX + 0x240]
0067b5d7  CALL 0x005eae80
0067b5dc  MOV EDX,dword ptr [EBP + -0x7c]
0067b5df  MOV EAX,dword ptr [EDX + 0x240]
0067b5e5  MOV ECX,dword ptr [EBP + -0x7c]
0067b5e8  MOV ECX,dword ptr [ECX + 0x240]
0067b5ee  MOV EDX,dword ptr [EAX]
0067b5f0  MOV EAX,dword ptr [EDX + 0x74]
0067b5f3  CALL EAX
0067b5f5  MOV ECX,dword ptr [EBP + -0x7c]
0067b5f8  MOV EDX,dword ptr [ECX + 0x240]
0067b5fe  MOV dword ptr [EDX + 0x184],0x3
0067b608  MOV EAX,dword ptr [EBP + -0x7c]
0067b60b  MOV ECX,dword ptr [EAX + 0x240]
0067b611  MOV dword ptr [ECX + 0x188],0xa
0067b61b  MOV dword ptr [EBP + -0x10],0x0
0067b622  JMP 0x0067b62d
0067b624  MOV EDX,dword ptr [EBP + -0x10]
0067b627  ADD EDX,0x1
0067b62a  MOV dword ptr [EBP + -0x10],EDX
0067b62d  CMP dword ptr [EBP + -0x10],0x3
0067b631  JGE 0x0067b713
0067b637  PUSH 0x190
0067b63c  CALL 0x00686d82
0067b641  ADD ESP,0x4
0067b644  MOV dword ptr [EBP + -0x20],EAX
0067b647  MOV dword ptr [EBP + -0x4],0x1
0067b64e  CMP dword ptr [EBP + -0x20],0x0
0067b652  JZ 0x0067b664
0067b654  MOV ECX,dword ptr [EBP + -0x20]
0067b657  CALL 0x005f5f50
0067b65c  MOV dword ptr [EBP + 0xffffff78],EAX
0067b662  JMP 0x0067b66e
0067b664  MOV dword ptr [EBP + 0xffffff78],0x0
0067b66e  MOV EAX,dword ptr [EBP + 0xffffff78]
0067b674  MOV dword ptr [EBP + -0x1c],EAX
0067b677  MOV dword ptr [EBP + -0x4],0xffffffff
0067b67e  MOV ECX,dword ptr [EBP + -0x10]
0067b681  MOV EDX,dword ptr [EBP + -0x7c]
0067b684  MOV EAX,dword ptr [EBP + -0x1c]
0067b687  MOV dword ptr [EDX + ECX*0x4 + 0x234],EAX
0067b68e  MOV ECX,dword ptr [EBP + -0x10]
0067b691  MOV EDX,dword ptr [EBP + -0x7c]
0067b694  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x234]
0067b69b  MOV ECX,dword ptr [EBP + -0x7c]
0067b69e  MOV EDX,dword ptr [ECX + 0x4]
0067b6a1  MOV dword ptr [EAX + 0x4],EDX
0067b6a4  MOV EAX,dword ptr [EBP + -0x10]
0067b6a7  ADD EAX,0x249f2d
0067b6ac  PUSH EAX
0067b6ad  MOV ECX,dword ptr [EBP + -0x10]
0067b6b0  MOV EDX,dword ptr [EBP + -0x7c]
0067b6b3  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x234]
0067b6ba  CALL 0x005eaf00
0067b6bf  MOV EAX,dword ptr [EBP + -0x10]
0067b6c2  MOV ECX,dword ptr [EBP + -0x7c]
0067b6c5  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x234]
0067b6cc  MOV EAX,dword ptr [EBP + -0x10]
0067b6cf  MOV ECX,dword ptr [EBP + -0x7c]
0067b6d2  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x234]
0067b6d9  MOV EDX,dword ptr [EDX]
0067b6db  MOV EAX,dword ptr [EDX + 0x40]
0067b6de  CALL EAX
0067b6e0  MOV ECX,dword ptr [EBP + -0x10]
0067b6e3  MOV EDX,dword ptr [EBP + -0x7c]
0067b6e6  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x234]
0067b6ed  MOV dword ptr [EAX + 0x184],0x3
0067b6f7  MOV ECX,dword ptr [EBP + -0x10]
0067b6fa  MOV EDX,dword ptr [EBP + -0x7c]
0067b6fd  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x234]
0067b704  MOV dword ptr [EAX + 0x188],0x3
0067b70e  JMP 0x0067b624
0067b713  PUSH 0x0
0067b715  PUSH 0xea60
0067b71a  PUSH -0x2b
0067b71c  PUSH 0x0
0067b71e  PUSH 0x249f2d
0067b723  MOV ECX,dword ptr [EBP + -0x7c]
0067b726  MOV ECX,dword ptr [ECX + 0x234]
0067b72c  CALL 0x005eae80
0067b731  PUSH 0x0
0067b733  PUSH 0xe678
0067b738  PUSH 0x0
0067b73a  PUSH -0x2b
0067b73c  PUSH 0x249f2e
0067b741  MOV EDX,dword ptr [EBP + -0x7c]
0067b744  MOV ECX,dword ptr [EDX + 0x238]
0067b74a  CALL 0x005eae80
0067b74f  PUSH 0x0
0067b751  PUSH 0xe678
0067b756  PUSH 0x0
0067b758  PUSH 0x2b
0067b75a  PUSH 0x249f2f
0067b75f  MOV EAX,dword ptr [EBP + -0x7c]
0067b762  MOV ECX,dword ptr [EAX + 0x23c]
0067b768  CALL 0x005eae80
0067b76d  MOV dword ptr [EBP + -0x10],0x0
0067b774  JMP 0x0067b77f
0067b776  MOV ECX,dword ptr [EBP + -0x10]
0067b779  ADD ECX,0x1
0067b77c  MOV dword ptr [EBP + -0x10],ECX
0067b77f  CMP dword ptr [EBP + -0x10],0x3
0067b783  JGE 0x0067b7aa
0067b785  MOV EDX,dword ptr [EBP + -0x10]
0067b788  MOV EAX,dword ptr [EBP + -0x7c]
0067b78b  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x234]
0067b792  MOV EDX,dword ptr [EBP + -0x10]
0067b795  MOV EAX,dword ptr [EBP + -0x7c]
0067b798  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x234]
0067b79f  MOV EAX,dword ptr [ECX]
0067b7a1  MOV ECX,EDX
0067b7a3  MOV EDX,dword ptr [EAX + 0x74]
0067b7a6  CALL EDX
0067b7a8  JMP 0x0067b776
0067b7aa  PUSH 0x0
0067b7ac  PUSH ECX
0067b7ad  FLD float ptr [0x006b3654]
0067b7b3  FSTP float ptr [ESP]
0067b7b6  PUSH ECX
0067b7b7  FLD1
0067b7b9  FSTP float ptr [ESP]
0067b7bc  PUSH 0x1
0067b7be  PUSH 0x5
0067b7c0  PUSH 0x0
0067b7c2  PUSH 0x0
0067b7c4  MOV EAX,dword ptr [EBP + -0x7c]
0067b7c7  MOV ECX,dword ptr [EAX + 0x2a0]
0067b7cd  PUSH ECX
0067b7ce  MOV EDX,dword ptr [0x0162ee84]
0067b7d4  MOV EAX,dword ptr [EDX]
0067b7d6  MOV ECX,dword ptr [0x0162ee84]
0067b7dc  MOV EDX,dword ptr [EAX + 0x80]
0067b7e2  CALL EDX
0067b7e4  PUSH 0x1e
0067b7e6  PUSH 0x1
0067b7e8  MOV EAX,dword ptr [EBP + -0x7c]
0067b7eb  MOV ECX,dword ptr [EAX + 0x17c]
0067b7f1  MOV EDX,dword ptr [EBP + -0x7c]
0067b7f4  MOV EAX,dword ptr [EDX + 0x17c]
0067b7fa  MOV EDX,dword ptr [ECX]
0067b7fc  MOV ECX,EAX
0067b7fe  MOV EAX,dword ptr [EDX + 0x8]
0067b801  CALL EAX
0067b803  JMP 0x0067bec2
0067b808  PUSH 0x2c
0067b80a  CALL 0x00686d82
0067b80f  ADD ESP,0x4
0067b812  MOV dword ptr [EBP + -0x28],EAX
0067b815  MOV dword ptr [EBP + -0x4],0x2
0067b81c  CMP dword ptr [EBP + -0x28],0x0
0067b820  JZ 0x0067b83a
0067b822  PUSH 0x0
0067b824  PUSH 0x0
0067b826  PUSH 0x0
0067b828  PUSH 0x0
0067b82a  MOV ECX,dword ptr [EBP + -0x28]
0067b82d  CALL 0x00606e60
0067b832  MOV dword ptr [EBP + 0xffffff74],EAX
0067b838  JMP 0x0067b844
0067b83a  MOV dword ptr [EBP + 0xffffff74],0x0
0067b844  MOV ECX,dword ptr [EBP + 0xffffff74]
0067b84a  MOV dword ptr [EBP + -0x24],ECX
0067b84d  MOV dword ptr [EBP + -0x4],0xffffffff
0067b854  MOV EDX,dword ptr [EBP + -0x24]
0067b857  PUSH EDX
0067b858  MOV EAX,dword ptr [EBP + -0x7c]
0067b85b  MOV ECX,dword ptr [EAX + 0x240]
0067b861  CALL 0x005f6050
0067b866  PUSH 0x2c
0067b868  CALL 0x00686d82
0067b86d  ADD ESP,0x4
0067b870  MOV dword ptr [EBP + -0x30],EAX
0067b873  MOV dword ptr [EBP + -0x4],0x3
0067b87a  CMP dword ptr [EBP + -0x30],0x0
0067b87e  JZ 0x0067b898
0067b880  PUSH 0x0
0067b882  PUSH 0x0
0067b884  PUSH 0x0
0067b886  PUSH 0x0
0067b888  MOV ECX,dword ptr [EBP + -0x30]
0067b88b  CALL 0x00606e60
0067b890  MOV dword ptr [EBP + 0xffffff70],EAX
0067b896  JMP 0x0067b8a2
0067b898  MOV dword ptr [EBP + 0xffffff70],0x0
0067b8a2  MOV ECX,dword ptr [EBP + 0xffffff70]
0067b8a8  MOV dword ptr [EBP + -0x2c],ECX
0067b8ab  MOV dword ptr [EBP + -0x4],0xffffffff
0067b8b2  MOV EDX,dword ptr [EBP + -0x2c]
0067b8b5  PUSH EDX
0067b8b6  MOV EAX,dword ptr [EBP + -0x7c]
0067b8b9  MOV ECX,dword ptr [EAX + 0x234]
0067b8bf  CALL 0x005f6050
0067b8c4  PUSH 0x2c
0067b8c6  CALL 0x00686d82
0067b8cb  ADD ESP,0x4
0067b8ce  MOV dword ptr [EBP + -0x38],EAX
0067b8d1  MOV dword ptr [EBP + -0x4],0x4
0067b8d8  CMP dword ptr [EBP + -0x38],0x0
0067b8dc  JZ 0x0067b8f6
0067b8de  PUSH 0x0
0067b8e0  PUSH 0x0
0067b8e2  PUSH 0x0
0067b8e4  PUSH 0x0
0067b8e6  MOV ECX,dword ptr [EBP + -0x38]
0067b8e9  CALL 0x00606e60
0067b8ee  MOV dword ptr [EBP + 0xffffff6c],EAX
0067b8f4  JMP 0x0067b900
0067b8f6  MOV dword ptr [EBP + 0xffffff6c],0x0
0067b900  MOV ECX,dword ptr [EBP + 0xffffff6c]
0067b906  MOV dword ptr [EBP + -0x34],ECX
0067b909  MOV dword ptr [EBP + -0x4],0xffffffff
0067b910  MOV EDX,dword ptr [EBP + -0x34]
0067b913  PUSH EDX
0067b914  MOV EAX,dword ptr [EBP + -0x7c]
0067b917  MOV ECX,dword ptr [EAX + 0x238]
0067b91d  CALL 0x005f6050
0067b922  PUSH 0x2c
0067b924  CALL 0x00686d82
0067b929  ADD ESP,0x4
0067b92c  MOV dword ptr [EBP + -0x40],EAX
0067b92f  MOV dword ptr [EBP + -0x4],0x5
0067b936  CMP dword ptr [EBP + -0x40],0x0
0067b93a  JZ 0x0067b954
0067b93c  PUSH 0x0
0067b93e  PUSH 0x0
0067b940  PUSH 0x0
0067b942  PUSH 0x0
0067b944  MOV ECX,dword ptr [EBP + -0x40]
0067b947  CALL 0x00606e60
0067b94c  MOV dword ptr [EBP + 0xffffff68],EAX
0067b952  JMP 0x0067b95e
0067b954  MOV dword ptr [EBP + 0xffffff68],0x0
0067b95e  MOV ECX,dword ptr [EBP + 0xffffff68]
0067b964  MOV dword ptr [EBP + -0x3c],ECX
0067b967  MOV dword ptr [EBP + -0x4],0xffffffff
0067b96e  MOV EDX,dword ptr [EBP + -0x3c]
0067b971  PUSH EDX
0067b972  MOV EAX,dword ptr [EBP + -0x7c]
0067b975  MOV ECX,dword ptr [EAX + 0x23c]
0067b97b  CALL 0x005f6050
0067b980  PUSH 0x5a
0067b982  PUSH 0x2
0067b984  MOV ECX,dword ptr [EBP + -0x7c]
0067b987  MOV EDX,dword ptr [ECX + 0x17c]
0067b98d  MOV EAX,dword ptr [EBP + -0x7c]
0067b990  MOV ECX,dword ptr [EAX + 0x17c]
0067b996  MOV EDX,dword ptr [EDX]
0067b998  MOV EAX,dword ptr [EDX + 0x8]
0067b99b  CALL EAX
0067b99d  JMP 0x0067bec2
0067b9a2  PUSH 0x0
0067b9a4  PUSH ECX
0067b9a5  FLD float ptr [0x006b3654]
0067b9ab  FSTP float ptr [ESP]
0067b9ae  PUSH ECX
0067b9af  FLD1
0067b9b1  FSTP float ptr [ESP]
0067b9b4  PUSH 0x1
0067b9b6  PUSH 0x5
0067b9b8  PUSH 0x0
0067b9ba  PUSH 0x0
0067b9bc  PUSH 0x1f58
0067b9c1  MOV ECX,dword ptr [0x0162ee84]
0067b9c7  MOV EDX,dword ptr [ECX]
0067b9c9  MOV ECX,dword ptr [0x0162ee84]
0067b9cf  MOV EAX,dword ptr [EDX + 0x80]
0067b9d5  CALL EAX
0067b9d7  PUSH 0x20
0067b9d9  CALL 0x00686d82
0067b9de  ADD ESP,0x4
0067b9e1  MOV dword ptr [EBP + -0x48],EAX
0067b9e4  MOV dword ptr [EBP + -0x4],0x6
0067b9eb  CMP dword ptr [EBP + -0x48],0x0
0067b9ef  JZ 0x0067ba0d
0067b9f1  MOV ECX,dword ptr [EBP + -0x7c]
0067b9f4  MOV EDX,dword ptr [ECX + 0x17c]
0067b9fa  PUSH EDX
0067b9fb  PUSH 0x3
0067b9fd  MOV ECX,dword ptr [EBP + -0x48]
0067ba00  CALL 0x00600f30
0067ba05  MOV dword ptr [EBP + 0xffffff64],EAX
0067ba0b  JMP 0x0067ba17
0067ba0d  MOV dword ptr [EBP + 0xffffff64],0x0
0067ba17  MOV EAX,dword ptr [EBP + 0xffffff64]
0067ba1d  MOV dword ptr [EBP + -0x44],EAX
0067ba20  MOV dword ptr [EBP + -0x4],0xffffffff
0067ba27  MOV ECX,dword ptr [EBP + -0x44]
0067ba2a  PUSH ECX
0067ba2b  MOV EDX,dword ptr [EBP + -0x7c]
0067ba2e  MOV ECX,dword ptr [EDX + 0x240]
0067ba34  CALL 0x005f5d50
0067ba39  PUSH 0x1e
0067ba3b  MOV EAX,dword ptr [EBP + -0x7c]
0067ba3e  MOV ECX,dword ptr [EAX + 0x17c]
0067ba44  MOV EDX,dword ptr [EBP + -0x7c]
0067ba47  MOV EAX,dword ptr [EDX + 0x17c]
0067ba4d  MOV EDX,dword ptr [ECX]
0067ba4f  MOV ECX,EAX
0067ba51  MOV EAX,dword ptr [EDX + 0x4]
0067ba54  CALL EAX
0067ba56  JMP 0x0067bec2
0067ba5b  PUSH 0x0
0067ba5d  MOV ECX,dword ptr [EBP + -0x7c]
0067ba60  MOV ECX,dword ptr [ECX + 0x240]
0067ba66  CALL 0x005f5d50
0067ba6b  PUSH 0x4
0067ba6d  MOV EDX,dword ptr [EBP + -0x7c]
0067ba70  MOV EAX,dword ptr [EDX + 0x240]
0067ba76  MOV ECX,dword ptr [EBP + -0x7c]
0067ba79  MOV ECX,dword ptr [ECX + 0x240]
0067ba7f  MOV EDX,dword ptr [EAX]
0067ba81  MOV EAX,dword ptr [EDX + 0xb0]
0067ba87  CALL EAX
0067ba89  PUSH 0xa
0067ba8b  PUSH 0x28
0067ba8d  MOV ECX,dword ptr [EBP + -0x7c]
0067ba90  MOV EDX,dword ptr [ECX + 0x17c]
0067ba96  MOV EAX,dword ptr [EBP + -0x7c]
0067ba99  MOV ECX,dword ptr [EAX + 0x17c]
0067ba9f  MOV EDX,dword ptr [EDX]
0067baa1  MOV EAX,dword ptr [EDX + 0x8]
0067baa4  CALL EAX
0067baa6  JMP 0x0067bec2
0067baab  MOVSX ECX,word ptr [0x016306e4]
0067bab2  MOV DX,word ptr [0x016306e4]
0067bab9  ADD DX,0x1
0067babd  MOV word ptr [0x016306e4],DX
0067bac4  CMP ECX,0x4
0067bac7  JNZ 0x0067baea
0067bac9  PUSH 0x0
0067bacb  PUSH 0x32
0067bacd  MOV EAX,dword ptr [EBP + -0x7c]
0067bad0  MOV ECX,dword ptr [EAX + 0x17c]
0067bad6  MOV EDX,dword ptr [EBP + -0x7c]
0067bad9  MOV EAX,dword ptr [EDX + 0x17c]
0067badf  MOV EDX,dword ptr [ECX]
0067bae1  MOV ECX,EAX
0067bae3  MOV EAX,dword ptr [EDX + 0x8]
0067bae6  CALL EAX
0067bae8  JMP 0x0067bb25
0067baea  PUSH 0x5
0067baec  MOV ECX,dword ptr [EBP + -0x7c]
0067baef  MOV EDX,dword ptr [ECX + 0x240]
0067baf5  MOV EAX,dword ptr [EBP + -0x7c]
0067baf8  MOV ECX,dword ptr [EAX + 0x240]
0067bafe  MOV EDX,dword ptr [EDX]
0067bb00  MOV EAX,dword ptr [EDX + 0xb0]
0067bb06  CALL EAX
0067bb08  PUSH 0xa
0067bb0a  PUSH 0x1e
0067bb0c  MOV ECX,dword ptr [EBP + -0x7c]
0067bb0f  MOV EDX,dword ptr [ECX + 0x17c]
0067bb15  MOV EAX,dword ptr [EBP + -0x7c]
0067bb18  MOV ECX,dword ptr [EAX + 0x17c]
0067bb1e  MOV EDX,dword ptr [EDX]
0067bb20  MOV EAX,dword ptr [EDX + 0x8]
0067bb23  CALL EAX
0067bb25  JMP 0x0067bec2
0067bb2a  PUSH 0x20
0067bb2c  CALL 0x00686d82
0067bb31  ADD ESP,0x4
0067bb34  MOV dword ptr [EBP + -0x50],EAX
0067bb37  MOV dword ptr [EBP + -0x4],0x7
0067bb3e  CMP dword ptr [EBP + -0x50],0x0
0067bb42  JZ 0x0067bb60
0067bb44  MOV ECX,dword ptr [EBP + -0x7c]
0067bb47  MOV EDX,dword ptr [ECX + 0x17c]
0067bb4d  PUSH EDX
0067bb4e  PUSH 0x6
0067bb50  MOV ECX,dword ptr [EBP + -0x50]
0067bb53  CALL 0x00600f30
0067bb58  MOV dword ptr [EBP + 0xffffff60],EAX
0067bb5e  JMP 0x0067bb6a
0067bb60  MOV dword ptr [EBP + 0xffffff60],0x0
0067bb6a  MOV EAX,dword ptr [EBP + 0xffffff60]
0067bb70  MOV dword ptr [EBP + -0x4c],EAX
0067bb73  MOV dword ptr [EBP + -0x4],0xffffffff
0067bb7a  MOV ECX,dword ptr [EBP + -0x4c]
0067bb7d  PUSH ECX
0067bb7e  MOV EDX,dword ptr [EBP + -0x7c]
0067bb81  MOV ECX,dword ptr [EDX + 0x240]
0067bb87  CALL 0x005f5d50
0067bb8c  PUSH 0x3
0067bb8e  MOV EAX,dword ptr [EBP + -0x7c]
0067bb91  MOV ECX,dword ptr [EAX + 0x17c]
0067bb97  MOV EDX,dword ptr [EBP + -0x7c]
0067bb9a  MOV EAX,dword ptr [EDX + 0x17c]
0067bba0  MOV EDX,dword ptr [ECX]
0067bba2  MOV ECX,EAX
0067bba4  MOV EAX,dword ptr [EDX + 0x4]
0067bba7  CALL EAX
0067bba9  PUSH 0x0
0067bbab  MOV ECX,dword ptr [EBP + -0x7c]
0067bbae  MOV ECX,dword ptr [ECX + 0x240]
0067bbb4  CALL 0x005f5d50
0067bbb9  PUSH 0x7
0067bbbb  MOV EDX,dword ptr [EBP + -0x7c]
0067bbbe  MOV EAX,dword ptr [EDX + 0x240]
0067bbc4  MOV ECX,dword ptr [EBP + -0x7c]
0067bbc7  MOV ECX,dword ptr [ECX + 0x240]
0067bbcd  MOV EDX,dword ptr [EAX]
0067bbcf  MOV EAX,dword ptr [EDX + 0xb0]
0067bbd5  CALL EAX
0067bbd7  PUSH 0xa
0067bbd9  PUSH 0x4
0067bbdb  MOV ECX,dword ptr [EBP + -0x7c]
0067bbde  MOV EDX,dword ptr [ECX + 0x17c]
0067bbe4  MOV EAX,dword ptr [EBP + -0x7c]
0067bbe7  MOV ECX,dword ptr [EAX + 0x17c]
0067bbed  MOV EDX,dword ptr [EDX]
0067bbef  MOV EAX,dword ptr [EDX + 0x8]
0067bbf2  CALL EAX
0067bbf4  JMP 0x0067bec2
0067bbf9  MOVSX ECX,word ptr [0x016306e4]
0067bc00  MOV DX,word ptr [0x016306e4]
0067bc07  ADD DX,0x1
0067bc0b  MOV word ptr [0x016306e4],DX
0067bc12  CMP ECX,0xd
0067bc15  JNZ 0x0067bc38
0067bc17  PUSH 0x0
0067bc19  PUSH 0x5
0067bc1b  MOV EAX,dword ptr [EBP + -0x7c]
0067bc1e  MOV ECX,dword ptr [EAX + 0x17c]
0067bc24  MOV EDX,dword ptr [EBP + -0x7c]
0067bc27  MOV EAX,dword ptr [EDX + 0x17c]
0067bc2d  MOV EDX,dword ptr [ECX]
0067bc2f  MOV ECX,EAX
0067bc31  MOV EAX,dword ptr [EDX + 0x8]
0067bc34  CALL EAX
0067bc36  JMP 0x0067bc73
0067bc38  PUSH 0x8
0067bc3a  MOV ECX,dword ptr [EBP + -0x7c]
0067bc3d  MOV EDX,dword ptr [ECX + 0x240]
0067bc43  MOV EAX,dword ptr [EBP + -0x7c]
0067bc46  MOV ECX,dword ptr [EAX + 0x240]
0067bc4c  MOV EDX,dword ptr [EDX]
0067bc4e  MOV EAX,dword ptr [EDX + 0xb0]
0067bc54  CALL EAX
0067bc56  PUSH 0xa
0067bc58  PUSH 0x3
0067bc5a  MOV ECX,dword ptr [EBP + -0x7c]
0067bc5d  MOV EDX,dword ptr [ECX + 0x17c]
0067bc63  MOV EAX,dword ptr [EBP + -0x7c]
0067bc66  MOV ECX,dword ptr [EAX + 0x17c]
0067bc6c  MOV EDX,dword ptr [EDX]
0067bc6e  MOV EAX,dword ptr [EDX + 0x8]
0067bc71  CALL EAX
0067bc73  JMP 0x0067bec2
0067bc78  PUSH 0x20
0067bc7a  CALL 0x00686d82
0067bc7f  ADD ESP,0x4
0067bc82  MOV dword ptr [EBP + -0x58],EAX
0067bc85  MOV dword ptr [EBP + -0x4],0x8
0067bc8c  CMP dword ptr [EBP + -0x58],0x0
0067bc90  JZ 0x0067bcac
0067bc92  MOV ECX,dword ptr [EBP + -0x7c]
0067bc95  MOV EDX,dword ptr [ECX + 0x17c]
0067bc9b  PUSH EDX
0067bc9c  MOV ECX,dword ptr [EBP + -0x58]
0067bc9f  CALL 0x00600f90
0067bca4  MOV dword ptr [EBP + 0xffffff5c],EAX
0067bcaa  JMP 0x0067bcb6
0067bcac  MOV dword ptr [EBP + 0xffffff5c],0x0
0067bcb6  MOV EAX,dword ptr [EBP + 0xffffff5c]
0067bcbc  MOV dword ptr [EBP + -0x54],EAX
0067bcbf  MOV dword ptr [EBP + -0x4],0xffffffff
0067bcc6  MOV ECX,dword ptr [EBP + -0x54]
0067bcc9  PUSH ECX
0067bcca  MOV EDX,dword ptr [EBP + -0x7c]
0067bccd  MOV ECX,dword ptr [EDX + 0x240]
0067bcd3  CALL 0x005f5d50
0067bcd8  PUSH 0x1e
0067bcda  PUSH 0x6
0067bcdc  MOV EAX,dword ptr [EBP + -0x7c]
0067bcdf  MOV ECX,dword ptr [EAX + 0x17c]
0067bce5  MOV EDX,dword ptr [EBP + -0x7c]
0067bce8  MOV EAX,dword ptr [EDX + 0x17c]
0067bcee  MOV EDX,dword ptr [ECX]
0067bcf0  MOV ECX,EAX
0067bcf2  MOV EAX,dword ptr [EDX + 0x8]
0067bcf5  CALL EAX
0067bcf7  JMP 0x0067bec2
0067bcfc  PUSH 0x2c
0067bcfe  CALL 0x00686d82
0067bd03  ADD ESP,0x4
0067bd06  MOV dword ptr [EBP + -0x60],EAX
0067bd09  MOV dword ptr [EBP + -0x4],0x9
0067bd10  CMP dword ptr [EBP + -0x60],0x0
0067bd14  JZ 0x0067bd31
0067bd16  PUSH 0x0
0067bd18  PUSH 0x95
0067bd1d  PUSH 0x0
0067bd1f  PUSH 0x0
0067bd21  MOV ECX,dword ptr [EBP + -0x60]
0067bd24  CALL 0x00606e60
0067bd29  MOV dword ptr [EBP + 0xffffff58],EAX
0067bd2f  JMP 0x0067bd3b
0067bd31  MOV dword ptr [EBP + 0xffffff58],0x0
0067bd3b  MOV ECX,dword ptr [EBP + 0xffffff58]
0067bd41  MOV dword ptr [EBP + -0x5c],ECX
0067bd44  MOV dword ptr [EBP + -0x4],0xffffffff
0067bd4b  MOV EDX,dword ptr [EBP + -0x5c]
0067bd4e  PUSH EDX
0067bd4f  MOV EAX,dword ptr [EBP + -0x7c]
0067bd52  MOV ECX,dword ptr [EAX + 0x240]
0067bd58  CALL 0x005f6050
0067bd5d  PUSH 0x2c
0067bd5f  CALL 0x00686d82
0067bd64  ADD ESP,0x4
0067bd67  MOV dword ptr [EBP + -0x68],EAX
0067bd6a  MOV dword ptr [EBP + -0x4],0xa
0067bd71  CMP dword ptr [EBP + -0x68],0x0
0067bd75  JZ 0x0067bd8f
0067bd77  PUSH 0x0
0067bd79  PUSH -0x2b
0067bd7b  PUSH 0x0
0067bd7d  PUSH 0x0
0067bd7f  MOV ECX,dword ptr [EBP + -0x68]
0067bd82  CALL 0x00606e60
0067bd87  MOV dword ptr [EBP + 0xffffff54],EAX
0067bd8d  JMP 0x0067bd99
0067bd8f  MOV dword ptr [EBP + 0xffffff54],0x0
0067bd99  MOV ECX,dword ptr [EBP + 0xffffff54]
0067bd9f  MOV dword ptr [EBP + -0x64],ECX
0067bda2  MOV dword ptr [EBP + -0x4],0xffffffff
0067bda9  MOV EDX,dword ptr [EBP + -0x64]
0067bdac  PUSH EDX
0067bdad  MOV EAX,dword ptr [EBP + -0x7c]
0067bdb0  MOV ECX,dword ptr [EAX + 0x234]
0067bdb6  CALL 0x005f6050
0067bdbb  PUSH 0x2c
0067bdbd  CALL 0x00686d82
0067bdc2  ADD ESP,0x4
0067bdc5  MOV dword ptr [EBP + -0x70],EAX
0067bdc8  MOV dword ptr [EBP + -0x4],0xb
0067bdcf  CMP dword ptr [EBP + -0x70],0x0
0067bdd3  JZ 0x0067bded
0067bdd5  PUSH 0x0
0067bdd7  PUSH 0x0
0067bdd9  PUSH -0x2b
0067bddb  PUSH 0x0
0067bddd  MOV ECX,dword ptr [EBP + -0x70]
0067bde0  CALL 0x00606e60
0067bde5  MOV dword ptr [EBP + 0xffffff50],EAX
0067bdeb  JMP 0x0067bdf7
0067bded  MOV dword ptr [EBP + 0xffffff50],0x0
0067bdf7  MOV ECX,dword ptr [EBP + 0xffffff50]
0067bdfd  MOV dword ptr [EBP + -0x6c],ECX
0067be00  MOV dword ptr [EBP + -0x4],0xffffffff
0067be07  MOV EDX,dword ptr [EBP + -0x6c]
0067be0a  PUSH EDX
0067be0b  MOV EAX,dword ptr [EBP + -0x7c]
0067be0e  MOV ECX,dword ptr [EAX + 0x238]
0067be14  CALL 0x005f6050
0067be19  PUSH 0x2c
0067be1b  CALL 0x00686d82
0067be20  ADD ESP,0x4
0067be23  MOV dword ptr [EBP + -0x78],EAX
0067be26  MOV dword ptr [EBP + -0x4],0xc
0067be2d  CMP dword ptr [EBP + -0x78],0x0
0067be31  JZ 0x0067be4b
0067be33  PUSH 0x0
0067be35  PUSH 0x0
0067be37  PUSH 0x2b
0067be39  PUSH 0x0
0067be3b  MOV ECX,dword ptr [EBP + -0x78]
0067be3e  CALL 0x00606e60
0067be43  MOV dword ptr [EBP + 0xffffff4c],EAX
0067be49  JMP 0x0067be55
0067be4b  MOV dword ptr [EBP + 0xffffff4c],0x0
0067be55  MOV ECX,dword ptr [EBP + 0xffffff4c]
0067be5b  MOV dword ptr [EBP + -0x74],ECX
0067be5e  MOV dword ptr [EBP + -0x4],0xffffffff
0067be65  MOV EDX,dword ptr [EBP + -0x74]
0067be68  PUSH EDX
0067be69  MOV EAX,dword ptr [EBP + -0x7c]
0067be6c  MOV ECX,dword ptr [EAX + 0x23c]
0067be72  CALL 0x005f6050
0067be77  PUSH 0x6
0067be79  PUSH 0x7
0067be7b  MOV ECX,dword ptr [EBP + -0x7c]
0067be7e  MOV EDX,dword ptr [ECX + 0x17c]
0067be84  MOV EAX,dword ptr [EBP + -0x7c]
0067be87  MOV ECX,dword ptr [EAX + 0x17c]
0067be8d  MOV EDX,dword ptr [EDX]
0067be8f  MOV EAX,dword ptr [EDX + 0x8]
0067be92  CALL EAX
0067be94  JMP 0x0067bec2
0067be96  PUSH 0x3c
0067be98  PUSH 0x8
0067be9a  MOV ECX,dword ptr [EBP + -0x7c]
0067be9d  MOV EDX,dword ptr [ECX + 0x17c]
0067bea3  MOV EAX,dword ptr [EBP + -0x7c]
0067bea6  MOV ECX,dword ptr [EAX + 0x17c]
0067beac  MOV EDX,dword ptr [EDX]
0067beae  MOV EAX,dword ptr [EDX + 0x8]
0067beb1  CALL EAX
0067beb3  JMP 0x0067bec2
0067beb5  PUSH 0x0
0067beb7  MOV ECX,dword ptr [0x0162ee80]
0067bebd  CALL 0x00650550
0067bec2  MOV ECX,dword ptr [EBP + -0xc]
0067bec5  MOV dword ptr FS:[0x0],ECX
0067becc  POP ECX
0067becd  MOV ESP,EBP
0067becf  POP EBP
0067bed0  RET 0x4
