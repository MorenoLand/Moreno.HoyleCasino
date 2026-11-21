; FUN_004fc450  004fc450
004fc450  PUSH EBP
004fc451  MOV EBP,ESP
004fc453  SUB ESP,0x20
004fc456  MOV dword ptr [EBP + -0x20],ECX
004fc459  PUSH 0xb
004fc45b  MOV ECX,dword ptr [0x0162ee84]
004fc461  CALL 0x006375d0
004fc466  MOV dword ptr [EBP + -0x4],EAX
004fc469  PUSH 0x0
004fc46b  MOV ECX,dword ptr [0x00791364]
004fc471  CALL 0x00480920
004fc476  PUSH EAX
004fc477  CALL 0x0064c8a0
004fc47c  ADD ESP,0x8
004fc47f  MOV dword ptr [EBP + -0xc],EAX
004fc482  MOV dword ptr [EBP + -0x8],EDX
004fc485  MOV EAX,dword ptr [EBP + -0x8]
004fc488  PUSH EAX
004fc489  MOV ECX,dword ptr [EBP + -0xc]
004fc48c  PUSH ECX
004fc48d  LEA EDX,[EBP + -0x14]
004fc490  PUSH EDX
004fc491  MOV ECX,dword ptr [EBP + -0x4]
004fc494  ADD ECX,0x10
004fc497  CALL 0x0064c630
004fc49c  MOV ECX,dword ptr [EAX]
004fc49e  MOV EDX,dword ptr [EAX + 0x4]
004fc4a1  MOV EAX,dword ptr [EBP + -0x4]
004fc4a4  MOV dword ptr [EAX + 0x10],ECX
004fc4a7  MOV dword ptr [EAX + 0x14],EDX
004fc4aa  MOV ECX,dword ptr [EBP + 0x8]
004fc4ad  PUSH ECX
004fc4ae  CALL 0x005dcb00
004fc4b3  ADD ESP,0x4
004fc4b6  MOV EDX,dword ptr [EAX + 0x4e0]
004fc4bc  PUSH EDX
004fc4bd  MOV EAX,dword ptr [EAX + 0x4dc]
004fc4c3  PUSH EAX
004fc4c4  LEA ECX,[EBP + -0x1c]
004fc4c7  PUSH ECX
004fc4c8  MOV ECX,dword ptr [EBP + -0x4]
004fc4cb  ADD ECX,0x10
004fc4ce  CALL 0x0064c5c0
004fc4d3  MOV EDX,dword ptr [EAX]
004fc4d5  MOV EAX,dword ptr [EAX + 0x4]
004fc4d8  MOV ECX,dword ptr [EBP + -0x4]
004fc4db  MOV dword ptr [ECX + 0x10],EDX
004fc4de  MOV dword ptr [ECX + 0x14],EAX
004fc4e1  MOV EDX,dword ptr [EBP + 0x8]
004fc4e4  PUSH EDX
004fc4e5  CALL 0x005dcb00
004fc4ea  ADD ESP,0x4
004fc4ed  MOV ECX,EAX
004fc4ef  CALL 0x0063b0a0
004fc4f4  MOV ESP,EBP
004fc4f6  POP EBP
004fc4f7  RET 0x4
