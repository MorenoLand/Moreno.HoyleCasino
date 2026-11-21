; FUN_00652b60  00652b60
00652b60  PUSH EBP
00652b61  MOV EBP,ESP
00652b63  SUB ESP,0x14
00652b66  PUSH ESI
00652b67  MOV dword ptr [EBP + -0x14],ECX
00652b6a  MOV dword ptr [EBP + -0x10],0xffffffff
00652b71  MOV dword ptr [EBP + -0x4],0xffffffff
00652b78  MOV dword ptr [EBP + -0xc],0x0
00652b7f  MOV EAX,dword ptr [EBP + 0xc]
00652b82  MOV dword ptr [EAX],0x0
00652b88  MOV ECX,dword ptr [EBP + 0x10]
00652b8b  MOV dword ptr [ECX],0x0
00652b91  MOV dword ptr [EBP + -0x8],0x0
00652b98  JMP 0x00652ba3
00652b9a  MOV EDX,dword ptr [EBP + -0x8]
00652b9d  ADD EDX,0x1
00652ba0  MOV dword ptr [EBP + -0x8],EDX
00652ba3  MOV EAX,dword ptr [EBP + -0x8]
00652ba6  IMUL EAX,EAX,0x14
00652ba9  MOV ECX,dword ptr [EBP + -0x14]
00652bac  MOV EDX,dword ptr [ECX + 0x80]
00652bb2  CMP dword ptr [EAX + EDX*0x1],0x0
00652bb6  JZ 0x00652c4e
00652bbc  MOV EAX,dword ptr [EBP + -0x8]
00652bbf  IMUL EAX,EAX,0x14
00652bc2  MOV ECX,dword ptr [EBP + -0x14]
00652bc5  MOV EDX,dword ptr [ECX + 0x80]
00652bcb  MOV EAX,dword ptr [EAX + EDX*0x1]
00652bce  CMP EAX,dword ptr [EBP + -0x10]
00652bd1  JZ 0x00652bf8
00652bd3  MOV ECX,dword ptr [EBP + -0x4]
00652bd6  ADD ECX,0x1
00652bd9  MOV dword ptr [EBP + -0x4],ECX
00652bdc  MOV EDX,dword ptr [EBP + -0x8]
00652bdf  IMUL EDX,EDX,0x14
00652be2  MOV EAX,dword ptr [EBP + -0x14]
00652be5  MOV ECX,dword ptr [EAX + 0x80]
00652beb  MOV EDX,dword ptr [EDX + ECX*0x1]
00652bee  MOV dword ptr [EBP + -0x10],EDX
00652bf1  MOV dword ptr [EBP + -0xc],0x0
00652bf8  MOV EAX,dword ptr [EBP + -0x8]
00652bfb  IMUL EAX,EAX,0x14
00652bfe  MOV ECX,dword ptr [EBP + -0x14]
00652c01  MOV EDX,dword ptr [ECX + 0x80]
00652c07  MOV ECX,dword ptr [EBP + -0x14]
00652c0a  MOV ECX,dword ptr [ECX + 0x8]
00652c0d  IMUL ECX,ECX,0x14
00652c10  MOV ESI,dword ptr [EBP + -0x14]
00652c13  MOV ESI,dword ptr [ESI + 0x80]
00652c19  MOV EDX,dword ptr [EAX + EDX*0x1]
00652c1c  CMP EDX,dword ptr [ECX + ESI*0x1]
00652c1f  JZ 0x00652c26
00652c21  JMP 0x00652b9a
00652c26  MOV EAX,dword ptr [EBP + -0x8]
00652c29  CMP EAX,dword ptr [EBP + 0x8]
00652c2c  JNZ 0x00652c40
00652c2e  MOV ECX,dword ptr [EBP + 0x10]
00652c31  MOV EDX,dword ptr [EBP + -0xc]
00652c34  MOV dword ptr [ECX],EDX
00652c36  MOV EAX,dword ptr [EBP + 0xc]
00652c39  MOV ECX,dword ptr [EBP + -0x4]
00652c3c  MOV dword ptr [EAX],ECX
00652c3e  JMP 0x00652c69
00652c40  MOV EDX,dword ptr [EBP + -0xc]
00652c43  ADD EDX,0x1
00652c46  MOV dword ptr [EBP + -0xc],EDX
00652c49  JMP 0x00652b9a
00652c4e  XOR EAX,EAX
00652c50  JNZ 0x00652c69
00652c52  PUSH 0x206
00652c57  PUSH 0x6dd238
00652c5c  PUSH 0x6b2f58
00652c61  CALL 0x005e9f20
00652c66  ADD ESP,0xc
00652c69  POP ESI
00652c6a  MOV ESP,EBP
00652c6c  POP EBP
00652c6d  RET 0xc
