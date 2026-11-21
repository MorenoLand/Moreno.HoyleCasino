; FUN_005f9500  005f9500
005f9500  PUSH EBP
005f9501  MOV EBP,ESP
005f9503  SUB ESP,0x24
005f9506  MOV dword ptr [EBP + -0x20],ECX
005f9509  MOV EAX,dword ptr [EBP + 0x8]
005f950c  MOV ECX,dword ptr [EAX]
005f950e  MOV dword ptr [EBP + -0x10],ECX
005f9511  MOV EDX,dword ptr [EAX + 0x4]
005f9514  MOV dword ptr [EBP + -0xc],EDX
005f9517  MOV ECX,dword ptr [EAX + 0x8]
005f951a  MOV dword ptr [EBP + -0x8],ECX
005f951d  MOV EDX,dword ptr [EAX + 0xc]
005f9520  MOV dword ptr [EBP + -0x4],EDX
005f9523  MOV ECX,dword ptr [EBP + -0x20]
005f9526  CALL 0x005f84f0
005f952b  MOV dword ptr [EBP + -0x18],EAX
005f952e  MOV ECX,dword ptr [EBP + -0x20]
005f9531  CALL 0x005f84d0
005f9536  MOV dword ptr [EBP + -0x14],EAX
005f9539  MOV EAX,dword ptr [EBP + -0x10]
005f953c  ADD EAX,dword ptr [EBP + -0x14]
005f953f  MOV dword ptr [EBP + -0x10],EAX
005f9542  MOV ECX,dword ptr [EBP + -0xc]
005f9545  ADD ECX,dword ptr [EBP + -0x18]
005f9548  MOV dword ptr [EBP + -0xc],ECX
005f954b  MOV EDX,dword ptr [EBP + -0x8]
005f954e  ADD EDX,dword ptr [EBP + -0x14]
005f9551  MOV dword ptr [EBP + -0x8],EDX
005f9554  MOV EAX,dword ptr [EBP + -0x4]
005f9557  ADD EAX,dword ptr [EBP + -0x18]
005f955a  MOV dword ptr [EBP + -0x4],EAX
005f955d  MOV ECX,dword ptr [EBP + -0x1c]
005f9560  MOV dword ptr [EBP + -0x24],ECX
005f9563  MOV EDX,dword ptr [EBP + -0x20]
005f9566  MOV EAX,dword ptr [EDX + 0x1a8]
005f956c  MOV dword ptr [EBP + -0x24],EAX
005f956f  LEA ECX,[EBP + -0x10]
005f9572  PUSH ECX
005f9573  MOV EDX,dword ptr [EBP + -0x24]
005f9576  MOV EAX,dword ptr [EDX]
005f9578  MOV ECX,dword ptr [EBP + -0x24]
005f957b  MOV EDX,dword ptr [EAX + 0x14]
005f957e  CALL EDX
005f9580  MOV ESP,EBP
005f9582  POP EBP
005f9583  RET 0x4
