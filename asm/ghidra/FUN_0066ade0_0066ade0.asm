; FUN_0066ade0  0066ade0
0066ade0  PUSH EBP
0066ade1  MOV EBP,ESP
0066ade3  PUSH -0x1
0066ade5  PUSH 0x6acd41
0066adea  MOV EAX,FS:[0x0]
0066adf0  PUSH EAX
0066adf1  SUB ESP,0x20
0066adf4  MOV EAX,[0x00781870]
0066adf9  XOR EAX,EBP
0066adfb  PUSH EAX
0066adfc  LEA EAX,[EBP + -0xc]
0066adff  MOV FS:[0x0],EAX
0066ae05  MOV dword ptr [EBP + -0x28],ECX
0066ae08  MOV ECX,dword ptr [EBP + -0x28]
0066ae0b  CALL 0x0064ce60
0066ae10  LEA EAX,[EBP + -0x1c]
0066ae13  PUSH EAX
0066ae14  MOV ECX,dword ptr [0x0162ee84]
0066ae1a  MOV EDX,dword ptr [ECX]
0066ae1c  MOV ECX,dword ptr [0x0162ee84]
0066ae22  MOV EAX,dword ptr [EDX + 0x2e4]
0066ae28  CALL EAX
0066ae2a  MOV ECX,dword ptr [EAX]
0066ae2c  MOV EDX,dword ptr [EAX + 0x4]
0066ae2f  MOV dword ptr [EBP + -0x14],ECX
0066ae32  MOV dword ptr [EBP + -0x10],EDX
0066ae35  PUSH 0x0
0066ae37  PUSH 0xff
0066ae3c  PUSH 0x0
0066ae3e  PUSH 0xa
0066ae40  MOV EAX,dword ptr [EBP + -0x10]
0066ae43  PUSH EAX
0066ae44  MOV ECX,dword ptr [EBP + -0x14]
0066ae47  PUSH ECX
0066ae48  MOV EDX,dword ptr [0x0162ee84]
0066ae4e  MOV EAX,dword ptr [EDX]
0066ae50  MOV ECX,dword ptr [0x0162ee84]
0066ae56  MOV EDX,dword ptr [EAX + 0x2dc]
0066ae5c  CALL EDX
0066ae5e  PUSH EAX
0066ae5f  PUSH 0x0
0066ae61  PUSH 0x0
0066ae63  MOV EAX,[0x0162ee84]
0066ae68  MOV ECX,dword ptr [EAX + 0x14]
0066ae6b  CALL 0x005f9ce0
0066ae70  MOV ECX,dword ptr [0x0162ee84]
0066ae76  MOV EDX,dword ptr [ECX]
0066ae78  MOV ECX,dword ptr [0x0162ee84]
0066ae7e  MOV EAX,dword ptr [EDX + 0x2e0]
0066ae84  CALL EAX
0066ae86  TEST EAX,EAX
0066ae88  JZ 0x0066aec2
0066ae8a  PUSH 0x0
0066ae8c  PUSH 0xff
0066ae91  PUSH 0x0
0066ae93  PUSH 0xb
0066ae95  PUSH 0x0
0066ae97  PUSH 0x0
0066ae99  MOV ECX,dword ptr [0x0162ee84]
0066ae9f  MOV EDX,dword ptr [ECX]
0066aea1  MOV ECX,dword ptr [0x0162ee84]
0066aea7  MOV EAX,dword ptr [EDX + 0x2e0]
0066aead  CALL EAX
0066aeaf  PUSH EAX
0066aeb0  PUSH 0x1
0066aeb2  PUSH 0x0
0066aeb4  MOV ECX,dword ptr [0x0162ee84]
0066aeba  MOV ECX,dword ptr [ECX + 0x14]
0066aebd  CALL 0x005f9ce0
0066aec2  PUSH 0x20
0066aec4  CALL 0x00686d82
0066aec9  ADD ESP,0x4
0066aecc  MOV dword ptr [EBP + -0x24],EAX
0066aecf  MOV dword ptr [EBP + -0x4],0x0
0066aed6  CMP dword ptr [EBP + -0x24],0x0
0066aeda  JZ 0x0066aef7
0066aedc  PUSH 0x0
0066aede  MOV ECX,dword ptr [EBP + -0x24]
0066aee1  CALL 0x005fc0d0
0066aee6  MOV EDX,dword ptr [EBP + -0x24]
0066aee9  MOV dword ptr [EDX],0x6e0504
0066aeef  MOV EAX,dword ptr [EBP + -0x24]
0066aef2  MOV dword ptr [EBP + -0x2c],EAX
0066aef5  JMP 0x0066aefe
0066aef7  MOV dword ptr [EBP + -0x2c],0x0
0066aefe  MOV ECX,dword ptr [EBP + -0x2c]
0066af01  MOV dword ptr [EBP + -0x20],ECX
0066af04  MOV dword ptr [EBP + -0x4],0xffffffff
0066af0b  MOV EDX,dword ptr [EBP + -0x20]
0066af0e  PUSH EDX
0066af0f  MOV ECX,dword ptr [EBP + -0x28]
0066af12  CALL 0x005f1b70
0066af17  MOV ECX,dword ptr [EBP + -0xc]
0066af1a  MOV dword ptr FS:[0x0],ECX
0066af21  POP ECX
0066af22  MOV ESP,EBP
0066af24  POP EBP
0066af25  RET
