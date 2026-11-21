; FUN_004da3a0  004da3a0
004da3a0  PUSH EBP
004da3a1  MOV EBP,ESP
004da3a3  PUSH ECX
004da3a4  MOV dword ptr [EBP + -0x4],ECX
004da3a7  MOV EAX,dword ptr [EBP + -0x4]
004da3aa  MOV ECX,dword ptr [EAX + 0x30]
004da3ad  MOV EDX,dword ptr [EBP + -0x4]
004da3b0  MOV EAX,dword ptr [EDX + 0x30]
004da3b3  MOV EDX,dword ptr [ECX]
004da3b5  MOV ECX,EAX
004da3b7  MOV EAX,dword ptr [EDX + 0x70]
004da3ba  CALL EAX
004da3bc  MOV ESP,EBP
004da3be  POP EBP
004da3bf  RET
