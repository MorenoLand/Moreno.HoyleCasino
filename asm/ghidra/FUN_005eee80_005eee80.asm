; FUN_005eee80  005eee80
005eee80  PUSH EBP
005eee81  MOV EBP,ESP
005eee83  SUB ESP,0x18
005eee86  MOV dword ptr [EBP + -0x18],ECX
005eee89  MOV dword ptr [EBP + -0x8],0x0
005eee90  MOV dword ptr [EBP + -0x4],0x0
005eee97  JMP 0x005eee9f
005eee99  MOV EAX,dword ptr [EBP + -0x10]
005eee9c  MOV dword ptr [EBP + -0x8],EAX
005eee9f  MOV ECX,dword ptr [EBP + -0x18]
005eeea2  MOV EDX,dword ptr [ECX + 0x5c]
005eeea5  MOV EAX,dword ptr [EBP + -0x8]
005eeea8  MOVZX ECX,byte ptr [EDX + EAX*0x1]
005eeeac  TEST ECX,ECX
005eeeae  JZ 0x005eeee8
005eeeb0  PUSH 0x0
005eeeb2  LEA EDX,[EBP + -0xc]
005eeeb5  PUSH EDX
005eeeb6  LEA EAX,[EBP + -0x10]
005eeeb9  PUSH EAX
005eeeba  LEA ECX,[EBP + -0x14]
005eeebd  PUSH ECX
005eeebe  MOV EDX,dword ptr [EBP + -0x8]
005eeec1  PUSH EDX
005eeec2  MOV ECX,dword ptr [EBP + -0x18]
005eeec5  CALL 0x005eebf0
005eeeca  MOV EAX,dword ptr [EBP + -0x18]
005eeecd  MOV ECX,dword ptr [EAX + 0x5c]
005eeed0  MOV EDX,dword ptr [EBP + -0x14]
005eeed3  MOVZX EAX,byte ptr [ECX + EDX*0x1]
005eeed7  TEST EAX,EAX
005eeed9  JNZ 0x005eeedd
005eeedb  JMP 0x005eeee8
005eeedd  MOV ECX,dword ptr [EBP + -0x4]
005eeee0  ADD ECX,0x1
005eeee3  MOV dword ptr [EBP + -0x4],ECX
005eeee6  JMP 0x005eee99
005eeee8  MOV EAX,dword ptr [EBP + -0x4]
005eeeeb  MOV ESP,EBP
005eeeed  POP EBP
005eeeee  RET
