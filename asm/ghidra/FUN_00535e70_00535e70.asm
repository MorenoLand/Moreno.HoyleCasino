; FUN_00535e70  00535e70
00535e70  PUSH EBP
00535e71  MOV EBP,ESP
00535e73  SUB ESP,0x2c
00535e76  MOV dword ptr [EBP + -0x28],ECX
00535e79  MOV EAX,[0x00793394]
00535e7e  MOV EDX,dword ptr [EAX]
00535e80  MOV ECX,dword ptr [0x00793394]
00535e86  MOV EAX,dword ptr [EDX + 0x40]
00535e89  CALL EAX
00535e8b  MOV dword ptr [EBP + -0x24],EAX
00535e8e  MOV dword ptr [EBP + -0x4],0xffffffff
00535e95  MOV dword ptr [EBP + -0xc],0x0
00535e9c  JMP 0x00535ea7
00535e9e  MOV ECX,dword ptr [EBP + -0xc]
00535ea1  ADD ECX,0x1
00535ea4  MOV dword ptr [EBP + -0xc],ECX
00535ea7  CMP dword ptr [EBP + -0xc],0x5
00535eab  JGE 0x00535f10
00535ead  MOV EDX,dword ptr [EBP + -0xc]
00535eb0  MOV EAX,dword ptr [EBP + -0x28]
00535eb3  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x64]
00535eb7  MOV dword ptr [EBP + -0x8],ECX
00535eba  CMP dword ptr [EBP + -0x8],-0x1
00535ebe  JZ 0x00535f04
00535ec0  CMP dword ptr [EBP + -0x24],0x1
00535ec4  JZ 0x00535f04
00535ec6  MOV EDX,dword ptr [EBP + -0xc]
00535ec9  MOV EAX,dword ptr [EBP + -0x28]
00535ecc  CMP dword ptr [EAX + EDX*0x4 + 0x64],0x3e8
00535ed4  JNZ 0x00535ee6
00535ed6  MOV ECX,dword ptr [EBP + -0x28]
00535ed9  CALL 0x00535e50
00535ede  SUB EAX,0x1
00535ee1  MOV dword ptr [EBP + -0x8],EAX
00535ee4  JMP 0x00535f04
00535ee6  MOV ECX,dword ptr [EBP + -0x28]
00535ee9  CALL 0x00535e50
00535eee  MOV ECX,dword ptr [EBP + -0xc]
00535ef1  MOV EDX,dword ptr [EBP + -0x28]
00535ef4  SUB EAX,dword ptr [EDX + ECX*0x4 + 0x64]
00535ef8  MOV dword ptr [EBP + -0x8],EAX
00535efb  JNS 0x00535f04
00535efd  MOV dword ptr [EBP + -0x8],0x0
00535f04  MOV EAX,dword ptr [EBP + -0xc]
00535f07  MOV ECX,dword ptr [EBP + -0x8]
00535f0a  MOV dword ptr [EBP + EAX*0x4 + -0x20],ECX
00535f0e  JMP 0x00535e9e
00535f10  MOV dword ptr [EBP + -0xc],0x0
00535f17  JMP 0x00535f22
00535f19  MOV EDX,dword ptr [EBP + -0xc]
00535f1c  ADD EDX,0x1
00535f1f  MOV dword ptr [EBP + -0xc],EDX
00535f22  CMP dword ptr [EBP + -0xc],0x5
00535f26  JGE 0x00535f4e
00535f28  MOV EAX,dword ptr [EBP + -0xc]
00535f2b  MOV ECX,dword ptr [EBP + -0x4]
00535f2e  CMP ECX,dword ptr [EBP + EAX*0x4 + -0x20]
00535f32  JLE 0x00535f3c
00535f34  MOV EDX,dword ptr [EBP + -0x4]
00535f37  MOV dword ptr [EBP + -0x2c],EDX
00535f3a  JMP 0x00535f46
00535f3c  MOV EAX,dword ptr [EBP + -0xc]
00535f3f  MOV ECX,dword ptr [EBP + EAX*0x4 + -0x20]
00535f43  MOV dword ptr [EBP + -0x2c],ECX
00535f46  MOV EDX,dword ptr [EBP + -0x2c]
00535f49  MOV dword ptr [EBP + -0x4],EDX
00535f4c  JMP 0x00535f19
00535f4e  MOV EAX,dword ptr [EBP + -0x4]
00535f51  MOV ESP,EBP
00535f53  POP EBP
00535f54  RET
