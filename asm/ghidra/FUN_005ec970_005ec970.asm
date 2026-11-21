; FUN_005ec970  005ec970
005ec970  PUSH EBP
005ec971  MOV EBP,ESP
005ec973  SUB ESP,0x18
005ec976  PUSH EBX
005ec977  PUSH ESI
005ec978  MOV dword ptr [EBP + -0x18],ECX
005ec97b  MOV EAX,dword ptr [EBP + -0x18]
005ec97e  CMP dword ptr [EAX + 0xac],0x0
005ec985  JNZ 0x005ec9bf
005ec987  PUSH 0x8
005ec989  CALL 0x00686d82
005ec98e  ADD ESP,0x4
005ec991  MOV dword ptr [EBP + -0xc],EAX
005ec994  MOV ECX,dword ptr [EBP + -0x18]
005ec997  MOV EDX,dword ptr [EBP + -0xc]
005ec99a  MOV dword ptr [ECX + 0xac],EDX
005ec9a0  MOV EAX,dword ptr [EBP + -0x18]
005ec9a3  MOV ECX,dword ptr [EAX + 0xac]
005ec9a9  MOV dword ptr [ECX],0x0
005ec9af  MOV EDX,dword ptr [EBP + -0x18]
005ec9b2  MOV EAX,dword ptr [EDX + 0xac]
005ec9b8  MOV dword ptr [EAX + 0x4],0x0
005ec9bf  MOV ECX,dword ptr [EBP + -0x18]
005ec9c2  MOV EDX,dword ptr [ECX + 0xac]
005ec9c8  MOV EAX,dword ptr [EDX]
005ec9ca  ADD EAX,0x1
005ec9cd  MOV ECX,dword ptr [EBP + -0x18]
005ec9d0  MOV EDX,dword ptr [ECX + 0xac]
005ec9d6  MOV dword ptr [EDX],EAX
005ec9d8  MOV EAX,dword ptr [EBP + -0x18]
005ec9db  MOV ECX,dword ptr [EAX + 0xac]
005ec9e1  XOR EBX,EBX
005ec9e3  MOV EAX,dword ptr [ECX]
005ec9e5  MOV EDX,0x8
005ec9ea  MUL EDX
005ec9ec  SETO BL
005ec9ef  NEG EBX
005ec9f1  OR EBX,EAX
005ec9f3  PUSH EBX
005ec9f4  CALL 0x00686d82
005ec9f9  ADD ESP,0x4
005ec9fc  MOV dword ptr [EBP + -0x10],EAX
005ec9ff  MOV EAX,dword ptr [EBP + -0x10]
005eca02  MOV dword ptr [EBP + -0x4],EAX
005eca05  MOV dword ptr [EBP + -0x8],0x0
005eca0c  JMP 0x005eca17
005eca0e  MOV ECX,dword ptr [EBP + -0x8]
005eca11  ADD ECX,0x1
005eca14  MOV dword ptr [EBP + -0x8],ECX
005eca17  MOV EDX,dword ptr [EBP + -0x18]
005eca1a  MOV EAX,dword ptr [EDX + 0xac]
005eca20  MOV ECX,dword ptr [EAX]
005eca22  SUB ECX,0x1
005eca25  CMP dword ptr [EBP + -0x8],ECX
005eca28  JGE 0x005eca4f
005eca2a  MOV EDX,dword ptr [EBP + -0x18]
005eca2d  MOV EAX,dword ptr [EDX + 0xac]
005eca33  MOV ECX,dword ptr [EAX + 0x4]
005eca36  MOV EDX,dword ptr [EBP + -0x8]
005eca39  MOV EAX,dword ptr [ECX + EDX*0x8]
005eca3c  MOV ECX,dword ptr [ECX + EDX*0x8 + 0x4]
005eca40  MOV EDX,dword ptr [EBP + -0x8]
005eca43  MOV ESI,dword ptr [EBP + -0x4]
005eca46  MOV dword ptr [ESI + EDX*0x8],EAX
005eca49  MOV dword ptr [ESI + EDX*0x8 + 0x4],ECX
005eca4d  JMP 0x005eca0e
005eca4f  MOV EAX,dword ptr [EBP + -0x8]
005eca52  MOV ECX,dword ptr [EBP + -0x4]
005eca55  MOV DL,byte ptr [EBP + 0x8]
005eca58  MOV byte ptr [ECX + EAX*0x8],DL
005eca5b  MOV EAX,dword ptr [EBP + -0x8]
005eca5e  MOV ECX,dword ptr [EBP + -0x4]
005eca61  MOV DL,byte ptr [EBP + 0xc]
005eca64  MOV byte ptr [ECX + EAX*0x8 + 0x1],DL
005eca68  MOV EAX,dword ptr [EBP + -0x8]
005eca6b  MOV ECX,dword ptr [EBP + -0x4]
005eca6e  MOV DL,byte ptr [EBP + 0x10]
005eca71  MOV byte ptr [ECX + EAX*0x8 + 0x2],DL
005eca75  MOV EAX,dword ptr [EBP + -0x8]
005eca78  MOV ECX,dword ptr [EBP + -0x4]
005eca7b  MOV DL,byte ptr [EBP + 0x14]
005eca7e  MOV byte ptr [ECX + EAX*0x8 + 0x4],DL
005eca82  MOV EAX,dword ptr [EBP + -0x8]
005eca85  MOV ECX,dword ptr [EBP + -0x4]
005eca88  MOV DL,byte ptr [EBP + 0x18]
005eca8b  MOV byte ptr [ECX + EAX*0x8 + 0x5],DL
005eca8f  MOV EAX,dword ptr [EBP + -0x8]
005eca92  MOV ECX,dword ptr [EBP + -0x4]
005eca95  MOV DL,byte ptr [EBP + 0x1c]
005eca98  MOV byte ptr [ECX + EAX*0x8 + 0x6],DL
005eca9c  MOV EAX,dword ptr [EBP + -0x18]
005eca9f  MOV ECX,dword ptr [EAX + 0xac]
005ecaa5  CMP dword ptr [ECX + 0x4],0x0
005ecaa9  JZ 0x005ecac6
005ecaab  MOV EDX,dword ptr [EBP + -0x18]
005ecaae  MOV EAX,dword ptr [EDX + 0xac]
005ecab4  MOV ECX,dword ptr [EAX + 0x4]
005ecab7  MOV dword ptr [EBP + -0x14],ECX
005ecaba  MOV EDX,dword ptr [EBP + -0x14]
005ecabd  PUSH EDX
005ecabe  CALL 0x00686cae
005ecac3  ADD ESP,0x4
005ecac6  MOV EAX,dword ptr [EBP + -0x18]
005ecac9  MOV ECX,dword ptr [EAX + 0xac]
005ecacf  MOV EDX,dword ptr [EBP + -0x4]
005ecad2  MOV dword ptr [ECX + 0x4],EDX
005ecad5  POP ESI
005ecad6  POP EBX
005ecad7  MOV ESP,EBP
005ecad9  POP EBP
005ecada  RET 0x18
