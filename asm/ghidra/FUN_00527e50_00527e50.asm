; FUN_00527e50  00527e50
00527e50  PUSH EBP
00527e51  MOV EBP,ESP
00527e53  SUB ESP,0x14
00527e56  MOV dword ptr [EBP + -0x14],ECX
00527e59  MOV EAX,dword ptr [EBP + -0x14]
00527e5c  MOV dword ptr [EAX + 0xdb8],0xffffffff
00527e66  MOV ECX,dword ptr [EBP + -0x14]
00527e69  MOV byte ptr [ECX + 0xdbc],0x0
00527e70  PUSH 0x0
00527e72  PUSH -0x1
00527e74  MOV ECX,dword ptr [EBP + -0x14]
00527e77  CALL 0x00528030
00527e7c  PUSH -0x1
00527e7e  MOV ECX,dword ptr [EBP + -0x14]
00527e81  CALL 0x00528b60
00527e86  MOV EDX,dword ptr [EBP + -0x14]
00527e89  MOV dword ptr [EDX + 0xdb0],0xffffffff
00527e93  MOV EAX,dword ptr [EBP + -0x14]
00527e96  MOV dword ptr [EAX + 0xdb4],0xffffffff
00527ea0  MOV dword ptr [EBP + -0x4],0x0
00527ea7  JMP 0x00527eb2
00527ea9  MOV ECX,dword ptr [EBP + -0x4]
00527eac  ADD ECX,0x1
00527eaf  MOV dword ptr [EBP + -0x4],ECX
00527eb2  CMP dword ptr [EBP + -0x4],0xa1
00527eb9  JGE 0x00527ee0
00527ebb  MOV EDX,dword ptr [EBP + -0x4]
00527ebe  MOV EAX,dword ptr [EBP + -0x14]
00527ec1  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x4]
00527ec5  CALL 0x005cb9b0
00527eca  MOV ECX,dword ptr [EBP + -0x4]
00527ecd  MOV EDX,dword ptr [EBP + -0x14]
00527ed0  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x4]
00527ed4  MOV dword ptr [EAX + 0xf0],0x2
00527ede  JMP 0x00527ea9
00527ee0  MOV dword ptr [EBP + -0x4],0x0
00527ee7  JMP 0x00527ef2
00527ee9  MOV ECX,dword ptr [EBP + -0x4]
00527eec  ADD ECX,0x1
00527eef  MOV dword ptr [EBP + -0x4],ECX
00527ef2  CMP dword ptr [EBP + -0x4],0x4
00527ef6  JGE 0x00527f45
00527ef8  MOV EDX,dword ptr [EBP + -0x4]
00527efb  PUSH EDX
00527efc  CALL 0x005dcb00
00527f01  ADD ESP,0x4
00527f04  MOV dword ptr [EBP + -0x8],EAX
00527f07  MOV EAX,dword ptr [EBP + -0x8]
00527f0a  MOV byte ptr [EAX + 0x4a0],0x0
00527f11  MOV ECX,dword ptr [EBP + -0x4]
00527f14  PUSH ECX
00527f15  CALL 0x005dcb00
00527f1a  ADD ESP,0x4
00527f1d  MOV dword ptr [EBP + -0xc],EAX
00527f20  MOV EDX,dword ptr [EBP + -0xc]
00527f23  MOV byte ptr [EDX + 0x4a2],0x0
00527f2a  MOV EAX,dword ptr [EBP + -0x4]
00527f2d  PUSH EAX
00527f2e  CALL 0x005dcb00
00527f33  ADD ESP,0x4
00527f36  MOV dword ptr [EBP + -0x10],EAX
00527f39  MOV ECX,dword ptr [EBP + -0x10]
00527f3c  MOV byte ptr [ECX + 0x4a1],0x0
00527f43  JMP 0x00527ee9
00527f45  MOV ESP,EBP
00527f47  POP EBP
00527f48  RET
