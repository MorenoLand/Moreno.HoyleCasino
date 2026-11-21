; FUN_004fcae0  004fcae0
004fcae0  PUSH EBP
004fcae1  MOV EBP,ESP
004fcae3  PUSH ECX
004fcae4  MOV dword ptr [EBP + -0x4],ECX
004fcae7  MOV EAX,dword ptr [EBP + -0x4]
004fcaea  CMP dword ptr [EAX + 0x90],0x0
004fcaf1  JZ 0x004fcb0e
004fcaf3  MOV ECX,dword ptr [EBP + -0x4]
004fcaf6  MOV ECX,dword ptr [ECX + 0x90]
004fcafc  CALL 0x005f8990
004fcb01  MOV EDX,dword ptr [EBP + -0x4]
004fcb04  MOV dword ptr [EDX + 0x90],0x0
004fcb0e  PUSH 0x0
004fcb10  MOV EAX,dword ptr [EBP + -0x4]
004fcb13  MOV ECX,dword ptr [EAX + 0x4]
004fcb16  MOV EDX,dword ptr [EBP + -0x4]
004fcb19  MOV EAX,dword ptr [EDX + 0x4]
004fcb1c  MOV EDX,dword ptr [ECX]
004fcb1e  MOV ECX,EAX
004fcb20  MOV EAX,dword ptr [EDX + 0x1c]
004fcb23  CALL EAX
004fcb25  MOV ESP,EBP
004fcb27  POP EBP
004fcb28  RET
