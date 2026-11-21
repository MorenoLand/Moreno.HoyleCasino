; FUN_005cb880  005cb880
005cb880  PUSH EBP
005cb881  MOV EBP,ESP
005cb883  SUB ESP,0x28
005cb886  MOV dword ptr [EBP + -0x28],ECX
005cb889  PUSH 0x0
005cb88b  PUSH 0x0
005cb88d  CALL 0x0064c8a0
005cb892  ADD ESP,0x8
005cb895  MOV dword ptr [EBP + -0x14],EAX
005cb898  MOV dword ptr [EBP + -0x10],EDX
005cb89b  MOV EAX,dword ptr [EBP + -0x14]
005cb89e  MOV dword ptr [EBP + -0xc],EAX
005cb8a1  MOV ECX,dword ptr [EBP + -0x10]
005cb8a4  MOV dword ptr [EBP + -0x8],ECX
005cb8a7  MOV dword ptr [EBP + -0x4],0x0
005cb8ae  JMP 0x005cb8b9
005cb8b0  MOV EDX,dword ptr [EBP + -0x4]
005cb8b3  ADD EDX,0x1
005cb8b6  MOV dword ptr [EBP + -0x4],EDX
005cb8b9  CMP dword ptr [EBP + -0x4],0x4
005cb8bd  JGE 0x005cb8fd
005cb8bf  MOV EAX,dword ptr [EBP + 0xc]
005cb8c2  SHL EAX,0x5
005cb8c5  MOV ECX,dword ptr [EBP + -0x28]
005cb8c8  LEA EDX,[ECX + EAX*0x1 + 0x48]
005cb8cc  MOV EAX,dword ptr [EBP + -0x4]
005cb8cf  MOV ECX,dword ptr [EDX + EAX*0x8]
005cb8d2  MOV EDX,dword ptr [EDX + EAX*0x8 + 0x4]
005cb8d6  MOV dword ptr [EBP + -0x1c],ECX
005cb8d9  MOV dword ptr [EBP + -0x18],EDX
005cb8dc  MOV EAX,dword ptr [EBP + -0x18]
005cb8df  PUSH EAX
005cb8e0  MOV ECX,dword ptr [EBP + -0x1c]
005cb8e3  PUSH ECX
005cb8e4  LEA EDX,[EBP + -0x24]
005cb8e7  PUSH EDX
005cb8e8  LEA ECX,[EBP + -0xc]
005cb8eb  CALL 0x0064c5c0
005cb8f0  MOV ECX,dword ptr [EAX]
005cb8f2  MOV EDX,dword ptr [EAX + 0x4]
005cb8f5  MOV dword ptr [EBP + -0xc],ECX
005cb8f8  MOV dword ptr [EBP + -0x8],EDX
005cb8fb  JMP 0x005cb8b0
005cb8fd  MOV EAX,dword ptr [EBP + 0x8]
005cb900  MOV ECX,dword ptr [EBP + -0xc]
005cb903  MOV dword ptr [EAX],ECX
005cb905  MOV EDX,dword ptr [EBP + -0x8]
005cb908  MOV dword ptr [EAX + 0x4],EDX
005cb90b  MOV EAX,dword ptr [EBP + 0x8]
005cb90e  MOV ESP,EBP
005cb910  POP EBP
005cb911  RET 0x8
