; FUN_004fe290  004fe290
004fe290  PUSH EBP
004fe291  MOV EBP,ESP
004fe293  PUSH -0x1
004fe295  PUSH 0x6a2b16
004fe29a  MOV EAX,FS:[0x0]
004fe2a0  PUSH EAX
004fe2a1  SUB ESP,0x2a4
004fe2a7  PUSH ESI
004fe2a8  PUSH EDI
004fe2a9  MOV EAX,[0x00781870]
004fe2ae  XOR EAX,EBP
004fe2b0  PUSH EAX
004fe2b1  LEA EAX,[EBP + -0xc]
004fe2b4  MOV FS:[0x0],EAX
004fe2ba  MOV dword ptr [EBP + 0xfffffea4],0x0
004fe2c4  MOV ECX,dword ptr [0x00791364]
004fe2ca  CALL 0x0047e420
004fe2cf  MOV dword ptr [EBP + -0x18],EAX
004fe2d2  MOV dword ptr [EBP + -0x14],0x0
004fe2d9  CMP dword ptr [EBP + -0x18],0x0
004fe2dd  JGE 0x004fe2f6
004fe2df  PUSH 0x26e
004fe2e4  PUSH 0x6c0c40
004fe2e9  PUSH 0x6bc1d4
004fe2ee  CALL 0x005e9f20
004fe2f3  ADD ESP,0xc
004fe2f6  MOV ECX,dword ptr [0x00791364]
004fe2fc  CALL 0x0047f950
004fe301  CMP dword ptr [EBP + -0x18],EAX
004fe304  JL 0x004fe31d
004fe306  PUSH 0x26f
004fe30b  PUSH 0x6c0c40
004fe310  PUSH 0x6bc19c
004fe315  CALL 0x005e9f20
004fe31a  ADD ESP,0xc
004fe31d  MOV ECX,dword ptr [0x00791364]
004fe323  CALL 0x0047e3b0
004fe328  MOV [0x007926f8],EAX
004fe32d  MOV EDX,dword ptr [EBP + -0x18]
004fe330  MOVSX EAX,word ptr [EDX*0x2 + 0x792de8]
004fe338  CMP EAX,dword ptr [EBP + 0x8]
004fe33b  JZ 0x004ffd25
004fe341  MOV word ptr [EBP + -0x28],0x0
004fe347  MOV word ptr [EBP + -0x38],0x0
004fe34d  JMP 0x004fe35b
004fe34f  MOV CX,word ptr [EBP + -0x38]
004fe353  ADD CX,0x1
004fe357  MOV word ptr [EBP + -0x38],CX
004fe35b  MOVSX ESI,word ptr [EBP + -0x38]
004fe35f  MOV ECX,dword ptr [0x00791364]
004fe365  CALL 0x0047f950
004fe36a  CMP ESI,EAX
004fe36c  JGE 0x004fe3bf
004fe36e  MOVSX EDX,word ptr [EBP + -0x38]
004fe372  CMP EDX,dword ptr [EBP + -0x18]
004fe375  JNZ 0x004fe379
004fe377  JMP 0x004fe34f
004fe379  MOVSX EAX,word ptr [EBP + -0x38]
004fe37d  PUSH EAX
004fe37e  MOV ECX,dword ptr [0x00791364]
004fe384  CALL 0x0047e390
004fe389  MOV dword ptr [EBP + -0x14],EAX
004fe38c  MOV ECX,dword ptr [EBP + -0x14]
004fe38f  CALL 0x004c7010
004fe394  CMP EAX,0x1
004fe397  JNZ 0x004fe3bd
004fe399  MOV ECX,dword ptr [EBP + -0x14]
004fe39c  CALL 0x004c7050
004fe3a1  PUSH EAX
004fe3a2  MOV ECX,dword ptr [0x00791364]
004fe3a8  ADD ECX,0x38
004fe3ab  CALL 0x004f6a90
004fe3b0  MOVSX ECX,AX
004fe3b3  MOVSX EDX,word ptr [EBP + -0x28]
004fe3b7  ADD EDX,ECX
004fe3b9  MOV word ptr [EBP + -0x28],DX
004fe3bd  JMP 0x004fe34f
004fe3bf  MOV ECX,dword ptr [0x007926f8]
004fe3c5  CALL 0x004d6db0
004fe3ca  MOV word ptr [EBP + -0x34],AX
004fe3ce  MOVSX EAX,word ptr [EBP + -0x34]
004fe3d2  PUSH EAX
004fe3d3  CALL 0x0062fbf0
004fe3d8  ADD ESP,0x4
004fe3db  MOV ESI,EAX
004fe3dd  MOVSX ECX,word ptr [EBP + -0x34]
004fe3e1  PUSH ECX
004fe3e2  CALL 0x0062fbf0
004fe3e7  ADD ESP,0x4
004fe3ea  SUB ESI,EAX
004fe3ec  MOVSX EDI,word ptr [EBP + -0x28]
004fe3f0  MOV ECX,dword ptr [0x007926f8]
004fe3f6  CALL 0x004d6d70
004fe3fb  MOVSX EDX,AX
004fe3fe  ADD EDX,0x1
004fe401  PUSH EDX
004fe402  CALL 0x0062fbf0
004fe407  ADD ESP,0x4
004fe40a  IMUL EDI,EAX
004fe40d  SUB ESI,EDI
004fe40f  MOV EAX,dword ptr [EBP + -0x18]
004fe412  MOV word ptr [EAX*0x2 + 0x7925b0],SI
004fe41a  LEA ECX,[EBP + -0x30]
004fe41d  CALL 0x00484300
004fe422  MOV dword ptr [EBP + -0x4],0x0
004fe429  MOV ECX,dword ptr [0x00791364]
004fe42f  CALL 0x0047d6f0
004fe434  CMP EAX,0x1
004fe437  JNZ 0x004fe481
004fe439  LEA ECX,[EBP + 0xffffff58]
004fe43f  PUSH ECX
004fe440  MOV ECX,dword ptr [0x007926f8]
004fe446  CALL 0x004c80b0
004fe44b  MOV dword ptr [EBP + 0xfffffea0],EAX
004fe451  MOV EDX,dword ptr [EBP + 0xfffffea0]
004fe457  MOV dword ptr [EBP + 0xfffffe9c],EDX
004fe45d  MOV byte ptr [EBP + -0x4],0x1
004fe461  MOV EAX,dword ptr [EBP + 0xfffffe9c]
004fe467  PUSH EAX
004fe468  LEA ECX,[EBP + -0x30]
004fe46b  CALL 0x00484490
004fe470  MOV byte ptr [EBP + -0x4],0x0
004fe474  LEA ECX,[EBP + 0xffffff58]
004fe47a  CALL 0x00484470
004fe47f  JMP 0x004fe4c7
004fe481  LEA ECX,[EBP + 0xffffff50]
004fe487  PUSH ECX
004fe488  MOV ECX,dword ptr [0x007926f8]
004fe48e  CALL 0x004c7c40
004fe493  MOV dword ptr [EBP + 0xfffffe98],EAX
004fe499  MOV EDX,dword ptr [EBP + 0xfffffe98]
004fe49f  MOV dword ptr [EBP + 0xfffffe94],EDX
004fe4a5  MOV byte ptr [EBP + -0x4],0x2
004fe4a9  MOV EAX,dword ptr [EBP + 0xfffffe94]
004fe4af  PUSH EAX
004fe4b0  LEA ECX,[EBP + -0x30]
004fe4b3  CALL 0x00484490
004fe4b8  MOV byte ptr [EBP + -0x4],0x0
004fe4bc  LEA ECX,[EBP + 0xffffff50]
004fe4c2  CALL 0x00484470
004fe4c7  LEA ECX,[EBP + -0x24]
004fe4ca  CALL 0x004646a0
004fe4cf  MOV byte ptr [EBP + -0x4],0x3
004fe4d3  LEA ECX,[EBP + -0x24]
004fe4d6  CALL 0x004646f0
004fe4db  MOV ECX,dword ptr [0x00791364]
004fe4e1  CALL 0x0047d6f0
004fe4e6  CMP EAX,0x1
004fe4e9  JNZ 0x004fe9b5
004fe4ef  MOV ECX,dword ptr [0x0079076c]
004fe4f5  PUSH ECX
004fe4f6  MOV EDX,dword ptr [0x00790768]
004fe4fc  PUSH EDX
004fe4fd  LEA ECX,[EBP + 0xffffff4f]
004fe503  CALL 0x00464130
004fe508  MOV dword ptr [EBP + 0xfffffe90],EAX
004fe50e  MOV EAX,dword ptr [EBP + 0xfffffe90]
004fe514  MOV dword ptr [EBP + 0xfffffe8c],EAX
004fe51a  MOV byte ptr [EBP + -0x4],0x4
004fe51e  MOV ECX,dword ptr [EBP + 0xfffffe8c]
004fe524  PUSH ECX
004fe525  LEA ECX,[EBP + -0x24]
004fe528  CALL 0x004648b0
004fe52d  MOV byte ptr [EBP + -0x4],0x3
004fe531  LEA ECX,[EBP + 0xffffff4f]
004fe537  CALL 0x00464210
004fe53c  MOV EDX,dword ptr [0x00790754]
004fe542  PUSH EDX
004fe543  MOV EAX,[0x00790768]
004fe548  PUSH EAX
004fe549  LEA ECX,[EBP + 0xffffff4e]
004fe54f  CALL 0x00464130
004fe554  MOV dword ptr [EBP + 0xfffffe88],EAX
004fe55a  MOV ECX,dword ptr [EBP + 0xfffffe88]
004fe560  MOV dword ptr [EBP + 0xfffffe84],ECX
004fe566  MOV byte ptr [EBP + -0x4],0x5
004fe56a  MOV EDX,dword ptr [EBP + 0xfffffe84]
004fe570  PUSH EDX
004fe571  LEA ECX,[EBP + -0x24]
004fe574  CALL 0x004648b0
004fe579  MOV byte ptr [EBP + -0x4],0x3
004fe57d  LEA ECX,[EBP + 0xffffff4e]
004fe583  CALL 0x00464210
004fe588  MOV EAX,[0x00790764]
004fe58d  PUSH EAX
004fe58e  MOV ECX,dword ptr [0x00790768]
004fe594  PUSH ECX
004fe595  LEA ECX,[EBP + 0xffffff4d]
004fe59b  CALL 0x00464130
004fe5a0  MOV dword ptr [EBP + 0xfffffe80],EAX
004fe5a6  MOV EDX,dword ptr [EBP + 0xfffffe80]
004fe5ac  MOV dword ptr [EBP + 0xfffffe7c],EDX
004fe5b2  MOV byte ptr [EBP + -0x4],0x6
004fe5b6  MOV EAX,dword ptr [EBP + 0xfffffe7c]
004fe5bc  PUSH EAX
004fe5bd  LEA ECX,[EBP + -0x24]
004fe5c0  CALL 0x004648b0
004fe5c5  MOV byte ptr [EBP + -0x4],0x3
004fe5c9  LEA ECX,[EBP + 0xffffff4d]
004fe5cf  CALL 0x00464210
004fe5d4  MOV ECX,dword ptr [0x00790770]
004fe5da  PUSH ECX
004fe5db  MOV EDX,dword ptr [0x00790768]
004fe5e1  PUSH EDX
004fe5e2  LEA ECX,[EBP + 0xffffff4c]
004fe5e8  CALL 0x00464130
004fe5ed  MOV dword ptr [EBP + 0xfffffe78],EAX
004fe5f3  MOV EAX,dword ptr [EBP + 0xfffffe78]
004fe5f9  MOV dword ptr [EBP + 0xfffffe74],EAX
004fe5ff  MOV byte ptr [EBP + -0x4],0x7
004fe603  MOV ECX,dword ptr [EBP + 0xfffffe74]
004fe609  PUSH ECX
004fe60a  LEA ECX,[EBP + -0x24]
004fe60d  CALL 0x004648b0
004fe612  MOV byte ptr [EBP + -0x4],0x3
004fe616  LEA ECX,[EBP + 0xffffff4c]
004fe61c  CALL 0x00464210
004fe621  MOV EDX,dword ptr [0x0079076c]
004fe627  PUSH EDX
004fe628  MOV EAX,[0x00790794]
004fe62d  PUSH EAX
004fe62e  LEA ECX,[EBP + 0xffffff4b]
004fe634  CALL 0x00464130
004fe639  MOV dword ptr [EBP + 0xfffffe70],EAX
004fe63f  MOV ECX,dword ptr [EBP + 0xfffffe70]
004fe645  MOV dword ptr [EBP + 0xfffffe6c],ECX
004fe64b  MOV byte ptr [EBP + -0x4],0x8
004fe64f  MOV EDX,dword ptr [EBP + 0xfffffe6c]
004fe655  PUSH EDX
004fe656  LEA ECX,[EBP + -0x24]
004fe659  CALL 0x004648b0
004fe65e  MOV byte ptr [EBP + -0x4],0x3
004fe662  LEA ECX,[EBP + 0xffffff4b]
004fe668  CALL 0x00464210
004fe66d  MOV EAX,[0x00790754]
004fe672  PUSH EAX
004fe673  MOV ECX,dword ptr [0x00790794]
004fe679  PUSH ECX
004fe67a  LEA ECX,[EBP + 0xffffff4a]
004fe680  CALL 0x00464130
004fe685  MOV dword ptr [EBP + 0xfffffe68],EAX
004fe68b  MOV EDX,dword ptr [EBP + 0xfffffe68]
004fe691  MOV dword ptr [EBP + 0xfffffe64],EDX
004fe697  MOV byte ptr [EBP + -0x4],0x9
004fe69b  MOV EAX,dword ptr [EBP + 0xfffffe64]
004fe6a1  PUSH EAX
004fe6a2  LEA ECX,[EBP + -0x24]
004fe6a5  CALL 0x004648b0
004fe6aa  MOV byte ptr [EBP + -0x4],0x3
004fe6ae  LEA ECX,[EBP + 0xffffff4a]
004fe6b4  CALL 0x00464210
004fe6b9  MOV ECX,dword ptr [0x00790764]
004fe6bf  PUSH ECX
004fe6c0  MOV EDX,dword ptr [0x00790794]
004fe6c6  PUSH EDX
004fe6c7  LEA ECX,[EBP + 0xffffff49]
004fe6cd  CALL 0x00464130
004fe6d2  MOV dword ptr [EBP + 0xfffffe60],EAX
004fe6d8  MOV EAX,dword ptr [EBP + 0xfffffe60]
004fe6de  MOV dword ptr [EBP + 0xfffffe5c],EAX
004fe6e4  MOV byte ptr [EBP + -0x4],0xa
004fe6e8  MOV ECX,dword ptr [EBP + 0xfffffe5c]
004fe6ee  PUSH ECX
004fe6ef  LEA ECX,[EBP + -0x24]
004fe6f2  CALL 0x004648b0
004fe6f7  MOV byte ptr [EBP + -0x4],0x3
004fe6fb  LEA ECX,[EBP + 0xffffff49]
004fe701  CALL 0x00464210
004fe706  MOV EDX,dword ptr [0x00790770]
004fe70c  PUSH EDX
004fe70d  MOV EAX,[0x00790794]
004fe712  PUSH EAX
004fe713  LEA ECX,[EBP + 0xffffff48]
004fe719  CALL 0x00464130
004fe71e  MOV dword ptr [EBP + 0xfffffe58],EAX
004fe724  MOV ECX,dword ptr [EBP + 0xfffffe58]
004fe72a  MOV dword ptr [EBP + 0xfffffe54],ECX
004fe730  MOV byte ptr [EBP + -0x4],0xb
004fe734  MOV EDX,dword ptr [EBP + 0xfffffe54]
004fe73a  PUSH EDX
004fe73b  LEA ECX,[EBP + -0x24]
004fe73e  CALL 0x004648b0
004fe743  MOV byte ptr [EBP + -0x4],0x3
004fe747  LEA ECX,[EBP + 0xffffff48]
004fe74d  CALL 0x00464210
004fe752  MOV EAX,[0x00790780]
004fe757  PUSH EAX
004fe758  MOV ECX,dword ptr [0x0079077c]
004fe75e  PUSH ECX
004fe75f  LEA ECX,[EBP + 0xffffff47]
004fe765  CALL 0x00464130
004fe76a  MOV dword ptr [EBP + 0xfffffe50],EAX
004fe770  MOV EDX,dword ptr [EBP + 0xfffffe50]
004fe776  MOV dword ptr [EBP + 0xfffffe4c],EDX
004fe77c  MOV byte ptr [EBP + -0x4],0xc
004fe780  MOV EAX,dword ptr [EBP + 0xfffffe4c]
004fe786  PUSH EAX
004fe787  LEA ECX,[EBP + -0x24]
004fe78a  CALL 0x00464770
004fe78f  MOV byte ptr [EBP + -0x4],0x3
004fe793  LEA ECX,[EBP + 0xffffff47]
004fe799  CALL 0x00464210
004fe79e  MOV ECX,dword ptr [0x00790780]
004fe7a4  PUSH ECX
004fe7a5  MOV EDX,dword ptr [0x0079077c]
004fe7ab  PUSH EDX
004fe7ac  LEA ECX,[EBP + 0xffffff46]
004fe7b2  CALL 0x00464130
004fe7b7  MOV dword ptr [EBP + 0xfffffe48],EAX
004fe7bd  MOV EAX,dword ptr [EBP + 0xfffffe48]
004fe7c3  MOV dword ptr [EBP + 0xfffffe44],EAX
004fe7c9  MOV byte ptr [EBP + -0x4],0xd
004fe7cd  MOV ECX,dword ptr [EBP + 0xfffffe44]
004fe7d3  PUSH ECX
004fe7d4  LEA ECX,[EBP + -0x24]
004fe7d7  CALL 0x00464770
004fe7dc  MOV byte ptr [EBP + -0x4],0x3
004fe7e0  LEA ECX,[EBP + 0xffffff46]
004fe7e6  CALL 0x00464210
004fe7eb  MOV EDX,dword ptr [0x00790780]
004fe7f1  PUSH EDX
004fe7f2  MOV EAX,[0x0079077c]
004fe7f7  PUSH EAX
004fe7f8  LEA ECX,[EBP + 0xffffff45]
004fe7fe  CALL 0x00464130
004fe803  MOV dword ptr [EBP + 0xfffffe40],EAX
004fe809  MOV ECX,dword ptr [EBP + 0xfffffe40]
004fe80f  MOV dword ptr [EBP + 0xfffffe3c],ECX
004fe815  MOV byte ptr [EBP + -0x4],0xe
004fe819  MOV EDX,dword ptr [EBP + 0xfffffe3c]
004fe81f  PUSH EDX
004fe820  LEA ECX,[EBP + -0x24]
004fe823  CALL 0x00464770
004fe828  MOV byte ptr [EBP + -0x4],0x3
004fe82c  LEA ECX,[EBP + 0xffffff45]
004fe832  CALL 0x00464210
004fe837  MOV EAX,[0x00790780]
004fe83c  PUSH EAX
004fe83d  MOV ECX,dword ptr [0x0079077c]
004fe843  PUSH ECX
004fe844  LEA ECX,[EBP + 0xffffff44]
004fe84a  CALL 0x00464130
004fe84f  MOV dword ptr [EBP + 0xfffffe38],EAX
004fe855  MOV EDX,dword ptr [EBP + 0xfffffe38]
004fe85b  MOV dword ptr [EBP + 0xfffffe34],EDX
004fe861  MOV byte ptr [EBP + -0x4],0xf
004fe865  MOV EAX,dword ptr [EBP + 0xfffffe34]
004fe86b  PUSH EAX
004fe86c  LEA ECX,[EBP + -0x24]
004fe86f  CALL 0x00464770
004fe874  MOV byte ptr [EBP + -0x4],0x3
004fe878  LEA ECX,[EBP + 0xffffff44]
004fe87e  CALL 0x00464210
004fe883  MOV ECX,dword ptr [0x00790780]
004fe889  PUSH ECX
004fe88a  MOV EDX,dword ptr [0x0079077c]
004fe890  PUSH EDX
004fe891  LEA ECX,[EBP + 0xffffff43]
004fe897  CALL 0x00464130
004fe89c  MOV dword ptr [EBP + 0xfffffe30],EAX
004fe8a2  MOV EAX,dword ptr [EBP + 0xfffffe30]
004fe8a8  MOV dword ptr [EBP + 0xfffffe2c],EAX
004fe8ae  MOV byte ptr [EBP + -0x4],0x10
004fe8b2  MOV ECX,dword ptr [EBP + 0xfffffe2c]
004fe8b8  PUSH ECX
004fe8b9  LEA ECX,[EBP + -0x24]
004fe8bc  CALL 0x00464770
004fe8c1  MOV byte ptr [EBP + -0x4],0x3
004fe8c5  LEA ECX,[EBP + 0xffffff43]
004fe8cb  CALL 0x00464210
004fe8d0  MOV EDX,dword ptr [0x00790780]
004fe8d6  PUSH EDX
004fe8d7  MOV EAX,[0x0079077c]
004fe8dc  PUSH EAX
004fe8dd  LEA ECX,[EBP + 0xffffff42]
004fe8e3  CALL 0x00464130
004fe8e8  MOV dword ptr [EBP + 0xfffffe28],EAX
004fe8ee  MOV ECX,dword ptr [EBP + 0xfffffe28]
004fe8f4  MOV dword ptr [EBP + 0xfffffe24],ECX
004fe8fa  MOV byte ptr [EBP + -0x4],0x11
004fe8fe  MOV EDX,dword ptr [EBP + 0xfffffe24]
004fe904  PUSH EDX
004fe905  LEA ECX,[EBP + -0x24]
004fe908  CALL 0x00464770
004fe90d  MOV byte ptr [EBP + -0x4],0x3
004fe911  LEA ECX,[EBP + 0xffffff42]
004fe917  CALL 0x00464210
004fe91c  MOV EAX,[0x00790780]
004fe921  PUSH EAX
004fe922  MOV ECX,dword ptr [0x0079077c]
004fe928  PUSH ECX
004fe929  LEA ECX,[EBP + 0xffffff41]
004fe92f  CALL 0x00464130
004fe934  MOV dword ptr [EBP + 0xfffffe20],EAX
004fe93a  MOV EDX,dword ptr [EBP + 0xfffffe20]
004fe940  MOV dword ptr [EBP + 0xfffffe1c],EDX
004fe946  MOV byte ptr [EBP + -0x4],0x12
004fe94a  MOV EAX,dword ptr [EBP + 0xfffffe1c]
004fe950  PUSH EAX
004fe951  LEA ECX,[EBP + -0x24]
004fe954  CALL 0x00464770
004fe959  MOV byte ptr [EBP + -0x4],0x3
004fe95d  LEA ECX,[EBP + 0xffffff41]
004fe963  CALL 0x00464210
004fe968  MOV ECX,dword ptr [0x00790780]
004fe96e  PUSH ECX
004fe96f  MOV EDX,dword ptr [0x0079077c]
004fe975  PUSH EDX
004fe976  LEA ECX,[EBP + 0xffffff40]
004fe97c  CALL 0x00464130
004fe981  MOV dword ptr [EBP + 0xfffffe18],EAX
004fe987  MOV EAX,dword ptr [EBP + 0xfffffe18]
004fe98d  MOV dword ptr [EBP + 0xfffffe14],EAX
004fe993  MOV byte ptr [EBP + -0x4],0x13
004fe997  MOV ECX,dword ptr [EBP + 0xfffffe14]
004fe99d  PUSH ECX
004fe99e  LEA ECX,[EBP + -0x24]
004fe9a1  CALL 0x00464770
004fe9a6  MOV byte ptr [EBP + -0x4],0x3
004fe9aa  LEA ECX,[EBP + 0xffffff40]
004fe9b0  CALL 0x00464210
004fe9b5  LEA EDX,[EBP + -0x30]
004fe9b8  PUSH EDX
004fe9b9  LEA ECX,[EBP + -0x24]
004fe9bc  CALL 0x004649c0
004fe9c1  MOV word ptr [EBP + -0x38],0x0
004fe9c7  JMP 0x004fe9d5
004fe9c9  MOV AX,word ptr [EBP + -0x38]
004fe9cd  ADD AX,0x1
004fe9d1  MOV word ptr [EBP + -0x38],AX
004fe9d5  MOVSX ESI,word ptr [EBP + -0x38]
004fe9d9  MOV ECX,dword ptr [0x00791364]
004fe9df  CALL 0x0047f950
004fe9e4  CMP ESI,EAX
004fe9e6  JGE 0x004feab7
004fe9ec  MOVSX ECX,word ptr [EBP + -0x38]
004fe9f0  CMP ECX,dword ptr [EBP + -0x18]
004fe9f3  JNZ 0x004fe9f7
004fe9f5  JMP 0x004fe9c9
004fe9f7  MOVSX EDX,word ptr [EBP + -0x38]
004fe9fb  PUSH EDX
004fe9fc  MOV ECX,dword ptr [0x00791364]
004fea02  CALL 0x0047e390
004fea07  MOV dword ptr [EBP + -0x14],EAX
004fea0a  MOV ECX,dword ptr [EBP + -0x14]
004fea0d  CALL 0x004c7010
004fea12  TEST EAX,EAX
004fea14  JZ 0x004feab2
004fea1a  MOV ECX,dword ptr [0x00791364]
004fea20  CALL 0x0047d6f0
004fea25  CMP EAX,0x1
004fea28  JNZ 0x004fea6f
004fea2a  LEA EAX,[EBP + 0xffffff38]
004fea30  PUSH EAX
004fea31  MOV ECX,dword ptr [EBP + -0x14]
004fea34  CALL 0x004c84a0
004fea39  MOV dword ptr [EBP + 0xfffffe10],EAX
004fea3f  MOV ECX,dword ptr [EBP + 0xfffffe10]
004fea45  MOV dword ptr [EBP + 0xfffffe0c],ECX
004fea4b  MOV byte ptr [EBP + -0x4],0x14
004fea4f  MOV EDX,dword ptr [EBP + 0xfffffe0c]
004fea55  PUSH EDX
004fea56  LEA ECX,[EBP + -0x24]
004fea59  CALL 0x004649c0
004fea5e  MOV byte ptr [EBP + -0x4],0x3
004fea62  LEA ECX,[EBP + 0xffffff38]
004fea68  CALL 0x00484470
004fea6d  JMP 0x004feab2
004fea6f  LEA EAX,[EBP + 0xffffff30]
004fea75  PUSH EAX
004fea76  MOV ECX,dword ptr [EBP + -0x14]
004fea79  CALL 0x004c8300
004fea7e  MOV dword ptr [EBP + 0xfffffe08],EAX
004fea84  MOV ECX,dword ptr [EBP + 0xfffffe08]
004fea8a  MOV dword ptr [EBP + 0xfffffe04],ECX
004fea90  MOV byte ptr [EBP + -0x4],0x15
004fea94  MOV EDX,dword ptr [EBP + 0xfffffe04]
004fea9a  PUSH EDX
004fea9b  LEA ECX,[EBP + -0x24]
004fea9e  CALL 0x004649c0
004feaa3  MOV byte ptr [EBP + -0x4],0x3
004feaa7  LEA ECX,[EBP + 0xffffff30]
004feaad  CALL 0x00484470
004feab2  JMP 0x004fe9c9
004feab7  MOV EAX,dword ptr [EBP + -0x18]
004feaba  LEA ECX,[EAX*0x2 + 0x7920e8]
004feac1  PUSH ECX
004feac2  MOV EDX,dword ptr [EBP + -0x18]
004feac5  LEA EAX,[EDX*0x2 + 0x792f78]
004feacc  PUSH EAX
004feacd  MOV ECX,dword ptr [EBP + -0x18]
004fead0  LEA EDX,[ECX*0x2 + 0x7926fc]
004fead7  PUSH EDX
004fead8  MOV EAX,dword ptr [EBP + -0x18]
004feadb  LEA ECX,[EAX*0x2 + 0x7925c0]
004feae2  PUSH ECX
004feae3  MOV EDX,dword ptr [EBP + -0x18]
004feae6  LEA EAX,[EDX*0x2 + 0x792248]
004feaed  PUSH EAX
004feaee  MOV ECX,dword ptr [EBP + -0x18]
004feaf1  LEA EDX,[ECX*0x2 + 0x792218]
004feaf8  PUSH EDX
004feaf9  MOV EAX,dword ptr [EBP + -0x18]
004feafc  LEA ECX,[EAX*0x2 + 0x792820]
004feb03  PUSH ECX
004feb04  MOV EDX,dword ptr [EBP + -0x18]
004feb07  LEA EAX,[EDX*0x2 + 0x7920f8]
004feb0e  PUSH EAX
004feb0f  MOV ECX,dword ptr [EBP + -0x18]
004feb12  LEA EDX,[ECX*0x2 + 0x792830]
004feb19  PUSH EDX
004feb1a  MOV EAX,dword ptr [EBP + -0x18]
004feb1d  LEA ECX,[EAX*0x2 + 0x7929d8]
004feb24  PUSH ECX
004feb25  SUB ESP,0xc
004feb28  MOV EDX,ESP
004feb2a  MOV EAX,dword ptr [EBP + -0x24]
004feb2d  MOV dword ptr [EDX],EAX
004feb2f  MOV ECX,dword ptr [EBP + -0x20]
004feb32  MOV dword ptr [EDX + 0x4],ECX
004feb35  MOV AX,word ptr [EBP + -0x1c]
004feb39  MOV word ptr [EDX + 0x8],AX
004feb3d  LEA ECX,[EBP + -0x30]
004feb40  CALL 0x004958e0
004feb45  MOV word ptr [EBP + -0x38],0x0
004feb4b  JMP 0x004feb59
004feb4d  MOV CX,word ptr [EBP + -0x38]
004feb51  ADD CX,0x1
004feb55  MOV word ptr [EBP + -0x38],CX
004feb59  MOVSX ESI,word ptr [EBP + -0x38]
004feb5d  MOV ECX,dword ptr [0x00791364]
004feb63  CALL 0x0047f950
004feb68  CMP ESI,EAX
004feb6a  JGE 0x004ffa49
004feb70  MOVSX EDX,word ptr [EBP + -0x38]
004feb74  CMP EDX,dword ptr [EBP + -0x18]
004feb77  JNZ 0x004ff8ec
004feb7d  MOV EAX,dword ptr [EBP + -0x24]
004feb80  MOV dword ptr [EBP + -0x44],EAX
004feb83  MOV ECX,dword ptr [EBP + -0x20]
004feb86  MOV dword ptr [EBP + -0x40],ECX
004feb89  MOV DX,word ptr [EBP + -0x1c]
004feb8d  MOV word ptr [EBP + -0x3c],DX
004feb91  MOV byte ptr [EBP + -0x4],0x16
004feb95  LEA EAX,[EBP + -0x30]
004feb98  PUSH EAX
004feb99  LEA ECX,[EBP + -0x44]
004feb9c  CALL 0x00464860
004feba1  MOV ECX,dword ptr [0x00791364]
004feba7  CALL 0x0047d6f0
004febac  CMP EAX,0x1
004febaf  JNZ 0x004febf9
004febb1  LEA ECX,[EBP + 0xffffff28]
004febb7  PUSH ECX
004febb8  MOV ECX,dword ptr [0x007926f8]
004febbe  CALL 0x004c84a0
004febc3  MOV dword ptr [EBP + 0xfffffe00],EAX
004febc9  MOV EDX,dword ptr [EBP + 0xfffffe00]
004febcf  MOV dword ptr [EBP + 0xfffffdfc],EDX
004febd5  MOV byte ptr [EBP + -0x4],0x17
004febd9  MOV EAX,dword ptr [EBP + 0xfffffdfc]
004febdf  PUSH EAX
004febe0  LEA ECX,[EBP + -0x44]
004febe3  CALL 0x004649c0
004febe8  MOV byte ptr [EBP + -0x4],0x16
004febec  LEA ECX,[EBP + 0xffffff28]
004febf2  CALL 0x00484470
004febf7  JMP 0x004fec3f
004febf9  LEA ECX,[EBP + 0xffffff20]
004febff  PUSH ECX
004fec00  MOV ECX,dword ptr [0x007926f8]
004fec06  CALL 0x004c8300
004fec0b  MOV dword ptr [EBP + 0xfffffdf8],EAX
004fec11  MOV EDX,dword ptr [EBP + 0xfffffdf8]
004fec17  MOV dword ptr [EBP + 0xfffffdf4],EDX
004fec1d  MOV byte ptr [EBP + -0x4],0x18
004fec21  MOV EAX,dword ptr [EBP + 0xfffffdf4]
004fec27  PUSH EAX
004fec28  LEA ECX,[EBP + -0x44]
004fec2b  CALL 0x004649c0
004fec30  MOV byte ptr [EBP + -0x4],0x16
004fec34  LEA ECX,[EBP + 0xffffff20]
004fec3a  CALL 0x00484470
004fec3f  MOV ECX,dword ptr [0x00791364]
004fec45  CALL 0x0047d6f0
004fec4a  CMP EAX,0x1
004fec4d  JNZ 0x004fecd8
004fec53  MOV ECX,dword ptr [EBP + -0x18]
004fec56  SHL ECX,0x5
004fec59  MOVSX EDX,word ptr [EBP + -0x38]
004fec5d  LEA EAX,[ECX + EDX*0x4 + 0x791ed8]
004fec64  PUSH EAX
004fec65  MOV ECX,dword ptr [EBP + -0x18]
004fec68  SHL ECX,0x5
004fec6b  MOVSX EDX,word ptr [EBP + -0x38]
004fec6f  LEA EAX,[ECX + EDX*0x4 + 0x792108]
004fec76  PUSH EAX
004fec77  MOVSX ECX,word ptr [EBP + -0x38]
004fec7b  MOV EDX,dword ptr [EBP + -0x18]
004fec7e  SHL EDX,0x5
004fec81  LEA EAX,[EDX + ECX*0x4 + 0x792be8]
004fec88  PUSH EAX
004fec89  XOR ECX,ECX
004fec8b  CMP dword ptr [EBP + 0x8],0x7
004fec8f  SETZ CL
004fec92  ADD ECX,0x2
004fec95  PUSH ECX
004fec96  SUB ESP,0x8
004fec99  MOV EDX,ESP
004fec9b  MOV dword ptr [EBP + 0xffffff1c],ESP
004feca1  PUSH EDX
004feca2  MOV ECX,dword ptr [0x007926f8]
004feca8  CALL 0x004c84a0
004fecad  MOV dword ptr [EBP + 0xfffffdf0],EAX
004fecb3  SUB ESP,0xc
004fecb6  MOV EAX,ESP
004fecb8  MOV ECX,dword ptr [EBP + -0x44]
004fecbb  MOV dword ptr [EAX],ECX
004fecbd  MOV EDX,dword ptr [EBP + -0x40]
004fecc0  MOV dword ptr [EAX + 0x4],EDX
004fecc3  MOV CX,word ptr [EBP + -0x3c]
004fecc7  MOV word ptr [EAX + 0x8],CX
004feccb  LEA ECX,[EBP + -0x30]
004fecce  CALL 0x00496370
004fecd3  JMP 0x004fed58
004fecd8  MOV EDX,dword ptr [EBP + -0x18]
004fecdb  SHL EDX,0x5
004fecde  MOVSX EAX,word ptr [EBP + -0x38]
004fece2  LEA ECX,[EDX + EAX*0x4 + 0x791ed8]
004fece9  PUSH ECX
004fecea  MOV EDX,dword ptr [EBP + -0x18]
004feced  SHL EDX,0x5
004fecf0  MOVSX EAX,word ptr [EBP + -0x38]
004fecf4  LEA ECX,[EDX + EAX*0x4 + 0x792108]
004fecfb  PUSH ECX
004fecfc  MOVSX EDX,word ptr [EBP + -0x38]
004fed00  MOV EAX,dword ptr [EBP + -0x18]
004fed03  SHL EAX,0x5
004fed06  LEA ECX,[EAX + EDX*0x4 + 0x792be8]
004fed0d  PUSH ECX
004fed0e  XOR EDX,EDX
004fed10  CMP dword ptr [EBP + 0x8],0x7
004fed14  SETZ DL
004fed17  ADD EDX,0x2
004fed1a  PUSH EDX
004fed1b  SUB ESP,0x8
004fed1e  MOV EAX,ESP
004fed20  MOV dword ptr [EBP + 0xffffff18],ESP
004fed26  PUSH EAX
004fed27  MOV ECX,dword ptr [0x007926f8]
004fed2d  CALL 0x004c8300
004fed32  MOV dword ptr [EBP + 0xfffffdec],EAX
004fed38  SUB ESP,0xc
004fed3b  MOV ECX,ESP
004fed3d  MOV EDX,dword ptr [EBP + -0x44]
004fed40  MOV dword ptr [ECX],EDX
004fed42  MOV EAX,dword ptr [EBP + -0x40]
004fed45  MOV dword ptr [ECX + 0x4],EAX
004fed48  MOV DX,word ptr [EBP + -0x3c]
004fed4c  MOV word ptr [ECX + 0x8],DX
004fed50  LEA ECX,[EBP + -0x30]
004fed53  CALL 0x00496370
004fed58  PUSH 0x64
004fed5a  CALL 0x0062fbf0
004fed5f  ADD ESP,0x4
004fed62  MOV ESI,EAX
004fed64  MOVSX EAX,word ptr [EBP + -0x38]
004fed68  SHL EAX,0x5
004fed6b  MOVSX ECX,word ptr [EBP + -0x38]
004fed6f  FILD dword ptr [EAX + ECX*0x4 + 0x791ed8]
004fed76  FMUL double ptr [0x006b4b00]
004fed7c  MOVSX EDX,word ptr [EBP + -0x38]
004fed80  SHL EDX,0x5
004fed83  MOVSX EAX,word ptr [EBP + -0x38]
004fed87  MOVSX ECX,word ptr [EBP + -0x38]
004fed8b  SHL ECX,0x5
004fed8e  MOVSX EDI,word ptr [EBP + -0x38]
004fed92  MOV EDX,dword ptr [EDX + EAX*0x4 + 0x792be8]
004fed99  ADD EDX,dword ptr [ECX + EDI*0x4 + 0x792108]
004feda0  MOVSX EAX,word ptr [EBP + -0x38]
004feda4  SHL EAX,0x5
004feda7  MOVSX ECX,word ptr [EBP + -0x38]
004fedab  ADD EDX,dword ptr [EAX + ECX*0x4 + 0x791ed8]
004fedb2  MOV dword ptr [EBP + 0xfffffde8],EDX
004fedb8  FILD dword ptr [EBP + 0xfffffde8]
004fedbe  FDIVP
004fedc0  CALL 0x00686cc0
004fedc5  CMP ESI,EAX
004fedc7  JGE 0x004fedd6
004fedc9  MOVSX EDX,word ptr [EBP + -0x38]
004fedcd  MOV byte ptr [EDX + 0x7924a8],0x1
004fedd4  JMP 0x004fede1
004fedd6  MOVSX EAX,word ptr [EBP + -0x38]
004fedda  MOV byte ptr [EAX + 0x7924a8],0x0
004fede1  MOV ECX,dword ptr [0x00791364]
004fede7  CALL 0x0047d6f0
004fedec  CMP EAX,0x1
004fedef  JNZ 0x004ff274
004fedf5  CMP dword ptr [EBP + 0x8],0x3
004fedf9  JNZ 0x004fee9e
004fedff  LEA ECX,[EBP + -0x4c]
004fee02  PUSH ECX
004fee03  MOV ECX,dword ptr [0x007926f8]
004fee09  CALL 0x004c84a0
004fee0e  MOV byte ptr [EBP + -0x4],0x19
004fee12  MOV EDX,dword ptr [0x00790780]
004fee18  PUSH EDX
004fee19  MOV EAX,[0x0079077c]
004fee1e  PUSH EAX
004fee1f  LEA ECX,[EBP + 0xffffff16]
004fee25  CALL 0x00464130
004fee2a  MOV dword ptr [EBP + 0xfffffde4],EAX
004fee30  MOV ECX,dword ptr [EBP + 0xfffffde4]
004fee36  MOV dword ptr [EBP + 0xfffffde0],ECX
004fee3c  MOV byte ptr [EBP + -0x4],0x1a
004fee40  MOV EDX,dword ptr [EBP + 0xfffffde0]
004fee46  PUSH EDX
004fee47  LEA ECX,[EBP + -0x4c]
004fee4a  CALL 0x00484ba0
004fee4f  MOV byte ptr [EBP + 0xffffff17],AL
004fee55  MOV byte ptr [EBP + -0x4],0x19
004fee59  LEA ECX,[EBP + 0xffffff16]
004fee5f  CALL 0x00464210
004fee64  MOVZX EAX,byte ptr [EBP + 0xffffff17]
004fee6b  TEST EAX,EAX
004fee6d  JZ 0x004fee7f
004fee6f  MOVSX ECX,word ptr [EBP + -0x38]
004fee73  MOV word ptr [ECX*0x2 + 0x7929c0],0xa
004fee7d  JMP 0x004fee8d
004fee7f  MOVSX EDX,word ptr [EBP + -0x38]
004fee83  MOV word ptr [EDX*0x2 + 0x7929c0],0x0
004fee8d  MOV byte ptr [EBP + -0x4],0x16
004fee91  LEA ECX,[EBP + -0x4c]
004fee94  CALL 0x00484470
004fee99  JMP 0x004ff26f
004fee9e  CMP dword ptr [EBP + 0x8],0x4
004feea2  JNZ 0x004ff044
004feea8  LEA EAX,[EBP + -0x58]
004feeab  PUSH EAX
004feeac  MOV ECX,dword ptr [0x007926f8]
004feeb2  CALL 0x004c84a0
004feeb7  MOV byte ptr [EBP + -0x4],0x1b
004feebb  PUSH 0x0
004feebd  PUSH 0x0
004feebf  PUSH 0x0
004feec1  PUSH 0x1
004feec3  PUSH 0x1
004feec5  PUSH 0x1
004feec7  PUSH 0x1
004feec9  LEA ECX,[EBP + -0x50]
004feecc  PUSH ECX
004feecd  LEA ECX,[EBP + -0x58]
004feed0  CALL 0x00485940
004feed5  MOV byte ptr [EBP + -0x4],0x1c
004feed9  MOV EDX,dword ptr [0x007913b0]
004feedf  PUSH EDX
004feee0  LEA EAX,[EBP + 0xffffff14]
004feee6  PUSH EAX
004feee7  LEA ECX,[EBP + -0x50]
004feeea  CALL 0x004a2160
004feeef  MOV ECX,EAX
004feef1  CALL 0x004a1f00
004feef6  MOVZX ECX,AL
004feef9  TEST ECX,ECX
004feefb  JZ 0x004fef5c
004feefd  MOV EDX,dword ptr [0x00790780]
004fef03  PUSH EDX
004fef04  MOV EAX,[0x0079077c]
004fef09  PUSH EAX
004fef0a  LEA ECX,[EBP + 0xffffff13]
004fef10  CALL 0x00464130
004fef15  MOV dword ptr [EBP + 0xfffffddc],EAX
004fef1b  MOV ECX,dword ptr [EBP + 0xfffffddc]
004fef21  MOV dword ptr [EBP + 0xfffffdd8],ECX
004fef27  MOV byte ptr [EBP + -0x4],0x1d
004fef2b  MOV EDX,dword ptr [EBP + 0xfffffea4]
004fef31  OR EDX,0x1
004fef34  MOV dword ptr [EBP + 0xfffffea4],EDX
004fef3a  MOV EAX,dword ptr [EBP + 0xfffffdd8]
004fef40  PUSH EAX
004fef41  LEA ECX,[EBP + -0x58]
004fef44  CALL 0x00484ba0
004fef49  MOVZX ECX,AL
004fef4c  TEST ECX,ECX
004fef4e  JZ 0x004fef5c
004fef50  MOV dword ptr [EBP + 0xfffffdd4],0x1
004fef5a  JMP 0x004fef66
004fef5c  MOV dword ptr [EBP + 0xfffffdd4],0x0
004fef66  MOV DL,byte ptr [EBP + 0xfffffdd4]
004fef6c  MOV byte ptr [EBP + 0xffffff15],DL
004fef72  MOV dword ptr [EBP + -0x4],0x1c
004fef79  MOV EAX,dword ptr [EBP + 0xfffffea4]
004fef7f  AND EAX,0x1
004fef82  JZ 0x004fef96
004fef84  AND dword ptr [EBP + 0xfffffea4],0xfffffffe
004fef8b  LEA ECX,[EBP + 0xffffff13]
004fef91  CALL 0x00464210
004fef96  MOVZX ECX,byte ptr [EBP + 0xffffff15]
004fef9d  TEST ECX,ECX
004fef9f  JZ 0x004fefe5
004fefa1  MOV EDX,dword ptr [0x007913c8]
004fefa7  PUSH EDX
004fefa8  LEA EAX,[EBP + 0xffffff12]
004fefae  PUSH EAX
004fefaf  LEA ECX,[EBP + -0x50]
004fefb2  CALL 0x004a21b0
004fefb7  MOV ECX,EAX
004fefb9  CALL 0x004a1fb0
004fefbe  MOVZX ECX,AL
004fefc1  TEST ECX,ECX
004fefc3  JZ 0x004fefd5
004fefc5  MOVSX EDX,word ptr [EBP + -0x38]
004fefc9  MOV word ptr [EDX*0x2 + 0x7929c0],0xa
004fefd3  JMP 0x004fefe3
004fefd5  MOVSX EAX,word ptr [EBP + -0x38]
004fefd9  MOV word ptr [EAX*0x2 + 0x7929c0],0x5
004fefe3  JMP 0x004ff027
004fefe5  MOV ECX,dword ptr [0x007913b0]
004fefeb  PUSH ECX
004fefec  LEA EDX,[EBP + 0xffffff11]
004feff2  PUSH EDX
004feff3  LEA ECX,[EBP + -0x50]
004feff6  CALL 0x004a2160
004feffb  MOV ECX,EAX
004feffd  CALL 0x004a1f00
004ff002  MOVZX EAX,AL
004ff005  TEST EAX,EAX
004ff007  JZ 0x004ff019
004ff009  MOVSX ECX,word ptr [EBP + -0x38]
004ff00d  MOV word ptr [ECX*0x2 + 0x7929c0],0x3
004ff017  JMP 0x004ff027
004ff019  MOVSX EDX,word ptr [EBP + -0x38]
004ff01d  MOV word ptr [EDX*0x2 + 0x7929c0],0x0
004ff027  MOV byte ptr [EBP + -0x4],0x1b
004ff02b  LEA ECX,[EBP + -0x50]
004ff02e  CALL 0x004a20f0
004ff033  MOV byte ptr [EBP + -0x4],0x16
004ff037  LEA ECX,[EBP + -0x58]
004ff03a  CALL 0x00484470
004ff03f  JMP 0x004ff26f
004ff044  CMP dword ptr [EBP + 0x8],0x5
004ff048  JNZ 0x004ff15b
004ff04e  LEA EAX,[EBP + 0xffffff08]
004ff054  PUSH EAX
004ff055  MOV ECX,dword ptr [0x007926f8]
004ff05b  CALL 0x004c84a0
004ff060  MOV dword ptr [EBP + 0xfffffdd0],EAX
004ff066  MOV ECX,dword ptr [EBP + 0xfffffdd0]
004ff06c  MOV dword ptr [EBP + 0xfffffdcc],ECX
004ff072  MOV byte ptr [EBP + -0x4],0x1e
004ff076  PUSH 0x0
004ff078  PUSH 0x0
004ff07a  PUSH 0x0
004ff07c  PUSH 0x1
004ff07e  PUSH 0x1
004ff080  PUSH 0x1
004ff082  PUSH 0x1
004ff084  LEA EDX,[EBP + -0x5c]
004ff087  PUSH EDX
004ff088  MOV ECX,dword ptr [EBP + 0xfffffdcc]
004ff08e  CALL 0x00485940
004ff093  MOV byte ptr [EBP + -0x4],0x20
004ff097  LEA ECX,[EBP + 0xffffff08]
004ff09d  CALL 0x00484470
004ff0a2  MOV EAX,[0x00791418]
004ff0a7  PUSH EAX
004ff0a8  LEA ECX,[EBP + 0xffffff07]
004ff0ae  PUSH ECX
004ff0af  LEA ECX,[EBP + -0x5c]
004ff0b2  CALL 0x004a2160
004ff0b7  MOV ECX,EAX
004ff0b9  CALL 0x004a1f00
004ff0be  MOVZX EDX,AL
004ff0c1  TEST EDX,EDX
004ff0c3  JZ 0x004ff108
004ff0c5  MOV EAX,[0x007913c8]
004ff0ca  PUSH EAX
004ff0cb  LEA ECX,[EBP + 0xffffff06]
004ff0d1  PUSH ECX
004ff0d2  LEA ECX,[EBP + -0x5c]
004ff0d5  CALL 0x004a21b0
004ff0da  MOV ECX,EAX
004ff0dc  CALL 0x004a1fb0
004ff0e1  MOVZX EDX,AL
004ff0e4  TEST EDX,EDX
004ff0e6  JZ 0x004ff0f8
004ff0e8  MOVSX EAX,word ptr [EBP + -0x38]
004ff0ec  MOV word ptr [EAX*0x2 + 0x7929c0],0xa
004ff0f6  JMP 0x004ff106
004ff0f8  MOVSX ECX,word ptr [EBP + -0x38]
004ff0fc  MOV word ptr [ECX*0x2 + 0x7929c0],0x8
004ff106  JMP 0x004ff14a
004ff108  MOV EDX,dword ptr [0x007913b0]
004ff10e  PUSH EDX
004ff10f  LEA EAX,[EBP + 0xffffff05]
004ff115  PUSH EAX
004ff116  LEA ECX,[EBP + -0x5c]
004ff119  CALL 0x004a2160
004ff11e  MOV ECX,EAX
004ff120  CALL 0x004a1f00
004ff125  MOVZX ECX,AL
004ff128  TEST ECX,ECX
004ff12a  JZ 0x004ff13c
004ff12c  MOVSX EDX,word ptr [EBP + -0x38]
004ff130  MOV word ptr [EDX*0x2 + 0x7929c0],0x3
004ff13a  JMP 0x004ff14a
004ff13c  MOVSX EAX,word ptr [EBP + -0x38]
004ff140  MOV word ptr [EAX*0x2 + 0x7929c0],0x0
004ff14a  MOV byte ptr [EBP + -0x4],0x16
004ff14e  LEA ECX,[EBP + -0x5c]
004ff151  CALL 0x004a20f0
004ff156  JMP 0x004ff26f
004ff15b  CMP dword ptr [EBP + 0x8],0x6
004ff15f  JL 0x004ff26f
004ff165  LEA ECX,[EBP + 0xfffffefc]
004ff16b  PUSH ECX
004ff16c  MOV ECX,dword ptr [0x007926f8]
004ff172  CALL 0x004c84a0
004ff177  MOV dword ptr [EBP + 0xfffffdc8],EAX
004ff17d  MOV EDX,dword ptr [EBP + 0xfffffdc8]
004ff183  MOV dword ptr [EBP + 0xfffffdc4],EDX
004ff189  MOV byte ptr [EBP + -0x4],0x21
004ff18d  PUSH 0x0
004ff18f  PUSH 0x0
004ff191  PUSH 0x0
004ff193  PUSH 0x1
004ff195  PUSH 0x1
004ff197  PUSH 0x1
004ff199  PUSH 0x1
004ff19b  LEA EAX,[EBP + -0x60]
004ff19e  PUSH EAX
004ff19f  MOV ECX,dword ptr [EBP + 0xfffffdc4]
004ff1a5  CALL 0x00485940
004ff1aa  MOV byte ptr [EBP + -0x4],0x23
004ff1ae  LEA ECX,[EBP + 0xfffffefc]
004ff1b4  CALL 0x00484470
004ff1b9  MOV ECX,dword ptr [0x00791394]
004ff1bf  PUSH ECX
004ff1c0  LEA EDX,[EBP + 0xfffffefb]
004ff1c6  PUSH EDX
004ff1c7  LEA ECX,[EBP + -0x60]
004ff1ca  CALL 0x004a2160
004ff1cf  MOV ECX,EAX
004ff1d1  CALL 0x004a1f00
004ff1d6  MOVZX EAX,AL
004ff1d9  TEST EAX,EAX
004ff1db  JZ 0x004ff1ed
004ff1dd  MOVSX ECX,word ptr [EBP + -0x38]
004ff1e1  MOV word ptr [ECX*0x2 + 0x7929c0],0xa
004ff1eb  JMP 0x004ff263
004ff1ed  MOV EDX,dword ptr [0x00791418]
004ff1f3  PUSH EDX
004ff1f4  LEA EAX,[EBP + 0xfffffefa]
004ff1fa  PUSH EAX
004ff1fb  LEA ECX,[EBP + -0x60]
004ff1fe  CALL 0x004a2160
004ff203  MOV ECX,EAX
004ff205  CALL 0x004a1f00
004ff20a  MOVZX ECX,AL
004ff20d  TEST ECX,ECX
004ff20f  JZ 0x004ff255
004ff211  MOV EDX,dword ptr [0x007913c8]
004ff217  PUSH EDX
004ff218  LEA EAX,[EBP + 0xfffffef9]
004ff21e  PUSH EAX
004ff21f  LEA ECX,[EBP + -0x60]
004ff222  CALL 0x004a21b0
004ff227  MOV ECX,EAX
004ff229  CALL 0x004a1fb0
004ff22e  MOVZX ECX,AL
004ff231  TEST ECX,ECX
004ff233  JZ 0x004ff245
004ff235  MOVSX EDX,word ptr [EBP + -0x38]
004ff239  MOV word ptr [EDX*0x2 + 0x7929c0],0xa
004ff243  JMP 0x004ff253
004ff245  MOVSX EAX,word ptr [EBP + -0x38]
004ff249  MOV word ptr [EAX*0x2 + 0x7929c0],0x6
004ff253  JMP 0x004ff263
004ff255  MOVSX ECX,word ptr [EBP + -0x38]
004ff259  MOV word ptr [ECX*0x2 + 0x7929c0],0x0
004ff263  MOV byte ptr [EBP + -0x4],0x16
004ff267  LEA ECX,[EBP + -0x60]
004ff26a  CALL 0x004a20f0
004ff26f  JMP 0x004ff8db
004ff274  CMP dword ptr [EBP + 0x8],0x3
004ff278  JNZ 0x004ff358
004ff27e  LEA EDX,[EBP + 0xfffffef0]
004ff284  PUSH EDX
004ff285  MOV ECX,dword ptr [0x007926f8]
004ff28b  CALL 0x004c8300
004ff290  MOV dword ptr [EBP + 0xfffffdc0],EAX
004ff296  MOV EAX,dword ptr [EBP + 0xfffffdc0]
004ff29c  MOV dword ptr [EBP + 0xfffffdbc],EAX
004ff2a2  MOV byte ptr [EBP + -0x4],0x24
004ff2a6  PUSH 0x0
004ff2a8  PUSH 0x0
004ff2aa  PUSH 0x0
004ff2ac  PUSH 0x1
004ff2ae  PUSH 0x1
004ff2b0  PUSH 0x1
004ff2b2  PUSH 0x1
004ff2b4  LEA ECX,[EBP + -0x64]
004ff2b7  PUSH ECX
004ff2b8  MOV ECX,dword ptr [EBP + 0xfffffdbc]
004ff2be  CALL 0x00485940
004ff2c3  MOV byte ptr [EBP + -0x4],0x26
004ff2c7  LEA ECX,[EBP + 0xfffffef0]
004ff2cd  CALL 0x00484470
004ff2d2  MOV EDX,dword ptr [0x007913c8]
004ff2d8  PUSH EDX
004ff2d9  LEA EAX,[EBP + 0xfffffeef]
004ff2df  PUSH EAX
004ff2e0  LEA ECX,[EBP + -0x64]
004ff2e3  CALL 0x004a21b0
004ff2e8  MOV ECX,EAX
004ff2ea  CALL 0x004a1fb0
004ff2ef  MOVZX ECX,AL
004ff2f2  TEST ECX,ECX
004ff2f4  JZ 0x004ff306
004ff2f6  MOVSX EDX,word ptr [EBP + -0x38]
004ff2fa  MOV word ptr [EDX*0x2 + 0x7929c0],0x4
004ff304  JMP 0x004ff347
004ff306  MOV EAX,[0x007913e0]
004ff30b  PUSH EAX
004ff30c  LEA ECX,[EBP + 0xfffffeee]
004ff312  PUSH ECX
004ff313  LEA ECX,[EBP + -0x64]
004ff316  CALL 0x004a21b0
004ff31b  MOV ECX,EAX
004ff31d  CALL 0x004a1fb0
004ff322  MOVZX EDX,AL
004ff325  TEST EDX,EDX
004ff327  JZ 0x004ff339
004ff329  MOVSX EAX,word ptr [EBP + -0x38]
004ff32d  MOV word ptr [EAX*0x2 + 0x7929c0],0x1
004ff337  JMP 0x004ff347
004ff339  MOVSX ECX,word ptr [EBP + -0x38]
004ff33d  MOV word ptr [ECX*0x2 + 0x7929c0],0x0
004ff347  MOV byte ptr [EBP + -0x4],0x16
004ff34b  LEA ECX,[EBP + -0x64]
004ff34e  CALL 0x004a20f0
004ff353  JMP 0x004ff8db
004ff358  CMP dword ptr [EBP + 0x8],0x4
004ff35c  JNZ 0x004ff470
004ff362  LEA EDX,[EBP + 0xfffffee4]
004ff368  PUSH EDX
004ff369  MOV ECX,dword ptr [0x007926f8]
004ff36f  CALL 0x004c8300
004ff374  MOV dword ptr [EBP + 0xfffffdb8],EAX
004ff37a  MOV EAX,dword ptr [EBP + 0xfffffdb8]
004ff380  MOV dword ptr [EBP + 0xfffffdb4],EAX
004ff386  MOV byte ptr [EBP + -0x4],0x27
004ff38a  PUSH 0x0
004ff38c  PUSH 0x0
004ff38e  PUSH 0x0
004ff390  PUSH 0x1
004ff392  PUSH 0x1
004ff394  PUSH 0x1
004ff396  PUSH 0x1
004ff398  LEA ECX,[EBP + -0x68]
004ff39b  PUSH ECX
004ff39c  MOV ECX,dword ptr [EBP + 0xfffffdb4]
004ff3a2  CALL 0x00485940
004ff3a7  MOV byte ptr [EBP + -0x4],0x29
004ff3ab  LEA ECX,[EBP + 0xfffffee4]
004ff3b1  CALL 0x00484470
004ff3b6  MOV EDX,dword ptr [0x007913b0]
004ff3bc  PUSH EDX
004ff3bd  LEA EAX,[EBP + 0xfffffee3]
004ff3c3  PUSH EAX
004ff3c4  LEA ECX,[EBP + -0x68]
004ff3c7  CALL 0x004a2160
004ff3cc  MOV ECX,EAX
004ff3ce  CALL 0x004a1f00
004ff3d3  MOVZX ECX,AL
004ff3d6  TEST ECX,ECX
004ff3d8  JZ 0x004ff451
004ff3da  MOV EDX,dword ptr [0x00791400]
004ff3e0  PUSH EDX
004ff3e1  LEA EAX,[EBP + 0xfffffee2]
004ff3e7  PUSH EAX
004ff3e8  LEA ECX,[EBP + -0x68]
004ff3eb  CALL 0x004a21b0
004ff3f0  MOV ECX,EAX
004ff3f2  CALL 0x004a2040
004ff3f7  MOVZX ECX,AL
004ff3fa  TEST ECX,ECX
004ff3fc  JZ 0x004ff40e
004ff3fe  MOVSX EDX,word ptr [EBP + -0x38]
004ff402  MOV word ptr [EDX*0x2 + 0x7929c0],0xa
004ff40c  JMP 0x004ff44f
004ff40e  MOV EAX,[0x007913f8]
004ff413  PUSH EAX
004ff414  LEA ECX,[EBP + 0xfffffee1]
004ff41a  PUSH ECX
004ff41b  LEA ECX,[EBP + -0x68]
004ff41e  CALL 0x004a21b0
004ff423  MOV ECX,EAX
004ff425  CALL 0x004a2040
004ff42a  MOVZX EDX,AL
004ff42d  TEST EDX,EDX
004ff42f  JZ 0x004ff441
004ff431  MOVSX EAX,word ptr [EBP + -0x38]
004ff435  MOV word ptr [EAX*0x2 + 0x7929c0],0x7
004ff43f  JMP 0x004ff44f
004ff441  MOVSX ECX,word ptr [EBP + -0x38]
004ff445  MOV word ptr [ECX*0x2 + 0x7929c0],0x5
004ff44f  JMP 0x004ff45f
004ff451  MOVSX EDX,word ptr [EBP + -0x38]
004ff455  MOV word ptr [EDX*0x2 + 0x7929c0],0x0
004ff45f  MOV byte ptr [EBP + -0x4],0x16
004ff463  LEA ECX,[EBP + -0x68]
004ff466  CALL 0x004a20f0
004ff46b  JMP 0x004ff8db
004ff470  CMP dword ptr [EBP + 0x8],0x5
004ff474  JNZ 0x004ff701
004ff47a  LEA EAX,[EBP + 0xfffffed8]
004ff480  PUSH EAX
004ff481  MOV ECX,dword ptr [0x007926f8]
004ff487  CALL 0x004c8300
004ff48c  MOV dword ptr [EBP + 0xfffffdb0],EAX
004ff492  MOV ECX,dword ptr [EBP + 0xfffffdb0]
004ff498  MOV dword ptr [EBP + 0xfffffdac],ECX
004ff49e  MOV byte ptr [EBP + -0x4],0x2a
004ff4a2  PUSH 0x0
004ff4a4  PUSH 0x0
004ff4a6  PUSH 0x0
004ff4a8  PUSH 0x1
004ff4aa  PUSH 0x1
004ff4ac  PUSH 0x1
004ff4ae  PUSH 0x1
004ff4b0  LEA EDX,[EBP + -0x6c]
004ff4b3  PUSH EDX
004ff4b4  MOV ECX,dword ptr [EBP + 0xfffffdac]
004ff4ba  CALL 0x00485940
004ff4bf  MOV byte ptr [EBP + -0x4],0x2c
004ff4c3  LEA ECX,[EBP + 0xfffffed8]
004ff4c9  CALL 0x00484470
004ff4ce  MOV EAX,[0x00791418]
004ff4d3  PUSH EAX
004ff4d4  LEA ECX,[EBP + 0xfffffed7]
004ff4da  PUSH ECX
004ff4db  LEA ECX,[EBP + -0x6c]
004ff4de  CALL 0x004a2160
004ff4e3  MOV ECX,EAX
004ff4e5  CALL 0x004a1e10
004ff4ea  MOVZX EDX,AL
004ff4ed  TEST EDX,EDX
004ff4ef  JZ 0x004ff504
004ff4f1  MOVSX EAX,word ptr [EBP + -0x38]
004ff4f5  MOV word ptr [EAX*0x2 + 0x7929c0],0xa
004ff4ff  JMP 0x004ff6f0
004ff504  MOV ECX,dword ptr [0x007913b0]
004ff50a  PUSH ECX
004ff50b  LEA EDX,[EBP + 0xfffffed6]
004ff511  PUSH EDX
004ff512  LEA ECX,[EBP + -0x6c]
004ff515  CALL 0x004a2160
004ff51a  MOV ECX,EAX
004ff51c  CALL 0x004a1e10
004ff521  MOVZX EAX,AL
004ff524  TEST EAX,EAX
004ff526  JZ 0x004ff5a3
004ff528  MOV ECX,dword ptr [0x007913e0]
004ff52e  PUSH ECX
004ff52f  LEA EDX,[EBP + 0xfffffed5]
004ff535  PUSH EDX
004ff536  LEA ECX,[EBP + -0x6c]
004ff539  CALL 0x004a21b0
004ff53e  MOV ECX,EAX
004ff540  CALL 0x004a2040
004ff545  MOVZX EAX,AL
004ff548  TEST EAX,EAX
004ff54a  JZ 0x004ff55c
004ff54c  MOVSX ECX,word ptr [EBP + -0x38]
004ff550  MOV word ptr [ECX*0x2 + 0x7929c0],0xa
004ff55a  JMP 0x004ff59e
004ff55c  MOV EDX,dword ptr [0x0079138c]
004ff562  PUSH EDX
004ff563  LEA EAX,[EBP + 0xfffffed4]
004ff569  PUSH EAX
004ff56a  LEA ECX,[EBP + -0x6c]
004ff56d  CALL 0x004a21b0
004ff572  MOV ECX,EAX
004ff574  CALL 0x004a2040
004ff579  MOVZX ECX,AL
004ff57c  TEST ECX,ECX
004ff57e  JZ 0x004ff590
004ff580  MOVSX EDX,word ptr [EBP + -0x38]
004ff584  MOV word ptr [EDX*0x2 + 0x7929c0],0x7
004ff58e  JMP 0x004ff59e
004ff590  MOVSX EAX,word ptr [EBP + -0x38]
004ff594  MOV word ptr [EAX*0x2 + 0x7929c0],0x4
004ff59e  JMP 0x004ff6f0
004ff5a3  LEA ECX,[EBP + 0xfffffec8]
004ff5a9  PUSH ECX
004ff5aa  MOV ECX,dword ptr [0x007926f8]
004ff5b0  CALL 0x004c8300
004ff5b5  MOV dword ptr [EBP + 0xfffffda8],EAX
004ff5bb  MOV EDX,dword ptr [EBP + 0xfffffda8]
004ff5c1  MOV dword ptr [EBP + 0xfffffda4],EDX
004ff5c7  MOV byte ptr [EBP + -0x4],0x2d
004ff5cb  MOV ECX,dword ptr [EBP + 0xfffffda4]
004ff5d1  CALL 0x00484bf0
004ff5d6  MOVSX EAX,AX
004ff5d9  XOR ECX,ECX
004ff5db  CMP EAX,0x3
004ff5de  SETZ CL
004ff5e1  MOV byte ptr [EBP + 0xfffffed3],CL
004ff5e7  MOV byte ptr [EBP + -0x4],0x2c
004ff5eb  LEA ECX,[EBP + 0xfffffec8]
004ff5f1  CALL 0x00484470
004ff5f6  MOVZX EDX,byte ptr [EBP + 0xfffffed3]
004ff5fd  TEST EDX,EDX
004ff5ff  JZ 0x004ff614
004ff601  MOVSX EAX,word ptr [EBP + -0x38]
004ff605  MOV word ptr [EAX*0x2 + 0x7929c0],0x7
004ff60f  JMP 0x004ff6f0
004ff614  MOV ECX,dword ptr [0x00791390]
004ff61a  PUSH ECX
004ff61b  LEA EDX,[EBP + 0xfffffec6]
004ff621  PUSH EDX
004ff622  LEA ECX,[EBP + -0x6c]
004ff625  CALL 0x004a2160
004ff62a  MOV ECX,EAX
004ff62c  CALL 0x004a1e10
004ff631  MOVZX EAX,AL
004ff634  TEST EAX,EAX
004ff636  JZ 0x004ff68d
004ff638  LEA ECX,[EBP + 0xfffffebc]
004ff63e  PUSH ECX
004ff63f  MOV ECX,dword ptr [0x007926f8]
004ff645  CALL 0x004c8300
004ff64a  MOV dword ptr [EBP + 0xfffffda0],EAX
004ff650  MOV EDX,dword ptr [EBP + 0xfffffda0]
004ff656  MOV dword ptr [EBP + 0xfffffd9c],EDX
004ff65c  MOV byte ptr [EBP + -0x4],0x2e
004ff660  MOV EAX,dword ptr [EBP + 0xfffffea4]
004ff666  OR EAX,0x2
004ff669  MOV dword ptr [EBP + 0xfffffea4],EAX
004ff66f  MOV ECX,dword ptr [EBP + 0xfffffd9c]
004ff675  CALL 0x00484db0
004ff67a  MOVSX ECX,AX
004ff67d  TEST ECX,ECX
004ff67f  JNZ 0x004ff68d
004ff681  MOV dword ptr [EBP + 0xfffffd98],0x1
004ff68b  JMP 0x004ff697
004ff68d  MOV dword ptr [EBP + 0xfffffd98],0x0
004ff697  MOV DL,byte ptr [EBP + 0xfffffd98]
004ff69d  MOV byte ptr [EBP + 0xfffffec7],DL
004ff6a3  MOV dword ptr [EBP + -0x4],0x2c
004ff6aa  MOV EAX,dword ptr [EBP + 0xfffffea4]
004ff6b0  AND EAX,0x2
004ff6b3  JZ 0x004ff6c7
004ff6b5  AND dword ptr [EBP + 0xfffffea4],0xfffffffd
004ff6bc  LEA ECX,[EBP + 0xfffffebc]
004ff6c2  CALL 0x00484470
004ff6c7  MOVZX ECX,byte ptr [EBP + 0xfffffec7]
004ff6ce  TEST ECX,ECX
004ff6d0  JZ 0x004ff6e2
004ff6d2  MOVSX EDX,word ptr [EBP + -0x38]
004ff6d6  MOV word ptr [EDX*0x2 + 0x7929c0],0x5
004ff6e0  JMP 0x004ff6f0
004ff6e2  MOVSX EAX,word ptr [EBP + -0x38]
004ff6e6  MOV word ptr [EAX*0x2 + 0x7929c0],0x0
004ff6f0  MOV byte ptr [EBP + -0x4],0x16
004ff6f4  LEA ECX,[EBP + -0x6c]
004ff6f7  CALL 0x004a20f0
004ff6fc  JMP 0x004ff8db
004ff701  CMP dword ptr [EBP + 0x8],0x6
004ff705  JL 0x004ff8db
004ff70b  LEA ECX,[EBP + -0x78]
004ff70e  PUSH ECX
004ff70f  MOV ECX,dword ptr [0x007926f8]
004ff715  CALL 0x004c8300
004ff71a  MOV byte ptr [EBP + -0x4],0x2f
004ff71e  LEA EDX,[EBP + 0xfffffeb4]
004ff724  PUSH EDX
004ff725  MOV ECX,dword ptr [0x007926f8]
004ff72b  CALL 0x004c8300
004ff730  MOV dword ptr [EBP + 0xfffffd94],EAX
004ff736  MOV EAX,dword ptr [EBP + 0xfffffd94]
004ff73c  MOV dword ptr [EBP + 0xfffffd90],EAX
004ff742  MOV byte ptr [EBP + -0x4],0x30
004ff746  PUSH 0x0
004ff748  PUSH 0x0
004ff74a  PUSH 0x0
004ff74c  PUSH 0x1
004ff74e  PUSH 0x1
004ff750  PUSH 0x1
004ff752  PUSH 0x1
004ff754  LEA ECX,[EBP + -0x70]
004ff757  PUSH ECX
004ff758  MOV ECX,dword ptr [EBP + 0xfffffd90]
004ff75e  CALL 0x00485940
004ff763  MOV byte ptr [EBP + -0x4],0x32
004ff767  LEA ECX,[EBP + 0xfffffeb4]
004ff76d  CALL 0x00484470
004ff772  MOV EDX,dword ptr [0x00791380]
004ff778  PUSH EDX
004ff779  LEA EAX,[EBP + 0xfffffeb3]
004ff77f  PUSH EAX
004ff780  LEA ECX,[EBP + -0x70]
004ff783  CALL 0x004a2160
004ff788  MOV ECX,EAX
004ff78a  CALL 0x004a1f00
004ff78f  MOVZX ECX,AL
004ff792  TEST ECX,ECX
004ff794  JZ 0x004ff7a9
004ff796  MOVSX EDX,word ptr [EBP + -0x38]
004ff79a  MOV word ptr [EDX*0x2 + 0x7929c0],0xa
004ff7a4  JMP 0x004ff8c3
004ff7a9  MOV EAX,[0x007913b0]
004ff7ae  PUSH EAX
004ff7af  LEA ECX,[EBP + 0xfffffeb2]
004ff7b5  PUSH ECX
004ff7b6  LEA ECX,[EBP + -0x70]
004ff7b9  CALL 0x004a2160
004ff7be  MOV ECX,EAX
004ff7c0  CALL 0x004a1e10
004ff7c5  MOVZX EDX,AL
004ff7c8  TEST EDX,EDX
004ff7ca  JZ 0x004ff836
004ff7cc  MOV EAX,[0x007913e0]
004ff7d1  PUSH EAX
004ff7d2  LEA ECX,[EBP + 0xfffffeb1]
004ff7d8  PUSH ECX
004ff7d9  LEA ECX,[EBP + -0x70]
004ff7dc  CALL 0x004a21b0
004ff7e1  MOV ECX,EAX
004ff7e3  CALL 0x004a2040
004ff7e8  MOVZX EDX,AL
004ff7eb  TEST EDX,EDX
004ff7ed  JZ 0x004ff7ff
004ff7ef  MOVSX EAX,word ptr [EBP + -0x38]
004ff7f3  MOV word ptr [EAX*0x2 + 0x7929c0],0x5
004ff7fd  JMP 0x004ff831
004ff7ff  MOV ECX,dword ptr [0x0079138c]
004ff805  PUSH ECX
004ff806  LEA EDX,[EBP + 0xfffffeb0]
004ff80c  PUSH EDX
004ff80d  LEA ECX,[EBP + -0x70]
004ff810  CALL 0x004a21b0
004ff815  MOV ECX,EAX
004ff817  CALL 0x004a2040
004ff81c  MOVZX EAX,AL
004ff81f  TEST EAX,EAX
004ff821  JZ 0x004ff831
004ff823  MOVSX ECX,word ptr [EBP + -0x38]
004ff827  MOV word ptr [ECX*0x2 + 0x7929c0],0x2
004ff831  JMP 0x004ff8c3
004ff836  LEA ECX,[EBP + -0x78]
004ff839  CALL 0x00484db0
004ff83e  MOVSX EDX,AX
004ff841  TEST EDX,EDX
004ff843  JNZ 0x004ff855
004ff845  MOVSX EAX,word ptr [EBP + -0x38]
004ff849  MOV word ptr [EAX*0x2 + 0x7929c0],0xa
004ff853  JMP 0x004ff8c3
004ff855  LEA ECX,[EBP + -0x78]
004ff858  CALL 0x00484db0
004ff85d  MOVSX ECX,AX
004ff860  CMP ECX,0x1
004ff863  JNZ 0x004ff875
004ff865  MOVSX EDX,word ptr [EBP + -0x38]
004ff869  MOV word ptr [EDX*0x2 + 0x7929c0],0x5
004ff873  JMP 0x004ff8c3
004ff875  LEA ECX,[EBP + -0x78]
004ff878  CALL 0x00484bf0
004ff87d  MOVSX EAX,AX
004ff880  CMP EAX,0x4
004ff883  JNZ 0x004ff895
004ff885  MOVSX ECX,word ptr [EBP + -0x38]
004ff889  MOV word ptr [ECX*0x2 + 0x7929c0],0xa
004ff893  JMP 0x004ff8c3
004ff895  LEA ECX,[EBP + -0x78]
004ff898  CALL 0x00484bf0
004ff89d  MOVSX EDX,AX
004ff8a0  CMP EDX,0x3
004ff8a3  JNZ 0x004ff8b5
004ff8a5  MOVSX EAX,word ptr [EBP + -0x38]
004ff8a9  MOV word ptr [EAX*0x2 + 0x7929c0],0x4
004ff8b3  JMP 0x004ff8c3
004ff8b5  MOVSX ECX,word ptr [EBP + -0x38]
004ff8b9  MOV word ptr [ECX*0x2 + 0x7929c0],0x0
004ff8c3  MOV byte ptr [EBP + -0x4],0x2f
004ff8c7  LEA ECX,[EBP + -0x70]
004ff8ca  CALL 0x004a20f0
004ff8cf  MOV byte ptr [EBP + -0x4],0x16
004ff8d3  LEA ECX,[EBP + -0x78]
004ff8d6  CALL 0x00484470
004ff8db  MOV byte ptr [EBP + -0x4],0x3
004ff8df  LEA ECX,[EBP + -0x44]
004ff8e2  CALL 0x004646e0
004ff8e7  JMP 0x004ffa44
004ff8ec  MOVSX EDX,word ptr [EBP + -0x38]
004ff8f0  PUSH EDX
004ff8f1  MOV ECX,dword ptr [0x00791364]
004ff8f7  CALL 0x0047e390
004ff8fc  MOV ECX,EAX
004ff8fe  CALL 0x004c7010
004ff903  CMP EAX,0x1
004ff906  JNZ 0x004ffa3f
004ff90c  MOV ECX,dword ptr [0x00791364]
004ff912  CALL 0x0047d6f0
004ff917  CMP EAX,0x1
004ff91a  JNZ 0x004ff9b1
004ff920  MOV EAX,dword ptr [EBP + -0x18]
004ff923  SHL EAX,0x5
004ff926  MOVSX ECX,word ptr [EBP + -0x38]
004ff92a  LEA EDX,[EAX + ECX*0x4 + 0x791ed8]
004ff931  PUSH EDX
004ff932  MOV EAX,dword ptr [EBP + -0x18]
004ff935  SHL EAX,0x5
004ff938  MOVSX ECX,word ptr [EBP + -0x38]
004ff93c  LEA EDX,[EAX + ECX*0x4 + 0x792108]
004ff943  PUSH EDX
004ff944  MOVSX EAX,word ptr [EBP + -0x38]
004ff948  MOV ECX,dword ptr [EBP + -0x18]
004ff94b  SHL ECX,0x5
004ff94e  LEA EDX,[ECX + EAX*0x4 + 0x792be8]
004ff955  PUSH EDX
004ff956  XOR EAX,EAX
004ff958  CMP dword ptr [EBP + 0x8],0x7
004ff95c  SETZ AL
004ff95f  ADD EAX,0x2
004ff962  PUSH EAX
004ff963  SUB ESP,0x8
004ff966  MOV ECX,ESP
004ff968  MOV dword ptr [EBP + 0xfffffeac],ESP
004ff96e  PUSH ECX
004ff96f  MOVSX EDX,word ptr [EBP + -0x38]
004ff973  PUSH EDX
004ff974  MOV ECX,dword ptr [0x00791364]
004ff97a  CALL 0x0047e390
004ff97f  MOV ECX,EAX
004ff981  CALL 0x004c84a0
004ff986  MOV dword ptr [EBP + 0xfffffd8c],EAX
004ff98c  SUB ESP,0xc
004ff98f  MOV EAX,ESP
004ff991  MOV ECX,dword ptr [EBP + -0x24]
004ff994  MOV dword ptr [EAX],ECX
004ff996  MOV EDX,dword ptr [EBP + -0x20]
004ff999  MOV dword ptr [EAX + 0x4],EDX
004ff99c  MOV CX,word ptr [EBP + -0x1c]
004ff9a0  MOV word ptr [EAX + 0x8],CX
004ff9a4  LEA ECX,[EBP + -0x30]
004ff9a7  CALL 0x00496370
004ff9ac  JMP 0x004ffa3d
004ff9b1  MOV EDX,dword ptr [EBP + -0x18]
004ff9b4  SHL EDX,0x5
004ff9b7  MOVSX EAX,word ptr [EBP + -0x38]
004ff9bb  LEA ECX,[EDX + EAX*0x4 + 0x791ed8]
004ff9c2  PUSH ECX
004ff9c3  MOV EDX,dword ptr [EBP + -0x18]
004ff9c6  SHL EDX,0x5
004ff9c9  MOVSX EAX,word ptr [EBP + -0x38]
004ff9cd  LEA ECX,[EDX + EAX*0x4 + 0x792108]
004ff9d4  PUSH ECX
004ff9d5  MOVSX EDX,word ptr [EBP + -0x38]
004ff9d9  MOV EAX,dword ptr [EBP + -0x18]
004ff9dc  SHL EAX,0x5
004ff9df  LEA ECX,[EAX + EDX*0x4 + 0x792be8]
004ff9e6  PUSH ECX
004ff9e7  XOR EDX,EDX
004ff9e9  CMP dword ptr [EBP + 0x8],0x7
004ff9ed  SETZ DL
004ff9f0  ADD EDX,0x2
004ff9f3  PUSH EDX
004ff9f4  SUB ESP,0x8
004ff9f7  MOV EAX,ESP
004ff9f9  MOV dword ptr [EBP + 0xfffffea8],ESP
004ff9ff  PUSH EAX
004ffa00  MOVSX ECX,word ptr [EBP + -0x38]
004ffa04  PUSH ECX
004ffa05  MOV ECX,dword ptr [0x00791364]
004ffa0b  CALL 0x0047e390
004ffa10  MOV ECX,EAX
004ffa12  CALL 0x004c8300
004ffa17  MOV dword ptr [EBP + 0xfffffd88],EAX
004ffa1d  SUB ESP,0xc
004ffa20  MOV EDX,ESP
004ffa22  MOV EAX,dword ptr [EBP + -0x24]
004ffa25  MOV dword ptr [EDX],EAX
004ffa27  MOV ECX,dword ptr [EBP + -0x20]
004ffa2a  MOV dword ptr [EDX + 0x4],ECX
004ffa2d  MOV AX,word ptr [EBP + -0x1c]
004ffa31  MOV word ptr [EDX + 0x8],AX
004ffa35  LEA ECX,[EBP + -0x30]
004ffa38  CALL 0x00496370
004ffa3d  JMP 0x004ffa44
004ffa3f  JMP 0x004feb4d
004ffa44  JMP 0x004feb4d
004ffa49  MOV ECX,dword ptr [EBP + -0x18]
004ffa4c  MOV DX,word ptr [EBP + 0x8]
004ffa50  MOV word ptr [ECX*0x2 + 0x792de8],DX
004ffa58  MOV EAX,dword ptr [EBP + -0x18]
004ffa5b  MOV CX,word ptr [EBP + 0x10]
004ffa5f  MOV word ptr [EAX*0x2 + 0x792980],CX
004ffa67  CMP dword ptr [EBP + 0x8],0x3
004ffa6b  JNZ 0x004ffb31
004ffa71  PUSH 0x15
004ffa73  CALL 0x0062fbf0
004ffa78  ADD ESP,0x4
004ffa7b  MOV ESI,EAX
004ffa7d  PUSH 0x15
004ffa7f  CALL 0x0062fbf0
004ffa84  ADD ESP,0x4
004ffa87  LEA ESI,[ESI + EAX*0x1 + 0x3c]
004ffa8b  PUSH 0x15
004ffa8d  CALL 0x0062fbf0
004ffa92  ADD ESP,0x4
004ffa95  ADD ESI,EAX
004ffa97  PUSH 0x15
004ffa99  CALL 0x0062fbf0
004ffa9e  ADD ESP,0x4
004ffaa1  ADD ESI,EAX
004ffaa3  MOV dword ptr [EBP + 0xfffffd84],ESI
004ffaa9  FILD dword ptr [EBP + 0xfffffd84]
004ffaaf  FMUL double ptr [0x006bc270]
004ffab5  MOV EDX,dword ptr [EBP + -0x18]
004ffab8  FSTP double ptr [EDX*0x8 + 0x792e38]
004ffabf  MOV word ptr [EBP + -0x7c],0x0
004ffac5  JMP 0x004ffad3
004ffac7  MOV AX,word ptr [EBP + -0x7c]
004ffacb  ADD AX,0x1
004ffacf  MOV word ptr [EBP + -0x7c],AX
004ffad3  MOVSX ESI,word ptr [EBP + -0x7c]
004ffad7  MOV ECX,dword ptr [0x00791364]
004ffadd  CALL 0x0047f950
004ffae2  CMP ESI,EAX
004ffae4  JGE 0x004ffb31
004ffae6  PUSH 0x33
004ffae8  CALL 0x0062fbf0
004ffaed  ADD ESP,0x4
004ffaf0  MOV ESI,EAX
004ffaf2  PUSH 0x33
004ffaf4  CALL 0x0062fbf0
004ffaf9  ADD ESP,0x4
004ffafc  LEA ESI,[ESI + EAX*0x1 + 0x19]
004ffb00  PUSH 0x33
004ffb02  CALL 0x0062fbf0
004ffb07  ADD ESP,0x4
004ffb0a  ADD ESI,EAX
004ffb0c  MOV dword ptr [EBP + 0xfffffd80],ESI
004ffb12  FILD dword ptr [EBP + 0xfffffd80]
004ffb18  FMUL double ptr [0x006bc270]
004ffb1e  MOV ECX,dword ptr [EBP + -0x18]
004ffb21  SHL ECX,0x6
004ffb24  MOVSX EDX,word ptr [EBP + -0x7c]
004ffb28  FSTP double ptr [ECX + EDX*0x8 + 0x7929e8]
004ffb2f  JMP 0x004ffac7
004ffb31  MOV EAX,dword ptr [EBP + 0x10]
004ffb34  PUSH EAX
004ffb35  MOV ECX,dword ptr [EBP + 0xc]
004ffb38  PUSH ECX
004ffb39  MOV EDX,dword ptr [EBP + 0x8]
004ffb3c  PUSH EDX
004ffb3d  CALL 0x005010f0
004ffb42  ADD ESP,0xc
004ffb45  MOV EAX,dword ptr [EBP + -0x18]
004ffb48  FSTP double ptr [EAX*0x8 + 0x792df8]
004ffb4f  MOV ECX,dword ptr [EBP + -0x18]
004ffb52  MOV word ptr [ECX*0x2 + 0x792498],0x1
004ffb5c  CMP dword ptr [EBP + 0x8],0x5
004ffb60  JL 0x004ffc75
004ffb66  MOV word ptr [EBP + -0x38],0x0
004ffb6c  JMP 0x004ffb7a
004ffb6e  MOV DX,word ptr [EBP + -0x38]
004ffb72  ADD DX,0x1
004ffb76  MOV word ptr [EBP + -0x38],DX
004ffb7a  MOVSX ESI,word ptr [EBP + -0x38]
004ffb7e  MOV ECX,dword ptr [0x00791364]
004ffb84  CALL 0x0047f950
004ffb89  CMP ESI,EAX
004ffb8b  JGE 0x004ffc55
004ffb91  MOVSX EAX,word ptr [EBP + -0x38]
004ffb95  CMP EAX,dword ptr [EBP + -0x18]
004ffb98  JNZ 0x004ffb9c
004ffb9a  JMP 0x004ffb6e
004ffb9c  MOVSX ECX,word ptr [EBP + -0x38]
004ffba0  PUSH ECX
004ffba1  MOV ECX,dword ptr [0x00791364]
004ffba7  CALL 0x0047e390
004ffbac  MOV ECX,EAX
004ffbae  CALL 0x004c7010
004ffbb3  CMP EAX,0x1
004ffbb6  JNZ 0x004ffc50
004ffbbc  MOV EDX,dword ptr [EBP + -0x18]
004ffbbf  SHL EDX,0x5
004ffbc2  MOVSX EAX,word ptr [EBP + -0x38]
004ffbc6  FILD dword ptr [EDX + EAX*0x4 + 0x791ed8]
004ffbcd  MOV ECX,dword ptr [EBP + -0x18]
004ffbd0  SHL ECX,0x5
004ffbd3  MOVSX EDX,word ptr [EBP + -0x38]
004ffbd7  MOV EAX,dword ptr [EBP + -0x18]
004ffbda  SHL EAX,0x5
004ffbdd  MOVSX ESI,word ptr [EBP + -0x38]
004ffbe1  MOV ECX,dword ptr [ECX + EDX*0x4 + 0x791ed8]
004ffbe8  ADD ECX,dword ptr [EAX + ESI*0x4 + 0x792108]
004ffbef  MOV EDX,dword ptr [EBP + -0x18]
004ffbf2  SHL EDX,0x5
004ffbf5  MOVSX EAX,word ptr [EBP + -0x38]
004ffbf9  ADD ECX,dword ptr [EDX + EAX*0x4 + 0x792be8]
004ffc00  MOV dword ptr [EBP + 0xfffffd7c],ECX
004ffc06  FILD dword ptr [EBP + 0xfffffd7c]
004ffc0c  FDIVP
004ffc0e  FSTP double ptr [EBP + 0xffffff7c]
004ffc14  MOV ECX,dword ptr [0x00791364]
004ffc1a  CALL 0x0047d6f0
004ffc1f  CMP EAX,0x1
004ffc22  JNZ 0x004ffc3b
004ffc24  FLD double ptr [0x006c0c38]
004ffc2a  FCOMP double ptr [EBP + 0xffffff7c]
004ffc30  FNSTSW AX
004ffc32  TEST AH,0x41
004ffc35  JNZ 0x004ffc39
004ffc37  JMP 0x004ffc55
004ffc39  JMP 0x004ffc50
004ffc3b  FLD double ptr [0x006be530]
004ffc41  FCOMP double ptr [EBP + 0xffffff7c]
004ffc47  FNSTSW AX
004ffc49  TEST AH,0x41
004ffc4c  JNZ 0x004ffc50
004ffc4e  JMP 0x004ffc55
004ffc50  JMP 0x004ffb6e
004ffc55  MOVSX ESI,word ptr [EBP + -0x38]
004ffc59  MOV ECX,dword ptr [0x00791364]
004ffc5f  CALL 0x0047f950
004ffc64  CMP ESI,EAX
004ffc66  JNZ 0x004ffc75
004ffc68  MOV ECX,dword ptr [EBP + -0x18]
004ffc6b  MOV word ptr [ECX*0x2 + 0x792498],0xa
004ffc75  CMP dword ptr [EBP + 0x8],0x7
004ffc79  JNZ 0x004ffd05
004ffc7f  MOV word ptr [EBP + -0x38],0x0
004ffc85  JMP 0x004ffc93
004ffc87  MOV DX,word ptr [EBP + -0x38]
004ffc8b  ADD DX,0x1
004ffc8f  MOV word ptr [EBP + -0x38],DX
004ffc93  MOVSX ESI,word ptr [EBP + -0x38]
004ffc97  MOV ECX,dword ptr [0x00791364]
004ffc9d  CALL 0x0047f950
004ffca2  CMP ESI,EAX
004ffca4  JGE 0x004ffce5
004ffca6  MOVSX EAX,word ptr [EBP + -0x38]
004ffcaa  CMP EAX,dword ptr [EBP + -0x18]
004ffcad  JNZ 0x004ffcb1
004ffcaf  JMP 0x004ffc87
004ffcb1  MOVSX ECX,word ptr [EBP + -0x38]
004ffcb5  PUSH ECX
004ffcb6  MOV ECX,dword ptr [0x00791364]
004ffcbc  CALL 0x0047e390
004ffcc1  MOV ECX,EAX
004ffcc3  CALL 0x004c7010
004ffcc8  CMP EAX,0x1
004ffccb  JNZ 0x004ffce3
004ffccd  MOV EDX,dword ptr [EBP + -0x18]
004ffcd0  SHL EDX,0x5
004ffcd3  MOVSX EAX,word ptr [EBP + -0x38]
004ffcd7  CMP dword ptr [EDX + EAX*0x4 + 0x792be8],0x0
004ffcdf  JLE 0x004ffce3
004ffce1  JMP 0x004ffce5
004ffce3  JMP 0x004ffc87
004ffce5  MOVSX ESI,word ptr [EBP + -0x38]
004ffce9  MOV ECX,dword ptr [0x00791364]
004ffcef  CALL 0x0047f950
004ffcf4  CMP ESI,EAX
004ffcf6  JNZ 0x004ffd05
004ffcf8  MOV ECX,dword ptr [EBP + -0x18]
004ffcfb  MOV word ptr [ECX*0x2 + 0x792498],0x6
004ffd05  MOV byte ptr [EBP + -0x4],0x0
004ffd09  LEA ECX,[EBP + -0x24]
004ffd0c  CALL 0x004646e0
004ffd11  MOV dword ptr [EBP + -0x4],0xffffffff
004ffd18  LEA ECX,[EBP + -0x30]
004ffd1b  CALL 0x00484470
004ffd20  JMP 0x004ffdbf
004ffd25  MOV EDX,dword ptr [EBP + -0x18]
004ffd28  MOVSX EAX,word ptr [EDX*0x2 + 0x792980]
004ffd30  CMP EAX,dword ptr [EBP + 0x10]
004ffd33  JZ 0x004ffda1
004ffd35  MOV ECX,dword ptr [EBP + -0x18]
004ffd38  MOVSX EDX,word ptr [ECX*0x2 + 0x792498]
004ffd40  CMP EDX,0x6
004ffd43  JZ 0x004ffda1
004ffd45  MOV EAX,dword ptr [EBP + -0x18]
004ffd48  MOVSX ECX,word ptr [EAX*0x2 + 0x792498]
004ffd50  CMP ECX,0xa
004ffd53  JZ 0x004ffda1
004ffd55  MOV EDX,dword ptr [EBP + -0x18]
004ffd58  MOVSX EAX,word ptr [EDX*0x2 + 0x792498]
004ffd60  CMP EAX,0x2
004ffd63  JZ 0x004ffda1
004ffd65  MOV ECX,dword ptr [EBP + -0x18]
004ffd68  MOV DX,word ptr [EBP + 0x10]
004ffd6c  MOV word ptr [ECX*0x2 + 0x792980],DX
004ffd74  MOV EAX,dword ptr [EBP + 0x10]
004ffd77  PUSH EAX
004ffd78  MOV ECX,dword ptr [EBP + 0xc]
004ffd7b  PUSH ECX
004ffd7c  MOV EDX,dword ptr [EBP + 0x8]
004ffd7f  PUSH EDX
004ffd80  CALL 0x005010f0
004ffd85  ADD ESP,0xc
004ffd88  MOV EAX,dword ptr [EBP + -0x18]
004ffd8b  FSTP double ptr [EAX*0x8 + 0x792df8]
004ffd92  MOV ECX,dword ptr [EBP + -0x18]
004ffd95  MOV word ptr [ECX*0x2 + 0x792498],0x1
004ffd9f  JMP 0x004ffdbf
004ffda1  MOV EDX,dword ptr [EBP + 0x10]
004ffda4  PUSH EDX
004ffda5  MOV EAX,dword ptr [EBP + 0xc]
004ffda8  PUSH EAX
004ffda9  MOV ECX,dword ptr [EBP + 0x8]
004ffdac  PUSH ECX
004ffdad  CALL 0x005010f0
004ffdb2  ADD ESP,0xc
004ffdb5  MOV EDX,dword ptr [EBP + -0x18]
004ffdb8  FSTP double ptr [EDX*0x8 + 0x792df8]
004ffdbf  MOV EAX,dword ptr [EBP + -0x18]
004ffdc2  MOVSX ECX,word ptr [EAX*0x2 + 0x792498]
004ffdca  CMP ECX,0x6
004ffdcd  JNZ 0x004ffe4e
004ffdcf  PUSH 0x3
004ffdd1  MOV ECX,dword ptr [0x007926f8]
004ffdd7  CALL 0x004c79d0
004ffddc  MOV ECX,dword ptr [0x00791364]
004ffde2  ADD ECX,0x38
004ffde5  CALL 0x004f6640
004ffdea  MOVZX EDX,AL
004ffded  TEST EDX,EDX
004ffdef  JZ 0x004ffe23
004ffdf1  CALL 0x00501040
004ffdf6  MOVZX EAX,AL
004ffdf9  TEST EAX,EAX
004ffdfb  JNZ 0x004ffe17
004ffdfd  PUSH 0x14
004ffdff  CALL 0x0062fbf0
004ffe04  ADD ESP,0x4
004ffe07  TEST EAX,EAX
004ffe09  JNZ 0x004ffe17
004ffe0b  MOV EAX,0x1
004ffe10  JMP 0x0050102b
004ffe17  MOV EAX,0x2
004ffe1c  JMP 0x0050102b
004ffe23  MOV ECX,dword ptr [0x00791364]
004ffe29  ADD ECX,0x38
004ffe2c  CALL 0x004f66e0
004ffe31  MOVZX ECX,AL
004ffe34  TEST ECX,ECX
004ffe36  JZ 0x004ffe44
004ffe38  MOV EAX,0x4
004ffe3d  JMP 0x0050102b
004ffe44  MOV EAX,0x3
004ffe49  JMP 0x0050102b
004ffe4e  MOV EDX,dword ptr [EBP + -0x18]
004ffe51  MOVSX EAX,word ptr [EDX*0x2 + 0x792498]
004ffe59  CMP EAX,0xa
004ffe5c  JNZ 0x004fff2a
004ffe62  PUSH 0x3
004ffe64  MOV ECX,dword ptr [0x007926f8]
004ffe6a  CALL 0x004c79d0
004ffe6f  MOV ECX,dword ptr [0x00791364]
004ffe75  ADD ECX,0x38
004ffe78  CALL 0x004f6640
004ffe7d  MOVZX ECX,AL
004ffe80  TEST ECX,ECX
004ffe82  JZ 0x004ffeb6
004ffe84  CALL 0x00501040
004ffe89  MOVZX EDX,AL
004ffe8c  TEST EDX,EDX
004ffe8e  JNZ 0x004ffeaa
004ffe90  PUSH 0xa
004ffe92  CALL 0x0062fbf0
004ffe97  ADD ESP,0x4
004ffe9a  TEST EAX,EAX
004ffe9c  JNZ 0x004ffeaa
004ffe9e  MOV EAX,0x1
004ffea3  JMP 0x0050102b
004ffeaa  MOV EAX,0x2
004ffeaf  JMP 0x0050102b
004ffeb6  MOV ECX,dword ptr [0x00791364]
004ffebc  ADD ECX,0x38
004ffebf  CALL 0x004f66e0
004ffec4  MOVZX EAX,AL
004ffec7  TEST EAX,EAX
004ffec9  JZ 0x004fff20
004ffecb  PUSH 0x64
004ffecd  CALL 0x0062fbf0
004ffed2  ADD ESP,0x4
004ffed5  MOV ESI,EAX
004ffed7  MOV ECX,dword ptr [0x007926f8]
004ffedd  CALL 0x004d6c70
004ffee2  MOVSX ECX,AX
004ffee5  CMP ESI,ECX
004ffee7  JGE 0x004fff14
004ffee9  PUSH 0x64
004ffeeb  CALL 0x0062fbf0
004ffef0  ADD ESP,0x4
004ffef3  MOV ESI,EAX
004ffef5  MOV ECX,dword ptr [0x007926f8]
004ffefb  CALL 0x004d6c70
004fff00  MOVSX EDX,AX
004fff03  CMP ESI,EDX
004fff05  JGE 0x004fff14
004fff07  MOV EAX,dword ptr [EBP + -0x18]
004fff0a  MOV word ptr [EAX*0x2 + 0x792498],0x5
004fff14  MOV EAX,0x4
004fff19  JMP 0x0050102b
004fff20  MOV EAX,0x3
004fff25  JMP 0x0050102b
004fff2a  MOV ECX,dword ptr [EBP + -0x18]
004fff2d  MOVSX EDX,word ptr [ECX*0x2 + 0x792498]
004fff35  CMP EDX,0x1
004fff38  JNZ 0x005004da
004fff3e  MOV ECX,dword ptr [0x00791364]
004fff44  ADD ECX,0x38
004fff47  CALL 0x004f6690
004fff4c  MOVZX EAX,AL
004fff4f  TEST EAX,EAX
004fff51  JZ 0x005004b7
004fff57  FLD double ptr [0x006c0c30]
004fff5d  FSTP double ptr [EBP + 0xffffff64]
004fff63  CMP dword ptr [EBP + 0x8],0x3
004fff67  JNZ 0x004fff92
004fff69  MOV ECX,dword ptr [0x007926f8]
004fff6f  CALL 0x004c6db0
004fff74  MOV dword ptr [EBP + 0xfffffd78],EAX
004fff7a  FILD dword ptr [EBP + 0xfffffd78]
004fff80  FDIV double ptr [0x006b4b00]
004fff86  FADD double ptr [EBP + 0xffffff64]
004fff8c  FSTP double ptr [EBP + 0xffffff64]
004fff92  MOV ECX,dword ptr [0x007926f8]
004fff98  CALL 0x004c6df0
004fff9d  MOV dword ptr [EBP + 0xfffffd74],EAX
004fffa3  FILD dword ptr [EBP + 0xfffffd74]
004fffa9  FDIV double ptr [0x006b4b00]
004fffaf  FADD double ptr [0x006b2c48]
004fffb5  FMUL double ptr [EBP + 0xffffff64]
004fffbb  MOV ECX,dword ptr [EBP + -0x18]
004fffbe  FMUL double ptr [ECX*0x8 + 0x792df8]
004fffc5  MOV ECX,dword ptr [0x00791364]
004fffcb  ADD ECX,0x38
004fffce  FSTP double ptr [EBP + 0xfffffd6c]
004fffd4  CALL 0x004f67d0
004fffd9  MOV dword ptr [EBP + 0xfffffd68],EAX
004fffdf  FILD dword ptr [EBP + 0xfffffd68]
004fffe5  MOV ECX,dword ptr [0x00791364]
004fffeb  ADD ECX,0x38
004fffee  FSTP double ptr [EBP + 0xfffffd60]
004ffff4  CALL 0x004f6840
004ffff9  MOV dword ptr [EBP + 0xfffffd5c],EAX
004fffff  FILD dword ptr [EBP + 0xfffffd5c]
00500005  FDIVR double ptr [EBP + 0xfffffd60]
0050000b  FDIVR double ptr [EBP + 0xfffffd6c]
00500011  FSTP double ptr [EBP + 0xffffff6c]
00500017  CMP dword ptr [EBP + 0x8],0x3
0050001b  JNZ 0x0050004d
0050001d  MOV ECX,dword ptr [0x00791364]
00500023  CALL 0x0047d6b0
00500028  TEST EAX,EAX
0050002a  JNZ 0x0050004d
0050002c  MOV ECX,dword ptr [0x00791364]
00500032  ADD ECX,0x38
00500035  CALL 0x004f67d0
0050003a  CMP EAX,dword ptr [EBP + 0x14]
0050003d  JNZ 0x0050004d
0050003f  MOV word ptr [EBP + 0xffffff78],0x0
00500048  JMP 0x005000cd
0050004d  CMP dword ptr [EBP + 0x8],0x3
00500051  JNZ 0x0050007e
00500053  MOV ECX,dword ptr [0x007926f8]
00500059  CALL 0x004d7e00
0050005e  MOVSX ESI,AX
00500061  PUSH 0x5
00500063  CALL 0x0062fbf0
00500068  ADD ESP,0x4
0050006b  MOV ECX,EAX
0050006d  ADD ECX,0x1
00500070  MOV EAX,ESI
00500072  CDQ
00500073  IDIV ECX
00500075  MOV word ptr [EBP + 0xffffff78],AX
0050007c  JMP 0x005000cd
0050007e  CMP dword ptr [EBP + 0x8],0x4
00500082  JNZ 0x005000af
00500084  MOV ECX,dword ptr [0x007926f8]
0050008a  CALL 0x004d7e00
0050008f  MOVSX ESI,AX
00500092  PUSH 0x2
00500094  CALL 0x0062fbf0
00500099  ADD ESP,0x4
0050009c  MOV ECX,EAX
0050009e  ADD ECX,0x1
005000a1  MOV EAX,ESI
005000a3  CDQ
005000a4  IDIV ECX
005000a6  MOV word ptr [EBP + 0xffffff78],AX
005000ad  JMP 0x005000cd
005000af  MOV ECX,dword ptr [0x007926f8]
005000b5  CALL 0x004d7e00
005000ba  MOVSX EDX,AX
005000bd  MOV EAX,dword ptr [EBP + 0x10]
005000c0  SUB EAX,0x1
005000c3  IMUL EDX,EAX
005000c6  MOV word ptr [EBP + 0xffffff78],DX
005000cd  MOVSX ECX,word ptr [EBP + 0xffffff78]
005000d4  PUSH ECX
005000d5  CALL 0x0062fbf0
005000da  ADD ESP,0x4
005000dd  MOV ESI,EAX
005000df  MOVSX EDX,word ptr [EBP + 0xffffff78]
005000e6  PUSH EDX
005000e7  CALL 0x0062fbf0
005000ec  ADD ESP,0x4
005000ef  ADD ESI,EAX
005000f1  MOVSX EAX,word ptr [EBP + 0xffffff78]
005000f8  PUSH EAX
005000f9  CALL 0x0062fbf0
005000fe  ADD ESP,0x4
00500101  SUB ESI,EAX
00500103  MOV dword ptr [EBP + 0xffffff60],ESI
00500109  MOV ECX,dword ptr [0x007926f8]
0050010f  CALL 0x004d7e00
00500114  MOVSX ECX,AX
00500117  MOV dword ptr [EBP + 0xffffff74],ECX
0050011d  CMP dword ptr [EBP + 0xffffff74],0xa
00500124  JLE 0x00500130
00500126  MOV dword ptr [EBP + 0xffffff74],0xa
00500130  CMP dword ptr [EBP + 0x8],0x3
00500134  JNZ 0x0050016d
00500136  MOV ECX,dword ptr [0x00791364]
0050013c  CALL 0x0047d6f0
00500141  CMP EAX,0x1
00500144  JNZ 0x0050016d
00500146  MOV EDX,0x16
0050014b  SUB EDX,dword ptr [EBP + 0xffffff74]
00500151  PUSH EDX
00500152  CALL 0x0062fbf0
00500157  ADD ESP,0x4
0050015a  MOV ECX,dword ptr [EBP + 0xffffff60]
00500160  SUB ECX,EAX
00500162  MOV dword ptr [EBP + 0xffffff60],ECX
00500168  JMP 0x00500371
0050016d  CMP dword ptr [EBP + 0x8],0x4
00500171  JNZ 0x005001aa
00500173  MOV ECX,dword ptr [0x00791364]
00500179  CALL 0x0047d6f0
0050017e  CMP EAX,0x1
00500181  JNZ 0x005001aa
00500183  MOV EDX,0xf
00500188  SUB EDX,dword ptr [EBP + 0xffffff74]
0050018e  PUSH EDX
0050018f  CALL 0x0062fbf0
00500194  ADD ESP,0x4
00500197  MOV ECX,dword ptr [EBP + 0xffffff60]
0050019d  SUB ECX,EAX
0050019f  MOV dword ptr [EBP + 0xffffff60],ECX
005001a5  JMP 0x00500371
005001aa  MOV ECX,dword ptr [0x00791364]
005001b0  CALL 0x0047d6f0
005001b5  CMP EAX,0x1
005001b8  JNZ 0x005001e1
005001ba  MOV EDX,0xa
005001bf  SUB EDX,dword ptr [EBP + 0xffffff74]
005001c5  PUSH EDX
005001c6  CALL 0x0062fbf0
005001cb  ADD ESP,0x4
005001ce  MOV ECX,dword ptr [EBP + 0xffffff60]
005001d4  SUB ECX,EAX
005001d6  MOV dword ptr [EBP + 0xffffff60],ECX
005001dc  JMP 0x00500371
005001e1  CMP dword ptr [EBP + 0x8],0x3
005001e5  JNZ 0x00500252
005001e7  MOV EDX,0x14
005001ec  SUB EDX,dword ptr [EBP + 0xffffff74]
005001f2  PUSH EDX
005001f3  CALL 0x0062fbf0
005001f8  ADD ESP,0x4
005001fb  MOV ECX,dword ptr [EBP + 0xffffff60]
00500201  SUB ECX,EAX
00500203  MOV dword ptr [EBP + 0xffffff60],ECX
00500209  MOV EDX,0x11
0050020e  SUB EDX,dword ptr [EBP + 0xffffff74]
00500214  PUSH EDX
00500215  CALL 0x0062fbf0
0050021a  ADD ESP,0x4
0050021d  MOV ECX,dword ptr [EBP + 0xffffff60]
00500223  SUB ECX,EAX
00500225  MOV dword ptr [EBP + 0xffffff60],ECX
0050022b  MOV EDX,0xa
00500230  SUB EDX,dword ptr [EBP + 0xffffff74]
00500236  PUSH EDX
00500237  CALL 0x0062fbf0
0050023c  ADD ESP,0x4
0050023f  MOV ECX,dword ptr [EBP + 0xffffff60]
00500245  SUB ECX,EAX
00500247  MOV dword ptr [EBP + 0xffffff60],ECX
0050024d  JMP 0x00500371
00500252  CMP dword ptr [EBP + 0x8],0x4
00500256  JNZ 0x005002c3
00500258  MOV EDX,0x12
0050025d  SUB EDX,dword ptr [EBP + 0xffffff74]
00500263  PUSH EDX
00500264  CALL 0x0062fbf0
00500269  ADD ESP,0x4
0050026c  MOV ECX,dword ptr [EBP + 0xffffff60]
00500272  SUB ECX,EAX
00500274  MOV dword ptr [EBP + 0xffffff60],ECX
0050027a  MOV EDX,0x10
0050027f  SUB EDX,dword ptr [EBP + 0xffffff74]
00500285  PUSH EDX
00500286  CALL 0x0062fbf0
0050028b  ADD ESP,0x4
0050028e  MOV ECX,dword ptr [EBP + 0xffffff60]
00500294  SUB ECX,EAX
00500296  MOV dword ptr [EBP + 0xffffff60],ECX
0050029c  MOV EDX,0xa
005002a1  SUB EDX,dword ptr [EBP + 0xffffff74]
005002a7  PUSH EDX
005002a8  CALL 0x0062fbf0
005002ad  ADD ESP,0x4
005002b0  MOV ECX,dword ptr [EBP + 0xffffff60]
005002b6  SUB ECX,EAX
005002b8  MOV dword ptr [EBP + 0xffffff60],ECX
005002be  JMP 0x00500371
005002c3  CMP dword ptr [EBP + 0x8],0x5
005002c7  JNZ 0x00500341
005002c9  MOV EDX,0xa
005002ce  SUB EDX,dword ptr [EBP + 0xffffff74]
005002d4  PUSH EDX
005002d5  CALL 0x0062fbf0
005002da  ADD ESP,0x4
005002dd  MOV ECX,dword ptr [EBP + 0xffffff60]
005002e3  SUB ECX,EAX
005002e5  MOV dword ptr [EBP + 0xffffff60],ECX
005002eb  MOV EDX,0xa
005002f0  SUB EDX,dword ptr [EBP + 0xffffff74]
005002f6  PUSH EDX
005002f7  CALL 0x0062fbf0
005002fc  ADD ESP,0x4
005002ff  CDQ
00500300  MOV ECX,0x3
00500305  IDIV ECX
00500307  MOV EDX,dword ptr [EBP + 0xffffff60]
0050030d  SUB EDX,EAX
0050030f  MOV dword ptr [EBP + 0xffffff60],EDX
00500315  MOV EAX,0xa
0050031a  SUB EAX,dword ptr [EBP + 0xffffff74]
00500320  PUSH EAX
00500321  CALL 0x0062fbf0
00500326  ADD ESP,0x4
00500329  CDQ
0050032a  MOV ECX,0x3
0050032f  IDIV ECX
00500331  MOV EDX,dword ptr [EBP + 0xffffff60]
00500337  SUB EDX,EAX
00500339  MOV dword ptr [EBP + 0xffffff60],EDX
0050033f  JMP 0x00500371
00500341  CMP dword ptr [EBP + 0x8],0x6
00500345  JNZ 0x00500371
00500347  MOV EAX,0xa
0050034c  SUB EAX,dword ptr [EBP + 0xffffff74]
00500352  PUSH EAX
00500353  CALL 0x0062fbf0
00500358  ADD ESP,0x4
0050035b  CDQ
0050035c  MOV ECX,0x3
00500361  IDIV ECX
00500363  MOV EDX,dword ptr [EBP + 0xffffff60]
00500369  SUB EDX,EAX
0050036b  MOV dword ptr [EBP + 0xffffff60],EDX
00500371  MOV ECX,dword ptr [0x00791364]
00500377  CALL 0x0047d6f0
0050037c  CMP EAX,0x1
0050037f  JNZ 0x005003f0
00500381  MOV EAX,0x11
00500386  SUB EAX,dword ptr [EBP + 0x8]
00500389  SUB EAX,dword ptr [EBP + 0xffffff74]
0050038f  PUSH EAX
00500390  CALL 0x0062fbf0
00500395  ADD ESP,0x4
00500398  MOV ECX,dword ptr [EBP + 0xffffff60]
0050039e  SUB ECX,EAX
005003a0  MOV dword ptr [EBP + 0xffffff60],ECX
005003a6  MOV EDX,0x11
005003ab  SUB EDX,dword ptr [EBP + 0x8]
005003ae  SUB EDX,dword ptr [EBP + 0xffffff74]
005003b4  PUSH EDX
005003b5  CALL 0x0062fbf0
005003ba  ADD ESP,0x4
005003bd  MOV ECX,dword ptr [EBP + 0xffffff60]
005003c3  SUB ECX,EAX
005003c5  MOV dword ptr [EBP + 0xffffff60],ECX
005003cb  MOV EDX,0x11
005003d0  SUB EDX,dword ptr [EBP + 0x8]
005003d3  SUB EDX,dword ptr [EBP + 0xffffff74]
005003d9  PUSH EDX
005003da  CALL 0x0062fbf0
005003df  ADD ESP,0x4
005003e2  MOV ECX,dword ptr [EBP + 0xffffff60]
005003e8  SUB ECX,EAX
005003ea  MOV dword ptr [EBP + 0xffffff60],ECX
005003f0  CMP dword ptr [EBP + 0xffffff60],-0x13
005003f7  JGE 0x00500403
005003f9  MOV dword ptr [EBP + 0xffffff60],0xffffffed
00500403  FILD dword ptr [EBP + 0xffffff60]
00500409  FDIV double ptr [0x006b6978]
0050040f  FLD1
00500411  FADDP
00500413  FCOMP double ptr [EBP + 0xffffff6c]
00500419  FNSTSW AX
0050041b  TEST AH,0x5
0050041e  JP 0x00500470
00500420  MOV EDX,dword ptr [EBP + 0x10]
00500423  PUSH EDX
00500424  MOV EAX,dword ptr [EBP + 0x8]
00500427  PUSH EAX
00500428  CALL 0x00502080
0050042d  ADD ESP,0x8
00500430  MOVZX ECX,AL
00500433  TEST ECX,ECX
00500435  JZ 0x00500439
00500437  JMP 0x0050046e
00500439  PUSH 0x64
0050043b  CALL 0x0062fbf0
00500440  ADD ESP,0x4
00500443  MOV ESI,EAX
00500445  MOV ECX,dword ptr [0x007926f8]
0050044b  CALL 0x004d7ad0
00500450  MOVSX EDX,AX
00500453  CMP ESI,EDX
00500455  JGE 0x00500464
00500457  MOV EAX,dword ptr [EBP + -0x18]
0050045a  MOV word ptr [EAX*0x2 + 0x792498],0x2
00500464  MOV EAX,0x3
00500469  JMP 0x0050102b
0050046e  JMP 0x005004b5
00500470  MOV ECX,dword ptr [EBP + -0x18]
00500473  MOVSX EDX,word ptr [ECX*0x2 + 0x792990]
0050047b  CMP EDX,dword ptr [EBP + 0x8]
0050047e  JNZ 0x005004ae
00500480  MOV EAX,0xa
00500485  SUB EAX,dword ptr [EBP + 0x8]
00500488  PUSH EAX
00500489  CALL 0x0062fbf0
0050048e  ADD ESP,0x4
00500491  TEST EAX,EAX
00500493  JZ 0x005004ae
00500495  MOV ECX,dword ptr [EBP + -0x18]
00500498  MOV word ptr [ECX*0x2 + 0x792498],0x2
005004a2  MOV EAX,0x3
005004a7  JMP 0x0050102b
005004ae  XOR EAX,EAX
005004b0  JMP 0x0050102b
005004b5  JMP 0x005004da
005004b7  MOV EDX,dword ptr [EBP + 0x10]
005004ba  PUSH EDX
005004bb  MOV EAX,dword ptr [EBP + 0x8]
005004be  PUSH EAX
005004bf  CALL 0x00502080
005004c4  ADD ESP,0x8
005004c7  MOVZX ECX,AL
005004ca  TEST ECX,ECX
005004cc  JZ 0x005004d0
005004ce  JMP 0x005004da
005004d0  MOV EAX,0x1
005004d5  JMP 0x0050102b
005004da  MOV ECX,dword ptr [0x00791364]
005004e0  CALL 0x0047d6b0
005004e5  CMP EAX,0x1
005004e8  JNZ 0x005004f2
005004ea  MOV word ptr [EBP + -0x10],0x0
005004f0  JMP 0x00500501
005004f2  MOV ECX,dword ptr [0x007926f8]
005004f8  CALL 0x004d7eb0
005004fd  MOV word ptr [EBP + -0x10],AX
00500501  MOV EDX,dword ptr [EBP + -0x18]
00500504  MOVSX EAX,word ptr [EDX*0x2 + 0x792498]
0050050c  CMP EAX,0x5
0050050f  JZ 0x00500525
00500511  MOV ECX,dword ptr [EBP + -0x18]
00500514  MOVSX EDX,word ptr [ECX*0x2 + 0x792498]
0050051c  CMP EDX,0xd
0050051f  JNZ 0x00500885
00500525  CMP dword ptr [EBP + 0x8],0x3
00500529  JNZ 0x00500544
0050052b  MOVSX EAX,word ptr [EBP + -0x10]
0050052f  PUSH EAX
00500530  CALL 0x004fe1e0
00500535  ADD ESP,0x4
00500538  MOVZX ECX,AL
0050053b  TEST ECX,ECX
0050053d  JNZ 0x00500544
0050053f  JMP 0x00500880
00500544  MOV EDX,dword ptr [EBP + -0x18]
00500547  MOVSX EAX,word ptr [EDX*0x2 + 0x792498]
0050054f  CMP EAX,0x5
00500552  JNZ 0x0050057b
00500554  MOV ECX,dword ptr [0x00791364]
0050055a  CALL 0x0047ce60
0050055f  PUSH EAX
00500560  CMP dword ptr [EBP + 0x8],0x7
00500564  SETZ CL
00500567  PUSH ECX
00500568  MOV ECX,dword ptr [0x007926f8]
0050056e  CALL 0x004c6ef0
00500573  MOV dword ptr [EBP + 0xfffffd58],EAX
00500579  JMP 0x0050058c
0050057b  MOV ECX,dword ptr [0x007926f8]
00500581  CALL 0x004c6f50
00500586  MOV dword ptr [EBP + 0xfffffd58],EAX
0050058c  MOV EDX,dword ptr [EBP + -0x18]
0050058f  MOVSX ESI,word ptr [EDX*0x2 + 0x7929c0]
00500597  PUSH 0xa
00500599  CALL 0x0062fbf0
0050059e  ADD ESP,0x4
005005a1  IMUL ESI,EAX
005005a4  MOV EAX,0x64
005005a9  SUB EAX,ESI
005005ab  SUB EAX,dword ptr [EBP + 0xfffffd58]
005005b1  PUSH EAX
005005b2  CALL 0x0062fbf0
005005b7  ADD ESP,0x4
005005ba  MOV ESI,EAX
005005bc  PUSH 0x3
005005be  MOV ECX,dword ptr [EBP + 0x8]
005005c1  PUSH ECX
005005c2  CALL 0x00502530
005005c7  ADD ESP,0x8
005005ca  MOVSX EDX,AX
005005cd  CMP ESI,EDX
005005cf  JGE 0x00500880
005005d5  MOV ECX,dword ptr [0x00791364]
005005db  ADD ECX,0x38
005005de  CALL 0x004f6640
005005e3  MOVZX EAX,AL
005005e6  TEST EAX,EAX
005005e8  JNZ 0x00500616
005005ea  MOV ECX,dword ptr [0x00791364]
005005f0  ADD ECX,0x38
005005f3  CALL 0x004f66e0
005005f8  MOVZX ECX,AL
005005fb  TEST ECX,ECX
005005fd  JNZ 0x00500616
005005ff  MOV EDX,dword ptr [EBP + -0x18]
00500602  MOVSX EAX,word ptr [EDX*0x2 + 0x792498]
0050060a  CMP EAX,0xd
0050060d  JNZ 0x00500616
0050060f  XOR EAX,EAX
00500611  JMP 0x0050102b
00500616  PUSH 0x3
00500618  MOV ECX,dword ptr [0x007926f8]
0050061e  CALL 0x004c79d0
00500623  PUSH 0x64
00500625  CALL 0x0062fbf0
0050062a  ADD ESP,0x4
0050062d  MOV ESI,EAX
0050062f  MOV ECX,dword ptr [0x007926f8]
00500635  CALL 0x004d6c70
0050063a  MOVSX ECX,AX
0050063d  CMP ESI,ECX
0050063f  JGE 0x00500682
00500641  PUSH 0x64
00500643  CALL 0x0062fbf0
00500648  ADD ESP,0x4
0050064b  MOV ESI,EAX
0050064d  MOV ECX,dword ptr [0x007926f8]
00500653  CALL 0x004d6c70
00500658  MOVSX EAX,AX
0050065b  CDQ
0050065c  SUB EAX,EDX
0050065e  SAR EAX,0x1
00500660  CMP ESI,EAX
00500662  JGE 0x00500673
00500664  MOV EDX,dword ptr [EBP + -0x18]
00500667  MOV word ptr [EDX*0x2 + 0x792498],0x3
00500671  JMP 0x00500680
00500673  MOV EAX,dword ptr [EBP + -0x18]
00500676  MOV word ptr [EAX*0x2 + 0x792498],0x4
00500680  JMP 0x005006ad
00500682  PUSH 0x64
00500684  CALL 0x0062fbf0
00500689  ADD ESP,0x4
0050068c  MOV ESI,EAX
0050068e  MOV ECX,dword ptr [0x007926f8]
00500694  CALL 0x004d6c90
00500699  MOVSX ECX,AX
0050069c  CMP ESI,ECX
0050069e  JGE 0x005006ad
005006a0  MOV EDX,dword ptr [EBP + -0x18]
005006a3  MOV word ptr [EDX*0x2 + 0x792498],0x1
005006ad  MOV ECX,dword ptr [0x00791364]
005006b3  ADD ECX,0x38
005006b6  CALL 0x004f6640
005006bb  MOVZX EAX,AL
005006be  TEST EAX,EAX
005006c0  JZ 0x005006d1
005006c2  MOV EAX,0x2
005006c7  JMP 0x0050102b
005006d1  MOV ECX,dword ptr [0x00791364]
005006d7  ADD ECX,0x38
005006da  CALL 0x004f66e0
005006df  MOVZX ECX,AL
005006e2  TEST ECX,ECX
005006e4  JZ 0x00500713
005006e6  MOV ECX,dword ptr [0x00791364]
005006ec  CALL 0x0047d6f0
005006f1  CMP EAX,0x1
005006f4  JNZ 0x00500713
005006f6  PUSH 0x3
005006f8  CALL 0x0062fbf0
005006fd  ADD ESP,0x4
00500700  TEST EAX,EAX
00500702  JZ 0x00500713
00500704  MOV EAX,0x4
00500709  JMP 0x0050102b
00500713  MOV ECX,dword ptr [0x00791364]
00500719  ADD ECX,0x38
0050071c  CALL 0x004f66e0
00500721  MOVZX EDX,AL
00500724  TEST EDX,EDX
00500726  JZ 0x0050075b
00500728  MOV ECX,dword ptr [0x00791364]
0050072e  CALL 0x0047d6f0
00500733  CMP EAX,0x1
00500736  JZ 0x0050075b
00500738  CMP dword ptr [EBP + 0x8],0x7
0050073c  JNZ 0x0050075b
0050073e  PUSH 0x4
00500740  CALL 0x0062fbf0
00500745  ADD ESP,0x4
00500748  TEST EAX,EAX
0050074a  JZ 0x0050075b
0050074c  MOV EAX,0x4
00500751  JMP 0x0050102b
0050075b  MOV ECX,dword ptr [0x00791364]
00500761  ADD ECX,0x38
00500764  CALL 0x004f66e0
00500769  MOVZX EAX,AL
0050076c  TEST EAX,EAX
0050076e  JZ 0x005007a3
00500770  MOV ECX,dword ptr [0x00791364]
00500776  CALL 0x0047d6f0
0050077b  CMP EAX,0x1
0050077e  JZ 0x005007a3
00500780  CMP dword ptr [EBP + 0x8],0x6
00500784  JNZ 0x005007a3
00500786  PUSH 0x4
00500788  CALL 0x0062fbf0
0050078d  ADD ESP,0x4
00500790  TEST EAX,EAX
00500792  JZ 0x005007a3
00500794  MOV EAX,0x4
00500799  JMP 0x0050102b
005007a3  MOV ECX,dword ptr [0x00791364]
005007a9  ADD ECX,0x38
005007ac  CALL 0x004f66e0
005007b1  MOVZX ECX,AL
005007b4  TEST ECX,ECX
005007b6  JZ 0x005007eb
005007b8  MOV ECX,dword ptr [0x00791364]
005007be  CALL 0x0047d6f0
005007c3  CMP EAX,0x1
005007c6  JZ 0x005007eb
005007c8  CMP dword ptr [EBP + 0x8],0x5
005007cc  JNZ 0x005007eb
005007ce  PUSH 0x3
005007d0  CALL 0x0062fbf0
005007d5  ADD ESP,0x4
005007d8  TEST EAX,EAX
005007da  JZ 0x005007eb
005007dc  MOV EAX,0x4
005007e1  JMP 0x0050102b
005007eb  MOV ECX,dword ptr [0x00791364]
005007f1  ADD ECX,0x38
005007f4  CALL 0x004f66e0
005007f9  MOVZX EDX,AL
005007fc  TEST EDX,EDX
005007fe  JZ 0x00500830
00500800  MOV ECX,dword ptr [0x00791364]
00500806  CALL 0x0047d6f0
0050080b  CMP EAX,0x1
0050080e  JZ 0x00500830
00500810  CMP dword ptr [EBP + 0x8],0x4
00500814  JNZ 0x00500830
00500816  PUSH 0x2
00500818  CALL 0x0062fbf0
0050081d  ADD ESP,0x4
00500820  TEST EAX,EAX
00500822  JZ 0x00500830
00500824  MOV EAX,0x4
00500829  JMP 0x0050102b
00500830  MOV ECX,dword ptr [0x00791364]
00500836  ADD ECX,0x38
00500839  CALL 0x004f66e0
0050083e  MOVZX EAX,AL
00500841  TEST EAX,EAX
00500843  JZ 0x00500876
00500845  MOV ECX,dword ptr [0x00791364]
0050084b  CALL 0x0047d6f0
00500850  CMP EAX,0x1
00500853  JZ 0x00500876
00500855  CMP dword ptr [EBP + 0x8],0x3
00500859  JNZ 0x00500876
0050085b  PUSH 0x5
0050085d  CALL 0x0062fbf0
00500862  ADD ESP,0x4
00500865  CMP EAX,0x2
00500868  JGE 0x00500876
0050086a  MOV EAX,0x4
0050086f  JMP 0x0050102b
00500876  MOV EAX,0x3
0050087b  JMP 0x0050102b
00500880  JMP 0x00500f88
00500885  MOV ECX,dword ptr [EBP + -0x18]
00500888  MOVSX EDX,word ptr [ECX*0x2 + 0x792498]
00500890  CMP EDX,0x4
00500893  JZ 0x005008a9
00500895  MOV EAX,dword ptr [EBP + -0x18]
00500898  MOVSX ECX,word ptr [EAX*0x2 + 0x792498]
005008a0  CMP ECX,0xc
005008a3  JNZ 0x00500c22
005008a9  CMP dword ptr [EBP + 0x8],0x3
005008ad  JNZ 0x005008c8
005008af  MOVSX EDX,word ptr [EBP + -0x10]
005008b3  PUSH EDX
005008b4  CALL 0x004fe1e0
005008b9  ADD ESP,0x4
005008bc  MOVZX EAX,AL
005008bf  TEST EAX,EAX
005008c1  JNZ 0x005008c8
005008c3  JMP 0x00500c1d
005008c8  MOV ECX,dword ptr [EBP + -0x18]
005008cb  MOVSX EDX,word ptr [ECX*0x2 + 0x792498]
005008d3  CMP EDX,0x4
005008d6  JNZ 0x005008ff
005008d8  MOV ECX,dword ptr [0x00791364]
005008de  CALL 0x0047ce60
005008e3  PUSH EAX
005008e4  CMP dword ptr [EBP + 0x8],0x7
005008e8  SETZ AL
005008eb  PUSH EAX
005008ec  MOV ECX,dword ptr [0x007926f8]
005008f2  CALL 0x004c6ef0
005008f7  MOV dword ptr [EBP + 0xfffffd54],EAX
005008fd  JMP 0x00500910
005008ff  MOV ECX,dword ptr [0x007926f8]
00500905  CALL 0x004c6f50
0050090a  MOV dword ptr [EBP + 0xfffffd54],EAX
00500910  MOV ECX,dword ptr [EBP + -0x18]
00500913  MOVSX ESI,word ptr [ECX*0x2 + 0x7929c0]
0050091b  PUSH 0xa
0050091d  CALL 0x0062fbf0
00500922  ADD ESP,0x4
00500925  IMUL ESI,EAX
00500928  MOV EDX,0x64
0050092d  SUB EDX,ESI
0050092f  SUB EDX,dword ptr [EBP + 0xfffffd54]
00500935  PUSH EDX
00500936  CALL 0x0062fbf0
0050093b  ADD ESP,0x4
0050093e  MOV ESI,EAX
00500940  PUSH 0x2
00500942  MOV EAX,dword ptr [EBP + 0x8]
00500945  PUSH EAX
00500946  CALL 0x00502530
0050094b  ADD ESP,0x8
0050094e  MOVSX ECX,AX
00500951  CMP ESI,ECX
00500953  JGE 0x00500c1d
00500959  MOV ECX,dword ptr [0x00791364]
0050095f  ADD ECX,0x38
00500962  CALL 0x004f6640
00500967  MOVZX EDX,AL
0050096a  TEST EDX,EDX
0050096c  JNZ 0x0050099a
0050096e  MOV ECX,dword ptr [0x00791364]
00500974  ADD ECX,0x38
00500977  CALL 0x004f66e0
0050097c  MOVZX EAX,AL
0050097f  TEST EAX,EAX
00500981  JNZ 0x0050099a
00500983  MOV ECX,dword ptr [EBP + -0x18]
00500986  MOVSX EDX,word ptr [ECX*0x2 + 0x792498]
0050098e  CMP EDX,0xc
00500991  JNZ 0x0050099a
00500993  XOR EAX,EAX
00500995  JMP 0x0050102b
0050099a  PUSH 0x2
0050099c  MOV ECX,dword ptr [0x007926f8]
005009a2  CALL 0x004c79d0
005009a7  PUSH 0x64
005009a9  CALL 0x0062fbf0
005009ae  ADD ESP,0x4
005009b1  MOV ESI,EAX
005009b3  MOV ECX,dword ptr [0x007926f8]
005009b9  CALL 0x004d6c70
005009be  MOVSX EAX,AX
005009c1  CMP ESI,EAX
005009c3  JGE 0x00500a06
005009c5  PUSH 0x64
005009c7  CALL 0x0062fbf0
005009cc  ADD ESP,0x4
005009cf  MOV ESI,EAX
005009d1  MOV ECX,dword ptr [0x007926f8]
005009d7  CALL 0x004d6c70
005009dc  MOVSX EAX,AX
005009df  CDQ
005009e0  SUB EAX,EDX
005009e2  SAR EAX,0x1
005009e4  CMP ESI,EAX
005009e6  JGE 0x005009f7
005009e8  MOV ECX,dword ptr [EBP + -0x18]
005009eb  MOV word ptr [ECX*0x2 + 0x792498],0x2
005009f5  JMP 0x00500a04
005009f7  MOV EDX,dword ptr [EBP + -0x18]
005009fa  MOV word ptr [EDX*0x2 + 0x792498],0x3
00500a04  JMP 0x00500a31
00500a06  PUSH 0x64
00500a08  CALL 0x0062fbf0
00500a0d  ADD ESP,0x4
00500a10  MOV ESI,EAX
00500a12  MOV ECX,dword ptr [0x007926f8]
00500a18  CALL 0x004d6c90
00500a1d  MOVSX EAX,AX
00500a20  CMP ESI,EAX
00500a22  JGE 0x00500a31
00500a24  MOV ECX,dword ptr [EBP + -0x18]
00500a27  MOV word ptr [ECX*0x2 + 0x792498],0x1
00500a31  MOV ECX,dword ptr [0x00791364]
00500a37  ADD ECX,0x38
00500a3a  CALL 0x004f6640
00500a3f  MOVZX EDX,AL
00500a42  TEST EDX,EDX
00500a44  JZ 0x00500a55
00500a46  MOV EAX,0x2
00500a4b  JMP 0x0050102b
00500a55  MOV ECX,dword ptr [0x00791364]
00500a5b  ADD ECX,0x38
00500a5e  CALL 0x004f66e0
00500a63  MOVZX EAX,AL
00500a66  TEST EAX,EAX
00500a68  JZ 0x00500a97
00500a6a  MOV ECX,dword ptr [0x00791364]
00500a70  CALL 0x0047d6f0
00500a75  CMP EAX,0x1
00500a78  JNZ 0x00500a97
00500a7a  PUSH 0x3
00500a7c  CALL 0x0062fbf0
00500a81  ADD ESP,0x4
00500a84  TEST EAX,EAX
00500a86  JZ 0x00500a97
00500a88  MOV EAX,0x4
00500a8d  JMP 0x0050102b
00500a97  MOV ECX,dword ptr [0x00791364]
00500a9d  ADD ECX,0x38
00500aa0  CALL 0x004f66e0
00500aa5  MOVZX ECX,AL
00500aa8  TEST ECX,ECX
00500aaa  JZ 0x00500adf
00500aac  MOV ECX,dword ptr [0x00791364]
00500ab2  CALL 0x0047d6f0
00500ab7  CMP EAX,0x1
00500aba  JZ 0x00500adf
00500abc  CMP dword ptr [EBP + 0x8],0x7
00500ac0  JNZ 0x00500adf
00500ac2  PUSH 0x4
00500ac4  CALL 0x0062fbf0
00500ac9  ADD ESP,0x4
00500acc  TEST EAX,EAX
00500ace  JZ 0x00500adf
00500ad0  MOV EAX,0x4
00500ad5  JMP 0x0050102b
00500adf  MOV ECX,dword ptr [0x00791364]
00500ae5  ADD ECX,0x38
00500ae8  CALL 0x004f66e0
00500aed  MOVZX EDX,AL
00500af0  TEST EDX,EDX
00500af2  JZ 0x00500b27
00500af4  MOV ECX,dword ptr [0x00791364]
00500afa  CALL 0x0047d6f0
00500aff  CMP EAX,0x1
00500b02  JZ 0x00500b27
00500b04  CMP dword ptr [EBP + 0x8],0x6
00500b08  JNZ 0x00500b27
00500b0a  PUSH 0x4
00500b0c  CALL 0x0062fbf0
00500b11  ADD ESP,0x4
00500b14  TEST EAX,EAX
00500b16  JZ 0x00500b27
00500b18  MOV EAX,0x4
00500b1d  JMP 0x0050102b
00500b27  MOV ECX,dword ptr [0x00791364]
00500b2d  ADD ECX,0x38
00500b30  CALL 0x004f66e0
00500b35  MOVZX EAX,AL
00500b38  TEST EAX,EAX
00500b3a  JZ 0x00500b6f
00500b3c  MOV ECX,dword ptr [0x00791364]
00500b42  CALL 0x0047d6f0
00500b47  CMP EAX,0x1
00500b4a  JZ 0x00500b6f
00500b4c  CMP dword ptr [EBP + 0x8],0x5
00500b50  JNZ 0x00500b6f
00500b52  PUSH 0x3
00500b54  CALL 0x0062fbf0
00500b59  ADD ESP,0x4
00500b5c  TEST EAX,EAX
00500b5e  JZ 0x00500b6f
00500b60  MOV EAX,0x4
00500b65  JMP 0x0050102b
00500b6f  MOV ECX,dword ptr [0x00791364]
00500b75  ADD ECX,0x38
00500b78  CALL 0x004f66e0
00500b7d  MOVZX ECX,AL
00500b80  TEST ECX,ECX
00500b82  JZ 0x00500bb4
00500b84  MOV ECX,dword ptr [0x00791364]
00500b8a  CALL 0x0047d6f0
00500b8f  CMP EAX,0x1
00500b92  JZ 0x00500bb4
00500b94  CMP dword ptr [EBP + 0x8],0x4
00500b98  JNZ 0x00500bb4
00500b9a  PUSH 0x2
00500b9c  CALL 0x0062fbf0
00500ba1  ADD ESP,0x4
00500ba4  TEST EAX,EAX
00500ba6  JZ 0x00500bb4
00500ba8  MOV EAX,0x4
00500bad  JMP 0x0050102b
00500bb4  MOV ECX,dword ptr [0x00791364]
00500bba  ADD ECX,0x38
00500bbd  CALL 0x004f66e0
00500bc2  MOVZX EDX,AL
00500bc5  TEST EDX,EDX
00500bc7  JZ 0x00500bfa
00500bc9  MOV ECX,dword ptr [0x00791364]
00500bcf  CALL 0x0047d6f0
00500bd4  CMP EAX,0x1
00500bd7  JZ 0x00500bfa
00500bd9  CMP dword ptr [EBP + 0x8],0x3
00500bdd  JNZ 0x00500bfa
00500bdf  PUSH 0x5
00500be1  CALL 0x0062fbf0
00500be6  ADD ESP,0x4
00500be9  CMP EAX,0x2
00500bec  JGE 0x00500bfa
00500bee  MOV EAX,0x4
00500bf3  JMP 0x0050102b
00500bfa  MOV EAX,dword ptr [EBP + -0x18]
00500bfd  MOVSX ECX,word ptr [EAX*0x2 + 0x792498]
00500c05  CMP ECX,0xc
00500c08  JNZ 0x00500c13
00500c0a  XOR EAX,EAX
00500c0c  JMP 0x0050102b
00500c13  MOV EAX,0x3
00500c18  JMP 0x0050102b
00500c1d  JMP 0x00500f88
00500c22  MOV EDX,dword ptr [EBP + -0x18]
00500c25  MOVSX EAX,word ptr [EDX*0x2 + 0x792498]
00500c2d  CMP EAX,0x3
00500c30  JZ 0x00500c46
00500c32  MOV ECX,dword ptr [EBP + -0x18]
00500c35  MOVSX EDX,word ptr [ECX*0x2 + 0x792498]
00500c3d  CMP EDX,0xb
00500c40  JNZ 0x00500f88
00500c46  CMP dword ptr [EBP + 0x8],0x3
00500c4a  JNZ 0x00500c65
00500c4c  MOVSX EAX,word ptr [EBP + -0x10]
00500c50  PUSH EAX
00500c51  CALL 0x004fe1e0
00500c56  ADD ESP,0x4
00500c59  MOVZX ECX,AL
00500c5c  TEST ECX,ECX
00500c5e  JNZ 0x00500c65
00500c60  JMP 0x00500f88
00500c65  MOV EDX,dword ptr [EBP + -0x18]
00500c68  MOVSX EAX,word ptr [EDX*0x2 + 0x792498]
00500c70  CMP EAX,0x3
00500c73  JNZ 0x00500c9c
00500c75  MOV ECX,dword ptr [0x00791364]
00500c7b  CALL 0x0047ce60
00500c80  PUSH EAX
00500c81  CMP dword ptr [EBP + 0x8],0x7
00500c85  SETZ CL
00500c88  PUSH ECX
00500c89  MOV ECX,dword ptr [0x007926f8]
00500c8f  CALL 0x004c6ef0
00500c94  MOV dword ptr [EBP + 0xfffffd50],EAX
00500c9a  JMP 0x00500cad
00500c9c  MOV ECX,dword ptr [0x007926f8]
00500ca2  CALL 0x004c6f50
00500ca7  MOV dword ptr [EBP + 0xfffffd50],EAX
00500cad  MOV EDX,dword ptr [EBP + -0x18]
00500cb0  MOVSX ESI,word ptr [EDX*0x2 + 0x7929c0]
00500cb8  PUSH 0xa
00500cba  CALL 0x0062fbf0
00500cbf  ADD ESP,0x4
00500cc2  IMUL ESI,EAX
00500cc5  MOV EAX,0x64
00500cca  SUB EAX,ESI
00500ccc  SUB EAX,dword ptr [EBP + 0xfffffd50]
00500cd2  PUSH EAX
00500cd3  CALL 0x0062fbf0
00500cd8  ADD ESP,0x4
00500cdb  MOV ESI,EAX
00500cdd  PUSH 0x1
00500cdf  MOV ECX,dword ptr [EBP + 0x8]
00500ce2  PUSH ECX
00500ce3  CALL 0x00502530
00500ce8  ADD ESP,0x8
00500ceb  MOVSX EDX,AX
00500cee  CMP ESI,EDX
00500cf0  JGE 0x00500f88
00500cf6  MOV ECX,dword ptr [0x00791364]
00500cfc  ADD ECX,0x38
00500cff  CALL 0x004f6640
00500d04  MOVZX EAX,AL
00500d07  TEST EAX,EAX
00500d09  JNZ 0x00500d37
00500d0b  MOV ECX,dword ptr [0x00791364]
00500d11  ADD ECX,0x38
00500d14  CALL 0x004f66e0
00500d19  MOVZX ECX,AL
00500d1c  TEST ECX,ECX
00500d1e  JNZ 0x00500d37
00500d20  MOV EDX,dword ptr [EBP + -0x18]
00500d23  MOVSX EAX,word ptr [EDX*0x2 + 0x792498]
00500d2b  CMP EAX,0xb
00500d2e  JNZ 0x00500d37
00500d30  XOR EAX,EAX
00500d32  JMP 0x0050102b
00500d37  PUSH 0x1
00500d39  MOV ECX,dword ptr [0x007926f8]
00500d3f  CALL 0x004c79d0
00500d44  PUSH 0x64
00500d46  CALL 0x0062fbf0
00500d4b  ADD ESP,0x4
00500d4e  MOV ESI,EAX
00500d50  MOV ECX,dword ptr [0x007926f8]
00500d56  CALL 0x004d6c70
00500d5b  MOVSX ECX,AX
00500d5e  CMP ESI,ECX
00500d60  JGE 0x00500d71
00500d62  MOV EDX,dword ptr [EBP + -0x18]
00500d65  MOV word ptr [EDX*0x2 + 0x792498],0x2
00500d6f  JMP 0x00500d9c
00500d71  PUSH 0x64
00500d73  CALL 0x0062fbf0
00500d78  ADD ESP,0x4
00500d7b  MOV ESI,EAX
00500d7d  MOV ECX,dword ptr [0x007926f8]
00500d83  CALL 0x004d6c90
00500d88  MOVSX EAX,AX
00500d8b  CMP ESI,EAX
00500d8d  JGE 0x00500d9c
00500d8f  MOV ECX,dword ptr [EBP + -0x18]
00500d92  MOV word ptr [ECX*0x2 + 0x792498],0x1
00500d9c  MOV ECX,dword ptr [0x00791364]
00500da2  ADD ECX,0x38
00500da5  CALL 0x004f6640
00500daa  MOVZX EDX,AL
00500dad  TEST EDX,EDX
00500daf  JZ 0x00500dc0
00500db1  MOV EAX,0x2
00500db6  JMP 0x0050102b
00500dc0  MOV ECX,dword ptr [0x00791364]
00500dc6  ADD ECX,0x38
00500dc9  CALL 0x004f66e0
00500dce  MOVZX EAX,AL
00500dd1  TEST EAX,EAX
00500dd3  JZ 0x00500e02
00500dd5  MOV ECX,dword ptr [0x00791364]
00500ddb  CALL 0x0047d6f0
00500de0  CMP EAX,0x1
00500de3  JNZ 0x00500e02
00500de5  PUSH 0x3
00500de7  CALL 0x0062fbf0
00500dec  ADD ESP,0x4
00500def  TEST EAX,EAX
00500df1  JZ 0x00500e02
00500df3  MOV EAX,0x4
00500df8  JMP 0x0050102b
00500e02  MOV ECX,dword ptr [0x00791364]
00500e08  ADD ECX,0x38
00500e0b  CALL 0x004f66e0
00500e10  MOVZX ECX,AL
00500e13  TEST ECX,ECX
00500e15  JZ 0x00500e4a
00500e17  MOV ECX,dword ptr [0x00791364]
00500e1d  CALL 0x0047d6f0
00500e22  CMP EAX,0x1
00500e25  JZ 0x00500e4a
00500e27  CMP dword ptr [EBP + 0x8],0x7
00500e2b  JNZ 0x00500e4a
00500e2d  PUSH 0x4
00500e2f  CALL 0x0062fbf0
00500e34  ADD ESP,0x4
00500e37  TEST EAX,EAX
00500e39  JZ 0x00500e4a
00500e3b  MOV EAX,0x4
00500e40  JMP 0x0050102b
00500e4a  MOV ECX,dword ptr [0x00791364]
00500e50  ADD ECX,0x38
00500e53  CALL 0x004f66e0
00500e58  MOVZX EDX,AL
00500e5b  TEST EDX,EDX
00500e5d  JZ 0x00500e92
00500e5f  MOV ECX,dword ptr [0x00791364]
00500e65  CALL 0x0047d6f0
00500e6a  CMP EAX,0x1
00500e6d  JZ 0x00500e92
00500e6f  CMP dword ptr [EBP + 0x8],0x6
00500e73  JNZ 0x00500e92
00500e75  PUSH 0x4
00500e77  CALL 0x0062fbf0
00500e7c  ADD ESP,0x4
00500e7f  TEST EAX,EAX
00500e81  JZ 0x00500e92
00500e83  MOV EAX,0x4
00500e88  JMP 0x0050102b
00500e92  MOV ECX,dword ptr [0x00791364]
00500e98  ADD ECX,0x38
00500e9b  CALL 0x004f66e0
00500ea0  MOVZX EAX,AL
00500ea3  TEST EAX,EAX
00500ea5  JZ 0x00500eda
00500ea7  MOV ECX,dword ptr [0x00791364]
00500ead  CALL 0x0047d6f0
00500eb2  CMP EAX,0x1
00500eb5  JZ 0x00500eda
00500eb7  CMP dword ptr [EBP + 0x8],0x5
00500ebb  JNZ 0x00500eda
00500ebd  PUSH 0x3
00500ebf  CALL 0x0062fbf0
00500ec4  ADD ESP,0x4
00500ec7  TEST EAX,EAX
00500ec9  JZ 0x00500eda
00500ecb  MOV EAX,0x4
00500ed0  JMP 0x0050102b
00500eda  MOV ECX,dword ptr [0x00791364]
00500ee0  ADD ECX,0x38
00500ee3  CALL 0x004f66e0
00500ee8  MOVZX ECX,AL
00500eeb  TEST ECX,ECX
00500eed  JZ 0x00500f1f
00500eef  MOV ECX,dword ptr [0x00791364]
00500ef5  CALL 0x0047d6f0
00500efa  CMP EAX,0x1
00500efd  JZ 0x00500f1f
00500eff  CMP dword ptr [EBP + 0x8],0x4
00500f03  JNZ 0x00500f1f
00500f05  PUSH 0x2
00500f07  CALL 0x0062fbf0
00500f0c  ADD ESP,0x4
00500f0f  TEST EAX,EAX
00500f11  JZ 0x00500f1f
00500f13  MOV EAX,0x4
00500f18  JMP 0x0050102b
00500f1f  MOV ECX,dword ptr [0x00791364]
00500f25  ADD ECX,0x38
00500f28  CALL 0x004f66e0
00500f2d  MOVZX EDX,AL
00500f30  TEST EDX,EDX
00500f32  JZ 0x00500f65
00500f34  MOV ECX,dword ptr [0x00791364]
00500f3a  CALL 0x0047d6f0
00500f3f  CMP EAX,0x1
00500f42  JZ 0x00500f65
00500f44  CMP dword ptr [EBP + 0x8],0x3
00500f48  JNZ 0x00500f65
00500f4a  PUSH 0x5
00500f4c  CALL 0x0062fbf0
00500f51  ADD ESP,0x4
00500f54  CMP EAX,0x2
00500f57  JGE 0x00500f65
00500f59  MOV EAX,0x4
00500f5e  JMP 0x0050102b
00500f65  MOV EAX,dword ptr [EBP + -0x18]
00500f68  MOVSX ECX,word ptr [EAX*0x2 + 0x792498]
00500f70  CMP ECX,0xb
00500f73  JNZ 0x00500f7e
00500f75  XOR EAX,EAX
00500f77  JMP 0x0050102b
00500f7e  MOV EAX,0x3
00500f83  JMP 0x0050102b
00500f88  MOV ECX,dword ptr [0x00791364]
00500f8e  ADD ECX,0x38
00500f91  CALL 0x004f6640
00500f96  MOVZX EDX,AL
00500f99  TEST EDX,EDX
00500f9b  JNZ 0x00500fdd
00500f9d  MOV EAX,dword ptr [EBP + -0x18]
00500fa0  MOVSX ECX,word ptr [EAX*0x2 + 0x792498]
00500fa8  CMP ECX,0xd
00500fab  JNZ 0x00500fb3
00500fad  XOR EAX,EAX
00500faf  JMP 0x0050102b
00500fb3  MOV EDX,dword ptr [EBP + -0x18]
00500fb6  MOVSX EAX,word ptr [EDX*0x2 + 0x792498]
00500fbe  CMP EAX,0xc
00500fc1  JNZ 0x00500fc9
00500fc3  XOR EAX,EAX
00500fc5  JMP 0x0050102b
00500fc9  MOV ECX,dword ptr [EBP + -0x18]
00500fcc  MOVSX EDX,word ptr [ECX*0x2 + 0x792498]
00500fd4  CMP EDX,0xb
00500fd7  JNZ 0x00500fdd
00500fd9  XOR EAX,EAX
00500fdb  JMP 0x0050102b
00500fdd  PUSH 0x64
00500fdf  CALL 0x0062fbf0
00500fe4  ADD ESP,0x4
00500fe7  MOV ESI,EAX
00500fe9  MOV ECX,dword ptr [0x007926f8]
00500fef  CALL 0x004d6c90
00500ff4  MOVSX EAX,AX
00500ff7  CMP ESI,EAX
00500ff9  JGE 0x00501008
00500ffb  MOV ECX,dword ptr [EBP + -0x18]
00500ffe  MOV word ptr [ECX*0x2 + 0x792498],0x1
00501008  MOV ECX,dword ptr [0x00791364]
0050100e  ADD ECX,0x38
00501011  CALL 0x004f6640
00501016  MOVZX EDX,AL
00501019  TEST EDX,EDX
0050101b  JZ 0x00501026
0050101d  MOV EAX,0x1
00501022  JMP 0x0050102b
00501026  MOV EAX,0x3
0050102b  MOV ECX,dword ptr [EBP + -0xc]
0050102e  MOV dword ptr FS:[0x0],ECX
00501035  POP ECX
00501036  POP EDI
00501037  POP ESI
00501038  MOV ESP,EBP
0050103a  POP EBP
0050103b  RET
