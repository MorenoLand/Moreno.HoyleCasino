; FUN_005d59e0  005d59e0
005d59e0  PUSH EBP
005d59e1  MOV EBP,ESP
005d59e3  SUB ESP,0x10
005d59e6  MOV dword ptr [EBP + -0xc],ECX
005d59e9  MOV ECX,dword ptr [EBP + -0xc]
005d59ec  CALL 0x005d52e0
005d59f1  MOV ECX,dword ptr [EBP + 0x8]
005d59f4  MOV dword ptr [EAX + 0x8],ECX
005d59f7  MOV EDX,dword ptr [EBP + 0xc]
005d59fa  MOV dword ptr [EAX + 0xc],EDX
005d59fd  MOV ECX,dword ptr [EBP + -0xc]
005d5a00  CALL 0x0063aac0
005d5a05  MOV EAX,dword ptr [EAX]
005d5a07  MOV dword ptr [EBP + -0x4],EAX
005d5a0a  CMP dword ptr [EBP + -0x4],0x2
005d5a0e  JZ 0x005d5a2c
005d5a10  MOV ECX,dword ptr [EBP + -0xc]
005d5a13  CALL 0x0063aac0
005d5a18  MOV ECX,dword ptr [EAX]
005d5a1a  MOV dword ptr [EBP + -0x8],ECX
005d5a1d  CMP dword ptr [EBP + -0x8],0x3
005d5a21  JZ 0x005d5a2c
005d5a23  MOV dword ptr [EBP + -0x10],0x0
005d5a2a  JMP 0x005d5a33
005d5a2c  MOV dword ptr [EBP + -0x10],0x1
005d5a33  MOVZX EDX,byte ptr [EBP + -0x10]
005d5a37  TEST EDX,EDX
005d5a39  JZ 0x005d5a43
005d5a3b  MOV ECX,dword ptr [EBP + -0xc]
005d5a3e  CALL 0x0063b0a0
005d5a43  MOV ESP,EBP
005d5a45  POP EBP
005d5a46  RET 0x8
