; FUN_0062ab60  0062ab60
0062ab60  PUSH EBP
0062ab61  MOV EBP,ESP
0062ab63  SUB ESP,0x8
0062ab66  MOV dword ptr [EBP + -0x8],ECX
0062ab69  MOV ECX,dword ptr [EBP + -0x8]
0062ab6c  CALL 0x0062ac30
0062ab71  MOV dword ptr [EBP + -0x4],EAX
0062ab74  CMP dword ptr [EBP + -0x4],0x0
0062ab78  JZ 0x0062ab8f
0062ab7a  MOV EAX,dword ptr [EBP + 0x8]
0062ab7d  CMP EAX,dword ptr [EBP + -0x4]
0062ab80  JZ 0x0062ab8f
0062ab82  MOV ECX,dword ptr [EBP + -0x8]
0062ab85  CALL 0x0062ace0
0062ab8a  MOV dword ptr [EBP + -0x4],EAX
0062ab8d  JMP 0x0062ab74
0062ab8f  MOV ECX,dword ptr [EBP + -0x4]
0062ab92  CMP ECX,dword ptr [EBP + 0x8]
0062ab95  JNZ 0x0062aba9
0062ab97  MOV EDX,dword ptr [EBP + -0x8]
0062ab9a  MOV EAX,dword ptr [EDX + 0x14]
0062ab9d  SUB EAX,0x1
0062aba0  PUSH EAX
0062aba1  MOV ECX,dword ptr [EBP + -0x8]
0062aba4  CALL 0x0062abb0
0062aba9  MOV ESP,EBP
0062abab  POP EBP
0062abac  RET 0x4
