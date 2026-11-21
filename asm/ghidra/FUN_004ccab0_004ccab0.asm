; FUN_004ccab0  004ccab0
004ccab0  PUSH EBP
004ccab1  MOV EBP,ESP
004ccab3  PUSH ECX
004ccab4  MOV dword ptr [EBP + -0x4],ECX
004ccab7  CMP dword ptr [EBP + 0x8],0x0
004ccabb  JZ 0x004ccacc
004ccabd  PUSH 0x0
004ccabf  MOV EAX,dword ptr [EBP + 0x8]
004ccac2  MOV EDX,dword ptr [EAX]
004ccac4  MOV ECX,dword ptr [EBP + 0x8]
004ccac7  MOV EAX,dword ptr [EDX + 0x1c]
004ccaca  CALL EAX
004ccacc  MOV ESP,EBP
004ccace  POP EBP
004ccacf  RET 0x4
