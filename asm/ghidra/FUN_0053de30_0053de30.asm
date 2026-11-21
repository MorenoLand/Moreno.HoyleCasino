; FUN_0053de30  0053de30
0053de30  PUSH EBP
0053de31  MOV EBP,ESP
0053de33  SUB ESP,0xc
0053de36  MOV dword ptr [EBP + -0xc],ECX
0053de39  MOV EAX,[0x007933ec]
0053de3e  MOV dword ptr [EBP + -0x4],EAX
0053de41  MOV ECX,dword ptr [EBP + -0x4]
0053de44  ADD ECX,dword ptr [EBP + 0x8]
0053de47  MOV byte ptr [ECX + 0xed],0x1
0053de4e  MOV ECX,dword ptr [0x007933f4]
0053de54  CALL 0x0053b1a0
0053de59  MOV EDX,dword ptr [EBP + 0x8]
0053de5c  PUSH EDX
0053de5d  MOV ECX,dword ptr [0x007933ec]
0053de63  CALL 0x005418a0
0053de68  MOV EAX,dword ptr [EBP + 0x8]
0053de6b  PUSH EAX
0053de6c  CALL 0x005dcb00
0053de71  ADD ESP,0x4
0053de74  MOV dword ptr [EBP + -0x8],EAX
0053de77  MOV ECX,dword ptr [EBP + -0x8]
0053de7a  MOV byte ptr [ECX + 0x4a2],0x1
0053de81  PUSH 0x1
0053de83  MOV EDX,dword ptr [0x007933e8]
0053de89  MOV EAX,dword ptr [EDX + 0x4]
0053de8c  MOV ECX,dword ptr [0x007933e8]
0053de92  MOV ECX,dword ptr [ECX + 0x4]
0053de95  MOV EDX,dword ptr [EAX]
0053de97  MOV EAX,dword ptr [EDX + 0x4]
0053de9a  CALL EAX
0053de9c  MOV ESP,EBP
0053de9e  POP EBP
0053de9f  RET 0x4
