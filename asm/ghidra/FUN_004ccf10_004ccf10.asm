; FUN_004ccf10  004ccf10
004ccf10  PUSH EBP
004ccf11  MOV EBP,ESP
004ccf13  PUSH ECX
004ccf14  MOV dword ptr [EBP + -0x4],ECX
004ccf17  CMP dword ptr [EBP + 0x8],0x0
004ccf1b  JZ 0x004ccf2c
004ccf1d  PUSH 0x0
004ccf1f  MOV EAX,dword ptr [EBP + 0x8]
004ccf22  MOV EDX,dword ptr [EAX]
004ccf24  MOV ECX,dword ptr [EBP + 0x8]
004ccf27  MOV EAX,dword ptr [EDX + 0x1c]
004ccf2a  CALL EAX
004ccf2c  MOV ESP,EBP
004ccf2e  POP EBP
004ccf2f  RET 0x4
