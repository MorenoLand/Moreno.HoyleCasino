; FUN_00542d90  00542d90
00542d90  PUSH EBP
00542d91  MOV EBP,ESP
00542d93  SUB ESP,0xc
00542d96  MOV dword ptr [EBP + -0xc],ECX
00542d99  MOV ECX,dword ptr [EBP + -0xc]
00542d9c  CALL 0x005e9e20
00542da1  MOV EAX,dword ptr [EBP + -0xc]
00542da4  MOV dword ptr [EAX],0x6c65cc
00542daa  MOV dword ptr [EBP + -0x4],0x0
00542db1  JMP 0x00542dbc
00542db3  MOV ECX,dword ptr [EBP + -0x4]
00542db6  ADD ECX,0x1
00542db9  MOV dword ptr [EBP + -0x4],ECX
00542dbc  CMP dword ptr [EBP + -0x4],0x3
00542dc0  JGE 0x00542df5
00542dc2  MOV dword ptr [EBP + -0x8],0x0
00542dc9  JMP 0x00542dd4
00542dcb  MOV EDX,dword ptr [EBP + -0x8]
00542dce  ADD EDX,0x1
00542dd1  MOV dword ptr [EBP + -0x8],EDX
00542dd4  CMP dword ptr [EBP + -0x8],0x6
00542dd8  JGE 0x00542df3
00542dda  MOV EAX,dword ptr [EBP + -0x4]
00542ddd  IMUL EAX,EAX,0x18
00542de0  MOV ECX,dword ptr [EBP + -0xc]
00542de3  LEA EDX,[ECX + EAX*0x1 + 0x44]
00542de7  MOV EAX,dword ptr [EBP + -0x8]
00542dea  MOV dword ptr [EDX + EAX*0x4],0x0
00542df1  JMP 0x00542dcb
00542df3  JMP 0x00542db3
00542df5  MOV dword ptr [EBP + -0x4],0x0
00542dfc  JMP 0x00542e07
00542dfe  MOV ECX,dword ptr [EBP + -0x4]
00542e01  ADD ECX,0x1
00542e04  MOV dword ptr [EBP + -0x4],ECX
00542e07  CMP dword ptr [EBP + -0x4],0x3
00542e0b  JGE 0x00542e1d
00542e0d  MOV EDX,dword ptr [EBP + -0x4]
00542e10  MOV EAX,dword ptr [EBP + -0xc]
00542e13  MOV dword ptr [EAX + EDX*0x4 + 0x10],0x0
00542e1b  JMP 0x00542dfe
00542e1d  MOV dword ptr [EBP + -0x4],0x0
00542e24  JMP 0x00542e2f
00542e26  MOV ECX,dword ptr [EBP + -0x4]
00542e29  ADD ECX,0x1
00542e2c  MOV dword ptr [EBP + -0x4],ECX
00542e2f  CMP dword ptr [EBP + -0x4],0x9
00542e33  JGE 0x00542e48
00542e35  MOV EDX,dword ptr [EBP + -0x4]
00542e38  MOV EAX,dword ptr [EBP + -0xc]
00542e3b  MOV dword ptr [EAX + EDX*0x4 + 0x8c],0x0
00542e46  JMP 0x00542e26
00542e48  MOV dword ptr [EBP + -0x4],0x0
00542e4f  JMP 0x00542e5a
00542e51  MOV ECX,dword ptr [EBP + -0x4]
00542e54  ADD ECX,0x1
00542e57  MOV dword ptr [EBP + -0x4],ECX
00542e5a  CMP dword ptr [EBP + -0x4],0x3
00542e5e  JGE 0x00542e70
00542e60  MOV EDX,dword ptr [EBP + -0x4]
00542e63  MOV EAX,dword ptr [EBP + -0xc]
00542e66  MOV dword ptr [EAX + EDX*0x4 + 0x4],0x0
00542e6e  JMP 0x00542e51
00542e70  MOV dword ptr [EBP + -0x4],0x0
00542e77  JMP 0x00542e82
00542e79  MOV ECX,dword ptr [EBP + -0x4]
00542e7c  ADD ECX,0x1
00542e7f  MOV dword ptr [EBP + -0x4],ECX
00542e82  CMP dword ptr [EBP + -0x4],0x3
00542e86  JGE 0x00542e98
00542e88  MOV EDX,dword ptr [EBP + -0x4]
00542e8b  MOV EAX,dword ptr [EBP + -0xc]
00542e8e  MOV dword ptr [EAX + EDX*0x4 + 0x38],0x0
00542e96  JMP 0x00542e79
00542e98  MOV ECX,dword ptr [EBP + -0xc]
00542e9b  MOV dword ptr [ECX + 0xb0],0x0
00542ea5  MOV EDX,dword ptr [EBP + -0xc]
00542ea8  MOV dword ptr [EDX + 0xb4],0x0
00542eb2  MOV EAX,dword ptr [EBP + -0xc]
00542eb5  MOV dword ptr [EAX + 0x1c],0x0
00542ebc  MOV ECX,dword ptr [EBP + -0xc]
00542ebf  MOV dword ptr [ECX + 0x20],0x0
00542ec6  MOV EDX,dword ptr [EBP + -0xc]
00542ec9  MOV dword ptr [EDX + 0x24],0x0
00542ed0  MOV EAX,dword ptr [EBP + -0xc]
00542ed3  MOV dword ptr [EAX + 0x28],0x0
00542eda  MOV ECX,dword ptr [EBP + -0xc]
00542edd  MOV dword ptr [ECX + 0x2c],0x0
00542ee4  MOV EDX,dword ptr [EBP + -0xc]
00542ee7  MOV dword ptr [EDX + 0x30],0x0
00542eee  MOV EAX,dword ptr [EBP + -0xc]
00542ef1  MOV dword ptr [EAX + 0x34],0x0
00542ef8  MOV ECX,dword ptr [EBP + -0xc]
00542efb  MOV dword ptr [ECX + 0xb8],0x0
00542f05  MOV EDX,dword ptr [EBP + -0xc]
00542f08  MOV dword ptr [EDX + 0xbc],0x0
00542f12  MOV EAX,dword ptr [EBP + -0xc]
00542f15  MOV ESP,EBP
00542f17  POP EBP
00542f18  RET
