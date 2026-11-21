; FUN_005eeaf0  005eeaf0
005eeaf0  PUSH EBP
005eeaf1  MOV EBP,ESP
005eeaf3  SUB ESP,0x14
005eeaf6  MOV dword ptr [EBP + -0x10],ECX
005eeaf9  MOV dword ptr [EBP + -0x8],0x0
005eeb00  MOV AL,byte ptr [EBP + 0x8]
005eeb03  PUSH EAX
005eeb04  MOV ECX,dword ptr [EBP + -0x10]
005eeb07  CALL 0x005f0a30
005eeb0c  MOVZX ECX,AL
005eeb0f  MOV dword ptr [EBP + -0xc],ECX
005eeb12  MOV dword ptr [EBP + -0x4],0x0
005eeb19  MOV EDX,dword ptr [EBP + -0x10]
005eeb1c  MOV EAX,dword ptr [EDX + 0x64]
005eeb1f  MOV dword ptr [EBP + -0x14],EAX
005eeb22  CMP dword ptr [EBP + -0x14],0x1
005eeb26  JZ 0x005eeb39
005eeb28  CMP dword ptr [EBP + -0x14],0x2
005eeb2c  JZ 0x005eeb71
005eeb2e  CMP dword ptr [EBP + -0x14],0x3
005eeb32  JZ 0x005eeba8
005eeb34  JMP 0x005eebcd
005eeb39  MOV ECX,dword ptr [EBP + -0x10]
005eeb3c  CMP dword ptr [ECX + 0x98],0x0
005eeb43  JZ 0x005eeb6f
005eeb45  MOV EDX,dword ptr [EBP + -0x10]
005eeb48  MOV EAX,dword ptr [EDX + 0x98]
005eeb4e  MOV ECX,dword ptr [EBP + -0xc]
005eeb51  MOVZX EDX,word ptr [EAX + ECX*0x8 + 0x6]
005eeb56  MOV EAX,dword ptr [EBP + -0x10]
005eeb59  MOV ECX,dword ptr [EAX + 0x98]
005eeb5f  MOV EAX,dword ptr [EBP + -0xc]
005eeb62  MOVZX ECX,word ptr [ECX + EAX*0x8 + 0x2]
005eeb67  SUB EDX,ECX
005eeb69  ADD EDX,0x1
005eeb6c  MOV dword ptr [EBP + -0x4],EDX
005eeb6f  JMP 0x005eebd1
005eeb71  MOV EDX,dword ptr [EBP + -0x10]
005eeb74  CMP dword ptr [EDX + 0xb0],0x0
005eeb7b  JZ 0x005eeba6
005eeb7d  MOV EAX,dword ptr [EBP + -0xc]
005eeb80  SUB EAX,0x20
005eeb83  MOV dword ptr [EBP + -0x8],EAX
005eeb86  JNS 0x005eeb8f
005eeb88  MOV dword ptr [EBP + -0x8],0x0
005eeb8f  MOV ECX,dword ptr [EBP + -0x8]
005eeb92  PUSH ECX
005eeb93  PUSH 0x0
005eeb95  MOV EDX,dword ptr [EBP + -0x10]
005eeb98  MOV ECX,dword ptr [EDX + 0xb0]
005eeb9e  CALL 0x00616450
005eeba3  MOV dword ptr [EBP + -0x4],EAX
005eeba6  JMP 0x005eebd1
005eeba8  MOV EAX,dword ptr [EBP + -0x10]
005eebab  CMP dword ptr [EAX + 0xb0],0x0
005eebb2  JZ 0x005eebcb
005eebb4  MOV ECX,dword ptr [EBP + -0xc]
005eebb7  PUSH ECX
005eebb8  PUSH 0x0
005eebba  MOV EDX,dword ptr [EBP + -0x10]
005eebbd  MOV ECX,dword ptr [EDX + 0xb0]
005eebc3  CALL 0x00616450
005eebc8  MOV dword ptr [EBP + -0x4],EAX
005eebcb  JMP 0x005eebd1
005eebcd  XOR EAX,EAX
005eebcf  JMP 0x005eebde
005eebd1  MOV EAX,dword ptr [EBP + -0x10]
005eebd4  MOVZX EAX,word ptr [EAX + 0x92]
005eebdb  ADD EAX,dword ptr [EBP + -0x4]
005eebde  MOV ESP,EBP
005eebe0  POP EBP
005eebe1  RET 0x4
