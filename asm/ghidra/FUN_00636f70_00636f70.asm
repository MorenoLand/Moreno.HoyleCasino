; FUN_00636f70  00636f70
00636f70  PUSH EBP
00636f71  MOV EBP,ESP
00636f73  SUB ESP,0xc
00636f76  MOV dword ptr [EBP + -0xc],ECX
00636f79  MOV dword ptr [EBP + -0x4],0x0
00636f80  JMP 0x00636f8b
00636f82  MOV EAX,dword ptr [EBP + -0x4]
00636f85  ADD EAX,0x1
00636f88  MOV dword ptr [EBP + -0x4],EAX
00636f8b  MOV ECX,dword ptr [0x0162ee84]
00636f91  MOV EDX,dword ptr [ECX]
00636f93  MOV ECX,dword ptr [0x0162ee84]
00636f99  MOV EAX,dword ptr [EDX + 0x10c]
00636f9f  CALL EAX
00636fa1  CMP dword ptr [EBP + -0x4],EAX
00636fa4  JGE 0x00636fdb
00636fa6  MOV ECX,dword ptr [EBP + -0xc]
00636fa9  MOV EDX,dword ptr [ECX + 0x58]
00636fac  MOV EAX,dword ptr [EBP + -0x4]
00636faf  CMP dword ptr [EDX + EAX*0x4],0x0
00636fb3  JNZ 0x00636fb7
00636fb5  JMP 0x00636f82
00636fb7  MOV ECX,dword ptr [EBP + -0xc]
00636fba  MOV EDX,dword ptr [ECX + 0x58]
00636fbd  MOV EAX,dword ptr [EBP + -0x4]
00636fc0  MOV ECX,dword ptr [EDX + EAX*0x4]
00636fc3  MOV EDX,dword ptr [ECX + 0x20]
00636fc6  MOV dword ptr [EBP + -0x8],EDX
00636fc9  CMP dword ptr [EBP + -0x8],0x0
00636fcd  JZ 0x00636fd9
00636fcf  PUSH 0x0
00636fd1  MOV ECX,dword ptr [EBP + -0x8]
00636fd4  CALL 0x00648270
00636fd9  JMP 0x00636f82
00636fdb  MOV ESP,EBP
00636fdd  POP EBP
00636fde  RET
