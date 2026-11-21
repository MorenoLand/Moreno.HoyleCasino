; FUN_0060c4c0  0060c4c0
0060c4c0  PUSH EBP
0060c4c1  MOV EBP,ESP
0060c4c3  SUB ESP,0x8
0060c4c6  MOV dword ptr [EBP + -0x8],ECX
0060c4c9  MOV AL,byte ptr [EBP + 0x8]
0060c4cc  MOV byte ptr [EBP + -0x4],AL
0060c4cf  MOV CL,byte ptr [EBP + 0xc]
0060c4d2  MOV byte ptr [EBP + -0x3],CL
0060c4d5  MOV DL,byte ptr [EBP + 0x10]
0060c4d8  MOV byte ptr [EBP + -0x2],DL
0060c4db  PUSH ECX
0060c4dc  MOV EAX,ESP
0060c4de  MOV CX,word ptr [EBP + -0x4]
0060c4e2  MOV word ptr [EAX],CX
0060c4e5  MOV DL,byte ptr [EBP + -0x2]
0060c4e8  MOV byte ptr [EAX + 0x2],DL
0060c4eb  MOV ECX,dword ptr [EBP + -0x8]
0060c4ee  CALL 0x0060c500
0060c4f3  MOV ESP,EBP
0060c4f5  POP EBP
0060c4f6  RET 0xc
