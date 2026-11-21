; FUN_005aafb0  005aafb0
005aafb0  PUSH EBP
005aafb1  MOV EBP,ESP
005aafb3  SUB ESP,0x34
005aafb6  MOV dword ptr [EBP + -0x30],ECX
005aafb9  MOV dword ptr [EBP + -0x2c],0x18a8b
005aafc0  MOV dword ptr [EBP + -0x28],0x18a8c
005aafc7  MOV dword ptr [EBP + -0x24],0x18a8d
005aafce  MOV dword ptr [EBP + -0x18],0x6
005aafd5  MOV dword ptr [EBP + -0x14],0x6
005aafdc  MOV dword ptr [EBP + -0x10],0x6
005aafe3  MOV dword ptr [EBP + -0xc],0x5
005aafea  MOV dword ptr [EBP + -0x8],0x5
005aaff1  MOV dword ptr [EBP + -0x4],0x7
005aaff8  MOV EAX,[0x007935f8]
005aaffd  MOV ECX,dword ptr [EAX + 0x40]
005ab000  MOV dword ptr [EBP + -0x20],ECX
005ab003  MOV EDX,dword ptr [0x007935f8]
005ab009  MOV EAX,dword ptr [EDX + 0x3c]
005ab00c  MOV dword ptr [EBP + -0x1c],EAX
005ab00f  MOV ECX,dword ptr [EBP + -0x30]
005ab012  CALL 0x005fc360
005ab017  MOV dword ptr [EBP + -0x34],EAX
005ab01a  CMP dword ptr [EBP + -0x34],0x4
005ab01e  JA 0x005ab3da
005ab024  MOV ECX,dword ptr [EBP + -0x34]
005ab027  JMP dword ptr [ECX*0x4 + 0x5ab3fc]
005ab3da  XOR EDX,EDX
005ab3dc  JNZ 0x005ab3f5
005ab3de  PUSH 0x535
005ab3e3  PUSH 0x6cf934
005ab3e8  PUSH 0x6b2f58
005ab3ed  CALL 0x005e9f20
005ab3f2  ADD ESP,0xc
005ab3f5  MOV ESP,EBP
005ab3f7  POP EBP
005ab3f8  RET
