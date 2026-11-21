; FUN_0052d270  0052d270
0052d270  PUSH EBP
0052d271  MOV EBP,ESP
0052d273  PUSH -0x1
0052d275  PUSH 0x6a44f6
0052d27a  MOV EAX,FS:[0x0]
0052d280  PUSH EAX
0052d281  SUB ESP,0xa8
0052d287  MOV EAX,[0x00781870]
0052d28c  XOR EAX,EBP
0052d28e  PUSH EAX
0052d28f  LEA EAX,[EBP + -0xc]
0052d292  MOV FS:[0x0],EAX
0052d298  MOV dword ptr [EBP + 0xffffff78],ECX
0052d29e  MOV dword ptr [EBP + -0x14],0x0
0052d2a5  MOV EAX,[0x0079338c]
0052d2aa  MOV ECX,dword ptr [EAX + 0x8]
0052d2ad  MOV dword ptr [EBP + -0x80],ECX
0052d2b0  MOV EDX,dword ptr [EBP + -0x80]
0052d2b3  PUSH EDX
0052d2b4  MOV EAX,[0x00793394]
0052d2b9  MOV EDX,dword ptr [EAX]
0052d2bb  MOV ECX,dword ptr [0x00793394]
0052d2c1  MOV EAX,dword ptr [EDX + 0x30]
0052d2c4  CALL EAX
0052d2c6  MOV dword ptr [EBP + -0x14],EAX
0052d2c9  MOV ECX,dword ptr [0x0079338c]
0052d2cf  MOVZX EDX,byte ptr [ECX + 0x7e]
0052d2d3  TEST EDX,EDX
0052d2d5  JNZ 0x0052da70
0052d2db  MOV EAX,[0x00793394]
0052d2e0  MOV EDX,dword ptr [EAX]
0052d2e2  MOV ECX,dword ptr [0x00793394]
0052d2e8  MOV EAX,dword ptr [EDX + 0x40]
0052d2eb  CALL EAX
0052d2ed  CMP EAX,0x1
0052d2f0  JLE 0x0052d754
0052d2f6  MOV ECX,dword ptr [0x0079338c]
0052d2fc  CALL 0x00538440
0052d301  MOVZX ECX,AL
0052d304  TEST ECX,ECX
0052d306  JZ 0x0052d566
0052d30c  MOV dword ptr [EBP + -0x10],0x0
0052d313  JMP 0x0052d31e
0052d315  MOV EDX,dword ptr [EBP + -0x10]
0052d318  ADD EDX,0x1
0052d31b  MOV dword ptr [EBP + -0x10],EDX
0052d31e  CMP dword ptr [EBP + -0x10],0x5
0052d322  JGE 0x0052d561
0052d328  MOV EAX,dword ptr [EBP + -0x10]
0052d32b  MOV ECX,dword ptr [0x0079338c]
0052d331  CMP dword ptr [ECX + EAX*0x4 + 0x64],-0x1
0052d336  JZ 0x0052d55c
0052d33c  MOV EDX,dword ptr [EBP + -0x10]
0052d33f  MOV EAX,[0x0079338c]
0052d344  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x64]
0052d348  ADD ECX,0x1
0052d34b  PUSH ECX
0052d34c  MOV EDX,dword ptr [EBP + -0x10]
0052d34f  MOV EAX,dword ptr [EBP + 0xffffff78]
0052d355  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xcc]
0052d35c  MOV EDX,dword ptr [EBP + -0x10]
0052d35f  MOV EAX,dword ptr [EBP + 0xffffff78]
0052d365  MOV EDX,dword ptr [EAX + EDX*0x4 + 0xcc]
0052d36c  MOV EAX,dword ptr [ECX]
0052d36e  MOV ECX,EDX
0052d370  MOV EDX,dword ptr [EAX + 0xb0]
0052d376  CALL EDX
0052d378  PUSH 0x28
0052d37a  CALL 0x00686d82
0052d37f  ADD ESP,0x4
0052d382  MOV dword ptr [EBP + -0x34],EAX
0052d385  MOV dword ptr [EBP + -0x4],0x0
0052d38c  CMP dword ptr [EBP + -0x34],0x0
0052d390  JZ 0x0052d3ac
0052d392  PUSH 0x0
0052d394  PUSH 0x0
0052d396  PUSH 0x1
0052d398  PUSH 0x0
0052d39a  PUSH 0x0
0052d39c  MOV ECX,dword ptr [EBP + -0x34]
0052d39f  CALL 0x00601110
0052d3a4  MOV dword ptr [EBP + 0xffffff74],EAX
0052d3aa  JMP 0x0052d3b6
0052d3ac  MOV dword ptr [EBP + 0xffffff74],0x0
0052d3b6  MOV EAX,dword ptr [EBP + 0xffffff74]
0052d3bc  MOV dword ptr [EBP + -0x30],EAX
0052d3bf  MOV dword ptr [EBP + -0x4],0xffffffff
0052d3c6  MOV ECX,dword ptr [EBP + -0x30]
0052d3c9  PUSH ECX
0052d3ca  MOV EDX,dword ptr [EBP + -0x10]
0052d3cd  MOV EAX,dword ptr [EBP + 0xffffff78]
0052d3d3  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xcc]
0052d3da  CALL 0x005f5d50
0052d3df  MOV ECX,dword ptr [EBP + -0x10]
0052d3e2  MOV EDX,dword ptr [EBP + 0xffffff78]
0052d3e8  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xcc]
0052d3ef  MOV ECX,dword ptr [EBP + -0x10]
0052d3f2  MOV EDX,dword ptr [EBP + 0xffffff78]
0052d3f8  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xcc]
0052d3ff  MOV EAX,dword ptr [EAX]
0052d401  MOV EDX,dword ptr [EAX + 0x74]
0052d404  CALL EDX
0052d406  MOV EAX,dword ptr [EBP + -0x10]
0052d409  MOV ECX,dword ptr [0x0079338c]
0052d40f  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x64]
0052d413  PUSH EDX
0052d414  MOV EAX,dword ptr [EBP + -0x10]
0052d417  MOV ECX,dword ptr [EBP + 0xffffff78]
0052d41d  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xe0]
0052d424  MOV EAX,dword ptr [EBP + -0x10]
0052d427  MOV ECX,dword ptr [EBP + 0xffffff78]
0052d42d  MOV ECX,dword ptr [ECX + EAX*0x4 + 0xe0]
0052d434  MOV EDX,dword ptr [EDX]
0052d436  MOV EAX,dword ptr [EDX + 0xb0]
0052d43c  CALL EAX
0052d43e  PUSH 0x28
0052d440  CALL 0x00686d82
0052d445  ADD ESP,0x4
0052d448  MOV dword ptr [EBP + -0x3c],EAX
0052d44b  MOV dword ptr [EBP + -0x4],0x1
0052d452  CMP dword ptr [EBP + -0x3c],0x0
0052d456  JZ 0x0052d472
0052d458  PUSH 0x0
0052d45a  PUSH 0x0
0052d45c  PUSH 0x1
0052d45e  PUSH 0x0
0052d460  PUSH 0x0
0052d462  MOV ECX,dword ptr [EBP + -0x3c]
0052d465  CALL 0x00601110
0052d46a  MOV dword ptr [EBP + 0xffffff70],EAX
0052d470  JMP 0x0052d47c
0052d472  MOV dword ptr [EBP + 0xffffff70],0x0
0052d47c  MOV ECX,dword ptr [EBP + 0xffffff70]
0052d482  MOV dword ptr [EBP + -0x38],ECX
0052d485  MOV dword ptr [EBP + -0x4],0xffffffff
0052d48c  MOV EDX,dword ptr [EBP + -0x38]
0052d48f  PUSH EDX
0052d490  MOV EAX,dword ptr [EBP + -0x10]
0052d493  MOV ECX,dword ptr [EBP + 0xffffff78]
0052d499  MOV ECX,dword ptr [ECX + EAX*0x4 + 0xe0]
0052d4a0  CALL 0x005f5d50
0052d4a5  MOV EDX,dword ptr [EBP + -0x10]
0052d4a8  MOV EAX,dword ptr [EBP + 0xffffff78]
0052d4ae  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xe0]
0052d4b5  MOV EDX,dword ptr [EBP + -0x10]
0052d4b8  MOV EAX,dword ptr [EBP + 0xffffff78]
0052d4be  MOV EDX,dword ptr [EAX + EDX*0x4 + 0xe0]
0052d4c5  MOV EAX,dword ptr [ECX]
0052d4c7  MOV ECX,EDX
0052d4c9  MOV EDX,dword ptr [EAX + 0x74]
0052d4cc  CALL EDX
0052d4ce  PUSH 0x28
0052d4d0  CALL 0x00686d82
0052d4d5  ADD ESP,0x4
0052d4d8  MOV dword ptr [EBP + -0x44],EAX
0052d4db  MOV dword ptr [EBP + -0x4],0x2
0052d4e2  CMP dword ptr [EBP + -0x44],0x0
0052d4e6  JZ 0x0052d502
0052d4e8  PUSH 0x0
0052d4ea  PUSH 0x0
0052d4ec  PUSH 0x1
0052d4ee  PUSH 0x0
0052d4f0  PUSH 0x0
0052d4f2  MOV ECX,dword ptr [EBP + -0x44]
0052d4f5  CALL 0x00601110
0052d4fa  MOV dword ptr [EBP + 0xffffff6c],EAX
0052d500  JMP 0x0052d50c
0052d502  MOV dword ptr [EBP + 0xffffff6c],0x0
0052d50c  MOV EAX,dword ptr [EBP + 0xffffff6c]
0052d512  MOV dword ptr [EBP + -0x40],EAX
0052d515  MOV dword ptr [EBP + -0x4],0xffffffff
0052d51c  MOV ECX,dword ptr [EBP + -0x40]
0052d51f  PUSH ECX
0052d520  MOV EDX,dword ptr [EBP + -0x10]
0052d523  MOV EAX,dword ptr [EBP + 0xffffff78]
0052d529  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xb4]
0052d530  CALL 0x005f5d50
0052d535  MOV ECX,dword ptr [EBP + -0x10]
0052d538  MOV EDX,dword ptr [EBP + 0xffffff78]
0052d53e  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xb4]
0052d545  MOV ECX,dword ptr [EBP + -0x10]
0052d548  MOV EDX,dword ptr [EBP + 0xffffff78]
0052d54e  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xb4]
0052d555  MOV EAX,dword ptr [EAX]
0052d557  MOV EDX,dword ptr [EAX + 0x74]
0052d55a  CALL EDX
0052d55c  JMP 0x0052d315
0052d561  JMP 0x0052d74f
0052d566  MOV dword ptr [EBP + -0x10],0x0
0052d56d  JMP 0x0052d578
0052d56f  MOV EAX,dword ptr [EBP + -0x10]
0052d572  ADD EAX,0x1
0052d575  MOV dword ptr [EBP + -0x10],EAX
0052d578  CMP dword ptr [EBP + -0x10],0x5
0052d57c  JGE 0x0052d74f
0052d582  MOV ECX,dword ptr [EBP + -0x10]
0052d585  MOV EDX,dword ptr [0x0079338c]
0052d58b  CMP dword ptr [EDX + ECX*0x4 + 0x64],-0x1
0052d590  JZ 0x0052d74a
0052d596  MOV EAX,dword ptr [EBP + -0x10]
0052d599  MOV ECX,dword ptr [0x0079338c]
0052d59f  CMP dword ptr [ECX + EAX*0x4 + 0x64],0x3e8
0052d5a7  JNZ 0x0052d670
0052d5ad  MOV EDX,dword ptr [EBP + -0x10]
0052d5b0  PUSH EDX
0052d5b1  MOV EAX,dword ptr [EBP + -0x10]
0052d5b4  MOV ECX,dword ptr [EBP + 0xffffff78]
0052d5ba  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xe0]
0052d5c1  MOV EAX,dword ptr [EBP + -0x10]
0052d5c4  MOV ECX,dword ptr [EBP + 0xffffff78]
0052d5ca  MOV ECX,dword ptr [ECX + EAX*0x4 + 0xe0]
0052d5d1  MOV EDX,dword ptr [EDX]
0052d5d3  MOV EAX,dword ptr [EDX + 0xb0]
0052d5d9  CALL EAX
0052d5db  PUSH 0x28
0052d5dd  CALL 0x00686d82
0052d5e2  ADD ESP,0x4
0052d5e5  MOV dword ptr [EBP + -0x4c],EAX
0052d5e8  MOV dword ptr [EBP + -0x4],0x3
0052d5ef  CMP dword ptr [EBP + -0x4c],0x0
0052d5f3  JZ 0x0052d60f
0052d5f5  PUSH 0x0
0052d5f7  PUSH 0x0
0052d5f9  PUSH 0x1
0052d5fb  PUSH 0x0
0052d5fd  PUSH 0x0
0052d5ff  MOV ECX,dword ptr [EBP + -0x4c]
0052d602  CALL 0x00601110
0052d607  MOV dword ptr [EBP + 0xffffff68],EAX
0052d60d  JMP 0x0052d619
0052d60f  MOV dword ptr [EBP + 0xffffff68],0x0
0052d619  MOV ECX,dword ptr [EBP + 0xffffff68]
0052d61f  MOV dword ptr [EBP + -0x48],ECX
0052d622  MOV dword ptr [EBP + -0x4],0xffffffff
0052d629  MOV EDX,dword ptr [EBP + -0x48]
0052d62c  PUSH EDX
0052d62d  MOV EAX,dword ptr [EBP + -0x10]
0052d630  MOV ECX,dword ptr [EBP + 0xffffff78]
0052d636  MOV ECX,dword ptr [ECX + EAX*0x4 + 0xe0]
0052d63d  CALL 0x005f5d50
0052d642  MOV EDX,dword ptr [EBP + -0x10]
0052d645  MOV EAX,dword ptr [EBP + 0xffffff78]
0052d64b  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xe0]
0052d652  MOV EDX,dword ptr [EBP + -0x10]
0052d655  MOV EAX,dword ptr [EBP + 0xffffff78]
0052d65b  MOV EDX,dword ptr [EAX + EDX*0x4 + 0xe0]
0052d662  MOV EAX,dword ptr [ECX]
0052d664  MOV ECX,EDX
0052d666  MOV EDX,dword ptr [EAX + 0x74]
0052d669  CALL EDX
0052d66b  JMP 0x0052d738
0052d670  MOV EAX,dword ptr [EBP + -0x10]
0052d673  MOV ECX,dword ptr [0x0079338c]
0052d679  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x64]
0052d67d  PUSH EDX
0052d67e  MOV EAX,dword ptr [EBP + -0x10]
0052d681  MOV ECX,dword ptr [EBP + 0xffffff78]
0052d687  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xcc]
0052d68e  MOV EAX,dword ptr [EBP + -0x10]
0052d691  MOV ECX,dword ptr [EBP + 0xffffff78]
0052d697  MOV ECX,dword ptr [ECX + EAX*0x4 + 0xcc]
0052d69e  MOV EDX,dword ptr [EDX]
0052d6a0  MOV EAX,dword ptr [EDX + 0xb0]
0052d6a6  CALL EAX
0052d6a8  PUSH 0x28
0052d6aa  CALL 0x00686d82
0052d6af  ADD ESP,0x4
0052d6b2  MOV dword ptr [EBP + -0x54],EAX
0052d6b5  MOV dword ptr [EBP + -0x4],0x4
0052d6bc  CMP dword ptr [EBP + -0x54],0x0
0052d6c0  JZ 0x0052d6dc
0052d6c2  PUSH 0x0
0052d6c4  PUSH 0x0
0052d6c6  PUSH 0x1
0052d6c8  PUSH 0x0
0052d6ca  PUSH 0x0
0052d6cc  MOV ECX,dword ptr [EBP + -0x54]
0052d6cf  CALL 0x00601110
0052d6d4  MOV dword ptr [EBP + 0xffffff64],EAX
0052d6da  JMP 0x0052d6e6
0052d6dc  MOV dword ptr [EBP + 0xffffff64],0x0
0052d6e6  MOV ECX,dword ptr [EBP + 0xffffff64]
0052d6ec  MOV dword ptr [EBP + -0x50],ECX
0052d6ef  MOV dword ptr [EBP + -0x4],0xffffffff
0052d6f6  MOV EDX,dword ptr [EBP + -0x50]
0052d6f9  PUSH EDX
0052d6fa  MOV EAX,dword ptr [EBP + -0x10]
0052d6fd  MOV ECX,dword ptr [EBP + 0xffffff78]
0052d703  MOV ECX,dword ptr [ECX + EAX*0x4 + 0xcc]
0052d70a  CALL 0x005f5d50
0052d70f  MOV EDX,dword ptr [EBP + -0x10]
0052d712  MOV EAX,dword ptr [EBP + 0xffffff78]
0052d718  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xcc]
0052d71f  MOV EDX,dword ptr [EBP + -0x10]
0052d722  MOV EAX,dword ptr [EBP + 0xffffff78]
0052d728  MOV EDX,dword ptr [EAX + EDX*0x4 + 0xcc]
0052d72f  MOV EAX,dword ptr [ECX]
0052d731  MOV ECX,EDX
0052d733  MOV EDX,dword ptr [EAX + 0x74]
0052d736  CALL EDX
0052d738  MOV EAX,dword ptr [EBP + -0x10]
0052d73b  ADD EAX,0x1
0052d73e  PUSH EAX
0052d73f  MOV ECX,dword ptr [EBP + 0xffffff78]
0052d745  CALL 0x0052aea0
0052d74a  JMP 0x0052d56f
0052d74f  JMP 0x0052da70
0052d754  MOV ECX,dword ptr [0x007947e0]
0052d75a  MOV EDX,dword ptr [ECX + 0x4f14]
0052d760  MOV dword ptr [EBP + 0xffffff7c],EDX
0052d766  CMP dword ptr [EBP + 0xffffff7c],0xd
0052d76d  JNZ 0x0052d8e6
0052d773  MOV EAX,[0x0079338c]
0052d778  CMP dword ptr [EAX + 0x64],-0x1
0052d77c  JZ 0x0052d8e1
0052d782  MOV ECX,dword ptr [0x0079338c]
0052d788  MOV EDX,dword ptr [ECX + 0x8]
0052d78b  MOV dword ptr [EBP + -0x1c],EDX
0052d78e  MOV EAX,[0x00793394]
0052d793  MOV EDX,dword ptr [EAX]
0052d795  MOV ECX,dword ptr [0x00793394]
0052d79b  MOV EAX,dword ptr [EDX + 0x40]
0052d79e  CALL EAX
0052d7a0  MOV dword ptr [EBP + -0x20],EAX
0052d7a3  MOV dword ptr [EBP + -0x18],0x0
0052d7aa  MOV ECX,dword ptr [0x0079338c]
0052d7b0  MOV EDX,dword ptr [ECX + 0x64]
0052d7b3  MOV dword ptr [EBP + 0xffffff60],EDX
0052d7b9  CMP dword ptr [EBP + 0xffffff60],0x7
0052d7c0  JA 0x0052d839
0052d7c2  MOV EAX,dword ptr [EBP + 0xffffff60]
0052d7c8  JMP dword ptr [EAX*0x4 + 0x52dc7c]
0052d7cf  MOV ECX,dword ptr [EBP + -0x1c]
0052d7d2  SUB ECX,0x2
0052d7d5  NEG ECX
0052d7d7  SBB ECX,ECX
0052d7d9  AND ECX,0x3
0052d7dc  ADD ECX,0x5
0052d7df  MOV dword ptr [EBP + -0x18],ECX
0052d7e2  JMP 0x0052d839
0052d7e4  MOV EDX,dword ptr [EBP + -0x1c]
0052d7e7  SUB EDX,0x2
0052d7ea  NEG EDX
0052d7ec  SBB EDX,EDX
0052d7ee  AND EDX,0x3
0052d7f1  ADD EDX,0x6
0052d7f4  MOV dword ptr [EBP + -0x18],EDX
0052d7f7  JMP 0x0052d839
0052d7f9  MOV EAX,dword ptr [EBP + -0x1c]
0052d7fc  SUB EAX,0x2
0052d7ff  NEG EAX
0052d801  SBB EAX,EAX
0052d803  AND EAX,0x3
0052d806  ADD EAX,0x7
0052d809  MOV dword ptr [EBP + -0x18],EAX
0052d80c  JMP 0x0052d839
0052d80e  MOV dword ptr [EBP + -0x18],0x0
0052d815  JMP 0x0052d839
0052d817  MOV dword ptr [EBP + -0x18],0x1
0052d81e  JMP 0x0052d839
0052d820  MOV dword ptr [EBP + -0x18],0x2
0052d827  JMP 0x0052d839
0052d829  MOV dword ptr [EBP + -0x18],0x3
0052d830  JMP 0x0052d839
0052d832  MOV dword ptr [EBP + -0x18],0x4
0052d839  MOV ECX,dword ptr [EBP + -0x18]
0052d83c  PUSH ECX
0052d83d  MOV EDX,dword ptr [EBP + 0xffffff78]
0052d843  MOV EAX,dword ptr [EDX + 0xcc]
0052d849  MOV ECX,dword ptr [EBP + 0xffffff78]
0052d84f  MOV ECX,dword ptr [ECX + 0xcc]
0052d855  MOV EDX,dword ptr [EAX]
0052d857  MOV EAX,dword ptr [EDX + 0xb0]
0052d85d  CALL EAX
0052d85f  PUSH 0x28
0052d861  CALL 0x00686d82
0052d866  ADD ESP,0x4
0052d869  MOV dword ptr [EBP + -0x5c],EAX
0052d86c  MOV dword ptr [EBP + -0x4],0x5
0052d873  CMP dword ptr [EBP + -0x5c],0x0
0052d877  JZ 0x0052d893
0052d879  PUSH 0x0
0052d87b  PUSH 0x0
0052d87d  PUSH 0x1
0052d87f  PUSH 0x0
0052d881  PUSH 0x0
0052d883  MOV ECX,dword ptr [EBP + -0x5c]
0052d886  CALL 0x00601110
0052d88b  MOV dword ptr [EBP + 0xffffff5c],EAX
0052d891  JMP 0x0052d89d
0052d893  MOV dword ptr [EBP + 0xffffff5c],0x0
0052d89d  MOV ECX,dword ptr [EBP + 0xffffff5c]
0052d8a3  MOV dword ptr [EBP + -0x58],ECX
0052d8a6  MOV dword ptr [EBP + -0x4],0xffffffff
0052d8ad  MOV EDX,dword ptr [EBP + -0x58]
0052d8b0  PUSH EDX
0052d8b1  MOV EAX,dword ptr [EBP + 0xffffff78]
0052d8b7  MOV ECX,dword ptr [EAX + 0xcc]
0052d8bd  CALL 0x005f5d50
0052d8c2  MOV ECX,dword ptr [EBP + 0xffffff78]
0052d8c8  MOV EDX,dword ptr [ECX + 0xcc]
0052d8ce  MOV EAX,dword ptr [EBP + 0xffffff78]
0052d8d4  MOV ECX,dword ptr [EAX + 0xcc]
0052d8da  MOV EDX,dword ptr [EDX]
0052d8dc  MOV EAX,dword ptr [EDX + 0x74]
0052d8df  CALL EAX
0052d8e1  JMP 0x0052da70
0052d8e6  MOV ECX,dword ptr [0x0079338c]
0052d8ec  CMP dword ptr [ECX + 0x64],-0x1
0052d8f0  JZ 0x0052da70
0052d8f6  MOV EDX,dword ptr [EBP + -0x14]
0052d8f9  MOV dword ptr [EBP + -0x28],EDX
0052d8fc  MOV EAX,[0x0079338c]
0052d901  MOV ECX,dword ptr [EAX + 0x64]
0052d904  MOV dword ptr [EBP + -0x24],ECX
0052d907  MOV ECX,dword ptr [0x0079338c]
0052d90d  CALL 0x00535e50
0052d912  MOV dword ptr [EBP + -0x2c],EAX
0052d915  MOV EDX,dword ptr [EBP + -0x28]
0052d918  SUB EDX,dword ptr [EBP + -0x24]
0052d91b  PUSH EDX
0052d91c  MOV EAX,dword ptr [EBP + 0xffffff78]
0052d922  MOV ECX,dword ptr [EAX + 0xcc]
0052d928  MOV EDX,dword ptr [EBP + 0xffffff78]
0052d92e  MOV EAX,dword ptr [EDX + 0xcc]
0052d934  MOV EDX,dword ptr [ECX]
0052d936  MOV ECX,EAX
0052d938  MOV EAX,dword ptr [EDX + 0xb0]
0052d93e  CALL EAX
0052d940  PUSH 0x28
0052d942  CALL 0x00686d82
0052d947  ADD ESP,0x4
0052d94a  MOV dword ptr [EBP + -0x64],EAX
0052d94d  MOV dword ptr [EBP + -0x4],0x6
0052d954  CMP dword ptr [EBP + -0x64],0x0
0052d958  JZ 0x0052d974
0052d95a  PUSH 0x0
0052d95c  PUSH 0x0
0052d95e  PUSH 0x1
0052d960  PUSH 0x0
0052d962  PUSH 0x0
0052d964  MOV ECX,dword ptr [EBP + -0x64]
0052d967  CALL 0x00601110
0052d96c  MOV dword ptr [EBP + 0xffffff58],EAX
0052d972  JMP 0x0052d97e
0052d974  MOV dword ptr [EBP + 0xffffff58],0x0
0052d97e  MOV ECX,dword ptr [EBP + 0xffffff58]
0052d984  MOV dword ptr [EBP + -0x60],ECX
0052d987  MOV dword ptr [EBP + -0x4],0xffffffff
0052d98e  MOV EDX,dword ptr [EBP + -0x60]
0052d991  PUSH EDX
0052d992  MOV EAX,dword ptr [EBP + 0xffffff78]
0052d998  MOV ECX,dword ptr [EAX + 0xcc]
0052d99e  CALL 0x005f5d50
0052d9a3  MOV ECX,dword ptr [EBP + 0xffffff78]
0052d9a9  MOV EDX,dword ptr [ECX + 0xcc]
0052d9af  MOV EAX,dword ptr [EBP + 0xffffff78]
0052d9b5  MOV ECX,dword ptr [EAX + 0xcc]
0052d9bb  MOV EDX,dword ptr [EDX]
0052d9bd  MOV EAX,dword ptr [EDX + 0x74]
0052d9c0  CALL EAX
0052d9c2  MOV ECX,dword ptr [EBP + -0x2c]
0052d9c5  SUB ECX,0x1
0052d9c8  SUB ECX,dword ptr [EBP + -0x24]
0052d9cb  PUSH ECX
0052d9cc  MOV EDX,dword ptr [EBP + 0xffffff78]
0052d9d2  MOV EAX,dword ptr [EDX + 0xe0]
0052d9d8  MOV ECX,dword ptr [EBP + 0xffffff78]
0052d9de  MOV ECX,dword ptr [ECX + 0xe0]
0052d9e4  MOV EDX,dword ptr [EAX]
0052d9e6  MOV EAX,dword ptr [EDX + 0xb0]
0052d9ec  CALL EAX
0052d9ee  PUSH 0x28
0052d9f0  CALL 0x00686d82
0052d9f5  ADD ESP,0x4
0052d9f8  MOV dword ptr [EBP + -0x6c],EAX
0052d9fb  MOV dword ptr [EBP + -0x4],0x7
0052da02  CMP dword ptr [EBP + -0x6c],0x0
0052da06  JZ 0x0052da22
0052da08  PUSH 0x0
0052da0a  PUSH 0x0
0052da0c  PUSH 0x1
0052da0e  PUSH 0x0
0052da10  PUSH 0x0
0052da12  MOV ECX,dword ptr [EBP + -0x6c]
0052da15  CALL 0x00601110
0052da1a  MOV dword ptr [EBP + 0xffffff54],EAX
0052da20  JMP 0x0052da2c
0052da22  MOV dword ptr [EBP + 0xffffff54],0x0
0052da2c  MOV ECX,dword ptr [EBP + 0xffffff54]
0052da32  MOV dword ptr [EBP + -0x68],ECX
0052da35  MOV dword ptr [EBP + -0x4],0xffffffff
0052da3c  MOV EDX,dword ptr [EBP + -0x68]
0052da3f  PUSH EDX
0052da40  MOV EAX,dword ptr [EBP + 0xffffff78]
0052da46  MOV ECX,dword ptr [EAX + 0xe0]
0052da4c  CALL 0x005f5d50
0052da51  MOV ECX,dword ptr [EBP + 0xffffff78]
0052da57  MOV EDX,dword ptr [ECX + 0xe0]
0052da5d  MOV EAX,dword ptr [EBP + 0xffffff78]
0052da63  MOV ECX,dword ptr [EAX + 0xe0]
0052da69  MOV EDX,dword ptr [EDX]
0052da6b  MOV EAX,dword ptr [EDX + 0x74]
0052da6e  CALL EAX
0052da70  MOV ECX,dword ptr [0x0079338c]
0052da76  CMP dword ptr [ECX + 0x78],0x64
0052da7a  JL 0x0052db1e
0052da80  PUSH 0x0
0052da82  MOV EDX,dword ptr [EBP + 0xffffff78]
0052da88  MOV EAX,dword ptr [EDX + 0xc0]
0052da8e  MOV ECX,dword ptr [EBP + 0xffffff78]
0052da94  MOV ECX,dword ptr [ECX + 0xc0]
0052da9a  MOV EDX,dword ptr [EAX]
0052da9c  MOV EAX,dword ptr [EDX + 0xb0]
0052daa2  CALL EAX
0052daa4  PUSH 0x1c
0052daa6  CALL 0x00686d82
0052daab  ADD ESP,0x4
0052daae  MOV dword ptr [EBP + -0x74],EAX
0052dab1  MOV dword ptr [EBP + -0x4],0x8
0052dab8  CMP dword ptr [EBP + -0x74],0x0
0052dabc  JZ 0x0052dad0
0052dabe  PUSH 0x0
0052dac0  MOV ECX,dword ptr [EBP + -0x74]
0052dac3  CALL 0x00600a70
0052dac8  MOV dword ptr [EBP + 0xffffff50],EAX
0052dace  JMP 0x0052dada
0052dad0  MOV dword ptr [EBP + 0xffffff50],0x0
0052dada  MOV ECX,dword ptr [EBP + 0xffffff50]
0052dae0  MOV dword ptr [EBP + -0x70],ECX
0052dae3  MOV dword ptr [EBP + -0x4],0xffffffff
0052daea  MOV EDX,dword ptr [EBP + -0x70]
0052daed  PUSH EDX
0052daee  MOV EAX,dword ptr [EBP + 0xffffff78]
0052daf4  MOV ECX,dword ptr [EAX + 0xc0]
0052dafa  CALL 0x005f5d50
0052daff  MOV ECX,dword ptr [EBP + 0xffffff78]
0052db05  MOV EDX,dword ptr [ECX + 0xc0]
0052db0b  MOV EAX,dword ptr [EBP + 0xffffff78]
0052db11  MOV ECX,dword ptr [EAX + 0xc0]
0052db17  MOV EDX,dword ptr [EDX]
0052db19  MOV EAX,dword ptr [EDX + 0x74]
0052db1c  CALL EAX
0052db1e  MOV ECX,dword ptr [0x0079338c]
0052db24  CMP dword ptr [ECX + 0x78],0x0
0052db28  JLE 0x0052db86
0052db2a  MOV EDX,dword ptr [0x00793394]
0052db30  MOV EAX,dword ptr [EDX]
0052db32  MOV ECX,dword ptr [0x00793394]
0052db38  MOV EDX,dword ptr [EAX + 0x38]
0052db3b  CALL EDX
0052db3d  TEST EAX,EAX
0052db3f  JZ 0x0052db86
0052db41  PUSH 0x0
0052db43  MOV EAX,dword ptr [EBP + 0xffffff78]
0052db49  MOV ECX,dword ptr [EAX + 0xc8]
0052db4f  MOV EDX,dword ptr [EBP + 0xffffff78]
0052db55  MOV EAX,dword ptr [EDX + 0xc8]
0052db5b  MOV EDX,dword ptr [ECX]
0052db5d  MOV ECX,EAX
0052db5f  MOV EAX,dword ptr [EDX + 0xb0]
0052db65  CALL EAX
0052db67  MOV ECX,dword ptr [EBP + 0xffffff78]
0052db6d  MOV EDX,dword ptr [ECX + 0xc8]
0052db73  MOV EAX,dword ptr [EBP + 0xffffff78]
0052db79  MOV ECX,dword ptr [EAX + 0xc8]
0052db7f  MOV EDX,dword ptr [EDX]
0052db81  MOV EAX,dword ptr [EDX + 0x74]
0052db84  CALL EAX
0052db86  MOV ECX,dword ptr [0x0079338c]
0052db8c  MOVZX EDX,byte ptr [ECX + 0x7c]
0052db90  TEST EDX,EDX
0052db92  JZ 0x0052dc6a
0052db98  MOV dword ptr [EBP + -0x10],0x0
0052db9f  JMP 0x0052dbaa
0052dba1  MOV EAX,dword ptr [EBP + -0x10]
0052dba4  ADD EAX,0x1
0052dba7  MOV dword ptr [EBP + -0x10],EAX
0052dbaa  CMP dword ptr [EBP + -0x10],0x3
0052dbae  JGE 0x0052dbf0
0052dbb0  PUSH 0x0
0052dbb2  MOV ECX,dword ptr [EBP + -0x10]
0052dbb5  MOV EDX,dword ptr [EBP + 0xffffff78]
0052dbbb  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xe0]
0052dbc2  CALL 0x005f5d50
0052dbc7  MOV EAX,dword ptr [EBP + -0x10]
0052dbca  MOV ECX,dword ptr [EBP + 0xffffff78]
0052dbd0  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xe0]
0052dbd7  MOV EAX,dword ptr [EBP + -0x10]
0052dbda  MOV ECX,dword ptr [EBP + 0xffffff78]
0052dbe0  MOV ECX,dword ptr [ECX + EAX*0x4 + 0xe0]
0052dbe7  MOV EDX,dword ptr [EDX]
0052dbe9  MOV EAX,dword ptr [EDX + 0x70]
0052dbec  CALL EAX
0052dbee  JMP 0x0052dba1
0052dbf0  PUSH 0x1c
0052dbf2  CALL 0x00686d82
0052dbf7  ADD ESP,0x4
0052dbfa  MOV dword ptr [EBP + -0x7c],EAX
0052dbfd  MOV dword ptr [EBP + -0x4],0x9
0052dc04  CMP dword ptr [EBP + -0x7c],0x0
0052dc08  JZ 0x0052dc1c
0052dc0a  PUSH 0x0
0052dc0c  MOV ECX,dword ptr [EBP + -0x7c]
0052dc0f  CALL 0x00600a70
0052dc14  MOV dword ptr [EBP + 0xffffff4c],EAX
0052dc1a  JMP 0x0052dc26
0052dc1c  MOV dword ptr [EBP + 0xffffff4c],0x0
0052dc26  MOV ECX,dword ptr [EBP + 0xffffff4c]
0052dc2c  MOV dword ptr [EBP + -0x78],ECX
0052dc2f  MOV dword ptr [EBP + -0x4],0xffffffff
0052dc36  MOV EDX,dword ptr [EBP + -0x78]
0052dc39  PUSH EDX
0052dc3a  MOV EAX,dword ptr [EBP + 0xffffff78]
0052dc40  MOV ECX,dword ptr [EAX + 0xc8]
0052dc46  CALL 0x005f5d50
0052dc4b  MOV ECX,dword ptr [EBP + 0xffffff78]
0052dc51  MOV EDX,dword ptr [ECX + 0xc8]
0052dc57  MOV EAX,dword ptr [EBP + 0xffffff78]
0052dc5d  MOV ECX,dword ptr [EAX + 0xc8]
0052dc63  MOV EDX,dword ptr [EDX]
0052dc65  MOV EAX,dword ptr [EDX + 0x74]
0052dc68  CALL EAX
0052dc6a  MOV ECX,dword ptr [EBP + -0xc]
0052dc6d  MOV dword ptr FS:[0x0],ECX
0052dc74  POP ECX
0052dc75  MOV ESP,EBP
0052dc77  POP EBP
0052dc78  RET
