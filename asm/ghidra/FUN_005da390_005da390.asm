; FUN_005da390  005da390
005da390  PUSH EBP
005da391  MOV EBP,ESP
005da393  PUSH ECX
005da394  MOV dword ptr [EBP + -0x4],ECX
005da397  PUSH -0x1
005da399  PUSH 0x1
005da39b  MOV EAX,dword ptr [EBP + -0x4]
005da39e  MOV ECX,dword ptr [EAX + 0x4]
005da3a1  MOV EDX,dword ptr [EBP + -0x4]
005da3a4  MOV EAX,dword ptr [EDX + 0x4]
005da3a7  MOV EDX,dword ptr [ECX]
005da3a9  MOV ECX,EAX
005da3ab  MOV EAX,dword ptr [EDX + 0x8]
005da3ae  CALL EAX
005da3b0  MOV ECX,dword ptr [EBP + 0x8]
005da3b3  PUSH ECX
005da3b4  MOV EDX,dword ptr [EBP + -0x4]
005da3b7  MOV ECX,dword ptr [EDX + 0x4]
005da3ba  CALL 0x005fc420
005da3bf  MOV ESP,EBP
005da3c1  POP EBP
005da3c2  RET 0x4
