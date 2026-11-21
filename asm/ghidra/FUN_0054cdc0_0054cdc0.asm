; FUN_0054cdc0  0054cdc0
0054cdc0  PUSH EBP
0054cdc1  MOV EBP,ESP
0054cdc3  SUB ESP,0x8
0054cdc6  MOV dword ptr [EBP + -0x8],ECX
0054cdc9  MOV ECX,dword ptr [EBP + -0x8]
0054cdcc  CALL 0x0054cec0
0054cdd1  MOV dword ptr [EBP + -0x4],EAX
0054cdd4  CMP dword ptr [EBP + -0x4],0x0
0054cdd8  JNZ 0x0054cdde
0054cdda  XOR AL,AL
0054cddc  JMP 0x0054ce00
0054cdde  MOV ECX,dword ptr [EBP + -0x8]
0054cde1  CALL 0x0054c8a0
0054cde6  TEST EAX,EAX
0054cde8  JZ 0x0054cdf4
0054cdea  CMP dword ptr [EBP + -0x4],0x1
0054cdee  JNZ 0x0054cdf4
0054cdf0  MOV AL,0x1
0054cdf2  JMP 0x0054ce00
0054cdf4  CMP dword ptr [EBP + -0x4],0x2
0054cdf8  JNZ 0x0054cdfe
0054cdfa  MOV AL,0x1
0054cdfc  JMP 0x0054ce00
0054cdfe  XOR AL,AL
0054ce00  MOV ESP,EBP
0054ce02  POP EBP
0054ce03  RET
