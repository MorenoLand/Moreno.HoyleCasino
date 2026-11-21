; FUN_0058db40  0058db40
0058db40  PUSH EBP
0058db41  MOV EBP,ESP
0058db43  PUSH ECX
0058db44  MOV dword ptr [EBP + -0x4],ECX
0058db47  MOV ECX,dword ptr [EBP + -0x4]
0058db4a  CALL 0x00584f50
0058db4f  MOV EAX,dword ptr [EBP + -0x4]
0058db52  CMP dword ptr [EAX + 0x88],0x0
0058db59  JZ 0x0058db74
0058db5b  MOV ECX,dword ptr [EBP + -0x4]
0058db5e  MOV EDX,dword ptr [ECX + 0x88]
0058db64  MOV EAX,dword ptr [EBP + -0x4]
0058db67  MOV ECX,dword ptr [EAX + 0x88]
0058db6d  MOV EDX,dword ptr [EDX]
0058db6f  MOV EAX,dword ptr [EDX + 0x74]
0058db72  CALL EAX
0058db74  MOV ECX,dword ptr [EBP + -0x4]
0058db77  MOV ECX,dword ptr [ECX + 0x60]
0058db7a  CALL 0x006026d0
0058db7f  MOVZX EDX,AL
0058db82  TEST EDX,EDX
0058db84  JNZ 0x0058db9b
0058db86  MOV EAX,dword ptr [EBP + -0x4]
0058db89  MOV ECX,dword ptr [EAX + 0x60]
0058db8c  MOV EDX,dword ptr [EBP + -0x4]
0058db8f  MOV EAX,dword ptr [EDX + 0x60]
0058db92  MOV EDX,dword ptr [ECX]
0058db94  MOV ECX,EAX
0058db96  MOV EAX,dword ptr [EDX + 0x70]
0058db99  CALL EAX
0058db9b  MOV ECX,dword ptr [EBP + -0x4]
0058db9e  MOV ECX,dword ptr [ECX + 0x5c]
0058dba1  CALL 0x006026d0
0058dba6  MOVZX EDX,AL
0058dba9  TEST EDX,EDX
0058dbab  JNZ 0x0058dbc2
0058dbad  MOV EAX,dword ptr [EBP + -0x4]
0058dbb0  MOV ECX,dword ptr [EAX + 0x5c]
0058dbb3  MOV EDX,dword ptr [EBP + -0x4]
0058dbb6  MOV EAX,dword ptr [EDX + 0x5c]
0058dbb9  MOV EDX,dword ptr [ECX]
0058dbbb  MOV ECX,EAX
0058dbbd  MOV EAX,dword ptr [EDX + 0x70]
0058dbc0  CALL EAX
0058dbc2  MOV ESP,EBP
0058dbc4  POP EBP
0058dbc5  RET
