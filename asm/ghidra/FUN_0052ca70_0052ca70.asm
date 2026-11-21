; FUN_0052ca70  0052ca70
0052ca70  PUSH EBP
0052ca71  MOV EBP,ESP
0052ca73  PUSH -0x1
0052ca75  PUSH 0x6a4447
0052ca7a  MOV EAX,FS:[0x0]
0052ca80  PUSH EAX
0052ca81  SUB ESP,0x10
0052ca84  MOV EAX,[0x00781870]
0052ca89  XOR EAX,EBP
0052ca8b  PUSH EAX
0052ca8c  LEA EAX,[EBP + -0xc]
0052ca8f  MOV FS:[0x0],EAX
0052ca95  MOV dword ptr [EBP + -0x18],ECX
0052ca98  PUSH 0x1c
0052ca9a  CALL 0x00686d82
0052ca9f  ADD ESP,0x4
0052caa2  MOV dword ptr [EBP + -0x14],EAX
0052caa5  MOV dword ptr [EBP + -0x4],0x0
0052caac  CMP dword ptr [EBP + -0x14],0x0
0052cab0  JZ 0x0052cac1
0052cab2  PUSH 0x0
0052cab4  MOV ECX,dword ptr [EBP + -0x14]
0052cab7  CALL 0x0052f7f0
0052cabc  MOV dword ptr [EBP + -0x1c],EAX
0052cabf  JMP 0x0052cac8
0052cac1  MOV dword ptr [EBP + -0x1c],0x0
0052cac8  MOV EAX,dword ptr [EBP + -0x1c]
0052cacb  MOV dword ptr [EBP + -0x10],EAX
0052cace  MOV dword ptr [EBP + -0x4],0xffffffff
0052cad5  MOV ECX,dword ptr [EBP + -0x10]
0052cad8  PUSH ECX
0052cad9  MOV EDX,dword ptr [EBP + -0x18]
0052cadc  MOV ECX,dword ptr [EDX + 0xc]
0052cadf  CALL 0x005f5d50
0052cae4  MOV ECX,dword ptr [EBP + -0xc]
0052cae7  MOV dword ptr FS:[0x0],ECX
0052caee  POP ECX
0052caef  MOV ESP,EBP
0052caf1  POP EBP
0052caf2  RET
