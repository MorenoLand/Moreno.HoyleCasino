; FUN_005dc7d0  005dc7d0
005dc7d0  PUSH EBP
005dc7d1  MOV EBP,ESP
005dc7d3  SUB ESP,0xc
005dc7d6  MOV dword ptr [EBP + -0x8],ECX
005dc7d9  MOV EAX,dword ptr [EBP + 0x8]
005dc7dc  MOV dword ptr [EBP + -0xc],EAX
005dc7df  CMP dword ptr [EBP + -0xc],0x30dfb9
005dc7e6  JG 0x005dc80c
005dc7e8  CMP dword ptr [EBP + -0xc],0x30dfb9
005dc7ef  JZ 0x005dc8a8
005dc7f5  CMP dword ptr [EBP + -0xc],0x1391
005dc7fc  JZ 0x005dc866
005dc7fe  CMP dword ptr [EBP + -0xc],0x139b
005dc805  JZ 0x005dc81a
005dc807  JMP 0x005dc8c4
005dc80c  CMP dword ptr [EBP + -0xc],0x30dfba
005dc813  JZ 0x005dc870
005dc815  JMP 0x005dc8c4
005dc81a  PUSH -0x1
005dc81c  PUSH -0x1
005dc81e  PUSH 0x0
005dc820  CALL 0x005dcb00
005dc825  ADD ESP,0x4
005dc828  MOV ECX,EAX
005dc82a  CALL 0x005d54a0
005dc82f  MOVZX ECX,AL
005dc832  TEST ECX,ECX
005dc834  SETZ DL
005dc837  PUSH EDX
005dc838  PUSH 0x0
005dc83a  CALL 0x005dcb00
005dc83f  ADD ESP,0x4
005dc842  MOV ECX,EAX
005dc844  CALL 0x005d5500
005dc849  MOV ECX,dword ptr [0x0162ee84]
005dc84f  CALL 0x00637610
005dc854  MOV EAX,dword ptr [EBP + -0x8]
005dc857  MOV EDX,dword ptr [EAX]
005dc859  MOV ECX,dword ptr [EBP + -0x8]
005dc85c  MOV EAX,dword ptr [EDX + 0x2e0]
005dc862  CALL EAX
005dc864  JMP 0x005dc8c4
005dc866  MOV ECX,dword ptr [EBP + -0x8]
005dc869  CALL 0x005db240
005dc86e  JMP 0x005dc8c4
005dc870  MOV dword ptr [EBP + -0x4],0x0
005dc877  JMP 0x005dc882
005dc879  MOV ECX,dword ptr [EBP + -0x4]
005dc87c  ADD ECX,0x1
005dc87f  MOV dword ptr [EBP + -0x4],ECX
005dc882  CMP dword ptr [EBP + -0x4],0x4
005dc886  JGE 0x005dc89e
005dc888  MOV EDX,dword ptr [EBP + -0x4]
005dc88b  PUSH EDX
005dc88c  MOV EAX,dword ptr [EBP + -0x8]
005dc88f  MOV EDX,dword ptr [EAX]
005dc891  MOV ECX,dword ptr [EBP + -0x8]
005dc894  MOV EAX,dword ptr [EDX + 0x290]
005dc89a  CALL EAX
005dc89c  JMP 0x005dc879
005dc89e  MOV ECX,dword ptr [EBP + -0x8]
005dc8a1  CALL 0x005dc610
005dc8a6  JMP 0x005dc8d4
005dc8a8  PUSH -0x1
005dc8aa  PUSH 0x8
005dc8ac  MOV ECX,dword ptr [0x0162ee84]
005dc8b2  MOV EDX,dword ptr [ECX]
005dc8b4  MOV ECX,dword ptr [0x0162ee84]
005dc8ba  MOV EAX,dword ptr [EDX + 0x334]
005dc8c0  CALL EAX
005dc8c2  JMP 0x005dc8d4
005dc8c4  MOV ECX,dword ptr [EBP + 0xc]
005dc8c7  PUSH ECX
005dc8c8  MOV EDX,dword ptr [EBP + 0x8]
005dc8cb  PUSH EDX
005dc8cc  MOV ECX,dword ptr [EBP + -0x8]
005dc8cf  CALL 0x0064db70
005dc8d4  MOV ESP,EBP
005dc8d6  POP EBP
005dc8d7  RET 0x8
