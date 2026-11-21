; FUN_005aeb20  005aeb20
005aeb20  PUSH EBP
005aeb21  MOV EBP,ESP
005aeb23  SUB ESP,0x8
005aeb26  MOV dword ptr [EBP + -0x8],ECX
005aeb29  MOV dword ptr [EBP + -0x4],0x0
005aeb30  JMP 0x005aeb3b
005aeb32  MOV EAX,dword ptr [EBP + -0x4]
005aeb35  ADD EAX,0x1
005aeb38  MOV dword ptr [EBP + -0x4],EAX
005aeb3b  CMP dword ptr [EBP + -0x4],0x4
005aeb3f  JGE 0x005aeb4d
005aeb41  MOV ECX,dword ptr [EBP + -0x8]
005aeb44  ADD ECX,dword ptr [EBP + -0x4]
005aeb47  MOV byte ptr [ECX + 0x14],0x0
005aeb4b  JMP 0x005aeb32
005aeb4d  MOV ESP,EBP
005aeb4f  POP EBP
005aeb50  RET
