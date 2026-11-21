; FUN_005efa20  005efa20
005efa20  PUSH EBP
005efa21  MOV EBP,ESP
005efa23  SUB ESP,0x44
005efa26  MOV dword ptr [EBP + -0x3c],ECX
005efa29  MOV dword ptr [EBP + -0x34],0x0
005efa30  MOV dword ptr [EBP + -0x8],0x0
005efa37  MOV dword ptr [EBP + -0x30],0x0
005efa3e  MOV dword ptr [EBP + -0x20],0x0
005efa45  MOV dword ptr [EBP + -0x10],0x0
005efa4c  MOV dword ptr [EBP + -0x4],0x0
005efa53  MOV EAX,dword ptr [EBP + -0x3c]
005efa56  CMP dword ptr [EAX + 0x5c],0x0
005efa5a  JZ 0x005efa69
005efa5c  MOV ECX,dword ptr [EBP + -0x3c]
005efa5f  MOV EDX,dword ptr [ECX + 0x5c]
005efa62  MOVZX EAX,byte ptr [EDX]
005efa65  TEST EAX,EAX
005efa67  JNZ 0x005efa6e
005efa69  JMP 0x005efd19
005efa6e  LEA ECX,[EBP + -0x24]
005efa71  PUSH ECX
005efa72  LEA EDX,[EBP + -0x18]
005efa75  PUSH EDX
005efa76  MOV EAX,dword ptr [EBP + -0x3c]
005efa79  MOV ECX,dword ptr [EAX + 0x5c]
005efa7c  PUSH ECX
005efa7d  MOV ECX,dword ptr [EBP + -0x3c]
005efa80  CALL 0x005eedc0
005efa85  MOV EDX,dword ptr [EBP + -0x3c]
005efa88  MOV EAX,dword ptr [EDX + 0x70]
005efa8b  AND EAX,0x4
005efa8e  JZ 0x005efa97
005efa90  MOV dword ptr [EBP + -0x8],0x0
005efa97  MOV ECX,dword ptr [EBP + -0x3c]
005efa9a  MOV EDX,dword ptr [ECX + 0x70]
005efa9d  AND EDX,0x8
005efaa0  JZ 0x005efaae
005efaa2  MOV EAX,dword ptr [EBP + -0x3c]
005efaa5  MOV ECX,dword ptr [EAX + 0x6c]
005efaa8  SUB ECX,dword ptr [EBP + -0x24]
005efaab  MOV dword ptr [EBP + -0x8],ECX
005efaae  MOV EDX,dword ptr [EBP + -0x3c]
005efab1  MOV EAX,dword ptr [EDX + 0x70]
005efab4  AND EAX,0x10
005efab7  JZ 0x005efaca
005efab9  MOV ECX,dword ptr [EBP + -0x3c]
005efabc  MOV EAX,dword ptr [ECX + 0x6c]
005efabf  SUB EAX,dword ptr [EBP + -0x24]
005efac2  CDQ
005efac3  SUB EAX,EDX
005efac5  SAR EAX,0x1
005efac7  MOV dword ptr [EBP + -0x8],EAX
005efaca  MOV EDX,dword ptr [EBP + -0x3c]
005efacd  MOV EAX,dword ptr [EBP + -0x8]
005efad0  ADD EAX,dword ptr [EDX + 0x78]
005efad3  MOV dword ptr [EBP + -0x8],EAX
005efad6  MOV dword ptr [EBP + -0xc],0x0
005efadd  JMP 0x005efae5
005efadf  MOV ECX,dword ptr [EBP + -0x28]
005efae2  MOV dword ptr [EBP + -0xc],ECX
005efae5  MOV EDX,dword ptr [EBP + -0x3c]
005efae8  MOV EAX,dword ptr [EDX + 0x5c]
005efaeb  MOV ECX,dword ptr [EBP + -0xc]
005efaee  MOVZX EDX,byte ptr [EAX + ECX*0x1]
005efaf2  TEST EDX,EDX
005efaf4  JZ 0x005efd19
005efafa  PUSH 0x0
005efafc  LEA EAX,[EBP + -0x10]
005efaff  PUSH EAX
005efb00  LEA ECX,[EBP + -0x28]
005efb03  PUSH ECX
005efb04  LEA EDX,[EBP + -0x2c]
005efb07  PUSH EDX
005efb08  MOV EAX,dword ptr [EBP + -0xc]
005efb0b  PUSH EAX
005efb0c  MOV ECX,dword ptr [EBP + -0x3c]
005efb0f  CALL 0x005eebf0
005efb14  PUSH 0x0
005efb16  LEA ECX,[EBP + -0x4]
005efb19  PUSH ECX
005efb1a  LEA EDX,[EBP + -0x1c]
005efb1d  PUSH EDX
005efb1e  LEA EAX,[EBP + -0x14]
005efb21  PUSH EAX
005efb22  MOV ECX,dword ptr [EBP + -0x28]
005efb25  PUSH ECX
005efb26  MOV ECX,dword ptr [EBP + -0x3c]
005efb29  CALL 0x005eebf0
005efb2e  MOV EDX,dword ptr [EBP + -0x3c]
005efb31  MOV EAX,dword ptr [EDX + 0x5c]
005efb34  MOV ECX,dword ptr [EBP + -0x2c]
005efb37  MOVZX EDX,byte ptr [EAX + ECX*0x1]
005efb3b  TEST EDX,EDX
005efb3d  JNZ 0x005efb44
005efb3f  JMP 0x005efd19
005efb44  MOV EAX,dword ptr [EBP + -0x3c]
005efb47  MOV ECX,dword ptr [EAX + 0x5c]
005efb4a  MOV EDX,dword ptr [EBP + -0x14]
005efb4d  MOVZX EAX,byte ptr [ECX + EDX*0x1]
005efb51  TEST EAX,EAX
005efb53  JZ 0x005efb8d
005efb55  MOV ECX,dword ptr [EBP + 0xc]
005efb58  CMP ECX,dword ptr [EBP + -0x8]
005efb5b  JL 0x005efb6f
005efb5d  MOV EDX,dword ptr [EBP + -0x3c]
005efb60  MOVSX EAX,word ptr [EDX + 0x96]
005efb67  ADD EAX,dword ptr [EBP + -0x8]
005efb6a  CMP dword ptr [EBP + 0xc],EAX
005efb6d  JL 0x005efb8d
005efb6f  MOV ECX,dword ptr [EBP + -0x28]
005efb72  ADD ECX,0x1
005efb75  MOV dword ptr [EBP + -0xc],ECX
005efb78  MOV EDX,dword ptr [EBP + -0x3c]
005efb7b  MOVSX EAX,word ptr [EDX + 0x96]
005efb82  ADD EAX,dword ptr [EBP + -0x8]
005efb85  MOV dword ptr [EBP + -0x8],EAX
005efb88  JMP 0x005efadf
005efb8d  MOV ECX,dword ptr [EBP + -0x3c]
005efb90  MOV EDX,dword ptr [ECX + 0x70]
005efb93  AND EDX,0x1
005efb96  JZ 0x005efb9f
005efb98  MOV dword ptr [EBP + -0x30],0x0
005efb9f  MOV EAX,dword ptr [EBP + -0x3c]
005efba2  MOV ECX,dword ptr [EAX + 0x70]
005efba5  AND ECX,0x2
005efba8  JZ 0x005efbb6
005efbaa  MOV EDX,dword ptr [EBP + -0x3c]
005efbad  MOV EAX,dword ptr [EDX + 0x68]
005efbb0  SUB EAX,dword ptr [EBP + -0x10]
005efbb3  MOV dword ptr [EBP + -0x30],EAX
005efbb6  MOV ECX,dword ptr [EBP + -0x3c]
005efbb9  MOV EDX,dword ptr [ECX + 0x70]
005efbbc  AND EDX,0x20
005efbbf  JZ 0x005efbd2
005efbc1  MOV EAX,dword ptr [EBP + -0x3c]
005efbc4  MOV EAX,dword ptr [EAX + 0x68]
005efbc7  SUB EAX,dword ptr [EBP + -0x10]
005efbca  CDQ
005efbcb  SUB EAX,EDX
005efbcd  SAR EAX,0x1
005efbcf  MOV dword ptr [EBP + -0x30],EAX
005efbd2  MOV ECX,dword ptr [EBP + -0x3c]
005efbd5  MOV EDX,dword ptr [EBP + -0x30]
005efbd8  ADD EDX,dword ptr [ECX + 0x74]
005efbdb  MOV dword ptr [EBP + -0x30],EDX
005efbde  MOV EAX,dword ptr [EBP + -0x2c]
005efbe1  MOV dword ptr [EBP + -0x38],EAX
005efbe4  JMP 0x005efbef
005efbe6  MOV ECX,dword ptr [EBP + -0x38]
005efbe9  ADD ECX,0x1
005efbec  MOV dword ptr [EBP + -0x38],ECX
005efbef  MOV EDX,dword ptr [EBP + -0x38]
005efbf2  CMP EDX,dword ptr [EBP + -0x28]
005efbf5  JGE 0x005efd04
005efbfb  MOV EAX,dword ptr [EBP + -0x28]
005efbfe  SUB EAX,0x1
005efc01  CMP dword ptr [EBP + -0x38],EAX
005efc04  JGE 0x005efc19
005efc06  MOV ECX,dword ptr [EBP + -0x3c]
005efc09  MOV EDX,dword ptr [ECX + 0x5c]
005efc0c  MOV EAX,dword ptr [EBP + -0x38]
005efc0f  MOVZX ECX,byte ptr [EDX + EAX*0x1 + 0x1]
005efc14  MOV dword ptr [EBP + -0x40],ECX
005efc17  JMP 0x005efc20
005efc19  MOV dword ptr [EBP + -0x40],0xffffffff
005efc20  MOV EDX,dword ptr [EBP + -0x40]
005efc23  PUSH EDX
005efc24  MOV EAX,dword ptr [EBP + -0x3c]
005efc27  MOV ECX,dword ptr [EAX + 0x5c]
005efc2a  MOV EDX,dword ptr [EBP + -0x38]
005efc2d  MOV AL,byte ptr [ECX + EDX*0x1]
005efc30  PUSH EAX
005efc31  MOV ECX,dword ptr [EBP + -0x3c]
005efc34  CALL 0x005ee950
005efc39  ADD EAX,dword ptr [EBP + -0x30]
005efc3c  MOV dword ptr [EBP + -0x20],EAX
005efc3f  MOV ECX,dword ptr [EBP + 0x8]
005efc42  CMP ECX,dword ptr [EBP + -0x20]
005efc45  JG 0x005efc7b
005efc47  MOV EAX,dword ptr [EBP + -0x30]
005efc4a  ADD EAX,dword ptr [EBP + -0x20]
005efc4d  CDQ
005efc4e  SUB EAX,EDX
005efc50  SAR EAX,0x1
005efc52  CMP dword ptr [EBP + 0x8],EAX
005efc55  JGE 0x005efc65
005efc57  MOV EDX,dword ptr [EBP + -0x3c]
005efc5a  MOV EAX,dword ptr [EBP + -0x38]
005efc5d  MOV dword ptr [EDX + 0xa0],EAX
005efc63  JMP 0x005efc74
005efc65  MOV ECX,dword ptr [EBP + -0x38]
005efc68  ADD ECX,0x1
005efc6b  MOV EDX,dword ptr [EBP + -0x3c]
005efc6e  MOV dword ptr [EDX + 0xa0],ECX
005efc74  JMP 0x005efd19
005efc7b  MOV EAX,dword ptr [EBP + -0x3c]
005efc7e  MOV ECX,dword ptr [EAX + 0x5c]
005efc81  MOV EDX,dword ptr [EBP + -0x38]
005efc84  MOVZX EAX,byte ptr [ECX + EDX*0x1 + 0x1]
005efc89  TEST EAX,EAX
005efc8b  JNZ 0x005efca6
005efc8d  MOV ECX,dword ptr [EBP + 0x8]
005efc90  CMP ECX,dword ptr [EBP + -0x20]
005efc93  JLE 0x005efca6
005efc95  MOV EDX,dword ptr [EBP + -0x38]
005efc98  ADD EDX,0x1
005efc9b  MOV EAX,dword ptr [EBP + -0x3c]
005efc9e  MOV dword ptr [EAX + 0xa0],EDX
005efca4  JMP 0x005efd19
005efca6  MOV ECX,dword ptr [EBP + -0x28]
005efca9  SUB ECX,0x1
005efcac  CMP dword ptr [EBP + -0x38],ECX
005efcaf  JGE 0x005efcc4
005efcb1  MOV EDX,dword ptr [EBP + -0x3c]
005efcb4  MOV EAX,dword ptr [EDX + 0x5c]
005efcb7  MOV ECX,dword ptr [EBP + -0x38]
005efcba  MOVZX EDX,byte ptr [EAX + ECX*0x1 + 0x1]
005efcbf  MOV dword ptr [EBP + -0x44],EDX
005efcc2  JMP 0x005efccb
005efcc4  MOV dword ptr [EBP + -0x44],0xffffffff
005efccb  MOV EAX,dword ptr [EBP + -0x44]
005efcce  PUSH EAX
005efccf  MOV ECX,dword ptr [EBP + -0x3c]
005efcd2  MOV EDX,dword ptr [ECX + 0x5c]
005efcd5  MOV EAX,dword ptr [EBP + -0x38]
005efcd8  MOV CL,byte ptr [EDX + EAX*0x1]
005efcdb  PUSH ECX
005efcdc  MOV ECX,dword ptr [EBP + -0x3c]
005efcdf  CALL 0x005ee950
005efce4  MOV EDX,dword ptr [EBP + -0x3c]
005efce7  MOVSX ECX,word ptr [EDX + 0x94]
005efcee  ADD EAX,ECX
005efcf0  MOV EDX,dword ptr [EBP + -0x3c]
005efcf3  ADD EAX,dword ptr [EDX + 0xa8]
005efcf9  ADD EAX,dword ptr [EBP + -0x30]
005efcfc  MOV dword ptr [EBP + -0x30],EAX
005efcff  JMP 0x005efbe6
005efd04  MOV EAX,dword ptr [EBP + -0x3c]
005efd07  MOVSX ECX,word ptr [EAX + 0x96]
005efd0e  ADD ECX,dword ptr [EBP + -0x8]
005efd11  MOV dword ptr [EBP + -0x8],ECX
005efd14  JMP 0x005efadf
005efd19  MOV ESP,EBP
005efd1b  POP EBP
005efd1c  RET 0x8
