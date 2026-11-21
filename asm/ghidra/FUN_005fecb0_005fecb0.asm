; FUN_005fecb0  005fecb0
005fecb0  PUSH EBP
005fecb1  MOV EBP,ESP
005fecb3  SUB ESP,0x8
005fecb6  PUSH ESI
005fecb7  MOV dword ptr [EBP + -0x4],ECX
005fecba  MOV ECX,dword ptr [EBP + -0x4]
005fecbd  CALL 0x005feda0
005fecc2  TEST EAX,EAX
005fecc4  JZ 0x005fecf1
005fecc6  PUSH 0x0
005fecc8  MOV ECX,dword ptr [EBP + -0x4]
005feccb  CALL 0x005ff080
005fecd0  MOV ECX,EAX
005fecd2  CALL 0x005f5550
005fecd7  MOV ESI,EAX
005fecd9  PUSH 0x0
005fecdb  MOV ECX,dword ptr [EBP + -0x4]
005fecde  CALL 0x005ff080
005fece3  MOV ECX,EAX
005fece5  CALL 0x005eb470
005fecea  ADD ESI,EAX
005fecec  MOV dword ptr [EBP + -0x8],ESI
005fecef  JMP 0x005fecf8
005fecf1  MOV dword ptr [EBP + -0x8],0x0
005fecf8  MOV EAX,dword ptr [EBP + -0x8]
005fecfb  POP ESI
005fecfc  MOV ESP,EBP
005fecfe  POP EBP
005fecff  RET
