; FUN_00612af0  00612af0
00612af0  PUSH EBP
00612af1  MOV EBP,ESP
00612af3  SUB ESP,0x24
00612af6  XOR EAX,EAX
00612af8  MOV byte ptr [EBP + -0x1],AL
00612afb  MOV CL,byte ptr [EBP + -0x3]
00612afe  MOV byte ptr [EBP + -0x2],CL
00612b01  MOV DL,byte ptr [EBP + -0x1]
00612b04  MOV byte ptr [EBP + -0x21],DL
00612b07  MOV EAX,dword ptr [EBP + 0x10]
00612b0a  MOV dword ptr [EBP + -0x20],EAX
00612b0d  MOV ECX,dword ptr [EBP + 0x8]
00612b10  MOV dword ptr [EBP + -0x1c],ECX
00612b13  MOV EAX,dword ptr [EBP + 0xc]
00612b16  SUB EAX,dword ptr [EBP + -0x1c]
00612b19  CDQ
00612b1a  MOV ECX,0x48
00612b1f  IDIV ECX
00612b21  IMUL EAX,EAX,0x48
00612b24  MOV EDX,dword ptr [EBP + -0x20]
00612b27  SUB EDX,EAX
00612b29  MOV dword ptr [EBP + -0x8],EDX
00612b2c  XOR EAX,EAX
00612b2e  MOV byte ptr [EBP + -0x9],AL
00612b31  XOR ECX,ECX
00612b33  MOV byte ptr [EBP + -0xa],CL
00612b36  MOV DL,byte ptr [EBP + -0x9]
00612b39  MOV byte ptr [EBP + -0x16],DL
00612b3c  MOV AL,byte ptr [EBP + -0xa]
00612b3f  MOV byte ptr [EBP + -0x15],AL
00612b42  MOV ECX,dword ptr [EBP + -0x20]
00612b45  MOV dword ptr [EBP + -0x14],ECX
00612b48  MOV EDX,dword ptr [EBP + 0xc]
00612b4b  MOV dword ptr [EBP + -0x10],EDX
00612b4e  MOV EAX,dword ptr [EBP + -0x1c]
00612b51  CMP EAX,dword ptr [EBP + -0x10]
00612b54  JZ 0x00612b76
00612b56  MOV ECX,dword ptr [EBP + -0x10]
00612b59  SUB ECX,0x48
00612b5c  MOV dword ptr [EBP + -0x10],ECX
00612b5f  MOV EDX,dword ptr [EBP + -0x14]
00612b62  SUB EDX,0x48
00612b65  MOV dword ptr [EBP + -0x14],EDX
00612b68  MOV EAX,dword ptr [EBP + -0x10]
00612b6b  PUSH EAX
00612b6c  MOV ECX,dword ptr [EBP + -0x14]
00612b6f  CALL 0x00610650
00612b74  JMP 0x00612b4e
00612b76  MOV EAX,dword ptr [EBP + -0x8]
00612b79  MOV ESP,EBP
00612b7b  POP EBP
00612b7c  RET
