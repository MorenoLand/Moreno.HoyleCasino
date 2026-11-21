; FUN_0053bb30  0053bb30
0053bb30  PUSH EBP
0053bb31  MOV EBP,ESP
0053bb33  SUB ESP,0x8
0053bb36  MOV dword ptr [EBP + -0x8],ECX
0053bb39  MOV ECX,dword ptr [EBP + -0x8]
0053bb3c  CALL 0x005e9e20
0053bb41  MOV EAX,dword ptr [EBP + -0x8]
0053bb44  MOV dword ptr [EAX],0x6c5bdc
0053bb4a  MOV dword ptr [EBP + -0x4],0x0
0053bb51  JMP 0x0053bb5c
0053bb53  MOV ECX,dword ptr [EBP + -0x4]
0053bb56  ADD ECX,0x1
0053bb59  MOV dword ptr [EBP + -0x4],ECX
0053bb5c  CMP dword ptr [EBP + -0x4],0x3
0053bb60  JGE 0x0053bb72
0053bb62  MOV EDX,dword ptr [EBP + -0x4]
0053bb65  MOV EAX,dword ptr [EBP + -0x8]
0053bb68  MOV dword ptr [EAX + EDX*0x4 + 0x8],0x0
0053bb70  JMP 0x0053bb53
0053bb72  MOV EAX,dword ptr [EBP + -0x8]
0053bb75  MOV ESP,EBP
0053bb77  POP EBP
0053bb78  RET
