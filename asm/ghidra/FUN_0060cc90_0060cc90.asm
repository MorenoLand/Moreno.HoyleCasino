; FUN_0060cc90  0060cc90
0060cc90  PUSH EBP
0060cc91  MOV EBP,ESP
0060cc93  PUSH ECX
0060cc94  MOV EAX,dword ptr [EBP + 0xc]
0060cc97  PUSH EAX
0060cc98  PUSH 0x6d8290
0060cc9d  PUSH 0x1
0060cc9f  PUSH 0x0
0060cca1  PUSH 0x6d8280
0060cca6  CALL dword ptr [0x006b24f8]
0060ccac  MOV dword ptr [EBP + -0x4],EAX
0060ccaf  CMP dword ptr [EBP + -0x4],0x0
0060ccb3  JL 0x0060cccc
0060ccb5  PUSH 0x0
0060ccb7  MOV ECX,dword ptr [EBP + 0xc]
0060ccba  MOV EDX,dword ptr [ECX]
0060ccbc  MOV EAX,dword ptr [EBP + 0xc]
0060ccbf  MOV ECX,dword ptr [EAX]
0060ccc1  MOV EDX,dword ptr [EDX]
0060ccc3  PUSH ECX
0060ccc4  MOV EAX,dword ptr [EDX + 0x48]
0060ccc7  CALL EAX
0060ccc9  MOV dword ptr [EBP + -0x4],EAX
0060cccc  MOV EAX,dword ptr [EBP + -0x4]
0060cccf  MOV ESP,EBP
0060ccd1  POP EBP
0060ccd2  RET
