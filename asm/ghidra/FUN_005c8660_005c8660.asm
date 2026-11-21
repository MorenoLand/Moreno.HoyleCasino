; FUN_005c8660  005c8660
005c8660  PUSH EBP
005c8661  MOV EBP,ESP
005c8663  SUB ESP,0xc
005c8666  MOV dword ptr [EBP + -0xc],ECX
005c8669  MOV EAX,dword ptr [EBP + 0x8]
005c866c  PUSH EAX
005c866d  LEA ECX,[EBP + -0x8]
005c8670  PUSH ECX
005c8671  MOV EDX,dword ptr [EBP + -0xc]
005c8674  MOV EAX,dword ptr [EDX + 0x80]
005c867a  MOV ECX,dword ptr [EAX + 0x4]
005c867d  CALL 0x005d0db0
005c8682  MOV ECX,dword ptr [EBP + -0xc]
005c8685  MOV EDX,dword ptr [ECX + 0x80]
005c868b  MOV EAX,dword ptr [EBP + -0xc]
005c868e  MOV ECX,dword ptr [EAX + 0x80]
005c8694  MOV EDX,dword ptr [EDX]
005c8696  MOV EAX,dword ptr [EDX + 0x20]
005c8699  CALL EAX
005c869b  MOV ECX,dword ptr [EBP + -0xc]
005c869e  MOV EDX,dword ptr [ECX + 0x80]
005c86a4  MOV EAX,dword ptr [EBP + -0xc]
005c86a7  MOV ECX,dword ptr [EAX + 0x80]
005c86ad  MOV EDX,dword ptr [EDX]
005c86af  MOV EAX,dword ptr [EDX + 0x10]
005c86b2  CALL EAX
005c86b4  MOV ESP,EBP
005c86b6  POP EBP
005c86b7  RET 0x4
