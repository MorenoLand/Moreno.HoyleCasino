; FUN_0047b9c0  0047b9c0
0047b9c0  PUSH EBP
0047b9c1  MOV EBP,ESP
0047b9c3  SUB ESP,0x8
0047b9c6  MOV dword ptr [EBP + -0x8],ECX
0047b9c9  MOV dword ptr [EBP + -0x4],0x0
0047b9d0  PUSH 0x0
0047b9d2  MOV EAX,dword ptr [EBP + -0x8]
0047b9d5  MOV ECX,dword ptr [EAX + 0x488]
0047b9db  PUSH ECX
0047b9dc  MOV ECX,dword ptr [EBP + -0x8]
0047b9df  CALL 0x0047e390
0047b9e4  MOV ECX,EAX
0047b9e6  CALL 0x004c70b0
0047b9eb  MOV EDX,dword ptr [EBP + -0x8]
0047b9ee  MOV EAX,dword ptr [EDX + 0x488]
0047b9f4  PUSH EAX
0047b9f5  MOV ECX,dword ptr [EBP + -0x8]
0047b9f8  CALL 0x0047e390
0047b9fd  MOV ECX,EAX
0047b9ff  CALL 0x004c6cb0
0047ba04  TEST EAX,EAX
0047ba06  JNZ 0x0047ba77
0047ba08  MOV ECX,dword ptr [EBP + -0x8]
0047ba0b  CALL 0x0047f950
0047ba10  SUB EAX,0x1
0047ba13  MOV ECX,dword ptr [EBP + -0x8]
0047ba16  CMP dword ptr [ECX + 0x488],EAX
0047ba1c  JGE 0x0047ba47
0047ba1e  MOV EDX,dword ptr [EBP + -0x8]
0047ba21  MOV EAX,dword ptr [EDX + 0x488]
0047ba27  ADD EAX,0x1
0047ba2a  MOV ECX,dword ptr [EBP + -0x8]
0047ba2d  MOV dword ptr [ECX + 0x488],EAX
0047ba33  MOV EDX,dword ptr [EBP + -0x8]
0047ba36  MOV EAX,dword ptr [EBP + -0x8]
0047ba39  MOV ECX,dword ptr [EAX + 0x488]
0047ba3f  MOV dword ptr [EDX + 0x488],ECX
0047ba45  JMP 0x0047ba54
0047ba47  MOV EDX,dword ptr [EBP + -0x8]
0047ba4a  MOV dword ptr [EDX + 0x488],0x0
0047ba54  MOV EAX,dword ptr [EBP + -0x4]
0047ba57  ADD EAX,0x1
0047ba5a  MOV dword ptr [EBP + -0x4],EAX
0047ba5d  CMP dword ptr [EBP + -0x4],0xa
0047ba61  JLE 0x0047ba72
0047ba63  MOV ECX,dword ptr [EBP + -0x8]
0047ba66  MOV dword ptr [ECX + 0x488],0x0
0047ba70  JMP 0x0047ba77
0047ba72  JMP 0x0047b9eb
0047ba77  PUSH 0x1
0047ba79  MOV EDX,dword ptr [EBP + -0x8]
0047ba7c  MOV EAX,dword ptr [EDX + 0x488]
0047ba82  PUSH EAX
0047ba83  MOV ECX,dword ptr [EBP + -0x8]
0047ba86  CALL 0x0047e390
0047ba8b  MOV ECX,EAX
0047ba8d  CALL 0x004c70b0
0047ba92  CMP dword ptr [EBP + -0x4],0xa
0047ba96  JLE 0x0047baa5
0047ba98  MOV ECX,dword ptr [EBP + -0x8]
0047ba9b  MOV ECX,dword ptr [ECX + 0x28]
0047ba9e  CALL 0x005f87d0
0047baa3  JMP 0x0047bab0
0047baa5  MOV EDX,dword ptr [EBP + -0x8]
0047baa8  MOV ECX,dword ptr [EDX + 0x28]
0047baab  CALL 0x00466e90
0047bab0  MOV ESP,EBP
0047bab2  POP EBP
0047bab3  RET
