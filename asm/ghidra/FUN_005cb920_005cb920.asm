; FUN_005cb920  005cb920
005cb920  PUSH EBP
005cb921  MOV EBP,ESP
005cb923  SUB ESP,0x24
005cb926  MOV dword ptr [EBP + -0x20],ECX
005cb929  PUSH 0x0
005cb92b  LEA EAX,[EBP + -0xc]
005cb92e  PUSH EAX
005cb92f  MOV ECX,dword ptr [EBP + -0x20]
005cb932  CALL 0x005cb880
005cb937  MOV dword ptr [EBP + -0x4],0x1
005cb93e  JMP 0x005cb949
005cb940  MOV ECX,dword ptr [EBP + -0x4]
005cb943  ADD ECX,0x1
005cb946  MOV dword ptr [EBP + -0x4],ECX
005cb949  CMP dword ptr [EBP + -0x4],0x5
005cb94d  JGE 0x005cb982
005cb94f  MOV EDX,dword ptr [EBP + -0x4]
005cb952  PUSH EDX
005cb953  LEA EAX,[EBP + -0x14]
005cb956  PUSH EAX
005cb957  MOV ECX,dword ptr [EBP + -0x20]
005cb95a  CALL 0x005cb880
005cb95f  MOV ECX,dword ptr [EBP + -0xc]
005cb962  ADD ECX,dword ptr [EAX]
005cb964  MOV dword ptr [EBP + -0xc],ECX
005cb967  MOV EDX,dword ptr [EBP + -0x4]
005cb96a  PUSH EDX
005cb96b  LEA EAX,[EBP + -0x1c]
005cb96e  PUSH EAX
005cb96f  MOV ECX,dword ptr [EBP + -0x20]
005cb972  CALL 0x005cb880
005cb977  MOV ECX,dword ptr [EBP + -0x8]
005cb97a  ADD ECX,dword ptr [EAX + 0x4]
005cb97d  MOV dword ptr [EBP + -0x8],ECX
005cb980  JMP 0x005cb940
005cb982  CMP dword ptr [EBP + -0xc],0x0
005cb986  JG 0x005cb997
005cb988  CMP dword ptr [EBP + -0x8],0x0
005cb98c  JG 0x005cb997
005cb98e  MOV dword ptr [EBP + -0x24],0x0
005cb995  JMP 0x005cb99e
005cb997  MOV dword ptr [EBP + -0x24],0x1
005cb99e  MOV AL,byte ptr [EBP + -0x24]
005cb9a1  MOV ESP,EBP
005cb9a3  POP EBP
005cb9a4  RET
