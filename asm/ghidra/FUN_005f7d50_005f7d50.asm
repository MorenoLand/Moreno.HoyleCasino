; FUN_005f7d50  005f7d50
005f7d50  PUSH EBP
005f7d51  MOV EBP,ESP
005f7d53  SUB ESP,0x20
005f7d56  MOV dword ptr [EBP + -0x18],ECX
005f7d59  MOV ECX,dword ptr [EBP + -0x18]
005f7d5c  CALL 0x005fb0c0
005f7d61  MOV EAX,dword ptr [EBP + -0x18]
005f7d64  MOV ECX,dword ptr [EAX + 0x17c]
005f7d6a  PUSH ECX
005f7d6b  MOV ECX,dword ptr [EBP + -0x18]
005f7d6e  CALL 0x005f8ce0
005f7d73  MOV ECX,dword ptr [EBP + -0x18]
005f7d76  ADD ECX,0x13c
005f7d7c  CALL 0x0060c9a0
005f7d81  TEST EAX,EAX
005f7d83  JZ 0x005f7dc0
005f7d85  PUSH 0x0
005f7d87  MOV ECX,dword ptr [EBP + -0x18]
005f7d8a  ADD ECX,0x13c
005f7d90  CALL 0x0060ca40
005f7d95  MOV dword ptr [EBP + -0x8],EAX
005f7d98  MOV EDX,dword ptr [EBP + -0x8]
005f7d9b  MOV dword ptr [EBP + -0x4],EDX
005f7d9e  CMP dword ptr [EBP + -0x4],0x0
005f7da2  JZ 0x005f7db7
005f7da4  PUSH 0x1
005f7da6  MOV EAX,dword ptr [EBP + -0x4]
005f7da9  MOV EDX,dword ptr [EAX]
005f7dab  MOV ECX,dword ptr [EBP + -0x4]
005f7dae  MOV EAX,dword ptr [EDX]
005f7db0  CALL EAX
005f7db2  MOV dword ptr [EBP + -0x1c],EAX
005f7db5  JMP 0x005f7dbe
005f7db7  MOV dword ptr [EBP + -0x1c],0x0
005f7dbe  JMP 0x005f7d73
005f7dc0  MOV ECX,dword ptr [EBP + -0x18]
005f7dc3  CMP dword ptr [ECX + 0x14c],0x0
005f7dca  JZ 0x005f7de4
005f7dcc  MOV EDX,dword ptr [EBP + -0x18]
005f7dcf  MOV EAX,dword ptr [EDX + 0x14c]
005f7dd5  MOV dword ptr [EBP + -0xc],EAX
005f7dd8  MOV ECX,dword ptr [EBP + -0xc]
005f7ddb  PUSH ECX
005f7ddc  CALL 0x00686cae
005f7de1  ADD ESP,0x4
005f7de4  MOV EDX,dword ptr [EBP + -0x18]
005f7de7  MOV dword ptr [EDX + 0x14c],0x0
005f7df1  MOV EAX,dword ptr [EBP + -0x18]
005f7df4  MOV dword ptr [EAX + 0x150],0x0
005f7dfe  MOV ECX,dword ptr [EBP + -0x18]
005f7e01  MOV dword ptr [ECX + 0x154],0x0
005f7e0b  MOV ECX,dword ptr [EBP + -0x18]
005f7e0e  ADD ECX,0x158
005f7e14  CALL 0x0060c9a0
005f7e19  TEST EAX,EAX
005f7e1b  JZ 0x005f7e58
005f7e1d  PUSH 0x0
005f7e1f  MOV ECX,dword ptr [EBP + -0x18]
005f7e22  ADD ECX,0x158
005f7e28  CALL 0x0060ca40
005f7e2d  MOV dword ptr [EBP + -0x14],EAX
005f7e30  MOV EDX,dword ptr [EBP + -0x14]
005f7e33  MOV dword ptr [EBP + -0x10],EDX
005f7e36  CMP dword ptr [EBP + -0x10],0x0
005f7e3a  JZ 0x005f7e4f
005f7e3c  PUSH 0x1
005f7e3e  MOV EAX,dword ptr [EBP + -0x10]
005f7e41  MOV EDX,dword ptr [EAX]
005f7e43  MOV ECX,dword ptr [EBP + -0x10]
005f7e46  MOV EAX,dword ptr [EDX]
005f7e48  CALL EAX
005f7e4a  MOV dword ptr [EBP + -0x20],EAX
005f7e4d  JMP 0x005f7e56
005f7e4f  MOV dword ptr [EBP + -0x20],0x0
005f7e56  JMP 0x005f7e0b
005f7e58  MOV ECX,dword ptr [EBP + -0x18]
005f7e5b  MOV dword ptr [ECX + 0x16c],0x0
005f7e65  MOV ECX,dword ptr [EBP + -0x18]
005f7e68  CALL 0x005f9a80
005f7e6d  MOV ESP,EBP
005f7e6f  POP EBP
005f7e70  RET
