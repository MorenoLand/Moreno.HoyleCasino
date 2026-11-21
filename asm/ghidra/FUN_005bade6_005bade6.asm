; FUN_005bade6  005bade6
005bade6  MOV dword ptr [EBP + -0x4],0x1
005baded  MOV EDX,dword ptr [EBP + 0x10]
005badf0  SHL EDX,0x4
005badf3  MOV EAX,dword ptr [EBP + 0xfffffdb4]
005badf9  ADD EDX,dword ptr [EAX + 0x8]
005badfc  MOV ECX,dword ptr [EBP + 0xfffffdb4]
005bae02  MOV dword ptr [ECX + 0x8],EDX
005bae05  MOV EDX,dword ptr [EBP + 0x10]
005bae08  SHL EDX,0x4
005bae0b  MOV EAX,dword ptr [EBP + 0xfffffdb4]
005bae11  MOV ECX,dword ptr [EAX + 0x8]
005bae14  SUB ECX,EDX
005bae16  MOV dword ptr [EBP + 0xfffffe5c],ECX
005bae1c  MOV EDX,dword ptr [EBP + 0xc]
005bae1f  MOV dword ptr [EBP + 0xfffffe60],EDX
005bae25  MOV EAX,dword ptr [EBP + 0xfffffe5c]
005bae2b  MOV dword ptr [EBP + 0xfffffe6c],EAX
005bae31  MOV ECX,dword ptr [EBP + 0xfffffe60]
005bae37  MOV dword ptr [EBP + 0xfffffe64],ECX
005bae3d  JMP 0x005bae4e
005bae3f  MOV EDX,dword ptr [EBP + 0xfffffe64]
005bae45  ADD EDX,0x10
005bae48  MOV dword ptr [EBP + 0xfffffe64],EDX
005bae4e  MOV EAX,dword ptr [EBP + 0xfffffe64]
005bae54  CMP EAX,dword ptr [EBP + 0xfffffe6c]
005bae5a  JZ 0x005bae6d
005bae5c  LEA ECX,[EBP + -0x20]
005bae5f  PUSH ECX
005bae60  MOV ECX,dword ptr [EBP + 0xfffffe64]
005bae66  CALL 0x005bc040
005bae6b  JMP 0x005bae3f
005bae6d  JMP 0x005baf9d
