; FUN_005628b0  005628b0
005628b0  PUSH EBP
005628b1  MOV EBP,ESP
005628b3  SUB ESP,0x10
005628b6  MOV dword ptr [EBP + -0xc],ECX
005628b9  MOV dword ptr [EBP + -0x8],0x0
005628c0  MOV EAX,dword ptr [EBP + 0x8]
005628c3  MOV dword ptr [EAX],0x21e
005628c9  MOV ECX,dword ptr [EBP + 0xc]
005628cc  MOV dword ptr [ECX],0x121
005628d2  MOV EDX,dword ptr [0x007947e0]
005628d8  MOV EAX,dword ptr [EDX + 0x4f10]
005628de  MOV dword ptr [EBP + -0x10],EAX
005628e1  MOV ECX,dword ptr [EBP + -0x10]
005628e4  SUB ECX,0x2
005628e7  MOV dword ptr [EBP + -0x10],ECX
005628ea  CMP dword ptr [EBP + -0x10],0x6
005628ee  JA 0x00562952
005628f0  MOV EDX,dword ptr [EBP + -0x10]
005628f3  JMP dword ptr [EDX*0x4 + 0x56297c]
005628fa  MOV EAX,dword ptr [EBP + 0x10]
005628fd  MOV dword ptr [EAX],0x0
00562903  MOV dword ptr [EBP + -0x8],0xfffffff5
0056290a  JMP 0x00562952
0056290c  MOV ECX,dword ptr [EBP + 0x10]
0056290f  MOV dword ptr [ECX],0x1
00562915  MOV dword ptr [EBP + -0x8],0xfffffffa
0056291c  JMP 0x00562952
0056291e  MOV EDX,dword ptr [EBP + 0x10]
00562921  MOV dword ptr [EDX],0x2
00562927  MOV dword ptr [EBP + -0x8],0xfffffffa
0056292e  JMP 0x00562952
00562930  MOV EAX,dword ptr [EBP + 0x10]
00562933  MOV dword ptr [EAX],0x3
00562939  MOV dword ptr [EBP + -0x8],0xfffffff8
00562940  JMP 0x00562952
00562942  MOV ECX,dword ptr [EBP + 0x10]
00562945  MOV dword ptr [ECX],0x4
0056294b  MOV dword ptr [EBP + -0x8],0xfffffff8
00562952  MOV EDX,dword ptr [0x007947e0]
00562958  MOV EAX,dword ptr [EDX + 0x4f14]
0056295e  MOV dword ptr [EBP + -0x4],EAX
00562961  CMP dword ptr [EBP + -0x4],0xa
00562965  JZ 0x00562969
00562967  JMP 0x00562976
00562969  MOV ECX,dword ptr [EBP + 0x8]
0056296c  MOV EDX,dword ptr [ECX]
0056296e  ADD EDX,dword ptr [EBP + -0x8]
00562971  MOV EAX,dword ptr [EBP + 0x8]
00562974  MOV dword ptr [EAX],EDX
00562976  MOV ESP,EBP
00562978  POP EBP
00562979  RET 0xc
