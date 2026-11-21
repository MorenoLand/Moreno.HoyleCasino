; FUN_005a9420  005a9420
005a9420  PUSH EBP
005a9421  MOV EBP,ESP
005a9423  SUB ESP,0x14
005a9426  MOV dword ptr [EBP + -0x10],ECX
005a9429  MOV dword ptr [EBP + -0x4],0x0
005a9430  JMP 0x005a943b
005a9432  MOV EAX,dword ptr [EBP + -0x4]
005a9435  ADD EAX,0x1
005a9438  MOV dword ptr [EBP + -0x4],EAX
005a943b  CMP dword ptr [EBP + -0x4],0x1e
005a943f  JGE 0x005a94f3
005a9445  MOV ECX,dword ptr [EBP + 0xc]
005a9448  IMUL ECX,ECX,0x78
005a944b  MOV EDX,dword ptr [EBP + -0x10]
005a944e  LEA EAX,[EDX + ECX*0x1 + 0xae0]
005a9455  MOV ECX,dword ptr [EBP + -0x4]
005a9458  CMP dword ptr [EAX + ECX*0x4],0x0
005a945c  JZ 0x005a94ee
005a9462  MOV EDX,dword ptr [EBP + 0xc]
005a9465  IMUL EDX,EDX,0x78
005a9468  MOV EAX,dword ptr [EBP + -0x10]
005a946b  LEA ECX,[EAX + EDX*0x1 + 0xae0]
005a9472  MOV EDX,dword ptr [EBP + -0x4]
005a9475  MOV EAX,dword ptr [ECX + EDX*0x4]
005a9478  MOV ECX,dword ptr [EBP + 0xc]
005a947b  IMUL ECX,ECX,0x78
005a947e  MOV EDX,dword ptr [EBP + -0x10]
005a9481  LEA ECX,[EDX + ECX*0x1 + 0xae0]
005a9488  MOV EDX,dword ptr [EBP + -0x4]
005a948b  MOV ECX,dword ptr [ECX + EDX*0x4]
005a948e  MOV EAX,dword ptr [EAX]
005a9490  MOV EDX,dword ptr [EAX + 0x70]
005a9493  CALL EDX
005a9495  MOV EAX,dword ptr [EBP + 0xc]
005a9498  IMUL EAX,EAX,0x78
005a949b  MOV ECX,dword ptr [EBP + -0x10]
005a949e  LEA EDX,[ECX + EAX*0x1 + 0xae0]
005a94a5  MOV EAX,dword ptr [EBP + -0x4]
005a94a8  MOV ECX,dword ptr [EDX + EAX*0x4]
005a94ab  MOV dword ptr [EBP + -0xc],ECX
005a94ae  MOV EDX,dword ptr [EBP + -0xc]
005a94b1  MOV dword ptr [EBP + -0x8],EDX
005a94b4  CMP dword ptr [EBP + -0x8],0x0
005a94b8  JZ 0x005a94cd
005a94ba  PUSH 0x1
005a94bc  MOV EAX,dword ptr [EBP + -0x8]
005a94bf  MOV EDX,dword ptr [EAX]
005a94c1  MOV ECX,dword ptr [EBP + -0x8]
005a94c4  MOV EAX,dword ptr [EDX]
005a94c6  CALL EAX
005a94c8  MOV dword ptr [EBP + -0x14],EAX
005a94cb  JMP 0x005a94d4
005a94cd  MOV dword ptr [EBP + -0x14],0x0
005a94d4  MOV ECX,dword ptr [EBP + 0xc]
005a94d7  IMUL ECX,ECX,0x78
005a94da  MOV EDX,dword ptr [EBP + -0x10]
005a94dd  LEA EAX,[EDX + ECX*0x1 + 0xae0]
005a94e4  MOV ECX,dword ptr [EBP + -0x4]
005a94e7  MOV dword ptr [EAX + ECX*0x4],0x0
005a94ee  JMP 0x005a9432
005a94f3  MOV EDX,dword ptr [EBP + 0xc]
005a94f6  PUSH EDX
005a94f7  MOV EAX,dword ptr [EBP + 0x8]
005a94fa  PUSH EAX
005a94fb  MOV ECX,dword ptr [EBP + -0x10]
005a94fe  CALL 0x005ccc70
005a9503  MOV ESP,EBP
005a9505  POP EBP
005a9506  RET 0x8
