; FUN_005afdc0  005afdc0
005afdc0  PUSH EBP
005afdc1  MOV EBP,ESP
005afdc3  SUB ESP,0x14
005afdc6  MOV dword ptr [EBP + -0x14],ECX
005afdc9  MOV dword ptr [EBP + -0x10],0x135
005afdd0  MOV dword ptr [EBP + -0xc],0x135
005afdd7  MOV dword ptr [EBP + -0x8],0xf1
005afdde  MOV dword ptr [EBP + -0x4],0xf1
005afde5  MOV EAX,dword ptr [EBP + 0x8]
005afde8  MOV EAX,dword ptr [EBP + EAX*0x4 + -0x10]
005afdec  MOV ESP,EBP
005afdee  POP EBP
005afdef  RET 0x4
