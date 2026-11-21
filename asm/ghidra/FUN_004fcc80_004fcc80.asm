; FUN_004fcc80  004fcc80
004fcc80  PUSH EBP
004fcc81  MOV EBP,ESP
004fcc83  PUSH ECX
004fcc84  MOV dword ptr [EBP + -0x4],ECX
004fcc87  MOV EAX,dword ptr [EBP + -0x4]
004fcc8a  CMP dword ptr [EAX + 0x88],0x0
004fcc91  JZ 0x004fccae
004fcc93  MOV ECX,dword ptr [EBP + -0x4]
004fcc96  MOV ECX,dword ptr [ECX + 0x88]
004fcc9c  CALL 0x005f8990
004fcca1  MOV EDX,dword ptr [EBP + -0x4]
004fcca4  MOV dword ptr [EDX + 0x88],0x0
004fccae  MOV ESP,EBP
004fccb0  POP EBP
004fccb1  RET
