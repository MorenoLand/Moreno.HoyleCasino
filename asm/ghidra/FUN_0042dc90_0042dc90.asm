; FUN_0042dc90  0042dc90
0042dc90  PUSH EBP
0042dc91  MOV EBP,ESP
0042dc93  SUB ESP,0x8
0042dc96  MOV dword ptr [EBP + -0x8],ECX
0042dc99  MOV ECX,dword ptr [EBP + -0x8]
0042dc9c  CALL 0x005eb220
0042dca1  CMP EAX,0xb
0042dca4  JNZ 0x0042dce8
0042dca6  MOV dword ptr [EBP + -0x4],0x0
0042dcad  JMP 0x0042dcb8
0042dcaf  MOV EAX,dword ptr [EBP + -0x4]
0042dcb2  ADD EAX,0x1
0042dcb5  MOV dword ptr [EBP + -0x4],EAX
0042dcb8  CMP dword ptr [EBP + -0x4],0x4c
0042dcbc  JGE 0x0042dce8
0042dcbe  MOV ECX,dword ptr [EBP + -0x4]
0042dcc1  MOV EDX,dword ptr [0x007906d4]
0042dcc7  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x4]
0042dccb  CMP dword ptr [EAX + 0x110],0x0
0042dcd2  JNZ 0x0042dce6
0042dcd4  MOV ECX,dword ptr [EBP + -0x4]
0042dcd7  MOV EDX,dword ptr [0x007906d4]
0042dcdd  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x4]
0042dce1  CALL 0x005cb9b0
0042dce6  JMP 0x0042dcaf
0042dce8  MOV ESP,EBP
0042dcea  POP EBP
0042dceb  RET
