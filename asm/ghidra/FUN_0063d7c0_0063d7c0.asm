; FUN_0063d7c0  0063d7c0
0063d7c0  PUSH EBP
0063d7c1  MOV EBP,ESP
0063d7c3  SUB ESP,0x8
0063d7c6  MOV dword ptr [EBP + -0x8],ECX
0063d7c9  PUSH 0x4
0063d7cb  MOV EAX,dword ptr [EBP + -0x8]
0063d7ce  MOV ECX,dword ptr [EAX + 0x1bc]
0063d7d4  MOV EDX,dword ptr [EBP + 0x8]
0063d7d7  MOV EAX,dword ptr [ECX + EDX*0x4]
0063d7da  MOV ECX,dword ptr [EAX + 0x20]
0063d7dd  PUSH ECX
0063d7de  MOV ECX,dword ptr [EBP + -0x8]
0063d7e1  CALL 0x0063d570
0063d7e6  MOV EDX,dword ptr [EBP + -0x8]
0063d7e9  MOV EAX,dword ptr [EDX + 0x1bc]
0063d7ef  MOV ECX,dword ptr [EBP + 0x8]
0063d7f2  MOV ECX,dword ptr [EAX + ECX*0x4]
0063d7f5  CALL 0x0063b2d0
0063d7fa  PUSH 0x0
0063d7fc  MOV EDX,dword ptr [EBP + 0x8]
0063d7ff  PUSH EDX
0063d800  MOV EAX,dword ptr [EBP + -0x8]
0063d803  MOV ECX,dword ptr [EAX + 0x1bc]
0063d809  MOV EDX,dword ptr [EBP + 0x8]
0063d80c  MOV ECX,dword ptr [ECX + EDX*0x4]
0063d80f  CALL 0x0063a3e0
0063d814  MOV EAX,dword ptr [EBP + -0x8]
0063d817  MOV ECX,dword ptr [EAX + 0x1bc]
0063d81d  MOV EDX,dword ptr [EBP + 0x8]
0063d820  MOV EAX,dword ptr [ECX + EDX*0x4]
0063d823  MOV dword ptr [EBP + -0x4],EAX
0063d826  MOV ECX,dword ptr [EBP + -0x4]
0063d829  CALL 0x0063aac0
0063d82e  MOV dword ptr [EAX],0x0
0063d834  MOV ECX,dword ptr [EBP + 0x8]
0063d837  PUSH ECX
0063d838  MOV EDX,dword ptr [0x0162ee80]
0063d83e  MOV EAX,dword ptr [EDX]
0063d840  MOV ECX,dword ptr [0x0162ee80]
0063d846  MOV EDX,dword ptr [EAX + 0xec]
0063d84c  CALL EDX
0063d84e  MOV ESP,EBP
0063d850  POP EBP
0063d851  RET 0x4
