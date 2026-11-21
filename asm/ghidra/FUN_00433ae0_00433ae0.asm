; FUN_00433ae0  00433ae0
00433ae0  PUSH EBP
00433ae1  MOV EBP,ESP
00433ae3  SUB ESP,0x8
00433ae6  MOV dword ptr [EBP + -0x8],ECX
00433ae9  CMP dword ptr [EBP + 0x8],0x0
00433aed  JNZ 0x00433af3
00433aef  XOR AL,AL
00433af1  JMP 0x00433b23
00433af3  MOV EAX,dword ptr [EBP + 0x8]
00433af6  MOV dword ptr [EBP + -0x4],EAX
00433af9  MOV ECX,dword ptr [EBP + -0x4]
00433afc  MOV dword ptr [ECX + 0x8],0x0
00433b03  MOV EDX,dword ptr [EBP + -0x4]
00433b06  MOV dword ptr [EDX + 0xc],0x0
00433b0d  MOV EAX,dword ptr [EBP + -0x4]
00433b10  MOV dword ptr [EAX + 0x10],0x0
00433b17  MOV ECX,dword ptr [EBP + -0x4]
00433b1a  MOV dword ptr [ECX + 0x14],0x0
00433b21  MOV AL,0x1
00433b23  MOV ESP,EBP
00433b25  POP EBP
00433b26  RET 0x4
