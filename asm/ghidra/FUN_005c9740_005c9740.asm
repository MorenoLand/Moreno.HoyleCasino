; FUN_005c9740  005c9740
005c9740  PUSH EBP
005c9741  MOV EBP,ESP
005c9743  SUB ESP,0x40
005c9746  MOV dword ptr [EBP + -0x38],ECX
005c9749  MOV byte ptr [EBP + -0x9],0x1
005c974d  MOV EAX,dword ptr [EBP + -0x38]
005c9750  MOV ECX,dword ptr [EAX + 0x10]
005c9753  CMP dword ptr [ECX + 0x14],0x0
005c9757  JGE 0x005c9760
005c9759  XOR AL,AL
005c975b  JMP 0x005c993b
005c9760  MOV dword ptr [EBP + -0x8],0xffffffff
005c9767  MOV dword ptr [EBP + -0x10],0x1
005c976e  MOV EDX,dword ptr [EBP + -0x38]
005c9771  MOV EAX,dword ptr [EDX + 0x10]
005c9774  MOV EAX,dword ptr [EAX + 0x4]
005c9777  NEG EAX
005c9779  CDQ
005c977a  SUB EAX,EDX
005c977c  SAR EAX,0x1
005c977e  MOV dword ptr [EBP + -0x8],EAX
005c9781  MOV ECX,dword ptr [EBP + -0x38]
005c9784  MOV EDX,dword ptr [ECX + 0x10]
005c9787  MOV EAX,dword ptr [EDX + 0x4]
005c978a  CDQ
005c978b  SUB EAX,EDX
005c978d  SAR EAX,0x1
005c978f  MOV dword ptr [EBP + -0x10],EAX
005c9792  MOV dword ptr [EBP + -0x14],0x0
005c9799  JMP 0x005c97a4
005c979b  MOV EAX,dword ptr [EBP + -0x14]
005c979e  ADD EAX,0x1
005c97a1  MOV dword ptr [EBP + -0x14],EAX
005c97a4  MOV ECX,dword ptr [EBP + -0x38]
005c97a7  MOV EDX,dword ptr [ECX + 0x10]
005c97aa  MOV EAX,dword ptr [EBP + -0x14]
005c97ad  CMP EAX,dword ptr [EDX]
005c97af  JGE 0x005c9888
005c97b5  MOV ECX,dword ptr [EBP + -0x38]
005c97b8  MOV EDX,dword ptr [ECX + 0x10]
005c97bb  MOV EAX,dword ptr [EBP + -0x14]
005c97be  IMUL EAX,EAX,0x7c
005c97c1  LEA ECX,[EDX + EAX*0x1 + 0x20]
005c97c5  MOV dword ptr [EBP + -0x1c],ECX
005c97c8  MOV dword ptr [EBP + -0x4],0x0
005c97cf  JMP 0x005c97da
005c97d1  MOV EDX,dword ptr [EBP + -0x4]
005c97d4  ADD EDX,0x1
005c97d7  MOV dword ptr [EBP + -0x4],EDX
005c97da  MOV EAX,dword ptr [EBP + -0x1c]
005c97dd  MOV ECX,dword ptr [EBP + -0x4]
005c97e0  CMP ECX,dword ptr [EAX]
005c97e2  JGE 0x005c97fd
005c97e4  MOV EDX,dword ptr [EBP + -0x38]
005c97e7  MOV EAX,dword ptr [EDX + 0x10]
005c97ea  MOV ECX,dword ptr [EBP + -0x4]
005c97ed  MOV EDX,dword ptr [EBP + -0x1c]
005c97f0  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x4]
005c97f4  CMP ECX,dword ptr [EAX + 0x14]
005c97f7  JNZ 0x005c97fb
005c97f9  JMP 0x005c97fd
005c97fb  JMP 0x005c97d1
005c97fd  MOV EDX,dword ptr [EBP + -0x1c]
005c9800  MOV EAX,dword ptr [EBP + -0x4]
005c9803  CMP EAX,dword ptr [EDX]
005c9805  JL 0x005c9809
005c9807  JMP 0x005c979b
005c9809  MOV byte ptr [EBP + -0x15],0x0
005c980d  MOV ECX,dword ptr [EBP + -0x8]
005c9810  MOV dword ptr [EBP + -0x4],ECX
005c9813  JMP 0x005c981e
005c9815  MOV EDX,dword ptr [EBP + -0x4]
005c9818  ADD EDX,0x1
005c981b  MOV dword ptr [EBP + -0x4],EDX
005c981e  MOV EAX,dword ptr [EBP + -0x4]
005c9821  CMP EAX,dword ptr [EBP + -0x10]
005c9824  JG 0x005c9875
005c9826  MOV ECX,dword ptr [EBP + -0x14]
005c9829  MOV EDX,dword ptr [EBP + -0x38]
005c982c  CMP dword ptr [EDX + ECX*0x4 + 0x18],0x0
005c9831  JL 0x005c9842
005c9833  MOV EAX,dword ptr [EBP + -0x14]
005c9836  MOV ECX,dword ptr [EBP + -0x38]
005c9839  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x18]
005c983d  MOV dword ptr [EBP + -0x3c],EDX
005c9840  JMP 0x005c9851
005c9842  MOV EAX,dword ptr [EBP + -0x14]
005c9845  MOV ECX,dword ptr [EBP + -0x38]
005c9848  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x18]
005c984c  NEG EDX
005c984e  MOV dword ptr [EBP + -0x3c],EDX
005c9851  MOV EAX,dword ptr [EBP + -0x3c]
005c9854  ADD EAX,dword ptr [EBP + -0x4]
005c9857  PUSH EAX
005c9858  MOV ECX,dword ptr [EBP + -0x14]
005c985b  PUSH ECX
005c985c  MOV ECX,dword ptr [EBP + -0x38]
005c985f  CALL 0x005be340
005c9864  MOV EDX,dword ptr [EBP + -0x38]
005c9867  MOV ECX,dword ptr [EDX + 0x10]
005c986a  CMP EAX,dword ptr [ECX + 0x14]
005c986d  JNZ 0x005c9873
005c986f  MOV byte ptr [EBP + -0x15],0x1
005c9873  JMP 0x005c9815
005c9875  MOVZX EDX,byte ptr [EBP + -0x15]
005c9879  TEST EDX,EDX
005c987b  JNZ 0x005c9883
005c987d  MOV byte ptr [EBP + -0x9],0x0
005c9881  JMP 0x005c9888
005c9883  JMP 0x005c979b
005c9888  MOVZX EAX,byte ptr [EBP + -0x9]
005c988c  TEST EAX,EAX
005c988e  JZ 0x005c9938
005c9894  MOV dword ptr [EBP + -0x14],0x0
005c989b  JMP 0x005c98a6
005c989d  MOV ECX,dword ptr [EBP + -0x14]
005c98a0  ADD ECX,0x1
005c98a3  MOV dword ptr [EBP + -0x14],ECX
005c98a6  MOV EDX,dword ptr [EBP + -0x38]
005c98a9  MOV EAX,dword ptr [EDX + 0x10]
005c98ac  MOV ECX,dword ptr [EBP + -0x14]
005c98af  CMP ECX,dword ptr [EAX]
005c98b1  JGE 0x005c9938
005c98b7  MOV EDX,dword ptr [EBP + -0x8]
005c98ba  MOV dword ptr [EBP + -0x4],EDX
005c98bd  JMP 0x005c98c8
005c98bf  MOV EAX,dword ptr [EBP + -0x4]
005c98c2  ADD EAX,0x1
005c98c5  MOV dword ptr [EBP + -0x4],EAX
005c98c8  MOV ECX,dword ptr [EBP + -0x4]
005c98cb  CMP ECX,dword ptr [EBP + -0x10]
005c98ce  JG 0x005c9933
005c98d0  MOV EDX,dword ptr [EBP + -0x14]
005c98d3  MOV EAX,dword ptr [EBP + -0x38]
005c98d6  CMP dword ptr [EAX + EDX*0x4 + 0x18],0x0
005c98db  JL 0x005c98ec
005c98dd  MOV ECX,dword ptr [EBP + -0x14]
005c98e0  MOV EDX,dword ptr [EBP + -0x38]
005c98e3  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x18]
005c98e7  MOV dword ptr [EBP + -0x40],EAX
005c98ea  JMP 0x005c98fb
005c98ec  MOV ECX,dword ptr [EBP + -0x14]
005c98ef  MOV EDX,dword ptr [EBP + -0x38]
005c98f2  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x18]
005c98f6  NEG EAX
005c98f8  MOV dword ptr [EBP + -0x40],EAX
005c98fb  MOV ECX,dword ptr [EBP + -0x40]
005c98fe  ADD ECX,dword ptr [EBP + -0x4]
005c9901  PUSH ECX
005c9902  MOV EDX,dword ptr [EBP + -0x14]
005c9905  PUSH EDX
005c9906  MOV ECX,dword ptr [EBP + -0x38]
005c9909  CALL 0x005be340
005c990e  MOV ECX,dword ptr [EBP + -0x38]
005c9911  MOV EDX,dword ptr [ECX + 0x10]
005c9914  CMP EAX,dword ptr [EDX + 0x14]
005c9917  JNZ 0x005c9931
005c9919  MOV EAX,dword ptr [EBP + -0x14]
005c991c  IMUL EAX,EAX,0x14
005c991f  MOV ECX,dword ptr [EBP + -0x38]
005c9922  LEA EDX,[ECX + EAX*0x1 + 0x54]
005c9926  MOV EAX,dword ptr [EBP + -0x4]
005c9929  MOV dword ptr [EDX + EAX*0x4 + 0x8],0x32
005c9931  JMP 0x005c98bf
005c9933  JMP 0x005c989d
005c9938  MOV AL,byte ptr [EBP + -0x9]
005c993b  MOV ESP,EBP
005c993d  POP EBP
005c993e  RET
