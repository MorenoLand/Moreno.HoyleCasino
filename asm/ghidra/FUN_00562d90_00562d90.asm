; FUN_00562d90  00562d90
00562d90  PUSH EBP
00562d91  MOV EBP,ESP
00562d93  PUSH ECX
00562d94  MOV dword ptr [EBP + -0x4],ECX
00562d97  MOV EAX,dword ptr [EBP + -0x4]
00562d9a  MOV dword ptr [EAX + 0x1c],0x0
00562da1  MOV ECX,dword ptr [EBP + -0x4]
00562da4  MOV dword ptr [ECX + 0x20],0x0
00562dab  MOV EDX,dword ptr [EBP + -0x4]
00562dae  MOV EAX,dword ptr [EDX + 0x1c]
00562db1  PUSH EAX
00562db2  MOV ECX,dword ptr [EBP + -0x4]
00562db5  MOV ECX,dword ptr [ECX + 0x4]
00562db8  CALL 0x005664c0
00562dbd  MOV EDX,dword ptr [EBP + -0x4]
00562dc0  MOV EAX,dword ptr [EDX + 0x20]
00562dc3  PUSH EAX
00562dc4  MOV ECX,dword ptr [EBP + -0x4]
00562dc7  MOV ECX,dword ptr [ECX + 0x8]
00562dca  CALL 0x005664c0
00562dcf  MOV ESP,EBP
00562dd1  POP EBP
00562dd2  RET
