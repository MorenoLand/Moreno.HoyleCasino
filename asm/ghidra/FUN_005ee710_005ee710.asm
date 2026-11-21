; FUN_005ee710  005ee710
005ee710  PUSH EBP
005ee711  MOV EBP,ESP
005ee713  SUB ESP,0x114
005ee719  MOV EAX,[0x00781870]
005ee71e  XOR EAX,EBP
005ee720  MOV dword ptr [EBP + -0xc],EAX
005ee723  MOV dword ptr [EBP + 0xfffffeec],ECX
005ee729  MOV EAX,dword ptr [EBP + 0x8]
005ee72c  PUSH EAX
005ee72d  MOV ECX,dword ptr [EBP + 0xfffffeec]
005ee733  MOV EDX,dword ptr [ECX]
005ee735  MOV ECX,dword ptr [EBP + 0xfffffeec]
005ee73b  MOV EAX,dword ptr [EDX + 0xb4]
005ee741  CALL EAX
005ee743  CMP dword ptr [EBP + 0x8],0x0
005ee747  JZ 0x005ee75c
005ee749  MOV ECX,dword ptr [EBP + 0x8]
005ee74c  PUSH ECX
005ee74d  CALL 0x00686ecc
005ee752  ADD ESP,0x4
005ee755  CMP EAX,0xff
005ee75a  JC 0x005ee761
005ee75c  JMP 0x005ee876
005ee761  MOV EDX,dword ptr [EBP + 0x8]
005ee764  PUSH EDX
005ee765  LEA EAX,[EBP + 0xfffffef0]
005ee76b  PUSH EAX
005ee76c  CALL 0x00686d8e
005ee771  ADD ESP,0x8
005ee774  MOV ECX,dword ptr [EBP + 0xfffffeec]
005ee77a  MOV EDX,dword ptr [ECX + 0x70]
005ee77d  AND EDX,0x2
005ee780  JZ 0x005ee81f
005ee786  MOVSX EAX,byte ptr [EBP + 0xfffffef0]
005ee78d  TEST EAX,EAX
005ee78f  JZ 0x005ee81d
005ee795  MOV ECX,dword ptr [EBP + 0xfffffeec]
005ee79b  CALL 0x005ef050
005ee7a0  MOV ECX,dword ptr [EBP + 0xfffffeec]
005ee7a6  CMP EAX,dword ptr [ECX + 0x68]
005ee7a9  JL 0x005ee81d
005ee7ab  LEA EDX,[EBP + 0xfffffef0]
005ee7b1  PUSH EDX
005ee7b2  CALL 0x00686ecc
005ee7b7  ADD ESP,0x4
005ee7ba  MOV dword ptr [EBP + -0x4],EAX
005ee7bd  MOV dword ptr [EBP + -0x8],0x0
005ee7c4  JMP 0x005ee7cf
005ee7c6  MOV EAX,dword ptr [EBP + -0x8]
005ee7c9  ADD EAX,0x1
005ee7cc  MOV dword ptr [EBP + -0x8],EAX
005ee7cf  MOV ECX,dword ptr [EBP + -0x4]
005ee7d2  SUB ECX,0x1
005ee7d5  CMP dword ptr [EBP + -0x8],ECX
005ee7d8  JGE 0x005ee7f0
005ee7da  MOV EDX,dword ptr [EBP + -0x8]
005ee7dd  MOV EAX,dword ptr [EBP + -0x8]
005ee7e0  MOV CL,byte ptr [EBP + EAX*0x1 + 0xfffffef1]
005ee7e7  MOV byte ptr [EBP + EDX*0x1 + 0xfffffef0],CL
005ee7ee  JMP 0x005ee7c6
005ee7f0  MOV EDX,dword ptr [EBP + -0x8]
005ee7f3  MOV byte ptr [EBP + EDX*0x1 + 0xfffffef0],0x0
005ee7fb  LEA EAX,[EBP + 0xfffffef0]
005ee801  PUSH EAX
005ee802  MOV ECX,dword ptr [EBP + 0xfffffeec]
005ee808  MOV EDX,dword ptr [ECX]
005ee80a  MOV ECX,dword ptr [EBP + 0xfffffeec]
005ee810  MOV EAX,dword ptr [EDX + 0xb4]
005ee816  CALL EAX
005ee818  JMP 0x005ee786
005ee81d  JMP 0x005ee876
005ee81f  MOVSX ECX,byte ptr [EBP + 0xfffffef0]
005ee826  TEST ECX,ECX
005ee828  JZ 0x005ee876
005ee82a  MOV ECX,dword ptr [EBP + 0xfffffeec]
005ee830  CALL 0x005ef050
005ee835  MOV EDX,dword ptr [EBP + 0xfffffeec]
005ee83b  CMP EAX,dword ptr [EDX + 0x68]
005ee83e  JL 0x005ee876
005ee840  LEA EAX,[EBP + 0xfffffef0]
005ee846  PUSH EAX
005ee847  CALL 0x00686ecc
005ee84c  ADD ESP,0x4
005ee84f  MOV byte ptr [EBP + EAX*0x1 + 0xfffffeef],0x0
005ee857  LEA ECX,[EBP + 0xfffffef0]
005ee85d  PUSH ECX
005ee85e  MOV EDX,dword ptr [EBP + 0xfffffeec]
005ee864  MOV EAX,dword ptr [EDX]
005ee866  MOV ECX,dword ptr [EBP + 0xfffffeec]
005ee86c  MOV EDX,dword ptr [EAX + 0xb4]
005ee872  CALL EDX
005ee874  JMP 0x005ee81f
005ee876  MOV ECX,dword ptr [EBP + -0xc]
005ee879  XOR ECX,EBP
005ee87b  CALL 0x00686d72
005ee880  MOV ESP,EBP
005ee882  POP EBP
005ee883  RET 0x4
