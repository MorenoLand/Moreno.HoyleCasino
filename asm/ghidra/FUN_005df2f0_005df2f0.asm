; FUN_005df2f0  005df2f0
005df2f0  PUSH EBP
005df2f1  MOV EBP,ESP
005df2f3  SUB ESP,0xc
005df2f6  MOV dword ptr [EBP + -0xc],ECX
005df2f9  MOV dword ptr [EBP + -0x8],0x0
005df300  MOV dword ptr [EBP + -0x4],0x1c4
005df307  MOV EAX,dword ptr [EBP + 0x8]
005df30a  MOV ECX,dword ptr [EBP + -0x8]
005df30d  MOV dword ptr [EAX],ECX
005df30f  MOV EDX,dword ptr [EBP + -0x4]
005df312  MOV dword ptr [EAX + 0x4],EDX
005df315  MOV EAX,dword ptr [EBP + 0x8]
005df318  MOV ESP,EBP
005df31a  POP EBP
005df31b  RET 0x4
