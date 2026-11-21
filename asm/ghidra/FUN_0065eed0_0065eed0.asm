; FUN_0065eed0  0065eed0
0065eed0  PUSH EBP
0065eed1  MOV EBP,ESP
0065eed3  SUB ESP,0xc
0065eed6  MOV dword ptr [EBP + -0xc],ECX
0065eed9  PUSH 0x0
0065eedb  MOV ECX,dword ptr [EBP + -0xc]
0065eede  CALL 0x005fb720
0065eee3  MOV ECX,EAX
0065eee5  CALL 0x005e4390
0065eeea  MOV dword ptr [EBP + -0x4],EAX
0065eeed  CMP dword ptr [EBP + -0x4],0x0
0065eef1  JZ 0x0065ef1d
0065eef3  MOV EAX,dword ptr [EBP + -0x4]
0065eef6  MOVSX ECX,byte ptr [EAX + 0x3a]
0065eefa  CMP ECX,0x2
0065eefd  JNZ 0x0065ef0a
0065eeff  MOV EDX,dword ptr [EBP + -0x4]
0065ef02  MOV AL,byte ptr [EBP + 0x8]
0065ef05  MOV byte ptr [EDX + 0x3b],AL
0065ef08  JMP 0x0065ef1d
0065ef0a  MOV ECX,dword ptr [EBP + 0xc]
0065ef0d  PUSH ECX
0065ef0e  MOV EDX,dword ptr [EBP + -0x4]
0065ef11  ADD EDX,0x21
0065ef14  PUSH EDX
0065ef15  CALL 0x00686d8e
0065ef1a  ADD ESP,0x8
0065ef1d  MOV ESP,EBP
0065ef1f  POP EBP
0065ef20  RET 0x8
