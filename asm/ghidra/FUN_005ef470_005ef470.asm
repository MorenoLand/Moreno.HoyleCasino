; FUN_005ef470  005ef470
005ef470  PUSH EBP
005ef471  MOV EBP,ESP
005ef473  SUB ESP,0x90
005ef479  MOV dword ptr [EBP + 0xffffff74],ECX
005ef47f  MOV dword ptr [EBP + -0x54],0x0
005ef486  MOV EAX,dword ptr [EBP + 0xffffff74]
005ef48c  CMP dword ptr [EAX + 0xa0],0x0
005ef493  JNZ 0x005ef4fc
005ef495  MOV ECX,dword ptr [EBP + 0xffffff74]
005ef49b  MOV EDX,dword ptr [ECX + 0x70]
005ef49e  AND EDX,0x1
005ef4a1  JZ 0x005ef4aa
005ef4a3  MOV dword ptr [EBP + 0x8],0x0
005ef4aa  MOV EAX,dword ptr [EBP + 0xffffff74]
005ef4b0  MOV ECX,dword ptr [EAX + 0x70]
005ef4b3  AND ECX,0x2
005ef4b6  JZ 0x005ef4c7
005ef4b8  MOV EDX,dword ptr [EBP + 0xffffff74]
005ef4be  MOV EAX,dword ptr [EDX + 0x68]
005ef4c1  SUB EAX,dword ptr [EBP + 0x14]
005ef4c4  MOV dword ptr [EBP + 0x8],EAX
005ef4c7  MOV ECX,dword ptr [EBP + 0xffffff74]
005ef4cd  MOV EDX,dword ptr [ECX + 0x70]
005ef4d0  AND EDX,0x20
005ef4d3  JZ 0x005ef4e9
005ef4d5  MOV EAX,dword ptr [EBP + 0xffffff74]
005ef4db  MOV EAX,dword ptr [EAX + 0x68]
005ef4de  SUB EAX,dword ptr [EBP + 0x14]
005ef4e1  CDQ
005ef4e2  SUB EAX,EDX
005ef4e4  SAR EAX,0x1
005ef4e6  MOV dword ptr [EBP + 0x8],EAX
005ef4e9  MOV ECX,dword ptr [EBP + 0xffffff74]
005ef4ef  MOV EDX,dword ptr [ECX + 0x74]
005ef4f2  MOV EAX,dword ptr [EBP + 0x8]
005ef4f5  LEA ECX,[EAX + EDX*0x1 + -0x1]
005ef4f9  MOV dword ptr [EBP + 0x8],ECX
005ef4fc  MOV EDX,dword ptr [EBP + 0xffffff74]
005ef502  CMP dword ptr [EDX + 0xa0],0x0
005ef509  JZ 0x005ef514
005ef50b  MOV EAX,dword ptr [EBP + 0x8]
005ef50e  SUB EAX,0x1
005ef511  MOV dword ptr [EBP + 0x8],EAX
005ef514  MOV ECX,dword ptr [EBP + 0xffffff74]
005ef51a  MOVZX EDX,byte ptr [ECX + 0x9e]
005ef521  TEST EDX,EDX
005ef523  JZ 0x005ef8d9
005ef529  MOV EAX,dword ptr [EBP + 0xffffff74]
005ef52f  MOVZX ECX,byte ptr [EAX + 0x9f]
005ef536  TEST ECX,ECX
005ef538  JZ 0x005ef8d9
005ef53e  MOV EDX,dword ptr [EBP + 0xffffff74]
005ef544  MOV EAX,dword ptr [EDX]
005ef546  MOV ECX,dword ptr [EBP + 0xffffff74]
005ef54c  MOV EDX,dword ptr [EAX + 0xc0]
005ef552  CALL EDX
005ef554  MOVZX EAX,AL
005ef557  TEST EAX,EAX
005ef559  JZ 0x005ef8d9
005ef55f  PUSH 0x7c
005ef561  MOV ECX,dword ptr [EBP + 0xffffff74]
005ef567  CALL 0x005f0a30
005ef56c  MOVZX ECX,AL
005ef56f  MOV dword ptr [EBP + -0x58],ECX
005ef572  PUSH 0x10
005ef574  PUSH 0x0
005ef576  LEA EDX,[EBP + -0x30]
005ef579  PUSH EDX
005ef57a  CALL 0x00686fa2
005ef57f  ADD ESP,0xc
005ef582  MOV EAX,dword ptr [EBP + 0xffffff74]
005ef588  MOV ECX,dword ptr [EAX + 0x64]
005ef58b  MOV dword ptr [EBP + 0xffffff70],ECX
005ef591  CMP dword ptr [EBP + 0xffffff70],0x1
005ef598  JZ 0x005ef5b9
005ef59a  CMP dword ptr [EBP + 0xffffff70],0x2
005ef5a1  JZ 0x005ef635
005ef5a7  CMP dword ptr [EBP + 0xffffff70],0x3
005ef5ae  JZ 0x005ef679
005ef5b4  JMP 0x005ef6b0
005ef5b9  MOV EDX,dword ptr [EBP + 0xffffff74]
005ef5bf  MOV EAX,dword ptr [EDX + 0x98]
005ef5c5  MOVZX ECX,word ptr [EAX + 0x3e2]
005ef5cc  MOV dword ptr [EBP + -0x2c],ECX
005ef5cf  MOV EDX,dword ptr [EBP + 0xffffff74]
005ef5d5  MOV EAX,dword ptr [EDX + 0x98]
005ef5db  MOVZX ECX,word ptr [EAX + 0x3e4]
005ef5e2  MOV dword ptr [EBP + -0x30],ECX
005ef5e5  MOV EDX,dword ptr [EBP + 0xffffff74]
005ef5eb  MOV EAX,dword ptr [EDX + 0x98]
005ef5f1  MOVZX ECX,word ptr [EAX + 0x3e6]
005ef5f8  MOV EDX,dword ptr [EBP + 0xffffff74]
005ef5fe  MOVZX EAX,word ptr [EDX + 0x92]
005ef605  LEA ECX,[ECX + EAX*0x1 + 0x1]
005ef609  MOV dword ptr [EBP + -0x24],ECX
005ef60c  MOV EDX,dword ptr [EBP + 0xffffff74]
005ef612  MOV EAX,dword ptr [EDX + 0x98]
005ef618  MOVZX ECX,word ptr [EAX + 0x3e8]
005ef61f  MOV EDX,dword ptr [EBP + 0xffffff74]
005ef625  MOVZX EAX,word ptr [EDX + 0x90]
005ef62c  LEA ECX,[ECX + EAX*0x1 + 0x1]
005ef630  MOV dword ptr [EBP + -0x28],ECX
005ef633  JMP 0x005ef6b0
005ef635  MOV EDX,dword ptr [EBP + -0x58]
005ef638  SUB EDX,0x20
005ef63b  MOV dword ptr [EBP + -0x54],EDX
005ef63e  JNS 0x005ef647
005ef640  MOV dword ptr [EBP + -0x54],0x0
005ef647  MOV dword ptr [EBP + -0x30],0x0
005ef64e  MOV dword ptr [EBP + -0x2c],0x0
005ef655  PUSH -0x1
005ef657  PUSH 0x7c
005ef659  MOV ECX,dword ptr [EBP + 0xffffff74]
005ef65f  CALL 0x005ee950
005ef664  MOV dword ptr [EBP + -0x28],EAX
005ef667  PUSH 0x7c
005ef669  MOV ECX,dword ptr [EBP + 0xffffff74]
005ef66f  CALL 0x005eeaf0
005ef674  MOV dword ptr [EBP + -0x24],EAX
005ef677  JMP 0x005ef6b0
005ef679  MOV dword ptr [EBP + -0x54],0x7c
005ef680  MOV dword ptr [EBP + -0x30],0x0
005ef687  MOV dword ptr [EBP + -0x2c],0x0
005ef68e  PUSH -0x1
005ef690  PUSH 0x7c
005ef692  MOV ECX,dword ptr [EBP + 0xffffff74]
005ef698  CALL 0x005ee950
005ef69d  MOV dword ptr [EBP + -0x28],EAX
005ef6a0  PUSH 0x7c
005ef6a2  MOV ECX,dword ptr [EBP + 0xffffff74]
005ef6a8  CALL 0x005eeaf0
005ef6ad  MOV dword ptr [EBP + -0x24],EAX
005ef6b0  MOV EAX,dword ptr [EBP + 0x8]
005ef6b3  MOV dword ptr [EBP + -0x10],EAX
005ef6b6  MOV ECX,dword ptr [EBP + 0xc]
005ef6b9  MOV dword ptr [EBP + -0xc],ECX
005ef6bc  MOV EDX,dword ptr [EBP + -0x28]
005ef6bf  SUB EDX,dword ptr [EBP + -0x30]
005ef6c2  ADD EDX,dword ptr [EBP + 0x8]
005ef6c5  MOV dword ptr [EBP + -0x8],EDX
005ef6c8  MOV EAX,dword ptr [EBP + -0x24]
005ef6cb  SUB EAX,dword ptr [EBP + -0x2c]
005ef6ce  ADD EAX,dword ptr [EBP + -0xc]
005ef6d1  MOV dword ptr [EBP + -0x4],EAX
005ef6d4  MOV ECX,dword ptr [EBP + 0xffffff74]
005ef6da  MOV EDX,dword ptr [ECX + 0x14]
005ef6dd  MOV dword ptr [EBP + -0x74],EDX
005ef6e0  MOV EAX,dword ptr [EBP + 0xffffff74]
005ef6e6  MOV ECX,dword ptr [EAX + 0x10]
005ef6e9  MOV dword ptr [EBP + -0x70],ECX
005ef6ec  MOV EDX,dword ptr [EBP + -0x10]
005ef6ef  ADD EDX,dword ptr [EBP + -0x70]
005ef6f2  MOV dword ptr [EBP + -0x10],EDX
005ef6f5  MOV EAX,dword ptr [EBP + -0xc]
005ef6f8  ADD EAX,dword ptr [EBP + -0x74]
005ef6fb  MOV dword ptr [EBP + -0xc],EAX
005ef6fe  MOV ECX,dword ptr [EBP + -0x8]
005ef701  ADD ECX,dword ptr [EBP + -0x70]
005ef704  MOV dword ptr [EBP + -0x8],ECX
005ef707  MOV EDX,dword ptr [EBP + -0x4]
005ef70a  ADD EDX,dword ptr [EBP + -0x74]
005ef70d  MOV dword ptr [EBP + -0x4],EDX
005ef710  MOV EAX,dword ptr [EBP + -0x10]
005ef713  MOV dword ptr [EBP + -0x20],EAX
005ef716  MOV ECX,dword ptr [EBP + -0xc]
005ef719  MOV dword ptr [EBP + -0x1c],ECX
005ef71c  MOV EDX,dword ptr [EBP + -0x8]
005ef71f  MOV dword ptr [EBP + -0x18],EDX
005ef722  MOV EAX,dword ptr [EBP + -0x4]
005ef725  MOV dword ptr [EBP + -0x14],EAX
005ef728  MOV ECX,dword ptr [EBP + 0x10]
005ef72b  MOV EDX,dword ptr [ECX]
005ef72d  MOV dword ptr [EBP + -0x50],EDX
005ef730  MOV EAX,dword ptr [ECX + 0x4]
005ef733  MOV dword ptr [EBP + -0x4c],EAX
005ef736  MOV EDX,dword ptr [ECX + 0x8]
005ef739  MOV dword ptr [EBP + -0x48],EDX
005ef73c  MOV EAX,dword ptr [ECX + 0xc]
005ef73f  MOV dword ptr [EBP + -0x44],EAX
005ef742  MOV ECX,dword ptr [EBP + -0x30]
005ef745  MOV dword ptr [EBP + -0x68],ECX
005ef748  MOV EDX,dword ptr [EBP + -0x2c]
005ef74b  MOV dword ptr [EBP + -0x64],EDX
005ef74e  MOV EAX,dword ptr [EBP + -0x28]
005ef751  MOV dword ptr [EBP + -0x60],EAX
005ef754  MOV ECX,dword ptr [EBP + -0x24]
005ef757  MOV dword ptr [EBP + -0x5c],ECX
005ef75a  MOV EDX,dword ptr [EBP + -0x30]
005ef75d  MOV dword ptr [EBP + -0x40],EDX
005ef760  MOV EAX,dword ptr [EBP + -0x2c]
005ef763  MOV dword ptr [EBP + -0x3c],EAX
005ef766  MOV ECX,dword ptr [EBP + -0x28]
005ef769  MOV dword ptr [EBP + -0x38],ECX
005ef76c  MOV EDX,dword ptr [EBP + -0x24]
005ef76f  MOV dword ptr [EBP + -0x34],EDX
005ef772  LEA EAX,[EBP + -0x40]
005ef775  PUSH EAX
005ef776  LEA ECX,[EBP + -0x68]
005ef779  PUSH ECX
005ef77a  LEA EDX,[EBP + -0x50]
005ef77d  PUSH EDX
005ef77e  LEA EAX,[EBP + -0x20]
005ef781  PUSH EAX
005ef782  CALL 0x00624a70
005ef787  ADD ESP,0x10
005ef78a  MOVZX ECX,AL
005ef78d  TEST ECX,ECX
005ef78f  JZ 0x005ef8d9
005ef795  MOV EDX,dword ptr [EBP + 0xffffff74]
005ef79b  MOV ECX,dword ptr [EDX + 0x4]
005ef79e  CALL 0x005f84f0
005ef7a3  MOV dword ptr [EBP + -0x7c],EAX
005ef7a6  MOV EAX,dword ptr [EBP + 0xffffff74]
005ef7ac  MOV ECX,dword ptr [EAX + 0x4]
005ef7af  CALL 0x005f84d0
005ef7b4  MOV dword ptr [EBP + -0x78],EAX
005ef7b7  MOV ECX,dword ptr [EBP + -0x20]
005ef7ba  ADD ECX,dword ptr [EBP + -0x78]
005ef7bd  MOV dword ptr [EBP + -0x20],ECX
005ef7c0  MOV EDX,dword ptr [EBP + -0x1c]
005ef7c3  ADD EDX,dword ptr [EBP + -0x7c]
005ef7c6  MOV dword ptr [EBP + -0x1c],EDX
005ef7c9  MOV EAX,dword ptr [EBP + -0x18]
005ef7cc  ADD EAX,dword ptr [EBP + -0x78]
005ef7cf  MOV dword ptr [EBP + -0x18],EAX
005ef7d2  MOV ECX,dword ptr [EBP + -0x14]
005ef7d5  ADD ECX,dword ptr [EBP + -0x7c]
005ef7d8  MOV dword ptr [EBP + -0x14],ECX
005ef7db  MOV EDX,dword ptr [EBP + 0xffffff74]
005ef7e1  MOV AL,byte ptr [EDX + 0x9d]
005ef7e7  MOV byte ptr [EBP + -0x7d],AL
005ef7ea  MOVZX ECX,byte ptr [EBP + -0x7d]
005ef7ee  TEST ECX,ECX
005ef7f0  JZ 0x005ef894
005ef7f6  MOV EDX,dword ptr [EBP + 0xffffff74]
005ef7fc  MOV EAX,dword ptr [EDX + 0x4]
005ef7ff  MOV ECX,dword ptr [EAX + 0x1a8]
005ef805  MOV dword ptr [EBP + 0xffffff7c],ECX
005ef80b  PUSH 0x0
005ef80d  PUSH 0x0
005ef80f  PUSH 0x1
005ef811  MOV EDX,dword ptr [EBP + 0xffffff74]
005ef817  MOVZX EAX,byte ptr [EDX + 0x9c]
005ef81e  PUSH EAX
005ef81f  SUB ESP,0x10
005ef822  MOV ECX,ESP
005ef824  MOV EDX,dword ptr [EBP + -0x68]
005ef827  MOV dword ptr [ECX],EDX
005ef829  MOV EAX,dword ptr [EBP + -0x64]
005ef82c  MOV dword ptr [ECX + 0x4],EAX
005ef82f  MOV EDX,dword ptr [EBP + -0x60]
005ef832  MOV dword ptr [ECX + 0x8],EDX
005ef835  MOV EAX,dword ptr [EBP + -0x5c]
005ef838  MOV dword ptr [ECX + 0xc],EAX
005ef83b  SUB ESP,0x10
005ef83e  MOV ECX,ESP
005ef840  MOV EDX,dword ptr [EBP + -0x20]
005ef843  MOV dword ptr [ECX],EDX
005ef845  MOV EAX,dword ptr [EBP + -0x1c]
005ef848  MOV dword ptr [ECX + 0x4],EAX
005ef84b  MOV EDX,dword ptr [EBP + -0x18]
005ef84e  MOV dword ptr [ECX + 0x8],EDX
005ef851  MOV EAX,dword ptr [EBP + -0x14]
005ef854  MOV dword ptr [ECX + 0xc],EAX
005ef857  MOV ECX,dword ptr [EBP + 0xffffff7c]
005ef85d  MOV EDX,dword ptr [ECX + 0x50]
005ef860  PUSH EDX
005ef861  PUSH 0x0
005ef863  MOV EAX,dword ptr [EBP + 0xffffff74]
005ef869  MOV ECX,dword ptr [EAX + 0xb0]
005ef86f  CALL 0x006163e0
005ef874  SUB EAX,0x1
005ef877  NEG EAX
005ef879  SBB EAX,EAX
005ef87b  AND EAX,dword ptr [EBP + -0x54]
005ef87e  PUSH EAX
005ef87f  PUSH 0x0
005ef881  MOV ECX,dword ptr [EBP + 0xffffff74]
005ef887  MOV ECX,dword ptr [ECX + 0xb0]
005ef88d  CALL 0x00616510
005ef892  JMP 0x005ef8d9
005ef894  MOV byte ptr [EBP + -0x6c],0x0
005ef898  MOV byte ptr [EBP + -0x6b],0x0
005ef89c  MOV byte ptr [EBP + -0x6a],0x0
005ef8a0  MOV byte ptr [EBP + -0x69],0xff
005ef8a4  MOV EDX,dword ptr [EBP + 0xffffff74]
005ef8aa  MOV EAX,dword ptr [EDX + 0x4]
005ef8ad  MOV ECX,dword ptr [EAX + 0x1a8]
005ef8b3  MOV dword ptr [EBP + 0xffffff78],ECX
005ef8b9  PUSH 0x2
005ef8bb  MOV EDX,dword ptr [EBP + -0x6c]
005ef8be  PUSH EDX
005ef8bf  MOV EAX,dword ptr [EBP + -0x14]
005ef8c2  PUSH EAX
005ef8c3  MOV ECX,dword ptr [EBP + -0x1c]
005ef8c6  PUSH ECX
005ef8c7  MOV EDX,dword ptr [EBP + -0x20]
005ef8ca  PUSH EDX
005ef8cb  MOV EAX,dword ptr [EBP + 0xffffff78]
005ef8d1  MOV ECX,dword ptr [EAX + 0x50]
005ef8d4  CALL 0x00623f00
005ef8d9  MOV ESP,EBP
005ef8db  POP EBP
005ef8dc  RET 0x10
