; FUN_0062dca0  0062dca0
0062dca0  PUSH EBP
0062dca1  MOV EBP,ESP
0062dca3  PUSH ECX
0062dca4  MOV dword ptr [EBP + -0x4],0x0
0062dcab  JMP 0x0062dcb6
0062dcad  MOV EAX,dword ptr [EBP + -0x4]
0062dcb0  ADD EAX,0x1
0062dcb3  MOV dword ptr [EBP + -0x4],EAX
0062dcb6  MOV ECX,dword ptr [EBP + 0x8]
0062dcb9  ADD ECX,dword ptr [EBP + -0x4]
0062dcbc  MOVSX EDX,byte ptr [ECX]
0062dcbf  TEST EDX,EDX
0062dcc1  JZ 0x0062dcde
0062dcc3  MOV EAX,dword ptr [EBP + -0x4]
0062dcc6  CMP EAX,dword ptr [EBP + 0xc]
0062dcc9  JLE 0x0062dcdc
0062dccb  MOV ECX,dword ptr [EBP + 0x8]
0062dcce  ADD ECX,dword ptr [EBP + -0x4]
0062dcd1  MOV EDX,dword ptr [EBP + 0x8]
0062dcd4  ADD EDX,dword ptr [EBP + -0x4]
0062dcd7  MOV AL,byte ptr [EDX]
0062dcd9  MOV byte ptr [ECX + -0x1],AL
0062dcdc  JMP 0x0062dcad
0062dcde  MOV ECX,dword ptr [EBP + -0x4]
0062dce1  CMP ECX,dword ptr [EBP + 0xc]
0062dce4  JLE 0x0062dcf0
0062dce6  MOV EDX,dword ptr [EBP + 0x8]
0062dce9  ADD EDX,dword ptr [EBP + -0x4]
0062dcec  MOV byte ptr [EDX + -0x1],0x0
0062dcf0  MOV EAX,dword ptr [EBP + 0x8]
0062dcf3  MOV ESP,EBP
0062dcf5  POP EBP
0062dcf6  RET
