; FUN_005ac620  005ac620
005ac620  PUSH EBP
005ac621  MOV EBP,ESP
005ac623  SUB ESP,0x4c
005ac626  MOV EAX,[0x00781870]
005ac62b  XOR EAX,EBP
005ac62d  MOV dword ptr [EBP + -0xc],EAX
005ac630  MOV dword ptr [EBP + -0x4c],ECX
005ac633  MOV EAX,dword ptr [EBP + -0x4c]
005ac636  CMP dword ptr [EAX + 0x4],0x4
005ac63a  JNZ 0x005ac665
005ac63c  PUSH 0x0
005ac63e  PUSH 0x4
005ac640  MOV ECX,dword ptr [0x00793604]
005ac646  CALL 0x005b5830
005ac64b  CMP EAX,0x3
005ac64e  JGE 0x005ac665
005ac650  MOV ECX,dword ptr [EBP + -0x4c]
005ac653  MOV ECX,dword ptr [ECX + 0x28]
005ac656  CALL 0x005eb220
005ac65b  CMP EAX,0x35
005ac65e  JNZ 0x005ac665
005ac660  JMP 0x005ac840
005ac665  MOV dword ptr [EBP + -0x4],0x0
005ac66c  JMP 0x005ac677
005ac66e  MOV EDX,dword ptr [EBP + -0x4]
005ac671  ADD EDX,0x1
005ac674  MOV dword ptr [EBP + -0x4],EDX
005ac677  CMP dword ptr [EBP + -0x4],0x4
005ac67b  JGE 0x005ac69a
005ac67d  MOV EAX,dword ptr [EBP + -0x4]
005ac680  MOV ECX,dword ptr [EBP + -0x4c]
005ac683  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x8]
005ac687  MOV EAX,dword ptr [EBP + -0x4]
005ac68a  MOV ECX,dword ptr [EBP + -0x4c]
005ac68d  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x8]
005ac691  MOV EDX,dword ptr [EDX]
005ac693  MOV EAX,dword ptr [EDX + 0x70]
005ac696  CALL EAX
005ac698  JMP 0x005ac66e
005ac69a  MOV dword ptr [EBP + -0x8],0x0
005ac6a1  JMP 0x005ac6ac
005ac6a3  MOV ECX,dword ptr [EBP + -0x8]
005ac6a6  ADD ECX,0x1
005ac6a9  MOV dword ptr [EBP + -0x8],ECX
005ac6ac  MOV EDX,dword ptr [EBP + -0x4c]
005ac6af  MOV EAX,dword ptr [EDX + 0x4]
005ac6b2  PUSH EAX
005ac6b3  MOV ECX,dword ptr [0x00793604]
005ac6b9  CALL 0x005b58f0
005ac6be  CMP dword ptr [EBP + -0x8],EAX
005ac6c1  JGE 0x005ac840
005ac6c7  MOV ECX,dword ptr [EBP + -0x8]
005ac6ca  PUSH ECX
005ac6cb  MOV EDX,dword ptr [EBP + -0x4c]
005ac6ce  MOV EAX,dword ptr [EDX + 0x4]
005ac6d1  PUSH EAX
005ac6d2  MOV ECX,dword ptr [0x00793604]
005ac6d8  CALL 0x005b5260
005ac6dd  MOV dword ptr [EBP + -0x44],EAX
005ac6e0  MOV ECX,dword ptr [EBP + -0x8]
005ac6e3  PUSH ECX
005ac6e4  MOV EDX,dword ptr [EBP + -0x4c]
005ac6e7  MOV EAX,dword ptr [EDX + 0x4]
005ac6ea  PUSH EAX
005ac6eb  MOV ECX,dword ptr [0x00793604]
005ac6f1  CALL 0x005b4f50
005ac6f6  MOV dword ptr [EBP + -0x48],EAX
005ac6f9  MOV ECX,dword ptr [EBP + -0x4c]
005ac6fc  CMP dword ptr [ECX + 0x4],0x4
005ac700  JNZ 0x005ac726
005ac702  PUSH 0x0
005ac704  PUSH 0x4
005ac706  MOV ECX,dword ptr [0x00793604]
005ac70c  CALL 0x005b4f50
005ac711  PUSH EAX
005ac712  PUSH 0x6b2828
005ac717  LEA EDX,[EBP + -0x40]
005ac71a  PUSH EDX
005ac71b  CALL dword ptr [0x006b2220]
005ac721  ADD ESP,0xc
005ac724  JMP 0x005ac766
005ac726  MOV EAX,dword ptr [EBP + -0x44]
005ac729  CMP EAX,dword ptr [EBP + -0x48]
005ac72c  JZ 0x005ac750
005ac72e  CMP dword ptr [EBP + -0x48],0x15
005ac732  JG 0x005ac750
005ac734  MOV ECX,dword ptr [EBP + -0x44]
005ac737  PUSH ECX
005ac738  MOV EDX,dword ptr [EBP + -0x48]
005ac73b  PUSH EDX
005ac73c  PUSH 0x6b38f0
005ac741  LEA EAX,[EBP + -0x40]
005ac744  PUSH EAX
005ac745  CALL dword ptr [0x006b2220]
005ac74b  ADD ESP,0x10
005ac74e  JMP 0x005ac766
005ac750  MOV ECX,dword ptr [EBP + -0x44]
005ac753  PUSH ECX
005ac754  PUSH 0x6b2828
005ac759  LEA EDX,[EBP + -0x40]
005ac75c  PUSH EDX
005ac75d  CALL dword ptr [0x006b2220]
005ac763  ADD ESP,0xc
005ac766  LEA EAX,[EBP + -0x40]
005ac769  PUSH EAX
005ac76a  MOV ECX,dword ptr [EBP + -0x8]
005ac76d  MOV EDX,dword ptr [EBP + -0x4c]
005ac770  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x8]
005ac774  MOV ECX,dword ptr [EBP + -0x8]
005ac777  MOV EDX,dword ptr [EBP + -0x4c]
005ac77a  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x8]
005ac77e  MOV EAX,dword ptr [EAX]
005ac780  MOV EDX,dword ptr [EAX + 0xb4]
005ac786  CALL EDX
005ac788  MOV EAX,dword ptr [EBP + -0x8]
005ac78b  PUSH EAX
005ac78c  MOV ECX,dword ptr [EBP + -0x4c]
005ac78f  CALL 0x005ac1f0
005ac794  PUSH EAX
005ac795  MOV ECX,dword ptr [EBP + -0x8]
005ac798  PUSH ECX
005ac799  MOV ECX,dword ptr [EBP + -0x4c]
005ac79c  CALL 0x005ac1a0
005ac7a1  PUSH EAX
005ac7a2  MOV EDX,dword ptr [EBP + -0x8]
005ac7a5  MOV EAX,dword ptr [EBP + -0x4c]
005ac7a8  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x8]
005ac7ac  MOV EDX,dword ptr [EBP + -0x8]
005ac7af  MOV EAX,dword ptr [EBP + -0x4c]
005ac7b2  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x8]
005ac7b6  MOV EAX,dword ptr [ECX]
005ac7b8  MOV ECX,EDX
005ac7ba  MOV EDX,dword ptr [EAX + 0x44]
005ac7bd  CALL EDX
005ac7bf  MOV ECX,dword ptr [0x00793604]
005ac7c5  CALL 0x005b7d50
005ac7ca  MOVZX EAX,AL
005ac7cd  TEST EAX,EAX
005ac7cf  JZ 0x005ac820
005ac7d1  MOV ECX,dword ptr [EBP + -0x8]
005ac7d4  PUSH ECX
005ac7d5  MOV EDX,dword ptr [EBP + -0x4c]
005ac7d8  MOV EAX,dword ptr [EDX + 0x4]
005ac7db  PUSH EAX
005ac7dc  MOV ECX,dword ptr [0x00793604]
005ac7e2  CALL 0x005b5830
005ac7e7  CMP EAX,0x1
005ac7ea  JLE 0x005ac820
005ac7ec  MOV ECX,dword ptr [EBP + -0x8]
005ac7ef  IMUL ECX,ECX,0x58
005ac7f2  MOV EDX,dword ptr [EBP + -0x4c]
005ac7f5  MOV ECX,dword ptr [EDX + ECX*0x1 + 0x28]
005ac7f9  CALL 0x005eb220
005ac7fe  CMP EAX,0x35
005ac801  JZ 0x005ac820
005ac803  MOV EAX,dword ptr [EBP + -0x8]
005ac806  MOV ECX,dword ptr [EBP + -0x4c]
005ac809  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x8]
005ac80d  MOV EAX,dword ptr [EBP + -0x8]
005ac810  MOV ECX,dword ptr [EBP + -0x4c]
005ac813  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x8]
005ac817  MOV EDX,dword ptr [EDX]
005ac819  MOV EAX,dword ptr [EDX + 0x74]
005ac81c  CALL EAX
005ac81e  JMP 0x005ac83b
005ac820  MOV ECX,dword ptr [EBP + -0x8]
005ac823  MOV EDX,dword ptr [EBP + -0x4c]
005ac826  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x8]
005ac82a  MOV ECX,dword ptr [EBP + -0x8]
005ac82d  MOV EDX,dword ptr [EBP + -0x4c]
005ac830  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x8]
005ac834  MOV EAX,dword ptr [EAX]
005ac836  MOV EDX,dword ptr [EAX + 0x70]
005ac839  CALL EDX
005ac83b  JMP 0x005ac6a3
005ac840  MOV ECX,dword ptr [EBP + -0xc]
005ac843  XOR ECX,EBP
005ac845  CALL 0x00686d72
005ac84a  MOV ESP,EBP
005ac84c  POP EBP
005ac84d  RET
