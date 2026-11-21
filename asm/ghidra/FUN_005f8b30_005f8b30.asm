; FUN_005f8b30  005f8b30
005f8b30  PUSH EBP
005f8b31  MOV EBP,ESP
005f8b33  SUB ESP,0x14
005f8b36  MOV dword ptr [EBP + -0x14],ECX
005f8b39  MOV EAX,dword ptr [EBP + -0x14]
005f8b3c  MOV byte ptr [EAX + 0x178],0x0
005f8b43  PUSH 0x10
005f8b45  PUSH 0x0
005f8b47  MOV ECX,dword ptr [EBP + -0x14]
005f8b4a  ADD ECX,0x180
005f8b50  PUSH ECX
005f8b51  CALL 0x00686fa2
005f8b56  ADD ESP,0xc
005f8b59  MOV EDX,dword ptr [EBP + -0x14]
005f8b5c  CMP dword ptr [EDX + 0x17c],0x0
005f8b63  JZ 0x005f8b96
005f8b65  LEA EAX,[EBP + -0x10]
005f8b68  PUSH EAX
005f8b69  MOV ECX,dword ptr [EBP + -0x14]
005f8b6c  MOV ECX,dword ptr [ECX + 0x17c]
005f8b72  CALL 0x005ebac0
005f8b77  MOV EDX,dword ptr [EBP + -0x14]
005f8b7a  ADD EDX,0x180
005f8b80  MOV ECX,dword ptr [EAX]
005f8b82  MOV dword ptr [EDX],ECX
005f8b84  MOV ECX,dword ptr [EAX + 0x4]
005f8b87  MOV dword ptr [EDX + 0x4],ECX
005f8b8a  MOV ECX,dword ptr [EAX + 0x8]
005f8b8d  MOV dword ptr [EDX + 0x8],ECX
005f8b90  MOV EAX,dword ptr [EAX + 0xc]
005f8b93  MOV dword ptr [EDX + 0xc],EAX
005f8b96  MOV ESP,EBP
005f8b98  POP EBP
005f8b99  RET
