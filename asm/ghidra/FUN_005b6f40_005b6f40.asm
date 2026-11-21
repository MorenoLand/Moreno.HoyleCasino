; FUN_005b6f40  005b6f40
005b6f40  PUSH EBP
005b6f41  MOV EBP,ESP
005b6f43  SUB ESP,0x38
005b6f46  PUSH ESI
005b6f47  MOV dword ptr [EBP + -0x38],ECX
005b6f4a  MOV dword ptr [EBP + -0x4],0x0
005b6f51  JMP 0x005b6f5c
005b6f53  MOV EAX,dword ptr [EBP + -0x4]
005b6f56  ADD EAX,0x1
005b6f59  MOV dword ptr [EBP + -0x4],EAX
005b6f5c  CMP dword ptr [EBP + -0x4],0x4
005b6f60  JGE 0x005b707e
005b6f66  MOV ECX,dword ptr [EBP + -0x4]
005b6f69  PUSH ECX
005b6f6a  CALL 0x005dcb00
005b6f6f  ADD ESP,0x4
005b6f72  MOV dword ptr [EBP + -0x28],EAX
005b6f75  MOV EDX,dword ptr [EBP + -0x28]
005b6f78  MOV AL,byte ptr [EDX + 0x4a0]
005b6f7e  MOV byte ptr [EBP + -0x29],AL
005b6f81  MOVZX ECX,byte ptr [EBP + -0x29]
005b6f85  TEST ECX,ECX
005b6f87  JZ 0x005b7021
005b6f8d  MOV EDX,dword ptr [EBP + -0x4]
005b6f90  MOV EAX,dword ptr [EBP + -0x38]
005b6f93  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x580]
005b6f9a  MOV dword ptr [EBP + -0x30],ECX
005b6f9d  MOV EDX,dword ptr [EBP + -0x4]
005b6fa0  SHL EDX,0x5
005b6fa3  MOV EAX,dword ptr [EBP + -0x30]
005b6fa6  LEA ECX,[EAX + EDX*0x1 + 0x48]
005b6faa  XOR EDX,EDX
005b6fac  SHL EDX,0x3
005b6faf  MOV EAX,dword ptr [ECX + EDX*0x1]
005b6fb2  MOV ECX,dword ptr [ECX + EDX*0x1 + 0x4]
005b6fb6  MOV dword ptr [EBP + -0xc],EAX
005b6fb9  MOV dword ptr [EBP + -0x8],ECX
005b6fbc  MOV EDX,dword ptr [EBP + -0xc]
005b6fbf  MOV EAX,dword ptr [EBP + -0x8]
005b6fc2  MOV ECX,dword ptr [EBP + -0x4]
005b6fc5  MOV ESI,dword ptr [EBP + -0x38]
005b6fc8  MOV dword ptr [ESI + ECX*0x8 + 0x590],EDX
005b6fcf  MOV dword ptr [ESI + ECX*0x8 + 0x594],EAX
005b6fd6  MOV EDX,dword ptr [EBP + -0x4]
005b6fd9  MOV EAX,dword ptr [EBP + -0x38]
005b6fdc  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x634]
005b6fe3  MOV dword ptr [EBP + -0x34],ECX
005b6fe6  MOV EDX,dword ptr [EBP + -0x4]
005b6fe9  SHL EDX,0x5
005b6fec  MOV EAX,dword ptr [EBP + -0x34]
005b6fef  LEA ECX,[EAX + EDX*0x1 + 0x48]
005b6ff3  XOR EDX,EDX
005b6ff5  SHL EDX,0x3
005b6ff8  MOV EAX,dword ptr [ECX + EDX*0x1]
005b6ffb  MOV ECX,dword ptr [ECX + EDX*0x1 + 0x4]
005b6fff  MOV dword ptr [EBP + -0x14],EAX
005b7002  MOV dword ptr [EBP + -0x10],ECX
005b7005  MOV EDX,dword ptr [EBP + -0x14]
005b7008  MOV EAX,dword ptr [EBP + -0x10]
005b700b  MOV ECX,dword ptr [EBP + -0x4]
005b700e  MOV ESI,dword ptr [EBP + -0x38]
005b7011  MOV dword ptr [ESI + ECX*0x8 + 0x644],EDX
005b7018  MOV dword ptr [ESI + ECX*0x8 + 0x648],EAX
005b701f  JMP 0x005b7079
005b7021  PUSH 0x0
005b7023  PUSH 0x0
005b7025  CALL 0x0064c8a0
005b702a  ADD ESP,0x8
005b702d  MOV dword ptr [EBP + -0x1c],EAX
005b7030  MOV dword ptr [EBP + -0x18],EDX
005b7033  MOV EDX,dword ptr [EBP + -0x4]
005b7036  MOV EAX,dword ptr [EBP + -0x38]
005b7039  MOV ECX,dword ptr [EBP + -0x1c]
005b703c  MOV dword ptr [EAX + EDX*0x8 + 0x590],ECX
005b7043  MOV ECX,dword ptr [EBP + -0x18]
005b7046  MOV dword ptr [EAX + EDX*0x8 + 0x594],ECX
005b704d  PUSH 0x0
005b704f  PUSH 0x0
005b7051  CALL 0x0064c8a0
005b7056  ADD ESP,0x8
005b7059  MOV dword ptr [EBP + -0x24],EAX
005b705c  MOV dword ptr [EBP + -0x20],EDX
005b705f  MOV EDX,dword ptr [EBP + -0x4]
005b7062  MOV EAX,dword ptr [EBP + -0x38]
005b7065  MOV ECX,dword ptr [EBP + -0x24]
005b7068  MOV dword ptr [EAX + EDX*0x8 + 0x644],ECX
005b706f  MOV ECX,dword ptr [EBP + -0x20]
005b7072  MOV dword ptr [EAX + EDX*0x8 + 0x648],ECX
005b7079  JMP 0x005b6f53
005b707e  POP ESI
005b707f  MOV ESP,EBP
005b7081  POP EBP
005b7082  RET
