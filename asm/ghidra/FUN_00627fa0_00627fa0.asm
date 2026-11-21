; FUN_00627fa0  00627fa0
00627fa0  PUSH EBP
00627fa1  MOV EBP,ESP
00627fa3  SUB ESP,0x10
00627fa6  MOV EAX,dword ptr [EBP + 0xc]
00627fa9  MOV ECX,dword ptr [EBP + 0x10]
00627fac  MOV EDX,dword ptr [EAX]
00627fae  CMP EDX,dword ptr [ECX]
00627fb0  JLE 0x00627fbc
00627fb2  MOV EAX,dword ptr [EBP + 0xc]
00627fb5  MOV ECX,dword ptr [EAX]
00627fb7  MOV dword ptr [EBP + -0x4],ECX
00627fba  JMP 0x00627fc4
00627fbc  MOV EDX,dword ptr [EBP + 0x10]
00627fbf  MOV EAX,dword ptr [EDX]
00627fc1  MOV dword ptr [EBP + -0x4],EAX
00627fc4  MOV ECX,dword ptr [EBP + 0x8]
00627fc7  MOV EDX,dword ptr [EBP + -0x4]
00627fca  MOV dword ptr [ECX],EDX
00627fcc  MOV EAX,dword ptr [EBP + 0xc]
00627fcf  MOV ECX,dword ptr [EBP + 0x10]
00627fd2  MOV EDX,dword ptr [EAX + 0x8]
00627fd5  CMP EDX,dword ptr [ECX + 0x8]
00627fd8  JGE 0x00627fe5
00627fda  MOV EAX,dword ptr [EBP + 0xc]
00627fdd  MOV ECX,dword ptr [EAX + 0x8]
00627fe0  MOV dword ptr [EBP + -0x8],ECX
00627fe3  JMP 0x00627fee
00627fe5  MOV EDX,dword ptr [EBP + 0x10]
00627fe8  MOV EAX,dword ptr [EDX + 0x8]
00627feb  MOV dword ptr [EBP + -0x8],EAX
00627fee  MOV ECX,dword ptr [EBP + 0x8]
00627ff1  MOV EDX,dword ptr [EBP + -0x8]
00627ff4  MOV dword ptr [ECX + 0x8],EDX
00627ff7  MOV EAX,dword ptr [EBP + 0x8]
00627ffa  MOV ECX,dword ptr [EBP + 0x8]
00627ffd  MOV EDX,dword ptr [EAX]
00627fff  CMP EDX,dword ptr [ECX + 0x8]
00628002  JLE 0x00628018
00628004  PUSH 0x10
00628006  PUSH 0x0
00628008  MOV EAX,dword ptr [EBP + 0x8]
0062800b  PUSH EAX
0062800c  CALL 0x00686fa2
00628011  ADD ESP,0xc
00628014  XOR AL,AL
00628016  JMP 0x00628092
00628018  MOV ECX,dword ptr [EBP + 0xc]
0062801b  MOV EDX,dword ptr [EBP + 0x10]
0062801e  MOV EAX,dword ptr [ECX + 0x4]
00628021  CMP EAX,dword ptr [EDX + 0x4]
00628024  JLE 0x00628031
00628026  MOV ECX,dword ptr [EBP + 0xc]
00628029  MOV EDX,dword ptr [ECX + 0x4]
0062802c  MOV dword ptr [EBP + -0xc],EDX
0062802f  JMP 0x0062803a
00628031  MOV EAX,dword ptr [EBP + 0x10]
00628034  MOV ECX,dword ptr [EAX + 0x4]
00628037  MOV dword ptr [EBP + -0xc],ECX
0062803a  MOV EDX,dword ptr [EBP + 0x8]
0062803d  MOV EAX,dword ptr [EBP + -0xc]
00628040  MOV dword ptr [EDX + 0x4],EAX
00628043  MOV ECX,dword ptr [EBP + 0xc]
00628046  MOV EDX,dword ptr [EBP + 0x10]
00628049  MOV EAX,dword ptr [ECX + 0xc]
0062804c  CMP EAX,dword ptr [EDX + 0xc]
0062804f  JGE 0x0062805c
00628051  MOV ECX,dword ptr [EBP + 0xc]
00628054  MOV EDX,dword ptr [ECX + 0xc]
00628057  MOV dword ptr [EBP + -0x10],EDX
0062805a  JMP 0x00628065
0062805c  MOV EAX,dword ptr [EBP + 0x10]
0062805f  MOV ECX,dword ptr [EAX + 0xc]
00628062  MOV dword ptr [EBP + -0x10],ECX
00628065  MOV EDX,dword ptr [EBP + 0x8]
00628068  MOV EAX,dword ptr [EBP + -0x10]
0062806b  MOV dword ptr [EDX + 0xc],EAX
0062806e  MOV ECX,dword ptr [EBP + 0x8]
00628071  MOV EDX,dword ptr [EBP + 0x8]
00628074  MOV EAX,dword ptr [ECX + 0x4]
00628077  CMP EAX,dword ptr [EDX + 0xc]
0062807a  JLE 0x00628090
0062807c  PUSH 0x10
0062807e  PUSH 0x0
00628080  MOV ECX,dword ptr [EBP + 0x8]
00628083  PUSH ECX
00628084  CALL 0x00686fa2
00628089  ADD ESP,0xc
0062808c  XOR AL,AL
0062808e  JMP 0x00628092
00628090  MOV AL,0x1
00628092  MOV ESP,EBP
00628094  POP EBP
00628095  RET
