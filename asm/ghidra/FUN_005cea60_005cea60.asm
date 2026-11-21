; FUN_005cea60  005cea60
005cea60  PUSH EBP
005cea61  MOV EBP,ESP
005cea63  SUB ESP,0x8
005cea66  MOV dword ptr [EBP + -0x4],ECX
005cea69  MOV EAX,dword ptr [EBP + 0x8]
005cea6c  MOV dword ptr [EBP + -0x8],EAX
005cea6f  CMP dword ptr [EBP + -0x8],0x0
005cea73  JZ 0x005cea84
005cea75  CMP dword ptr [EBP + -0x8],0x1
005cea79  JZ 0x005ceb42
005cea7f  JMP 0x005ceb4d
005cea84  MOV ECX,dword ptr [0x0162ee80]
005cea8a  MOV EDX,dword ptr [ECX]
005cea8c  MOV ECX,dword ptr [0x0162ee80]
005cea92  MOV EAX,dword ptr [EDX + 0x168]
005cea98  CALL EAX
005cea9a  MOVZX ECX,AL
005cea9d  TEST ECX,ECX
005cea9f  JNZ 0x005ceab1
005ceaa1  MOV ECX,dword ptr [0x007947e4]
005ceaa7  CALL 0x005dbe20
005ceaac  JMP 0x005ceb4d
005ceab1  MOV EDX,dword ptr [EBP + -0x4]
005ceab4  MOV EAX,dword ptr [EDX + 0x1bc]
005ceaba  PUSH EAX
005ceabb  MOV ECX,dword ptr [EBP + -0x4]
005ceabe  CALL 0x005ce980
005ceac3  MOV ECX,dword ptr [0x007947e4]
005ceac9  CALL 0x005dbe20
005ceace  MOV ECX,dword ptr [0x007947e0]
005cead4  MOV byte ptr [ECX + 0x4ee9],0x1
005ceadb  MOV EDX,dword ptr [0x007947e0]
005ceae1  MOV byte ptr [EDX + 0x4eea],0x0
005ceae8  PUSH 0x4
005ceaea  PUSH 0x6d2e40
005ceaef  CALL 0x00630f40
005ceaf4  ADD ESP,0x4
005ceaf7  PUSH EAX
005ceaf8  PUSH 0x6d2e18
005ceafd  CALL 0x00630f40
005ceb02  ADD ESP,0x4
005ceb05  PUSH EAX
005ceb06  CALL 0x0062ff10
005ceb0b  ADD ESP,0xc
005ceb0e  CMP EAX,0x6
005ceb11  JNZ 0x005ceb1f
005ceb13  MOV EAX,[0x007947e0]
005ceb18  MOV byte ptr [EAX + 0x4eea],0x1
005ceb1f  PUSH -0x1
005ceb21  MOV ECX,dword ptr [EBP + -0x4]
005ceb24  MOV EDX,dword ptr [ECX + 0x1bc]
005ceb2a  PUSH EDX
005ceb2b  MOV EAX,[0x0162ee84]
005ceb30  MOV EDX,dword ptr [EAX]
005ceb32  MOV ECX,dword ptr [0x0162ee84]
005ceb38  MOV EAX,dword ptr [EDX + 0x334]
005ceb3e  CALL EAX
005ceb40  JMP 0x005ceb4d
005ceb42  MOV ECX,dword ptr [0x007947e4]
005ceb48  CALL 0x005dbe20
005ceb4d  MOV ESP,EBP
005ceb4f  POP EBP
005ceb50  RET 0x4
