; FUN_00459030  00459030
00459030  PUSH EBP
00459031  MOV EBP,ESP
00459033  SUB ESP,0x30
00459036  MOV dword ptr [EBP + -0x30],ECX
00459039  MOV dword ptr [EBP + -0x2c],0xffffffd3
00459040  MOV dword ptr [EBP + -0x28],0xffffffc9
00459047  MOV dword ptr [EBP + -0x24],0xffffffc7
0045904e  MOV dword ptr [EBP + -0x20],0xffffffd3
00459055  MOV dword ptr [EBP + -0x1c],0xffffffc9
0045905c  MOV dword ptr [EBP + -0x14],0x148
00459063  MOV dword ptr [EBP + -0x10],0x9d
0045906a  MOV dword ptr [EBP + -0xc],0x1de
00459071  MOV dword ptr [EBP + -0x8],0x6
00459078  MOV dword ptr [EBP + -0x4],0xf0
0045907f  MOV EAX,dword ptr [EBP + 0xc]
00459082  IMUL EAX,EAX,0x11
00459085  MOV ECX,dword ptr [EBP + 0x8]
00459088  ADD EAX,dword ptr [EBP + ECX*0x4 + -0x2c]
0045908c  MOV dword ptr [EBP + -0x18],EAX
0045908f  MOV EAX,dword ptr [EBP + -0x18]
00459092  MOV ESP,EBP
00459094  POP EBP
00459095  RET 0x8
