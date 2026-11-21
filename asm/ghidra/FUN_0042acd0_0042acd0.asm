; FUN_0042acd0  0042acd0
0042acd0  PUSH EBP
0042acd1  MOV EBP,ESP
0042acd3  SUB ESP,0x14
0042acd6  MOV dword ptr [EBP + -0x14],ECX
0042acd9  MOV dword ptr [EBP + -0x8],0x0
0042ace0  JMP 0x0042aceb
0042ace2  MOV EAX,dword ptr [EBP + -0x8]
0042ace5  ADD EAX,0x1
0042ace8  MOV dword ptr [EBP + -0x8],EAX
0042aceb  CMP dword ptr [EBP + -0x8],0x4c
0042acef  JGE 0x0042ad7b
0042acf5  MOV dword ptr [EBP + -0xc],0x0
0042acfc  JMP 0x0042ad07
0042acfe  MOV ECX,dword ptr [EBP + -0xc]
0042ad01  ADD ECX,0x1
0042ad04  MOV dword ptr [EBP + -0xc],ECX
0042ad07  CMP dword ptr [EBP + -0xc],0x4
0042ad0b  JGE 0x0042ad76
0042ad0d  MOV dword ptr [EBP + -0x10],0x0
0042ad14  JMP 0x0042ad1f
0042ad16  MOV EDX,dword ptr [EBP + -0x10]
0042ad19  ADD EDX,0x1
0042ad1c  MOV dword ptr [EBP + -0x10],EDX
0042ad1f  PUSH 0x0
0042ad21  MOV EAX,dword ptr [EBP + -0xc]
0042ad24  PUSH EAX
0042ad25  MOV ECX,dword ptr [EBP + -0x8]
0042ad28  MOV EDX,dword ptr [EBP + -0x14]
0042ad2b  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x14]
0042ad2f  CALL 0x005ccdf0
0042ad34  CMP dword ptr [EBP + -0x10],EAX
0042ad37  JG 0x0042ad74
0042ad39  MOV EAX,dword ptr [EBP + -0x8]
0042ad3c  MOV ECX,dword ptr [EBP + -0x14]
0042ad3f  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x14]
0042ad43  MOV EAX,dword ptr [EBP + -0xc]
0042ad46  IMUL EAX,EAX,0x1e0
0042ad4c  LEA ECX,[EDX + EAX*0x1 + 0x17c]
0042ad53  MOV EDX,dword ptr [EBP + -0x10]
0042ad56  MOV EAX,dword ptr [ECX + EDX*0x4]
0042ad59  MOV dword ptr [EBP + -0x4],EAX
0042ad5c  CMP dword ptr [EBP + -0x4],0x0
0042ad60  JZ 0x0042ad72
0042ad62  MOV ECX,dword ptr [EBP + -0x4]
0042ad65  CALL 0x005f60e0
0042ad6a  TEST EAX,EAX
0042ad6c  JZ 0x0042ad72
0042ad6e  MOV AL,0x1
0042ad70  JMP 0x0042ad7d
0042ad72  JMP 0x0042ad16
0042ad74  JMP 0x0042acfe
0042ad76  JMP 0x0042ace2
0042ad7b  XOR AL,AL
0042ad7d  MOV ESP,EBP
0042ad7f  POP EBP
0042ad80  RET
