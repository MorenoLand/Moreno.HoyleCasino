; FUN_005b7f70  005b7f70
005b7f70  PUSH EBP
005b7f71  MOV EBP,ESP
005b7f73  SUB ESP,0x20
005b7f76  PUSH ESI
005b7f77  MOV dword ptr [EBP + -0x20],ECX
005b7f7a  MOV dword ptr [EBP + -0x8],0x0
005b7f81  MOV dword ptr [EBP + -0xc],0x0
005b7f88  JMP 0x005b7f93
005b7f8a  MOV EAX,dword ptr [EBP + -0xc]
005b7f8d  ADD EAX,0x1
005b7f90  MOV dword ptr [EBP + -0xc],EAX
005b7f93  CMP dword ptr [EBP + -0xc],0x5
005b7f97  JGE 0x005b7fad
005b7f99  MOV ECX,dword ptr [EBP + -0xc]
005b7f9c  PUSH ECX
005b7f9d  MOV ECX,dword ptr [EBP + -0x20]
005b7fa0  CALL 0x005b5ff0
005b7fa5  ADD EAX,dword ptr [EBP + -0x8]
005b7fa8  MOV dword ptr [EBP + -0x8],EAX
005b7fab  JMP 0x005b7f8a
005b7fad  MOV EDX,dword ptr [EBP + -0x20]
005b7fb0  MOV EAX,dword ptr [EDX + 0x57c]
005b7fb6  MOV ECX,dword ptr [EAX + 0x80c]
005b7fbc  SUB ECX,dword ptr [EBP + -0x8]
005b7fbf  MOV dword ptr [EBP + -0x4],ECX
005b7fc2  MOV dword ptr [EBP + -0x10],0x0
005b7fc9  JMP 0x005b7fd4
005b7fcb  MOV EDX,dword ptr [EBP + -0x10]
005b7fce  ADD EDX,0x1
005b7fd1  MOV dword ptr [EBP + -0x10],EDX
005b7fd4  CMP dword ptr [EBP + -0x10],0x5
005b7fd8  JGE 0x005b8069
005b7fde  MOV EAX,dword ptr [EBP + -0x20]
005b7fe1  MOV ECX,dword ptr [EAX + 0x57c]
005b7fe7  MOV EDX,dword ptr [ECX + 0x80c]
005b7fed  SUB EDX,0x1
005b7ff0  MOV dword ptr [EBP + -0x14],EDX
005b7ff3  JMP 0x005b7ffe
005b7ff5  MOV EAX,dword ptr [EBP + -0x14]
005b7ff8  SUB EAX,0x1
005b7ffb  MOV dword ptr [EBP + -0x14],EAX
005b7ffe  CMP dword ptr [EBP + -0x14],0x0
005b8002  JLE 0x005b8064
005b8004  MOV ECX,dword ptr [EBP + -0x4]
005b8007  PUSH ECX
005b8008  CALL 0x0062fbf0
005b800d  ADD ESP,0x4
005b8010  ADD EAX,dword ptr [EBP + -0x8]
005b8013  MOV dword ptr [EBP + -0x1c],EAX
005b8016  MOV EDX,dword ptr [EBP + -0x20]
005b8019  MOV EAX,dword ptr [EDX + 0x57c]
005b801f  MOV ECX,dword ptr [EBP + -0x1c]
005b8022  MOV DX,word ptr [EAX + ECX*0x2 + 0x4]
005b8027  MOV word ptr [EBP + -0x18],DX
005b802b  MOV EAX,dword ptr [EBP + -0x20]
005b802e  MOV ECX,dword ptr [EAX + 0x57c]
005b8034  MOV EDX,dword ptr [EBP + -0x20]
005b8037  MOV EAX,dword ptr [EDX + 0x57c]
005b803d  MOV EDX,dword ptr [EBP + -0x1c]
005b8040  MOV ESI,dword ptr [EBP + -0x14]
005b8043  MOV CX,word ptr [ECX + ESI*0x2 + 0x4]
005b8048  MOV word ptr [EAX + EDX*0x2 + 0x4],CX
005b804d  MOV EDX,dword ptr [EBP + -0x20]
005b8050  MOV EAX,dword ptr [EDX + 0x57c]
005b8056  MOV ECX,dword ptr [EBP + -0x14]
005b8059  MOV DX,word ptr [EBP + -0x18]
005b805d  MOV word ptr [EAX + ECX*0x2 + 0x4],DX
005b8062  JMP 0x005b7ff5
005b8064  JMP 0x005b7fcb
005b8069  MOV EAX,dword ptr [EBP + -0x20]
005b806c  MOV ECX,dword ptr [EAX + 0x57c]
005b8072  MOV EDX,dword ptr [ECX + 0x80c]
005b8078  SUB EDX,0x1
005b807b  PUSH EDX
005b807c  MOV EAX,dword ptr [EBP + -0x20]
005b807f  MOV ECX,dword ptr [EAX + 0x57c]
005b8085  CALL 0x006436a0
005b808a  POP ESI
005b808b  MOV ESP,EBP
005b808d  POP EBP
005b808e  RET
