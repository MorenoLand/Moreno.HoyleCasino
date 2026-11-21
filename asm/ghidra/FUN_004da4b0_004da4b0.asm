; FUN_004da4b0  004da4b0
004da4b0  PUSH EBP
004da4b1  MOV EBP,ESP
004da4b3  PUSH ECX
004da4b4  MOV dword ptr [EBP + -0x4],ECX
004da4b7  MOV EAX,dword ptr [EBP + -0x4]
004da4ba  MOV ECX,dword ptr [EAX + 0x38]
004da4bd  MOV EDX,dword ptr [EBP + -0x4]
004da4c0  MOV EAX,dword ptr [EDX + 0x38]
004da4c3  MOV EDX,dword ptr [ECX]
004da4c5  MOV ECX,EAX
004da4c7  MOV EAX,dword ptr [EDX + 0x70]
004da4ca  CALL EAX
004da4cc  MOV ESP,EBP
004da4ce  POP EBP
004da4cf  RET
