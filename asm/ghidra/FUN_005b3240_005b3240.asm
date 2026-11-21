; FUN_005b3240  005b3240
005b3240  PUSH EBP
005b3241  MOV EBP,ESP
005b3243  SUB ESP,0x8
005b3246  MOV dword ptr [EBP + -0x8],ECX
005b3249  MOV EAX,dword ptr [EBP + 0x10]
005b324c  PUSH EAX
005b324d  MOV ECX,dword ptr [EBP + 0xc]
005b3250  PUSH ECX
005b3251  MOV EDX,dword ptr [EBP + 0x8]
005b3254  PUSH EDX
005b3255  MOV ECX,dword ptr [EBP + -0x8]
005b3258  CALL 0x005b5f60
005b325d  MOV dword ptr [EBP + -0x4],EAX
005b3260  CMP dword ptr [EBP + -0x4],0x1
005b3264  JNZ 0x005b3282
005b3266  MOV dword ptr [EBP + -0x4],0xb
005b326d  MOV EAX,dword ptr [EBP + -0x8]
005b3270  MOV ECX,dword ptr [EAX + 0x5d0]
005b3276  ADD ECX,0x1
005b3279  MOV EDX,dword ptr [EBP + -0x8]
005b327c  MOV dword ptr [EDX + 0x5d0],ECX
005b3282  CMP dword ptr [EBP + -0x4],0x7
005b3286  JGE 0x005b329d
005b3288  MOV EAX,dword ptr [EBP + -0x8]
005b328b  MOV ECX,dword ptr [EAX + 0x5cc]
005b3291  ADD ECX,0x1
005b3294  MOV EDX,dword ptr [EBP + -0x8]
005b3297  MOV dword ptr [EDX + 0x5cc],ECX
005b329d  CMP dword ptr [EBP + -0x4],0x9
005b32a1  JLE 0x005b32b8
005b32a3  MOV EAX,dword ptr [EBP + -0x8]
005b32a6  MOV ECX,dword ptr [EAX + 0x5cc]
005b32ac  SUB ECX,0x1
005b32af  MOV EDX,dword ptr [EBP + -0x8]
005b32b2  MOV dword ptr [EDX + 0x5cc],ECX
005b32b8  MOV EAX,dword ptr [EBP + -0x8]
005b32bb  MOV ECX,dword ptr [EAX + 0x5c4]
005b32c1  ADD ECX,0x1
005b32c4  MOV EDX,dword ptr [EBP + -0x8]
005b32c7  MOV dword ptr [EDX + 0x5c4],ECX
005b32cd  MOV ECX,dword ptr [EBP + -0x8]
005b32d0  CALL 0x005b3340
005b32d5  MOV ECX,dword ptr [EBP + -0x8]
005b32d8  MOV dword ptr [ECX + 0x5c8],EAX
005b32de  PUSH 0x1
005b32e0  MOV EDX,dword ptr [EBP + 0x10]
005b32e3  PUSH EDX
005b32e4  MOV EAX,dword ptr [EBP + 0xc]
005b32e7  PUSH EAX
005b32e8  MOV ECX,dword ptr [EBP + 0x8]
005b32eb  PUSH ECX
005b32ec  MOV ECX,dword ptr [EBP + -0x8]
005b32ef  CALL 0x005b70b0
005b32f4  MOV ESP,EBP
005b32f6  POP EBP
005b32f7  RET 0xc
