; FUN_00463ea0  00463ea0
00463ea0  PUSH EBP
00463ea1  MOV EBP,ESP
00463ea3  PUSH ECX
00463ea4  MOV dword ptr [EBP + -0x4],ECX
00463ea7  MOV EAX,dword ptr [EBP + 0x8]
00463eaa  PUSH EAX
00463eab  MOV ECX,dword ptr [EBP + -0x4]
00463eae  CALL 0x00606a60
00463eb3  MOV ECX,dword ptr [EBP + -0x4]
00463eb6  MOV ECX,dword ptr [ECX + 0x4]
00463eb9  CALL 0x005f53c0
00463ebe  MOV EDX,dword ptr [EBP + -0x4]
00463ec1  MOV dword ptr [EDX + 0x2c],EAX
00463ec4  PUSH 0x3ed
00463ec9  MOV EAX,dword ptr [EBP + -0x4]
00463ecc  MOV ECX,dword ptr [EAX + 0x4]
00463ecf  MOV EDX,dword ptr [EBP + -0x4]
00463ed2  MOV EAX,dword ptr [EDX + 0x4]
00463ed5  MOV EDX,dword ptr [ECX]
00463ed7  MOV ECX,EAX
00463ed9  MOV EAX,dword ptr [EDX + 0x6c]
00463edc  CALL EAX
00463ede  MOV ESP,EBP
00463ee0  POP EBP
00463ee1  RET 0x4
