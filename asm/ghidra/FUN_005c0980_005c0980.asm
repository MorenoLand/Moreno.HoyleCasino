; FUN_005c0980  005c0980
005c0980  PUSH EBP
005c0981  MOV EBP,ESP
005c0983  SUB ESP,0x24
005c0986  XOR EAX,EAX
005c0988  MOV byte ptr [EBP + -0x1],AL
005c098b  MOV CL,byte ptr [EBP + -0x4]
005c098e  MOV byte ptr [EBP + -0x2],CL
005c0991  MOV EDX,dword ptr [EBP + 0xc]
005c0994  MOV dword ptr [EBP + -0xc],EDX
005c0997  MOV EAX,dword ptr [EBP + 0x8]
005c099a  MOV dword ptr [EBP + -0x14],EAX
005c099d  MOV CL,byte ptr [EBP + -0x1]
005c09a0  MOV byte ptr [EBP + -0x22],CL
005c09a3  MOV DL,byte ptr [EBP + -0x3]
005c09a6  MOV byte ptr [EBP + -0x21],DL
005c09a9  MOV EAX,dword ptr [EBP + 0x10]
005c09ac  MOV dword ptr [EBP + -0x20],EAX
005c09af  MOV ECX,dword ptr [EBP + -0xc]
005c09b2  SUB ECX,dword ptr [EBP + -0x14]
005c09b5  SAR ECX,0x2
005c09b8  MOV dword ptr [EBP + -0x1c],ECX
005c09bb  MOV EDX,dword ptr [EBP + -0x1c]
005c09be  MOV EAX,dword ptr [EBP + -0x20]
005c09c1  LEA ECX,[EAX + EDX*0x4]
005c09c4  MOV dword ptr [EBP + -0x18],ECX
005c09c7  CMP dword ptr [EBP + -0x1c],0x0
005c09cb  JLE 0x005c09ec
005c09cd  MOV EDX,dword ptr [EBP + -0x1c]
005c09d0  SHL EDX,0x2
005c09d3  PUSH EDX
005c09d4  MOV EAX,dword ptr [EBP + -0x14]
005c09d7  PUSH EAX
005c09d8  MOV ECX,dword ptr [EBP + -0x1c]
005c09db  SHL ECX,0x2
005c09de  PUSH ECX
005c09df  MOV EDX,dword ptr [EBP + -0x20]
005c09e2  PUSH EDX
005c09e3  CALL dword ptr [0x006b2280]
005c09e9  ADD ESP,0x10
005c09ec  MOV EAX,dword ptr [EBP + -0x18]
005c09ef  MOV ESP,EBP
005c09f1  POP EBP
005c09f2  RET
