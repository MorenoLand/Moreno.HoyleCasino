; FUN_005f6490  005f6490
005f6490  PUSH EBP
005f6491  MOV EBP,ESP
005f6493  SUB ESP,0x8
005f6496  MOV dword ptr [EBP + -0x8],ECX
005f6499  MOV AL,byte ptr [EBP + 0x8]
005f649c  MOV byte ptr [EBP + -0x4],AL
005f649f  MOV CL,byte ptr [EBP + 0xc]
005f64a2  MOV byte ptr [EBP + -0x3],CL
005f64a5  MOV DL,byte ptr [EBP + 0x10]
005f64a8  MOV byte ptr [EBP + -0x2],DL
005f64ab  PUSH ECX
005f64ac  MOV EAX,ESP
005f64ae  MOV CX,word ptr [EBP + -0x4]
005f64b2  MOV word ptr [EAX],CX
005f64b5  MOV DL,byte ptr [EBP + -0x2]
005f64b8  MOV byte ptr [EAX + 0x2],DL
005f64bb  MOV ECX,dword ptr [EBP + -0x8]
005f64be  CALL 0x005f6430
005f64c3  MOV ESP,EBP
005f64c5  POP EBP
005f64c6  RET 0xc
