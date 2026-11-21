; Catch_All@005c5a5f  005c5a5f
005c5a5f  MOV ECX,dword ptr [EBP + -0x4c]
005c5a62  MOV dword ptr [EBP + 0xfffffef4],ECX
005c5a68  MOV EDX,dword ptr [EBP + -0x50]
005c5a6b  MOV dword ptr [EBP + 0xfffffef8],EDX
005c5a71  MOV AL,byte ptr [EBP + 0xffffff06]
005c5a77  MOV byte ptr [EBP + 0xffffff07],AL
005c5a7d  MOV ECX,dword ptr [EBP + 0xfffffef4]
005c5a83  MOV dword ptr [EBP + 0xfffffefc],ECX
005c5a89  MOV EDX,dword ptr [EBP + 0xfffffef8]
005c5a8f  MOV dword ptr [EBP + 0xffffff00],EDX
005c5a95  JMP 0x005c5aa6
005c5a97  MOV EAX,dword ptr [EBP + 0xffffff00]
005c5a9d  ADD EAX,0x34
005c5aa0  MOV dword ptr [EBP + 0xffffff00],EAX
005c5aa6  MOV ECX,dword ptr [EBP + 0xffffff00]
005c5aac  CMP ECX,dword ptr [EBP + 0xfffffefc]
005c5ab2  JZ 0x005c5ad7
005c5ab4  MOV ECX,dword ptr [EBP + 0xffffff00]
005c5aba  CALL 0x005c3980
005c5abf  XOR EDX,EDX
005c5ac1  AND EDX,0x1
005c5ac4  JZ 0x005c5ad5
005c5ac6  MOV EAX,dword ptr [EBP + 0xffffff00]
005c5acc  PUSH EAX
005c5acd  CALL 0x00686cae
005c5ad2  ADD ESP,0x4
005c5ad5  JMP 0x005c5a97
005c5ad7  MOV ECX,dword ptr [EBP + -0x50]
005c5ada  PUSH ECX
005c5adb  CALL 0x00686cae
005c5ae0  ADD ESP,0x4
005c5ae3  PUSH 0x0
005c5ae5  PUSH 0x0
005c5ae7  CALL 0x00686fc0
