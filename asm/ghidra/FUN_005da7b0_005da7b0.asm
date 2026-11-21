; FUN_005da7b0  005da7b0
005da7b0  PUSH EBP
005da7b1  MOV EBP,ESP
005da7b3  SUB ESP,0x8
005da7b6  MOV dword ptr [EBP + -0x4],ECX
005da7b9  PUSH -0x1
005da7bb  MOV EAX,[0x0162ee84]
005da7c0  MOV EDX,dword ptr [EAX]
005da7c2  MOV ECX,dword ptr [0x0162ee84]
005da7c8  MOV EAX,dword ptr [EDX + 0x33c]
005da7ce  CALL EAX
005da7d0  MOVZX ECX,AL
005da7d3  TEST ECX,ECX
005da7d5  JZ 0x005da7f1
005da7d7  MOV EDX,dword ptr [0x007947e0]
005da7dd  MOVZX EAX,byte ptr [EDX + 0x4ee8]
005da7e4  TEST EAX,EAX
005da7e6  JZ 0x005da7f1
005da7e8  MOV dword ptr [EBP + -0x8],0x1
005da7ef  JMP 0x005da7f8
005da7f1  MOV dword ptr [EBP + -0x8],0x0
005da7f8  MOV AL,byte ptr [EBP + -0x8]
005da7fb  JMP 0x005da7ff
005da7ff  MOV ESP,EBP
005da801  POP EBP
005da802  RET
