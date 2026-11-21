; FUN_005f6640  005f6640
005f6640  PUSH EBP
005f6641  MOV EBP,ESP
005f6643  SUB ESP,0x34
005f6646  MOV dword ptr [EBP + -0x34],ECX
005f6649  MOV EAX,dword ptr [EBP + -0x34]
005f664c  MOV CL,byte ptr [EAX + 0x4d]
005f664f  MOV byte ptr [EBP + -0x14],CL
005f6652  MOV EDX,dword ptr [EBP + -0x34]
005f6655  MOV AL,byte ptr [EDX + 0x4e]
005f6658  MOV byte ptr [EBP + -0x13],AL
005f665b  MOV ECX,dword ptr [EBP + -0x34]
005f665e  MOV DL,byte ptr [ECX + 0x4f]
005f6661  MOV byte ptr [EBP + -0x12],DL
005f6664  MOV ECX,dword ptr [EBP + -0x34]
005f6667  CALL 0x005f63f0
005f666c  MOV byte ptr [EBP + -0x11],AL
005f666f  MOV EAX,dword ptr [EBP + -0x34]
005f6672  MOV CL,byte ptr [EAX + 0x59]
005f6675  MOV byte ptr [EBP + -0x2d],CL
005f6678  MOVZX EDX,byte ptr [EBP + -0x2d]
005f667c  TEST EDX,EDX
005f667e  JZ 0x005f66a6
005f6680  MOV EAX,dword ptr [EBP + -0x34]
005f6683  MOV ECX,dword ptr [EAX + 0x18]
005f6686  MOV dword ptr [EBP + -0x20],ECX
005f6689  MOV EDX,dword ptr [EBP + -0x34]
005f668c  MOV EAX,dword ptr [EDX + 0x14]
005f668f  MOV dword ptr [EBP + -0x8],EAX
005f6692  MOV ECX,dword ptr [EBP + -0x34]
005f6695  MOV EDX,dword ptr [ECX + 0x10]
005f6698  MOV dword ptr [EBP + -0x1c],EDX
005f669b  MOV EAX,dword ptr [EBP + -0x34]
005f669e  MOV ECX,dword ptr [EAX + 0x1c]
005f66a1  MOV dword ptr [EBP + -0x10],ECX
005f66a4  JMP 0x005f66ca
005f66a6  MOV EDX,dword ptr [EBP + -0x34]
005f66a9  MOV EAX,dword ptr [EDX + 0x10]
005f66ac  MOV dword ptr [EBP + -0x20],EAX
005f66af  MOV ECX,dword ptr [EBP + -0x34]
005f66b2  MOV EDX,dword ptr [ECX + 0x14]
005f66b5  MOV dword ptr [EBP + -0x8],EDX
005f66b8  MOV EAX,dword ptr [EBP + -0x34]
005f66bb  MOV ECX,dword ptr [EAX + 0x18]
005f66be  MOV dword ptr [EBP + -0x1c],ECX
005f66c1  MOV EDX,dword ptr [EBP + -0x34]
005f66c4  MOV EAX,dword ptr [EDX + 0x1c]
005f66c7  MOV dword ptr [EBP + -0x10],EAX
005f66ca  MOV ECX,dword ptr [EBP + -0x10]
005f66cd  SUB ECX,dword ptr [EBP + -0x8]
005f66d0  MOV dword ptr [EBP + -0x4],ECX
005f66d3  MOV EDX,dword ptr [EBP + -0x1c]
005f66d6  SUB EDX,dword ptr [EBP + -0x20]
005f66d9  MOV dword ptr [EBP + -0x24],EDX
005f66dc  CMP dword ptr [EBP + -0x4],0x0
005f66e0  JGE 0x005f66f3
005f66e2  MOV EAX,dword ptr [EBP + -0x4]
005f66e5  NEG EAX
005f66e7  MOV dword ptr [EBP + -0x4],EAX
005f66ea  MOV dword ptr [EBP + -0x18],0xffffffff
005f66f1  JMP 0x005f66fa
005f66f3  MOV dword ptr [EBP + -0x18],0x1
005f66fa  CMP dword ptr [EBP + -0x24],0x0
005f66fe  JGE 0x005f6711
005f6700  MOV ECX,dword ptr [EBP + -0x24]
005f6703  NEG ECX
005f6705  MOV dword ptr [EBP + -0x24],ECX
005f6708  MOV dword ptr [EBP + -0xc],0xffffffff
005f670f  JMP 0x005f6718
005f6711  MOV dword ptr [EBP + -0xc],0x1
005f6718  MOV EDX,dword ptr [EBP + -0x4]
005f671b  SHL EDX,0x1
005f671d  MOV dword ptr [EBP + -0x4],EDX
005f6720  MOV EAX,dword ptr [EBP + -0x24]
005f6723  SHL EAX,0x1
005f6725  MOV dword ptr [EBP + -0x24],EAX
005f6728  MOV ECX,dword ptr [EBP + -0x34]
005f672b  CALL 0x005f6620
005f6730  PUSH EAX
005f6731  MOV ECX,dword ptr [EBP + -0x14]
005f6734  PUSH ECX
005f6735  MOV EDX,dword ptr [EBP + -0x8]
005f6738  PUSH EDX
005f6739  MOV EAX,dword ptr [EBP + -0x20]
005f673c  PUSH EAX
005f673d  MOV ECX,dword ptr [EBP + -0x34]
005f6740  MOV ECX,dword ptr [ECX + 0x4]
005f6743  CALL 0x005f9330
005f6748  MOV EDX,dword ptr [EBP + -0x24]
005f674b  CMP EDX,dword ptr [EBP + -0x4]
005f674e  JLE 0x005f67b3
005f6750  MOV EAX,dword ptr [EBP + -0x24]
005f6753  SAR EAX,0x1
005f6755  MOV ECX,dword ptr [EBP + -0x4]
005f6758  SUB ECX,EAX
005f675a  MOV dword ptr [EBP + -0x28],ECX
005f675d  MOV EDX,dword ptr [EBP + -0x20]
005f6760  CMP EDX,dword ptr [EBP + -0x1c]
005f6763  JZ 0x005f67b1
005f6765  CMP dword ptr [EBP + -0x28],0x0
005f6769  JL 0x005f677d
005f676b  MOV EAX,dword ptr [EBP + -0x8]
005f676e  ADD EAX,dword ptr [EBP + -0x18]
005f6771  MOV dword ptr [EBP + -0x8],EAX
005f6774  MOV ECX,dword ptr [EBP + -0x28]
005f6777  SUB ECX,dword ptr [EBP + -0x24]
005f677a  MOV dword ptr [EBP + -0x28],ECX
005f677d  MOV EDX,dword ptr [EBP + -0x20]
005f6780  ADD EDX,dword ptr [EBP + -0xc]
005f6783  MOV dword ptr [EBP + -0x20],EDX
005f6786  MOV EAX,dword ptr [EBP + -0x28]
005f6789  ADD EAX,dword ptr [EBP + -0x4]
005f678c  MOV dword ptr [EBP + -0x28],EAX
005f678f  MOV ECX,dword ptr [EBP + -0x34]
005f6792  CALL 0x005f6620
005f6797  PUSH EAX
005f6798  MOV ECX,dword ptr [EBP + -0x14]
005f679b  PUSH ECX
005f679c  MOV EDX,dword ptr [EBP + -0x8]
005f679f  PUSH EDX
005f67a0  MOV EAX,dword ptr [EBP + -0x20]
005f67a3  PUSH EAX
005f67a4  MOV ECX,dword ptr [EBP + -0x34]
005f67a7  MOV ECX,dword ptr [ECX + 0x4]
005f67aa  CALL 0x005f9330
005f67af  JMP 0x005f675d
005f67b1  JMP 0x005f6814
005f67b3  MOV EDX,dword ptr [EBP + -0x4]
005f67b6  SAR EDX,0x1
005f67b8  MOV EAX,dword ptr [EBP + -0x24]
005f67bb  SUB EAX,EDX
005f67bd  MOV dword ptr [EBP + -0x2c],EAX
005f67c0  MOV ECX,dword ptr [EBP + -0x8]
005f67c3  CMP ECX,dword ptr [EBP + -0x10]
005f67c6  JZ 0x005f6814
005f67c8  CMP dword ptr [EBP + -0x2c],0x0
005f67cc  JL 0x005f67e0
005f67ce  MOV EDX,dword ptr [EBP + -0x20]
005f67d1  ADD EDX,dword ptr [EBP + -0xc]
005f67d4  MOV dword ptr [EBP + -0x20],EDX
005f67d7  MOV EAX,dword ptr [EBP + -0x2c]
005f67da  SUB EAX,dword ptr [EBP + -0x4]
005f67dd  MOV dword ptr [EBP + -0x2c],EAX
005f67e0  MOV ECX,dword ptr [EBP + -0x8]
005f67e3  ADD ECX,dword ptr [EBP + -0x18]
005f67e6  MOV dword ptr [EBP + -0x8],ECX
005f67e9  MOV EDX,dword ptr [EBP + -0x2c]
005f67ec  ADD EDX,dword ptr [EBP + -0x24]
005f67ef  MOV dword ptr [EBP + -0x2c],EDX
005f67f2  MOV ECX,dword ptr [EBP + -0x34]
005f67f5  CALL 0x005f6620
005f67fa  PUSH EAX
005f67fb  MOV EAX,dword ptr [EBP + -0x14]
005f67fe  PUSH EAX
005f67ff  MOV ECX,dword ptr [EBP + -0x8]
005f6802  PUSH ECX
005f6803  MOV EDX,dword ptr [EBP + -0x20]
005f6806  PUSH EDX
005f6807  MOV EAX,dword ptr [EBP + -0x34]
005f680a  MOV ECX,dword ptr [EAX + 0x4]
005f680d  CALL 0x005f9330
005f6812  JMP 0x005f67c0
005f6814  MOV ESP,EBP
005f6816  POP EBP
005f6817  RET
