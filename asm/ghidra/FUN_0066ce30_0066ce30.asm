; FUN_0066ce30  0066ce30
0066ce30  PUSH EBP
0066ce31  MOV EBP,ESP
0066ce33  SUB ESP,0x14
0066ce36  MOV dword ptr [EBP + -0x10],ECX
0066ce39  PUSH 0x0
0066ce3b  PUSH 0x780e74
0066ce40  PUSH 0x706b6c
0066ce45  PUSH 0x0
0066ce47  MOV EAX,[0x0162ee80]
0066ce4c  PUSH EAX
0066ce4d  CALL 0x00686ede
0066ce52  ADD ESP,0x14
0066ce55  MOV dword ptr [EBP + -0x4],EAX
0066ce58  CMP dword ptr [EBP + -0x4],0x0
0066ce5c  JZ 0x0066ceb3
0066ce5e  MOV ECX,dword ptr [EBP + -0x4]
0066ce61  CMP dword ptr [ECX + 0x74],0x0
0066ce65  JZ 0x0066ceb3
0066ce67  MOV EDX,dword ptr [EBP + -0x4]
0066ce6a  MOV EAX,dword ptr [EDX + 0x74]
0066ce6d  MOV ECX,dword ptr [EBP + -0x4]
0066ce70  MOV ECX,dword ptr [ECX + 0x74]
0066ce73  MOV EDX,dword ptr [EAX]
0066ce75  MOV EAX,dword ptr [EDX + 0x70]
0066ce78  CALL EAX
0066ce7a  MOV ECX,dword ptr [EBP + -0x4]
0066ce7d  MOV EDX,dword ptr [ECX + 0x74]
0066ce80  MOV dword ptr [EBP + -0xc],EDX
0066ce83  MOV EAX,dword ptr [EBP + -0xc]
0066ce86  MOV dword ptr [EBP + -0x8],EAX
0066ce89  CMP dword ptr [EBP + -0x8],0x0
0066ce8d  JZ 0x0066cea2
0066ce8f  PUSH 0x1
0066ce91  MOV ECX,dword ptr [EBP + -0x8]
0066ce94  MOV EDX,dword ptr [ECX]
0066ce96  MOV ECX,dword ptr [EBP + -0x8]
0066ce99  MOV EAX,dword ptr [EDX]
0066ce9b  CALL EAX
0066ce9d  MOV dword ptr [EBP + -0x14],EAX
0066cea0  JMP 0x0066cea9
0066cea2  MOV dword ptr [EBP + -0x14],0x0
0066cea9  MOV ECX,dword ptr [EBP + -0x4]
0066ceac  MOV dword ptr [ECX + 0x74],0x0
0066ceb3  MOV ESP,EBP
0066ceb5  POP EBP
0066ceb6  RET
