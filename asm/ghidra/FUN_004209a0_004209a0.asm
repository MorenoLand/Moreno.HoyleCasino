; FUN_004209a0  004209a0
004209a0  PUSH EBP
004209a1  MOV EBP,ESP
004209a3  SUB ESP,0x24
004209a6  MOV dword ptr [EBP + -0x24],ECX
004209a9  MOV dword ptr [EBP + -0x20],0x166
004209b0  MOV dword ptr [EBP + -0x1c],0x170
004209b7  MOV dword ptr [EBP + -0x18],0xe3
004209be  MOV dword ptr [EBP + -0x14],0xd7
004209c5  MOV dword ptr [EBP + -0x10],0x1d9
004209cc  MOV dword ptr [EBP + -0xc],0x1fa
004209d3  MOV dword ptr [EBP + -0x8],0x62
004209da  MOV dword ptr [EBP + -0x4],0x43
004209e1  MOV EAX,dword ptr [EBP + -0x24]
004209e4  MOV ECX,dword ptr [EAX + 0xae0]
004209ea  MOV EAX,dword ptr [EBP + ECX*0x4 + -0x20]
004209ee  MOV ESP,EBP
004209f0  POP EBP
004209f1  RET 0x8
