; FUN_005fb1b0  005fb1b0
005fb1b0  PUSH EBP
005fb1b1  MOV EBP,ESP
005fb1b3  SUB ESP,0xc
005fb1b6  MOV dword ptr [EBP + -0xc],ECX
005fb1b9  MOV ECX,dword ptr [EBP + 0xc]
005fb1bc  CALL 0x0060c9a0
005fb1c1  MOV dword ptr [EBP + -0x8],EAX
005fb1c4  MOV dword ptr [EBP + -0x4],0x0
005fb1cb  JMP 0x005fb1d6
005fb1cd  MOV EAX,dword ptr [EBP + -0x4]
005fb1d0  ADD EAX,0x1
005fb1d3  MOV dword ptr [EBP + -0x4],EAX
005fb1d6  MOV ECX,dword ptr [EBP + -0x4]
005fb1d9  CMP ECX,dword ptr [EBP + -0x8]
005fb1dc  JGE 0x005fb206
005fb1de  MOV EDX,dword ptr [EBP + -0x4]
005fb1e1  PUSH EDX
005fb1e2  MOV ECX,dword ptr [EBP + 0xc]
005fb1e5  CALL 0x0060ca40
005fb1ea  MOV ECX,EAX
005fb1ec  CALL 0x005f5400
005fb1f1  CMP EAX,dword ptr [EBP + 0x8]
005fb1f4  JNZ 0x005fb204
005fb1f6  MOV EAX,dword ptr [EBP + -0x4]
005fb1f9  PUSH EAX
005fb1fa  MOV ECX,dword ptr [EBP + 0xc]
005fb1fd  CALL 0x0060ca40
005fb202  JMP 0x005fb208
005fb204  JMP 0x005fb1cd
005fb206  XOR EAX,EAX
005fb208  MOV ESP,EBP
005fb20a  POP EBP
005fb20b  RET 0x8
