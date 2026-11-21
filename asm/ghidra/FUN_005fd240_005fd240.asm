; FUN_005fd240  005fd240
005fd240  PUSH EBP
005fd241  MOV EBP,ESP
005fd243  SUB ESP,0xc
005fd246  MOV dword ptr [EBP + -0x8],ECX
005fd249  MOV ECX,dword ptr [EBP + -0x8]
005fd24c  CALL 0x005f5400
005fd251  CMP EAX,-0x2
005fd254  JNZ 0x005fd25b
005fd256  JMP 0x005fd324
005fd25b  MOV EAX,dword ptr [EBP + -0x8]
005fd25e  MOV ECX,dword ptr [EAX + 0x1f0]
005fd264  CMP dword ptr [ECX + 0x1b4],0x1
005fd26b  JNZ 0x005fd2b4
005fd26d  MOV EDX,dword ptr [EBP + -0x8]
005fd270  MOV EAX,dword ptr [EDX + 0x1f0]
005fd276  CMP dword ptr [EAX + 0x1c0],0x0
005fd27d  JZ 0x005fd2b2
005fd27f  PUSH 0x1
005fd281  MOV ECX,dword ptr [EBP + -0x8]
005fd284  CALL 0x005f5400
005fd289  PUSH EAX
005fd28a  MOV ECX,dword ptr [EBP + -0x8]
005fd28d  MOV EDX,dword ptr [ECX + 0x1f0]
005fd293  MOV EAX,dword ptr [EDX + 0x1c0]
005fd299  MOV ECX,dword ptr [EBP + -0x8]
005fd29c  MOV EDX,dword ptr [ECX + 0x1f0]
005fd2a2  MOV ECX,dword ptr [EDX + 0x1c0]
005fd2a8  MOV EAX,dword ptr [EAX]
005fd2aa  MOV EDX,dword ptr [EAX + 0xf0]
005fd2b0  CALL EDX
005fd2b2  JMP 0x005fd324
005fd2b4  MOV EAX,dword ptr [EBP + -0x8]
005fd2b7  CMP dword ptr [EAX + 0x1ec],-0x1
005fd2be  JNZ 0x005fd2cd
005fd2c0  MOV ECX,dword ptr [0x015e55e4]
005fd2c6  CALL 0x005f2870
005fd2cb  JMP 0x005fd2d7
005fd2cd  MOV ECX,dword ptr [EBP + -0x8]
005fd2d0  CALL 0x005fd330
005fd2d5  JMP 0x005fd324
005fd2d7  MOV ECX,dword ptr [EBP + -0x8]
005fd2da  CMP dword ptr [ECX + 0x1f0],0x0
005fd2e1  JZ 0x005fd2fd
005fd2e3  MOV EDX,dword ptr [EBP + -0x4]
005fd2e6  MOV dword ptr [EBP + -0xc],EDX
005fd2e9  MOV EAX,dword ptr [EBP + -0x8]
005fd2ec  MOV ECX,dword ptr [EAX + 0x1f0]
005fd2f2  MOV EDX,dword ptr [ECX + 0x1c4]
005fd2f8  MOV dword ptr [EBP + -0xc],EDX
005fd2fb  JMP 0x005fd304
005fd2fd  MOV dword ptr [EBP + -0xc],0xffffffff
005fd304  MOV EAX,dword ptr [EBP + -0xc]
005fd307  PUSH EAX
005fd308  MOV ECX,dword ptr [EBP + -0x8]
005fd30b  CALL 0x005f5400
005fd310  PUSH EAX
005fd311  MOV ECX,dword ptr [0x015e55e4]
005fd317  MOV EDX,dword ptr [ECX]
005fd319  MOV ECX,dword ptr [0x015e55e4]
005fd31f  MOV EAX,dword ptr [EDX + 0x4c]
005fd322  CALL EAX
005fd324  MOV ESP,EBP
005fd326  POP EBP
005fd327  RET
