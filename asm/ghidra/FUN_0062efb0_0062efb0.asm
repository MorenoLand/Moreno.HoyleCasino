; FUN_0062efb0  0062efb0
0062efb0  PUSH EBP
0062efb1  MOV EBP,ESP
0062efb3  SUB ESP,0x8
0062efb6  MOV dword ptr [EBP + -0x4],ECX
0062efb9  CMP dword ptr [EBP + 0x8],0xa
0062efbd  JZ 0x0062efce
0062efbf  CMP dword ptr [EBP + 0x8],0xd
0062efc3  JZ 0x0062efce
0062efc5  MOV dword ptr [EBP + -0x8],0x0
0062efcc  JMP 0x0062efd5
0062efce  MOV dword ptr [EBP + -0x8],0x1
0062efd5  MOV AL,byte ptr [EBP + -0x8]
0062efd8  MOV ESP,EBP
0062efda  POP EBP
0062efdb  RET 0x4
