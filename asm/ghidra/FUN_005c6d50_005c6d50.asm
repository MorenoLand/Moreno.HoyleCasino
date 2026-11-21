; FUN_005c6d50  005c6d50
005c6d50  PUSH EBP
005c6d51  MOV EBP,ESP
005c6d53  PUSH -0x1
005c6d55  PUSH 0x6a883b
005c6d5a  MOV EAX,FS:[0x0]
005c6d60  PUSH EAX
005c6d61  SUB ESP,0x14
005c6d64  MOV EAX,[0x00781870]
005c6d69  XOR EAX,EBP
005c6d6b  PUSH EAX
005c6d6c  LEA EAX,[EBP + -0xc]
005c6d6f  MOV FS:[0x0],EAX
005c6d75  MOV dword ptr [EBP + -0x10],0x0
005c6d7c  JMP 0x005c6d87
005c6d7e  MOV EAX,dword ptr [EBP + -0x10]
005c6d81  ADD EAX,0x1
005c6d84  MOV dword ptr [EBP + -0x10],EAX
005c6d87  MOV ECX,dword ptr [EBP + -0x10]
005c6d8a  IMUL ECX,ECX,0xfc
005c6d90  CMP dword ptr [ECX + 0x75a1a0],0x0
005c6d97  JZ 0x005c6e0c
005c6d99  MOV EDX,dword ptr [EBP + -0x10]
005c6d9c  IMUL EDX,EDX,0xfc
005c6da2  MOV EAX,dword ptr [EDX + 0x75a1a0]
005c6da8  CMP EAX,dword ptr [EBP + 0x8]
005c6dab  JNZ 0x005c6e07
005c6dad  PUSH 0x74
005c6daf  CALL 0x00686d82
005c6db4  ADD ESP,0x4
005c6db7  MOV dword ptr [EBP + -0x1c],EAX
005c6dba  MOV dword ptr [EBP + -0x4],0x0
005c6dc1  CMP dword ptr [EBP + -0x1c],0x0
005c6dc5  JZ 0x005c6dd4
005c6dc7  MOV ECX,dword ptr [EBP + -0x1c]
005c6dca  CALL 0x005c6e20
005c6dcf  MOV dword ptr [EBP + -0x20],EAX
005c6dd2  JMP 0x005c6ddb
005c6dd4  MOV dword ptr [EBP + -0x20],0x0
005c6ddb  MOV ECX,dword ptr [EBP + -0x20]
005c6dde  MOV dword ptr [EBP + -0x18],ECX
005c6de1  MOV dword ptr [EBP + -0x4],0xffffffff
005c6de8  MOV EDX,dword ptr [EBP + -0x18]
005c6deb  MOV dword ptr [EBP + -0x14],EDX
005c6dee  MOV EAX,dword ptr [EBP + -0x10]
005c6df1  IMUL EAX,EAX,0xfc
005c6df7  ADD EAX,0x75a1a0
005c6dfc  MOV ECX,dword ptr [EBP + -0x14]
005c6dff  MOV dword ptr [ECX + 0x50],EAX
005c6e02  MOV EAX,dword ptr [EBP + -0x14]
005c6e05  JMP 0x005c6e0e
005c6e07  JMP 0x005c6d7e
005c6e0c  XOR EAX,EAX
005c6e0e  MOV ECX,dword ptr [EBP + -0xc]
005c6e11  MOV dword ptr FS:[0x0],ECX
005c6e18  POP ECX
005c6e19  MOV ESP,EBP
005c6e1b  POP EBP
005c6e1c  RET
