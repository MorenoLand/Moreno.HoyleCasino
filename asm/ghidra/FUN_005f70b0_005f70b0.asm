; FUN_005f70b0  005f70b0
005f70b0  PUSH EBP
005f70b1  MOV EBP,ESP
005f70b3  SUB ESP,0x8
005f70b6  MOV dword ptr [EBP + -0x8],ECX
005f70b9  MOV ECX,dword ptr [EBP + -0x8]
005f70bc  CALL 0x005f5420
005f70c1  MOV dword ptr [EBP + -0x4],0x0
005f70c8  JMP 0x005f70d3
005f70ca  MOV EAX,dword ptr [EBP + -0x4]
005f70cd  ADD EAX,0x1
005f70d0  MOV dword ptr [EBP + -0x4],EAX
005f70d3  CMP dword ptr [EBP + -0x4],0x4
005f70d7  JGE 0x005f7103
005f70d9  MOV ECX,dword ptr [EBP + -0x4]
005f70dc  MOV EDX,dword ptr [EBP + -0x8]
005f70df  CMP dword ptr [EDX + ECX*0x4 + 0x48],0x0
005f70e4  JZ 0x005f7101
005f70e6  MOV EAX,dword ptr [EBP + -0x4]
005f70e9  MOV ECX,dword ptr [EBP + -0x8]
005f70ec  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x48]
005f70f0  MOV EAX,dword ptr [EBP + -0x4]
005f70f3  MOV ECX,dword ptr [EBP + -0x8]
005f70f6  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x48]
005f70fa  MOV EDX,dword ptr [EDX]
005f70fc  MOV EAX,dword ptr [EDX + 0x70]
005f70ff  CALL EAX
005f7101  JMP 0x005f70ca
005f7103  MOV ESP,EBP
005f7105  POP EBP
005f7106  RET
