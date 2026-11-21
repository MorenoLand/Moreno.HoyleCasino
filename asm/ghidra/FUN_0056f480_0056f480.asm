; FUN_0056f480  0056f480
0056f480  PUSH EBP
0056f481  MOV EBP,ESP
0056f483  PUSH ECX
0056f484  MOV dword ptr [EBP + -0x4],ECX
0056f487  PUSH 0x0
0056f489  MOV EAX,dword ptr [EBP + -0x4]
0056f48c  MOV ECX,dword ptr [EAX + 0x2c]
0056f48f  MOV EDX,dword ptr [ECX + 0x184]
0056f495  MOV EAX,dword ptr [EBP + -0x4]
0056f498  MOV ECX,dword ptr [EAX + 0x2c]
0056f49b  MOV ECX,dword ptr [ECX + 0x184]
0056f4a1  MOV EDX,dword ptr [EDX]
0056f4a3  MOV EAX,dword ptr [EDX + 0xb0]
0056f4a9  CALL EAX
0056f4ab  PUSH 0x0
0056f4ad  MOV ECX,dword ptr [EBP + -0x4]
0056f4b0  MOV EDX,dword ptr [ECX + 0x2c]
0056f4b3  MOV EAX,dword ptr [EDX + 0x188]
0056f4b9  MOV ECX,dword ptr [EBP + -0x4]
0056f4bc  MOV EDX,dword ptr [ECX + 0x2c]
0056f4bf  MOV ECX,dword ptr [EDX + 0x188]
0056f4c5  MOV EAX,dword ptr [EAX]
0056f4c7  MOV EDX,dword ptr [EAX + 0xb0]
0056f4cd  CALL EDX
0056f4cf  PUSH 0x0
0056f4d1  MOV EAX,dword ptr [EBP + -0x4]
0056f4d4  MOV ECX,dword ptr [EAX + 0x2c]
0056f4d7  MOV EDX,dword ptr [ECX + 0x18c]
0056f4dd  MOV EAX,dword ptr [EBP + -0x4]
0056f4e0  MOV ECX,dword ptr [EAX + 0x2c]
0056f4e3  MOV ECX,dword ptr [ECX + 0x18c]
0056f4e9  MOV EDX,dword ptr [EDX]
0056f4eb  MOV EAX,dword ptr [EDX + 0xb0]
0056f4f1  CALL EAX
0056f4f3  PUSH 0x0
0056f4f5  MOV ECX,dword ptr [EBP + -0x4]
0056f4f8  MOV ECX,dword ptr [ECX + 0x2c]
0056f4fb  CALL 0x005f5df0
0056f500  MOV EDX,dword ptr [0x0079344c]
0056f506  MOV ECX,dword ptr [EDX + 0x4]
0056f509  CALL 0x005fc360
0056f50e  CMP EAX,0x1
0056f511  JNZ 0x0056f551
0056f513  MOV EAX,dword ptr [EBP + -0x4]
0056f516  MOV byte ptr [EAX + 0x99],0x0
0056f51d  PUSH 0x1
0056f51f  MOV ECX,dword ptr [0x0079344c]
0056f525  MOV EDX,dword ptr [ECX + 0x4]
0056f528  MOV EAX,[0x0079344c]
0056f52d  MOV ECX,dword ptr [EAX + 0x4]
0056f530  MOV EDX,dword ptr [EDX]
0056f532  MOV EAX,dword ptr [EDX + 0x4]
0056f535  CALL EAX
0056f537  PUSH 0x0
0056f539  MOV ECX,dword ptr [0x0079344c]
0056f53f  MOV EDX,dword ptr [ECX + 0x4]
0056f542  MOV EAX,[0x0079344c]
0056f547  MOV ECX,dword ptr [EAX + 0x4]
0056f54a  MOV EDX,dword ptr [EDX]
0056f54c  MOV EAX,dword ptr [EDX + 0x1c]
0056f54f  CALL EAX
0056f551  MOV ESP,EBP
0056f553  POP EBP
0056f554  RET
