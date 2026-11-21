; FUN_005cca50  005cca50
005cca50  PUSH EBP
005cca51  MOV EBP,ESP
005cca53  PUSH -0x1
005cca55  PUSH 0x6a8b41
005cca5a  MOV EAX,FS:[0x0]
005cca60  PUSH EAX
005cca61  SUB ESP,0x10
005cca64  PUSH ESI
005cca65  MOV EAX,[0x00781870]
005cca6a  XOR EAX,EBP
005cca6c  PUSH EAX
005cca6d  LEA EAX,[EBP + -0xc]
005cca70  MOV FS:[0x0],EAX
005cca76  MOV dword ptr [EBP + -0x18],ECX
005cca79  PUSH 0x190
005cca7e  CALL 0x00686d82
005cca83  ADD ESP,0x4
005cca86  MOV dword ptr [EBP + -0x14],EAX
005cca89  MOV dword ptr [EBP + -0x4],0x0
005cca90  CMP dword ptr [EBP + -0x14],0x0
005cca94  JZ 0x005ccaa3
005cca96  MOV ECX,dword ptr [EBP + -0x14]
005cca99  CALL 0x005f5f50
005cca9e  MOV dword ptr [EBP + -0x1c],EAX
005ccaa1  JMP 0x005ccaaa
005ccaa3  MOV dword ptr [EBP + -0x1c],0x0
005ccaaa  MOV EAX,dword ptr [EBP + -0x1c]
005ccaad  MOV dword ptr [EBP + -0x10],EAX
005ccab0  MOV dword ptr [EBP + -0x4],0xffffffff
005ccab7  MOV ECX,dword ptr [EBP + 0x8]
005ccaba  IMUL ECX,ECX,0x1e0
005ccac0  MOV EDX,dword ptr [EBP + -0x18]
005ccac3  LEA EAX,[EDX + ECX*0x1 + 0x17c]
005ccaca  MOV ECX,dword ptr [EBP + 0xc]
005ccacd  IMUL ECX,ECX,0x78
005ccad0  ADD EAX,ECX
005ccad2  MOV EDX,dword ptr [EBP + 0x10]
005ccad5  MOV ECX,dword ptr [EBP + -0x10]
005ccad8  MOV dword ptr [EAX + EDX*0x4],ECX
005ccadb  PUSH -0x1
005ccadd  MOV EDX,dword ptr [EBP + -0x18]
005ccae0  MOV EAX,dword ptr [EDX]
005ccae2  MOV ECX,dword ptr [EBP + -0x18]
005ccae5  MOV EDX,dword ptr [EAX + 0xd0]
005ccaeb  CALL EDX
005ccaed  ADD EAX,dword ptr [EBP + 0x10]
005ccaf0  PUSH EAX
005ccaf1  MOV EAX,dword ptr [EBP + 0xc]
005ccaf4  PUSH EAX
005ccaf5  MOV ECX,dword ptr [EBP + 0x8]
005ccaf8  PUSH ECX
005ccaf9  MOV EDX,dword ptr [EBP + -0x18]
005ccafc  MOV EAX,dword ptr [EDX]
005ccafe  MOV ECX,dword ptr [EBP + -0x18]
005ccb01  MOV EDX,dword ptr [EAX + 0xd8]
005ccb07  CALL EDX
005ccb09  MOV ESI,EAX
005ccb0b  MOV EAX,dword ptr [EBP + 0xc]
005ccb0e  PUSH EAX
005ccb0f  MOV ECX,dword ptr [EBP + 0x8]
005ccb12  PUSH ECX
005ccb13  MOV EDX,dword ptr [EBP + -0x18]
005ccb16  MOV EAX,dword ptr [EDX]
005ccb18  MOV ECX,dword ptr [EBP + -0x18]
005ccb1b  MOV EDX,dword ptr [EAX + 0xe0]
005ccb21  CALL EDX
005ccb23  IMUL EAX,dword ptr [EBP + 0x10]
005ccb27  ADD ESI,EAX
005ccb29  PUSH ESI
005ccb2a  MOV EAX,dword ptr [EBP + 0xc]
005ccb2d  PUSH EAX
005ccb2e  MOV ECX,dword ptr [EBP + 0x8]
005ccb31  PUSH ECX
005ccb32  MOV EDX,dword ptr [EBP + -0x18]
005ccb35  MOV EAX,dword ptr [EDX]
005ccb37  MOV ECX,dword ptr [EBP + -0x18]
005ccb3a  MOV EDX,dword ptr [EAX + 0xd4]
005ccb40  CALL EDX
005ccb42  PUSH EAX
005ccb43  MOV EAX,dword ptr [EBP + -0x18]
005ccb46  MOV EDX,dword ptr [EAX]
005ccb48  MOV ECX,dword ptr [EBP + -0x18]
005ccb4b  MOV EAX,dword ptr [EDX + 0xcc]
005ccb51  CALL EAX
005ccb53  PUSH EAX
005ccb54  MOV ECX,dword ptr [EBP + 0x8]
005ccb57  IMUL ECX,ECX,0x1e0
005ccb5d  MOV EDX,dword ptr [EBP + -0x18]
005ccb60  LEA EAX,[EDX + ECX*0x1 + 0x17c]
005ccb67  MOV ECX,dword ptr [EBP + 0xc]
005ccb6a  IMUL ECX,ECX,0x78
005ccb6d  ADD EAX,ECX
005ccb6f  MOV EDX,dword ptr [EBP + 0x10]
005ccb72  MOV ECX,dword ptr [EAX + EDX*0x4]
005ccb75  CALL 0x005eae80
005ccb7a  MOV ESI,0x10
005ccb7f  SUB ESI,dword ptr [EBP + 0x14]
005ccb82  IMUL ESI,ESI,0x3
005ccb85  PUSH 0x3
005ccb87  CALL 0x0062fbf0
005ccb8c  ADD ESP,0x4
005ccb8f  ADD ESI,EAX
005ccb91  PUSH ESI
005ccb92  MOV EAX,dword ptr [EBP + 0x8]
005ccb95  IMUL EAX,EAX,0x1e0
005ccb9b  MOV ECX,dword ptr [EBP + -0x18]
005ccb9e  LEA EDX,[ECX + EAX*0x1 + 0x17c]
005ccba5  MOV EAX,dword ptr [EBP + 0xc]
005ccba8  IMUL EAX,EAX,0x78
005ccbab  ADD EDX,EAX
005ccbad  MOV ECX,dword ptr [EBP + 0x10]
005ccbb0  MOV EDX,dword ptr [EDX + ECX*0x4]
005ccbb3  MOV EAX,dword ptr [EBP + 0xc]
005ccbb6  IMUL EAX,EAX,0x78
005ccbb9  MOV ECX,dword ptr [EBP + 0x8]
005ccbbc  IMUL ECX,ECX,0x1e0
005ccbc2  MOV ESI,dword ptr [EBP + -0x18]
005ccbc5  LEA ECX,[ESI + ECX*0x1 + 0x17c]
005ccbcc  ADD ECX,EAX
005ccbce  MOV EAX,dword ptr [EBP + 0x10]
005ccbd1  MOV ECX,dword ptr [ECX + EAX*0x4]
005ccbd4  MOV EDX,dword ptr [EDX]
005ccbd6  MOV EAX,dword ptr [EDX + 0xb0]
005ccbdc  CALL EAX
005ccbde  PUSH 0x1
005ccbe0  MOV ECX,dword ptr [EBP + 0x8]
005ccbe3  IMUL ECX,ECX,0x1e0
005ccbe9  MOV EDX,dword ptr [EBP + -0x18]
005ccbec  LEA EAX,[EDX + ECX*0x1 + 0x17c]
005ccbf3  MOV ECX,dword ptr [EBP + 0xc]
005ccbf6  IMUL ECX,ECX,0x78
005ccbf9  ADD EAX,ECX
005ccbfb  MOV EDX,dword ptr [EBP + 0x10]
005ccbfe  MOV ECX,dword ptr [EAX + EDX*0x4]
005ccc01  CALL 0x005eb700
005ccc06  MOV EAX,dword ptr [EBP + 0x8]
005ccc09  IMUL EAX,EAX,0x1e0
005ccc0f  MOV ECX,dword ptr [EBP + -0x18]
005ccc12  LEA EDX,[ECX + EAX*0x1 + 0x17c]
005ccc19  MOV EAX,dword ptr [EBP + 0xc]
005ccc1c  IMUL EAX,EAX,0x78
005ccc1f  ADD EDX,EAX
005ccc21  MOV ECX,dword ptr [EBP + 0x10]
005ccc24  MOV EDX,dword ptr [EDX + ECX*0x4]
005ccc27  MOV EAX,dword ptr [EBP + 0xc]
005ccc2a  IMUL EAX,EAX,0x78
005ccc2d  MOV ECX,dword ptr [EBP + 0x8]
005ccc30  IMUL ECX,ECX,0x1e0
005ccc36  MOV ESI,dword ptr [EBP + -0x18]
005ccc39  LEA ECX,[ESI + ECX*0x1 + 0x17c]
005ccc40  ADD ECX,EAX
005ccc42  MOV EAX,dword ptr [EBP + 0x10]
005ccc45  MOV ECX,dword ptr [ECX + EAX*0x4]
005ccc48  MOV EDX,dword ptr [EDX]
005ccc4a  MOV EAX,dword ptr [EDX + 0x74]
005ccc4d  CALL EAX
005ccc4f  MOV ECX,dword ptr [EBP + -0xc]
005ccc52  MOV dword ptr FS:[0x0],ECX
005ccc59  POP ECX
005ccc5a  POP ESI
005ccc5b  MOV ESP,EBP
005ccc5d  POP EBP
005ccc5e  RET 0x10
