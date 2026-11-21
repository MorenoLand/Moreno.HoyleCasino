; FUN_00604fa0  00604fa0
00604fa0  PUSH EBP
00604fa1  MOV EBP,ESP
00604fa3  PUSH ECX
00604fa4  MOV dword ptr [EBP + -0x4],ECX
00604fa7  MOV EAX,dword ptr [EBP + 0x8]
00604faa  PUSH EAX
00604fab  MOV ECX,dword ptr [EBP + -0x4]
00604fae  MOV EDX,dword ptr [ECX + 0x4c]
00604fb1  MOV EAX,dword ptr [EBP + -0x4]
00604fb4  MOV ECX,dword ptr [EAX + 0x4c]
00604fb7  MOV EDX,dword ptr [EDX]
00604fb9  MOV EAX,dword ptr [EDX + 0x6c]
00604fbc  CALL EAX
00604fbe  MOV ECX,dword ptr [EBP + 0x8]
00604fc1  ADD ECX,0x1
00604fc4  PUSH ECX
00604fc5  MOV EDX,dword ptr [EBP + -0x4]
00604fc8  MOV EAX,dword ptr [EDX + 0x48]
00604fcb  MOV ECX,dword ptr [EBP + -0x4]
00604fce  MOV ECX,dword ptr [ECX + 0x48]
00604fd1  MOV EDX,dword ptr [EAX]
00604fd3  MOV EAX,dword ptr [EDX + 0x6c]
00604fd6  CALL EAX
00604fd8  MOV ESP,EBP
00604fda  POP EBP
00604fdb  RET 0x4
