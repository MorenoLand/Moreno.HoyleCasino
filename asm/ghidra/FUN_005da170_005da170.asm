; FUN_005da170  005da170
005da170  PUSH EBP
005da171  MOV EBP,ESP
005da173  PUSH ECX
005da174  MOV dword ptr [EBP + -0x4],ECX
005da177  MOV EAX,dword ptr [EBP + 0x8]
005da17a  MOV EDX,dword ptr [EAX]
005da17c  MOV ECX,dword ptr [EBP + 0x8]
005da17f  MOV EAX,dword ptr [EDX + 0x54]
005da182  CALL EAX
005da184  ADD EAX,0x13
005da187  PUSH EAX
005da188  MOV ECX,dword ptr [EBP + 0x8]
005da18b  MOV EDX,dword ptr [ECX]
005da18d  MOV ECX,dword ptr [EBP + 0x8]
005da190  MOV EAX,dword ptr [EDX + 0x4c]
005da193  CALL EAX
005da195  ADD EAX,0x14
005da198  PUSH EAX
005da199  MOV ECX,dword ptr [EBP + 0x8]
005da19c  MOV EDX,dword ptr [ECX + 0x18c]
005da1a2  MOV EAX,dword ptr [EBP + 0x8]
005da1a5  MOV ECX,dword ptr [EAX + 0x18c]
005da1ab  MOV EDX,dword ptr [EDX]
005da1ad  MOV EAX,dword ptr [EDX + 0x44]
005da1b0  CALL EAX
005da1b2  MOV ESP,EBP
005da1b4  POP EBP
005da1b5  RET 0x8
