; FUN_005f8a40  005f8a40
005f8a40  PUSH EBP
005f8a41  MOV EBP,ESP
005f8a43  SUB ESP,0x8
005f8a46  MOV dword ptr [EBP + -0x8],ECX
005f8a49  MOV AL,byte ptr [EBP + 0x8]
005f8a4c  MOV byte ptr [EBP + -0x4],AL
005f8a4f  MOV CL,byte ptr [EBP + 0xc]
005f8a52  MOV byte ptr [EBP + -0x3],CL
005f8a55  MOV DL,byte ptr [EBP + 0x10]
005f8a58  MOV byte ptr [EBP + -0x2],DL
005f8a5b  PUSH ECX
005f8a5c  MOV EAX,ESP
005f8a5e  MOV CX,word ptr [EBP + -0x4]
005f8a62  MOV word ptr [EAX],CX
005f8a65  MOV DL,byte ptr [EBP + -0x2]
005f8a68  MOV byte ptr [EAX + 0x2],DL
005f8a6b  MOV ECX,dword ptr [EBP + -0x8]
005f8a6e  CALL 0x005f8a80
005f8a73  MOV ESP,EBP
005f8a75  POP EBP
005f8a76  RET 0xc
