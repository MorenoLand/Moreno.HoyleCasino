; FUN_0060da80  0060da80
0060da80  PUSH EBP
0060da81  MOV EBP,ESP
0060da83  PUSH ECX
0060da84  MOV dword ptr [EBP + -0x4],ECX
0060da87  MOV EAX,dword ptr [EBP + -0x4]
0060da8a  MOVZX ECX,byte ptr [EAX + 0x5c]
0060da8e  TEST ECX,ECX
0060da90  JZ 0x0060da94
0060da92  JMP 0x0060dad9
0060da94  MOV EDX,dword ptr [0x007960d8]
0060da9a  MOV EAX,dword ptr [EDX + 0x10]
0060da9d  MOV ECX,dword ptr [0x007960d8]
0060daa3  MOV ECX,dword ptr [ECX + 0x10]
0060daa6  MOV EDX,dword ptr [EAX]
0060daa8  MOV EAX,dword ptr [EDX + 0x30]
0060daab  CALL EAX
0060daad  MOVZX ECX,AL
0060dab0  TEST ECX,ECX
0060dab2  JZ 0x0060dab6
0060dab4  JMP 0x0060dad9
0060dab6  MOV byte ptr [0x015e55d2],0x1
0060dabd  MOV EDX,dword ptr [EBP + -0x4]
0060dac0  MOV EAX,dword ptr [EDX]
0060dac2  MOV ECX,dword ptr [EBP + -0x4]
0060dac5  MOV EDX,dword ptr [EAX + 0x34]
0060dac8  CALL EDX
0060daca  MOV ECX,dword ptr [EBP + -0x4]
0060dacd  CALL 0x0060e050
0060dad2  MOV byte ptr [0x015e55d2],0x0
0060dad9  MOV ESP,EBP
0060dadb  POP EBP
0060dadc  RET
