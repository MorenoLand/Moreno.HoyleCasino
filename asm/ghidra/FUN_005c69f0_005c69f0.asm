; FUN_005c69f0  005c69f0
005c69f0  PUSH EBP
005c69f1  MOV EBP,ESP
005c69f3  SUB ESP,0x34
005c69f6  XOR EAX,EAX
005c69f8  MOV byte ptr [EBP + -0x1],AL
005c69fb  MOV CL,byte ptr [EBP + -0x3]
005c69fe  MOV byte ptr [EBP + -0x2],CL
005c6a01  MOV EDX,dword ptr [EBP + 0xc]
005c6a04  MOV dword ptr [EBP + -0x8],EDX
005c6a07  MOV EAX,dword ptr [EBP + 0x8]
005c6a0a  MOV dword ptr [EBP + -0x10],EAX
005c6a0d  MOV CL,byte ptr [EBP + -0x1]
005c6a10  MOV byte ptr [EBP + -0x31],CL
005c6a13  MOV EDX,dword ptr [EBP + 0x10]
005c6a16  MOV dword ptr [EBP + -0x30],EDX
005c6a19  MOV EAX,dword ptr [EBP + -0x30]
005c6a1c  MOV dword ptr [EBP + -0x2c],EAX
005c6a1f  MOV ECX,dword ptr [EBP + -0x8]
005c6a22  MOV dword ptr [EBP + -0x28],ECX
005c6a25  MOV EDX,dword ptr [EBP + -0x10]
005c6a28  MOV dword ptr [EBP + -0x24],EDX
005c6a2b  XOR EAX,EAX
005c6a2d  MOV byte ptr [EBP + -0x11],AL
005c6a30  MOV CL,byte ptr [EBP + -0x13]
005c6a33  MOV byte ptr [EBP + -0x12],CL
005c6a36  MOV EDX,dword ptr [EBP + -0x28]
005c6a39  MOV dword ptr [EBP + -0x18],EDX
005c6a3c  MOV EAX,dword ptr [EBP + -0x24]
005c6a3f  MOV dword ptr [EBP + -0x20],EAX
005c6a42  MOV CL,byte ptr [EBP + -0x11]
005c6a45  PUSH ECX
005c6a46  MOV DL,byte ptr [EBP + -0x12]
005c6a49  PUSH EDX
005c6a4a  MOV EAX,dword ptr [EBP + 0x14]
005c6a4d  PUSH EAX
005c6a4e  MOV ECX,dword ptr [EBP + -0x2c]
005c6a51  PUSH ECX
005c6a52  MOV EDX,dword ptr [EBP + -0x18]
005c6a55  PUSH EDX
005c6a56  MOV EAX,dword ptr [EBP + -0x20]
005c6a59  PUSH EAX
005c6a5a  CALL 0x005c6c50
005c6a5f  ADD ESP,0x18
005c6a62  MOV ESP,EBP
005c6a64  POP EBP
005c6a65  RET
