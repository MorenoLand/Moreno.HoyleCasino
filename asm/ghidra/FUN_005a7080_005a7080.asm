; FUN_005a7080  005a7080
005a7080  PUSH EBP
005a7081  MOV EBP,ESP
005a7083  SUB ESP,0x10
005a7086  MOV dword ptr [EBP + -0xc],ECX
005a7089  MOV EAX,dword ptr [EBP + -0xc]
005a708c  CMP dword ptr [EAX + 0x34],0x0
005a7090  JZ 0x005a70a7
005a7092  MOV ECX,dword ptr [EBP + -0xc]
005a7095  MOV ECX,dword ptr [ECX + 0x34]
005a7098  CALL 0x005f8990
005a709d  MOV EDX,dword ptr [EBP + -0xc]
005a70a0  MOV dword ptr [EDX + 0x34],0x0
005a70a7  PUSH 0x0
005a70a9  MOV ECX,dword ptr [EBP + -0xc]
005a70ac  CALL 0x005a8730
005a70b1  MOV EAX,dword ptr [EBP + -0xc]
005a70b4  CMP dword ptr [EAX + 0x28],0x0
005a70b8  JZ 0x005a70f3
005a70ba  MOV ECX,dword ptr [EBP + -0xc]
005a70bd  MOV EDX,dword ptr [ECX + 0x28]
005a70c0  MOV dword ptr [EBP + -0x8],EDX
005a70c3  MOV EAX,dword ptr [EBP + -0x8]
005a70c6  MOV dword ptr [EBP + -0x4],EAX
005a70c9  CMP dword ptr [EBP + -0x4],0x0
005a70cd  JZ 0x005a70e2
005a70cf  PUSH 0x1
005a70d1  MOV ECX,dword ptr [EBP + -0x4]
005a70d4  MOV EDX,dword ptr [ECX]
005a70d6  MOV ECX,dword ptr [EBP + -0x4]
005a70d9  MOV EAX,dword ptr [EDX]
005a70db  CALL EAX
005a70dd  MOV dword ptr [EBP + -0x10],EAX
005a70e0  JMP 0x005a70e9
005a70e2  MOV dword ptr [EBP + -0x10],0x0
005a70e9  MOV ECX,dword ptr [EBP + -0xc]
005a70ec  MOV dword ptr [ECX + 0x28],0x0
005a70f3  MOV ESP,EBP
005a70f5  POP EBP
005a70f6  RET
