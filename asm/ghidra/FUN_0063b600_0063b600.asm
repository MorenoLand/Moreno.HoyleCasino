; FUN_0063b600  0063b600
0063b600  PUSH EBP
0063b601  MOV EBP,ESP
0063b603  PUSH -0x1
0063b605  PUSH 0x6abb98
0063b60a  MOV EAX,FS:[0x0]
0063b610  PUSH EAX
0063b611  SUB ESP,0xc
0063b614  MOV EAX,[0x00781870]
0063b619  XOR EAX,EBP
0063b61b  PUSH EAX
0063b61c  LEA EAX,[EBP + -0xc]
0063b61f  MOV FS:[0x0],EAX
0063b625  MOV dword ptr [EBP + -0x18],ECX
0063b628  PUSH 0x0
0063b62a  PUSH 0x1
0063b62c  MOV ECX,dword ptr [EBP + -0x18]
0063b62f  CALL 0x005f71f0
0063b634  MOV dword ptr [EBP + -0x4],0x0
0063b63b  MOV EAX,dword ptr [EBP + -0x18]
0063b63e  MOV dword ptr [EAX],0x6db7ac
0063b644  PUSH 0x0
0063b646  PUSH 0x30d4dd
0063b64b  MOV ECX,dword ptr [EBP + -0x18]
0063b64e  CALL 0x005f83d0
0063b653  MOV ECX,dword ptr [EBP + -0x18]
0063b656  MOV byte ptr [ECX + 0x1b8],0x1
0063b65d  MOV ECX,dword ptr [0x0162ee84]
0063b663  CALL 0x00636e70
0063b668  PUSH -0x1
0063b66a  MOV EDX,dword ptr [EBP + -0x18]
0063b66d  ADD EDX,0x1cc
0063b673  PUSH EDX
0063b674  MOV ECX,dword ptr [0x0162ee84]
0063b67a  CALL 0x005f3bf0
0063b67f  PUSH EAX
0063b680  MOV EAX,[0x0162ee84]
0063b685  MOV EDX,dword ptr [EAX]
0063b687  MOV ECX,dword ptr [0x0162ee84]
0063b68d  MOV EAX,dword ptr [EDX + 0x364]
0063b693  CALL EAX
0063b695  MOV ECX,dword ptr [0x0162ee84]
0063b69b  MOV EDX,dword ptr [ECX]
0063b69d  MOV ECX,dword ptr [0x0162ee84]
0063b6a3  MOV EAX,dword ptr [EDX + 0x10c]
0063b6a9  CALL EAX
0063b6ab  XOR ECX,ECX
0063b6ad  MOV EDX,0x4
0063b6b2  MUL EDX
0063b6b4  SETO CL
0063b6b7  NEG ECX
0063b6b9  OR ECX,EAX
0063b6bb  PUSH ECX
0063b6bc  CALL 0x00686d82
0063b6c1  ADD ESP,0x4
0063b6c4  MOV dword ptr [EBP + -0x14],EAX
0063b6c7  MOV EAX,dword ptr [EBP + -0x18]
0063b6ca  MOV ECX,dword ptr [EBP + -0x14]
0063b6cd  MOV dword ptr [EAX + 0x1bc],ECX
0063b6d3  MOV EDX,dword ptr [EBP + -0x18]
0063b6d6  MOV dword ptr [EDX + 0x1c0],0x0
0063b6e0  MOV dword ptr [EBP + -0x10],0x0
0063b6e7  JMP 0x0063b6f2
0063b6e9  MOV EAX,dword ptr [EBP + -0x10]
0063b6ec  ADD EAX,0x1
0063b6ef  MOV dword ptr [EBP + -0x10],EAX
0063b6f2  MOV ECX,dword ptr [0x0162ee84]
0063b6f8  MOV EDX,dword ptr [ECX]
0063b6fa  MOV ECX,dword ptr [0x0162ee84]
0063b700  MOV EAX,dword ptr [EDX + 0x10c]
0063b706  CALL EAX
0063b708  CMP dword ptr [EBP + -0x10],EAX
0063b70b  JGE 0x0063b7ab
0063b711  MOV ECX,dword ptr [0x0162ee84]
0063b717  MOV EDX,dword ptr [ECX]
0063b719  MOV ECX,dword ptr [0x0162ee84]
0063b71f  MOV EAX,dword ptr [EDX + 0x31c]
0063b725  CALL EAX
0063b727  MOV ECX,dword ptr [EBP + -0x18]
0063b72a  MOV EDX,dword ptr [ECX + 0x1bc]
0063b730  MOV ECX,dword ptr [EBP + -0x10]
0063b733  MOV dword ptr [EDX + ECX*0x4],EAX
0063b736  MOV EDX,dword ptr [0x0162ee84]
0063b73c  MOV EAX,dword ptr [EDX + 0x58]
0063b73f  MOV ECX,dword ptr [EBP + -0x10]
0063b742  MOV EDX,dword ptr [EAX + ECX*0x4]
0063b745  PUSH EDX
0063b746  MOV EAX,dword ptr [EBP + -0x18]
0063b749  MOV ECX,dword ptr [EAX + 0x1bc]
0063b74f  MOV EDX,dword ptr [EBP + -0x10]
0063b752  MOV EAX,dword ptr [ECX + EDX*0x4]
0063b755  PUSH EAX
0063b756  MOV ECX,dword ptr [0x0162ee80]
0063b75c  MOV EDX,dword ptr [ECX]
0063b75e  MOV ECX,dword ptr [0x0162ee80]
0063b764  MOV EAX,dword ptr [EDX + 0x154]
0063b76a  CALL EAX
0063b76c  MOV ECX,dword ptr [EBP + -0x18]
0063b76f  MOV EDX,dword ptr [ECX + 0x1bc]
0063b775  MOV EAX,dword ptr [EBP + -0x10]
0063b778  MOV ECX,dword ptr [EDX + EAX*0x4]
0063b77b  MOV dword ptr [ECX + 0x20],0x0
0063b782  MOV EDX,dword ptr [0x0162ee84]
0063b788  MOV EAX,dword ptr [EDX + 0x58]
0063b78b  MOV ECX,dword ptr [EBP + -0x10]
0063b78e  MOV EDX,dword ptr [EAX + ECX*0x4]
0063b791  MOV EAX,dword ptr [EBP + -0x18]
0063b794  MOV ECX,dword ptr [EAX + 0x1bc]
0063b79a  MOV EAX,dword ptr [EBP + -0x10]
0063b79d  MOV ECX,dword ptr [ECX + EAX*0x4]
0063b7a0  MOV EDX,dword ptr [EDX + 0xc]
0063b7a3  MOV dword ptr [ECX + 0xc],EDX
0063b7a6  JMP 0x0063b6e9
0063b7ab  MOV EAX,dword ptr [EBP + -0x18]
0063b7ae  MOV dword ptr [EAX + 0x1e8],0x0
0063b7b8  MOV ECX,dword ptr [EBP + -0x18]
0063b7bb  MOV dword ptr [ECX + 0x1c8],0x0
0063b7c5  MOV dword ptr [EBP + -0x4],0xffffffff
0063b7cc  MOV EAX,dword ptr [EBP + -0x18]
0063b7cf  MOV ECX,dword ptr [EBP + -0xc]
0063b7d2  MOV dword ptr FS:[0x0],ECX
0063b7d9  POP ECX
0063b7da  MOV ESP,EBP
0063b7dc  POP EBP
0063b7dd  RET
