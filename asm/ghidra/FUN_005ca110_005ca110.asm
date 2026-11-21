; FUN_005ca110  005ca110
005ca110  PUSH EBP
005ca111  MOV EBP,ESP
005ca113  SUB ESP,0x8
005ca116  MOV dword ptr [EBP + -0x8],ECX
005ca119  MOV dword ptr [EBP + -0x4],0x0
005ca120  JMP 0x005ca12b
005ca122  MOV EAX,dword ptr [EBP + -0x4]
005ca125  ADD EAX,0x1
005ca128  MOV dword ptr [EBP + -0x4],EAX
005ca12b  CMP dword ptr [EBP + -0x4],0x4
005ca12f  JGE 0x005ca15e
005ca131  MOV ECX,dword ptr [EBP + -0x4]
005ca134  MOV EDX,dword ptr [EBP + -0x8]
005ca137  CMP dword ptr [EDX + ECX*0x4 + 0x4],0x0
005ca13c  JZ 0x005ca15c
005ca13e  MOV EAX,dword ptr [EBP + -0x4]
005ca141  MOV ECX,dword ptr [EBP + -0x8]
005ca144  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x4]
005ca148  MOV EAX,dword ptr [EBP + -0x4]
005ca14b  MOV ECX,dword ptr [EBP + -0x8]
005ca14e  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x4]
005ca152  MOV EDX,dword ptr [EDX]
005ca154  MOV EAX,dword ptr [EDX + 0xd0]
005ca15a  CALL EAX
005ca15c  JMP 0x005ca122
005ca15e  MOV dword ptr [EBP + -0x4],0x0
005ca165  JMP 0x005ca170
005ca167  MOV ECX,dword ptr [EBP + -0x4]
005ca16a  ADD ECX,0x1
005ca16d  MOV dword ptr [EBP + -0x4],ECX
005ca170  CMP dword ptr [EBP + -0x4],0x2
005ca174  JGE 0x005ca1a3
005ca176  MOV EDX,dword ptr [EBP + -0x4]
005ca179  MOV EAX,dword ptr [EBP + -0x8]
005ca17c  CMP dword ptr [EAX + EDX*0x4 + 0x14],0x0
005ca181  JZ 0x005ca1a1
005ca183  MOV ECX,dword ptr [EBP + -0x4]
005ca186  MOV EDX,dword ptr [EBP + -0x8]
005ca189  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x14]
005ca18d  MOV ECX,dword ptr [EBP + -0x4]
005ca190  MOV EDX,dword ptr [EBP + -0x8]
005ca193  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x14]
005ca197  MOV EAX,dword ptr [EAX]
005ca199  MOV EDX,dword ptr [EAX + 0xd0]
005ca19f  CALL EDX
005ca1a1  JMP 0x005ca167
005ca1a3  MOV EAX,dword ptr [EBP + -0x8]
005ca1a6  MOV ECX,dword ptr [EAX + 0x1c]
005ca1a9  MOV EDX,dword ptr [EBP + -0x8]
005ca1ac  MOV EAX,dword ptr [EDX + 0x1c]
005ca1af  MOV EDX,dword ptr [ECX]
005ca1b1  MOV ECX,EAX
005ca1b3  MOV EAX,dword ptr [EDX + 0xd0]
005ca1b9  CALL EAX
005ca1bb  MOV ECX,dword ptr [EBP + -0x8]
005ca1be  CMP dword ptr [ECX + 0x20],0x0
005ca1c2  JZ 0x005ca1d7
005ca1c4  MOV EDX,dword ptr [EBP + -0x8]
005ca1c7  MOV EAX,dword ptr [EDX + 0x20]
005ca1ca  MOV ECX,dword ptr [EBP + -0x8]
005ca1cd  MOV ECX,dword ptr [ECX + 0x20]
005ca1d0  MOV EDX,dword ptr [EAX]
005ca1d2  MOV EAX,dword ptr [EDX + 0x70]
005ca1d5  CALL EAX
005ca1d7  MOV ECX,dword ptr [EBP + -0x8]
005ca1da  CMP dword ptr [ECX + 0x24],0x0
005ca1de  JZ 0x005ca1f3
005ca1e0  MOV EDX,dword ptr [EBP + -0x8]
005ca1e3  MOV EAX,dword ptr [EDX + 0x24]
005ca1e6  MOV ECX,dword ptr [EBP + -0x8]
005ca1e9  MOV ECX,dword ptr [ECX + 0x24]
005ca1ec  MOV EDX,dword ptr [EAX]
005ca1ee  MOV EAX,dword ptr [EDX + 0x70]
005ca1f1  CALL EAX
005ca1f3  MOV ESP,EBP
005ca1f5  POP EBP
005ca1f6  RET
