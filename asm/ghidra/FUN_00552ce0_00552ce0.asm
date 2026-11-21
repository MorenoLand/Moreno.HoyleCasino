; FUN_00552ce0  00552ce0
00552ce0  PUSH EBP
00552ce1  MOV EBP,ESP
00552ce3  PUSH -0x1
00552ce5  PUSH 0x6a53e2
00552cea  MOV EAX,FS:[0x0]
00552cf0  PUSH EAX
00552cf1  SUB ESP,0x38
00552cf4  MOV EAX,[0x00781870]
00552cf9  XOR EAX,EBP
00552cfb  PUSH EAX
00552cfc  LEA EAX,[EBP + -0xc]
00552cff  MOV FS:[0x0],EAX
00552d05  MOV dword ptr [EBP + -0x34],ECX
00552d08  MOV EAX,dword ptr [EBP + -0x34]
00552d0b  MOV dword ptr [EAX],0x6c84f8
00552d11  MOV dword ptr [EBP + -0x4],0x0
00552d18  MOV dword ptr [EBP + -0x10],0x0
00552d1f  JMP 0x00552d2a
00552d21  MOV ECX,dword ptr [EBP + -0x10]
00552d24  ADD ECX,0x1
00552d27  MOV dword ptr [EBP + -0x10],ECX
00552d2a  CMP dword ptr [EBP + -0x10],0x5
00552d2e  JGE 0x00552d68
00552d30  MOV EDX,dword ptr [EBP + -0x10]
00552d33  MOV EAX,dword ptr [EBP + -0x34]
00552d36  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x9c]
00552d3d  MOV dword ptr [EBP + -0x18],ECX
00552d40  MOV EDX,dword ptr [EBP + -0x18]
00552d43  MOV dword ptr [EBP + -0x14],EDX
00552d46  CMP dword ptr [EBP + -0x14],0x0
00552d4a  JZ 0x00552d5f
00552d4c  PUSH 0x1
00552d4e  MOV EAX,dword ptr [EBP + -0x14]
00552d51  MOV EDX,dword ptr [EAX]
00552d53  MOV ECX,dword ptr [EBP + -0x14]
00552d56  MOV EAX,dword ptr [EDX]
00552d58  CALL EAX
00552d5a  MOV dword ptr [EBP + -0x38],EAX
00552d5d  JMP 0x00552d66
00552d5f  MOV dword ptr [EBP + -0x38],0x0
00552d66  JMP 0x00552d21
00552d68  MOV ECX,dword ptr [EBP + -0x34]
00552d6b  MOV EDX,dword ptr [ECX + 0xb0]
00552d71  MOV dword ptr [EBP + -0x20],EDX
00552d74  MOV EAX,dword ptr [EBP + -0x20]
00552d77  MOV dword ptr [EBP + -0x1c],EAX
00552d7a  CMP dword ptr [EBP + -0x1c],0x0
00552d7e  JZ 0x00552d93
00552d80  PUSH 0x1
00552d82  MOV ECX,dword ptr [EBP + -0x1c]
00552d85  MOV EDX,dword ptr [ECX]
00552d87  MOV ECX,dword ptr [EBP + -0x1c]
00552d8a  MOV EAX,dword ptr [EDX]
00552d8c  CALL EAX
00552d8e  MOV dword ptr [EBP + -0x3c],EAX
00552d91  JMP 0x00552d9a
00552d93  MOV dword ptr [EBP + -0x3c],0x0
00552d9a  MOV ECX,dword ptr [EBP + -0x34]
00552d9d  MOV EDX,dword ptr [ECX + 0xb4]
00552da3  MOV dword ptr [EBP + -0x28],EDX
00552da6  MOV EAX,dword ptr [EBP + -0x28]
00552da9  MOV dword ptr [EBP + -0x24],EAX
00552dac  CMP dword ptr [EBP + -0x24],0x0
00552db0  JZ 0x00552dc5
00552db2  PUSH 0x1
00552db4  MOV ECX,dword ptr [EBP + -0x24]
00552db7  MOV EDX,dword ptr [ECX]
00552db9  MOV ECX,dword ptr [EBP + -0x24]
00552dbc  MOV EAX,dword ptr [EDX]
00552dbe  CALL EAX
00552dc0  MOV dword ptr [EBP + -0x40],EAX
00552dc3  JMP 0x00552dcc
00552dc5  MOV dword ptr [EBP + -0x40],0x0
00552dcc  MOV ECX,dword ptr [EBP + -0x34]
00552dcf  MOV EDX,dword ptr [ECX + 0xb8]
00552dd5  MOV dword ptr [EBP + -0x30],EDX
00552dd8  MOV EAX,dword ptr [EBP + -0x30]
00552ddb  MOV dword ptr [EBP + -0x2c],EAX
00552dde  CMP dword ptr [EBP + -0x2c],0x0
00552de2  JZ 0x00552df7
00552de4  PUSH 0x1
00552de6  MOV ECX,dword ptr [EBP + -0x2c]
00552de9  MOV EDX,dword ptr [ECX]
00552deb  MOV ECX,dword ptr [EBP + -0x2c]
00552dee  MOV EAX,dword ptr [EDX]
00552df0  CALL EAX
00552df2  MOV dword ptr [EBP + -0x44],EAX
00552df5  JMP 0x00552dfe
00552df7  MOV dword ptr [EBP + -0x44],0x0
00552dfe  MOV dword ptr [EBP + -0x4],0xffffffff
00552e05  MOV ECX,dword ptr [EBP + -0x34]
00552e08  CALL 0x00552840
00552e0d  MOV ECX,dword ptr [EBP + -0xc]
00552e10  MOV dword ptr FS:[0x0],ECX
00552e17  POP ECX
00552e18  MOV ESP,EBP
00552e1a  POP EBP
00552e1b  RET
