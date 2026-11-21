; FUN_0058dfb0  0058dfb0
0058dfb0  PUSH EBP
0058dfb1  MOV EBP,ESP
0058dfb3  PUSH ECX
0058dfb4  MOV dword ptr [EBP + -0x4],ECX
0058dfb7  MOV EAX,dword ptr [EBP + -0x4]
0058dfba  MOV ECX,dword ptr [EBP + 0x8]
0058dfbd  MOV dword ptr [EAX + 0x74],ECX
0058dfc0  MOV EDX,dword ptr [EBP + -0x4]
0058dfc3  MOV EAX,dword ptr [EDX + 0x74]
0058dfc6  PUSH EAX
0058dfc7  MOV ECX,dword ptr [EBP + -0x4]
0058dfca  MOV EDX,dword ptr [ECX]
0058dfcc  MOV ECX,dword ptr [EBP + -0x4]
0058dfcf  MOV EAX,dword ptr [EDX + 0xbc]
0058dfd5  CALL EAX
0058dfd7  MOV ESP,EBP
0058dfd9  POP EBP
0058dfda  RET 0x4
