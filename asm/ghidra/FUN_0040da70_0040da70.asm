; FUN_0040da70  0040da70
0040da70  PUSH EBP
0040da71  MOV EBP,ESP
0040da73  SUB ESP,0x10
0040da76  MOV dword ptr [EBP + -0xc],ECX
0040da79  MOV EAX,dword ptr [EBP + -0xc]
0040da7c  CMP dword ptr [EAX + 0x34],0x0
0040da80  JZ 0x0040da97
0040da82  MOV ECX,dword ptr [EBP + -0xc]
0040da85  MOV ECX,dword ptr [ECX + 0x34]
0040da88  CALL 0x005f8990
0040da8d  MOV EDX,dword ptr [EBP + -0xc]
0040da90  MOV dword ptr [EDX + 0x34],0x0
0040da97  PUSH 0x0
0040da99  MOV ECX,dword ptr [EBP + -0xc]
0040da9c  CALL 0x0040d6b0
0040daa1  MOV EAX,dword ptr [EBP + -0xc]
0040daa4  CMP dword ptr [EAX + 0x28],0x0
0040daa8  JZ 0x0040dae3
0040daaa  MOV ECX,dword ptr [EBP + -0xc]
0040daad  MOV EDX,dword ptr [ECX + 0x28]
0040dab0  MOV dword ptr [EBP + -0x8],EDX
0040dab3  MOV EAX,dword ptr [EBP + -0x8]
0040dab6  MOV dword ptr [EBP + -0x4],EAX
0040dab9  CMP dword ptr [EBP + -0x4],0x0
0040dabd  JZ 0x0040dad2
0040dabf  PUSH 0x1
0040dac1  MOV ECX,dword ptr [EBP + -0x4]
0040dac4  MOV EDX,dword ptr [ECX]
0040dac6  MOV ECX,dword ptr [EBP + -0x4]
0040dac9  MOV EAX,dword ptr [EDX]
0040dacb  CALL EAX
0040dacd  MOV dword ptr [EBP + -0x10],EAX
0040dad0  JMP 0x0040dad9
0040dad2  MOV dword ptr [EBP + -0x10],0x0
0040dad9  MOV ECX,dword ptr [EBP + -0xc]
0040dadc  MOV dword ptr [ECX + 0x28],0x0
0040dae3  MOV ESP,EBP
0040dae5  POP EBP
0040dae6  RET
