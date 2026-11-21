; FUN_0051f790  0051f790
0051f790  PUSH EBP
0051f791  MOV EBP,ESP
0051f793  SUB ESP,0xc
0051f796  MOV dword ptr [EBP + -0xc],ECX
0051f799  PUSH 0xd
0051f79b  MOV EAX,[0x0162ee84]
0051f7a0  MOV ECX,dword ptr [EAX + 0x14]
0051f7a3  CALL 0x005fb2b0
0051f7a8  MOV dword ptr [EBP + -0x8],EAX
0051f7ab  CMP dword ptr [EBP + -0x8],0x0
0051f7af  JZ 0x0051f7d2
0051f7b1  MOV ECX,dword ptr [EBP + 0x8]
0051f7b4  PUSH ECX
0051f7b5  MOV EDX,dword ptr [EBP + -0x8]
0051f7b8  MOV EAX,dword ptr [EDX]
0051f7ba  MOV ECX,dword ptr [EBP + -0x8]
0051f7bd  MOV EDX,dword ptr [EAX + 0xb0]
0051f7c3  CALL EDX
0051f7c5  MOV EAX,dword ptr [EBP + -0x8]
0051f7c8  MOV EDX,dword ptr [EAX]
0051f7ca  MOV ECX,dword ptr [EBP + -0x8]
0051f7cd  MOV EAX,dword ptr [EDX + 0x74]
0051f7d0  CALL EAX
0051f7d2  MOV dword ptr [EBP + -0x4],0x0
0051f7d9  JMP 0x0051f7e4
0051f7db  MOV ECX,dword ptr [EBP + -0x4]
0051f7de  ADD ECX,0x1
0051f7e1  MOV dword ptr [EBP + -0x4],ECX
0051f7e4  CMP dword ptr [EBP + -0x4],0x5
0051f7e8  JGE 0x0051f849
0051f7ea  MOV EDX,dword ptr [EBP + -0x4]
0051f7ed  PUSH EDX
0051f7ee  MOV EAX,dword ptr [EBP + 0x8]
0051f7f1  PUSH EAX
0051f7f2  CALL 0x00520770
0051f7f7  ADD ESP,0x8
0051f7fa  MOVZX ECX,AL
0051f7fd  TEST ECX,ECX
0051f7ff  JZ 0x0051f826
0051f801  MOV EDX,dword ptr [EBP + -0x4]
0051f804  MOV EAX,dword ptr [EBP + -0xc]
0051f807  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x94]
0051f80e  MOV EDX,dword ptr [EBP + -0x4]
0051f811  MOV EAX,dword ptr [EBP + -0xc]
0051f814  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x94]
0051f81b  MOV EAX,dword ptr [ECX]
0051f81d  MOV ECX,EDX
0051f81f  MOV EDX,dword ptr [EAX + 0x74]
0051f822  CALL EDX
0051f824  JMP 0x0051f847
0051f826  MOV EAX,dword ptr [EBP + -0x4]
0051f829  MOV ECX,dword ptr [EBP + -0xc]
0051f82c  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x94]
0051f833  MOV EAX,dword ptr [EBP + -0x4]
0051f836  MOV ECX,dword ptr [EBP + -0xc]
0051f839  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x94]
0051f840  MOV EDX,dword ptr [EDX]
0051f842  MOV EAX,dword ptr [EDX + 0x70]
0051f845  CALL EAX
0051f847  JMP 0x0051f7db
0051f849  MOV ECX,dword ptr [EBP + 0x8]
0051f84c  PUSH ECX
0051f84d  MOV ECX,dword ptr [EBP + -0xc]
0051f850  CALL 0x0051fc80
0051f855  MOV ESP,EBP
0051f857  POP EBP
0051f858  RET 0x4
