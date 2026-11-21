; FUN_005d0cd0  005d0cd0
005d0cd0  PUSH EBP
005d0cd1  MOV EBP,ESP
005d0cd3  SUB ESP,0x1c
005d0cd6  MOV dword ptr [EBP + -0x1c],ECX
005d0cd9  MOV EAX,dword ptr [EBP + -0x1c]
005d0cdc  MOV ECX,dword ptr [EAX + 0x8]
005d0cdf  MOV dword ptr [EBP + -0x14],ECX
005d0ce2  MOV EDX,dword ptr [EBP + -0x1c]
005d0ce5  MOV EAX,dword ptr [EDX + 0x4]
005d0ce8  MOV dword ptr [EBP + -0x18],EAX
005d0ceb  MOV ECX,dword ptr [EBP + -0x14]
005d0cee  PUSH ECX
005d0cef  LEA EDX,[EBP + -0x10]
005d0cf2  PUSH EDX
005d0cf3  MOV ECX,dword ptr [EBP + -0x1c]
005d0cf6  CALL 0x005d0c30
005d0cfb  MOV ECX,dword ptr [EAX + 0x4]
005d0cfe  PUSH ECX
005d0cff  MOV EDX,dword ptr [EAX]
005d0d01  PUSH EDX
005d0d02  MOV EAX,dword ptr [EBP + 0x8]
005d0d05  PUSH EAX
005d0d06  MOV ECX,dword ptr [EBP + -0x18]
005d0d09  PUSH ECX
005d0d0a  LEA EDX,[EBP + -0x8]
005d0d0d  PUSH EDX
005d0d0e  MOV ECX,dword ptr [EBP + -0x1c]
005d0d11  CALL 0x005d0c30
005d0d16  MOV ECX,EAX
005d0d18  CALL 0x0064c5c0
005d0d1d  MOV EAX,dword ptr [EBP + 0x8]
005d0d20  MOV ESP,EBP
005d0d22  POP EBP
005d0d23  RET 0x4
