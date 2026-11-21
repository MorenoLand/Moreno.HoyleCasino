; FUN_0054cec0  0054cec0
0054cec0  PUSH EBP
0054cec1  MOV EBP,ESP
0054cec3  SUB ESP,0xc
0054cec6  MOV dword ptr [EBP + -0xc],ECX
0054cec9  MOV dword ptr [EBP + -0x8],0x0
0054ced0  MOV dword ptr [EBP + -0x4],0x0
0054ced7  JMP 0x0054cee2
0054ced9  MOV EAX,dword ptr [EBP + -0x4]
0054cedc  ADD EAX,0x1
0054cedf  MOV dword ptr [EBP + -0x4],EAX
0054cee2  MOV ECX,dword ptr [EBP + -0xc]
0054cee5  CALL 0x0054c540
0054ceea  CMP dword ptr [EBP + -0x4],EAX
0054ceed  JGE 0x0054cf13
0054ceef  MOV ECX,dword ptr [EBP + -0x4]
0054cef2  MOV EDX,dword ptr [EBP + -0xc]
0054cef5  MOV AX,word ptr [EDX + ECX*0x2 + 0x4]
0054cefa  PUSH EAX
0054cefb  MOV ECX,dword ptr [EBP + -0xc]
0054cefe  CALL 0x0054c590
0054cf03  CMP EAX,0x14
0054cf06  JNZ 0x0054cf11
0054cf08  MOV ECX,dword ptr [EBP + -0x8]
0054cf0b  ADD ECX,0x1
0054cf0e  MOV dword ptr [EBP + -0x8],ECX
0054cf11  JMP 0x0054ced9
0054cf13  MOV EAX,dword ptr [EBP + -0x8]
0054cf16  MOV ESP,EBP
0054cf18  POP EBP
0054cf19  RET
