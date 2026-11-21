; FUN_0062fd00  0062fd00
0062fd00  PUSH EBP
0062fd01  MOV EBP,ESP
0062fd03  SUB ESP,0x18
0062fd06  CMP dword ptr [EBP + 0x8],0x0
0062fd0a  JZ 0x0062fd18
0062fd0c  CMP dword ptr [EBP + 0xc],0x0
0062fd10  JLE 0x0062fd18
0062fd12  CMP dword ptr [EBP + 0x10],0x0
0062fd16  JNZ 0x0062fd1f
0062fd18  XOR AL,AL
0062fd1a  JMP 0x0062fdd3
0062fd1f  MOV EAX,dword ptr [EBP + 0x8]
0062fd22  MOV dword ptr [EBP + -0x10],EAX
0062fd25  MOV ECX,dword ptr [EBP + 0x10]
0062fd28  PUSH ECX
0062fd29  CALL 0x00686d82
0062fd2e  ADD ESP,0x4
0062fd31  MOV dword ptr [EBP + -0x14],EAX
0062fd34  MOV EDX,dword ptr [EBP + -0x14]
0062fd37  MOV dword ptr [EBP + -0xc],EDX
0062fd3a  MOV EAX,dword ptr [EBP + 0xc]
0062fd3d  SUB EAX,0x1
0062fd40  MOV dword ptr [EBP + -0x4],EAX
0062fd43  JMP 0x0062fd4e
0062fd45  MOV ECX,dword ptr [EBP + -0x4]
0062fd48  SUB ECX,0x1
0062fd4b  MOV dword ptr [EBP + -0x4],ECX
0062fd4e  CMP dword ptr [EBP + -0x4],0x0
0062fd52  JLE 0x0062fdbf
0062fd54  MOV EDX,dword ptr [EBP + -0x4]
0062fd57  PUSH EDX
0062fd58  PUSH 0x0
0062fd5a  CALL 0x0062fc30
0062fd5f  ADD ESP,0x8
0062fd62  MOV dword ptr [EBP + -0x8],EAX
0062fd65  MOV EAX,dword ptr [EBP + 0x10]
0062fd68  PUSH EAX
0062fd69  MOV ECX,dword ptr [EBP + -0x8]
0062fd6c  IMUL ECX,dword ptr [EBP + 0x10]
0062fd70  ADD ECX,dword ptr [EBP + -0x10]
0062fd73  PUSH ECX
0062fd74  MOV EDX,dword ptr [EBP + -0xc]
0062fd77  PUSH EDX
0062fd78  CALL 0x00686fde
0062fd7d  ADD ESP,0xc
0062fd80  MOV EAX,dword ptr [EBP + 0x10]
0062fd83  PUSH EAX
0062fd84  MOV ECX,dword ptr [EBP + -0x4]
0062fd87  IMUL ECX,dword ptr [EBP + 0x10]
0062fd8b  ADD ECX,dword ptr [EBP + -0x10]
0062fd8e  PUSH ECX
0062fd8f  MOV EDX,dword ptr [EBP + -0x8]
0062fd92  IMUL EDX,dword ptr [EBP + 0x10]
0062fd96  ADD EDX,dword ptr [EBP + -0x10]
0062fd99  PUSH EDX
0062fd9a  CALL 0x00686fde
0062fd9f  ADD ESP,0xc
0062fda2  MOV EAX,dword ptr [EBP + 0x10]
0062fda5  PUSH EAX
0062fda6  MOV ECX,dword ptr [EBP + -0xc]
0062fda9  PUSH ECX
0062fdaa  MOV EDX,dword ptr [EBP + -0x4]
0062fdad  IMUL EDX,dword ptr [EBP + 0x10]
0062fdb1  ADD EDX,dword ptr [EBP + -0x10]
0062fdb4  PUSH EDX
0062fdb5  CALL 0x00686fde
0062fdba  ADD ESP,0xc
0062fdbd  JMP 0x0062fd45
0062fdbf  MOV EAX,dword ptr [EBP + -0xc]
0062fdc2  MOV dword ptr [EBP + -0x18],EAX
0062fdc5  MOV ECX,dword ptr [EBP + -0x18]
0062fdc8  PUSH ECX
0062fdc9  CALL 0x00686cae
0062fdce  ADD ESP,0x4
0062fdd1  MOV AL,0x1
0062fdd3  MOV ESP,EBP
0062fdd5  POP EBP
0062fdd6  RET
