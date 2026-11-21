; FUN_005eed70  005eed70
005eed70  PUSH EBP
005eed71  MOV EBP,ESP
005eed73  MOV EAX,dword ptr [EBP + 0xc]
005eed76  PUSH EAX
005eed77  MOV ECX,dword ptr [EBP + 0x8]
005eed7a  PUSH ECX
005eed7b  CALL 0x00686d8e
005eed80  ADD ESP,0x8
005eed83  CMP dword ptr [EBP + 0x10],-0x1
005eed87  JZ 0x005eedad
005eed89  MOV EDX,dword ptr [EBP + 0x10]
005eed8c  PUSH EDX
005eed8d  PUSH 0x1b
005eed8f  PUSH 0x6d654c
005eed94  MOV EAX,dword ptr [EBP + 0x8]
005eed97  PUSH EAX
005eed98  CALL 0x00686ecc
005eed9d  ADD ESP,0x4
005eeda0  ADD EAX,dword ptr [EBP + 0x8]
005eeda3  PUSH EAX
005eeda4  CALL dword ptr [0x006b2220]
005eedaa  ADD ESP,0x10
005eedad  MOV EAX,dword ptr [EBP + 0x8]
005eedb0  POP EBP
005eedb1  RET
