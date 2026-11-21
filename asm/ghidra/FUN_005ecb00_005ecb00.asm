; FUN_005ecb00  005ecb00
005ecb00  PUSH EBP
005ecb01  MOV EBP,ESP
005ecb03  SUB ESP,0x1c
005ecb06  PUSH EBX
005ecb07  PUSH ESI
005ecb08  MOV dword ptr [EBP + -0x1c],ECX
005ecb0b  CMP dword ptr [EBP + 0x8],0x0
005ecb0f  JNZ 0x005ecb62
005ecb11  MOV EAX,dword ptr [EBP + -0x1c]
005ecb14  CMP dword ptr [EAX + 0xac],0x0
005ecb1b  JZ 0x005ecb5d
005ecb1d  MOV ECX,dword ptr [EBP + -0x1c]
005ecb20  MOV EDX,dword ptr [ECX + 0xac]
005ecb26  MOV EAX,dword ptr [EDX + 0x4]
005ecb29  MOV dword ptr [EBP + -0x8],EAX
005ecb2c  MOV ECX,dword ptr [EBP + -0x8]
005ecb2f  PUSH ECX
005ecb30  CALL 0x00686cae
005ecb35  ADD ESP,0x4
005ecb38  MOV EDX,dword ptr [EBP + -0x1c]
005ecb3b  MOV EAX,dword ptr [EDX + 0xac]
005ecb41  MOV dword ptr [EBP + -0xc],EAX
005ecb44  MOV ECX,dword ptr [EBP + -0xc]
005ecb47  PUSH ECX
005ecb48  CALL 0x00686cae
005ecb4d  ADD ESP,0x4
005ecb50  MOV EDX,dword ptr [EBP + -0x1c]
005ecb53  MOV dword ptr [EDX + 0xac],0x0
005ecb5d  JMP 0x005ecc53
005ecb62  MOV EAX,dword ptr [EBP + -0x1c]
005ecb65  CMP dword ptr [EAX + 0xac],0x0
005ecb6c  JNZ 0x005ecba8
005ecb6e  PUSH 0x8
005ecb70  CALL 0x00686d82
005ecb75  ADD ESP,0x4
005ecb78  MOV dword ptr [EBP + -0x10],EAX
005ecb7b  MOV ECX,dword ptr [EBP + -0x1c]
005ecb7e  MOV EDX,dword ptr [EBP + -0x10]
005ecb81  MOV dword ptr [ECX + 0xac],EDX
005ecb87  MOV EAX,dword ptr [EBP + -0x1c]
005ecb8a  MOV ECX,dword ptr [EAX + 0xac]
005ecb90  MOV dword ptr [ECX],0x0
005ecb96  MOV EDX,dword ptr [EBP + -0x1c]
005ecb99  MOV EAX,dword ptr [EDX + 0xac]
005ecb9f  MOV dword ptr [EAX + 0x4],0x0
005ecba6  JMP 0x005ecbc3
005ecba8  MOV ECX,dword ptr [EBP + -0x1c]
005ecbab  MOV EDX,dword ptr [ECX + 0xac]
005ecbb1  MOV EAX,dword ptr [EDX + 0x4]
005ecbb4  MOV dword ptr [EBP + -0x14],EAX
005ecbb7  MOV ECX,dword ptr [EBP + -0x14]
005ecbba  PUSH ECX
005ecbbb  CALL 0x00686cae
005ecbc0  ADD ESP,0x4
005ecbc3  MOV EDX,dword ptr [EBP + -0x1c]
005ecbc6  MOV EAX,dword ptr [EDX + 0xac]
005ecbcc  MOV ECX,dword ptr [EBP + 0x8]
005ecbcf  MOV EDX,dword ptr [ECX]
005ecbd1  MOV dword ptr [EAX],EDX
005ecbd3  MOV EAX,dword ptr [EBP + -0x1c]
005ecbd6  MOV ECX,dword ptr [EAX + 0xac]
005ecbdc  XOR EBX,EBX
005ecbde  MOV EAX,dword ptr [ECX]
005ecbe0  MOV EDX,0x8
005ecbe5  MUL EDX
005ecbe7  SETO BL
005ecbea  NEG EBX
005ecbec  OR EBX,EAX
005ecbee  PUSH EBX
005ecbef  CALL 0x00686d82
005ecbf4  ADD ESP,0x4
005ecbf7  MOV dword ptr [EBP + -0x18],EAX
005ecbfa  MOV EAX,dword ptr [EBP + -0x1c]
005ecbfd  MOV ECX,dword ptr [EAX + 0xac]
005ecc03  MOV EDX,dword ptr [EBP + -0x18]
005ecc06  MOV dword ptr [ECX + 0x4],EDX
005ecc09  MOV dword ptr [EBP + -0x4],0x0
005ecc10  JMP 0x005ecc1b
005ecc12  MOV EAX,dword ptr [EBP + -0x4]
005ecc15  ADD EAX,0x1
005ecc18  MOV dword ptr [EBP + -0x4],EAX
005ecc1b  MOV ECX,dword ptr [EBP + -0x1c]
005ecc1e  MOV EDX,dword ptr [ECX + 0xac]
005ecc24  MOV EAX,dword ptr [EBP + -0x4]
005ecc27  CMP EAX,dword ptr [EDX]
005ecc29  JGE 0x005ecc53
005ecc2b  MOV ECX,dword ptr [EBP + 0x8]
005ecc2e  MOV EDX,dword ptr [ECX + 0x4]
005ecc31  MOV EAX,dword ptr [EBP + -0x4]
005ecc34  MOV ECX,dword ptr [EDX + EAX*0x8]
005ecc37  MOV EDX,dword ptr [EDX + EAX*0x8 + 0x4]
005ecc3b  MOV EAX,dword ptr [EBP + -0x1c]
005ecc3e  MOV EAX,dword ptr [EAX + 0xac]
005ecc44  MOV EAX,dword ptr [EAX + 0x4]
005ecc47  MOV ESI,dword ptr [EBP + -0x4]
005ecc4a  MOV dword ptr [EAX + ESI*0x8],ECX
005ecc4d  MOV dword ptr [EAX + ESI*0x8 + 0x4],EDX
005ecc51  JMP 0x005ecc12
005ecc53  POP ESI
005ecc54  POP EBX
005ecc55  MOV ESP,EBP
005ecc57  POP EBP
005ecc58  RET 0x4
