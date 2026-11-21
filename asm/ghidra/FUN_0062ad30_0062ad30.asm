; FUN_0062ad30  0062ad30
0062ad30  PUSH EBP
0062ad31  MOV EBP,ESP
0062ad33  PUSH ECX
0062ad34  MOV dword ptr [EBP + -0x4],ECX
0062ad37  MOV EAX,dword ptr [EBP + -0x4]
0062ad3a  CMP dword ptr [EAX + 0x18],0x0
0062ad3e  JLE 0x0062ad6a
0062ad40  MOV ECX,dword ptr [EBP + -0x4]
0062ad43  MOV EDX,dword ptr [ECX + 0x18]
0062ad46  SUB EDX,0x1
0062ad49  MOV EAX,dword ptr [EBP + -0x4]
0062ad4c  MOV dword ptr [EAX + 0x18],EDX
0062ad4f  MOV ECX,dword ptr [EBP + -0x4]
0062ad52  MOV EDX,dword ptr [ECX + 0x1c]
0062ad55  SUB EDX,0x4
0062ad58  MOV EAX,dword ptr [EBP + -0x4]
0062ad5b  MOV dword ptr [EAX + 0x1c],EDX
0062ad5e  MOV ECX,dword ptr [EBP + -0x4]
0062ad61  MOV EDX,dword ptr [ECX + 0x1c]
0062ad64  MOV EAX,dword ptr [EDX]
0062ad66  JMP 0x0062ad6c
0062ad6a  XOR EAX,EAX
0062ad6c  MOV ESP,EBP
0062ad6e  POP EBP
0062ad6f  RET
