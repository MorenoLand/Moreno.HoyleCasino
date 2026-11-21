; FUN_0045c210  0045c210
0045c210  PUSH EBP
0045c211  MOV EBP,ESP
0045c213  SUB ESP,0x18c
0045c219  MOV EAX,[0x00781870]
0045c21e  XOR EAX,EBP
0045c220  MOV dword ptr [EBP + -0x4],EAX
0045c223  MOV dword ptr [EBP + 0xfffffe78],ECX
0045c229  MOV EAX,dword ptr [EBP + 0x8]
0045c22c  PUSH EAX
0045c22d  PUSH 0x6b9b44
0045c232  LEA ECX,[EBP + 0xfffffef0]
0045c238  PUSH ECX
0045c239  CALL dword ptr [0x006b2220]
0045c23f  ADD ESP,0xc
0045c242  LEA EDX,[EBP + 0xfffffef0]
0045c248  PUSH EDX
0045c249  CALL 0x0062fde0
0045c24e  ADD ESP,0x4
0045c251  MOV EAX,[0x00790738]
0045c256  MOV ECX,dword ptr [EAX + 0x10c]
0045c25c  MOV dword ptr [EBP + 0xfffffecc],ECX
0045c262  CMP dword ptr [EBP + 0xfffffecc],0x4
0045c269  JZ 0x0045c2a1
0045c26b  MOV EDX,dword ptr [0x00790738]
0045c271  MOV EAX,dword ptr [EDX + 0x10c]
0045c277  MOV dword ptr [EBP + 0xfffffec8],EAX
0045c27d  MOV ECX,dword ptr [0x00790738]
0045c283  MOV dword ptr [EBP + 0xfffffec4],ECX
0045c289  MOV EDX,dword ptr [EBP + 0xfffffec4]
0045c28f  ADD EDX,dword ptr [EBP + 0xfffffec8]
0045c295  MOV byte ptr [EDX + 0xe0],0x1
0045c29c  JMP 0x0045c36d
0045c2a1  MOV EAX,dword ptr [EBP + 0x8]
0045c2a4  PUSH EAX
0045c2a5  CALL 0x005dcb00
0045c2aa  ADD ESP,0x4
0045c2ad  MOV dword ptr [EBP + 0xfffffeb8],EAX
0045c2b3  MOV ECX,dword ptr [EBP + 0xfffffeb8]
0045c2b9  CALL 0x0063aac0
0045c2be  MOV ECX,dword ptr [EAX]
0045c2c0  MOV dword ptr [EBP + 0xfffffec0],ECX
0045c2c6  CMP dword ptr [EBP + 0xfffffec0],0x2
0045c2cd  JZ 0x0045c2f7
0045c2cf  MOV ECX,dword ptr [EBP + 0xfffffeb8]
0045c2d5  CALL 0x0063aac0
0045c2da  MOV EDX,dword ptr [EAX]
0045c2dc  MOV dword ptr [EBP + 0xfffffebc],EDX
0045c2e2  CMP dword ptr [EBP + 0xfffffebc],0x3
0045c2e9  JZ 0x0045c2f7
0045c2eb  MOV dword ptr [EBP + 0xfffffe74],0x0
0045c2f5  JMP 0x0045c301
0045c2f7  MOV dword ptr [EBP + 0xfffffe74],0x1
0045c301  MOVZX EAX,byte ptr [EBP + 0xfffffe74]
0045c308  TEST EAX,EAX
0045c30a  JZ 0x0045c36d
0045c30c  MOV ECX,dword ptr [0x00790738]
0045c312  MOV EDX,dword ptr [ECX + 0x4]
0045c315  MOV dword ptr [EBP + 0xfffffeb4],EDX
0045c31b  MOV EAX,dword ptr [EBP + 0x8]
0045c31e  SHL EAX,0x5
0045c321  MOV ECX,dword ptr [EBP + 0xfffffeb4]
0045c327  LEA EDX,[ECX + EAX*0x1 + 0x48]
0045c32b  XOR EAX,EAX
0045c32d  SHL EAX,0x3
0045c330  MOV ECX,dword ptr [EDX + EAX*0x1]
0045c333  MOV EDX,dword ptr [EDX + EAX*0x1 + 0x4]
0045c337  MOV dword ptr [EBP + 0xfffffed0],ECX
0045c33d  MOV dword ptr [EBP + 0xfffffed4],EDX
0045c343  MOV EAX,dword ptr [EBP + 0xfffffed0]
0045c349  MOV dword ptr [EBP + 0xfffffeac],EAX
0045c34f  MOV ECX,dword ptr [0x00790738]
0045c355  MOV dword ptr [EBP + 0xfffffeb0],ECX
0045c35b  MOV EDX,dword ptr [EBP + 0xfffffeb0]
0045c361  MOV EAX,dword ptr [EBP + 0xfffffeac]
0045c367  MOV dword ptr [EDX + 0x12c],EAX
0045c36d  MOV ECX,dword ptr [0x00790738]
0045c373  MOV dword ptr [EBP + 0xfffffea8],ECX
0045c379  MOV EDX,dword ptr [EBP + 0xfffffea8]
0045c37f  ADD EDX,dword ptr [EBP + 0x8]
0045c382  MOV byte ptr [EDX + 0xe0],0x1
0045c389  MOV ECX,dword ptr [0x00790740]
0045c38f  CALL 0x004587e0
0045c394  MOV EAX,[0x00790738]
0045c399  MOV ECX,dword ptr [EAX + 0x10c]
0045c39f  MOV dword ptr [EBP + 0xfffffea4],ECX
0045c3a5  MOV EDX,dword ptr [0x00790738]
0045c3ab  MOV EAX,dword ptr [EDX + 0x10c]
0045c3b1  MOV dword ptr [EBP + 0xfffffea0],EAX
0045c3b7  LEA ECX,[EBP + 0xfffffed8]
0045c3bd  PUSH ECX
0045c3be  MOV EDX,dword ptr [EBP + 0xfffffea4]
0045c3c4  MOV EAX,[0x00790738]
0045c3c9  MOV CX,word ptr [EAX + EDX*0x2 + 0xac]
0045c3d1  PUSH ECX
0045c3d2  MOV EDX,dword ptr [EBP + 0xfffffea0]
0045c3d8  MOV EAX,[0x00790738]
0045c3dd  MOV CX,word ptr [EAX + EDX*0x2 + 0xa2]
0045c3e5  PUSH ECX
0045c3e6  MOV ECX,dword ptr [0x00790744]
0045c3ec  CALL 0x00452fd0
0045c3f1  MOV EDX,dword ptr [0x00790738]
0045c3f7  MOV EAX,dword ptr [EDX + 0x10c]
0045c3fd  MOV dword ptr [EBP + 0xfffffe9c],EAX
0045c403  MOV ECX,dword ptr [0x00790738]
0045c409  MOV EDX,dword ptr [ECX + 0x10c]
0045c40f  MOV dword ptr [EBP + 0xfffffe98],EDX
0045c415  MOV EAX,[0x00790738]
0045c41a  MOV ECX,dword ptr [EAX + 0x10c]
0045c420  MOV dword ptr [EBP + 0xfffffe94],ECX
0045c426  LEA EDX,[EBP + -0xc]
0045c429  PUSH EDX
0045c42a  MOV EAX,dword ptr [EBP + 0xfffffe9c]
0045c430  MOV ECX,dword ptr [0x00790738]
0045c436  MOV DX,word ptr [ECX + EAX*0x2 + 0xac]
0045c43e  PUSH EDX
0045c43f  MOV EAX,dword ptr [EBP + 0xfffffe98]
0045c445  MOV ECX,dword ptr [0x00790738]
0045c44b  MOV DX,word ptr [ECX + EAX*0x2 + 0xa2]
0045c453  PUSH EDX
0045c454  MOV EAX,dword ptr [EBP + 0xfffffe94]
0045c45a  PUSH EAX
0045c45b  MOV ECX,dword ptr [0x00790744]
0045c461  CALL 0x004530b0
0045c466  LEA ECX,[EBP + 0xfffffee0]
0045c46c  PUSH ECX
0045c46d  MOV EDX,dword ptr [EBP + 0x8]
0045c470  MOV EAX,[0x00790738]
0045c475  MOV CX,word ptr [EAX + EDX*0x2 + 0xac]
0045c47d  PUSH ECX
0045c47e  MOV EDX,dword ptr [EBP + 0x8]
0045c481  MOV EAX,[0x00790738]
0045c486  MOV CX,word ptr [EAX + EDX*0x2 + 0xa2]
0045c48e  PUSH ECX
0045c48f  MOV ECX,dword ptr [0x00790744]
0045c495  CALL 0x00452fd0
0045c49a  LEA EDX,[EBP + 0xfffffee8]
0045c4a0  PUSH EDX
0045c4a1  MOV EAX,dword ptr [EBP + 0x8]
0045c4a4  MOV ECX,dword ptr [0x00790738]
0045c4aa  MOV DX,word ptr [ECX + EAX*0x2 + 0xac]
0045c4b2  PUSH EDX
0045c4b3  MOV EAX,dword ptr [EBP + 0x8]
0045c4b6  MOV ECX,dword ptr [0x00790738]
0045c4bc  MOV DX,word ptr [ECX + EAX*0x2 + 0xa2]
0045c4c4  PUSH EDX
0045c4c5  MOV EAX,dword ptr [EBP + 0x8]
0045c4c8  PUSH EAX
0045c4c9  MOV ECX,dword ptr [0x00790744]
0045c4cf  CALL 0x004530b0
0045c4d4  LEA ECX,[EBP + 0xfffffee0]
0045c4da  PUSH ECX
0045c4db  LEA EDX,[EBP + 0xfffffed8]
0045c4e1  PUSH EDX
0045c4e2  MOV ECX,dword ptr [0x00790744]
0045c4e8  CALL 0x004534b0
0045c4ed  MOVZX EAX,AL
0045c4f0  TEST EAX,EAX
0045c4f2  SETZ CL
0045c4f5  MOV byte ptr [EBP + 0xfffffe8f],CL
0045c4fb  MOV EDX,dword ptr [0x00790738]
0045c501  MOV dword ptr [EBP + 0xfffffe90],EDX
0045c507  MOV EAX,dword ptr [EBP + 0xfffffe90]
0045c50d  ADD EAX,dword ptr [EBP + 0x8]
0045c510  MOV CL,byte ptr [EBP + 0xfffffe8f]
0045c516  MOV byte ptr [EAX + 0xea],CL
0045c51c  LEA EDX,[EBP + 0xfffffee8]
0045c522  PUSH EDX
0045c523  LEA EAX,[EBP + -0xc]
0045c526  PUSH EAX
0045c527  MOV ECX,dword ptr [0x00790744]
0045c52d  CALL 0x00453550
0045c532  MOVZX ECX,AL
0045c535  TEST ECX,ECX
0045c537  SETZ DL
0045c53a  MOV byte ptr [EBP + 0xfffffe87],DL
0045c540  MOV EAX,[0x00790738]
0045c545  MOV dword ptr [EBP + 0xfffffe88],EAX
0045c54b  MOV ECX,dword ptr [EBP + 0xfffffe88]
0045c551  ADD ECX,dword ptr [EBP + 0x8]
0045c554  MOV DL,byte ptr [EBP + 0xfffffe87]
0045c55a  MOV byte ptr [ECX + 0xef],DL
0045c560  MOV EAX,dword ptr [EBP + 0x8]
0045c563  PUSH EAX
0045c564  MOV ECX,dword ptr [0x00790738]
0045c56a  CALL 0x00461600
0045c56f  CMP dword ptr [EBP + 0x8],0x4
0045c573  JNZ 0x0045c584
0045c575  MOV ECX,dword ptr [0x00790738]
0045c57b  MOV byte ptr [ECX + 0x115],0x1
0045c582  JMP 0x0045c5a3
0045c584  MOV EDX,dword ptr [EBP + 0x8]
0045c587  PUSH EDX
0045c588  CALL 0x005dcb00
0045c58d  ADD ESP,0x4
0045c590  MOV dword ptr [EBP + 0xfffffe80],EAX
0045c596  MOV EAX,dword ptr [EBP + 0xfffffe80]
0045c59c  MOV byte ptr [EAX + 0x4a2],0x1
0045c5a3  CMP dword ptr [EBP + 0x8],0x4
0045c5a7  JZ 0x0045c5d5
0045c5a9  MOV ECX,dword ptr [0x00790738]
0045c5af  MOV dword ptr [EBP + 0xfffffe7c],ECX
0045c5b5  MOV EDX,dword ptr [EBP + 0xfffffe7c]
0045c5bb  MOV dword ptr [EDX + 0x124],0x5
0045c5c5  MOV EAX,dword ptr [EBP + 0xfffffe7c]
0045c5cb  MOV dword ptr [EAX + 0x128],0x4
0045c5d5  PUSH 0x0
0045c5d7  PUSH 0x1
0045c5d9  MOV ECX,dword ptr [0x00790734]
0045c5df  MOV EDX,dword ptr [ECX + 0x4]
0045c5e2  MOV EAX,[0x00790734]
0045c5e7  MOV ECX,dword ptr [EAX + 0x4]
0045c5ea  MOV EDX,dword ptr [EDX]
0045c5ec  MOV EAX,dword ptr [EDX + 0x8]
0045c5ef  CALL EAX
0045c5f1  MOV ECX,dword ptr [EBP + -0x4]
0045c5f4  XOR ECX,EBP
0045c5f6  CALL 0x00686d72
0045c5fb  MOV ESP,EBP
0045c5fd  POP EBP
0045c5fe  RET 0x4
