; FUN_0064c280  0064c280
0064c280  PUSH EBP
0064c281  MOV EBP,ESP
0064c283  PUSH ECX
0064c284  MOV dword ptr [EBP + -0x4],ECX
0064c287  MOV EAX,dword ptr [EBP + 0x8]
0064c28a  MOV byte ptr [EAX + 0x4],0x1
0064c28e  MOV ECX,dword ptr [EBP + 0x8]
0064c291  MOV byte ptr [ECX + 0x14],0x72
0064c295  MOV EDX,dword ptr [EBP + -0x4]
0064c298  MOV AL,byte ptr [EDX + 0x1e0]
0064c29e  PUSH EAX
0064c29f  MOV ECX,dword ptr [EBP + -0x4]
0064c2a2  MOV ECX,dword ptr [ECX + 0x1dc]
0064c2a8  CALL 0x00648640
0064c2ad  MOV EDX,dword ptr [EBP + 0x8]
0064c2b0  PUSH EDX
0064c2b1  MOV ECX,dword ptr [EBP + -0x4]
0064c2b4  CALL 0x005f4ed0
0064c2b9  MOV EAX,dword ptr [EBP + -0x4]
0064c2bc  MOV byte ptr [EAX + 0x8],0x0
0064c2c0  MOV ECX,dword ptr [EBP + -0x4]
0064c2c3  MOV byte ptr [ECX + 0x9],0x0
0064c2c7  MOV ESP,EBP
0064c2c9  POP EBP
0064c2ca  RET 0x4
