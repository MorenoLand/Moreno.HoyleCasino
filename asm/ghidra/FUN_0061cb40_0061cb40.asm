; FUN_0061cb40  0061cb40
0061cb40  PUSH EBP
0061cb41  MOV EBP,ESP
0061cb43  SUB ESP,0x360
0061cb49  MOV EAX,[0x00781870]
0061cb4e  XOR EAX,EBP
0061cb50  MOV dword ptr [EBP + -0x4],EAX
0061cb53  MOV EAX,dword ptr [EBP + 0x8]
0061cb56  PUSH EAX
0061cb57  PUSH 0x6d8b98
0061cb5c  LEA ECX,[EBP + 0xfffffca8]
0061cb62  PUSH ECX
0061cb63  CALL dword ptr [0x006b2220]
0061cb69  ADD ESP,0xc
0061cb6c  LEA EDX,[EBP + 0xfffffed0]
0061cb72  PUSH EDX
0061cb73  LEA EAX,[EBP + 0xfffffca8]
0061cb79  PUSH EAX
0061cb7a  CALL dword ptr [0x006b2308]
0061cb80  ADD ESP,0x8
0061cb83  MOV dword ptr [EBP + 0xfffffdb4],EAX
0061cb89  CMP dword ptr [EBP + 0xfffffdb4],-0x1
0061cb90  JNZ 0x0061cb97
0061cb92  JMP 0x0061cd59
0061cb97  MOV ECX,dword ptr [EBP + 0xfffffed0]
0061cb9d  AND ECX,0x10
0061cba0  JNZ 0x0061cd26
0061cba6  LEA EDX,[EBP + 0xfffffef4]
0061cbac  PUSH EDX
0061cbad  MOV EAX,dword ptr [EBP + 0x8]
0061cbb0  PUSH EAX
0061cbb1  PUSH 0x6c2d30
0061cbb6  LEA ECX,[EBP + 0xfffffdb8]
0061cbbc  PUSH ECX
0061cbbd  CALL dword ptr [0x006b2220]
0061cbc3  ADD ESP,0x10
0061cbc6  LEA EDX,[EBP + 0xfffffdb8]
0061cbcc  PUSH EDX
0061cbcd  PUSH 0x6d8b94
0061cbd2  CALL 0x0062fde0
0061cbd7  ADD ESP,0x8
0061cbda  PUSH 0x6c2d28
0061cbdf  LEA EAX,[EBP + 0xfffffdb8]
0061cbe5  PUSH EAX
0061cbe6  CALL 0x005ea9c0
0061cbeb  ADD ESP,0x8
0061cbee  MOV dword ptr [EBP + 0xfffffec8],EAX
0061cbf4  CMP dword ptr [EBP + 0xfffffec8],0x0
0061cbfb  JZ 0x0061cd0b
0061cc01  MOV ECX,dword ptr [EBP + 0xfffffec8]
0061cc07  PUSH ECX
0061cc08  CALL 0x005e9fd0
0061cc0d  ADD ESP,0x4
0061cc10  MOV dword ptr [EBP + 0xfffffecc],EAX
0061cc16  MOV EDX,dword ptr [EBP + 0xfffffecc]
0061cc1c  PUSH EDX
0061cc1d  CALL 0x00686d82
0061cc22  ADD ESP,0x4
0061cc25  MOV dword ptr [EBP + 0xfffffca4],EAX
0061cc2b  MOV EAX,dword ptr [EBP + 0xfffffca4]
0061cc31  MOV dword ptr [EBP + 0xfffffec4],EAX
0061cc37  MOV ECX,dword ptr [EBP + 0xfffffec8]
0061cc3d  PUSH ECX
0061cc3e  PUSH 0x1
0061cc40  MOV EDX,dword ptr [EBP + 0xfffffecc]
0061cc46  PUSH EDX
0061cc47  MOV EAX,dword ptr [EBP + 0xfffffec4]
0061cc4d  PUSH EAX
0061cc4e  CALL dword ptr [0x006b225c]
0061cc54  ADD ESP,0x10
0061cc57  MOV ECX,dword ptr [EBP + 0xfffffec8]
0061cc5d  PUSH ECX
0061cc5e  CALL dword ptr [0x006b2258]
0061cc64  ADD ESP,0x4
0061cc67  MOV EDX,dword ptr [EBP + 0x10]
0061cc6a  PUSH EDX
0061cc6b  MOV EAX,dword ptr [EBP + 0xc]
0061cc6e  PUSH EAX
0061cc6f  MOV ECX,dword ptr [EBP + 0xfffffec4]
0061cc75  PUSH ECX
0061cc76  CALL 0x0061cd70
0061cc7b  ADD ESP,0xc
0061cc7e  PUSH 0x6c2d2c
0061cc83  LEA EDX,[EBP + 0xfffffdb8]
0061cc89  PUSH EDX
0061cc8a  CALL 0x005ea9c0
0061cc8f  ADD ESP,0x8
0061cc92  MOV dword ptr [EBP + 0xfffffec8],EAX
0061cc98  CMP dword ptr [EBP + 0xfffffec8],0x0
0061cc9f  JZ 0x0061ccd3
0061cca1  MOV EAX,dword ptr [EBP + 0xfffffec8]
0061cca7  PUSH EAX
0061cca8  PUSH 0x1
0061ccaa  MOV ECX,dword ptr [EBP + 0xfffffecc]
0061ccb0  PUSH ECX
0061ccb1  MOV EDX,dword ptr [EBP + 0xfffffec4]
0061ccb7  PUSH EDX
0061ccb8  CALL dword ptr [0x006b2260]
0061ccbe  ADD ESP,0x10
0061ccc1  MOV EAX,dword ptr [EBP + 0xfffffec8]
0061ccc7  PUSH EAX
0061ccc8  CALL dword ptr [0x006b2258]
0061ccce  ADD ESP,0x4
0061ccd1  JMP 0x0061ccee
0061ccd3  XOR ECX,ECX
0061ccd5  JNZ 0x0061ccee
0061ccd7  PUSH 0x8ee
0061ccdc  PUSH 0x6d8b74
0061cce1  PUSH 0x6b2f58
0061cce6  CALL 0x005e9f20
0061cceb  ADD ESP,0xc
0061ccee  MOV EAX,dword ptr [EBP + 0xfffffec4]
0061ccf4  MOV dword ptr [EBP + 0xfffffca0],EAX
0061ccfa  MOV ECX,dword ptr [EBP + 0xfffffca0]
0061cd00  PUSH ECX
0061cd01  CALL 0x00686cae
0061cd06  ADD ESP,0x4
0061cd09  JMP 0x0061cd26
0061cd0b  XOR EDX,EDX
0061cd0d  JNZ 0x0061cd26
0061cd0f  PUSH 0x8f2
0061cd14  PUSH 0x6d8b74
0061cd19  PUSH 0x6b2f58
0061cd1e  CALL 0x005e9f20
0061cd23  ADD ESP,0xc
0061cd26  LEA ECX,[EBP + 0xfffffed0]
0061cd2c  PUSH ECX
0061cd2d  MOV EDX,dword ptr [EBP + 0xfffffdb4]
0061cd33  PUSH EDX
0061cd34  CALL dword ptr [0x006b2304]
0061cd3a  ADD ESP,0x8
0061cd3d  CMP EAX,-0x1
0061cd40  JNZ 0x0061cd44
0061cd42  JMP 0x0061cd49
0061cd44  JMP 0x0061cb97
0061cd49  MOV EAX,dword ptr [EBP + 0xfffffdb4]
0061cd4f  PUSH EAX
0061cd50  CALL dword ptr [0x006b2300]
0061cd56  ADD ESP,0x4
0061cd59  MOV ECX,dword ptr [EBP + -0x4]
0061cd5c  XOR ECX,EBP
0061cd5e  CALL 0x00686d72
0061cd63  MOV ESP,EBP
0061cd65  POP EBP
0061cd66  RET
