; FUN_0045ed30  0045ed30
0045ed30  PUSH EBP
0045ed31  MOV EBP,ESP
0045ed33  SUB ESP,0x8
0045ed36  MOV dword ptr [EBP + -0x8],ECX
0045ed39  MOV dword ptr [EBP + -0x4],0xffffffff
0045ed40  MOV EAX,dword ptr [EBP + -0x8]
0045ed43  CMP dword ptr [EAX + 0x4],0x0
0045ed47  JNZ 0x0045ed50
0045ed49  MOV dword ptr [EBP + -0x4],0x30e3a0
0045ed50  MOV EAX,dword ptr [EBP + -0x4]
0045ed53  MOV ESP,EBP
0045ed55  POP EBP
0045ed56  RET
