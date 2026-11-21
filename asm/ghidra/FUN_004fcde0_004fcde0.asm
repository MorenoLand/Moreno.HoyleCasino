; FUN_004fcde0  004fcde0
004fcde0  PUSH EBP
004fcde1  MOV EBP,ESP
004fcde3  SUB ESP,0xc
004fcde6  MOV dword ptr [EBP + -0xc],ECX
004fcde9  LEA EAX,[EBP + -0x8]
004fcdec  PUSH EAX
004fcded  MOV ECX,dword ptr [EBP + 0xc]
004fcdf0  CALL 0x005d5a90
004fcdf5  MOV ECX,dword ptr [0x007947e4]
004fcdfb  CALL 0x005da7b0
004fce00  MOVZX ECX,AL
004fce03  TEST ECX,ECX
004fce05  JZ 0x004fce1c
004fce07  MOV EDX,dword ptr [EBP + 0xc]
004fce0a  MOV EAX,dword ptr [EDX + 0x4b4]
004fce10  MOV ECX,dword ptr [EDX + 0x4b8]
004fce16  MOV dword ptr [EBP + -0x8],EAX
004fce19  MOV dword ptr [EBP + -0x4],ECX
004fce1c  MOV EDX,dword ptr [EBP + 0x8]
004fce1f  MOV EAX,dword ptr [EBP + -0x8]
004fce22  MOV dword ptr [EDX],EAX
004fce24  MOV ECX,dword ptr [EBP + -0x4]
004fce27  MOV dword ptr [EDX + 0x4],ECX
004fce2a  MOV EAX,dword ptr [EBP + 0x8]
004fce2d  MOV ESP,EBP
004fce2f  POP EBP
004fce30  RET 0x8
