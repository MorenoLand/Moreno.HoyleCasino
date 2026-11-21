; FUN_005c5af9  005c5af9
005c5af9  MOV dword ptr [EBP + -0x4],0x0
005c5b00  MOV EDX,dword ptr [EBP + 0xfffffdc0]
005c5b06  CMP dword ptr [EDX + 0x4],0x0
005c5b0a  JNZ 0x005c5b18
005c5b0c  MOV dword ptr [EBP + 0xfffffd98],0x0
005c5b16  JMP 0x005c5b38
005c5b18  MOV EAX,dword ptr [EBP + 0xfffffdc0]
005c5b1e  MOV ECX,dword ptr [EBP + 0xfffffdc0]
005c5b24  MOV EAX,dword ptr [EAX + 0x8]
005c5b27  SUB EAX,dword ptr [ECX + 0x4]
005c5b2a  CDQ
005c5b2b  MOV ECX,0x34
005c5b30  IDIV ECX
005c5b32  MOV dword ptr [EBP + 0xfffffd98],EAX
005c5b38  MOV EDX,dword ptr [EBP + 0x10]
005c5b3b  ADD EDX,dword ptr [EBP + 0xfffffd98]
005c5b41  MOV dword ptr [EBP + 0x10],EDX
005c5b44  MOV EAX,dword ptr [EBP + 0xfffffdc0]
005c5b4a  CMP dword ptr [EAX + 0x4],0x0
005c5b4e  JZ 0x005c5c30
005c5b54  MOV ECX,dword ptr [EBP + 0xfffffdc0]
005c5b5a  MOV EDX,dword ptr [ECX + 0x8]
005c5b5d  MOV dword ptr [EBP + 0xfffffed8],EDX
005c5b63  MOV EAX,dword ptr [EBP + 0xfffffdc0]
005c5b69  MOV ECX,dword ptr [EAX + 0x4]
005c5b6c  MOV dword ptr [EBP + 0xfffffedc],ECX
005c5b72  MOV EDX,dword ptr [EBP + 0xfffffed8]
005c5b78  MOV dword ptr [EBP + 0xfffffee0],EDX
005c5b7e  MOV EAX,dword ptr [EBP + 0xfffffedc]
005c5b84  MOV dword ptr [EBP + 0xfffffee4],EAX
005c5b8a  MOV CL,byte ptr [EBP + 0xfffffef2]
005c5b90  MOV byte ptr [EBP + 0xfffffef3],CL
005c5b96  MOV EDX,dword ptr [EBP + 0xfffffee0]
005c5b9c  MOV dword ptr [EBP + 0xfffffee8],EDX
005c5ba2  MOV EAX,dword ptr [EBP + 0xfffffee4]
005c5ba8  MOV dword ptr [EBP + 0xfffffeec],EAX
005c5bae  JMP 0x005c5bbf
005c5bb0  MOV ECX,dword ptr [EBP + 0xfffffeec]
005c5bb6  ADD ECX,0x34
005c5bb9  MOV dword ptr [EBP + 0xfffffeec],ECX
005c5bbf  MOV EDX,dword ptr [EBP + 0xfffffeec]
005c5bc5  CMP EDX,dword ptr [EBP + 0xfffffee8]
005c5bcb  JZ 0x005c5bf0
005c5bcd  MOV ECX,dword ptr [EBP + 0xfffffeec]
005c5bd3  CALL 0x005c3980
005c5bd8  XOR EAX,EAX
005c5bda  AND EAX,0x1
005c5bdd  JZ 0x005c5bee
005c5bdf  MOV ECX,dword ptr [EBP + 0xfffffeec]
005c5be5  PUSH ECX
005c5be6  CALL 0x00686cae
005c5beb  ADD ESP,0x4
005c5bee  JMP 0x005c5bb0
005c5bf0  MOV EDX,dword ptr [EBP + 0xfffffdc0]
005c5bf6  MOV EAX,dword ptr [EBP + 0xfffffdc0]
005c5bfc  MOV ECX,dword ptr [EDX + 0xc]
005c5bff  SUB ECX,dword ptr [EAX + 0x4]
005c5c02  MOV EAX,ECX
005c5c04  CDQ
005c5c05  MOV ECX,0x34
005c5c0a  IDIV ECX
005c5c0c  MOV dword ptr [EBP + 0xfffffed0],EAX
005c5c12  MOV EDX,dword ptr [EBP + 0xfffffdc0]
005c5c18  MOV EAX,dword ptr [EDX + 0x4]
005c5c1b  MOV dword ptr [EBP + 0xfffffed4],EAX
005c5c21  MOV ECX,dword ptr [EBP + 0xfffffed4]
005c5c27  PUSH ECX
005c5c28  CALL 0x00686cae
005c5c2d  ADD ESP,0x4
005c5c30  MOV EDX,dword ptr [EBP + -0x48]
005c5c33  IMUL EDX,EDX,0x34
005c5c36  ADD EDX,dword ptr [EBP + -0x50]
005c5c39  MOV EAX,dword ptr [EBP + 0xfffffdc0]
005c5c3f  MOV dword ptr [EAX + 0xc],EDX
005c5c42  MOV ECX,dword ptr [EBP + 0x10]
005c5c45  IMUL ECX,ECX,0x34
005c5c48  ADD ECX,dword ptr [EBP + -0x50]
005c5c4b  MOV EDX,dword ptr [EBP + 0xfffffdc0]
005c5c51  MOV dword ptr [EDX + 0x8],ECX
005c5c54  MOV EAX,dword ptr [EBP + 0xfffffdc0]
005c5c5a  MOV ECX,dword ptr [EBP + -0x50]
005c5c5d  MOV dword ptr [EAX + 0x4],ECX
005c5c60  JMP 0x005c5f9e
