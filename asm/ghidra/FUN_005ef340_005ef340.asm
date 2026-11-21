; FUN_005ef340  005ef340
005ef340  PUSH EBP
005ef341  MOV EBP,ESP
005ef343  PUSH ECX
005ef344  MOV dword ptr [EBP + -0x4],ECX
005ef347  MOV EAX,dword ptr [EBP + -0x4]
005ef34a  MOV ECX,dword ptr [EBP + 0x8]
005ef34d  MOV dword ptr [EAX + 0x74],ECX
005ef350  MOV EDX,dword ptr [EBP + -0x4]
005ef353  MOV EAX,dword ptr [EBP + 0xc]
005ef356  MOV dword ptr [EDX + 0x78],EAX
005ef359  MOV ECX,dword ptr [EBP + -0x4]
005ef35c  MOV EDX,dword ptr [ECX]
005ef35e  MOV ECX,dword ptr [EBP + -0x4]
005ef361  MOV EAX,dword ptr [EDX + 0xac]
005ef367  CALL EAX
005ef369  MOV ESP,EBP
005ef36b  POP EBP
005ef36c  RET 0x8
