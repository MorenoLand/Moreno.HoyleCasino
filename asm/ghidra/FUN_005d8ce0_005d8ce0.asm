; FUN_005d8ce0  005d8ce0
005d8ce0  PUSH EBP
005d8ce1  MOV EBP,ESP
005d8ce3  SUB ESP,0x10
005d8ce6  MOV dword ptr [EBP + -0x8],ECX
005d8ce9  MOV ECX,dword ptr [EBP + -0x8]
005d8cec  CALL 0x005da7b0
005d8cf1  MOVZX EAX,AL
005d8cf4  TEST EAX,EAX
005d8cf6  JNZ 0x005d8d12
005d8cf8  MOV ECX,dword ptr [0x007947e0]
005d8cfe  MOVZX EDX,byte ptr [ECX + 0x4ee9]
005d8d05  TEST EDX,EDX
005d8d07  JNZ 0x005d8d12
005d8d09  MOV dword ptr [EBP + -0xc],0x0
005d8d10  JMP 0x005d8d19
005d8d12  MOV dword ptr [EBP + -0xc],0x1
005d8d19  MOV AL,byte ptr [EBP + -0xc]
005d8d1c  MOV byte ptr [EBP + -0x1],AL
005d8d1f  MOV ECX,dword ptr [EBP + -0x8]
005d8d22  MOV EDX,dword ptr [ECX]
005d8d24  MOV ECX,dword ptr [EBP + -0x8]
005d8d27  MOV EAX,dword ptr [EDX + 0x80]
005d8d2d  CALL EAX
005d8d2f  MOVZX ECX,AL
005d8d32  TEST ECX,ECX
005d8d34  JZ 0x005d8d47
005d8d36  MOVZX EDX,byte ptr [EBP + -0x1]
005d8d3a  TEST EDX,EDX
005d8d3c  JNZ 0x005d8d47
005d8d3e  MOV dword ptr [EBP + -0x10],0x1
005d8d45  JMP 0x005d8d4e
005d8d47  MOV dword ptr [EBP + -0x10],0x0
005d8d4e  MOV AL,byte ptr [EBP + -0x10]
005d8d51  MOV ESP,EBP
005d8d53  POP EBP
005d8d54  RET 0x4
