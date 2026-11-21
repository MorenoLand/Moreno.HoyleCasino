; FUN_005c9550  005c9550
005c9550  PUSH EBP
005c9551  MOV EBP,ESP
005c9553  SUB ESP,0x14
005c9556  MOV dword ptr [EBP + -0x14],ECX
005c9559  MOV dword ptr [EBP + -0x10],0x0
005c9560  MOV EAX,dword ptr [EBP + -0x14]
005c9563  MOV ECX,dword ptr [EAX + 0x10]
005c9566  MOV EDX,dword ptr [ECX + 0x18]
005c9569  MOV dword ptr [EBP + -0xc],EDX
005c956c  MOV dword ptr [EBP + -0x8],0x0
005c9573  JMP 0x005c957e
005c9575  MOV EAX,dword ptr [EBP + -0x8]
005c9578  ADD EAX,0x1
005c957b  MOV dword ptr [EBP + -0x8],EAX
005c957e  MOV ECX,dword ptr [EBP + -0x14]
005c9581  MOV EDX,dword ptr [ECX + 0x10]
005c9584  MOV EAX,dword ptr [EBP + -0x8]
005c9587  CMP EAX,dword ptr [EDX]
005c9589  JGE 0x005c95c7
005c958b  MOV ECX,dword ptr [EBP + -0x14]
005c958e  MOV EDX,dword ptr [ECX + 0x10]
005c9591  MOV EAX,dword ptr [EBP + -0x8]
005c9594  MOV ECX,dword ptr [EBP + 0x8]
005c9597  MOV EAX,dword ptr [ECX + EAX*0x4]
005c959a  CMP EAX,dword ptr [EDX + 0x18]
005c959d  JNZ 0x005c95b7
005c959f  MOV ECX,dword ptr [EBP + -0x8]
005c95a2  MOV EDX,dword ptr [EBP + 0xc]
005c95a5  MOV dword ptr [EDX + ECX*0x4],0x1
005c95ac  MOV EAX,dword ptr [EBP + -0x10]
005c95af  ADD EAX,0x1
005c95b2  MOV dword ptr [EBP + -0x10],EAX
005c95b5  JMP 0x005c9575
005c95b7  MOV ECX,dword ptr [EBP + -0x8]
005c95ba  MOV EDX,dword ptr [EBP + 0x8]
005c95bd  MOV EAX,dword ptr [EDX + ECX*0x4]
005c95c0  MOV dword ptr [EBP + -0xc],EAX
005c95c3  JMP 0x005c95c7
005c95c7  JMP 0x005c95d2
005c95c9  MOV ECX,dword ptr [EBP + -0x8]
005c95cc  ADD ECX,0x1
005c95cf  MOV dword ptr [EBP + -0x8],ECX
005c95d2  MOV EDX,dword ptr [EBP + -0x14]
005c95d5  MOV EAX,dword ptr [EDX + 0x10]
005c95d8  MOV ECX,dword ptr [EBP + -0x8]
005c95db  CMP ECX,dword ptr [EAX]
005c95dd  JGE 0x005c961b
005c95df  MOV EDX,dword ptr [EBP + -0x8]
005c95e2  MOV EAX,dword ptr [EBP + 0x8]
005c95e5  MOV ECX,dword ptr [EAX + EDX*0x4]
005c95e8  CMP ECX,dword ptr [EBP + -0xc]
005c95eb  JZ 0x005c9603
005c95ed  MOV EDX,dword ptr [EBP + -0x14]
005c95f0  MOV EAX,dword ptr [EDX + 0x10]
005c95f3  MOV ECX,dword ptr [EBP + -0x8]
005c95f6  MOV EDX,dword ptr [EBP + 0x8]
005c95f9  MOV ECX,dword ptr [EDX + ECX*0x4]
005c95fc  CMP ECX,dword ptr [EAX + 0x18]
005c95ff  JZ 0x005c9603
005c9601  JMP 0x005c961b
005c9603  MOV EDX,dword ptr [EBP + -0x8]
005c9606  MOV EAX,dword ptr [EBP + 0xc]
005c9609  MOV dword ptr [EAX + EDX*0x4],0x1
005c9610  MOV ECX,dword ptr [EBP + -0x10]
005c9613  ADD ECX,0x1
005c9616  MOV dword ptr [EBP + -0x10],ECX
005c9619  JMP 0x005c95c9
005c961b  CMP dword ptr [EBP + 0x10],0x0
005c961f  JZ 0x005c9629
005c9621  MOV EDX,dword ptr [EBP + 0x10]
005c9624  MOV EAX,dword ptr [EBP + -0xc]
005c9627  MOV dword ptr [EDX],EAX
005c9629  CMP dword ptr [EBP + 0x14],0x0
005c962d  JZ 0x005c9637
005c962f  MOV ECX,dword ptr [EBP + 0x14]
005c9632  MOV EDX,dword ptr [EBP + -0x10]
005c9635  MOV dword ptr [ECX],EDX
005c9637  MOV ESP,EBP
005c9639  POP EBP
005c963a  RET 0x10
