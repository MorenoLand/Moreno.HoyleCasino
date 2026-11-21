; FUN_005bf480  005bf480
005bf480  PUSH EBP
005bf481  MOV EBP,ESP
005bf483  PUSH -0x1
005bf485  PUSH 0x6a8338
005bf48a  MOV EAX,FS:[0x0]
005bf490  PUSH EAX
005bf491  SUB ESP,0xb4
005bf497  MOV EAX,[0x00781870]
005bf49c  XOR EAX,EBP
005bf49e  PUSH EAX
005bf49f  LEA EAX,[EBP + -0xc]
005bf4a2  MOV FS:[0x0],EAX
005bf4a8  MOV dword ptr [EBP + 0xffffff50],ECX
005bf4ae  MOV EAX,dword ptr [EBP + 0xffffff50]
005bf4b4  MOV dword ptr [EAX + 0x18],0x3
005bf4bb  MOV ECX,dword ptr [EBP + 0x8]
005bf4be  MOV dword ptr [EBP + 0xffffff4c],ECX
005bf4c4  CMP dword ptr [EBP + 0xffffff4c],0x3158d1
005bf4ce  JL 0x005bf4f8
005bf4d0  CMP dword ptr [EBP + 0xffffff4c],0x3158d5
005bf4da  JLE 0x005bf4de
005bf4dc  JMP 0x005bf4f8
005bf4de  MOV EDX,dword ptr [EBP + 0x8]
005bf4e1  IMUL EDX,EDX,0x90
005bf4e7  LEA EAX,[EDX + 0xe4b39d40]
005bf4ed  MOV ECX,dword ptr [EBP + 0xffffff50]
005bf4f3  MOV dword ptr [ECX + 0x14],EAX
005bf4f6  JMP 0x005bf505
005bf4f8  MOV EDX,dword ptr [EBP + 0xffffff50]
005bf4fe  MOV dword ptr [EDX + 0x14],0x7592d0
005bf505  PUSH 0x178
005bf50a  CALL 0x00686d82
005bf50f  ADD ESP,0x4
005bf512  MOV dword ptr [EBP + -0x2c],EAX
005bf515  MOV dword ptr [EBP + -0x4],0x0
005bf51c  CMP dword ptr [EBP + -0x2c],0x0
005bf520  JZ 0x005bf532
005bf522  MOV ECX,dword ptr [EBP + -0x2c]
005bf525  CALL 0x005eaaf0
005bf52a  MOV dword ptr [EBP + 0xffffff48],EAX
005bf530  JMP 0x005bf53c
005bf532  MOV dword ptr [EBP + 0xffffff48],0x0
005bf53c  MOV EAX,dword ptr [EBP + 0xffffff48]
005bf542  MOV dword ptr [EBP + -0x28],EAX
005bf545  MOV dword ptr [EBP + -0x4],0xffffffff
005bf54c  MOV ECX,dword ptr [EBP + -0x28]
005bf54f  MOV dword ptr [EBP + -0x1c],ECX
005bf552  PUSH 0x0
005bf554  PUSH 0xff
005bf559  PUSH 0x0
005bf55b  PUSH 0x64
005bf55d  PUSH 0x0
005bf55f  PUSH 0x0
005bf561  MOV EDX,dword ptr [EBP + 0xffffff50]
005bf567  MOV EAX,dword ptr [EDX + 0x14]
005bf56a  MOV ECX,dword ptr [EAX + 0x14]
005bf56d  PUSH ECX
005bf56e  PUSH 0x64
005bf570  MOV EDX,dword ptr [EBP + -0x1c]
005bf573  PUSH EDX
005bf574  MOV EAX,dword ptr [EBP + 0xffffff50]
005bf57a  MOV ECX,dword ptr [EAX + 0xc]
005bf57d  CALL 0x005f9ce0
005bf582  MOV ECX,dword ptr [EBP + 0xffffff50]
005bf588  MOV EDX,dword ptr [ECX + 0x14]
005bf58b  MOV EAX,dword ptr [EDX + 0x18]
005bf58e  PUSH EAX
005bf58f  MOV ECX,dword ptr [EBP + -0x1c]
005bf592  CALL 0x005eb000
005bf597  MOV ECX,dword ptr [EBP + 0xffffff50]
005bf59d  MOV EDX,dword ptr [ECX + 0x14]
005bf5a0  MOV EAX,dword ptr [EDX + 0x1c]
005bf5a3  PUSH EAX
005bf5a4  MOV ECX,dword ptr [EBP + -0x1c]
005bf5a7  MOV EDX,dword ptr [ECX]
005bf5a9  MOV ECX,dword ptr [EBP + -0x1c]
005bf5ac  MOV EAX,dword ptr [EDX + 0xb0]
005bf5b2  CALL EAX
005bf5b4  PUSH 0x178
005bf5b9  CALL 0x00686d82
005bf5be  ADD ESP,0x4
005bf5c1  MOV dword ptr [EBP + -0x34],EAX
005bf5c4  MOV dword ptr [EBP + -0x4],0x1
005bf5cb  CMP dword ptr [EBP + -0x34],0x0
005bf5cf  JZ 0x005bf5e1
005bf5d1  MOV ECX,dword ptr [EBP + -0x34]
005bf5d4  CALL 0x005eaaf0
005bf5d9  MOV dword ptr [EBP + 0xffffff44],EAX
005bf5df  JMP 0x005bf5eb
005bf5e1  MOV dword ptr [EBP + 0xffffff44],0x0
005bf5eb  MOV ECX,dword ptr [EBP + 0xffffff44]
005bf5f1  MOV dword ptr [EBP + -0x30],ECX
005bf5f4  MOV dword ptr [EBP + -0x4],0xffffffff
005bf5fb  MOV EDX,dword ptr [EBP + -0x30]
005bf5fe  MOV dword ptr [EBP + -0x20],EDX
005bf601  PUSH 0x0
005bf603  PUSH 0xff
005bf608  PUSH 0x0
005bf60a  PUSH 0xca
005bf60f  MOV EAX,dword ptr [EBP + 0xffffff50]
005bf615  MOV ECX,dword ptr [EAX + 0x14]
005bf618  MOV EDX,dword ptr [ECX + 0x34]
005bf61b  PUSH EDX
005bf61c  MOV EAX,dword ptr [EBP + 0xffffff50]
005bf622  MOV ECX,dword ptr [EAX + 0x14]
005bf625  MOV EDX,dword ptr [ECX + 0x30]
005bf628  PUSH EDX
005bf629  MOV EAX,dword ptr [EBP + 0xffffff50]
005bf62f  MOV ECX,dword ptr [EAX + 0x14]
005bf632  MOV EDX,dword ptr [ECX + 0x20]
005bf635  PUSH EDX
005bf636  PUSH 0xca
005bf63b  MOV EAX,dword ptr [EBP + -0x20]
005bf63e  PUSH EAX
005bf63f  MOV ECX,dword ptr [EBP + 0xffffff50]
005bf645  MOV ECX,dword ptr [ECX + 0xc]
005bf648  CALL 0x005f9ce0
005bf64d  MOV EDX,dword ptr [EBP + 0xffffff50]
005bf653  MOV EAX,dword ptr [EDX + 0x14]
005bf656  MOV ECX,dword ptr [EAX + 0x24]
005bf659  PUSH ECX
005bf65a  MOV ECX,dword ptr [EBP + -0x20]
005bf65d  CALL 0x005eb000
005bf662  MOV EDX,dword ptr [EBP + 0xffffff50]
005bf668  MOV EAX,dword ptr [EDX + 0x14]
005bf66b  MOV ECX,dword ptr [EAX + 0x28]
005bf66e  PUSH ECX
005bf66f  MOV EDX,dword ptr [EBP + -0x20]
005bf672  MOV EAX,dword ptr [EDX]
005bf674  MOV ECX,dword ptr [EBP + -0x20]
005bf677  MOV EDX,dword ptr [EAX + 0xb0]
005bf67d  CALL EDX
005bf67f  MOV dword ptr [EBP + -0x18],0x0
005bf686  MOV dword ptr [EBP + -0x10],0x0
005bf68d  JMP 0x005bf698
005bf68f  MOV EAX,dword ptr [EBP + -0x10]
005bf692  ADD EAX,0x1
005bf695  MOV dword ptr [EBP + -0x10],EAX
005bf698  MOV ECX,dword ptr [EBP + 0xffffff50]
005bf69e  MOV EDX,dword ptr [ECX + 0x14]
005bf6a1  MOV EAX,dword ptr [EBP + -0x10]
005bf6a4  CMP EAX,dword ptr [EDX + 0x4]
005bf6a7  JGE 0x005bf7d8
005bf6ad  MOV dword ptr [EBP + -0x14],0x0
005bf6b4  JMP 0x005bf6bf
005bf6b6  MOV ECX,dword ptr [EBP + -0x14]
005bf6b9  ADD ECX,0x1
005bf6bc  MOV dword ptr [EBP + -0x14],ECX
005bf6bf  MOV EDX,dword ptr [EBP + 0xffffff50]
005bf6c5  MOV EAX,dword ptr [EDX + 0x14]
005bf6c8  MOV ECX,dword ptr [EBP + -0x14]
005bf6cb  CMP ECX,dword ptr [EAX]
005bf6cd  JGE 0x005bf7d3
005bf6d3  PUSH 0x1dc
005bf6d8  CALL 0x00686d82
005bf6dd  ADD ESP,0x4
005bf6e0  MOV dword ptr [EBP + -0x3c],EAX
005bf6e3  MOV dword ptr [EBP + -0x4],0x2
005bf6ea  CMP dword ptr [EBP + -0x3c],0x0
005bf6ee  JZ 0x005bf700
005bf6f0  MOV ECX,dword ptr [EBP + -0x3c]
005bf6f3  CALL 0x00601a80
005bf6f8  MOV dword ptr [EBP + 0xffffff40],EAX
005bf6fe  JMP 0x005bf70a
005bf700  MOV dword ptr [EBP + 0xffffff40],0x0
005bf70a  MOV EDX,dword ptr [EBP + 0xffffff40]
005bf710  MOV dword ptr [EBP + -0x38],EDX
005bf713  MOV dword ptr [EBP + -0x4],0xffffffff
005bf71a  MOV EAX,dword ptr [EBP + -0x38]
005bf71d  MOV dword ptr [EBP + -0x24],EAX
005bf720  PUSH 0x0
005bf722  PUSH -0x1
005bf724  PUSH -0x1
005bf726  PUSH -0x1
005bf728  PUSH -0x1
005bf72a  PUSH 0x6b27f8
005bf72f  MOV ECX,dword ptr [EBP + -0x18]
005bf732  ADD ECX,0x65
005bf735  PUSH ECX
005bf736  MOV EDX,dword ptr [EBP + 0xffffff50]
005bf73c  MOV EAX,dword ptr [EDX + 0x14]
005bf73f  MOV ECX,dword ptr [EBP + 0xffffff50]
005bf745  MOV EDX,dword ptr [ECX + 0x14]
005bf748  MOV ECX,dword ptr [EBP + -0x10]
005bf74b  IMUL ECX,dword ptr [EDX + 0x4c]
005bf74f  ADD ECX,dword ptr [EAX + 0x44]
005bf752  PUSH ECX
005bf753  MOV EDX,dword ptr [EBP + 0xffffff50]
005bf759  MOV EAX,dword ptr [EDX + 0x14]
005bf75c  MOV ECX,dword ptr [EBP + 0xffffff50]
005bf762  MOV EDX,dword ptr [ECX + 0x14]
005bf765  MOV ECX,dword ptr [EBP + -0x14]
005bf768  IMUL ECX,dword ptr [EDX + 0x48]
005bf76c  ADD ECX,dword ptr [EAX + 0x40]
005bf76f  PUSH ECX
005bf770  MOV EDX,dword ptr [EBP + 0xffffff50]
005bf776  MOV EAX,dword ptr [EDX + 0x14]
005bf779  MOV ECX,dword ptr [EAX + 0x8]
005bf77c  PUSH ECX
005bf77d  MOV EDX,dword ptr [EBP + -0x18]
005bf780  ADD EDX,0x65
005bf783  PUSH EDX
005bf784  MOV EAX,dword ptr [EBP + -0x24]
005bf787  PUSH EAX
005bf788  MOV ECX,dword ptr [EBP + 0xffffff50]
005bf78e  MOV ECX,dword ptr [ECX + 0xc]
005bf791  CALL 0x005f9de0
005bf796  MOV EDX,dword ptr [EBP + 0xffffff50]
005bf79c  MOV EAX,dword ptr [EDX + 0x14]
005bf79f  MOV CL,byte ptr [EAX + 0x2c]
005bf7a2  PUSH ECX
005bf7a3  MOV ECX,dword ptr [EBP + -0x24]
005bf7a6  CALL 0x005eb700
005bf7ab  MOV ECX,dword ptr [EBP + -0x24]
005bf7ae  CALL 0x005eb130
005bf7b3  PUSH EAX
005bf7b4  CALL 0x0062fbf0
005bf7b9  ADD ESP,0x4
005bf7bc  PUSH EAX
005bf7bd  MOV ECX,dword ptr [EBP + -0x24]
005bf7c0  CALL 0x005eb000
005bf7c5  MOV EDX,dword ptr [EBP + -0x18]
005bf7c8  ADD EDX,0x1
005bf7cb  MOV dword ptr [EBP + -0x18],EDX
005bf7ce  JMP 0x005bf6b6
005bf7d3  JMP 0x005bf68f
005bf7d8  MOV dword ptr [EBP + -0x18],0x0
005bf7df  JMP 0x005bf7ea
005bf7e1  MOV EAX,dword ptr [EBP + -0x18]
005bf7e4  ADD EAX,0x1
005bf7e7  MOV dword ptr [EBP + -0x18],EAX
005bf7ea  MOV ECX,dword ptr [EBP + 0xffffff50]
005bf7f0  MOV EDX,dword ptr [ECX + 0x14]
005bf7f3  MOV EAX,dword ptr [EBP + -0x18]
005bf7f6  SHL EAX,0x4
005bf7f9  MOV ECX,dword ptr [EDX + 0x3c]
005bf7fc  CMP dword ptr [EAX + ECX*0x1],-0x64
005bf800  JZ 0x005bf82b
005bf802  MOV EDX,dword ptr [EBP + 0xffffff50]
005bf808  MOV EAX,dword ptr [EDX + 0x14]
005bf80b  MOV ECX,dword ptr [EBP + -0x18]
005bf80e  SHL ECX,0x4
005bf811  ADD ECX,dword ptr [EAX + 0x3c]
005bf814  MOV dword ptr [EBP + -0x40],ECX
005bf817  LEA EDX,[EBP + -0x40]
005bf81a  PUSH EDX
005bf81b  MOV ECX,dword ptr [EBP + 0xffffff50]
005bf821  ADD ECX,0x1c
005bf824  CALL 0x005bfd30
005bf829  JMP 0x005bf7e1
005bf82b  MOV ECX,dword ptr [EBP + 0xffffff50]
005bf831  CALL 0x005bfc00
005bf836  MOV ECX,dword ptr [EBP + -0xc]
005bf839  MOV dword ptr FS:[0x0],ECX
005bf840  POP ECX
005bf841  MOV ESP,EBP
005bf843  POP EBP
005bf844  RET 0x4
