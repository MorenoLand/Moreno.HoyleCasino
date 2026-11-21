; FUN_00447af0  00447af0
00447af0  PUSH EBP
00447af1  MOV EBP,ESP
00447af3  SUB ESP,0x28
00447af6  MOV dword ptr [EBP + -0x28],ECX
00447af9  MOV dword ptr [EBP + -0x24],0xf5
00447b00  MOV dword ptr [EBP + -0x20],0xf5
00447b07  MOV dword ptr [EBP + -0x1c],0x9c
00447b0e  MOV dword ptr [EBP + -0x18],0x9c
00447b15  MOV dword ptr [EBP + -0x14],0x10e
00447b1c  MOV dword ptr [EBP + -0x10],0x10e
00447b23  MOV dword ptr [EBP + -0xc],0x55
00447b2a  MOV dword ptr [EBP + -0x8],0x55
00447b31  CMP dword ptr [EBP + 0x8],-0x1
00447b35  JNZ 0x00447b3e
00447b37  MOV EAX,0x4d
00447b3c  JMP 0x00447b4e
00447b3e  MOV EAX,dword ptr [EBP + 0x8]
00447b41  MOV ECX,dword ptr [EBP + EAX*0x4 + -0x24]
00447b45  MOV dword ptr [EBP + -0x4],ECX
00447b48  MOV EAX,dword ptr [EBP + -0x4]
00447b4b  SUB EAX,0x8
00447b4e  MOV ESP,EBP
00447b50  POP EBP
00447b51  RET 0x8
