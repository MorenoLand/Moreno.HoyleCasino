; FUN_0059a960  0059a960
0059a960  PUSH EBP
0059a961  MOV EBP,ESP
0059a963  SUB ESP,0x18
0059a966  MOV dword ptr [EBP + -0x18],ECX
0059a969  MOV EAX,[0x007935cc]
0059a96e  MOV EDX,dword ptr [EAX]
0059a970  MOV ECX,dword ptr [0x007935cc]
0059a976  MOV EAX,dword ptr [EDX + 0x2b0]
0059a97c  CALL EAX
0059a97e  MOV dword ptr [EBP + -0x8],EAX
0059a981  MOV ECX,dword ptr [0x007935cc]
0059a987  MOV EDX,dword ptr [ECX]
0059a989  MOV ECX,dword ptr [0x007935cc]
0059a98f  MOV EAX,dword ptr [EDX + 0x2b4]
0059a995  CALL EAX
0059a997  MOV dword ptr [EBP + -0x4],EAX
0059a99a  MOV ECX,dword ptr [EBP + 0xc]
0059a99d  MOV EDX,dword ptr [ECX]
0059a99f  IMUL EDX,EDX,0x3
0059a9a2  MOV dword ptr [EBP + -0xc],EDX
0059a9a5  MOV EAX,dword ptr [EBP + -0xc]
0059a9a8  CDQ
0059a9a9  MOV ECX,0x5
0059a9ae  IDIV ECX
0059a9b0  TEST EDX,EDX
0059a9b2  JZ 0x0059a9cc
0059a9b4  MOV EAX,dword ptr [EBP + -0xc]
0059a9b7  CDQ
0059a9b8  MOV ECX,0x5
0059a9bd  IDIV ECX
0059a9bf  MOV EAX,0x5
0059a9c4  SUB EAX,EDX
0059a9c6  ADD EAX,dword ptr [EBP + -0xc]
0059a9c9  MOV dword ptr [EBP + -0xc],EAX
0059a9cc  MOV ECX,dword ptr [EBP + -0xc]
0059a9cf  CMP ECX,dword ptr [EBP + -0x8]
0059a9d2  JGE 0x0059a9dc
0059a9d4  MOV EDX,dword ptr [EBP + -0x8]
0059a9d7  MOV dword ptr [EBP + -0xc],EDX
0059a9da  JMP 0x0059a9ea
0059a9dc  MOV EAX,dword ptr [EBP + -0xc]
0059a9df  CMP EAX,dword ptr [EBP + -0x4]
0059a9e2  JLE 0x0059a9ea
0059a9e4  MOV ECX,dword ptr [EBP + -0x4]
0059a9e7  MOV dword ptr [EBP + -0xc],ECX
0059a9ea  MOV EDX,dword ptr [EBP + -0xc]
0059a9ed  PUSH EDX
0059a9ee  MOV EAX,dword ptr [EBP + 0x8]
0059a9f1  PUSH EAX
0059a9f2  MOV ECX,dword ptr [EBP + -0x18]
0059a9f5  CALL 0x0059a6c0
0059a9fa  MOVZX ECX,AL
0059a9fd  TEST ECX,ECX
0059a9ff  JNZ 0x0059aa0c
0059aa01  MOV EDX,dword ptr [EBP + -0xc]
0059aa04  SUB EDX,0x5
0059aa07  MOV dword ptr [EBP + -0xc],EDX
0059aa0a  JMP 0x0059a9ea
0059aa0c  MOV EAX,dword ptr [EBP + -0xc]
0059aa0f  CMP EAX,dword ptr [EBP + -0x8]
0059aa12  JGE 0x0059aa1b
0059aa14  MOV dword ptr [EBP + -0xc],0x0
0059aa1b  MOV ECX,dword ptr [EBP + -0xc]
0059aa1e  CMP ECX,dword ptr [EBP + -0x4]
0059aa21  JLE 0x0059aa37
0059aa23  PUSH 0x73
0059aa25  PUSH 0x6cebe4
0059aa2a  PUSH 0x6c59b4
0059aa2f  CALL 0x005e9f20
0059aa34  ADD ESP,0xc
0059aa37  PUSH 0x0
0059aa39  MOV EAX,dword ptr [EBP + -0xc]
0059aa3c  PUSH EAX
0059aa3d  CALL 0x0064c8a0
0059aa42  ADD ESP,0x8
0059aa45  MOV dword ptr [EBP + -0x14],EAX
0059aa48  MOV dword ptr [EBP + -0x10],EDX
0059aa4b  MOV ECX,dword ptr [EBP + 0x10]
0059aa4e  MOV EDX,dword ptr [EBP + -0x14]
0059aa51  MOV dword ptr [ECX],EDX
0059aa53  MOV EAX,dword ptr [EBP + -0x10]
0059aa56  MOV dword ptr [ECX + 0x4],EAX
0059aa59  MOV ESP,EBP
0059aa5b  POP EBP
0059aa5c  RET 0xc
