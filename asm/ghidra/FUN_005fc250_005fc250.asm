; FUN_005fc250  005fc250
005fc250  PUSH EBP
005fc251  MOV EBP,ESP
005fc253  PUSH ECX
005fc254  MOV dword ptr [EBP + -0x4],ECX
005fc257  MOV EAX,dword ptr [EBP + -0x4]
005fc25a  CMP dword ptr [EAX + 0x4],0x0
005fc25e  JZ 0x005fc26d
005fc260  MOV ECX,dword ptr [EBP + -0x4]
005fc263  MOV ECX,dword ptr [ECX + 0x4]
005fc266  CALL 0x005fc250
005fc26b  JMP 0x005fc29b
005fc26d  MOV EDX,dword ptr [EBP + -0x4]
005fc270  CMP dword ptr [EDX + 0x18],0x0
005fc274  JZ 0x005fc29b
005fc276  MOV ECX,dword ptr [0x015e55e8]
005fc27c  CALL 0x005f3e50
005fc281  MOV ECX,dword ptr [EBP + -0x4]
005fc284  CMP EAX,dword ptr [ECX + 0x18]
005fc287  JL 0x005fc29b
005fc289  MOV EDX,dword ptr [EBP + -0x4]
005fc28c  MOV dword ptr [EDX + 0x18],0x0
005fc293  MOV ECX,dword ptr [EBP + -0x4]
005fc296  CALL 0x005fc3d0
005fc29b  MOV ESP,EBP
005fc29d  POP EBP
005fc29e  RET
