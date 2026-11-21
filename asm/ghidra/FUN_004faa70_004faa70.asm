; FUN_004faa70  004faa70
004faa70  PUSH EBP
004faa71  MOV EBP,ESP
004faa73  SUB ESP,0x8
004faa76  MOV dword ptr [EBP + -0x8],ECX
004faa79  MOV dword ptr [EBP + -0x4],0x0
004faa80  MOV EAX,[0x007947e0]
004faa85  MOVZX ECX,byte ptr [EAX + 0x4ee9]
004faa8c  TEST ECX,ECX
004faa8e  JZ 0x004faa99
004faa90  MOV dword ptr [EBP + -0x4],0x30e7a1
004faa97  JMP 0x004faaa0
004faa99  MOV dword ptr [EBP + -0x4],0x30e79d
004faaa0  PUSH 0x186c3
004faaa5  MOV ECX,dword ptr [0x007947e0]
004faaab  CALL 0x005df2e0
004faab0  PUSH EAX
004faab1  MOV EDX,dword ptr [EBP + -0x4]
004faab4  PUSH EDX
004faab5  MOV ECX,dword ptr [EBP + -0x8]
004faab8  CALL 0x005f1e60
004faabd  MOV ECX,dword ptr [EBP + -0x8]
004faac0  CALL 0x0064e430
004faac5  MOV ESP,EBP
004faac7  POP EBP
004faac8  RET
