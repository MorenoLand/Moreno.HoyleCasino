; FUN_005bec3f  005bec3f
005bec3f  MOV dword ptr [EBP + -0x4],0xffffffff
005bec46  MOV EAX,dword ptr [EBP + 0xfffffdf8]
005bec4c  MOV ECX,dword ptr [EAX + 0x8]
005bec4f  MOV EDX,dword ptr [EBP + 0x10]
005bec52  LEA EAX,[ECX + EDX*0x4]
005bec55  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005bec5b  MOV dword ptr [ECX + 0x8],EAX
005bec5e  MOV EDX,dword ptr [EBP + 0x10]
005bec61  SHL EDX,0x2
005bec64  MOV EAX,dword ptr [EBP + 0xfffffdf8]
005bec6a  MOV ECX,dword ptr [EAX + 0x8]
005bec6d  SUB ECX,EDX
005bec6f  MOV dword ptr [EBP + 0xfffffe90],ECX
005bec75  MOV EDX,dword ptr [EBP + 0xc]
005bec78  MOV dword ptr [EBP + 0xfffffe94],EDX
005bec7e  MOV EAX,dword ptr [EBP + 0xfffffe90]
005bec84  MOV dword ptr [EBP + 0xfffffea0],EAX
005bec8a  MOV ECX,dword ptr [EBP + 0xfffffe94]
005bec90  MOV dword ptr [EBP + 0xfffffe98],ECX
005bec96  JMP 0x005beca7
005bec98  MOV EDX,dword ptr [EBP + 0xfffffe98]
005bec9e  ADD EDX,0x4
005beca1  MOV dword ptr [EBP + 0xfffffe98],EDX
005beca7  MOV EAX,dword ptr [EBP + 0xfffffe98]
005becad  CMP EAX,dword ptr [EBP + 0xfffffea0]
005becb3  JZ 0x005becc2
005becb5  MOV ECX,dword ptr [EBP + 0xfffffe98]
005becbb  MOV EDX,dword ptr [EBP + -0x14]
005becbe  MOV dword ptr [ECX],EDX
005becc0  JMP 0x005bec98
005becc2  JMP 0x005bedf1
