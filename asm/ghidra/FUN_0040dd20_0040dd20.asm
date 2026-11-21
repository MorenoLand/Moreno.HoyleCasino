; FUN_0040dd20  0040dd20
0040dd20  PUSH EBP
0040dd21  MOV EBP,ESP
0040dd23  PUSH -0x1
0040dd25  PUSH 0x69da78
0040dd2a  MOV EAX,FS:[0x0]
0040dd30  PUSH EAX
0040dd31  SUB ESP,0x30
0040dd34  MOV EAX,[0x00781870]
0040dd39  XOR EAX,EBP
0040dd3b  PUSH EAX
0040dd3c  LEA EAX,[EBP + -0xc]
0040dd3f  MOV FS:[0x0],EAX
0040dd45  MOV dword ptr [EBP + -0x30],ECX
0040dd48  MOV EAX,dword ptr [EBP + -0x30]
0040dd4b  MOV dword ptr [EAX],0x6b38ec
0040dd51  MOV dword ptr [EBP + -0x4],0x0
0040dd58  MOV dword ptr [EBP + -0x10],0x0
0040dd5f  JMP 0x0040dd6a
0040dd61  MOV ECX,dword ptr [EBP + -0x10]
0040dd64  ADD ECX,0x1
0040dd67  MOV dword ptr [EBP + -0x10],ECX
0040dd6a  CMP dword ptr [EBP + -0x10],0x4
0040dd6e  JGE 0x0040ddc8
0040dd70  MOV dword ptr [EBP + -0x14],0x0
0040dd77  JMP 0x0040dd82
0040dd79  MOV EDX,dword ptr [EBP + -0x14]
0040dd7c  ADD EDX,0x1
0040dd7f  MOV dword ptr [EBP + -0x14],EDX
0040dd82  CMP dword ptr [EBP + -0x14],0x16
0040dd86  JGE 0x0040ddc6
0040dd88  MOV EAX,dword ptr [EBP + -0x10]
0040dd8b  IMUL EAX,EAX,0x58
0040dd8e  MOV ECX,dword ptr [EBP + -0x30]
0040dd91  LEA EDX,[ECX + EAX*0x1 + 0x28]
0040dd95  MOV EAX,dword ptr [EBP + -0x14]
0040dd98  MOV ECX,dword ptr [EDX + EAX*0x4]
0040dd9b  MOV dword ptr [EBP + -0x1c],ECX
0040dd9e  MOV EDX,dword ptr [EBP + -0x1c]
0040dda1  MOV dword ptr [EBP + -0x18],EDX
0040dda4  CMP dword ptr [EBP + -0x18],0x0
0040dda8  JZ 0x0040ddbd
0040ddaa  PUSH 0x1
0040ddac  MOV EAX,dword ptr [EBP + -0x18]
0040ddaf  MOV EDX,dword ptr [EAX]
0040ddb1  MOV ECX,dword ptr [EBP + -0x18]
0040ddb4  MOV EAX,dword ptr [EDX]
0040ddb6  CALL EAX
0040ddb8  MOV dword ptr [EBP + -0x34],EAX
0040ddbb  JMP 0x0040ddc4
0040ddbd  MOV dword ptr [EBP + -0x34],0x0
0040ddc4  JMP 0x0040dd79
0040ddc6  JMP 0x0040dd61
0040ddc8  MOV dword ptr [EBP + -0x10],0x0
0040ddcf  JMP 0x0040ddda
0040ddd1  MOV ECX,dword ptr [EBP + -0x10]
0040ddd4  ADD ECX,0x1
0040ddd7  MOV dword ptr [EBP + -0x10],ECX
0040ddda  CMP dword ptr [EBP + -0x10],0x4
0040ddde  JGE 0x0040de48
0040dde0  MOV EDX,dword ptr [EBP + -0x10]
0040dde3  MOV EAX,dword ptr [EBP + -0x30]
0040dde6  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x8]
0040ddea  MOV dword ptr [EBP + -0x24],ECX
0040dded  MOV EDX,dword ptr [EBP + -0x24]
0040ddf0  MOV dword ptr [EBP + -0x20],EDX
0040ddf3  CMP dword ptr [EBP + -0x20],0x0
0040ddf7  JZ 0x0040de0c
0040ddf9  PUSH 0x1
0040ddfb  MOV EAX,dword ptr [EBP + -0x20]
0040ddfe  MOV EDX,dword ptr [EAX]
0040de00  MOV ECX,dword ptr [EBP + -0x20]
0040de03  MOV EAX,dword ptr [EDX]
0040de05  CALL EAX
0040de07  MOV dword ptr [EBP + -0x38],EAX
0040de0a  JMP 0x0040de13
0040de0c  MOV dword ptr [EBP + -0x38],0x0
0040de13  MOV ECX,dword ptr [EBP + -0x10]
0040de16  MOV EDX,dword ptr [EBP + -0x30]
0040de19  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x18]
0040de1d  MOV dword ptr [EBP + -0x2c],EAX
0040de20  MOV ECX,dword ptr [EBP + -0x2c]
0040de23  MOV dword ptr [EBP + -0x28],ECX
0040de26  CMP dword ptr [EBP + -0x28],0x0
0040de2a  JZ 0x0040de3f
0040de2c  PUSH 0x1
0040de2e  MOV EDX,dword ptr [EBP + -0x28]
0040de31  MOV EAX,dword ptr [EDX]
0040de33  MOV ECX,dword ptr [EBP + -0x28]
0040de36  MOV EDX,dword ptr [EAX]
0040de38  CALL EDX
0040de3a  MOV dword ptr [EBP + -0x3c],EAX
0040de3d  JMP 0x0040de46
0040de3f  MOV dword ptr [EBP + -0x3c],0x0
0040de46  JMP 0x0040ddd1
0040de48  MOV dword ptr [EBP + -0x4],0xffffffff
0040de4f  MOV ECX,dword ptr [EBP + -0x30]
0040de52  CALL 0x005e9e40
0040de57  MOV ECX,dword ptr [EBP + -0xc]
0040de5a  MOV dword ptr FS:[0x0],ECX
0040de61  POP ECX
0040de62  MOV ESP,EBP
0040de64  POP EBP
0040de65  RET
