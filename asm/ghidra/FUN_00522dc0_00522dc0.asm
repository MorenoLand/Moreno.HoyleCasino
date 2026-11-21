; FUN_00522dc0  00522dc0
00522dc0  PUSH EBP
00522dc1  MOV EBP,ESP
00522dc3  PUSH -0x1
00522dc5  PUSH 0x6a3faa
00522dca  MOV EAX,FS:[0x0]
00522dd0  PUSH EAX
00522dd1  SUB ESP,0x24
00522dd4  MOV EAX,[0x00781870]
00522dd9  XOR EAX,EBP
00522ddb  PUSH EAX
00522ddc  LEA EAX,[EBP + -0xc]
00522ddf  MOV FS:[0x0],EAX
00522de5  MOV dword ptr [EBP + -0x2c],ECX
00522de8  MOV dword ptr [EBP + -0x18],0xc8
00522def  MOV ECX,dword ptr [0x00793374]
00522df5  CALL 0x00528bd0
00522dfa  MOV dword ptr [EBP + -0x20],EAX
00522dfd  MOV EAX,dword ptr [EBP + -0x20]
00522e00  MOV ECX,dword ptr [EAX*0x8 + 0x721cd8]
00522e07  SUB ECX,0x1f
00522e0a  MOV dword ptr [EBP + -0x14],ECX
00522e0d  MOV EDX,dword ptr [EBP + -0x20]
00522e10  MOV EAX,dword ptr [EDX*0x8 + 0x721cdc]
00522e17  SUB EAX,0x23
00522e1a  MOV dword ptr [EBP + -0x10],EAX
00522e1d  PUSH 0x1c2
00522e22  PUSH 0x258
00522e27  CALL 0x0062fbf0
00522e2c  ADD ESP,0x4
00522e2f  PUSH EAX
00522e30  MOV ECX,dword ptr [EBP + -0x2c]
00522e33  MOV EDX,dword ptr [ECX + 0xc]
00522e36  MOV EAX,dword ptr [EBP + -0x2c]
00522e39  MOV ECX,dword ptr [EAX + 0xc]
00522e3c  MOV EDX,dword ptr [EDX]
00522e3e  MOV EAX,dword ptr [EDX + 0x44]
00522e41  CALL EAX
00522e43  MOV ECX,dword ptr [EBP + -0x2c]
00522e46  MOV EDX,dword ptr [ECX + 0xc]
00522e49  MOV EAX,dword ptr [EBP + -0x2c]
00522e4c  MOV ECX,dword ptr [EAX + 0xc]
00522e4f  MOV EDX,dword ptr [EDX]
00522e51  MOV EAX,dword ptr [EDX + 0x74]
00522e54  CALL EAX
00522e56  PUSH 0x44
00522e58  CALL 0x00686d82
00522e5d  ADD ESP,0x4
00522e60  MOV dword ptr [EBP + -0x28],EAX
00522e63  MOV dword ptr [EBP + -0x4],0x0
00522e6a  CMP dword ptr [EBP + -0x28],0x0
00522e6e  JZ 0x00522e93
00522e70  MOV ECX,dword ptr [EBP + -0x18]
00522e73  PUSH ECX
00522e74  MOV EDX,dword ptr [EBP + -0x10]
00522e77  PUSH EDX
00522e78  MOV EAX,dword ptr [EBP + -0x14]
00522e7b  PUSH EAX
00522e7c  MOV ECX,dword ptr [0x0162ee80]
00522e82  MOV EDX,dword ptr [ECX + 0x4]
00522e85  PUSH EDX
00522e86  MOV ECX,dword ptr [EBP + -0x28]
00522e89  CALL 0x00524280
00522e8e  MOV dword ptr [EBP + -0x30],EAX
00522e91  JMP 0x00522e9a
00522e93  MOV dword ptr [EBP + -0x30],0x0
00522e9a  MOV EAX,dword ptr [EBP + -0x30]
00522e9d  MOV dword ptr [EBP + -0x24],EAX
00522ea0  MOV dword ptr [EBP + -0x4],0xffffffff
00522ea7  MOV ECX,dword ptr [EBP + -0x24]
00522eaa  MOV dword ptr [EBP + -0x1c],ECX
00522ead  MOV EDX,dword ptr [EBP + -0x1c]
00522eb0  MOV dword ptr [EDX + 0x38],0x14
00522eb7  MOV EAX,dword ptr [EBP + -0x1c]
00522eba  FILD dword ptr [EAX + 0x38]
00522ebd  FLD1
00522ebf  FDIVRP
00522ec1  MOV ECX,dword ptr [EBP + -0x1c]
00522ec4  FSTP float ptr [ECX + 0x3c]
00522ec7  MOV EDX,dword ptr [EBP + -0x1c]
00522eca  FLD float ptr [0x006c2fe4]
00522ed0  FSTP float ptr [EDX + 0x34]
00522ed3  MOV EAX,dword ptr [EBP + -0x1c]
00522ed6  PUSH EAX
00522ed7  MOV ECX,dword ptr [EBP + -0x2c]
00522eda  MOV ECX,dword ptr [ECX + 0xc]
00522edd  CALL 0x005f6050
00522ee2  MOV ECX,dword ptr [EBP + -0xc]
00522ee5  MOV dword ptr FS:[0x0],ECX
00522eec  POP ECX
00522eed  MOV ESP,EBP
00522eef  POP EBP
00522ef0  RET
