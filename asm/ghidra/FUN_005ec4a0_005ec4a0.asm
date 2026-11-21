; FUN_005ec4a0  005ec4a0
005ec4a0  PUSH EBP
005ec4a1  MOV EBP,ESP
005ec4a3  SUB ESP,0x8
005ec4a6  CMP dword ptr [EBP + 0x10],0x1
005ec4aa  JG 0x005ec4b1
005ec4ac  JMP 0x005ec551
005ec4b1  MOV EAX,dword ptr [EBP + 0x8]
005ec4b4  MOV ECX,dword ptr [EBP + 0x8]
005ec4b7  MOV EDX,dword ptr [EAX + 0x8]
005ec4ba  SUB EDX,dword ptr [ECX]
005ec4bc  MOV dword ptr [EBP + -0x4],EDX
005ec4bf  MOV EAX,dword ptr [EBP + 0x8]
005ec4c2  MOV ECX,dword ptr [EBP + 0x8]
005ec4c5  MOV EDX,dword ptr [EAX + 0xc]
005ec4c8  SUB EDX,dword ptr [ECX + 0x4]
005ec4cb  MOV dword ptr [EBP + -0x8],EDX
005ec4ce  MOVZX EAX,byte ptr [EBP + 0x14]
005ec4d2  TEST EAX,EAX
005ec4d4  JZ 0x005ec50a
005ec4d6  MOV ECX,dword ptr [EBP + 0x8]
005ec4d9  MOV EDX,dword ptr [EBP + 0xc]
005ec4dc  MOV EAX,dword ptr [ECX + 0x4]
005ec4df  SUB EAX,dword ptr [EDX + 0x4]
005ec4e2  CDQ
005ec4e3  IDIV dword ptr [EBP + 0x10]
005ec4e6  MOV ECX,dword ptr [EBP + 0xc]
005ec4e9  ADD EAX,dword ptr [ECX + 0x4]
005ec4ec  MOV EDX,dword ptr [EBP + 0x8]
005ec4ef  MOV dword ptr [EDX + 0x4],EAX
005ec4f2  MOV EAX,dword ptr [EBP + 0x8]
005ec4f5  MOV ECX,dword ptr [EBP + 0xc]
005ec4f8  MOV EAX,dword ptr [EAX]
005ec4fa  SUB EAX,dword ptr [ECX]
005ec4fc  CDQ
005ec4fd  IDIV dword ptr [EBP + 0x10]
005ec500  MOV EDX,dword ptr [EBP + 0xc]
005ec503  ADD EAX,dword ptr [EDX]
005ec505  MOV ECX,dword ptr [EBP + 0x8]
005ec508  MOV dword ptr [ECX],EAX
005ec50a  MOV EAX,dword ptr [EBP + -0x4]
005ec50d  CDQ
005ec50e  IDIV dword ptr [EBP + 0x10]
005ec511  MOV EDX,dword ptr [EBP + 0x8]
005ec514  MOV ECX,dword ptr [EDX]
005ec516  ADD ECX,EAX
005ec518  MOV EAX,dword ptr [EBP + -0x4]
005ec51b  CDQ
005ec51c  IDIV dword ptr [EBP + 0x10]
005ec51f  NEG EDX
005ec521  SBB EDX,EDX
005ec523  NEG EDX
005ec525  ADD ECX,EDX
005ec527  MOV EDX,dword ptr [EBP + 0x8]
005ec52a  MOV dword ptr [EDX + 0x8],ECX
005ec52d  MOV EAX,dword ptr [EBP + -0x8]
005ec530  CDQ
005ec531  IDIV dword ptr [EBP + 0x10]
005ec534  MOV ECX,dword ptr [EBP + 0x8]
005ec537  MOV ECX,dword ptr [ECX + 0x4]
005ec53a  ADD ECX,EAX
005ec53c  MOV EAX,dword ptr [EBP + -0x8]
005ec53f  CDQ
005ec540  IDIV dword ptr [EBP + 0x10]
005ec543  NEG EDX
005ec545  SBB EDX,EDX
005ec547  NEG EDX
005ec549  ADD ECX,EDX
005ec54b  MOV EDX,dword ptr [EBP + 0x8]
005ec54e  MOV dword ptr [EDX + 0xc],ECX
005ec551  MOV ESP,EBP
005ec553  POP EBP
005ec554  RET
