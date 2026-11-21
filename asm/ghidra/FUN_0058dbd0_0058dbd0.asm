; FUN_0058dbd0  0058dbd0
0058dbd0  PUSH EBP
0058dbd1  MOV EBP,ESP
0058dbd3  PUSH ECX
0058dbd4  MOV dword ptr [EBP + -0x4],ECX
0058dbd7  MOV EAX,dword ptr [EBP + 0x8]
0058dbda  PUSH EAX
0058dbdb  MOV ECX,dword ptr [EBP + -0x4]
0058dbde  MOV EDX,dword ptr [ECX + 0x5c]
0058dbe1  MOV EAX,dword ptr [EBP + -0x4]
0058dbe4  MOV ECX,dword ptr [EAX + 0x5c]
0058dbe7  MOV EDX,dword ptr [EDX]
0058dbe9  MOV EAX,dword ptr [EDX + 0x6c]
0058dbec  CALL EAX
0058dbee  MOV ECX,dword ptr [EBP + 0x8]
0058dbf1  PUSH ECX
0058dbf2  MOV EDX,dword ptr [EBP + -0x4]
0058dbf5  MOV EAX,dword ptr [EDX + 0x60]
0058dbf8  MOV ECX,dword ptr [EBP + -0x4]
0058dbfb  MOV ECX,dword ptr [ECX + 0x60]
0058dbfe  MOV EDX,dword ptr [EAX]
0058dc00  MOV EAX,dword ptr [EDX + 0x6c]
0058dc03  CALL EAX
0058dc05  MOV ESP,EBP
0058dc07  POP EBP
0058dc08  RET 0x4
