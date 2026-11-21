; FUN_005ad0a0  005ad0a0
005ad0a0  PUSH EBP
005ad0a1  MOV EBP,ESP
005ad0a3  PUSH -0x1
005ad0a5  PUSH 0x6a7c8b
005ad0aa  MOV EAX,FS:[0x0]
005ad0b0  PUSH EAX
005ad0b1  SUB ESP,0x1c
005ad0b4  MOV EAX,[0x00781870]
005ad0b9  XOR EAX,EBP
005ad0bb  PUSH EAX
005ad0bc  LEA EAX,[EBP + -0xc]
005ad0bf  MOV FS:[0x0],EAX
005ad0c5  MOV dword ptr [EBP + -0x24],ECX
005ad0c8  MOV ECX,dword ptr [0x0162ee80]
005ad0ce  CALL 0x005f2870
005ad0d3  MOV dword ptr [EBP + -0x10],0x0
005ad0da  JMP 0x005ad0e5
005ad0dc  MOV EAX,dword ptr [EBP + -0x10]
005ad0df  ADD EAX,0x1
005ad0e2  MOV dword ptr [EBP + -0x10],EAX
005ad0e5  CMP dword ptr [EBP + -0x10],0x4
005ad0e9  JGE 0x005ad11a
005ad0eb  PUSH 0x0
005ad0ed  PUSH 0x0
005ad0ef  CALL 0x0064c8a0
005ad0f4  ADD ESP,0x8
005ad0f7  MOV dword ptr [EBP + -0x18],EAX
005ad0fa  MOV dword ptr [EBP + -0x14],EDX
005ad0fd  MOV ECX,dword ptr [EBP + -0x14]
005ad100  PUSH ECX
005ad101  MOV EDX,dword ptr [EBP + -0x18]
005ad104  PUSH EDX
005ad105  MOV EAX,dword ptr [EBP + -0x10]
005ad108  PUSH EAX
005ad109  CALL 0x005dcb00
005ad10e  ADD ESP,0x4
005ad111  MOV ECX,EAX
005ad113  CALL 0x005d6050
005ad118  JMP 0x005ad0dc
005ad11a  MOV ECX,dword ptr [0x00793604]
005ad120  CALL 0x005b6740
005ad125  MOVZX ECX,AL
005ad128  TEST ECX,ECX
005ad12a  JZ 0x005ad190
005ad12c  MOV ECX,dword ptr [0x00793604]
005ad132  CALL 0x005b7ef0
005ad137  PUSH 0x1
005ad139  MOV EDX,dword ptr [0x00793600]
005ad13f  MOV EAX,dword ptr [EDX + 0x4]
005ad142  MOV ECX,dword ptr [0x00793600]
005ad148  MOV ECX,dword ptr [ECX + 0x4]
005ad14b  MOV EDX,dword ptr [EAX]
005ad14d  MOV EAX,dword ptr [EDX + 0x4]
005ad150  CALL EAX
005ad152  PUSH 0x0
005ad154  PUSH ECX
005ad155  FLD float ptr [0x006b3654]
005ad15b  FSTP float ptr [ESP]
005ad15e  PUSH ECX
005ad15f  FLD1
005ad161  FSTP float ptr [ESP]
005ad164  PUSH 0x1
005ad166  PUSH 0x5
005ad168  PUSH 0x0
005ad16a  MOV ECX,dword ptr [0x00793600]
005ad170  MOV EDX,dword ptr [ECX + 0x4]
005ad173  PUSH EDX
005ad174  PUSH 0xfb3
005ad179  MOV EAX,[0x0162ee84]
005ad17e  MOV EDX,dword ptr [EAX]
005ad180  MOV ECX,dword ptr [0x0162ee84]
005ad186  MOV EAX,dword ptr [EDX + 0x80]
005ad18c  CALL EAX
005ad18e  JMP 0x005ad1da
005ad190  PUSH 0x28
005ad192  CALL 0x00686d82
005ad197  ADD ESP,0x4
005ad19a  MOV dword ptr [EBP + -0x20],EAX
005ad19d  MOV dword ptr [EBP + -0x4],0x0
005ad1a4  CMP dword ptr [EBP + -0x20],0x0
005ad1a8  JZ 0x005ad1b7
005ad1aa  MOV ECX,dword ptr [EBP + -0x20]
005ad1ad  CALL 0x005aa980
005ad1b2  MOV dword ptr [EBP + -0x28],EAX
005ad1b5  JMP 0x005ad1be
005ad1b7  MOV dword ptr [EBP + -0x28],0x0
005ad1be  MOV ECX,dword ptr [EBP + -0x28]
005ad1c1  MOV dword ptr [EBP + -0x1c],ECX
005ad1c4  MOV dword ptr [EBP + -0x4],0xffffffff
005ad1cb  MOV EDX,dword ptr [EBP + -0x1c]
005ad1ce  PUSH EDX
005ad1cf  MOV ECX,dword ptr [0x00793600]
005ad1d5  CALL 0x005da390
005ad1da  MOV ECX,dword ptr [EBP + -0xc]
005ad1dd  MOV dword ptr FS:[0x0],ECX
005ad1e4  POP ECX
005ad1e5  MOV ESP,EBP
005ad1e7  POP EBP
005ad1e8  RET
