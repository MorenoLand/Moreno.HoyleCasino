; FUN_005f5940  005f5940
005f5940  PUSH EBP
005f5941  MOV EBP,ESP
005f5943  SUB ESP,0x18
005f5946  MOV dword ptr [EBP + -0x18],ECX
005f5949  MOV EAX,dword ptr [EBP + -0x18]
005f594c  CMP dword ptr [EAX + 0x4],0x0
005f5950  JZ 0x005f59ac
005f5952  MOV ECX,dword ptr [EBP + 0x8]
005f5955  MOV EDX,dword ptr [ECX]
005f5957  MOV dword ptr [EBP + -0x10],EDX
005f595a  MOV EAX,dword ptr [ECX + 0x4]
005f595d  MOV dword ptr [EBP + -0xc],EAX
005f5960  MOV EDX,dword ptr [ECX + 0x8]
005f5963  MOV dword ptr [EBP + -0x8],EDX
005f5966  MOV EAX,dword ptr [ECX + 0xc]
005f5969  MOV dword ptr [EBP + -0x4],EAX
005f596c  MOV ECX,dword ptr [EBP + -0x18]
005f596f  MOV EDX,dword ptr [ECX + 0x40]
005f5972  MOV dword ptr [EBP + -0x14],EDX
005f5975  CMP dword ptr [EBP + -0x14],0x1
005f5979  JG 0x005f597d
005f597b  JMP 0x005f599d
005f597d  MOV EAX,dword ptr [EBP + -0x8]
005f5980  SUB EAX,dword ptr [EBP + -0x10]
005f5983  IMUL EAX,dword ptr [EBP + -0x14]
005f5987  ADD EAX,dword ptr [EBP + -0x10]
005f598a  MOV dword ptr [EBP + -0x8],EAX
005f598d  MOV ECX,dword ptr [EBP + -0x4]
005f5990  SUB ECX,dword ptr [EBP + -0xc]
005f5993  IMUL ECX,dword ptr [EBP + -0x14]
005f5997  ADD ECX,dword ptr [EBP + -0xc]
005f599a  MOV dword ptr [EBP + -0x4],ECX
005f599d  LEA EDX,[EBP + -0x10]
005f59a0  PUSH EDX
005f59a1  MOV EAX,dword ptr [EBP + -0x18]
005f59a4  MOV ECX,dword ptr [EAX + 0x4]
005f59a7  CALL 0x005f9500
005f59ac  MOV ESP,EBP
005f59ae  POP EBP
005f59af  RET 0x4
