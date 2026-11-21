; FUN_005ca6c0  005ca6c0
005ca6c0  PUSH EBP
005ca6c1  MOV EBP,ESP
005ca6c3  SUB ESP,0x24
005ca6c6  MOV dword ptr [EBP + -0x20],ECX
005ca6c9  MOV EAX,[0x007947e4]
005ca6ce  MOV EDX,dword ptr [EAX]
005ca6d0  MOV ECX,dword ptr [0x007947e4]
005ca6d6  MOV EAX,dword ptr [EDX + 0x25c]
005ca6dc  CALL EAX
005ca6de  MOV dword ptr [EBP + -0x4],EAX
005ca6e1  CMP dword ptr [EBP + -0x4],0x0
005ca6e5  JZ 0x005ca77c
005ca6eb  MOV ECX,dword ptr [EBP + -0x4]
005ca6ee  CALL 0x0063aac0
005ca6f3  MOV ECX,dword ptr [EAX]
005ca6f5  MOV dword ptr [EBP + -0x18],ECX
005ca6f8  CMP dword ptr [EBP + -0x18],0x2
005ca6fc  JZ 0x005ca71a
005ca6fe  MOV ECX,dword ptr [EBP + -0x4]
005ca701  CALL 0x0063aac0
005ca706  MOV EDX,dword ptr [EAX]
005ca708  MOV dword ptr [EBP + -0x1c],EDX
005ca70b  CMP dword ptr [EBP + -0x1c],0x3
005ca70f  JZ 0x005ca71a
005ca711  MOV dword ptr [EBP + -0x24],0x0
005ca718  JMP 0x005ca721
005ca71a  MOV dword ptr [EBP + -0x24],0x1
005ca721  MOVZX EAX,byte ptr [EBP + -0x24]
005ca725  TEST EAX,EAX
005ca727  JZ 0x005ca77c
005ca729  PUSH 0x0
005ca72b  PUSH 0x0
005ca72d  CALL 0x0064c8a0
005ca732  ADD ESP,0x8
005ca735  MOV dword ptr [EBP + -0xc],EAX
005ca738  MOV dword ptr [EBP + -0x8],EDX
005ca73b  MOV ECX,dword ptr [EBP + -0x8]
005ca73e  PUSH ECX
005ca73f  MOV EDX,dword ptr [EBP + -0xc]
005ca742  PUSH EDX
005ca743  MOV ECX,dword ptr [EBP + -0x4]
005ca746  CALL 0x005d5e10
005ca74b  MOV ECX,dword ptr [EBP + -0x20]
005ca74e  CALL 0x005ca8b0
005ca753  PUSH 0x0
005ca755  PUSH 0x0
005ca757  CALL 0x0064c8a0
005ca75c  ADD ESP,0x8
005ca75f  MOV dword ptr [EBP + -0x14],EAX
005ca762  MOV dword ptr [EBP + -0x10],EDX
005ca765  PUSH 0x0
005ca767  MOV EAX,dword ptr [EBP + -0x10]
005ca76a  PUSH EAX
005ca76b  MOV ECX,dword ptr [EBP + -0x14]
005ca76e  PUSH ECX
005ca76f  MOV EDX,dword ptr [EBP + -0x4]
005ca772  MOV EAX,dword ptr [EDX]
005ca774  MOV ECX,dword ptr [EBP + -0x4]
005ca777  MOV EDX,dword ptr [EAX + 0xc]
005ca77a  CALL EDX
005ca77c  MOV ESP,EBP
005ca77e  POP EBP
005ca77f  RET
