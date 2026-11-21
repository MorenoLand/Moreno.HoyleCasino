; FUN_0044c6d0  0044c6d0
0044c6d0  PUSH EBP
0044c6d1  MOV EBP,ESP
0044c6d3  PUSH -0x1
0044c6d5  PUSH 0x69ef08
0044c6da  MOV EAX,FS:[0x0]
0044c6e0  PUSH EAX
0044c6e1  SUB ESP,0x20
0044c6e4  MOV EAX,[0x00781870]
0044c6e9  XOR EAX,EBP
0044c6eb  PUSH EAX
0044c6ec  LEA EAX,[EBP + -0xc]
0044c6ef  MOV FS:[0x0],EAX
0044c6f5  MOV dword ptr [EBP + -0x24],ECX
0044c6f8  MOV EAX,dword ptr [EBP + -0x24]
0044c6fb  MOV dword ptr [EAX],0x6b9328
0044c701  MOV dword ptr [EBP + -0x4],0x0
0044c708  MOV ECX,dword ptr [EBP + -0x24]
0044c70b  MOV EDX,dword ptr [ECX + 0x4]
0044c70e  MOV dword ptr [EBP + -0x18],EDX
0044c711  MOV EAX,dword ptr [EBP + -0x18]
0044c714  MOV dword ptr [EBP + -0x14],EAX
0044c717  CMP dword ptr [EBP + -0x14],0x0
0044c71b  JZ 0x0044c730
0044c71d  PUSH 0x1
0044c71f  MOV ECX,dword ptr [EBP + -0x14]
0044c722  MOV EDX,dword ptr [ECX]
0044c724  MOV ECX,dword ptr [EBP + -0x14]
0044c727  MOV EAX,dword ptr [EDX]
0044c729  CALL EAX
0044c72b  MOV dword ptr [EBP + -0x28],EAX
0044c72e  JMP 0x0044c737
0044c730  MOV dword ptr [EBP + -0x28],0x0
0044c737  MOV dword ptr [EBP + -0x10],0x0
0044c73e  JMP 0x0044c749
0044c740  MOV ECX,dword ptr [EBP + -0x10]
0044c743  ADD ECX,0x1
0044c746  MOV dword ptr [EBP + -0x10],ECX
0044c749  CMP dword ptr [EBP + -0x10],0xc
0044c74d  JGE 0x0044c784
0044c74f  MOV EDX,dword ptr [EBP + -0x10]
0044c752  MOV EAX,dword ptr [EBP + -0x24]
0044c755  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x8]
0044c759  MOV dword ptr [EBP + -0x20],ECX
0044c75c  MOV EDX,dword ptr [EBP + -0x20]
0044c75f  MOV dword ptr [EBP + -0x1c],EDX
0044c762  CMP dword ptr [EBP + -0x1c],0x0
0044c766  JZ 0x0044c77b
0044c768  PUSH 0x1
0044c76a  MOV EAX,dword ptr [EBP + -0x1c]
0044c76d  MOV EDX,dword ptr [EAX]
0044c76f  MOV ECX,dword ptr [EBP + -0x1c]
0044c772  MOV EAX,dword ptr [EDX]
0044c774  CALL EAX
0044c776  MOV dword ptr [EBP + -0x2c],EAX
0044c779  JMP 0x0044c782
0044c77b  MOV dword ptr [EBP + -0x2c],0x0
0044c782  JMP 0x0044c740
0044c784  MOV dword ptr [EBP + -0x4],0xffffffff
0044c78b  MOV ECX,dword ptr [EBP + -0x24]
0044c78e  CALL 0x005e9e40
0044c793  MOV ECX,dword ptr [EBP + -0xc]
0044c796  MOV dword ptr FS:[0x0],ECX
0044c79d  POP ECX
0044c79e  MOV ESP,EBP
0044c7a0  POP EBP
0044c7a1  RET
