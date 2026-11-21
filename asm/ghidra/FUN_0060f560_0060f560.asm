; FUN_0060f560  0060f560
0060f560  PUSH EBP
0060f561  MOV EBP,ESP
0060f563  PUSH -0x1
0060f565  PUSH 0x6aae4e
0060f56a  MOV EAX,FS:[0x0]
0060f570  PUSH EAX
0060f571  SUB ESP,0x18
0060f574  MOV EAX,[0x00781870]
0060f579  XOR EAX,EBP
0060f57b  PUSH EAX
0060f57c  LEA EAX,[EBP + -0xc]
0060f57f  MOV FS:[0x0],EAX
0060f585  MOV dword ptr [EBP + -0x20],ECX
0060f588  MOV ECX,dword ptr [EBP + -0x20]
0060f58b  CALL 0x005f5cc0
0060f590  MOV EAX,dword ptr [EBP + 0x14]
0060f593  PUSH EAX
0060f594  MOV ECX,dword ptr [EBP + 0x10]
0060f597  PUSH ECX
0060f598  MOV EDX,dword ptr [EBP + -0x20]
0060f59b  MOV EAX,dword ptr [EDX]
0060f59d  MOV ECX,dword ptr [EBP + -0x20]
0060f5a0  MOV EDX,dword ptr [EAX + 0x44]
0060f5a3  CALL EDX
0060f5a5  MOV EAX,dword ptr [EBP + 0x18]
0060f5a8  PUSH EAX
0060f5a9  MOV ECX,dword ptr [EBP + -0x20]
0060f5ac  MOV EDX,dword ptr [ECX]
0060f5ae  MOV ECX,dword ptr [EBP + -0x20]
0060f5b1  MOV EAX,dword ptr [EDX + 0x6c]
0060f5b4  CALL EAX
0060f5b6  MOV ECX,dword ptr [EBP + 0x1c]
0060f5b9  PUSH ECX
0060f5ba  MOV ECX,dword ptr [EBP + -0x20]
0060f5bd  CALL 0x005f53e0
0060f5c2  MOV EDX,dword ptr [EBP + -0x20]
0060f5c5  MOV dword ptr [EDX + 0x188],0x0
0060f5cf  MOVSX EAX,word ptr [EBP + 0x8]
0060f5d3  TEST EAX,EAX
0060f5d5  JLE 0x0060f5e7
0060f5d7  MOV ECX,dword ptr [EBP + -0x20]
0060f5da  MOV DX,word ptr [EBP + 0x8]
0060f5de  MOV word ptr [ECX + 0x184],DX
0060f5e5  JMP 0x0060f5f3
0060f5e7  MOV EAX,dword ptr [EBP + -0x20]
0060f5ea  MOV word ptr [EAX + 0x184],0x1
0060f5f3  MOV ECX,dword ptr [EBP + -0x20]
0060f5f6  MOVSX EAX,word ptr [ECX + 0x184]
0060f5fd  XOR ECX,ECX
0060f5ff  MOV EDX,0x4
0060f604  MUL EDX
0060f606  SETO CL
0060f609  NEG ECX
0060f60b  OR ECX,EAX
0060f60d  PUSH ECX
0060f60e  CALL 0x00686d82
0060f613  ADD ESP,0x4
0060f616  MOV dword ptr [EBP + -0x14],EAX
0060f619  MOV EAX,dword ptr [EBP + -0x20]
0060f61c  MOV ECX,dword ptr [EBP + -0x14]
0060f61f  MOV dword ptr [EAX + 0x18c],ECX
0060f625  MOV word ptr [EBP + -0x10],0x0
0060f62b  JMP 0x0060f639
0060f62d  MOV DX,word ptr [EBP + -0x10]
0060f631  ADD DX,0x1
0060f635  MOV word ptr [EBP + -0x10],DX
0060f639  MOVSX EAX,word ptr [EBP + -0x10]
0060f63d  MOV ECX,dword ptr [EBP + -0x20]
0060f640  MOVSX EDX,word ptr [ECX + 0x184]
0060f647  CMP EAX,EDX
0060f649  JGE 0x0060f7c2
0060f64f  PUSH 0x178
0060f654  CALL 0x00686d82
0060f659  ADD ESP,0x4
0060f65c  MOV dword ptr [EBP + -0x1c],EAX
0060f65f  MOV dword ptr [EBP + -0x4],0x0
0060f666  CMP dword ptr [EBP + -0x1c],0x0
0060f66a  JZ 0x0060f679
0060f66c  MOV ECX,dword ptr [EBP + -0x1c]
0060f66f  CALL 0x005eaaf0
0060f674  MOV dword ptr [EBP + -0x24],EAX
0060f677  JMP 0x0060f680
0060f679  MOV dword ptr [EBP + -0x24],0x0
0060f680  MOV EAX,dword ptr [EBP + -0x24]
0060f683  MOV dword ptr [EBP + -0x18],EAX
0060f686  MOV dword ptr [EBP + -0x4],0xffffffff
0060f68d  MOVSX ECX,word ptr [EBP + -0x10]
0060f691  MOV EDX,dword ptr [EBP + -0x20]
0060f694  MOV EAX,dword ptr [EDX + 0x18c]
0060f69a  MOV EDX,dword ptr [EBP + -0x18]
0060f69d  MOV dword ptr [EAX + ECX*0x4],EDX
0060f6a0  MOV EAX,dword ptr [EBP + 0xc]
0060f6a3  PUSH EAX
0060f6a4  MOVSX ECX,word ptr [EBP + -0x10]
0060f6a8  MOV EDX,dword ptr [EBP + -0x20]
0060f6ab  MOV EAX,dword ptr [EDX + 0x18c]
0060f6b1  MOV ECX,dword ptr [EAX + ECX*0x4]
0060f6b4  CALL 0x005eaf00
0060f6b9  PUSH 0x14
0060f6bb  MOVSX ECX,word ptr [EBP + -0x10]
0060f6bf  MOV EDX,dword ptr [EBP + -0x20]
0060f6c2  MOV EAX,dword ptr [EDX + 0x18c]
0060f6c8  MOV ECX,dword ptr [EAX + ECX*0x4]
0060f6cb  MOVSX EDX,word ptr [EBP + -0x10]
0060f6cf  MOV EAX,dword ptr [EBP + -0x20]
0060f6d2  MOV EAX,dword ptr [EAX + 0x18c]
0060f6d8  MOV EDX,dword ptr [EAX + EDX*0x4]
0060f6db  MOV EAX,dword ptr [ECX]
0060f6dd  MOV ECX,EDX
0060f6df  MOV EDX,dword ptr [EAX + 0xb0]
0060f6e5  CALL EDX
0060f6e7  MOVSX EAX,word ptr [EBP + -0x10]
0060f6eb  MOV ECX,dword ptr [EBP + -0x20]
0060f6ee  MOV EDX,dword ptr [ECX + 0x18c]
0060f6f4  MOV EAX,dword ptr [EDX + EAX*0x4]
0060f6f7  MOVSX ECX,word ptr [EBP + -0x10]
0060f6fb  MOV EDX,dword ptr [EBP + -0x20]
0060f6fe  MOV EDX,dword ptr [EDX + 0x18c]
0060f704  MOV ECX,dword ptr [EDX + ECX*0x4]
0060f707  MOV EAX,dword ptr [EAX]
0060f709  MOV EDX,dword ptr [EAX + 0x40]
0060f70c  CALL EDX
0060f70e  MOV ECX,dword ptr [EBP + -0x20]
0060f711  CALL 0x005f53c0
0060f716  PUSH EAX
0060f717  MOVSX EAX,word ptr [EBP + -0x10]
0060f71b  MOV ECX,dword ptr [EBP + -0x20]
0060f71e  MOV EDX,dword ptr [ECX + 0x18c]
0060f724  MOV EAX,dword ptr [EDX + EAX*0x4]
0060f727  MOVSX ECX,word ptr [EBP + -0x10]
0060f72b  MOV EDX,dword ptr [EBP + -0x20]
0060f72e  MOV EDX,dword ptr [EDX + 0x18c]
0060f734  MOV ECX,dword ptr [EDX + ECX*0x4]
0060f737  MOV EAX,dword ptr [EAX]
0060f739  MOV EDX,dword ptr [EAX + 0x6c]
0060f73c  CALL EDX
0060f73e  MOV ECX,dword ptr [EBP + -0x20]
0060f741  CALL 0x005f5400
0060f746  PUSH EAX
0060f747  MOVSX EAX,word ptr [EBP + -0x10]
0060f74b  MOV ECX,dword ptr [EBP + -0x20]
0060f74e  MOV EDX,dword ptr [ECX + 0x18c]
0060f754  MOV ECX,dword ptr [EDX + EAX*0x4]
0060f757  CALL 0x005f53e0
0060f75c  MOV ECX,dword ptr [EBP + -0x20]
0060f75f  CALL 0x005f54c0
0060f764  MOVZX EAX,AL
0060f767  TEST EAX,EAX
0060f769  JZ 0x0060f796
0060f76b  MOVSX ECX,word ptr [EBP + -0x10]
0060f76f  MOV EDX,dword ptr [EBP + -0x20]
0060f772  MOV EAX,dword ptr [EDX + 0x18c]
0060f778  MOV ECX,dword ptr [EAX + ECX*0x4]
0060f77b  MOVSX EDX,word ptr [EBP + -0x10]
0060f77f  MOV EAX,dword ptr [EBP + -0x20]
0060f782  MOV EAX,dword ptr [EAX + 0x18c]
0060f788  MOV EDX,dword ptr [EAX + EDX*0x4]
0060f78b  MOV EAX,dword ptr [ECX]
0060f78d  MOV ECX,EDX
0060f78f  MOV EDX,dword ptr [EAX + 0x70]
0060f792  CALL EDX
0060f794  JMP 0x0060f7bd
0060f796  MOVSX EAX,word ptr [EBP + -0x10]
0060f79a  MOV ECX,dword ptr [EBP + -0x20]
0060f79d  MOV EDX,dword ptr [ECX + 0x18c]
0060f7a3  MOV EAX,dword ptr [EDX + EAX*0x4]
0060f7a6  MOVSX ECX,word ptr [EBP + -0x10]
0060f7aa  MOV EDX,dword ptr [EBP + -0x20]
0060f7ad  MOV EDX,dword ptr [EDX + 0x18c]
0060f7b3  MOV ECX,dword ptr [EDX + ECX*0x4]
0060f7b6  MOV EAX,dword ptr [EAX]
0060f7b8  MOV EDX,dword ptr [EAX + 0x74]
0060f7bb  CALL EDX
0060f7bd  JMP 0x0060f62d
0060f7c2  PUSH 0x0
0060f7c4  MOV EAX,dword ptr [EBP + -0x20]
0060f7c7  MOV ECX,dword ptr [EAX + 0x18c]
0060f7cd  MOV EDX,dword ptr [ECX]
0060f7cf  MOV EAX,dword ptr [EBP + -0x20]
0060f7d2  MOV ECX,dword ptr [EAX + 0x18c]
0060f7d8  MOV ECX,dword ptr [ECX]
0060f7da  MOV EDX,dword ptr [EDX]
0060f7dc  MOV EAX,dword ptr [EDX + 0xb0]
0060f7e2  CALL EAX
0060f7e4  MOV ECX,dword ptr [EBP + -0x20]
0060f7e7  MOV EDX,dword ptr [ECX + 0x18c]
0060f7ed  MOV ECX,dword ptr [EDX]
0060f7ef  CALL 0x005f5550
0060f7f4  MOV ECX,dword ptr [EBP + -0x20]
0060f7f7  MOV word ptr [ECX + 0x186],AX
0060f7fe  MOV EDX,dword ptr [EBP + -0x20]
0060f801  MOV EAX,dword ptr [EDX + 0x18c]
0060f807  MOV ECX,dword ptr [EAX]
0060f809  CALL 0x005f5590
0060f80e  PUSH EAX
0060f80f  MOV ECX,dword ptr [EBP + -0x20]
0060f812  MOVSX EDX,word ptr [ECX + 0x186]
0060f819  MOV EAX,dword ptr [EBP + -0x20]
0060f81c  MOVSX ECX,word ptr [EAX + 0x184]
0060f823  IMUL EDX,ECX
0060f826  PUSH EDX
0060f827  MOV EDX,dword ptr [EBP + -0x20]
0060f82a  MOV EAX,dword ptr [EDX]
0060f82c  MOV ECX,dword ptr [EBP + -0x20]
0060f82f  MOV EDX,dword ptr [EAX + 0x78]
0060f832  CALL EDX
0060f834  MOV EAX,dword ptr [EBP + -0x20]
0060f837  MOV ECX,dword ptr [EAX + 0x158]
0060f83d  PUSH ECX
0060f83e  MOV EDX,dword ptr [EBP + -0x20]
0060f841  MOV EAX,dword ptr [EDX + 0x154]
0060f847  PUSH EAX
0060f848  MOV ECX,dword ptr [EBP + -0x20]
0060f84b  MOV EDX,dword ptr [ECX]
0060f84d  MOV ECX,dword ptr [EBP + -0x20]
0060f850  MOV EAX,dword ptr [EDX + 0x44]
0060f853  CALL EAX
0060f855  MOV ECX,dword ptr [EBP + -0xc]
0060f858  MOV dword ptr FS:[0x0],ECX
0060f85f  POP ECX
0060f860  MOV ESP,EBP
0060f862  POP EBP
0060f863  RET 0x18
