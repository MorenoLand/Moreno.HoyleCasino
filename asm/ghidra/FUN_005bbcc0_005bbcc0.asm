; FUN_005bbcc0  005bbcc0
005bbcc0  PUSH EBP
005bbcc1  MOV EBP,ESP
005bbcc3  SUB ESP,0x68
005bbcc6  MOV dword ptr [EBP + -0x68],ECX
005bbcc9  LEA EAX,[EBP + -0x9]
005bbccc  MOV dword ptr [EBP + -0x8],EAX
005bbccf  PUSH 0x0
005bbcd1  MOV ECX,dword ptr [EBP + -0x68]
005bbcd4  CALL 0x005bbd80
005bbcd9  MOV EAX,dword ptr [EBP + -0x68]
005bbcdc  MOV ESP,EBP
005bbcde  POP EBP
005bbcdf  RET
