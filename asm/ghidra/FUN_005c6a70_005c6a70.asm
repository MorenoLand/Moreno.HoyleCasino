; FUN_005c6a70  005c6a70
005c6a70  PUSH EBP
005c6a71  MOV EBP,ESP
005c6a73  SUB ESP,0x24
005c6a76  XOR EAX,EAX
005c6a78  MOV byte ptr [EBP + -0x1],AL
005c6a7b  MOV CL,byte ptr [EBP + -0x3]
005c6a7e  MOV byte ptr [EBP + -0x2],CL
005c6a81  MOV DL,byte ptr [EBP + -0x1]
005c6a84  MOV byte ptr [EBP + -0x21],DL
005c6a87  MOV EAX,dword ptr [EBP + 0x10]
005c6a8a  MOV dword ptr [EBP + -0x20],EAX
005c6a8d  MOV ECX,dword ptr [EBP + 0x8]
005c6a90  MOV dword ptr [EBP + -0x1c],ECX
005c6a93  MOV EAX,dword ptr [EBP + 0xc]
005c6a96  SUB EAX,dword ptr [EBP + -0x1c]
005c6a99  CDQ
005c6a9a  MOV ECX,0x34
005c6a9f  IDIV ECX
005c6aa1  IMUL EAX,EAX,0x34
005c6aa4  MOV EDX,dword ptr [EBP + -0x20]
005c6aa7  SUB EDX,EAX
005c6aa9  MOV dword ptr [EBP + -0x8],EDX
005c6aac  XOR EAX,EAX
005c6aae  MOV byte ptr [EBP + -0x9],AL
005c6ab1  XOR ECX,ECX
005c6ab3  MOV byte ptr [EBP + -0xa],CL
005c6ab6  MOV DL,byte ptr [EBP + -0x9]
005c6ab9  MOV byte ptr [EBP + -0x16],DL
005c6abc  MOV AL,byte ptr [EBP + -0xa]
005c6abf  MOV byte ptr [EBP + -0x15],AL
005c6ac2  MOV ECX,dword ptr [EBP + -0x20]
005c6ac5  MOV dword ptr [EBP + -0x14],ECX
005c6ac8  MOV EDX,dword ptr [EBP + 0xc]
005c6acb  MOV dword ptr [EBP + -0x10],EDX
005c6ace  MOV EAX,dword ptr [EBP + -0x1c]
005c6ad1  CMP EAX,dword ptr [EBP + -0x10]
005c6ad4  JZ 0x005c6af6
005c6ad6  MOV ECX,dword ptr [EBP + -0x10]
005c6ad9  SUB ECX,0x34
005c6adc  MOV dword ptr [EBP + -0x10],ECX
005c6adf  MOV EDX,dword ptr [EBP + -0x14]
005c6ae2  SUB EDX,0x34
005c6ae5  MOV dword ptr [EBP + -0x14],EDX
005c6ae8  MOV EAX,dword ptr [EBP + -0x10]
005c6aeb  PUSH EAX
005c6aec  MOV ECX,dword ptr [EBP + -0x14]
005c6aef  CALL 0x005c3a20
005c6af4  JMP 0x005c6ace
005c6af6  MOV EAX,dword ptr [EBP + -0x8]
005c6af9  MOV ESP,EBP
005c6afb  POP EBP
005c6afc  RET
