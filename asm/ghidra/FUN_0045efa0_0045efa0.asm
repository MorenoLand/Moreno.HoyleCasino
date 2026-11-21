; FUN_0045efa0  0045efa0
0045efa0  PUSH EBP
0045efa1  MOV EBP,ESP
0045efa3  SUB ESP,0x18
0045efa6  MOV dword ptr [EBP + -0x18],ECX
0045efa9  MOV EAX,dword ptr [EBP + -0x18]
0045efac  MOV ECX,dword ptr [EAX + 0x4]
0045efaf  NEG ECX
0045efb1  SBB ECX,ECX
0045efb3  AND ECX,0xfffffffb
0045efb6  ADD ECX,0xa
0045efb9  PUSH ECX
0045efba  MOV ECX,dword ptr [EBP + 0x8]
0045efbd  CALL 0x0063aae0
0045efc2  MOV dword ptr [EBP + -0x4],EAX
0045efc5  MOV EDX,dword ptr [EBP + -0x4]
0045efc8  MOV EAX,dword ptr [EDX + 0x8]
0045efcb  MOV ECX,dword ptr [EBP + -0x4]
0045efce  ADD EAX,dword ptr [ECX + 0x10]
0045efd1  MOV EDX,dword ptr [EBP + 0xc]
0045efd4  ADD EAX,dword ptr [EDX]
0045efd6  MOV ECX,dword ptr [EBP + 0xc]
0045efd9  MOV dword ptr [ECX],EAX
0045efdb  MOV EDX,dword ptr [EBP + 0xc]
0045efde  MOV EAX,dword ptr [EDX + 0x4]
0045efe1  MOV ECX,dword ptr [EBP + -0x4]
0045efe4  ADD EAX,dword ptr [ECX + 0xc]
0045efe7  MOV EDX,dword ptr [EBP + 0xc]
0045efea  MOV dword ptr [EDX + 0x4],EAX
0045efed  MOV EAX,dword ptr [EBP + 0x10]
0045eff0  MOV ECX,dword ptr [EAX]
0045eff2  MOV EDX,dword ptr [EBP + -0x4]
0045eff5  ADD ECX,dword ptr [EDX + 0x8]
0045eff8  MOV EAX,dword ptr [EBP + 0x10]
0045effb  MOV dword ptr [EAX],ECX
0045effd  MOV ECX,dword ptr [EBP + 0x10]
0045f000  MOV EDX,dword ptr [ECX + 0x4]
0045f003  MOV EAX,dword ptr [EBP + -0x4]
0045f006  ADD EDX,dword ptr [EAX + 0xc]
0045f009  MOV ECX,dword ptr [EBP + 0x10]
0045f00c  MOV dword ptr [ECX + 0x4],EDX
0045f00f  MOV EDX,dword ptr [EBP + 0x14]
0045f012  MOV EAX,dword ptr [EDX]
0045f014  MOV ECX,dword ptr [EBP + -0x4]
0045f017  ADD EAX,dword ptr [ECX + 0x10]
0045f01a  MOV EDX,dword ptr [EBP + 0x14]
0045f01d  MOV dword ptr [EDX],EAX
0045f01f  MOV EAX,dword ptr [EBP + 0x14]
0045f022  MOV ECX,dword ptr [EAX + 0x4]
0045f025  MOV EDX,dword ptr [EBP + -0x4]
0045f028  ADD ECX,dword ptr [EDX + 0x14]
0045f02b  MOV EAX,dword ptr [EBP + 0x14]
0045f02e  MOV dword ptr [EAX + 0x4],ECX
0045f031  PUSH -0x1
0045f033  MOV ECX,dword ptr [0x007947e0]
0045f039  MOV EDX,dword ptr [ECX]
0045f03b  MOV ECX,dword ptr [0x007947e0]
0045f041  MOV EAX,dword ptr [EDX + 0x33c]
0045f047  CALL EAX
0045f049  MOVZX ECX,AL
0045f04c  TEST ECX,ECX
0045f04e  JZ 0x0045f0e1
0045f054  MOV ECX,dword ptr [0x0162ee84]
0045f05a  CALL 0x005f3bf0
0045f05f  MOV EDX,dword ptr [EBP + -0x18]
0045f062  MOV ECX,dword ptr [EDX + 0x4]
0045f065  NEG ECX
0045f067  SBB ECX,ECX
0045f069  AND ECX,0xfffffffb
0045f06c  ADD ECX,0xa
0045f06f  CMP EAX,ECX
0045f071  JNZ 0x0045f0e1
0045f073  LEA EDX,[EBP + -0xc]
0045f076  PUSH EDX
0045f077  LEA EAX,[EBP + -0x14]
0045f07a  PUSH EAX
0045f07b  MOV ECX,dword ptr [EBP + 0x8]
0045f07e  PUSH ECX
0045f07f  MOV ECX,dword ptr [0x007947e0]
0045f085  CALL 0x005e0c40
0045f08a  MOV EDX,dword ptr [EBP + -0x14]
0045f08d  ADD EDX,dword ptr [EBP + -0xc]
0045f090  MOV EAX,dword ptr [EBP + 0xc]
0045f093  ADD EDX,dword ptr [EAX]
0045f095  MOV ECX,dword ptr [EBP + 0xc]
0045f098  MOV dword ptr [ECX],EDX
0045f09a  MOV EDX,dword ptr [EBP + 0xc]
0045f09d  MOV EAX,dword ptr [EDX + 0x4]
0045f0a0  ADD EAX,dword ptr [EBP + -0x10]
0045f0a3  MOV ECX,dword ptr [EBP + 0xc]
0045f0a6  MOV dword ptr [ECX + 0x4],EAX
0045f0a9  MOV EDX,dword ptr [EBP + 0x10]
0045f0ac  MOV EAX,dword ptr [EDX]
0045f0ae  ADD EAX,dword ptr [EBP + -0x14]
0045f0b1  MOV ECX,dword ptr [EBP + 0x10]
0045f0b4  MOV dword ptr [ECX],EAX
0045f0b6  MOV EDX,dword ptr [EBP + 0x10]
0045f0b9  MOV EAX,dword ptr [EDX + 0x4]
0045f0bc  ADD EAX,dword ptr [EBP + -0x10]
0045f0bf  MOV ECX,dword ptr [EBP + 0x10]
0045f0c2  MOV dword ptr [ECX + 0x4],EAX
0045f0c5  MOV EDX,dword ptr [EBP + 0x14]
0045f0c8  MOV EAX,dword ptr [EDX]
0045f0ca  ADD EAX,dword ptr [EBP + -0xc]
0045f0cd  MOV ECX,dword ptr [EBP + 0x14]
0045f0d0  MOV dword ptr [ECX],EAX
0045f0d2  MOV EDX,dword ptr [EBP + 0x14]
0045f0d5  MOV EAX,dword ptr [EDX + 0x4]
0045f0d8  ADD EAX,dword ptr [EBP + -0x8]
0045f0db  MOV ECX,dword ptr [EBP + 0x14]
0045f0de  MOV dword ptr [ECX + 0x4],EAX
0045f0e1  MOV ESP,EBP
0045f0e3  POP EBP
0045f0e4  RET 0x10
