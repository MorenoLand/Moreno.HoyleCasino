; FUN_004fc950  004fc950
004fc950  PUSH EBP
004fc951  MOV EBP,ESP
004fc953  PUSH -0x1
004fc955  PUSH 0x6a27d9
004fc95a  MOV EAX,FS:[0x0]
004fc960  PUSH EAX
004fc961  SUB ESP,0x30
004fc964  MOV EAX,[0x00781870]
004fc969  XOR EAX,EBP
004fc96b  PUSH EAX
004fc96c  LEA EAX,[EBP + -0xc]
004fc96f  MOV FS:[0x0],EAX
004fc975  MOV dword ptr [EBP + -0x38],ECX
004fc978  MOV EAX,dword ptr [EBP + 0x18]
004fc97b  MOV dword ptr [EBP + -0x24],EAX
004fc97e  MOV ECX,dword ptr [EBP + 0x1c]
004fc981  MOV dword ptr [EBP + -0x20],ECX
004fc984  MOV EDX,dword ptr [EBP + 0x20]
004fc987  MOV dword ptr [EBP + -0x1c],EDX
004fc98a  MOV EAX,dword ptr [EBP + -0x38]
004fc98d  CMP dword ptr [EAX + 0x90],0x0
004fc994  JNZ 0x004fcab3
004fc99a  PUSH 0x3d0
004fc99f  CALL 0x00686d82
004fc9a4  ADD ESP,0x4
004fc9a7  MOV dword ptr [EBP + -0x34],EAX
004fc9aa  MOV dword ptr [EBP + -0x4],0x0
004fc9b1  CMP dword ptr [EBP + -0x34],0x0
004fc9b5  JZ 0x004fc9c4
004fc9b7  MOV ECX,dword ptr [EBP + -0x34]
004fc9ba  CALL 0x0051ebd0
004fc9bf  MOV dword ptr [EBP + -0x3c],EAX
004fc9c2  JMP 0x004fc9cb
004fc9c4  MOV dword ptr [EBP + -0x3c],0x0
004fc9cb  MOV ECX,dword ptr [EBP + -0x3c]
004fc9ce  MOV dword ptr [EBP + -0x30],ECX
004fc9d1  MOV dword ptr [EBP + -0x4],0xffffffff
004fc9d8  MOV EDX,dword ptr [EBP + -0x38]
004fc9db  MOV EAX,dword ptr [EBP + -0x30]
004fc9de  MOV dword ptr [EDX + 0x90],EAX
004fc9e4  MOV ECX,dword ptr [EBP + 0x8]
004fc9e7  PUSH ECX
004fc9e8  MOV EDX,dword ptr [EBP + -0x38]
004fc9eb  MOV ECX,dword ptr [EDX + 0x90]
004fc9f1  CALL 0x0051ec30
004fc9f6  MOV EAX,dword ptr [EBP + 0x10]
004fc9f9  PUSH EAX
004fc9fa  MOV CL,byte ptr [EBP + 0xc]
004fc9fd  PUSH ECX
004fc9fe  MOV EDX,dword ptr [EBP + -0x38]
004fca01  MOV ECX,dword ptr [EDX + 0x90]
004fca07  CALL 0x0051ec50
004fca0c  MOV EAX,dword ptr [EBP + 0x14]
004fca0f  PUSH EAX
004fca10  MOV ECX,dword ptr [EBP + -0x38]
004fca13  MOV ECX,dword ptr [ECX + 0x90]
004fca19  CALL 0x0051ec80
004fca1e  MOV dword ptr [EBP + -0x14],0x0
004fca25  JMP 0x004fca30
004fca27  MOV EDX,dword ptr [EBP + -0x14]
004fca2a  ADD EDX,0x1
004fca2d  MOV dword ptr [EBP + -0x14],EDX
004fca30  CMP dword ptr [EBP + -0x14],0x3
004fca34  JGE 0x004fca86
004fca36  MOV EAX,dword ptr [EBP + -0x14]
004fca39  MOV ECX,dword ptr [EBP + EAX*0x4 + -0x24]
004fca3d  MOV dword ptr [EBP + -0x28],ECX
004fca40  CMP dword ptr [EBP + -0x28],-0x1
004fca44  JZ 0x004fca84
004fca46  MOV EDX,dword ptr [EBP + -0x28]
004fca49  PUSH EDX
004fca4a  MOV ECX,dword ptr [0x00791364]
004fca50  CALL 0x0047e390
004fca55  MOV dword ptr [EBP + -0x10],EAX
004fca58  MOV ECX,dword ptr [EBP + -0x10]
004fca5b  CALL 0x004c6150
004fca60  MOV dword ptr [EBP + -0x2c],EAX
004fca63  MOV ECX,dword ptr [EBP + -0x10]
004fca66  CALL 0x004c6a70
004fca6b  MOV dword ptr [EBP + -0x18],EAX
004fca6e  MOV EAX,dword ptr [EBP + -0x18]
004fca71  PUSH EAX
004fca72  MOV ECX,dword ptr [EBP + -0x2c]
004fca75  PUSH ECX
004fca76  MOV EDX,dword ptr [EBP + -0x38]
004fca79  MOV ECX,dword ptr [EDX + 0x90]
004fca7f  CALL 0x0051ecb0
004fca84  JMP 0x004fca27
004fca86  MOV EAX,dword ptr [EBP + -0x38]
004fca89  MOV ECX,dword ptr [EAX + 0x90]
004fca8f  MOV EDX,dword ptr [EBP + -0x38]
004fca92  MOV EAX,dword ptr [EDX + 0x90]
004fca98  MOV EDX,dword ptr [ECX]
004fca9a  MOV ECX,EAX
004fca9c  MOV EAX,dword ptr [EDX + 0x3c]
004fca9f  CALL EAX
004fcaa1  PUSH 0x0
004fcaa3  PUSH 0x0
004fcaa5  MOV ECX,dword ptr [EBP + -0x38]
004fcaa8  MOV ECX,dword ptr [ECX + 0x90]
004fcaae  CALL 0x005f7340
004fcab3  MOV EDX,dword ptr [EBP + -0x38]
004fcab6  MOV ECX,dword ptr [EDX + 0x90]
004fcabc  CALL 0x005f85d0
004fcac1  MOV ECX,dword ptr [EBP + -0xc]
004fcac4  MOV dword ptr FS:[0x0],ECX
004fcacb  POP ECX
004fcacc  MOV ESP,EBP
004fcace  POP EBP
004fcacf  RET 0x1c
