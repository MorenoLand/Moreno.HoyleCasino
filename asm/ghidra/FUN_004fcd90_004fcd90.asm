; FUN_004fcd90  004fcd90
004fcd90  PUSH EBP
004fcd91  MOV EBP,ESP
004fcd93  PUSH ECX
004fcd94  MOV dword ptr [EBP + -0x4],ECX
004fcd97  MOV EAX,dword ptr [EBP + -0x4]
004fcd9a  CMP dword ptr [EAX + 0x8c],0x0
004fcda1  JZ 0x004fcdbe
004fcda3  MOV ECX,dword ptr [EBP + -0x4]
004fcda6  MOV ECX,dword ptr [ECX + 0x8c]
004fcdac  CALL 0x005f8990
004fcdb1  MOV EDX,dword ptr [EBP + -0x4]
004fcdb4  MOV dword ptr [EDX + 0x8c],0x0
004fcdbe  MOV ESP,EBP
004fcdc0  POP EBP
004fcdc1  RET
