; FUN_005a9510  005a9510
005a9510  PUSH EBP
005a9511  MOV EBP,ESP
005a9513  SUB ESP,0x18
005a9516  MOV dword ptr [EBP + -0x14],ECX
005a9519  MOV ECX,dword ptr [EBP + -0x14]
005a951c  CALL 0x005ccd90
005a9521  MOV dword ptr [EBP + -0x4],0x0
005a9528  JMP 0x005a9533
005a952a  MOV EAX,dword ptr [EBP + -0x4]
005a952d  ADD EAX,0x1
005a9530  MOV dword ptr [EBP + -0x4],EAX
005a9533  CMP dword ptr [EBP + -0x4],0x4
005a9537  JGE 0x005a960e
005a953d  MOV dword ptr [EBP + -0x8],0x0
005a9544  JMP 0x005a954f
005a9546  MOV ECX,dword ptr [EBP + -0x8]
005a9549  ADD ECX,0x1
005a954c  MOV dword ptr [EBP + -0x8],ECX
005a954f  CMP dword ptr [EBP + -0x8],0x1e
005a9553  JGE 0x005a9609
005a9559  MOV EDX,dword ptr [EBP + -0x4]
005a955c  IMUL EDX,EDX,0x78
005a955f  MOV EAX,dword ptr [EBP + -0x14]
005a9562  LEA ECX,[EAX + EDX*0x1 + 0xae0]
005a9569  MOV EDX,dword ptr [EBP + -0x8]
005a956c  CMP dword ptr [ECX + EDX*0x4],0x0
005a9570  JZ 0x005a9604
005a9576  MOV EAX,dword ptr [EBP + -0x4]
005a9579  IMUL EAX,EAX,0x78
005a957c  MOV ECX,dword ptr [EBP + -0x14]
005a957f  LEA EDX,[ECX + EAX*0x1 + 0xae0]
005a9586  MOV EAX,dword ptr [EBP + -0x8]
005a9589  MOV ECX,dword ptr [EDX + EAX*0x4]
005a958c  MOV EDX,dword ptr [EBP + -0x4]
005a958f  IMUL EDX,EDX,0x78
005a9592  MOV EAX,dword ptr [EBP + -0x14]
005a9595  LEA EDX,[EAX + EDX*0x1 + 0xae0]
005a959c  MOV EAX,dword ptr [EBP + -0x8]
005a959f  MOV EDX,dword ptr [EDX + EAX*0x4]
005a95a2  MOV EAX,dword ptr [ECX]
005a95a4  MOV ECX,EDX
005a95a6  MOV EDX,dword ptr [EAX + 0x70]
005a95a9  CALL EDX
005a95ab  MOV EAX,dword ptr [EBP + -0x4]
005a95ae  IMUL EAX,EAX,0x78
005a95b1  MOV ECX,dword ptr [EBP + -0x14]
005a95b4  LEA EDX,[ECX + EAX*0x1 + 0xae0]
005a95bb  MOV EAX,dword ptr [EBP + -0x8]
005a95be  MOV ECX,dword ptr [EDX + EAX*0x4]
005a95c1  MOV dword ptr [EBP + -0x10],ECX
005a95c4  MOV EDX,dword ptr [EBP + -0x10]
005a95c7  MOV dword ptr [EBP + -0xc],EDX
005a95ca  CMP dword ptr [EBP + -0xc],0x0
005a95ce  JZ 0x005a95e3
005a95d0  PUSH 0x1
005a95d2  MOV EAX,dword ptr [EBP + -0xc]
005a95d5  MOV EDX,dword ptr [EAX]
005a95d7  MOV ECX,dword ptr [EBP + -0xc]
005a95da  MOV EAX,dword ptr [EDX]
005a95dc  CALL EAX
005a95de  MOV dword ptr [EBP + -0x18],EAX
005a95e1  JMP 0x005a95ea
005a95e3  MOV dword ptr [EBP + -0x18],0x0
005a95ea  MOV ECX,dword ptr [EBP + -0x4]
005a95ed  IMUL ECX,ECX,0x78
005a95f0  MOV EDX,dword ptr [EBP + -0x14]
005a95f3  LEA EAX,[EDX + ECX*0x1 + 0xae0]
005a95fa  MOV ECX,dword ptr [EBP + -0x8]
005a95fd  MOV dword ptr [EAX + ECX*0x4],0x0
005a9604  JMP 0x005a9546
005a9609  JMP 0x005a952a
005a960e  MOV ESP,EBP
005a9610  POP EBP
005a9611  RET
