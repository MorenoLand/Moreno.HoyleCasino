; FUN_005fc3d0  005fc3d0
005fc3d0  PUSH EBP
005fc3d1  MOV EBP,ESP
005fc3d3  PUSH ECX
005fc3d4  MOV dword ptr [EBP + -0x4],ECX
005fc3d7  MOV ECX,dword ptr [0x015e55e8]
005fc3dd  CALL 0x005f3b30
005fc3e2  MOVZX EAX,AL
005fc3e5  TEST EAX,EAX
005fc3e7  JZ 0x005fc3eb
005fc3e9  JMP 0x005fc417
005fc3eb  MOV ECX,dword ptr [EBP + -0x4]
005fc3ee  CMP dword ptr [ECX + 0x4],0x0
005fc3f2  JZ 0x005fc401
005fc3f4  MOV EDX,dword ptr [EBP + -0x4]
005fc3f7  MOV ECX,dword ptr [EDX + 0x4]
005fc3fa  CALL 0x005fc3d0
005fc3ff  JMP 0x005fc417
005fc401  MOV ECX,dword ptr [EBP + -0x4]
005fc404  CALL 0x005fc380
005fc409  PUSH EAX
005fc40a  MOV EAX,dword ptr [EBP + -0x4]
005fc40d  MOV EDX,dword ptr [EAX]
005fc40f  MOV ECX,dword ptr [EBP + -0x4]
005fc412  MOV EAX,dword ptr [EDX + 0x14]
005fc415  CALL EAX
005fc417  MOV ESP,EBP
005fc419  POP EBP
005fc41a  RET
