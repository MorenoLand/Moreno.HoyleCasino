; FUN_004c6aa0  004c6aa0
004c6aa0  PUSH EBP
004c6aa1  MOV EBP,ESP
004c6aa3  SUB ESP,0xc
004c6aa6  MOV dword ptr [EBP + -0xc],ECX
004c6aa9  MOV EAX,dword ptr [EBP + 0x8]
004c6aac  MOV dword ptr [EBP + -0x8],EAX
004c6aaf  MOV ECX,dword ptr [EBP + -0xc]
004c6ab2  MOV EDX,dword ptr [ECX + 0x4]
004c6ab5  PUSH EDX
004c6ab6  CALL 0x005dcb00
004c6abb  ADD ESP,0x4
004c6abe  MOV ECX,EAX
004c6ac0  CALL 0x005d5a70
004c6ac5  MOV dword ptr [EBP + -0x4],EAX
004c6ac8  MOV EAX,dword ptr [EBP + -0x4]
004c6acb  PUSH EAX
004c6acc  MOV ECX,dword ptr [EBP + -0x8]
004c6acf  PUSH ECX
004c6ad0  MOV EDX,dword ptr [EBP + -0xc]
004c6ad3  MOV EAX,dword ptr [EDX + 0x4]
004c6ad6  PUSH EAX
004c6ad7  CALL 0x005dcb00
004c6adc  ADD ESP,0x4
004c6adf  MOV ECX,EAX
004c6ae1  CALL 0x005d5af0
004c6ae6  MOV ESP,EBP
004c6ae8  POP EBP
004c6ae9  RET 0x4
