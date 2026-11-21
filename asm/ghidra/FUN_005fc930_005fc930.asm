; FUN_005fc930  005fc930
005fc930  PUSH EBP
005fc931  MOV EBP,ESP
005fc933  PUSH -0x1
005fc935  PUSH 0x6aa5ee
005fc93a  MOV EAX,FS:[0x0]
005fc940  PUSH EAX
005fc941  SUB ESP,0x28
005fc944  MOV EAX,[0x00781870]
005fc949  XOR EAX,EBP
005fc94b  PUSH EAX
005fc94c  LEA EAX,[EBP + -0xc]
005fc94f  MOV FS:[0x0],EAX
005fc955  MOV dword ptr [EBP + -0x28],ECX
005fc958  MOV EAX,dword ptr [EBP + -0x28]
005fc95b  MOV dword ptr [EAX],0x6d6fc4
005fc961  MOV dword ptr [EBP + -0x4],0x0
005fc968  MOV ECX,dword ptr [EBP + -0x28]
005fc96b  MOV dword ptr [ECX + 0x1f0],0x0
005fc975  MOV EDX,dword ptr [EBP + -0x28]
005fc978  CMP dword ptr [EDX + 0x1f4],0x0
005fc97f  JZ 0x005fc9db
005fc981  MOV EAX,dword ptr [EBP + -0x28]
005fc984  MOV ECX,dword ptr [EAX + 0x1f4]
005fc98a  MOV EDX,dword ptr [EBP + -0x28]
005fc98d  MOV EAX,dword ptr [EDX + 0x1f4]
005fc993  MOV EDX,dword ptr [ECX]
005fc995  MOV ECX,EAX
005fc997  MOV EAX,dword ptr [EDX + 0x70]
005fc99a  CALL EAX
005fc99c  MOV ECX,dword ptr [EBP + -0x28]
005fc99f  MOV EDX,dword ptr [ECX + 0x1f4]
005fc9a5  MOV dword ptr [EBP + -0x14],EDX
005fc9a8  MOV EAX,dword ptr [EBP + -0x14]
005fc9ab  MOV dword ptr [EBP + -0x10],EAX
005fc9ae  CMP dword ptr [EBP + -0x10],0x0
005fc9b2  JZ 0x005fc9c7
005fc9b4  PUSH 0x1
005fc9b6  MOV ECX,dword ptr [EBP + -0x10]
005fc9b9  MOV EDX,dword ptr [ECX]
005fc9bb  MOV ECX,dword ptr [EBP + -0x10]
005fc9be  MOV EAX,dword ptr [EDX]
005fc9c0  CALL EAX
005fc9c2  MOV dword ptr [EBP + -0x2c],EAX
005fc9c5  JMP 0x005fc9ce
005fc9c7  MOV dword ptr [EBP + -0x2c],0x0
005fc9ce  MOV ECX,dword ptr [EBP + -0x28]
005fc9d1  MOV dword ptr [ECX + 0x1f4],0x0
005fc9db  MOV EDX,dword ptr [EBP + -0x28]
005fc9de  CMP dword ptr [EDX + 0x1f8],0x0
005fc9e5  JZ 0x005fca41
005fc9e7  MOV EAX,dword ptr [EBP + -0x28]
005fc9ea  MOV ECX,dword ptr [EAX + 0x1f8]
005fc9f0  MOV EDX,dword ptr [EBP + -0x28]
005fc9f3  MOV EAX,dword ptr [EDX + 0x1f8]
005fc9f9  MOV EDX,dword ptr [ECX]
005fc9fb  MOV ECX,EAX
005fc9fd  MOV EAX,dword ptr [EDX + 0x70]
005fca00  CALL EAX
005fca02  MOV ECX,dword ptr [EBP + -0x28]
005fca05  MOV EDX,dword ptr [ECX + 0x1f8]
005fca0b  MOV dword ptr [EBP + -0x1c],EDX
005fca0e  MOV EAX,dword ptr [EBP + -0x1c]
005fca11  MOV dword ptr [EBP + -0x18],EAX
005fca14  CMP dword ptr [EBP + -0x18],0x0
005fca18  JZ 0x005fca2d
005fca1a  PUSH 0x1
005fca1c  MOV ECX,dword ptr [EBP + -0x18]
005fca1f  MOV EDX,dword ptr [ECX]
005fca21  MOV ECX,dword ptr [EBP + -0x18]
005fca24  MOV EAX,dword ptr [EDX]
005fca26  CALL EAX
005fca28  MOV dword ptr [EBP + -0x30],EAX
005fca2b  JMP 0x005fca34
005fca2d  MOV dword ptr [EBP + -0x30],0x0
005fca34  MOV ECX,dword ptr [EBP + -0x28]
005fca37  MOV dword ptr [ECX + 0x1f8],0x0
005fca41  MOV EDX,dword ptr [EBP + -0x28]
005fca44  CMP dword ptr [EDX + 0x200],0x0
005fca4b  JZ 0x005fcaa7
005fca4d  MOV EAX,dword ptr [EBP + -0x28]
005fca50  MOV ECX,dword ptr [EAX + 0x200]
005fca56  MOV EDX,dword ptr [EBP + -0x28]
005fca59  MOV EAX,dword ptr [EDX + 0x200]
005fca5f  MOV EDX,dword ptr [ECX]
005fca61  MOV ECX,EAX
005fca63  MOV EAX,dword ptr [EDX + 0x70]
005fca66  CALL EAX
005fca68  MOV ECX,dword ptr [EBP + -0x28]
005fca6b  MOV EDX,dword ptr [ECX + 0x200]
005fca71  MOV dword ptr [EBP + -0x24],EDX
005fca74  MOV EAX,dword ptr [EBP + -0x24]
005fca77  MOV dword ptr [EBP + -0x20],EAX
005fca7a  CMP dword ptr [EBP + -0x20],0x0
005fca7e  JZ 0x005fca93
005fca80  PUSH 0x1
005fca82  MOV ECX,dword ptr [EBP + -0x20]
005fca85  MOV EDX,dword ptr [ECX]
005fca87  MOV ECX,dword ptr [EBP + -0x20]
005fca8a  MOV EAX,dword ptr [EDX]
005fca8c  CALL EAX
005fca8e  MOV dword ptr [EBP + -0x34],EAX
005fca91  JMP 0x005fca9a
005fca93  MOV dword ptr [EBP + -0x34],0x0
005fca9a  MOV ECX,dword ptr [EBP + -0x28]
005fca9d  MOV dword ptr [ECX + 0x200],0x0
005fcaa7  MOV dword ptr [EBP + -0x4],0xffffffff
005fcaae  MOV ECX,dword ptr [EBP + -0x28]
005fcab1  CALL 0x00603170
005fcab6  MOV ECX,dword ptr [EBP + -0xc]
005fcab9  MOV dword ptr FS:[0x0],ECX
005fcac0  POP ECX
005fcac1  MOV ESP,EBP
005fcac3  POP EBP
005fcac4  RET
