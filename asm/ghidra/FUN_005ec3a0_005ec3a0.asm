; FUN_005ec3a0  005ec3a0
005ec3a0  PUSH EBP
005ec3a1  MOV EBP,ESP
005ec3a3  SUB ESP,0x10
005ec3a6  MOV EAX,dword ptr [EBP + 0xc]
005ec3a9  MOV ECX,dword ptr [EBP + 0x10]
005ec3ac  MOV EDX,dword ptr [EAX]
005ec3ae  CMP EDX,dword ptr [ECX]
005ec3b0  JLE 0x005ec3bc
005ec3b2  MOV EAX,dword ptr [EBP + 0xc]
005ec3b5  MOV ECX,dword ptr [EAX]
005ec3b7  MOV dword ptr [EBP + -0x4],ECX
005ec3ba  JMP 0x005ec3c4
005ec3bc  MOV EDX,dword ptr [EBP + 0x10]
005ec3bf  MOV EAX,dword ptr [EDX]
005ec3c1  MOV dword ptr [EBP + -0x4],EAX
005ec3c4  MOV ECX,dword ptr [EBP + 0x8]
005ec3c7  MOV EDX,dword ptr [EBP + -0x4]
005ec3ca  MOV dword ptr [ECX],EDX
005ec3cc  MOV EAX,dword ptr [EBP + 0xc]
005ec3cf  MOV ECX,dword ptr [EBP + 0x10]
005ec3d2  MOV EDX,dword ptr [EAX + 0x8]
005ec3d5  CMP EDX,dword ptr [ECX + 0x8]
005ec3d8  JGE 0x005ec3e5
005ec3da  MOV EAX,dword ptr [EBP + 0xc]
005ec3dd  MOV ECX,dword ptr [EAX + 0x8]
005ec3e0  MOV dword ptr [EBP + -0x8],ECX
005ec3e3  JMP 0x005ec3ee
005ec3e5  MOV EDX,dword ptr [EBP + 0x10]
005ec3e8  MOV EAX,dword ptr [EDX + 0x8]
005ec3eb  MOV dword ptr [EBP + -0x8],EAX
005ec3ee  MOV ECX,dword ptr [EBP + 0x8]
005ec3f1  MOV EDX,dword ptr [EBP + -0x8]
005ec3f4  MOV dword ptr [ECX + 0x8],EDX
005ec3f7  MOV EAX,dword ptr [EBP + 0x8]
005ec3fa  MOV ECX,dword ptr [EBP + 0x8]
005ec3fd  MOV EDX,dword ptr [EAX]
005ec3ff  CMP EDX,dword ptr [ECX + 0x8]
005ec402  JL 0x005ec418
005ec404  PUSH 0x10
005ec406  PUSH 0x0
005ec408  MOV EAX,dword ptr [EBP + 0x8]
005ec40b  PUSH EAX
005ec40c  CALL 0x00686fa2
005ec411  ADD ESP,0xc
005ec414  XOR AL,AL
005ec416  JMP 0x005ec492
005ec418  MOV ECX,dword ptr [EBP + 0xc]
005ec41b  MOV EDX,dword ptr [EBP + 0x10]
005ec41e  MOV EAX,dword ptr [ECX + 0x4]
005ec421  CMP EAX,dword ptr [EDX + 0x4]
005ec424  JLE 0x005ec431
005ec426  MOV ECX,dword ptr [EBP + 0xc]
005ec429  MOV EDX,dword ptr [ECX + 0x4]
005ec42c  MOV dword ptr [EBP + -0xc],EDX
005ec42f  JMP 0x005ec43a
005ec431  MOV EAX,dword ptr [EBP + 0x10]
005ec434  MOV ECX,dword ptr [EAX + 0x4]
005ec437  MOV dword ptr [EBP + -0xc],ECX
005ec43a  MOV EDX,dword ptr [EBP + 0x8]
005ec43d  MOV EAX,dword ptr [EBP + -0xc]
005ec440  MOV dword ptr [EDX + 0x4],EAX
005ec443  MOV ECX,dword ptr [EBP + 0xc]
005ec446  MOV EDX,dword ptr [EBP + 0x10]
005ec449  MOV EAX,dword ptr [ECX + 0xc]
005ec44c  CMP EAX,dword ptr [EDX + 0xc]
005ec44f  JGE 0x005ec45c
005ec451  MOV ECX,dword ptr [EBP + 0xc]
005ec454  MOV EDX,dword ptr [ECX + 0xc]
005ec457  MOV dword ptr [EBP + -0x10],EDX
005ec45a  JMP 0x005ec465
005ec45c  MOV EAX,dword ptr [EBP + 0x10]
005ec45f  MOV ECX,dword ptr [EAX + 0xc]
005ec462  MOV dword ptr [EBP + -0x10],ECX
005ec465  MOV EDX,dword ptr [EBP + 0x8]
005ec468  MOV EAX,dword ptr [EBP + -0x10]
005ec46b  MOV dword ptr [EDX + 0xc],EAX
005ec46e  MOV ECX,dword ptr [EBP + 0x8]
005ec471  MOV EDX,dword ptr [EBP + 0x8]
005ec474  MOV EAX,dword ptr [ECX + 0x4]
005ec477  CMP EAX,dword ptr [EDX + 0xc]
005ec47a  JL 0x005ec490
005ec47c  PUSH 0x10
005ec47e  PUSH 0x0
005ec480  MOV ECX,dword ptr [EBP + 0x8]
005ec483  PUSH ECX
005ec484  CALL 0x00686fa2
005ec489  ADD ESP,0xc
005ec48c  XOR AL,AL
005ec48e  JMP 0x005ec492
005ec490  MOV AL,0x1
005ec492  MOV ESP,EBP
005ec494  POP EBP
005ec495  RET
