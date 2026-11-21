; FUN_005eb780  005eb780
005eb780  PUSH EBP
005eb781  MOV EBP,ESP
005eb783  SUB ESP,0x7c
005eb786  MOV dword ptr [EBP + -0x7c],ECX
005eb789  MOV EAX,dword ptr [EBP + -0x7c]
005eb78c  CMP dword ptr [EAX + 0x174],0x0
005eb793  JZ 0x005eba35
005eb799  MOV ECX,dword ptr [EBP + -0x7c]
005eb79c  CMP dword ptr [ECX + 0x4],0x0
005eb7a0  JZ 0x005eba35
005eb7a6  MOV ECX,dword ptr [EBP + -0x7c]
005eb7a9  CALL 0x005f54a0
005eb7ae  MOVZX EDX,AL
005eb7b1  TEST EDX,EDX
005eb7b3  JZ 0x005eba35
005eb7b9  MOV EAX,dword ptr [EBP + -0x7c]
005eb7bc  MOVZX ECX,byte ptr [EAX + 0x16c]
005eb7c3  TEST ECX,ECX
005eb7c5  JLE 0x005eba35
005eb7cb  MOV EDX,dword ptr [EBP + -0x7c]
005eb7ce  MOV EAX,dword ptr [EBP + -0x7c]
005eb7d1  MOV ECX,dword ptr [EDX + 0x1c]
005eb7d4  SUB ECX,dword ptr [EAX + 0x14]
005eb7d7  MOV EDX,dword ptr [EBP + -0x7c]
005eb7da  ADD ECX,dword ptr [EDX + 0x14]
005eb7dd  MOV dword ptr [EBP + -0x50],ECX
005eb7e0  MOV EAX,dword ptr [EBP + -0x7c]
005eb7e3  MOV ECX,dword ptr [EBP + -0x7c]
005eb7e6  MOV EDX,dword ptr [EAX + 0x18]
005eb7e9  SUB EDX,dword ptr [ECX + 0x10]
005eb7ec  MOV EAX,dword ptr [EBP + -0x7c]
005eb7ef  ADD EDX,dword ptr [EAX + 0x10]
005eb7f2  MOV dword ptr [EBP + -0x4c],EDX
005eb7f5  MOV ECX,dword ptr [EBP + -0x7c]
005eb7f8  MOV EDX,dword ptr [ECX + 0x14]
005eb7fb  MOV dword ptr [EBP + -0x48],EDX
005eb7fe  MOV EAX,dword ptr [EBP + -0x7c]
005eb801  MOV ECX,dword ptr [EAX + 0x10]
005eb804  MOV dword ptr [EBP + -0x44],ECX
005eb807  MOV EDX,dword ptr [EBP + -0x44]
005eb80a  MOV dword ptr [EBP + -0x20],EDX
005eb80d  MOV EAX,dword ptr [EBP + -0x48]
005eb810  MOV dword ptr [EBP + -0x1c],EAX
005eb813  MOV ECX,dword ptr [EBP + -0x4c]
005eb816  MOV dword ptr [EBP + -0x18],ECX
005eb819  MOV EDX,dword ptr [EBP + -0x50]
005eb81c  MOV dword ptr [EBP + -0x14],EDX
005eb81f  MOV EAX,dword ptr [EBP + -0x7c]
005eb822  CMP dword ptr [EAX + 0x40],0x1
005eb826  JLE 0x005eb8d5
005eb82c  MOV ECX,dword ptr [EBP + -0x20]
005eb82f  MOV dword ptr [EBP + -0x30],ECX
005eb832  MOV EDX,dword ptr [EBP + -0x1c]
005eb835  MOV dword ptr [EBP + -0x2c],EDX
005eb838  MOV EAX,dword ptr [EBP + -0x18]
005eb83b  MOV dword ptr [EBP + -0x28],EAX
005eb83e  MOV ECX,dword ptr [EBP + -0x14]
005eb841  MOV dword ptr [EBP + -0x24],ECX
005eb844  MOV EDX,dword ptr [EBP + -0x7c]
005eb847  MOV EAX,dword ptr [EDX + 0x40]
005eb84a  MOV dword ptr [EBP + -0x54],EAX
005eb84d  CMP dword ptr [EBP + -0x54],0x1
005eb851  JG 0x005eb855
005eb853  JMP 0x005eb875
005eb855  MOV ECX,dword ptr [EBP + -0x18]
005eb858  SUB ECX,dword ptr [EBP + -0x20]
005eb85b  IMUL ECX,dword ptr [EBP + -0x54]
005eb85f  ADD ECX,dword ptr [EBP + -0x20]
005eb862  MOV dword ptr [EBP + -0x18],ECX
005eb865  MOV EDX,dword ptr [EBP + -0x14]
005eb868  SUB EDX,dword ptr [EBP + -0x1c]
005eb86b  IMUL EDX,dword ptr [EBP + -0x54]
005eb86f  ADD EDX,dword ptr [EBP + -0x1c]
005eb872  MOV dword ptr [EBP + -0x14],EDX
005eb875  MOV EAX,dword ptr [EBP + 0x8]
005eb878  PUSH EAX
005eb879  LEA ECX,[EBP + -0x20]
005eb87c  PUSH ECX
005eb87d  LEA EDX,[EBP + -0x20]
005eb880  PUSH EDX
005eb881  CALL 0x005ec3a0
005eb886  ADD ESP,0xc
005eb889  MOV EAX,dword ptr [EBP + -0x20]
005eb88c  MOV dword ptr [EBP + -0x10],EAX
005eb88f  MOV ECX,dword ptr [EBP + -0x1c]
005eb892  MOV dword ptr [EBP + -0xc],ECX
005eb895  MOV EDX,dword ptr [EBP + -0x18]
005eb898  MOV dword ptr [EBP + -0x8],EDX
005eb89b  MOV EAX,dword ptr [EBP + -0x14]
005eb89e  MOV dword ptr [EBP + -0x4],EAX
005eb8a1  PUSH 0x0
005eb8a3  MOV ECX,dword ptr [EBP + -0x7c]
005eb8a6  MOV EDX,dword ptr [ECX + 0x40]
005eb8a9  PUSH EDX
005eb8aa  LEA EAX,[EBP + -0x30]
005eb8ad  PUSH EAX
005eb8ae  LEA ECX,[EBP + -0x20]
005eb8b1  PUSH ECX
005eb8b2  CALL 0x005ec4a0
005eb8b7  ADD ESP,0x10
005eb8ba  PUSH 0x1
005eb8bc  MOV EDX,dword ptr [EBP + -0x7c]
005eb8bf  MOV EAX,dword ptr [EDX + 0x40]
005eb8c2  PUSH EAX
005eb8c3  LEA ECX,[EBP + -0x30]
005eb8c6  PUSH ECX
005eb8c7  LEA EDX,[EBP + -0x10]
005eb8ca  PUSH EDX
005eb8cb  CALL 0x005ec4a0
005eb8d0  ADD ESP,0x10
005eb8d3  JMP 0x005eb92d
005eb8d5  MOV EAX,dword ptr [EBP + 0x8]
005eb8d8  MOV ECX,dword ptr [EAX]
005eb8da  MOV dword ptr [EBP + -0x40],ECX
005eb8dd  MOV EDX,dword ptr [EAX + 0x4]
005eb8e0  MOV dword ptr [EBP + -0x3c],EDX
005eb8e3  MOV ECX,dword ptr [EAX + 0x8]
005eb8e6  MOV dword ptr [EBP + -0x38],ECX
005eb8e9  MOV EDX,dword ptr [EAX + 0xc]
005eb8ec  MOV dword ptr [EBP + -0x34],EDX
005eb8ef  MOV EAX,dword ptr [EBP + -0x38]
005eb8f2  ADD EAX,0x1
005eb8f5  MOV dword ptr [EBP + -0x38],EAX
005eb8f8  MOV ECX,dword ptr [EBP + -0x34]
005eb8fb  ADD ECX,0x1
005eb8fe  MOV dword ptr [EBP + -0x34],ECX
005eb901  LEA EDX,[EBP + -0x40]
005eb904  PUSH EDX
005eb905  LEA EAX,[EBP + -0x20]
005eb908  PUSH EAX
005eb909  LEA ECX,[EBP + -0x20]
005eb90c  PUSH ECX
005eb90d  CALL 0x005ec3a0
005eb912  ADD ESP,0xc
005eb915  MOV EDX,dword ptr [EBP + -0x20]
005eb918  MOV dword ptr [EBP + -0x10],EDX
005eb91b  MOV EAX,dword ptr [EBP + -0x1c]
005eb91e  MOV dword ptr [EBP + -0xc],EAX
005eb921  MOV ECX,dword ptr [EBP + -0x18]
005eb924  MOV dword ptr [EBP + -0x8],ECX
005eb927  MOV EDX,dword ptr [EBP + -0x14]
005eb92a  MOV dword ptr [EBP + -0x4],EDX
005eb92d  MOV EAX,dword ptr [EBP + -0x7c]
005eb930  MOV ECX,dword ptr [EAX + 0x14]
005eb933  NEG ECX
005eb935  MOV dword ptr [EBP + -0x6c],ECX
005eb938  MOV EDX,dword ptr [EBP + -0x7c]
005eb93b  MOV EAX,dword ptr [EDX + 0x10]
005eb93e  NEG EAX
005eb940  MOV dword ptr [EBP + -0x68],EAX
005eb943  MOV ECX,dword ptr [EBP + -0x10]
005eb946  ADD ECX,dword ptr [EBP + -0x68]
005eb949  MOV dword ptr [EBP + -0x10],ECX
005eb94c  MOV EDX,dword ptr [EBP + -0xc]
005eb94f  ADD EDX,dword ptr [EBP + -0x6c]
005eb952  MOV dword ptr [EBP + -0xc],EDX
005eb955  MOV EAX,dword ptr [EBP + -0x8]
005eb958  ADD EAX,dword ptr [EBP + -0x68]
005eb95b  MOV dword ptr [EBP + -0x8],EAX
005eb95e  MOV ECX,dword ptr [EBP + -0x4]
005eb961  ADD ECX,dword ptr [EBP + -0x6c]
005eb964  MOV dword ptr [EBP + -0x4],ECX
005eb967  MOV EDX,dword ptr [EBP + -0x7c]
005eb96a  MOV ECX,dword ptr [EDX + 0x4]
005eb96d  CALL 0x005f84f0
005eb972  MOV dword ptr [EBP + -0x74],EAX
005eb975  MOV EAX,dword ptr [EBP + -0x7c]
005eb978  MOV ECX,dword ptr [EAX + 0x4]
005eb97b  CALL 0x005f84d0
005eb980  MOV dword ptr [EBP + -0x70],EAX
005eb983  MOV ECX,dword ptr [EBP + -0x20]
005eb986  ADD ECX,dword ptr [EBP + -0x70]
005eb989  MOV dword ptr [EBP + -0x20],ECX
005eb98c  MOV EDX,dword ptr [EBP + -0x1c]
005eb98f  ADD EDX,dword ptr [EBP + -0x74]
005eb992  MOV dword ptr [EBP + -0x1c],EDX
005eb995  MOV EAX,dword ptr [EBP + -0x18]
005eb998  ADD EAX,dword ptr [EBP + -0x70]
005eb99b  MOV dword ptr [EBP + -0x18],EAX
005eb99e  MOV ECX,dword ptr [EBP + -0x14]
005eb9a1  ADD ECX,dword ptr [EBP + -0x74]
005eb9a4  MOV dword ptr [EBP + -0x14],ECX
005eb9a7  MOV EDX,dword ptr [EBP + -0x7c]
005eb9aa  MOV EAX,dword ptr [EDX + 0x4]
005eb9ad  MOV ECX,dword ptr [EAX + 0x1a8]
005eb9b3  MOV dword ptr [EBP + -0x78],ECX
005eb9b6  PUSH 0x0
005eb9b8  MOV EDX,dword ptr [EBP + -0x7c]
005eb9bb  MOV AL,byte ptr [EDX + 0x16f]
005eb9c1  PUSH EAX
005eb9c2  MOV ECX,dword ptr [EBP + -0x7c]
005eb9c5  MOV EDX,dword ptr [ECX + 0x40]
005eb9c8  PUSH EDX
005eb9c9  MOV EAX,dword ptr [EBP + -0x7c]
005eb9cc  MOVZX ECX,byte ptr [EAX + 0x16c]
005eb9d3  PUSH ECX
005eb9d4  SUB ESP,0x10
005eb9d7  MOV EDX,ESP
005eb9d9  MOV EAX,dword ptr [EBP + -0x10]
005eb9dc  MOV dword ptr [EDX],EAX
005eb9de  MOV ECX,dword ptr [EBP + -0xc]
005eb9e1  MOV dword ptr [EDX + 0x4],ECX
005eb9e4  MOV EAX,dword ptr [EBP + -0x8]
005eb9e7  MOV dword ptr [EDX + 0x8],EAX
005eb9ea  MOV ECX,dword ptr [EBP + -0x4]
005eb9ed  MOV dword ptr [EDX + 0xc],ECX
005eb9f0  SUB ESP,0x10
005eb9f3  MOV EDX,ESP
005eb9f5  MOV EAX,dword ptr [EBP + -0x20]
005eb9f8  MOV dword ptr [EDX],EAX
005eb9fa  MOV ECX,dword ptr [EBP + -0x1c]
005eb9fd  MOV dword ptr [EDX + 0x4],ECX
005eba00  MOV EAX,dword ptr [EBP + -0x18]
005eba03  MOV dword ptr [EDX + 0x8],EAX
005eba06  MOV ECX,dword ptr [EBP + -0x14]
005eba09  MOV dword ptr [EDX + 0xc],ECX
005eba0c  MOV EDX,dword ptr [EBP + -0x78]
005eba0f  MOV EAX,dword ptr [EDX + 0x50]
005eba12  PUSH EAX
005eba13  MOV ECX,dword ptr [EBP + -0x7c]
005eba16  MOV EDX,dword ptr [ECX + 0x15c]
005eba1c  PUSH EDX
005eba1d  MOV EAX,dword ptr [EBP + -0x7c]
005eba20  MOV ECX,dword ptr [EAX + 0x164]
005eba26  PUSH ECX
005eba27  MOV EDX,dword ptr [EBP + -0x7c]
005eba2a  MOV ECX,dword ptr [EDX + 0x174]
005eba30  CALL 0x00616510
005eba35  MOV ESP,EBP
005eba37  POP EBP
005eba38  RET 0x4
