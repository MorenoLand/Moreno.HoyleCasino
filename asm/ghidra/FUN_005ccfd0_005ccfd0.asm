; FUN_005ccfd0  005ccfd0
005ccfd0  PUSH EBP
005ccfd1  MOV EBP,ESP
005ccfd3  PUSH -0x1
005ccfd5  PUSH 0x6a8b6a
005ccfda  MOV EAX,FS:[0x0]
005ccfe0  PUSH EAX
005ccfe1  SUB ESP,0x14c
005ccfe7  MOV EAX,[0x00781870]
005ccfec  XOR EAX,EBP
005ccfee  MOV dword ptr [EBP + -0x10],EAX
005ccff1  PUSH EAX
005ccff2  LEA EAX,[EBP + -0xc]
005ccff5  MOV FS:[0x0],EAX
005ccffb  MOV dword ptr [EBP + 0xfffffeac],ECX
005cd001  MOV byte ptr [EBP + 0xfffffec7],0x0
005cd008  MOV EAX,dword ptr [EBP + 0xfffffeac]
005cd00e  MOV ECX,dword ptr [EAX + 0x178]
005cd014  MOV dword ptr [EBP + 0xfffffeb0],ECX
005cd01a  MOV EDX,dword ptr [EBP + 0x8]
005cd01d  SHL EDX,0x5
005cd020  MOV EAX,dword ptr [EBP + 0xfffffeb0]
005cd026  LEA ECX,[EAX + EDX*0x1 + 0x48]
005cd02a  MOV EDX,dword ptr [EBP + 0xc]
005cd02d  MOV EAX,dword ptr [ECX + EDX*0x8]
005cd030  MOV ECX,dword ptr [ECX + EDX*0x8 + 0x4]
005cd034  MOV dword ptr [EBP + 0xfffffee4],EAX
005cd03a  MOV dword ptr [EBP + 0xfffffee8],ECX
005cd040  MOV EDX,dword ptr [EBP + 0xfffffeac]
005cd046  CMP dword ptr [EDX + 0xadc],0x0
005cd04d  JZ 0x005cd070
005cd04f  MOV EAX,dword ptr [EBP + 0xfffffeac]
005cd055  MOV ECX,dword ptr [EAX + 0xadc]
005cd05b  MOV EDX,dword ptr [EBP + 0xfffffeac]
005cd061  MOV EAX,dword ptr [EDX + 0xadc]
005cd067  MOV EDX,dword ptr [ECX]
005cd069  MOV ECX,EAX
005cd06b  MOV EAX,dword ptr [EDX + 0x70]
005cd06e  CALL EAX
005cd070  MOV ECX,dword ptr [0x007947e0]
005cd076  CALL 0x005de860
005cd07b  MOVZX ECX,AL
005cd07e  TEST ECX,ECX
005cd080  JZ 0x005cd094
005cd082  CMP dword ptr [EBP + 0xfffffee4],0x0
005cd089  JNZ 0x005cd099
005cd08b  CMP dword ptr [EBP + 0xfffffee8],0x0
005cd092  JNZ 0x005cd099
005cd094  JMP 0x005cd314
005cd099  MOV EDX,dword ptr [EBP + 0xfffffeac]
005cd09f  CMP dword ptr [EDX + 0xadc],0x0
005cd0a6  JNZ 0x005cd15a
005cd0ac  PUSH 0x1d4
005cd0b1  CALL 0x00686d82
005cd0b6  ADD ESP,0x4
005cd0b9  MOV dword ptr [EBP + 0xfffffebc],EAX
005cd0bf  MOV dword ptr [EBP + -0x4],0x0
005cd0c6  CMP dword ptr [EBP + 0xfffffebc],0x0
005cd0cd  JZ 0x005cd0e2
005cd0cf  MOV ECX,dword ptr [EBP + 0xfffffebc]
005cd0d5  CALL 0x005cd360
005cd0da  MOV dword ptr [EBP + 0xfffffea8],EAX
005cd0e0  JMP 0x005cd0ec
005cd0e2  MOV dword ptr [EBP + 0xfffffea8],0x0
005cd0ec  MOV EAX,dword ptr [EBP + 0xfffffea8]
005cd0f2  MOV dword ptr [EBP + 0xfffffec0],EAX
005cd0f8  MOV dword ptr [EBP + -0x4],0xffffffff
005cd0ff  MOV ECX,dword ptr [EBP + 0xfffffeac]
005cd105  MOV EDX,dword ptr [EBP + 0xfffffec0]
005cd10b  MOV dword ptr [ECX + 0xadc],EDX
005cd111  PUSH -0x1
005cd113  PUSH 0x30
005cd115  PUSH 0xbb8
005cd11a  PUSH 0x0
005cd11c  PUSH 0x0
005cd11e  PUSH 0xf
005cd120  PUSH 0x41
005cd122  PUSH 0x4
005cd124  PUSH 0x6b27f8
005cd129  MOV EAX,dword ptr [EBP + 0xfffffeac]
005cd12f  MOV ECX,dword ptr [EAX + 0xadc]
005cd135  CALL 0x005ec8f0
005cd13a  PUSH 0xcc
005cd13f  PUSH 0xff
005cd144  PUSH 0xff
005cd149  MOV ECX,dword ptr [EBP + 0xfffffeac]
005cd14f  MOV ECX,dword ptr [ECX + 0xadc]
005cd155  CALL 0x005ee8c0
005cd15a  CMP dword ptr [0x007947e4],0x0
005cd161  JZ 0x005cd1bb
005cd163  MOV EDX,dword ptr [EBP + 0xfffffeac]
005cd169  ADD EDX,0x17c
005cd16f  PUSH EDX
005cd170  MOV EAX,dword ptr [EBP + 0xfffffee8]
005cd176  PUSH EAX
005cd177  MOV ECX,dword ptr [EBP + 0xfffffee4]
005cd17d  PUSH ECX
005cd17e  MOV EDX,dword ptr [EBP + 0xfffffeac]
005cd184  MOV EAX,dword ptr [EDX + 0xadc]
005cd18a  PUSH EAX
005cd18b  MOV ECX,dword ptr [EBP + 0xc]
005cd18e  PUSH ECX
005cd18f  MOV EDX,dword ptr [EBP + 0x8]
005cd192  PUSH EDX
005cd193  MOV EAX,dword ptr [EBP + 0xfffffeac]
005cd199  PUSH EAX
005cd19a  MOV ECX,dword ptr [0x007947e4]
005cd1a0  MOV EDX,dword ptr [ECX]
005cd1a2  MOV ECX,dword ptr [0x007947e4]
005cd1a8  MOV EAX,dword ptr [EDX + 0x284]
005cd1ae  CALL EAX
005cd1b0  MOVZX ECX,AL
005cd1b3  TEST ECX,ECX
005cd1b5  JNZ 0x005cd27b
005cd1bb  CMP dword ptr [EBP + 0xfffffee4],0xf4240
005cd1c5  JL 0x005cd1dc
005cd1c7  PUSH 0x55
005cd1c9  MOV EDX,dword ptr [EBP + 0xfffffeac]
005cd1cf  MOV ECX,dword ptr [EDX + 0xadc]
005cd1d5  CALL 0x005ecc60
005cd1da  JMP 0x005cd1ef
005cd1dc  PUSH 0x41
005cd1de  MOV EAX,dword ptr [EBP + 0xfffffeac]
005cd1e4  MOV ECX,dword ptr [EAX + 0xadc]
005cd1ea  CALL 0x005ecc60
005cd1ef  MOV ECX,dword ptr [EBP + 0xfffffee8]
005cd1f5  PUSH ECX
005cd1f6  MOV EDX,dword ptr [EBP + 0xfffffee4]
005cd1fc  PUSH EDX
005cd1fd  CALL 0x0064c8a0
005cd202  ADD ESP,0x8
005cd205  MOV dword ptr [EBP + 0xfffffeb4],EAX
005cd20b  MOV dword ptr [EBP + 0xfffffeb8],EDX
005cd211  PUSH 0x0
005cd213  PUSH 0x1
005cd215  PUSH 0x1
005cd217  LEA EAX,[EBP + 0xfffffec8]
005cd21d  PUSH EAX
005cd21e  MOV ECX,dword ptr [EBP + 0xfffffeb8]
005cd224  PUSH ECX
005cd225  MOV EDX,dword ptr [EBP + 0xfffffeb4]
005cd22b  PUSH EDX
005cd22c  CALL 0x0064c8d0
005cd231  ADD ESP,0x18
005cd234  LEA EAX,[EBP + 0xfffffec8]
005cd23a  PUSH EAX
005cd23b  PUSH 0x6b2fd8
005cd240  LEA ECX,[EBP + 0xfffffeec]
005cd246  PUSH ECX
005cd247  CALL dword ptr [0x006b2220]
005cd24d  ADD ESP,0xc
005cd250  LEA EDX,[EBP + 0xfffffeec]
005cd256  PUSH EDX
005cd257  MOV EAX,dword ptr [EBP + 0xfffffeac]
005cd25d  MOV ECX,dword ptr [EAX + 0xadc]
005cd263  MOV EDX,dword ptr [EBP + 0xfffffeac]
005cd269  MOV EAX,dword ptr [EDX + 0xadc]
005cd26f  MOV EDX,dword ptr [ECX]
005cd271  MOV ECX,EAX
005cd273  MOV EAX,dword ptr [EDX + 0xb4]
005cd279  CALL EAX
005cd27b  MOV ECX,dword ptr [EBP + 0xc]
005cd27e  PUSH ECX
005cd27f  MOV EDX,dword ptr [EBP + 0x8]
005cd282  PUSH EDX
005cd283  MOV EAX,dword ptr [EBP + 0xfffffeac]
005cd289  MOV EDX,dword ptr [EAX]
005cd28b  MOV ECX,dword ptr [EBP + 0xfffffeac]
005cd291  MOV EAX,dword ptr [EDX + 0xe8]
005cd297  CALL EAX
005cd299  PUSH EAX
005cd29a  MOV ECX,dword ptr [EBP + 0xc]
005cd29d  PUSH ECX
005cd29e  MOV EDX,dword ptr [EBP + 0x8]
005cd2a1  PUSH EDX
005cd2a2  MOV EAX,dword ptr [EBP + 0xfffffeac]
005cd2a8  MOV EDX,dword ptr [EAX]
005cd2aa  MOV ECX,dword ptr [EBP + 0xfffffeac]
005cd2b0  MOV EAX,dword ptr [EDX + 0xe4]
005cd2b6  CALL EAX
005cd2b8  PUSH EAX
005cd2b9  MOV ECX,dword ptr [EBP + 0xfffffeac]
005cd2bf  MOV EDX,dword ptr [ECX + 0xadc]
005cd2c5  MOV EAX,dword ptr [EBP + 0xfffffeac]
005cd2cb  MOV ECX,dword ptr [EAX + 0xadc]
005cd2d1  MOV EDX,dword ptr [EDX]
005cd2d3  MOV EAX,dword ptr [EDX + 0x44]
005cd2d6  CALL EAX
005cd2d8  MOV ECX,dword ptr [EBP + 0xfffffeac]
005cd2de  MOV EDX,dword ptr [ECX + 0xadc]
005cd2e4  MOV EAX,dword ptr [EBP + 0xfffffeac]
005cd2ea  MOV ECX,dword ptr [EAX + 0xadc]
005cd2f0  MOV EDX,dword ptr [EDX]
005cd2f2  MOV EAX,dword ptr [EDX + 0x74]
005cd2f5  CALL EAX
005cd2f7  MOV ECX,dword ptr [EBP + 0xfffffeac]
005cd2fd  PUSH ECX
005cd2fe  MOV EDX,dword ptr [0x007947e4]
005cd304  MOV EAX,dword ptr [EDX]
005cd306  MOV ECX,dword ptr [0x007947e4]
005cd30c  MOV EDX,dword ptr [EAX + 0x280]
005cd312  CALL EDX
005cd314  MOV ECX,dword ptr [EBP + -0xc]
005cd317  MOV dword ptr FS:[0x0],ECX
005cd31e  POP ECX
005cd31f  MOV ECX,dword ptr [EBP + -0x10]
005cd322  XOR ECX,EBP
005cd324  CALL 0x00686d72
005cd329  MOV ESP,EBP
005cd32b  POP EBP
005cd32c  RET 0x8
