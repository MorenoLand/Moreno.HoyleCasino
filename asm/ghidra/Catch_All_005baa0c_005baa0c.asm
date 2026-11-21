; Catch_All@005baa0c  005baa0c
005baa0c  MOV EAX,dword ptr [EBP + -0x28]
005baa0f  MOV dword ptr [EBP + 0xffffff18],EAX
005baa15  MOV ECX,dword ptr [EBP + -0x2c]
005baa18  MOV dword ptr [EBP + 0xffffff1c],ECX
005baa1e  MOV DL,byte ptr [EBP + 0xffffff2a]
005baa24  MOV byte ptr [EBP + 0xffffff2b],DL
005baa2a  MOV EAX,dword ptr [EBP + 0xffffff18]
005baa30  MOV dword ptr [EBP + 0xffffff20],EAX
005baa36  MOV ECX,dword ptr [EBP + 0xffffff1c]
005baa3c  MOV dword ptr [EBP + 0xffffff24],ECX
005baa42  JMP 0x005baa53
005baa44  MOV EDX,dword ptr [EBP + 0xffffff24]
005baa4a  ADD EDX,0x10
005baa4d  MOV dword ptr [EBP + 0xffffff24],EDX
005baa53  MOV EAX,dword ptr [EBP + 0xffffff24]
005baa59  CMP EAX,dword ptr [EBP + 0xffffff20]
005baa5f  JZ 0x005baa84
005baa61  MOV ECX,dword ptr [EBP + 0xffffff24]
005baa67  CALL 0x005be450
005baa6c  XOR ECX,ECX
005baa6e  AND ECX,0x1
005baa71  JZ 0x005baa82
005baa73  MOV EDX,dword ptr [EBP + 0xffffff24]
005baa79  PUSH EDX
005baa7a  CALL 0x00686cae
005baa7f  ADD ESP,0x4
005baa82  JMP 0x005baa44
005baa84  MOV EAX,dword ptr [EBP + -0x2c]
005baa87  PUSH EAX
005baa88  CALL 0x00686cae
005baa8d  ADD ESP,0x4
005baa90  PUSH 0x0
005baa92  PUSH 0x0
005baa94  CALL 0x00686fc0
