; FUN_005eedc0  005eedc0
005eedc0  PUSH EBP
005eedc1  MOV EBP,ESP
005eedc3  SUB ESP,0x18
005eedc6  MOV dword ptr [EBP + -0x18],ECX
005eedc9  MOV EAX,dword ptr [EBP + 0xc]
005eedcc  MOV dword ptr [EAX],0x0
005eedd2  MOV dword ptr [EBP + -0x8],0x0
005eedd9  MOV dword ptr [EBP + -0x4],0x0
005eede0  JMP 0x005eede8
005eede2  MOV ECX,dword ptr [EBP + -0x10]
005eede5  MOV dword ptr [EBP + -0x8],ECX
005eede8  MOV EDX,dword ptr [EBP + 0x8]
005eedeb  ADD EDX,dword ptr [EBP + -0x8]
005eedee  MOVZX EAX,byte ptr [EDX]
005eedf1  TEST EAX,EAX
005eedf3  JZ 0x005eee3d
005eedf5  MOV ECX,dword ptr [EBP + 0x8]
005eedf8  PUSH ECX
005eedf9  LEA EDX,[EBP + -0xc]
005eedfc  PUSH EDX
005eedfd  LEA EAX,[EBP + -0x10]
005eee00  PUSH EAX
005eee01  LEA ECX,[EBP + -0x14]
005eee04  PUSH ECX
005eee05  MOV EDX,dword ptr [EBP + -0x8]
005eee08  PUSH EDX
005eee09  MOV ECX,dword ptr [EBP + -0x18]
005eee0c  CALL 0x005eebf0
005eee11  MOV EAX,dword ptr [EBP + 0x8]
005eee14  ADD EAX,dword ptr [EBP + -0x14]
005eee17  MOVZX ECX,byte ptr [EAX]
005eee1a  TEST ECX,ECX
005eee1c  JNZ 0x005eee20
005eee1e  JMP 0x005eee3d
005eee20  MOV EDX,dword ptr [EBP + 0xc]
005eee23  MOV EAX,dword ptr [EBP + -0xc]
005eee26  CMP EAX,dword ptr [EDX]
005eee28  JLE 0x005eee32
005eee2a  MOV ECX,dword ptr [EBP + 0xc]
005eee2d  MOV EDX,dword ptr [EBP + -0xc]
005eee30  MOV dword ptr [ECX],EDX
005eee32  MOV EAX,dword ptr [EBP + -0x4]
005eee35  ADD EAX,0x1
005eee38  MOV dword ptr [EBP + -0x4],EAX
005eee3b  JMP 0x005eede2
005eee3d  CMP dword ptr [EBP + -0x4],0x0
005eee41  JNZ 0x005eee4a
005eee43  MOV dword ptr [EBP + -0x4],0x1
005eee4a  MOV ECX,dword ptr [EBP + -0x18]
005eee4d  MOVSX EDX,word ptr [ECX + 0x96]
005eee54  IMUL EDX,dword ptr [EBP + -0x4]
005eee58  MOV EAX,dword ptr [EBP + 0x10]
005eee5b  MOV dword ptr [EAX],EDX
005eee5d  MOV ECX,dword ptr [EBP + -0x18]
005eee60  MOVZX EDX,word ptr [ECX + 0x90]
005eee67  MOV EAX,dword ptr [EBP + 0xc]
005eee6a  MOV ECX,dword ptr [EAX]
005eee6c  SUB ECX,EDX
005eee6e  MOV EDX,dword ptr [EBP + 0xc]
005eee71  MOV dword ptr [EDX],ECX
005eee73  MOV ESP,EBP
005eee75  POP EBP
005eee76  RET 0xc
