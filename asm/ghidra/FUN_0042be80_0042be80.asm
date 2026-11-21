; FUN_0042be80  0042be80
0042be80  PUSH EBP
0042be81  MOV EBP,ESP
0042be83  SUB ESP,0x8
0042be86  MOV dword ptr [EBP + -0x8],ECX
0042be89  MOV EAX,dword ptr [EBP + -0x8]
0042be8c  MOV ECX,dword ptr [EBP + 0x8]
0042be8f  MOV dword ptr [EAX + 0x4],ECX
0042be92  MOV EDX,dword ptr [EBP + -0x8]
0042be95  CMP dword ptr [EDX + 0x4],0x4
0042be99  JZ 0x0042befd
0042be9b  MOV EAX,dword ptr [EBP + -0x8]
0042be9e  MOV ECX,dword ptr [EAX + 0x4]
0042bea1  PUSH ECX
0042bea2  MOV ECX,dword ptr [0x0162ee84]
0042bea8  CALL 0x00639110
0042bead  MOV dword ptr [EBP + -0x4],EAX
0042beb0  PUSH 0x64
0042beb2  MOV ECX,dword ptr [EBP + -0x4]
0042beb5  CALL 0x00646380
0042beba  MOV EDX,dword ptr [EBP + -0x8]
0042bebd  MOV EAX,dword ptr [EDX + 0x4]
0042bec0  PUSH EAX
0042bec1  MOV ECX,dword ptr [0x0162ee80]
0042bec7  MOV EDX,dword ptr [ECX]
0042bec9  MOV ECX,dword ptr [0x0162ee80]
0042becf  MOV EAX,dword ptr [EDX + 0x1c8]
0042bed5  CALL EAX
0042bed7  PUSH EAX
0042bed8  MOV ECX,dword ptr [EBP + -0x8]
0042bedb  MOV EDX,dword ptr [ECX + 0x4]
0042bede  PUSH EDX
0042bedf  MOV EAX,[0x0162ee80]
0042bee4  MOV EDX,dword ptr [EAX]
0042bee6  MOV ECX,dword ptr [0x0162ee80]
0042beec  MOV EAX,dword ptr [EDX + 0x1c4]
0042bef2  CALL EAX
0042bef4  PUSH EAX
0042bef5  MOV ECX,dword ptr [EBP + -0x4]
0042bef8  CALL 0x00646150
0042befd  MOV ESP,EBP
0042beff  POP EBP
0042bf00  RET 0x4
