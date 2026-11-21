; FUN_005f8420  005f8420
005f8420  PUSH EBP
005f8421  MOV EBP,ESP
005f8423  SUB ESP,0xc
005f8426  MOV dword ptr [EBP + -0xc],ECX
005f8429  MOV ECX,dword ptr [EBP + -0xc]
005f842c  CALL 0x005f88f0
005f8431  MOVZX EAX,AL
005f8434  TEST EAX,EAX
005f8436  JNZ 0x005f8440
005f8438  MOV ECX,dword ptr [EBP + -0xc]
005f843b  CALL 0x005f9a80
005f8440  MOV ECX,dword ptr [EBP + -0xc]
005f8443  MOV EDX,dword ptr [EBP + -0xc]
005f8446  MOV EAX,dword ptr [ECX + 0x110]
005f844c  SUB EAX,dword ptr [EDX + 0x108]
005f8452  MOV dword ptr [EBP + -0x8],EAX
005f8455  MOV ECX,dword ptr [EBP + -0xc]
005f8458  MOV EDX,dword ptr [EBP + -0xc]
005f845b  MOV EAX,dword ptr [ECX + 0x10c]
005f8461  SUB EAX,dword ptr [EDX + 0x104]
005f8467  MOV dword ptr [EBP + -0x4],EAX
005f846a  MOV ECX,dword ptr [EBP + -0xc]
005f846d  MOV EDX,dword ptr [EBP + 0x8]
005f8470  MOV dword ptr [ECX + 0x108],EDX
005f8476  MOV EAX,dword ptr [EBP + -0xc]
005f8479  MOV ECX,dword ptr [EBP + 0xc]
005f847c  MOV dword ptr [EAX + 0x104],ECX
005f8482  MOV EDX,dword ptr [EBP + -0xc]
005f8485  MOV EAX,dword ptr [EDX + 0x108]
005f848b  ADD EAX,dword ptr [EBP + -0x8]
005f848e  MOV ECX,dword ptr [EBP + -0xc]
005f8491  MOV dword ptr [ECX + 0x110],EAX
005f8497  MOV EDX,dword ptr [EBP + -0xc]
005f849a  MOV EAX,dword ptr [EDX + 0x104]
005f84a0  ADD EAX,dword ptr [EBP + -0x4]
005f84a3  MOV ECX,dword ptr [EBP + -0xc]
005f84a6  MOV dword ptr [ECX + 0x10c],EAX
005f84ac  MOV ECX,dword ptr [EBP + -0xc]
005f84af  CALL 0x005f88f0
005f84b4  MOVZX EDX,AL
005f84b7  TEST EDX,EDX
005f84b9  JNZ 0x005f84c3
005f84bb  MOV ECX,dword ptr [EBP + -0xc]
005f84be  CALL 0x005f9a80
005f84c3  MOV ESP,EBP
005f84c5  POP EBP
005f84c6  RET 0x8
