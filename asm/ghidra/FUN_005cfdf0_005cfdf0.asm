; FUN_005cfdf0  005cfdf0
005cfdf0  PUSH EBP
005cfdf1  MOV EBP,ESP
005cfdf3  SUB ESP,0x8
005cfdf6  MOV dword ptr [EBP + -0x8],ECX
005cfdf9  MOV AX,[0x006b2b64]
005cfdff  MOV word ptr [EBP + -0x4],AX
005cfe03  MOV ECX,dword ptr [EBP + 0x8]
005cfe06  MOV DL,byte ptr [ECX + 0x14]
005cfe09  MOV byte ptr [EBP + -0x4],DL
005cfe0c  MOV ECX,dword ptr [EBP + -0x8]
005cfe0f  CALL 0x0060c370
005cfe14  MOVZX EAX,AL
005cfe17  TEST EAX,EAX
005cfe19  JZ 0x005cfe4f
005cfe1b  MOV ECX,dword ptr [EBP + 0x8]
005cfe1e  MOVSX EDX,byte ptr [ECX + 0x14]
005cfe22  CMP EDX,0x18
005cfe25  JLE 0x005cfe4f
005cfe27  LEA EAX,[EBP + -0x4]
005cfe2a  PUSH EAX
005cfe2b  CALL dword ptr [0x006b223c]
005cfe31  ADD ESP,0x4
005cfe34  TEST EAX,EAX
005cfe36  JNZ 0x005cfe4f
005cfe38  PUSH 0x6b2b64
005cfe3d  LEA ECX,[EBP + -0x4]
005cfe40  PUSH ECX
005cfe41  CALL 0x00686ec0
005cfe46  ADD ESP,0x8
005cfe49  TEST EAX,EAX
005cfe4b  JZ 0x005cfe4f
005cfe4d  JMP 0x005cfe5b
005cfe4f  MOV EDX,dword ptr [EBP + 0x8]
005cfe52  PUSH EDX
005cfe53  MOV ECX,dword ptr [EBP + -0x8]
005cfe56  CALL 0x0060b7d0
005cfe5b  MOV ESP,EBP
005cfe5d  POP EBP
005cfe5e  RET 0x4
