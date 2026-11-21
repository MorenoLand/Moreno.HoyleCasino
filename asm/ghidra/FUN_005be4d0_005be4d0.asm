; FUN_005be4d0  005be4d0
005be4d0  PUSH EBP
005be4d1  MOV EBP,ESP
005be4d3  SUB ESP,0x80
005be4d9  MOV dword ptr [EBP + -0x74],ECX
005be4dc  MOV EAX,dword ptr [EBP + -0x74]
005be4df  CMP dword ptr [EAX + 0x4],0x0
005be4e3  JNZ 0x005be4ee
005be4e5  MOV dword ptr [EBP + -0x78],0x0
005be4ec  JMP 0x005be500
005be4ee  MOV ECX,dword ptr [EBP + -0x74]
005be4f1  MOV EDX,dword ptr [EBP + -0x74]
005be4f4  MOV EAX,dword ptr [ECX + 0x8]
005be4f7  SUB EAX,dword ptr [EDX + 0x4]
005be4fa  SAR EAX,0x2
005be4fd  MOV dword ptr [EBP + -0x78],EAX
005be500  MOV ECX,dword ptr [EBP + -0x78]
005be503  CMP ECX,dword ptr [EBP + 0x8]
005be506  JNC 0x005be58e
005be50c  MOV EDX,dword ptr [EBP + -0x74]
005be50f  CMP dword ptr [EDX + 0x4],0x0
005be513  JNZ 0x005be51e
005be515  MOV dword ptr [EBP + -0x7c],0x0
005be51c  JMP 0x005be530
005be51e  MOV EAX,dword ptr [EBP + -0x74]
005be521  MOV ECX,dword ptr [EBP + -0x74]
005be524  MOV EDX,dword ptr [EAX + 0x8]
005be527  SUB EDX,dword ptr [ECX + 0x4]
005be52a  SAR EDX,0x2
005be52d  MOV dword ptr [EBP + -0x7c],EDX
005be530  MOV EAX,dword ptr [EBP + -0x74]
005be533  MOV ECX,dword ptr [EAX + 0x8]
005be536  MOV dword ptr [EBP + -0x2c],ECX
005be539  MOV dword ptr [EBP + -0x8],0x0
005be540  CMP dword ptr [EBP + -0x74],0x0
005be544  JZ 0x005be55c
005be546  MOV EDX,dword ptr [EBP + -0x74]
005be549  MOV EAX,dword ptr [EDX + 0x4]
005be54c  CMP EAX,dword ptr [EBP + -0x2c]
005be54f  JA 0x005be55c
005be551  MOV ECX,dword ptr [EBP + -0x74]
005be554  MOV EDX,dword ptr [EBP + -0x2c]
005be557  CMP EDX,dword ptr [ECX + 0x8]
005be55a  JBE 0x005be562
005be55c  CALL dword ptr [0x006b2274]
005be562  MOV EAX,dword ptr [EBP + -0x74]
005be565  MOV dword ptr [EBP + -0x8],EAX
005be568  MOV ECX,dword ptr [EBP + -0x2c]
005be56b  MOV dword ptr [EBP + -0x4],ECX
005be56e  LEA EDX,[EBP + 0xc]
005be571  PUSH EDX
005be572  MOV EAX,dword ptr [EBP + 0x8]
005be575  SUB EAX,dword ptr [EBP + -0x7c]
005be578  PUSH EAX
005be579  MOV ECX,dword ptr [EBP + -0x4]
005be57c  PUSH ECX
005be57d  MOV EDX,dword ptr [EBP + -0x8]
005be580  PUSH EDX
005be581  MOV ECX,dword ptr [EBP + -0x74]
005be584  CALL 0x005be680
005be589  JMP 0x005be67a
005be58e  MOV EAX,dword ptr [EBP + -0x74]
005be591  CMP dword ptr [EAX + 0x4],0x0
005be595  JNZ 0x005be5a0
005be597  MOV dword ptr [EBP + -0x80],0x0
005be59e  JMP 0x005be5b2
005be5a0  MOV ECX,dword ptr [EBP + -0x74]
005be5a3  MOV EDX,dword ptr [EBP + -0x74]
005be5a6  MOV EAX,dword ptr [ECX + 0x8]
005be5a9  SUB EAX,dword ptr [EDX + 0x4]
005be5ac  SAR EAX,0x2
005be5af  MOV dword ptr [EBP + -0x80],EAX
005be5b2  MOV ECX,dword ptr [EBP + 0x8]
005be5b5  CMP ECX,dword ptr [EBP + -0x80]
005be5b8  JNC 0x005be67a
005be5be  MOV EDX,dword ptr [EBP + -0x74]
005be5c1  MOV EAX,dword ptr [EDX + 0x8]
005be5c4  MOV dword ptr [EBP + -0x30],EAX
005be5c7  MOV dword ptr [EBP + -0x10],0x0
005be5ce  CMP dword ptr [EBP + -0x74],0x0
005be5d2  JZ 0x005be5ea
005be5d4  MOV ECX,dword ptr [EBP + -0x74]
005be5d7  MOV EDX,dword ptr [ECX + 0x4]
005be5da  CMP EDX,dword ptr [EBP + -0x30]
005be5dd  JA 0x005be5ea
005be5df  MOV EAX,dword ptr [EBP + -0x74]
005be5e2  MOV ECX,dword ptr [EBP + -0x30]
005be5e5  CMP ECX,dword ptr [EAX + 0x8]
005be5e8  JBE 0x005be5f0
005be5ea  CALL dword ptr [0x006b2274]
005be5f0  MOV EDX,dword ptr [EBP + -0x74]
005be5f3  MOV dword ptr [EBP + -0x10],EDX
005be5f6  MOV EAX,dword ptr [EBP + -0x30]
005be5f9  MOV dword ptr [EBP + -0xc],EAX
005be5fc  MOV ECX,dword ptr [EBP + -0x74]
005be5ff  MOV EDX,dword ptr [ECX + 0x4]
005be602  MOV dword ptr [EBP + -0x34],EDX
005be605  MOV dword ptr [EBP + -0x18],0x0
005be60c  CMP dword ptr [EBP + -0x74],0x0
005be610  JZ 0x005be628
005be612  MOV EAX,dword ptr [EBP + -0x74]
005be615  MOV ECX,dword ptr [EAX + 0x4]
005be618  CMP ECX,dword ptr [EBP + -0x34]
005be61b  JA 0x005be628
005be61d  MOV EDX,dword ptr [EBP + -0x74]
005be620  MOV EAX,dword ptr [EBP + -0x34]
005be623  CMP EAX,dword ptr [EDX + 0x8]
005be626  JBE 0x005be62e
005be628  CALL dword ptr [0x006b2274]
005be62e  MOV ECX,dword ptr [EBP + -0x74]
005be631  MOV dword ptr [EBP + -0x18],ECX
005be634  MOV EDX,dword ptr [EBP + -0x34]
005be637  MOV dword ptr [EBP + -0x14],EDX
005be63a  MOV EAX,dword ptr [EBP + -0x18]
005be63d  MOV ECX,dword ptr [EBP + -0x14]
005be640  MOV dword ptr [EBP + -0x3c],EAX
005be643  MOV dword ptr [EBP + -0x38],ECX
005be646  MOV EDX,dword ptr [EBP + 0x8]
005be649  PUSH EDX
005be64a  LEA ECX,[EBP + -0x3c]
005be64d  CALL 0x005beeb0
005be652  MOV EAX,dword ptr [EBP + -0x3c]
005be655  MOV ECX,dword ptr [EBP + -0x38]
005be658  MOV dword ptr [EBP + -0x20],EAX
005be65b  MOV dword ptr [EBP + -0x1c],ECX
005be65e  MOV EDX,dword ptr [EBP + -0xc]
005be661  PUSH EDX
005be662  MOV EAX,dword ptr [EBP + -0x10]
005be665  PUSH EAX
005be666  MOV ECX,dword ptr [EBP + -0x1c]
005be669  PUSH ECX
005be66a  MOV EDX,dword ptr [EBP + -0x20]
005be66d  PUSH EDX
005be66e  LEA EAX,[EBP + -0x28]
005be671  PUSH EAX
005be672  MOV ECX,dword ptr [EBP + -0x74]
005be675  CALL 0x005bc490
005be67a  MOV ESP,EBP
005be67c  POP EBP
005be67d  RET 0x8
