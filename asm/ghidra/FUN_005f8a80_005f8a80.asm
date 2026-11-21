; FUN_005f8a80  005f8a80
005f8a80  PUSH EBP
005f8a81  MOV EBP,ESP
005f8a83  SUB ESP,0x18
005f8a86  MOV dword ptr [EBP + -0x18],ECX
005f8a89  MOV EAX,dword ptr [EBP + -0x18]
005f8a8c  MOV byte ptr [EAX + 0x178],0x1
005f8a93  MOV ECX,dword ptr [EBP + -0x18]
005f8a96  MOV DL,byte ptr [EBP + 0x8]
005f8a99  MOV byte ptr [ECX + 0x174],DL
005f8a9f  MOV EAX,dword ptr [EBP + -0x18]
005f8aa2  MOV CL,byte ptr [EBP + 0x9]
005f8aa5  MOV byte ptr [EAX + 0x175],CL
005f8aab  MOV EDX,dword ptr [EBP + -0x18]
005f8aae  MOV AL,byte ptr [EBP + 0xa]
005f8ab1  MOV byte ptr [EDX + 0x176],AL
005f8ab7  MOV ECX,dword ptr [EBP + -0x18]
005f8aba  MOV byte ptr [ECX + 0x177],0xff
005f8ac1  MOV EDX,dword ptr [EBP + -0x18]
005f8ac4  MOV EAX,dword ptr [EDX + 0x10c]
005f8aca  MOV dword ptr [EBP + -0x14],EAX
005f8acd  MOV ECX,dword ptr [EBP + -0x18]
005f8ad0  MOV EDX,dword ptr [ECX + 0x110]
005f8ad6  MOV dword ptr [EBP + -0x10],EDX
005f8ad9  MOV EAX,dword ptr [EBP + -0x18]
005f8adc  MOV ECX,dword ptr [EAX + 0x104]
005f8ae2  MOV dword ptr [EBP + -0xc],ECX
005f8ae5  MOV EDX,dword ptr [EBP + -0x18]
005f8ae8  MOV EAX,dword ptr [EDX + 0x108]
005f8aee  MOV dword ptr [EBP + -0x8],EAX
005f8af1  MOV ECX,dword ptr [EBP + -0x18]
005f8af4  ADD ECX,0x180
005f8afa  MOV dword ptr [EBP + -0x4],ECX
005f8afd  MOV EDX,dword ptr [EBP + -0x4]
005f8b00  MOV EAX,dword ptr [EBP + -0x8]
005f8b03  MOV dword ptr [EDX],EAX
005f8b05  MOV ECX,dword ptr [EBP + -0x4]
005f8b08  MOV EDX,dword ptr [EBP + -0xc]
005f8b0b  MOV dword ptr [ECX + 0x4],EDX
005f8b0e  MOV EAX,dword ptr [EBP + -0x4]
005f8b11  MOV ECX,dword ptr [EBP + -0x10]
005f8b14  MOV dword ptr [EAX + 0x8],ECX
005f8b17  MOV EDX,dword ptr [EBP + -0x4]
005f8b1a  MOV EAX,dword ptr [EBP + -0x14]
005f8b1d  MOV dword ptr [EDX + 0xc],EAX
005f8b20  MOV ESP,EBP
005f8b22  POP EBP
005f8b23  RET 0x4
