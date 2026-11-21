; FUN_0068fec0  0068fec0
0068fec0  PUSH EBP
0068fec1  MOV EBP,ESP
0068fec3  SUB ESP,0x8
0068fec6  MOV dword ptr [EBP + -0x8],ECX
0068fec9  MOV EAX,dword ptr [EBP + -0x8]
0068fecc  MOV ECX,dword ptr [EAX + 0x18]
0068fecf  PUSH ECX
0068fed0  CALL dword ptr [0x006b202c]
0068fed6  MOV dword ptr [EBP + -0x4],EAX
0068fed9  MOV EDX,dword ptr [EBP + -0x8]
0068fedc  MOV EAX,dword ptr [EDX + 0x18]
0068fedf  PUSH EAX
0068fee0  CALL dword ptr [0x006b2034]
0068fee6  MOV ECX,dword ptr [EBP + -0x8]
0068fee9  MOV EDX,dword ptr [ECX + 0x10]
0068feec  PUSH EDX
0068feed  CALL dword ptr [0x006b203c]
0068fef3  MOV EAX,dword ptr [EBP + -0x8]
0068fef6  MOV ECX,dword ptr [EAX + 0x14]
0068fef9  PUSH ECX
0068fefa  CALL dword ptr [0x006b203c]
0068ff00  PUSH 0x42
0068ff02  PUSH 0x0
0068ff04  MOV EDX,dword ptr [EBP + -0x8]
0068ff07  ADD EDX,0x8
0068ff0a  PUSH EDX
0068ff0b  CALL 0x00686fa2
0068ff10  ADD ESP,0xc
0068ff13  CMP dword ptr [EBP + -0x4],0x0
0068ff17  JG 0x0068ff2a
0068ff19  PUSH 0x6e5710
0068ff1e  CALL 0x0068fb10
0068ff23  ADD ESP,0x4
0068ff26  XOR AL,AL
0068ff28  JMP 0x0068ff2c
0068ff2a  MOV AL,0x1
0068ff2c  MOV ESP,EBP
0068ff2e  POP EBP
0068ff2f  RET
