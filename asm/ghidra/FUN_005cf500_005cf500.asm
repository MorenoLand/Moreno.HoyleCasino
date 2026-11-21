; FUN_005cf500  005cf500
005cf500  PUSH EBP
005cf501  MOV EBP,ESP
005cf503  SUB ESP,0x328
005cf509  MOV EAX,[0x00781870]
005cf50e  XOR EAX,EBP
005cf510  MOV dword ptr [EBP + -0x4],EAX
005cf513  PUSH ESI
005cf514  MOV dword ptr [EBP + 0xfffffcdc],ECX
005cf51a  MOV dword ptr [EBP + 0xfffffd7c],0x6d30b0
005cf524  MOV dword ptr [EBP + 0xfffffd80],0x6c2318
005cf52e  MOV dword ptr [EBP + 0xfffffd84],0xd7
005cf538  MOV dword ptr [EBP + 0xfffffd88],0x168
005cf542  MOV byte ptr [EBP + 0xfffffdfb],0x0
005cf549  MOV dword ptr [EBP + 0xfffffd74],0x0
005cf553  MOV dword ptr [EBP + 0xfffffd78],0x0
005cf55d  MOV byte ptr [EBP + 0xfffffd07],0x0
005cf564  PUSH -0x1
005cf566  PUSH 0x12
005cf568  PUSH 0x1
005cf56a  PUSH 0x1
005cf56c  PUSH 0x0
005cf56e  PUSH 0x19
005cf570  PUSH 0x1c0
005cf575  PUSH 0x49
005cf577  PUSH 0x6d309c
005cf57c  CALL 0x00630f40
005cf581  ADD ESP,0x4
005cf584  PUSH EAX
005cf585  PUSH -0x1
005cf587  PUSH 0x0
005cf589  MOV ECX,dword ptr [EBP + 0xfffffcdc]
005cf58f  CALL 0x005fa5b0
005cf594  MOV EAX,[0x007947e4]
005cf599  MOV EDX,dword ptr [EAX]
005cf59b  MOV ECX,dword ptr [0x007947e4]
005cf5a1  MOV EAX,dword ptr [EDX + 0x25c]
005cf5a7  CALL EAX
005cf5a9  MOV ECX,dword ptr [EBP + 0xfffffcdc]
005cf5af  MOV dword ptr [ECX + 0x1c0],EAX
005cf5b5  MOV EDX,dword ptr [EBP + 0xfffffcdc]
005cf5bb  CMP dword ptr [EDX + 0x1c0],0x0
005cf5c2  JZ 0x005cf5f6
005cf5c4  PUSH -0x1
005cf5c6  MOV EAX,[0x0162ee84]
005cf5cb  MOV EDX,dword ptr [EAX]
005cf5cd  MOV ECX,dword ptr [0x0162ee84]
005cf5d3  MOV EAX,dword ptr [EDX + 0x33c]
005cf5d9  CALL EAX
005cf5db  MOVZX ECX,AL
005cf5de  TEST ECX,ECX
005cf5e0  JZ 0x005cf5f6
005cf5e2  PUSH 0x8
005cf5e4  MOV ECX,dword ptr [0x0162ee84]
005cf5ea  CALL 0x00635cb0
005cf5ef  MOVZX EDX,AL
005cf5f2  TEST EDX,EDX
005cf5f4  JZ 0x005cf60d
005cf5f6  MOV ECX,dword ptr [0x0162ee84]
005cf5fc  CALL 0x006375b0
005cf601  MOV ECX,dword ptr [EBP + 0xfffffcdc]
005cf607  MOV dword ptr [ECX + 0x1c0],EAX
005cf60d  MOV EDX,dword ptr [EBP + 0xfffffcdc]
005cf613  CMP dword ptr [EDX + 0x1c0],0x0
005cf61a  JNZ 0x005cf633
005cf61c  PUSH 0x29c
005cf621  PUSH 0x6d2dfc
005cf626  PUSH 0x6d3090
005cf62b  CALL 0x005e9f20
005cf630  ADD ESP,0xc
005cf633  MOV ECX,dword ptr [EBP + 0xfffffcdc]
005cf639  MOV ECX,dword ptr [ECX + 0x1c0]
005cf63f  CALL 0x005d6bd0
005cf644  MOV ESI,EAX
005cf646  MOV EDX,dword ptr [EBP + 0xfffffcdc]
005cf64c  MOV ECX,dword ptr [EDX + 0x1c0]
005cf652  CALL 0x005d5a50
005cf657  XOR ECX,ECX
005cf659  CMP ESI,EAX
005cf65b  SETLE CL
005cf65e  MOV byte ptr [EBP + 0xfffffd07],CL
005cf664  MOV EDX,dword ptr [EBP + 0xfffffcdc]
005cf66a  MOV ECX,dword ptr [EDX + 0x1c0]
005cf670  CALL 0x005d6cd0
005cf675  MOV ECX,dword ptr [EBP + 0xfffffcdc]
005cf67b  MOV byte ptr [ECX + 0x1bc],AL
005cf681  MOV EDX,dword ptr [EBP + 0xfffffcdc]
005cf687  MOV EAX,dword ptr [EDX + 0x1c0]
005cf68d  MOV dword ptr [EBP + 0xfffffd00],EAX
005cf693  MOV ECX,dword ptr [EBP + 0xfffffd00]
005cf699  CALL 0x005d52e0
005cf69e  MOV CL,byte ptr [EAX + 0x29]
005cf6a1  MOV byte ptr [EBP + 0xfffffdfb],CL
005cf6a7  MOVZX EDX,byte ptr [EBP + 0xfffffdfb]
005cf6ae  TEST EDX,EDX
005cf6b0  JZ 0x005cf6db
005cf6b2  MOVZX EAX,byte ptr [EBP + 0xfffffd07]
005cf6b9  TEST EAX,EAX
005cf6bb  JZ 0x005cf6db
005cf6bd  MOV ECX,dword ptr [0x007947e4]
005cf6c3  CALL 0x005da830
005cf6c8  MOVZX ECX,AL
005cf6cb  TEST ECX,ECX
005cf6cd  JNZ 0x005cf6db
005cf6cf  MOV dword ptr [EBP + 0xfffffcd8],0x1
005cf6d9  JMP 0x005cf6e5
005cf6db  MOV dword ptr [EBP + 0xfffffcd8],0x0
005cf6e5  MOV EDX,dword ptr [EBP + 0xfffffcdc]
005cf6eb  MOV AL,byte ptr [EBP + 0xfffffcd8]
005cf6f1  MOV byte ptr [EDX + 0x1bd],AL
005cf6f7  MOV ECX,dword ptr [EBP + 0xfffffcdc]
005cf6fd  MOV ECX,dword ptr [ECX + 0x1c0]
005cf703  CALL 0x005d6bd0
005cf708  MOV dword ptr [EBP + 0xfffffd74],EAX
005cf70e  PUSH 0x1
005cf710  PUSH 0x1
005cf712  PUSH 0x1
005cf714  LEA EDX,[EBP + 0xfffffd90]
005cf71a  PUSH EDX
005cf71b  MOV EAX,dword ptr [EBP + 0xfffffd78]
005cf721  PUSH EAX
005cf722  MOV ECX,dword ptr [EBP + 0xfffffd74]
005cf728  PUSH ECX
005cf729  CALL 0x0064c8d0
005cf72e  ADD ESP,0x18
005cf731  MOVZX EDX,byte ptr [EBP + 0xfffffdfb]
005cf738  TEST EDX,EDX
005cf73a  JZ 0x005cf831
005cf740  MOV EAX,dword ptr [EBP + 0xfffffcdc]
005cf746  MOVZX ECX,byte ptr [EAX + 0x1bd]
005cf74d  TEST ECX,ECX
005cf74f  JZ 0x005cf7bc
005cf751  PUSH 0x6d3078
005cf756  CALL 0x00630f40
005cf75b  ADD ESP,0x4
005cf75e  PUSH EAX
005cf75f  LEA EDX,[EBP + 0xfffffd08]
005cf765  PUSH EDX
005cf766  CALL dword ptr [0x006b2220]
005cf76c  ADD ESP,0x8
005cf76f  MOV EAX,dword ptr [EBP + 0xfffffcdc]
005cf775  MOV ECX,dword ptr [EAX + 0x1c0]
005cf77b  MOV dword ptr [EBP + 0xfffffcfc],ECX
005cf781  MOV ECX,dword ptr [EBP + 0xfffffcfc]
005cf787  CALL 0x0063aac0
005cf78c  ADD EAX,0x4
005cf78f  MOV dword ptr [EBP + 0xfffffcf8],EAX
005cf795  MOV EDX,dword ptr [EBP + 0xfffffcf8]
005cf79b  PUSH EDX
005cf79c  PUSH 0x6d3054
005cf7a1  CALL 0x00630f40
005cf7a6  ADD ESP,0x4
005cf7a9  PUSH EAX
005cf7aa  LEA EAX,[EBP + 0xfffffe00]
005cf7b0  PUSH EAX
005cf7b1  CALL dword ptr [0x006b2220]
005cf7b7  ADD ESP,0xc
005cf7ba  JMP 0x005cf82c
005cf7bc  PUSH 0x6d3034
005cf7c1  CALL 0x00630f40
005cf7c6  ADD ESP,0x4
005cf7c9  PUSH EAX
005cf7ca  LEA ECX,[EBP + 0xfffffd08]
005cf7d0  PUSH ECX
005cf7d1  CALL dword ptr [0x006b2220]
005cf7d7  ADD ESP,0x8
005cf7da  MOV EDX,dword ptr [EBP + 0xfffffcdc]
005cf7e0  MOV EAX,dword ptr [EDX + 0x1c0]
005cf7e6  MOV dword ptr [EBP + 0xfffffcf4],EAX
005cf7ec  MOV ECX,dword ptr [EBP + 0xfffffcf4]
005cf7f2  CALL 0x0063aac0
005cf7f7  ADD EAX,0x4
005cf7fa  MOV dword ptr [EBP + 0xfffffcf0],EAX
005cf800  LEA ECX,[EBP + 0xfffffd90]
005cf806  PUSH ECX
005cf807  MOV EDX,dword ptr [EBP + 0xfffffcf0]
005cf80d  PUSH EDX
005cf80e  PUSH 0x6d3008
005cf813  CALL 0x00630f40
005cf818  ADD ESP,0x4
005cf81b  PUSH EAX
005cf81c  LEA EAX,[EBP + 0xfffffe00]
005cf822  PUSH EAX
005cf823  CALL dword ptr [0x006b2220]
005cf829  ADD ESP,0x10
005cf82c  JMP 0x005cf916
005cf831  MOV ECX,dword ptr [EBP + 0xfffffcdc]
005cf837  MOVZX EDX,byte ptr [ECX + 0x1bc]
005cf83e  TEST EDX,EDX
005cf840  JZ 0x005cf8ad
005cf842  PUSH 0x6d2fec
005cf847  CALL 0x00630f40
005cf84c  ADD ESP,0x4
005cf84f  PUSH EAX
005cf850  LEA EAX,[EBP + 0xfffffd08]
005cf856  PUSH EAX
005cf857  CALL dword ptr [0x006b2220]
005cf85d  ADD ESP,0x8
005cf860  MOV ECX,dword ptr [EBP + 0xfffffcdc]
005cf866  MOV EDX,dword ptr [ECX + 0x1c0]
005cf86c  MOV dword ptr [EBP + 0xfffffcec],EDX
005cf872  MOV ECX,dword ptr [EBP + 0xfffffcec]
005cf878  CALL 0x0063aac0
005cf87d  ADD EAX,0x4
005cf880  MOV dword ptr [EBP + 0xfffffce8],EAX
005cf886  LEA EAX,[EBP + 0xfffffd90]
005cf88c  PUSH EAX
005cf88d  MOV ECX,dword ptr [EBP + 0xfffffce8]
005cf893  PUSH ECX
005cf894  MOV EDX,dword ptr [0x0075d490]
005cf89a  PUSH EDX
005cf89b  LEA EAX,[EBP + 0xfffffe00]
005cf8a1  PUSH EAX
005cf8a2  CALL dword ptr [0x006b2220]
005cf8a8  ADD ESP,0x10
005cf8ab  JMP 0x005cf916
005cf8ad  PUSH 0x6d2fd0
005cf8b2  CALL 0x00630f40
005cf8b7  ADD ESP,0x4
005cf8ba  PUSH EAX
005cf8bb  LEA ECX,[EBP + 0xfffffd08]
005cf8c1  PUSH ECX
005cf8c2  CALL dword ptr [0x006b2220]
005cf8c8  ADD ESP,0x8
005cf8cb  MOV EDX,dword ptr [EBP + 0xfffffcdc]
005cf8d1  MOV EAX,dword ptr [EDX + 0x1c0]
005cf8d7  MOV dword ptr [EBP + 0xfffffce4],EAX
005cf8dd  MOV ECX,dword ptr [EBP + 0xfffffce4]
005cf8e3  CALL 0x0063aac0
005cf8e8  ADD EAX,0x4
005cf8eb  MOV dword ptr [EBP + 0xfffffce0],EAX
005cf8f1  MOV ECX,dword ptr [EBP + 0xfffffce0]
005cf8f7  PUSH ECX
005cf8f8  PUSH 0x6d2fa4
005cf8fd  CALL 0x00630f40
005cf902  ADD ESP,0x4
005cf905  PUSH EAX
005cf906  LEA EDX,[EBP + 0xfffffe00]
005cf90c  PUSH EDX
005cf90d  CALL dword ptr [0x006b2220]
005cf913  ADD ESP,0xc
005cf916  PUSH -0x1
005cf918  PUSH 0x5
005cf91a  PUSH 0x3
005cf91c  PUSH 0x32
005cf91e  PUSH 0xc7
005cf923  PUSH 0x22
005cf925  PUSH 0xaa
005cf92a  PUSH 0x48
005cf92c  LEA EAX,[EBP + 0xfffffd08]
005cf932  PUSH EAX
005cf933  PUSH 0x0
005cf935  PUSH 0x0
005cf937  MOV ECX,dword ptr [EBP + 0xfffffcdc]
005cf93d  CALL 0x005fa5b0
005cf942  PUSH -0x1
005cf944  PUSH 0x5
005cf946  PUSH 0x3
005cf948  PUSH 0x4a
005cf94a  PUSH 0xc7
005cf94f  PUSH 0x190
005cf954  PUSH 0xf2
005cf959  PUSH 0x1f
005cf95b  LEA ECX,[EBP + 0xfffffe00]
005cf961  PUSH ECX
005cf962  PUSH 0x1
005cf964  PUSH 0x0
005cf966  MOV ECX,dword ptr [EBP + 0xfffffcdc]
005cf96c  CALL 0x005fa5b0
005cf971  MOV dword ptr [EBP + 0xfffffdfc],0x0
005cf97b  JMP 0x005cf98c
005cf97d  MOV EDX,dword ptr [EBP + 0xfffffdfc]
005cf983  ADD EDX,0x1
005cf986  MOV dword ptr [EBP + 0xfffffdfc],EDX
005cf98c  CMP dword ptr [EBP + 0xfffffdfc],0x2
005cf993  JGE 0x005cfa3f
005cf999  CMP dword ptr [EBP + 0xfffffdfc],0x0
005cf9a0  JNZ 0x005cf9c6
005cf9a2  MOV EAX,dword ptr [EBP + 0xfffffcdc]
005cf9a8  MOVZX ECX,byte ptr [EAX + 0x1bc]
005cf9af  TEST ECX,ECX
005cf9b1  JNZ 0x005cf9c6
005cf9b3  MOV EDX,dword ptr [EBP + 0xfffffcdc]
005cf9b9  MOVZX EAX,byte ptr [EDX + 0x1bd]
005cf9c0  TEST EAX,EAX
005cf9c2  JNZ 0x005cf9c6
005cf9c4  JMP 0x005cf97d
005cf9c6  MOV ECX,dword ptr [EBP + 0xfffffdfc]
005cf9cc  SUB ECX,0x1
005cf9cf  NEG ECX
005cf9d1  SBB ECX,ECX
005cf9d3  AND ECX,0xffffffe5
005cf9d6  ADD ECX,0x1b
005cf9d9  PUSH ECX
005cf9da  PUSH -0x1
005cf9dc  PUSH 0x4a
005cf9de  PUSH 0x4b
005cf9e0  PUSH 0x48
005cf9e2  MOV EDX,dword ptr [EBP + 0xfffffdfc]
005cf9e8  MOV EAX,dword ptr [EBP + EDX*0x4 + 0xfffffd7c]
005cf9ef  PUSH EAX
005cf9f0  CALL 0x00630f40
005cf9f5  ADD ESP,0x4
005cf9f8  PUSH EAX
005cf9f9  PUSH 0x1
005cf9fb  PUSH 0x11c
005cfa00  MOV ECX,dword ptr [EBP + 0xfffffdfc]
005cfa06  MOV EDX,dword ptr [EBP + ECX*0x4 + 0xfffffd84]
005cfa0d  PUSH EDX
005cfa0e  XOR EAX,EAX
005cfa10  CMP dword ptr [EBP + 0xfffffdfc],0x1
005cfa17  SETNZ AL
005cfa1a  ADD EAX,0x30d4de
005cfa1f  PUSH EAX
005cfa20  MOV ECX,dword ptr [EBP + 0xfffffdfc]
005cfa26  PUSH ECX
005cfa27  PUSH 0x0
005cfa29  MOV ECX,dword ptr [EBP + 0xfffffcdc]
005cfa2f  CALL 0x005f9de0
005cfa34  MOV dword ptr [EBP + 0xfffffd8c],EAX
005cfa3a  JMP 0x005cf97d
005cfa3f  POP ESI
005cfa40  MOV ECX,dword ptr [EBP + -0x4]
005cfa43  XOR ECX,EBP
005cfa45  CALL 0x00686d72
005cfa4a  MOV ESP,EBP
005cfa4c  POP EBP
005cfa4d  RET
