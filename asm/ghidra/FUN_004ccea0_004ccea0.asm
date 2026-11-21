; FUN_004ccea0  004ccea0
004ccea0  PUSH EBP
004ccea1  MOV EBP,ESP
004ccea3  PUSH ECX
004ccea4  MOV dword ptr [EBP + -0x4],ECX
004ccea7  CMP dword ptr [EBP + 0x8],0x0
004cceab  JZ 0x004ccebc
004ccead  PUSH 0x0
004cceaf  MOV EAX,dword ptr [EBP + 0x8]
004cceb2  MOV EDX,dword ptr [EAX]
004cceb4  MOV ECX,dword ptr [EBP + 0x8]
004cceb7  MOV EAX,dword ptr [EDX + 0x1c]
004cceba  CALL EAX
004ccebc  MOV ESP,EBP
004ccebe  POP EBP
004ccebf  RET 0x4
