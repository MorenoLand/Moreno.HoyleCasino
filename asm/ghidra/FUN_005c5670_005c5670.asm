; FUN_005c5670  005c5670
005c5670  PUSH EBP
005c5671  MOV EBP,ESP
005c5673  PUSH -0x1
005c5675  PUSH 0x6a8718
005c567a  MOV EAX,FS:[0x0]
005c5680  PUSH EAX
005c5681  PUSH ECX
005c5682  SUB ESP,0x258
005c5688  PUSH EBX
005c5689  PUSH ESI
005c568a  PUSH EDI
005c568b  MOV EAX,[0x00781870]
005c5690  XOR EAX,EBP
005c5692  PUSH EAX
005c5693  LEA EAX,[EBP + -0xc]
005c5696  MOV FS:[0x0],EAX
005c569c  MOV dword ptr [EBP + -0x10],ESP
005c569f  MOV dword ptr [EBP + 0xfffffdc0],ECX
005c56a5  MOV EAX,dword ptr [EBP + 0x14]
005c56a8  PUSH EAX
005c56a9  LEA ECX,[EBP + -0x44]
005c56ac  CALL 0x005c38f0
005c56b1  MOV dword ptr [EBP + -0x4],0x0
005c56b8  MOV ECX,dword ptr [EBP + 0xfffffdc0]
005c56be  CMP dword ptr [ECX + 0x4],0x0
005c56c2  JNZ 0x005c56d0
005c56c4  MOV dword ptr [EBP + 0xfffffdbc],0x0
005c56ce  JMP 0x005c56f2
005c56d0  MOV EDX,dword ptr [EBP + 0xfffffdc0]
005c56d6  MOV EAX,dword ptr [EBP + 0xfffffdc0]
005c56dc  MOV ECX,dword ptr [EDX + 0xc]
005c56df  SUB ECX,dword ptr [EAX + 0x4]
005c56e2  MOV EAX,ECX
005c56e4  CDQ
005c56e5  MOV ECX,0x34
005c56ea  IDIV ECX
005c56ec  MOV dword ptr [EBP + 0xfffffdbc],EAX
005c56f2  MOV EDX,dword ptr [EBP + 0xfffffdbc]
005c56f8  MOV dword ptr [EBP + -0x48],EDX
005c56fb  CMP dword ptr [EBP + 0x10],0x0
005c56ff  JNZ 0x005c5706
005c5701  JMP 0x005c5f9e
005c5706  MOV dword ptr [EBP + -0x58],0x4ec4ec4
005c570d  CMP dword ptr [EBP + -0x58],0x0
005c5711  JBE 0x005c571e
005c5713  MOV EAX,dword ptr [EBP + -0x58]
005c5716  MOV dword ptr [EBP + 0xfffffdb8],EAX
005c571c  JMP 0x005c5728
005c571e  MOV dword ptr [EBP + 0xfffffdb8],0x1
005c5728  MOV ECX,dword ptr [EBP + 0xfffffdc0]
005c572e  CMP dword ptr [ECX + 0x4],0x0
005c5732  JNZ 0x005c5740
005c5734  MOV dword ptr [EBP + 0xfffffdb4],0x0
005c573e  JMP 0x005c5762
005c5740  MOV EDX,dword ptr [EBP + 0xfffffdc0]
005c5746  MOV EAX,dword ptr [EBP + 0xfffffdc0]
005c574c  MOV ECX,dword ptr [EDX + 0x8]
005c574f  SUB ECX,dword ptr [EAX + 0x4]
005c5752  MOV EAX,ECX
005c5754  CDQ
005c5755  MOV ECX,0x34
005c575a  IDIV ECX
005c575c  MOV dword ptr [EBP + 0xfffffdb4],EAX
005c5762  MOV EDX,dword ptr [EBP + 0xfffffdb8]
005c5768  SUB EDX,dword ptr [EBP + 0xfffffdb4]
005c576e  CMP EDX,dword ptr [EBP + 0x10]
005c5771  JNC 0x005c577d
005c5773  CALL 0x005c60c0
005c5778  JMP 0x005c5f9e
005c577d  MOV EAX,dword ptr [EBP + 0xfffffdc0]
005c5783  CMP dword ptr [EAX + 0x4],0x0
005c5787  JNZ 0x005c5795
005c5789  MOV dword ptr [EBP + 0xfffffdb0],0x0
005c5793  JMP 0x005c57b5
005c5795  MOV ECX,dword ptr [EBP + 0xfffffdc0]
005c579b  MOV EDX,dword ptr [EBP + 0xfffffdc0]
005c57a1  MOV EAX,dword ptr [ECX + 0x8]
005c57a4  SUB EAX,dword ptr [EDX + 0x4]
005c57a7  CDQ
005c57a8  MOV ECX,0x34
005c57ad  IDIV ECX
005c57af  MOV dword ptr [EBP + 0xfffffdb0],EAX
005c57b5  MOV EDX,dword ptr [EBP + 0xfffffdb0]
005c57bb  ADD EDX,dword ptr [EBP + 0x10]
005c57be  CMP dword ptr [EBP + -0x48],EDX
005c57c1  JNC 0x005c5c65
005c57c7  MOV dword ptr [EBP + 0xffffff60],0x4ec4ec4
005c57d1  CMP dword ptr [EBP + 0xffffff60],0x0
005c57d8  JBE 0x005c57e8
005c57da  MOV EAX,dword ptr [EBP + 0xffffff60]
005c57e0  MOV dword ptr [EBP + 0xfffffdac],EAX
005c57e6  JMP 0x005c57f2
005c57e8  MOV dword ptr [EBP + 0xfffffdac],0x1
005c57f2  MOV ECX,dword ptr [EBP + -0x48]
005c57f5  SHR ECX,0x1
005c57f7  MOV EDX,dword ptr [EBP + 0xfffffdac]
005c57fd  SUB EDX,ECX
005c57ff  CMP EDX,dword ptr [EBP + -0x48]
005c5802  JNC 0x005c5810
005c5804  MOV dword ptr [EBP + 0xfffffda8],0x0
005c580e  JMP 0x005c581e
005c5810  MOV EAX,dword ptr [EBP + -0x48]
005c5813  SHR EAX,0x1
005c5815  ADD EAX,dword ptr [EBP + -0x48]
005c5818  MOV dword ptr [EBP + 0xfffffda8],EAX
005c581e  MOV ECX,dword ptr [EBP + 0xfffffda8]
005c5824  MOV dword ptr [EBP + -0x48],ECX
005c5827  MOV EDX,dword ptr [EBP + 0xfffffdc0]
005c582d  CMP dword ptr [EDX + 0x4],0x0
005c5831  JNZ 0x005c583f
005c5833  MOV dword ptr [EBP + 0xfffffda4],0x0
005c583d  JMP 0x005c585f
005c583f  MOV EAX,dword ptr [EBP + 0xfffffdc0]
005c5845  MOV ECX,dword ptr [EBP + 0xfffffdc0]
005c584b  MOV EAX,dword ptr [EAX + 0x8]
005c584e  SUB EAX,dword ptr [ECX + 0x4]
005c5851  CDQ
005c5852  MOV ECX,0x34
005c5857  IDIV ECX
005c5859  MOV dword ptr [EBP + 0xfffffda4],EAX
005c585f  MOV EDX,dword ptr [EBP + 0xfffffda4]
005c5865  ADD EDX,dword ptr [EBP + 0x10]
005c5868  CMP dword ptr [EBP + -0x48],EDX
005c586b  JNC 0x005c58b1
005c586d  MOV EAX,dword ptr [EBP + 0xfffffdc0]
005c5873  CMP dword ptr [EAX + 0x4],0x0
005c5877  JNZ 0x005c5885
005c5879  MOV dword ptr [EBP + 0xfffffda0],0x0
005c5883  JMP 0x005c58a5
005c5885  MOV ECX,dword ptr [EBP + 0xfffffdc0]
005c588b  MOV EDX,dword ptr [EBP + 0xfffffdc0]
005c5891  MOV EAX,dword ptr [ECX + 0x8]
005c5894  SUB EAX,dword ptr [EDX + 0x4]
005c5897  CDQ
005c5898  MOV ECX,0x34
005c589d  IDIV ECX
005c589f  MOV dword ptr [EBP + 0xfffffda0],EAX
005c58a5  MOV EDX,dword ptr [EBP + 0xfffffda0]
005c58ab  ADD EDX,dword ptr [EBP + 0x10]
005c58ae  MOV dword ptr [EBP + -0x48],EDX
005c58b1  PUSH 0x0
005c58b3  MOV EAX,dword ptr [EBP + -0x48]
005c58b6  PUSH EAX
005c58b7  CALL 0x005c6370
005c58bc  ADD ESP,0x8
005c58bf  MOV dword ptr [EBP + -0x50],EAX
005c58c2  MOV ECX,dword ptr [EBP + -0x50]
005c58c5  MOV dword ptr [EBP + -0x4c],ECX
005c58c8  MOV byte ptr [EBP + -0x4],0x1
005c58cc  MOV EDX,dword ptr [EBP + 0xfffffdc0]
005c58d2  MOV EAX,dword ptr [EDX + 0x4]
005c58d5  MOV dword ptr [EBP + 0xffffff38],EAX
005c58db  MOV ECX,dword ptr [EBP + -0x50]
005c58de  MOV dword ptr [EBP + 0xffffff3c],ECX
005c58e4  MOV EDX,dword ptr [EBP + 0xc]
005c58e7  MOV dword ptr [EBP + 0xffffff40],EDX
005c58ed  MOV EAX,dword ptr [EBP + 0xffffff38]
005c58f3  MOV dword ptr [EBP + 0xffffff44],EAX
005c58f9  XOR ECX,ECX
005c58fb  MOV byte ptr [EBP + 0xffffff5f],CL
005c5901  MOV DL,byte ptr [EBP + 0xffffff5d]
005c5907  MOV byte ptr [EBP + 0xffffff5e],DL
005c590d  MOV EAX,dword ptr [EBP + 0xffffff40]
005c5913  MOV dword ptr [EBP + 0xffffff58],EAX
005c5919  MOV ECX,dword ptr [EBP + 0xffffff44]
005c591f  MOV dword ptr [EBP + 0xffffff50],ECX
005c5925  MOV DL,byte ptr [EBP + 0xffffff5f]
005c592b  MOV byte ptr [EBP + 0xffffff4b],DL
005c5931  MOV EAX,dword ptr [EBP + 0xffffff3c]
005c5937  MOV dword ptr [EBP + 0xffffff4c],EAX
005c593d  MOV ECX,dword ptr [EBP + 0xfffffdc0]
005c5943  PUSH ECX
005c5944  MOV EDX,dword ptr [EBP + 0xffffff4c]
005c594a  PUSH EDX
005c594b  MOV EAX,dword ptr [EBP + 0xffffff58]
005c5951  PUSH EAX
005c5952  MOV ECX,dword ptr [EBP + 0xffffff50]
005c5958  PUSH ECX
005c5959  CALL 0x005c6c00
005c595e  ADD ESP,0x10
005c5961  MOV dword ptr [EBP + 0xfffffd9c],EAX
005c5967  MOV EDX,dword ptr [EBP + 0xfffffd9c]
005c596d  MOV dword ptr [EBP + -0x4c],EDX
005c5970  MOV EAX,dword ptr [EBP + -0x4c]
005c5973  MOV dword ptr [EBP + 0xffffff30],EAX
005c5979  XOR ECX,ECX
005c597b  MOV byte ptr [EBP + 0xffffff37],CL
005c5981  MOV DL,byte ptr [EBP + 0xffffff35]
005c5987  MOV byte ptr [EBP + 0xffffff36],DL
005c598d  MOV AL,byte ptr [EBP + 0xffffff37]
005c5993  PUSH EAX
005c5994  MOV CL,byte ptr [EBP + 0xffffff36]
005c599a  PUSH ECX
005c599b  MOV EDX,dword ptr [EBP + 0xfffffdc0]
005c59a1  PUSH EDX
005c59a2  LEA EAX,[EBP + -0x44]
005c59a5  PUSH EAX
005c59a6  MOV ECX,dword ptr [EBP + 0x10]
005c59a9  PUSH ECX
005c59aa  MOV EDX,dword ptr [EBP + 0xffffff30]
005c59b0  PUSH EDX
005c59b1  CALL 0x005c6b00
005c59b6  ADD ESP,0x18
005c59b9  MOV EAX,dword ptr [EBP + 0x10]
005c59bc  IMUL EAX,EAX,0x34
005c59bf  ADD EAX,dword ptr [EBP + -0x4c]
005c59c2  MOV dword ptr [EBP + -0x4c],EAX
005c59c5  MOV ECX,dword ptr [EBP + 0xfffffdc0]
005c59cb  MOV EDX,dword ptr [ECX + 0x8]
005c59ce  MOV dword ptr [EBP + 0xffffff08],EDX
005c59d4  MOV EAX,dword ptr [EBP + -0x4c]
005c59d7  MOV dword ptr [EBP + 0xffffff0c],EAX
005c59dd  MOV ECX,dword ptr [EBP + 0xffffff08]
005c59e3  MOV dword ptr [EBP + 0xffffff10],ECX
005c59e9  MOV EDX,dword ptr [EBP + 0xc]
005c59ec  MOV dword ptr [EBP + 0xffffff14],EDX
005c59f2  XOR EAX,EAX
005c59f4  MOV byte ptr [EBP + 0xffffff2f],AL
005c59fa  MOV CL,byte ptr [EBP + 0xffffff2d]
005c5a00  MOV byte ptr [EBP + 0xffffff2e],CL
005c5a06  MOV EDX,dword ptr [EBP + 0xffffff10]
005c5a0c  MOV dword ptr [EBP + 0xffffff28],EDX
005c5a12  MOV EAX,dword ptr [EBP + 0xffffff14]
005c5a18  MOV dword ptr [EBP + 0xffffff20],EAX
005c5a1e  MOV CL,byte ptr [EBP + 0xffffff2f]
005c5a24  MOV byte ptr [EBP + 0xffffff1b],CL
005c5a2a  MOV EDX,dword ptr [EBP + 0xffffff0c]
005c5a30  MOV dword ptr [EBP + 0xffffff1c],EDX
005c5a36  MOV EAX,dword ptr [EBP + 0xfffffdc0]
005c5a3c  PUSH EAX
005c5a3d  MOV ECX,dword ptr [EBP + 0xffffff1c]
005c5a43  PUSH ECX
005c5a44  MOV EDX,dword ptr [EBP + 0xffffff28]
005c5a4a  PUSH EDX
005c5a4b  MOV EAX,dword ptr [EBP + 0xffffff20]
005c5a51  PUSH EAX
005c5a52  CALL 0x005c6c00
005c5a57  ADD ESP,0x10
005c5a5a  JMP 0x005c5af9
005c5c65  MOV EDX,dword ptr [EBP + 0xfffffdc0]
005c5c6b  MOV EAX,dword ptr [EDX + 0x8]
005c5c6e  SUB EAX,dword ptr [EBP + 0xc]
005c5c71  CDQ
005c5c72  MOV ECX,0x34
005c5c77  IDIV ECX
005c5c79  CMP EAX,dword ptr [EBP + 0x10]
005c5c7c  JNC 0x005c5e73
005c5c82  MOV EDX,dword ptr [EBP + 0xfffffdc0]
005c5c88  MOV EAX,dword ptr [EDX + 0x8]
005c5c8b  MOV dword ptr [EBP + 0xfffffe98],EAX
005c5c91  MOV ECX,dword ptr [EBP + 0xfffffdc0]
005c5c97  PUSH ECX
005c5c98  MOV EDX,dword ptr [EBP + 0x10]
005c5c9b  IMUL EDX,EDX,0x34
005c5c9e  ADD EDX,dword ptr [EBP + 0xc]
005c5ca1  PUSH EDX
005c5ca2  MOV EAX,dword ptr [EBP + 0xfffffe98]
005c5ca8  PUSH EAX
005c5ca9  MOV ECX,dword ptr [EBP + 0xc]
005c5cac  PUSH ECX
005c5cad  CALL 0x005c69f0
005c5cb2  ADD ESP,0x10
005c5cb5  MOV byte ptr [EBP + -0x4],0x3
005c5cb9  MOV EDX,dword ptr [EBP + 0xfffffdc0]
005c5cbf  MOV EAX,dword ptr [EDX + 0x8]
005c5cc2  SUB EAX,dword ptr [EBP + 0xc]
005c5cc5  CDQ
005c5cc6  MOV ECX,0x34
005c5ccb  IDIV ECX
005c5ccd  MOV EDX,dword ptr [EBP + 0x10]
005c5cd0  SUB EDX,EAX
005c5cd2  MOV dword ptr [EBP + 0xfffffe88],EDX
005c5cd8  MOV EAX,dword ptr [EBP + 0xfffffdc0]
005c5cde  MOV ECX,dword ptr [EAX + 0x8]
005c5ce1  MOV dword ptr [EBP + 0xfffffe8c],ECX
005c5ce7  MOV EDX,dword ptr [EBP + 0xfffffe8c]
005c5ced  MOV dword ptr [EBP + 0xfffffe90],EDX
005c5cf3  XOR EAX,EAX
005c5cf5  MOV byte ptr [EBP + 0xfffffe97],AL
005c5cfb  MOV CL,byte ptr [EBP + 0xfffffe95]
005c5d01  MOV byte ptr [EBP + 0xfffffe96],CL
005c5d07  MOV DL,byte ptr [EBP + 0xfffffe97]
005c5d0d  PUSH EDX
005c5d0e  MOV AL,byte ptr [EBP + 0xfffffe96]
005c5d14  PUSH EAX
005c5d15  MOV ECX,dword ptr [EBP + 0xfffffdc0]
005c5d1b  PUSH ECX
005c5d1c  LEA EDX,[EBP + -0x44]
005c5d1f  PUSH EDX
005c5d20  MOV EAX,dword ptr [EBP + 0xfffffe88]
005c5d26  PUSH EAX
005c5d27  MOV ECX,dword ptr [EBP + 0xfffffe90]
005c5d2d  PUSH ECX
005c5d2e  CALL 0x005c6b00
005c5d33  ADD ESP,0x18
005c5d36  JMP 0x005c5de7
005c5e73  MOV ECX,dword ptr [EBP + 0xfffffdc0]
005c5e79  MOV EDX,dword ptr [ECX + 0x8]
005c5e7c  MOV dword ptr [EBP + -0x54],EDX
005c5e7f  MOV EAX,dword ptr [EBP + 0xfffffdc0]
005c5e85  MOV ECX,dword ptr [EAX + 0x8]
005c5e88  MOV dword ptr [EBP + 0xfffffe20],ECX
005c5e8e  MOV EDX,dword ptr [EBP + 0xfffffdc0]
005c5e94  PUSH EDX
005c5e95  MOV EAX,dword ptr [EBP + 0xfffffe20]
005c5e9b  PUSH EAX
005c5e9c  MOV ECX,dword ptr [EBP + -0x54]
005c5e9f  PUSH ECX
005c5ea0  MOV EDX,dword ptr [EBP + 0x10]
005c5ea3  IMUL EDX,EDX,0x34
005c5ea6  MOV EAX,dword ptr [EBP + -0x54]
005c5ea9  SUB EAX,EDX
005c5eab  PUSH EAX
005c5eac  CALL 0x005c69f0
005c5eb1  ADD ESP,0x10
005c5eb4  MOV ECX,dword ptr [EBP + 0xfffffdc0]
005c5eba  MOV dword ptr [ECX + 0x8],EAX
005c5ebd  MOV EDX,dword ptr [EBP + -0x54]
005c5ec0  MOV dword ptr [EBP + 0xfffffddc],EDX
005c5ec6  MOV EAX,dword ptr [EBP + 0x10]
005c5ec9  IMUL EAX,EAX,0x34
005c5ecc  MOV ECX,dword ptr [EBP + -0x54]
005c5ecf  SUB ECX,EAX
005c5ed1  MOV dword ptr [EBP + 0xfffffde0],ECX
005c5ed7  MOV EDX,dword ptr [EBP + 0xc]
005c5eda  MOV dword ptr [EBP + 0xfffffde4],EDX
005c5ee0  XOR EAX,EAX
005c5ee2  MOV byte ptr [EBP + 0xfffffe1f],AL
005c5ee8  MOV CL,byte ptr [EBP + 0xfffffe1c]
005c5eee  MOV byte ptr [EBP + 0xfffffe1e],CL
005c5ef4  MOV EDX,dword ptr [EBP + 0xfffffde0]
005c5efa  MOV dword ptr [EBP + 0xfffffe14],EDX
005c5f00  MOV EAX,dword ptr [EBP + 0xfffffde4]
005c5f06  MOV dword ptr [EBP + 0xfffffe0c],EAX
005c5f0c  MOV CL,byte ptr [EBP + 0xfffffe1f]
005c5f12  PUSH ECX
005c5f13  MOV DL,byte ptr [EBP + 0xfffffe1e]
005c5f19  PUSH EDX
005c5f1a  MOV AL,byte ptr [EBP + 0xfffffe1d]
005c5f20  PUSH EAX
005c5f21  MOV ECX,dword ptr [EBP + 0xfffffddc]
005c5f27  PUSH ECX
005c5f28  MOV EDX,dword ptr [EBP + 0xfffffe14]
005c5f2e  PUSH EDX
005c5f2f  MOV EAX,dword ptr [EBP + 0xfffffe0c]
005c5f35  PUSH EAX
005c5f36  CALL 0x005c6a70
005c5f3b  ADD ESP,0x18
005c5f3e  MOV ECX,dword ptr [EBP + 0x10]
005c5f41  IMUL ECX,ECX,0x34
005c5f44  ADD ECX,dword ptr [EBP + 0xc]
005c5f47  MOV dword ptr [EBP + 0xfffffdc4],ECX
005c5f4d  MOV EDX,dword ptr [EBP + 0xc]
005c5f50  MOV dword ptr [EBP + 0xfffffdc8],EDX
005c5f56  MOV EAX,dword ptr [EBP + 0xfffffdc4]
005c5f5c  MOV dword ptr [EBP + 0xfffffdd4],EAX
005c5f62  MOV ECX,dword ptr [EBP + 0xfffffdc8]
005c5f68  MOV dword ptr [EBP + 0xfffffdcc],ECX
005c5f6e  JMP 0x005c5f7f
005c5f70  MOV EDX,dword ptr [EBP + 0xfffffdcc]
005c5f76  ADD EDX,0x34
005c5f79  MOV dword ptr [EBP + 0xfffffdcc],EDX
005c5f7f  MOV EAX,dword ptr [EBP + 0xfffffdcc]
005c5f85  CMP EAX,dword ptr [EBP + 0xfffffdd4]
005c5f8b  JZ 0x005c5f9e
005c5f8d  LEA ECX,[EBP + -0x44]
005c5f90  PUSH ECX
005c5f91  MOV ECX,dword ptr [EBP + 0xfffffdcc]
005c5f97  CALL 0x005c3a20
005c5f9c  JMP 0x005c5f70
