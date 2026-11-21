; FUN_005ccd90  005ccd90
005ccd90  PUSH EBP
005ccd91  MOV EBP,ESP
005ccd93  SUB ESP,0xc
005ccd96  MOV dword ptr [EBP + -0xc],ECX
005ccd99  MOV dword ptr [EBP + -0x4],0x0
005ccda0  JMP 0x005ccdab
005ccda2  MOV EAX,dword ptr [EBP + -0x4]
005ccda5  ADD EAX,0x1
005ccda8  MOV dword ptr [EBP + -0x4],EAX
005ccdab  CMP dword ptr [EBP + -0x4],0x5
005ccdaf  JGE 0x005ccde5
005ccdb1  MOV dword ptr [EBP + -0x8],0x0
005ccdb8  JMP 0x005ccdc3
005ccdba  MOV ECX,dword ptr [EBP + -0x8]
005ccdbd  ADD ECX,0x1
005ccdc0  MOV dword ptr [EBP + -0x8],ECX
005ccdc3  CMP dword ptr [EBP + -0x8],0x4
005ccdc7  JGE 0x005ccde3
005ccdc9  MOV EDX,dword ptr [EBP + -0x8]
005ccdcc  PUSH EDX
005ccdcd  MOV EAX,dword ptr [EBP + -0x4]
005ccdd0  PUSH EAX
005ccdd1  MOV ECX,dword ptr [EBP + -0xc]
005ccdd4  MOV EDX,dword ptr [ECX]
005ccdd6  MOV ECX,dword ptr [EBP + -0xc]
005ccdd9  MOV EAX,dword ptr [EDX + 0xc0]
005ccddf  CALL EAX
005ccde1  JMP 0x005ccdba
005ccde3  JMP 0x005ccda2
005ccde5  MOV ESP,EBP
005ccde7  POP EBP
005ccde8  RET
