; FUN_0062ad70  0062ad70
0062ad70  PUSH EBP
0062ad71  MOV EBP,ESP
0062ad73  SUB ESP,0x14
0062ad76  MOV dword ptr [EBP + -0x10],ECX
0062ad79  MOV EAX,dword ptr [EBP + -0x10]
0062ad7c  MOV ECX,dword ptr [EAX + 0xc]
0062ad7f  MOV dword ptr [EBP + -0x4],ECX
0062ad82  MOV EDX,dword ptr [EBP + -0x10]
0062ad85  CMP dword ptr [EDX + 0x8],0x0
0062ad89  JZ 0x0062add1
0062ad8b  MOV EAX,dword ptr [EBP + -0x10]
0062ad8e  MOV ECX,dword ptr [EAX + 0x8]
0062ad91  SUB ECX,0x1
0062ad94  MOV EDX,dword ptr [EBP + -0x10]
0062ad97  MOV dword ptr [EDX + 0x8],ECX
0062ad9a  MOV EAX,dword ptr [EBP + -0x10]
0062ad9d  MOV ECX,dword ptr [EAX + 0x8]
0062ada0  MOV EDX,dword ptr [EBP + -0x4]
0062ada3  MOV EAX,dword ptr [EDX + ECX*0x4]
0062ada6  MOV dword ptr [EBP + -0xc],EAX
0062ada9  MOV ECX,dword ptr [EBP + -0xc]
0062adac  MOV dword ptr [EBP + -0x8],ECX
0062adaf  CMP dword ptr [EBP + -0x8],0x0
0062adb3  JZ 0x0062adc8
0062adb5  PUSH 0x1
0062adb7  MOV EDX,dword ptr [EBP + -0x8]
0062adba  MOV EAX,dword ptr [EDX]
0062adbc  MOV ECX,dword ptr [EBP + -0x8]
0062adbf  MOV EDX,dword ptr [EAX]
0062adc1  CALL EDX
0062adc3  MOV dword ptr [EBP + -0x14],EAX
0062adc6  JMP 0x0062adcf
0062adc8  MOV dword ptr [EBP + -0x14],0x0
0062adcf  JMP 0x0062ad82
0062add1  MOV ESP,EBP
0062add3  POP EBP
0062add4  RET
