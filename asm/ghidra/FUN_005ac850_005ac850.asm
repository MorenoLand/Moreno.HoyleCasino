; FUN_005ac850  005ac850
005ac850  PUSH EBP
005ac851  MOV EBP,ESP
005ac853  SUB ESP,0x20
005ac856  PUSH ESI
005ac857  PUSH EDI
005ac858  MOV dword ptr [EBP + -0x1c],ECX
005ac85b  MOV EAX,dword ptr [EBP + -0x1c]
005ac85e  CMP dword ptr [EAX + 0x4],0x4
005ac862  JNZ 0x005ac869
005ac864  JMP 0x005acb45
005ac869  MOV dword ptr [EBP + -0x4],0x0
005ac870  JMP 0x005ac87b
005ac872  MOV ECX,dword ptr [EBP + -0x4]
005ac875  ADD ECX,0x1
005ac878  MOV dword ptr [EBP + -0x4],ECX
005ac87b  CMP dword ptr [EBP + -0x4],0x4
005ac87f  JGE 0x005ac8a0
005ac881  MOV EDX,dword ptr [EBP + -0x4]
005ac884  MOV EAX,dword ptr [EBP + -0x1c]
005ac887  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x18]
005ac88b  MOV EDX,dword ptr [EBP + -0x4]
005ac88e  MOV EAX,dword ptr [EBP + -0x1c]
005ac891  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x18]
005ac895  MOV EAX,dword ptr [ECX]
005ac897  MOV ECX,EDX
005ac899  MOV EDX,dword ptr [EAX + 0x70]
005ac89c  CALL EDX
005ac89e  JMP 0x005ac872
005ac8a0  MOV dword ptr [EBP + -0x8],0x0
005ac8a7  JMP 0x005ac8b2
005ac8a9  MOV EAX,dword ptr [EBP + -0x8]
005ac8ac  ADD EAX,0x1
005ac8af  MOV dword ptr [EBP + -0x8],EAX
005ac8b2  MOV ECX,dword ptr [EBP + -0x1c]
005ac8b5  MOV EDX,dword ptr [ECX + 0x4]
005ac8b8  PUSH EDX
005ac8b9  MOV ECX,dword ptr [0x00793604]
005ac8bf  CALL 0x005b58f0
005ac8c4  CMP dword ptr [EBP + -0x8],EAX
005ac8c7  JGE 0x005acb45
005ac8cd  MOV EAX,dword ptr [EBP + -0x8]
005ac8d0  PUSH EAX
005ac8d1  MOV ECX,dword ptr [EBP + -0x1c]
005ac8d4  MOV EDX,dword ptr [ECX + 0x4]
005ac8d7  PUSH EDX
005ac8d8  MOV ECX,dword ptr [0x00793604]
005ac8de  CALL 0x005b5010
005ac8e3  MOV dword ptr [EBP + -0x20],EAX
005ac8e6  CMP dword ptr [EBP + -0x20],0x7
005ac8ea  JA 0x005ac9cf
005ac8f0  MOV EAX,dword ptr [EBP + -0x20]
005ac8f3  JMP dword ptr [EAX*0x4 + 0x5acb4c]
005ac8fa  PUSH 0x2
005ac8fc  MOV ECX,dword ptr [EBP + -0x8]
005ac8ff  MOV EDX,dword ptr [EBP + -0x1c]
005ac902  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x18]
005ac906  MOV ECX,dword ptr [EBP + -0x8]
005ac909  MOV EDX,dword ptr [EBP + -0x1c]
005ac90c  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x18]
005ac910  MOV EAX,dword ptr [EAX]
005ac912  MOV EDX,dword ptr [EAX + 0xb0]
005ac918  CALL EDX
005ac91a  JMP 0x005ac9ea
005ac91f  PUSH 0x5
005ac921  MOV EAX,dword ptr [EBP + -0x8]
005ac924  MOV ECX,dword ptr [EBP + -0x1c]
005ac927  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x18]
005ac92b  MOV EAX,dword ptr [EBP + -0x8]
005ac92e  MOV ECX,dword ptr [EBP + -0x1c]
005ac931  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x18]
005ac935  MOV EDX,dword ptr [EDX]
005ac937  MOV EAX,dword ptr [EDX + 0xb0]
005ac93d  CALL EAX
005ac93f  JMP 0x005ac9ea
005ac944  PUSH 0x1
005ac946  MOV ECX,dword ptr [EBP + -0x8]
005ac949  MOV EDX,dword ptr [EBP + -0x1c]
005ac94c  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x18]
005ac950  MOV ECX,dword ptr [EBP + -0x8]
005ac953  MOV EDX,dword ptr [EBP + -0x1c]
005ac956  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x18]
005ac95a  MOV EAX,dword ptr [EAX]
005ac95c  MOV EDX,dword ptr [EAX + 0xb0]
005ac962  CALL EDX
005ac964  JMP 0x005ac9ea
005ac969  PUSH 0x0
005ac96b  MOV EAX,dword ptr [EBP + -0x8]
005ac96e  MOV ECX,dword ptr [EBP + -0x1c]
005ac971  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x18]
005ac975  MOV EAX,dword ptr [EBP + -0x8]
005ac978  MOV ECX,dword ptr [EBP + -0x1c]
005ac97b  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x18]
005ac97f  MOV EDX,dword ptr [EDX]
005ac981  MOV EAX,dword ptr [EDX + 0xb0]
005ac987  CALL EAX
005ac989  JMP 0x005ac9ea
005ac98b  PUSH 0x3
005ac98d  MOV ECX,dword ptr [EBP + -0x8]
005ac990  MOV EDX,dword ptr [EBP + -0x1c]
005ac993  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x18]
005ac997  MOV ECX,dword ptr [EBP + -0x8]
005ac99a  MOV EDX,dword ptr [EBP + -0x1c]
005ac99d  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x18]
005ac9a1  MOV EAX,dword ptr [EAX]
005ac9a3  MOV EDX,dword ptr [EAX + 0xb0]
005ac9a9  CALL EDX
005ac9ab  JMP 0x005ac9ea
005ac9ad  PUSH 0x4
005ac9af  MOV EAX,dword ptr [EBP + -0x8]
005ac9b2  MOV ECX,dword ptr [EBP + -0x1c]
005ac9b5  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x18]
005ac9b9  MOV EAX,dword ptr [EBP + -0x8]
005ac9bc  MOV ECX,dword ptr [EBP + -0x1c]
005ac9bf  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x18]
005ac9c3  MOV EDX,dword ptr [EDX]
005ac9c5  MOV EAX,dword ptr [EDX + 0xb0]
005ac9cb  CALL EAX
005ac9cd  JMP 0x005ac9ea
005ac9cf  MOV ECX,dword ptr [EBP + -0x8]
005ac9d2  MOV EDX,dword ptr [EBP + -0x1c]
005ac9d5  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x18]
005ac9d9  MOV ECX,dword ptr [EBP + -0x8]
005ac9dc  MOV EDX,dword ptr [EBP + -0x1c]
005ac9df  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x18]
005ac9e3  MOV EAX,dword ptr [EAX]
005ac9e5  MOV EDX,dword ptr [EAX + 0x70]
005ac9e8  CALL EDX
005ac9ea  MOV EAX,dword ptr [EBP + -0x8]
005ac9ed  PUSH EAX
005ac9ee  MOV ECX,dword ptr [EBP + -0x1c]
005ac9f1  MOV EDX,dword ptr [ECX + 0x4]
005ac9f4  PUSH EDX
005ac9f5  MOV ECX,dword ptr [0x00793604]
005ac9fb  CALL 0x005b5010
005aca00  CMP EAX,-0x1
005aca03  JNZ 0x005aca0a
005aca05  JMP 0x005ac8a9
005aca0a  MOV EAX,dword ptr [EBP + -0x8]
005aca0d  IMUL EAX,EAX,0x58
005aca10  MOV ECX,dword ptr [EBP + -0x1c]
005aca13  MOV EDX,dword ptr [ECX + EAX*0x1 + 0x28]
005aca17  MOV dword ptr [EBP + -0x18],EDX
005aca1a  MOV EAX,dword ptr [EBP + -0x8]
005aca1d  IMUL EAX,EAX,0x58
005aca20  MOV ECX,dword ptr [EBP + -0x1c]
005aca23  LEA ESI,[ECX + EAX*0x1 + 0x28]
005aca27  MOV EDX,dword ptr [EBP + -0x8]
005aca2a  PUSH EDX
005aca2b  MOV EAX,dword ptr [EBP + -0x1c]
005aca2e  MOV ECX,dword ptr [EAX + 0x4]
005aca31  PUSH ECX
005aca32  MOV ECX,dword ptr [0x00793604]
005aca38  CALL 0x005b5830
005aca3d  MOV EDX,dword ptr [ESI + EAX*0x4 + -0x4]
005aca41  MOV dword ptr [EBP + -0x14],EDX
005aca44  MOV EAX,dword ptr [EBP + -0x18]
005aca47  MOV EDX,dword ptr [EAX]
005aca49  MOV ECX,dword ptr [EBP + -0x18]
005aca4c  MOV EAX,dword ptr [EDX + 0x4c]
005aca4f  CALL EAX
005aca51  MOV ESI,EAX
005aca53  MOV ECX,dword ptr [EBP + -0x14]
005aca56  MOV EDX,dword ptr [ECX]
005aca58  MOV ECX,dword ptr [EBP + -0x14]
005aca5b  MOV EAX,dword ptr [EDX + 0x4c]
005aca5e  CALL EAX
005aca60  MOV EDI,EAX
005aca62  MOV ECX,dword ptr [EBP + -0x14]
005aca65  CALL 0x005f5550
005aca6a  ADD EDI,EAX
005aca6c  MOV ECX,dword ptr [EBP + -0x18]
005aca6f  MOV EDX,dword ptr [ECX]
005aca71  MOV ECX,dword ptr [EBP + -0x18]
005aca74  MOV EAX,dword ptr [EDX + 0x4c]
005aca77  CALL EAX
005aca79  SUB EDI,EAX
005aca7b  MOV EAX,EDI
005aca7d  CDQ
005aca7e  SUB EAX,EDX
005aca80  SAR EAX,0x1
005aca82  ADD ESI,EAX
005aca84  MOV dword ptr [EBP + -0x10],ESI
005aca87  MOV ECX,dword ptr [EBP + -0x14]
005aca8a  MOV EDX,dword ptr [ECX]
005aca8c  MOV ECX,dword ptr [EBP + -0x14]
005aca8f  MOV EAX,dword ptr [EDX + 0x54]
005aca92  CALL EAX
005aca94  MOV ESI,EAX
005aca96  MOV ECX,dword ptr [EBP + -0x18]
005aca99  MOV EDX,dword ptr [ECX]
005aca9b  MOV ECX,dword ptr [EBP + -0x18]
005aca9e  MOV EAX,dword ptr [EDX + 0x54]
005acaa1  CALL EAX
005acaa3  MOV EDI,EAX
005acaa5  MOV ECX,dword ptr [EBP + -0x18]
005acaa8  CALL 0x005f5590
005acaad  ADD EDI,EAX
005acaaf  MOV ECX,dword ptr [EBP + -0x14]
005acab2  MOV EDX,dword ptr [ECX]
005acab4  MOV ECX,dword ptr [EBP + -0x14]
005acab7  MOV EAX,dword ptr [EDX + 0x54]
005acaba  CALL EAX
005acabc  SUB EDI,EAX
005acabe  MOV EAX,EDI
005acac0  CDQ
005acac1  SUB EAX,EDX
005acac3  SAR EAX,0x1
005acac5  ADD ESI,EAX
005acac7  MOV dword ptr [EBP + -0xc],ESI
005acaca  MOV ECX,dword ptr [EBP + -0x8]
005acacd  MOV EDX,dword ptr [EBP + -0x1c]
005acad0  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x18]
005acad4  CALL 0x005f5550
005acad9  CDQ
005acada  SUB EAX,EDX
005acadc  SAR EAX,0x1
005acade  MOV ECX,dword ptr [EBP + -0x10]
005acae1  SUB ECX,EAX
005acae3  MOV dword ptr [EBP + -0x10],ECX
005acae6  MOV EDX,dword ptr [EBP + -0x8]
005acae9  MOV EAX,dword ptr [EBP + -0x1c]
005acaec  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x18]
005acaf0  CALL 0x005f5590
005acaf5  CDQ
005acaf6  SUB EAX,EDX
005acaf8  SAR EAX,0x1
005acafa  MOV ECX,dword ptr [EBP + -0xc]
005acafd  SUB ECX,EAX
005acaff  MOV dword ptr [EBP + -0xc],ECX
005acb02  MOV EDX,dword ptr [EBP + -0xc]
005acb05  PUSH EDX
005acb06  MOV EAX,dword ptr [EBP + -0x10]
005acb09  PUSH EAX
005acb0a  MOV ECX,dword ptr [EBP + -0x8]
005acb0d  MOV EDX,dword ptr [EBP + -0x1c]
005acb10  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x18]
005acb14  MOV ECX,dword ptr [EBP + -0x8]
005acb17  MOV EDX,dword ptr [EBP + -0x1c]
005acb1a  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x18]
005acb1e  MOV EAX,dword ptr [EAX]
005acb20  MOV EDX,dword ptr [EAX + 0x44]
005acb23  CALL EDX
005acb25  MOV EAX,dword ptr [EBP + -0x8]
005acb28  MOV ECX,dword ptr [EBP + -0x1c]
005acb2b  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x18]
005acb2f  MOV EAX,dword ptr [EBP + -0x8]
005acb32  MOV ECX,dword ptr [EBP + -0x1c]
005acb35  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x18]
005acb39  MOV EDX,dword ptr [EDX]
005acb3b  MOV EAX,dword ptr [EDX + 0x74]
005acb3e  CALL EAX
005acb40  JMP 0x005ac8a9
005acb45  POP EDI
005acb46  POP ESI
005acb47  MOV ESP,EBP
005acb49  POP EBP
005acb4a  RET
