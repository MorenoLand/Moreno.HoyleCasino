; FUN_005bb57f  005bb57f
005bb57f  MOV dword ptr [EBP + -0x4],0xffffffff
005bb586  MOV EAX,dword ptr [EBP + 0xfffffdf8]
005bb58c  MOV ECX,dword ptr [EAX + 0x8]
005bb58f  MOV EDX,dword ptr [EBP + 0x10]
005bb592  LEA EAX,[ECX + EDX*0x4]
005bb595  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005bb59b  MOV dword ptr [ECX + 0x8],EAX
005bb59e  MOV EDX,dword ptr [EBP + 0x10]
005bb5a1  SHL EDX,0x2
005bb5a4  MOV EAX,dword ptr [EBP + 0xfffffdf8]
005bb5aa  MOV ECX,dword ptr [EAX + 0x8]
005bb5ad  SUB ECX,EDX
005bb5af  MOV dword ptr [EBP + 0xfffffe90],ECX
005bb5b5  MOV EDX,dword ptr [EBP + 0xc]
005bb5b8  MOV dword ptr [EBP + 0xfffffe94],EDX
005bb5be  MOV EAX,dword ptr [EBP + 0xfffffe90]
005bb5c4  MOV dword ptr [EBP + 0xfffffea0],EAX
005bb5ca  MOV ECX,dword ptr [EBP + 0xfffffe94]
005bb5d0  MOV dword ptr [EBP + 0xfffffe98],ECX
005bb5d6  JMP 0x005bb5e7
005bb5d8  MOV EDX,dword ptr [EBP + 0xfffffe98]
005bb5de  ADD EDX,0x4
005bb5e1  MOV dword ptr [EBP + 0xfffffe98],EDX
005bb5e7  MOV EAX,dword ptr [EBP + 0xfffffe98]
005bb5ed  CMP EAX,dword ptr [EBP + 0xfffffea0]
005bb5f3  JZ 0x005bb602
005bb5f5  MOV ECX,dword ptr [EBP + 0xfffffe98]
005bb5fb  MOV EDX,dword ptr [EBP + -0x14]
005bb5fe  MOV dword ptr [ECX],EDX
005bb600  JMP 0x005bb5d8
005bb602  JMP 0x005bb731
