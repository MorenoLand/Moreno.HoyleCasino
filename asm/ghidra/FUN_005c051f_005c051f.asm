; FUN_005c051f  005c051f
005c051f  MOV dword ptr [EBP + -0x4],0xffffffff
005c0526  MOV EAX,dword ptr [EBP + 0xfffffdf8]
005c052c  MOV ECX,dword ptr [EAX + 0x8]
005c052f  MOV EDX,dword ptr [EBP + 0x10]
005c0532  LEA EAX,[ECX + EDX*0x4]
005c0535  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005c053b  MOV dword ptr [ECX + 0x8],EAX
005c053e  MOV EDX,dword ptr [EBP + 0x10]
005c0541  SHL EDX,0x2
005c0544  MOV EAX,dword ptr [EBP + 0xfffffdf8]
005c054a  MOV ECX,dword ptr [EAX + 0x8]
005c054d  SUB ECX,EDX
005c054f  MOV dword ptr [EBP + 0xfffffe90],ECX
005c0555  MOV EDX,dword ptr [EBP + 0xc]
005c0558  MOV dword ptr [EBP + 0xfffffe94],EDX
005c055e  MOV EAX,dword ptr [EBP + 0xfffffe90]
005c0564  MOV dword ptr [EBP + 0xfffffea0],EAX
005c056a  MOV ECX,dword ptr [EBP + 0xfffffe94]
005c0570  MOV dword ptr [EBP + 0xfffffe98],ECX
005c0576  JMP 0x005c0587
005c0578  MOV EDX,dword ptr [EBP + 0xfffffe98]
005c057e  ADD EDX,0x4
005c0581  MOV dword ptr [EBP + 0xfffffe98],EDX
005c0587  MOV EAX,dword ptr [EBP + 0xfffffe98]
005c058d  CMP EAX,dword ptr [EBP + 0xfffffea0]
005c0593  JZ 0x005c05a2
005c0595  MOV ECX,dword ptr [EBP + 0xfffffe98]
005c059b  MOV EDX,dword ptr [EBP + -0x14]
005c059e  MOV dword ptr [ECX],EDX
005c05a0  JMP 0x005c0578
005c05a2  JMP 0x005c06d1
