; FUN_005ff840  005ff840
005ff840  PUSH EBP
005ff841  MOV EBP,ESP
005ff843  SUB ESP,0xc
005ff846  MOV dword ptr [EBP + -0xc],ECX
005ff849  MOV EAX,dword ptr [EBP + -0xc]
005ff84c  MOV ECX,dword ptr [EAX + 0x210]
005ff852  CALL 0x0060c9a0
005ff857  MOV dword ptr [EBP + -0x4],EAX
005ff85a  MOV dword ptr [EBP + -0x8],0x0
005ff861  JMP 0x005ff86c
005ff863  MOV ECX,dword ptr [EBP + -0x8]
005ff866  ADD ECX,0x1
005ff869  MOV dword ptr [EBP + -0x8],ECX
005ff86c  MOV EDX,dword ptr [EBP + -0x8]
005ff86f  CMP EDX,dword ptr [EBP + -0x4]
005ff872  JGE 0x005ff898
005ff874  MOV EAX,dword ptr [EBP + -0xc]
005ff877  MOV ECX,dword ptr [EAX + 0x4]
005ff87a  PUSH ECX
005ff87b  MOV EDX,dword ptr [EBP + -0x8]
005ff87e  PUSH EDX
005ff87f  MOV EAX,dword ptr [EBP + -0xc]
005ff882  MOV ECX,dword ptr [EAX + 0x210]
005ff888  CALL 0x0060ca40
005ff88d  PUSH EAX
005ff88e  CALL 0x006104e0
005ff893  ADD ESP,0x8
005ff896  JMP 0x005ff863
005ff898  MOV ECX,dword ptr [EBP + -0xc]
005ff89b  MOV ECX,dword ptr [ECX + 0x210]
005ff8a1  CALL 0x0060ca10
005ff8a6  MOV ESP,EBP
005ff8a8  POP EBP
005ff8a9  RET
