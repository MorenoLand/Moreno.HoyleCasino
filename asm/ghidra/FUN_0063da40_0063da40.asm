; FUN_0063da40  0063da40
0063da40  PUSH EBP
0063da41  MOV EBP,ESP
0063da43  PUSH -0x1
0063da45  PUSH 0x6abc82
0063da4a  MOV EAX,FS:[0x0]
0063da50  PUSH EAX
0063da51  SUB ESP,0x14
0063da54  MOV EAX,[0x00781870]
0063da59  XOR EAX,EBP
0063da5b  PUSH EAX
0063da5c  LEA EAX,[EBP + -0xc]
0063da5f  MOV FS:[0x0],EAX
0063da65  MOV dword ptr [EBP + -0x1c],ECX
0063da68  MOV EAX,dword ptr [EBP + -0x1c]
0063da6b  CMP dword ptr [EAX + 0x1e8],0x0
0063da72  JNZ 0x0063db06
0063da78  PUSH 0x56c
0063da7d  CALL 0x00686d82
0063da82  ADD ESP,0x4
0063da85  MOV dword ptr [EBP + -0x14],EAX
0063da88  MOV dword ptr [EBP + -0x4],0x0
0063da8f  CMP dword ptr [EBP + -0x14],0x0
0063da93  JZ 0x0063dabb
0063da95  MOV ECX,dword ptr [EBP + -0x1c]
0063da98  MOV EDX,dword ptr [ECX + 0x1bc]
0063da9e  MOV EAX,dword ptr [EBP + 0x8]
0063daa1  MOV ECX,dword ptr [EDX + EAX*0x4]
0063daa4  MOV EDX,dword ptr [ECX + 0x8]
0063daa7  MOV dword ptr [EBP + -0x18],EDX
0063daaa  MOV EAX,dword ptr [EBP + -0x18]
0063daad  PUSH EAX
0063daae  MOV ECX,dword ptr [EBP + -0x14]
0063dab1  CALL 0x0063fe70
0063dab6  MOV dword ptr [EBP + -0x20],EAX
0063dab9  JMP 0x0063dac2
0063dabb  MOV dword ptr [EBP + -0x20],0x0
0063dac2  MOV ECX,dword ptr [EBP + -0x20]
0063dac5  MOV dword ptr [EBP + -0x10],ECX
0063dac8  MOV dword ptr [EBP + -0x4],0xffffffff
0063dacf  MOV EDX,dword ptr [EBP + -0x1c]
0063dad2  MOV EAX,dword ptr [EBP + -0x10]
0063dad5  MOV dword ptr [EDX + 0x1e8],EAX
0063dadb  MOV ECX,dword ptr [EBP + -0x1c]
0063dade  MOV EDX,dword ptr [ECX + 0x1e8]
0063dae4  MOV EAX,dword ptr [EBP + -0x1c]
0063dae7  MOV ECX,dword ptr [EAX + 0x1e8]
0063daed  MOV EDX,dword ptr [EDX]
0063daef  MOV EAX,dword ptr [EDX + 0x3c]
0063daf2  CALL EAX
0063daf4  PUSH 0x0
0063daf6  PUSH 0x0
0063daf8  MOV ECX,dword ptr [EBP + -0x1c]
0063dafb  MOV ECX,dword ptr [ECX + 0x1e8]
0063db01  CALL 0x005f7340
0063db06  MOV EDX,dword ptr [EBP + -0x1c]
0063db09  MOV ECX,dword ptr [EDX + 0x1e8]
0063db0f  CALL 0x005f85d0
0063db14  MOV ECX,dword ptr [EBP + -0xc]
0063db17  MOV dword ptr FS:[0x0],ECX
0063db1e  POP ECX
0063db1f  MOV ESP,EBP
0063db21  POP EBP
0063db22  RET 0x4
