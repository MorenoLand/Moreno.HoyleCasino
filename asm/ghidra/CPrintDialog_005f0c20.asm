; CPrintDialog  005f0c20
005f0c20  PUSH EBP
005f0c21  MOV EBP,ESP
005f0c23  PUSH ECX
005f0c24  MOV dword ptr [EBP + -0x4],ECX
005f0c27  PUSH 0x0
005f0c29  MOV ECX,dword ptr [EBP + -0x4]
005f0c2c  CALL 0x005fc0d0
005f0c31  MOV EAX,dword ptr [EBP + -0x4]
005f0c34  MOV dword ptr [EAX],0x6d6558
005f0c3a  MOV ECX,dword ptr [EBP + -0x4]
005f0c3d  MOV EDX,dword ptr [EBP + 0x8]
005f0c40  MOV dword ptr [ECX + 0x20],EDX
005f0c43  MOV EAX,dword ptr [EBP + -0x4]
005f0c46  MOV ESP,EBP
005f0c48  POP EBP
005f0c49  RET 0x4
