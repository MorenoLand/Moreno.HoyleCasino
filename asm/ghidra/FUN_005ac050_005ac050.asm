; FUN_005ac050  005ac050
005ac050  PUSH EBP
005ac051  MOV EBP,ESP
005ac053  PUSH -0x1
005ac055  PUSH 0x6a7c25
005ac05a  MOV EAX,FS:[0x0]
005ac060  PUSH EAX
005ac061  SUB ESP,0x34
005ac064  MOV EAX,[0x00781870]
005ac069  XOR EAX,EBP
005ac06b  PUSH EAX
005ac06c  LEA EAX,[EBP + -0xc]
005ac06f  MOV FS:[0x0],EAX
005ac075  MOV dword ptr [EBP + -0x34],ECX
005ac078  MOV EAX,dword ptr [EBP + -0x34]
005ac07b  MOV dword ptr [EAX],0x6cfe54
005ac081  MOV dword ptr [EBP + -0x4],0x0
005ac088  MOV dword ptr [EBP + -0x10],0x0
005ac08f  JMP 0x005ac09a
005ac091  MOV ECX,dword ptr [EBP + -0x10]
005ac094  ADD ECX,0x1
005ac097  MOV dword ptr [EBP + -0x10],ECX
005ac09a  CMP dword ptr [EBP + -0x10],0x4
005ac09e  JGE 0x005ac0f8
005ac0a0  MOV dword ptr [EBP + -0x14],0x0
005ac0a7  JMP 0x005ac0b2
005ac0a9  MOV EDX,dword ptr [EBP + -0x14]
005ac0ac  ADD EDX,0x1
005ac0af  MOV dword ptr [EBP + -0x14],EDX
005ac0b2  CMP dword ptr [EBP + -0x14],0x16
005ac0b6  JGE 0x005ac0f6
005ac0b8  MOV EAX,dword ptr [EBP + -0x10]
005ac0bb  IMUL EAX,EAX,0x58
005ac0be  MOV ECX,dword ptr [EBP + -0x34]
005ac0c1  LEA EDX,[ECX + EAX*0x1 + 0x28]
005ac0c5  MOV EAX,dword ptr [EBP + -0x14]
005ac0c8  MOV ECX,dword ptr [EDX + EAX*0x4]
005ac0cb  MOV dword ptr [EBP + -0x20],ECX
005ac0ce  MOV EDX,dword ptr [EBP + -0x20]
005ac0d1  MOV dword ptr [EBP + -0x1c],EDX
005ac0d4  CMP dword ptr [EBP + -0x1c],0x0
005ac0d8  JZ 0x005ac0ed
005ac0da  PUSH 0x1
005ac0dc  MOV EAX,dword ptr [EBP + -0x1c]
005ac0df  MOV EDX,dword ptr [EAX]
005ac0e1  MOV ECX,dword ptr [EBP + -0x1c]
005ac0e4  MOV EAX,dword ptr [EDX]
005ac0e6  CALL EAX
005ac0e8  MOV dword ptr [EBP + -0x38],EAX
005ac0eb  JMP 0x005ac0f4
005ac0ed  MOV dword ptr [EBP + -0x38],0x0
005ac0f4  JMP 0x005ac0a9
005ac0f6  JMP 0x005ac091
005ac0f8  MOV dword ptr [EBP + -0x18],0x0
005ac0ff  JMP 0x005ac10a
005ac101  MOV ECX,dword ptr [EBP + -0x18]
005ac104  ADD ECX,0x1
005ac107  MOV dword ptr [EBP + -0x18],ECX
005ac10a  CMP dword ptr [EBP + -0x18],0x4
005ac10e  JGE 0x005ac178
005ac110  MOV EDX,dword ptr [EBP + -0x18]
005ac113  MOV EAX,dword ptr [EBP + -0x34]
005ac116  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x8]
005ac11a  MOV dword ptr [EBP + -0x28],ECX
005ac11d  MOV EDX,dword ptr [EBP + -0x28]
005ac120  MOV dword ptr [EBP + -0x24],EDX
005ac123  CMP dword ptr [EBP + -0x24],0x0
005ac127  JZ 0x005ac13c
005ac129  PUSH 0x1
005ac12b  MOV EAX,dword ptr [EBP + -0x24]
005ac12e  MOV EDX,dword ptr [EAX]
005ac130  MOV ECX,dword ptr [EBP + -0x24]
005ac133  MOV EAX,dword ptr [EDX]
005ac135  CALL EAX
005ac137  MOV dword ptr [EBP + -0x3c],EAX
005ac13a  JMP 0x005ac143
005ac13c  MOV dword ptr [EBP + -0x3c],0x0
005ac143  MOV ECX,dword ptr [EBP + -0x18]
005ac146  MOV EDX,dword ptr [EBP + -0x34]
005ac149  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x18]
005ac14d  MOV dword ptr [EBP + -0x30],EAX
005ac150  MOV ECX,dword ptr [EBP + -0x30]
005ac153  MOV dword ptr [EBP + -0x2c],ECX
005ac156  CMP dword ptr [EBP + -0x2c],0x0
005ac15a  JZ 0x005ac16f
005ac15c  PUSH 0x1
005ac15e  MOV EDX,dword ptr [EBP + -0x2c]
005ac161  MOV EAX,dword ptr [EDX]
005ac163  MOV ECX,dword ptr [EBP + -0x2c]
005ac166  MOV EDX,dword ptr [EAX]
005ac168  CALL EDX
005ac16a  MOV dword ptr [EBP + -0x40],EAX
005ac16d  JMP 0x005ac176
005ac16f  MOV dword ptr [EBP + -0x40],0x0
005ac176  JMP 0x005ac101
005ac178  MOV dword ptr [EBP + -0x4],0xffffffff
005ac17f  MOV ECX,dword ptr [EBP + -0x34]
005ac182  CALL 0x005e9e40
005ac187  MOV ECX,dword ptr [EBP + -0xc]
005ac18a  MOV dword ptr FS:[0x0],ECX
005ac191  POP ECX
005ac192  MOV ESP,EBP
005ac194  POP EBP
005ac195  RET
