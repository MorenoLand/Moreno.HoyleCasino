; FUN_0043d410  0043d410
0043d410  PUSH EBP
0043d411  MOV EBP,ESP
0043d413  SUB ESP,0x24
0043d416  MOV dword ptr [EBP + -0x20],ECX
0043d419  MOV ECX,dword ptr [EBP + -0x20]
0043d41c  CALL 0x0043d350
0043d421  MOVZX EAX,AL
0043d424  TEST EAX,EAX
0043d426  JNZ 0x0043d42d
0043d428  JMP 0x0043d528
0043d42d  MOV ECX,dword ptr [EBP + -0x20]
0043d430  MOV byte ptr [ECX + 0x188],0x1
0043d437  MOV EDX,dword ptr [EBP + 0x8]
0043d43a  MOV dword ptr [EBP + -0x8],EDX
0043d43d  MOV dword ptr [EBP + -0x4],0x0
0043d444  JMP 0x0043d44f
0043d446  MOV EAX,dword ptr [EBP + -0x4]
0043d449  ADD EAX,0x1
0043d44c  MOV dword ptr [EBP + -0x4],EAX
0043d44f  CMP dword ptr [EBP + -0x4],0x5
0043d453  JGE 0x0043d4b1
0043d455  MOV ECX,dword ptr [EBP + -0x4]
0043d458  MOV dword ptr [EBP + ECX*0x4 + -0x1c],0x0
0043d460  MOV EDX,dword ptr [EBP + -0x4]
0043d463  MOV dword ptr [EBP + -0x24],EDX
0043d466  CMP dword ptr [EBP + -0x24],0x4
0043d46a  JA 0x0043d49c
0043d46c  MOV EAX,dword ptr [EBP + -0x24]
0043d46f  JMP dword ptr [EAX*0x4 + 0x43d530]
0043d476  MOV ECX,dword ptr [EBP + 0x8]
0043d479  MOV dword ptr [EBP + -0x8],ECX
0043d47c  JMP 0x0043d49c
0043d47e  MOV EDX,dword ptr [EBP + 0xc]
0043d481  MOV dword ptr [EBP + -0x8],EDX
0043d484  JMP 0x0043d49c
0043d486  MOV EAX,dword ptr [EBP + 0x10]
0043d489  MOV dword ptr [EBP + -0x8],EAX
0043d48c  JMP 0x0043d49c
0043d48e  MOV ECX,dword ptr [EBP + 0x14]
0043d491  MOV dword ptr [EBP + -0x8],ECX
0043d494  JMP 0x0043d49c
0043d496  MOV EDX,dword ptr [EBP + 0x18]
0043d499  MOV dword ptr [EBP + -0x8],EDX
0043d49c  MOV EAX,dword ptr [EBP + -0x8]
0043d49f  PUSH EAX
0043d4a0  MOV ECX,dword ptr [EBP + -0x20]
0043d4a3  CALL 0x0043d9b0
0043d4a8  MOV ECX,dword ptr [EBP + -0x4]
0043d4ab  MOV dword ptr [EBP + ECX*0x4 + -0x1c],EAX
0043d4af  JMP 0x0043d446
0043d4b1  PUSH -0x1
0043d4b3  MOV EDX,dword ptr [EBP + -0x20]
0043d4b6  MOV EAX,dword ptr [EDX + 0x1cc]
0043d4bc  PUSH EAX
0043d4bd  MOV ECX,dword ptr [EBP + -0xc]
0043d4c0  PUSH ECX
0043d4c1  MOV EDX,dword ptr [EBP + -0x20]
0043d4c4  MOV EAX,dword ptr [EDX + 0x1c8]
0043d4ca  PUSH EAX
0043d4cb  MOV ECX,dword ptr [EBP + -0x10]
0043d4ce  PUSH ECX
0043d4cf  MOV EDX,dword ptr [EBP + -0x20]
0043d4d2  MOV EAX,dword ptr [EDX + 0x1c4]
0043d4d8  PUSH EAX
0043d4d9  MOV ECX,dword ptr [EBP + -0x14]
0043d4dc  PUSH ECX
0043d4dd  MOV EDX,dword ptr [EBP + -0x20]
0043d4e0  MOV EAX,dword ptr [EDX + 0x1c0]
0043d4e6  PUSH EAX
0043d4e7  MOV ECX,dword ptr [EBP + -0x18]
0043d4ea  PUSH ECX
0043d4eb  MOV EDX,dword ptr [EBP + -0x20]
0043d4ee  MOV EAX,dword ptr [EDX + 0x1bc]
0043d4f4  PUSH EAX
0043d4f5  MOV ECX,dword ptr [EBP + -0x1c]
0043d4f8  PUSH ECX
0043d4f9  MOV EDX,dword ptr [EBP + -0x20]
0043d4fc  MOV EAX,dword ptr [EDX + 0x17c]
0043d502  PUSH EAX
0043d503  CALL 0x0043f1b0
0043d508  ADD ESP,0x30
0043d50b  PUSH 0x0
0043d50d  PUSH 0x5
0043d50f  MOV ECX,dword ptr [EBP + -0x20]
0043d512  MOV EDX,dword ptr [ECX + 0x17c]
0043d518  MOV EAX,dword ptr [EBP + -0x20]
0043d51b  MOV ECX,dword ptr [EAX + 0x17c]
0043d521  MOV EDX,dword ptr [EDX]
0043d523  MOV EAX,dword ptr [EDX + 0x8]
0043d526  CALL EAX
0043d528  MOV ESP,EBP
0043d52a  POP EBP
0043d52b  RET 0x14
