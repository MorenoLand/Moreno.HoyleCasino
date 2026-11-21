; FUN_00456ca0  00456ca0
00456ca0  PUSH EBP
00456ca1  MOV EBP,ESP
00456ca3  SUB ESP,0x24
00456ca6  MOV dword ptr [EBP + -0x24],ECX
00456ca9  MOV dword ptr [EBP + -0x8],0x0
00456cb0  MOV dword ptr [EBP + -0x20],0x0
00456cb7  MOV dword ptr [EBP + -0x4],0x0
00456cbe  MOV dword ptr [EBP + -0x14],0x0
00456cc5  MOV dword ptr [EBP + -0x1c],0xffffffff
00456ccc  MOV dword ptr [EBP + -0x10],0xffffffff
00456cd3  MOV dword ptr [EBP + -0xc],0x0
00456cda  JMP 0x00456ce5
00456cdc  MOV EAX,dword ptr [EBP + -0xc]
00456cdf  ADD EAX,0x1
00456ce2  MOV dword ptr [EBP + -0xc],EAX
00456ce5  CMP dword ptr [EBP + -0xc],0x7
00456ce9  JGE 0x00456d8b
00456cef  MOV ECX,dword ptr [EBP + -0xc]
00456cf2  MOV EDX,dword ptr [EBP + -0x24]
00456cf5  MOV AX,word ptr [EDX + ECX*0x2 + 0x4]
00456cfa  PUSH EAX
00456cfb  MOV ECX,dword ptr [EBP + -0x24]
00456cfe  CALL 0x0044f680
00456d03  PUSH EAX
00456d04  MOV ECX,dword ptr [EBP + -0x24]
00456d07  CALL 0x0044f700
00456d0c  CMP EAX,0x4
00456d0f  JNZ 0x00456d39
00456d11  MOV ECX,dword ptr [EBP + -0xc]
00456d14  MOV EDX,dword ptr [EBP + -0x24]
00456d17  MOV AX,word ptr [EDX + ECX*0x2 + 0x4]
00456d1c  PUSH EAX
00456d1d  MOV ECX,dword ptr [EBP + -0x24]
00456d20  CALL 0x0044f680
00456d25  MOV dword ptr [EBP + -0x8],EAX
00456d28  MOV ECX,dword ptr [EBP + -0xc]
00456d2b  MOV dword ptr [EBP + -0x4],ECX
00456d2e  MOV EDX,dword ptr [EBP + -0xc]
00456d31  ADD EDX,0x3
00456d34  MOV dword ptr [EBP + -0xc],EDX
00456d37  JMP 0x00456cdc
00456d39  MOV EAX,dword ptr [EBP + -0xc]
00456d3c  MOV ECX,dword ptr [EBP + -0x24]
00456d3f  MOV DX,word ptr [ECX + EAX*0x2 + 0x4]
00456d44  PUSH EDX
00456d45  MOV ECX,dword ptr [EBP + -0x24]
00456d48  CALL 0x0044f680
00456d4d  PUSH EAX
00456d4e  MOV ECX,dword ptr [EBP + -0x24]
00456d51  CALL 0x0044f700
00456d56  CMP EAX,0x3
00456d59  JNZ 0x00456d86
00456d5b  MOV EAX,dword ptr [EBP + -0xc]
00456d5e  MOV ECX,dword ptr [EBP + -0x24]
00456d61  MOV DX,word ptr [ECX + EAX*0x2 + 0x4]
00456d66  PUSH EDX
00456d67  MOV ECX,dword ptr [EBP + -0x24]
00456d6a  CALL 0x0044f680
00456d6f  MOV dword ptr [EBP + -0x20],EAX
00456d72  MOV EAX,dword ptr [EBP + -0xc]
00456d75  MOV dword ptr [EBP + -0x14],EAX
00456d78  MOV ECX,dword ptr [EBP + -0xc]
00456d7b  ADD ECX,0x2
00456d7e  MOV dword ptr [EBP + -0xc],ECX
00456d81  JMP 0x00456cdc
00456d86  JMP 0x00456cdc
00456d8b  MOV EDX,dword ptr [EBP + -0x8]
00456d8e  SUB EDX,dword ptr [EBP + -0x20]
00456d91  PUSH EDX
00456d92  CALL 0x00686eba
00456d97  ADD ESP,0x4
00456d9a  CMP EAX,0x1
00456d9d  JNZ 0x00456db6
00456d9f  MOV word ptr [EBP + -0x18],0x0
00456da5  MOV EAX,dword ptr [EBP + -0x14]
00456da8  MOV dword ptr [EBP + -0x1c],EAX
00456dab  MOV ECX,dword ptr [EBP + -0x14]
00456dae  ADD ECX,0x1
00456db1  MOV dword ptr [EBP + -0x10],ECX
00456db4  JMP 0x00456de4
00456db6  MOV word ptr [EBP + -0x18],0x1
00456dbc  MOV EDX,dword ptr [EBP + -0x8]
00456dbf  CMP EDX,dword ptr [EBP + -0x20]
00456dc2  JLE 0x00456dd5
00456dc4  MOV EAX,dword ptr [EBP + -0x4]
00456dc7  MOV dword ptr [EBP + -0x1c],EAX
00456dca  MOV ECX,dword ptr [EBP + -0x4]
00456dcd  ADD ECX,0x1
00456dd0  MOV dword ptr [EBP + -0x10],ECX
00456dd3  JMP 0x00456de4
00456dd5  MOV EDX,dword ptr [EBP + -0x14]
00456dd8  MOV dword ptr [EBP + -0x1c],EDX
00456ddb  MOV EAX,dword ptr [EBP + -0x14]
00456dde  ADD EAX,0x1
00456de1  MOV dword ptr [EBP + -0x10],EAX
00456de4  MOV ECX,dword ptr [EBP + 0xc]
00456de7  PUSH ECX
00456de8  MOV EDX,dword ptr [EBP + 0x8]
00456deb  PUSH EDX
00456dec  MOV EAX,dword ptr [EBP + -0x10]
00456def  PUSH EAX
00456df0  MOV ECX,dword ptr [EBP + -0x1c]
00456df3  PUSH ECX
00456df4  MOV ECX,dword ptr [EBP + -0x24]
00456df7  CALL 0x0044f840
00456dfc  MOV AX,word ptr [EBP + -0x18]
00456e00  MOV ESP,EBP
00456e02  POP EBP
00456e03  RET 0x8
