; FUN_00420bb0  00420bb0
00420bb0  PUSH EBP
00420bb1  MOV EBP,ESP
00420bb3  SUB ESP,0x8
00420bb6  MOV dword ptr [EBP + -0x8],ECX
00420bb9  MOV ECX,dword ptr [EBP + -0x8]
00420bbc  CALL 0x005e9e20
00420bc1  MOV EAX,dword ptr [EBP + -0x8]
00420bc4  MOV dword ptr [EAX],0x6b5ed4
00420bca  MOV ECX,dword ptr [EBP + -0x8]
00420bcd  MOV dword ptr [ECX + 0x4],0x0
00420bd4  MOV dword ptr [EBP + -0x4],0x0
00420bdb  JMP 0x00420be6
00420bdd  MOV EDX,dword ptr [EBP + -0x4]
00420be0  ADD EDX,0x1
00420be3  MOV dword ptr [EBP + -0x4],EDX
00420be6  CMP dword ptr [EBP + -0x4],0x3
00420bea  JGE 0x00420bfc
00420bec  MOV EAX,dword ptr [EBP + -0x4]
00420bef  MOV ECX,dword ptr [EBP + -0x8]
00420bf2  MOV dword ptr [ECX + EAX*0x4 + 0x8],0x0
00420bfa  JMP 0x00420bdd
00420bfc  MOV dword ptr [EBP + -0x4],0x0
00420c03  JMP 0x00420c0e
00420c05  MOV EDX,dword ptr [EBP + -0x4]
00420c08  ADD EDX,0x1
00420c0b  MOV dword ptr [EBP + -0x4],EDX
00420c0e  CMP dword ptr [EBP + -0x4],0xc
00420c12  JGE 0x00420c24
00420c14  MOV EAX,dword ptr [EBP + -0x4]
00420c17  MOV ECX,dword ptr [EBP + -0x8]
00420c1a  MOV dword ptr [ECX + EAX*0x4 + 0x14],0x0
00420c22  JMP 0x00420c05
00420c24  MOV EDX,dword ptr [EBP + -0x8]
00420c27  MOV dword ptr [EDX + 0x44],0x0
00420c2e  MOV EAX,dword ptr [EBP + -0x8]
00420c31  MOV ESP,EBP
00420c33  POP EBP
00420c34  RET
