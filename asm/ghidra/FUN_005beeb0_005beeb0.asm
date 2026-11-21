; FUN_005beeb0  005beeb0
005beeb0  PUSH EBP
005beeb1  MOV EBP,ESP
005beeb3  PUSH ECX
005beeb4  MOV dword ptr [EBP + -0x4],ECX
005beeb7  MOV EAX,dword ptr [EBP + -0x4]
005beeba  CMP dword ptr [EAX],0x0
005beebd  JNZ 0x005beec5
005beebf  CALL dword ptr [0x006b2274]
005beec5  MOV ECX,dword ptr [EBP + -0x4]
005beec8  MOV EDX,dword ptr [ECX + 0x4]
005beecb  MOV EAX,dword ptr [EBP + 0x8]
005beece  LEA ECX,[EDX + EAX*0x4]
005beed1  MOV EDX,dword ptr [EBP + -0x4]
005beed4  MOV EAX,dword ptr [EDX]
005beed6  CMP ECX,dword ptr [EAX + 0x8]
005beed9  JA 0x005beef1
005beedb  MOV ECX,dword ptr [EBP + -0x4]
005beede  MOV EDX,dword ptr [ECX + 0x4]
005beee1  MOV EAX,dword ptr [EBP + 0x8]
005beee4  LEA ECX,[EDX + EAX*0x4]
005beee7  MOV EDX,dword ptr [EBP + -0x4]
005beeea  MOV EAX,dword ptr [EDX]
005beeec  CMP ECX,dword ptr [EAX + 0x4]
005beeef  JNC 0x005beef7
005beef1  CALL dword ptr [0x006b2274]
005beef7  MOV ECX,dword ptr [EBP + -0x4]
005beefa  MOV EDX,dword ptr [ECX + 0x4]
005beefd  MOV EAX,dword ptr [EBP + 0x8]
005bef00  LEA ECX,[EDX + EAX*0x4]
005bef03  MOV EDX,dword ptr [EBP + -0x4]
005bef06  MOV dword ptr [EDX + 0x4],ECX
005bef09  MOV EAX,dword ptr [EBP + -0x4]
005bef0c  MOV ESP,EBP
005bef0e  POP EBP
005bef0f  RET 0x4
