; FUN_004db630  004db630
004db630  PUSH EBP
004db631  MOV EBP,ESP
004db633  PUSH -0x1
004db635  PUSH 0x6a258e
004db63a  MOV EAX,FS:[0x0]
004db640  PUSH EAX
004db641  SUB ESP,0x8c
004db647  MOV EAX,[0x00781870]
004db64c  XOR EAX,EBP
004db64e  PUSH EAX
004db64f  LEA EAX,[EBP + -0xc]
004db652  MOV FS:[0x0],EAX
004db658  MOV dword ptr [EBP + -0x6c],ECX
004db65b  MOV byte ptr [EBP + -0x11],0x1
004db65f  MOV ECX,dword ptr [EBP + -0x6c]
004db662  CALL 0x004c70d0
004db667  MOV dword ptr [EBP + -0x70],EAX
004db66a  MOV EAX,dword ptr [EBP + -0x70]
004db66d  ADD EAX,0x1
004db670  MOV dword ptr [EBP + -0x70],EAX
004db673  CMP dword ptr [EBP + -0x70],0x8
004db677  JA 0x004db694
004db679  MOV ECX,dword ptr [EBP + -0x70]
004db67c  MOVZX EDX,byte ptr [ECX + 0x4dbdb8]
004db683  JMP dword ptr [EDX*0x4 + 0x4dbdb0]
004db68a  MOV byte ptr [EBP + -0x11],0x1
004db68e  JMP 0x004db694
004db690  MOV byte ptr [EBP + -0x11],0x0
004db694  MOV EAX,dword ptr [EBP + -0x6c]
004db697  CMP dword ptr [EAX + 0x20],0x0
004db69b  JNZ 0x004db7a0
004db6a1  PUSH 0x178
004db6a6  CALL 0x00686d82
004db6ab  ADD ESP,0x4
004db6ae  MOV dword ptr [EBP + -0x20],EAX
004db6b1  MOV dword ptr [EBP + -0x4],0x0
004db6b8  CMP dword ptr [EBP + -0x20],0x0
004db6bc  JZ 0x004db6cb
004db6be  MOV ECX,dword ptr [EBP + -0x20]
004db6c1  CALL 0x005eaaf0
004db6c6  MOV dword ptr [EBP + -0x74],EAX
004db6c9  JMP 0x004db6d2
004db6cb  MOV dword ptr [EBP + -0x74],0x0
004db6d2  MOV ECX,dword ptr [EBP + -0x74]
004db6d5  MOV dword ptr [EBP + -0x1c],ECX
004db6d8  MOV dword ptr [EBP + -0x4],0xffffffff
004db6df  MOV EDX,dword ptr [EBP + -0x6c]
004db6e2  MOV EAX,dword ptr [EBP + -0x1c]
004db6e5  MOV dword ptr [EDX + 0x20],EAX
004db6e8  MOVZX ECX,byte ptr [EBP + -0x11]
004db6ec  TEST ECX,ECX
004db6ee  JZ 0x004db729
004db6f0  PUSH 0x186a5
004db6f5  MOV EDX,dword ptr [EBP + -0x6c]
004db6f8  MOV ECX,dword ptr [EDX + 0x20]
004db6fb  CALL 0x005eaf00
004db700  MOV EAX,dword ptr [EBP + -0x6c]
004db703  MOV ECX,dword ptr [EAX + 0x14]
004db706  ADD ECX,0x5a
004db709  PUSH ECX
004db70a  MOV EDX,dword ptr [EBP + -0x6c]
004db70d  MOV EAX,dword ptr [EDX + 0x10]
004db710  ADD EAX,0x64
004db713  PUSH EAX
004db714  MOV ECX,dword ptr [EBP + -0x6c]
004db717  MOV EDX,dword ptr [ECX + 0x20]
004db71a  MOV EAX,dword ptr [EBP + -0x6c]
004db71d  MOV ECX,dword ptr [EAX + 0x20]
004db720  MOV EDX,dword ptr [EDX]
004db722  MOV EAX,dword ptr [EDX + 0x44]
004db725  CALL EAX
004db727  JMP 0x004db762
004db729  PUSH 0x186a6
004db72e  MOV ECX,dword ptr [EBP + -0x6c]
004db731  MOV ECX,dword ptr [ECX + 0x20]
004db734  CALL 0x005eaf00
004db739  MOV EDX,dword ptr [EBP + -0x6c]
004db73c  MOV EAX,dword ptr [EDX + 0x14]
004db73f  ADD EAX,0x5a
004db742  PUSH EAX
004db743  MOV ECX,dword ptr [EBP + -0x6c]
004db746  MOV EDX,dword ptr [ECX + 0x10]
004db749  SUB EDX,0x61
004db74c  PUSH EDX
004db74d  MOV EAX,dword ptr [EBP + -0x6c]
004db750  MOV ECX,dword ptr [EAX + 0x20]
004db753  MOV EDX,dword ptr [EBP + -0x6c]
004db756  MOV EAX,dword ptr [EDX + 0x20]
004db759  MOV EDX,dword ptr [ECX]
004db75b  MOV ECX,EAX
004db75d  MOV EAX,dword ptr [EDX + 0x44]
004db760  CALL EAX
004db762  MOV ECX,dword ptr [EBP + -0x6c]
004db765  MOV EDX,dword ptr [ECX + 0x20]
004db768  MOV EAX,dword ptr [EBP + -0x6c]
004db76b  MOV ECX,dword ptr [EAX + 0x20]
004db76e  MOV EDX,dword ptr [EDX]
004db770  MOV EAX,dword ptr [EDX + 0x70]
004db773  CALL EAX
004db775  PUSH 0x190
004db77a  MOV ECX,dword ptr [EBP + -0x6c]
004db77d  MOV EDX,dword ptr [ECX + 0x20]
004db780  MOV EAX,dword ptr [EBP + -0x6c]
004db783  MOV ECX,dword ptr [EAX + 0x20]
004db786  MOV EDX,dword ptr [EDX]
004db788  MOV EAX,dword ptr [EDX + 0x6c]
004db78b  CALL EAX
004db78d  MOV ECX,dword ptr [EBP + -0x6c]
004db790  MOV EDX,dword ptr [ECX + 0x20]
004db793  MOV EAX,dword ptr [EBP + -0x6c]
004db796  MOV ECX,dword ptr [EAX + 0x20]
004db799  MOV EDX,dword ptr [EDX]
004db79b  MOV EAX,dword ptr [EDX + 0x40]
004db79e  CALL EAX
004db7a0  MOV ECX,dword ptr [EBP + -0x6c]
004db7a3  CMP dword ptr [ECX + 0x24],0x0
004db7a7  JNZ 0x004db8e6
004db7ad  PUSH 0x1d0
004db7b2  CALL 0x00686d82
004db7b7  ADD ESP,0x4
004db7ba  MOV dword ptr [EBP + -0x28],EAX
004db7bd  MOV dword ptr [EBP + -0x4],0x1
004db7c4  CMP dword ptr [EBP + -0x28],0x0
004db7c8  JZ 0x004db7d7
004db7ca  MOV ECX,dword ptr [EBP + -0x28]
004db7cd  CALL 0x005ec5a0
004db7d2  MOV dword ptr [EBP + -0x78],EAX
004db7d5  JMP 0x004db7de
004db7d7  MOV dword ptr [EBP + -0x78],0x0
004db7de  MOV EDX,dword ptr [EBP + -0x78]
004db7e1  MOV dword ptr [EBP + -0x24],EDX
004db7e4  MOV dword ptr [EBP + -0x4],0xffffffff
004db7eb  MOV EAX,dword ptr [EBP + -0x6c]
004db7ee  MOV ECX,dword ptr [EBP + -0x24]
004db7f1  MOV dword ptr [EAX + 0x24],ECX
004db7f4  PUSH ECX
004db7f5  MOV EDX,ESP
004db7f7  MOV AX,[0x0075ee1c]
004db7fd  MOV word ptr [EDX],AX
004db800  MOV CL,byte ptr [0x0075ee1e]
004db806  MOV byte ptr [EDX + 0x2],CL
004db809  PUSH -0x1
004db80b  PUSH 0x38
004db80d  MOV EDX,dword ptr [EBP + -0x6c]
004db810  MOV ECX,dword ptr [EDX + 0x24]
004db813  CALL 0x005ecd00
004db818  MOV EAX,dword ptr [EBP + -0x6c]
004db81b  MOV ECX,dword ptr [EAX + 0x20]
004db81e  MOV EDX,dword ptr [EBP + -0x6c]
004db821  MOV EAX,dword ptr [EDX + 0x20]
004db824  MOV EDX,dword ptr [ECX]
004db826  MOV ECX,EAX
004db828  MOV EAX,dword ptr [EDX + 0x54]
004db82b  CALL EAX
004db82d  ADD EAX,0x2
004db830  PUSH EAX
004db831  MOV ECX,dword ptr [EBP + -0x6c]
004db834  MOV EDX,dword ptr [ECX + 0x20]
004db837  MOV EAX,dword ptr [EBP + -0x6c]
004db83a  MOV ECX,dword ptr [EAX + 0x20]
004db83d  MOV EDX,dword ptr [EDX]
004db83f  MOV EAX,dword ptr [EDX + 0x4c]
004db842  CALL EAX
004db844  MOVZX ECX,byte ptr [EBP + -0x11]
004db848  NEG ECX
004db84a  SBB ECX,ECX
004db84c  AND ECX,0xa
004db84f  ADD ECX,-0x5
004db852  ADD EAX,ECX
004db854  PUSH EAX
004db855  MOV EDX,dword ptr [EBP + -0x6c]
004db858  MOV EAX,dword ptr [EDX + 0x24]
004db85b  MOV ECX,dword ptr [EBP + -0x6c]
004db85e  MOV ECX,dword ptr [ECX + 0x24]
004db861  MOV EDX,dword ptr [EAX]
004db863  MOV EAX,dword ptr [EDX + 0x44]
004db866  CALL EAX
004db868  PUSH 0x14
004db86a  MOV ECX,dword ptr [EBP + -0x6c]
004db86d  MOV ECX,dword ptr [ECX + 0x24]
004db870  CALL 0x005eccb0
004db875  PUSH 0x5e
004db877  MOV EDX,dword ptr [EBP + -0x6c]
004db87a  MOV ECX,dword ptr [EDX + 0x24]
004db87d  CALL 0x005ecc60
004db882  MOVZX EAX,byte ptr [EBP + -0x11]
004db886  NEG EAX
004db888  SBB EAX,EAX
004db88a  ADD EAX,0x2
004db88d  OR EAX,0x10
004db890  PUSH EAX
004db891  MOV ECX,dword ptr [EBP + -0x6c]
004db894  MOV ECX,dword ptr [ECX + 0x24]
004db897  CALL 0x005ef310
004db89c  MOV EDX,dword ptr [EBP + -0x6c]
004db89f  MOV ECX,dword ptr [EDX + 0x20]
004db8a2  CALL 0x005f53c0
004db8a7  ADD EAX,0x1
004db8aa  PUSH EAX
004db8ab  MOV EAX,dword ptr [EBP + -0x6c]
004db8ae  MOV ECX,dword ptr [EAX + 0x24]
004db8b1  MOV EDX,dword ptr [EBP + -0x6c]
004db8b4  MOV EAX,dword ptr [EDX + 0x24]
004db8b7  MOV EDX,dword ptr [ECX]
004db8b9  MOV ECX,EAX
004db8bb  MOV EAX,dword ptr [EDX + 0x6c]
004db8be  CALL EAX
004db8c0  MOV ECX,dword ptr [EBP + -0x6c]
004db8c3  MOV EDX,dword ptr [ECX + 0x24]
004db8c6  MOV EAX,dword ptr [EBP + -0x6c]
004db8c9  MOV ECX,dword ptr [EAX + 0x24]
004db8cc  MOV EDX,dword ptr [EDX]
004db8ce  MOV EAX,dword ptr [EDX + 0x70]
004db8d1  CALL EAX
004db8d3  MOV ECX,dword ptr [EBP + -0x6c]
004db8d6  MOV EDX,dword ptr [ECX + 0x24]
004db8d9  MOV EAX,dword ptr [EBP + -0x6c]
004db8dc  MOV ECX,dword ptr [EAX + 0x24]
004db8df  MOV EDX,dword ptr [EDX]
004db8e1  MOV EAX,dword ptr [EDX + 0x40]
004db8e4  CALL EAX
004db8e6  MOV ECX,dword ptr [EBP + -0x6c]
004db8e9  CMP dword ptr [ECX + 0x2c],0x0
004db8ed  JNZ 0x004dba20
004db8f3  PUSH 0x1d0
004db8f8  CALL 0x00686d82
004db8fd  ADD ESP,0x4
004db900  MOV dword ptr [EBP + -0x30],EAX
004db903  MOV dword ptr [EBP + -0x4],0x2
004db90a  CMP dword ptr [EBP + -0x30],0x0
004db90e  JZ 0x004db91d
004db910  MOV ECX,dword ptr [EBP + -0x30]
004db913  CALL 0x005ec5a0
004db918  MOV dword ptr [EBP + -0x7c],EAX
004db91b  JMP 0x004db924
004db91d  MOV dword ptr [EBP + -0x7c],0x0
004db924  MOV EDX,dword ptr [EBP + -0x7c]
004db927  MOV dword ptr [EBP + -0x2c],EDX
004db92a  MOV dword ptr [EBP + -0x4],0xffffffff
004db931  MOV EAX,dword ptr [EBP + -0x6c]
004db934  MOV ECX,dword ptr [EBP + -0x2c]
004db937  MOV dword ptr [EAX + 0x2c],ECX
004db93a  PUSH ECX
004db93b  MOV EDX,ESP
004db93d  MOV AX,[0x0075ee1c]
004db943  MOV word ptr [EDX],AX
004db946  MOV CL,byte ptr [0x0075ee1e]
004db94c  MOV byte ptr [EDX + 0x2],CL
004db94f  PUSH -0x1
004db951  PUSH 0x38
004db953  MOV EDX,dword ptr [EBP + -0x6c]
004db956  MOV ECX,dword ptr [EDX + 0x2c]
004db959  CALL 0x005ecd00
004db95e  MOV EAX,dword ptr [EBP + -0x6c]
004db961  MOV ECX,dword ptr [EAX + 0x20]
004db964  MOV EDX,dword ptr [EBP + -0x6c]
004db967  MOV EAX,dword ptr [EDX + 0x20]
004db96a  MOV EDX,dword ptr [ECX]
004db96c  MOV ECX,EAX
004db96e  MOV EAX,dword ptr [EDX + 0x54]
004db971  CALL EAX
004db973  ADD EAX,0x14
004db976  PUSH EAX
004db977  MOV ECX,dword ptr [EBP + -0x6c]
004db97a  MOV EDX,dword ptr [ECX + 0x20]
004db97d  MOV EAX,dword ptr [EBP + -0x6c]
004db980  MOV ECX,dword ptr [EAX + 0x20]
004db983  MOV EDX,dword ptr [EDX]
004db985  MOV EAX,dword ptr [EDX + 0x4c]
004db988  CALL EAX
004db98a  MOVZX ECX,byte ptr [EBP + -0x11]
004db98e  NEG ECX
004db990  SBB ECX,ECX
004db992  AND ECX,0xa
004db995  ADD ECX,-0x5
004db998  ADD EAX,ECX
004db99a  PUSH EAX
004db99b  MOV EDX,dword ptr [EBP + -0x6c]
004db99e  MOV EAX,dword ptr [EDX + 0x2c]
004db9a1  MOV ECX,dword ptr [EBP + -0x6c]
004db9a4  MOV ECX,dword ptr [ECX + 0x2c]
004db9a7  MOV EDX,dword ptr [EAX]
004db9a9  MOV EAX,dword ptr [EDX + 0x44]
004db9ac  CALL EAX
004db9ae  PUSH 0x14
004db9b0  MOV ECX,dword ptr [EBP + -0x6c]
004db9b3  MOV ECX,dword ptr [ECX + 0x2c]
004db9b6  CALL 0x005eccb0
004db9bb  PUSH 0x5e
004db9bd  MOV EDX,dword ptr [EBP + -0x6c]
004db9c0  MOV ECX,dword ptr [EDX + 0x2c]
004db9c3  CALL 0x005ecc60
004db9c8  MOVZX EAX,byte ptr [EBP + -0x11]
004db9cc  NEG EAX
004db9ce  SBB EAX,EAX
004db9d0  ADD EAX,0x2
004db9d3  OR EAX,0x10
004db9d6  PUSH EAX
004db9d7  MOV ECX,dword ptr [EBP + -0x6c]
004db9da  MOV ECX,dword ptr [ECX + 0x2c]
004db9dd  CALL 0x005ef310
004db9e2  PUSH 0x191
004db9e7  MOV EDX,dword ptr [EBP + -0x6c]
004db9ea  MOV EAX,dword ptr [EDX + 0x2c]
004db9ed  MOV ECX,dword ptr [EBP + -0x6c]
004db9f0  MOV ECX,dword ptr [ECX + 0x2c]
004db9f3  MOV EDX,dword ptr [EAX]
004db9f5  MOV EAX,dword ptr [EDX + 0x6c]
004db9f8  CALL EAX
004db9fa  MOV ECX,dword ptr [EBP + -0x6c]
004db9fd  MOV EDX,dword ptr [ECX + 0x2c]
004dba00  MOV EAX,dword ptr [EBP + -0x6c]
004dba03  MOV ECX,dword ptr [EAX + 0x2c]
004dba06  MOV EDX,dword ptr [EDX]
004dba08  MOV EAX,dword ptr [EDX + 0x70]
004dba0b  CALL EAX
004dba0d  MOV ECX,dword ptr [EBP + -0x6c]
004dba10  MOV EDX,dword ptr [ECX + 0x2c]
004dba13  MOV EAX,dword ptr [EBP + -0x6c]
004dba16  MOV ECX,dword ptr [EAX + 0x2c]
004dba19  MOV EDX,dword ptr [EDX]
004dba1b  MOV EAX,dword ptr [EDX + 0x40]
004dba1e  CALL EAX
004dba20  MOVZX ECX,byte ptr [EBP + -0x11]
004dba24  TEST ECX,ECX
004dba26  JZ 0x004dbaac
004dba2c  MOV EDX,dword ptr [EBP + -0x6c]
004dba2f  MOV EAX,dword ptr [EDX + 0x4]
004dba32  PUSH EAX
004dba33  CALL 0x005dcb00
004dba38  ADD ESP,0x4
004dba3b  MOV dword ptr [EBP + -0x4c],EAX
004dba3e  MOV ECX,dword ptr [EBP + -0x4c]
004dba41  MOV EDX,dword ptr [ECX + 0x20]
004dba44  MOV dword ptr [EBP + -0x50],EDX
004dba47  MOV ECX,dword ptr [EBP + -0x50]
004dba4a  CALL 0x00646f80
004dba4f  MOV dword ptr [EBP + -0x80],EAX
004dba52  MOV EAX,dword ptr [EBP + -0x80]
004dba55  MOV EDX,dword ptr [EAX]
004dba57  MOV ECX,dword ptr [EBP + -0x80]
004dba5a  MOV EAX,dword ptr [EDX + 0x4c]
004dba5d  CALL EAX
004dba5f  ADD EAX,0x64
004dba62  MOV dword ptr [EBP + -0x18],EAX
004dba65  MOV ECX,dword ptr [EBP + -0x6c]
004dba68  MOV EDX,dword ptr [ECX + 0x4]
004dba6b  PUSH EDX
004dba6c  CALL 0x005dcb00
004dba71  ADD ESP,0x4
004dba74  MOV dword ptr [EBP + -0x54],EAX
004dba77  MOV EAX,dword ptr [EBP + -0x54]
004dba7a  MOV ECX,dword ptr [EAX + 0x20]
004dba7d  MOV dword ptr [EBP + -0x58],ECX
004dba80  MOV ECX,dword ptr [EBP + -0x58]
004dba83  CALL 0x00646f80
004dba88  MOV dword ptr [EBP + 0xffffff7c],EAX
004dba8e  MOV EDX,dword ptr [EBP + 0xffffff7c]
004dba94  MOV EAX,dword ptr [EDX]
004dba96  MOV ECX,dword ptr [EBP + 0xffffff7c]
004dba9c  MOV EDX,dword ptr [EAX + 0x54]
004dba9f  CALL EDX
004dbaa1  SUB EAX,0x5
004dbaa4  MOV dword ptr [EBP + -0x10],EAX
004dbaa7  JMP 0x004dbb2d
004dbaac  MOV EAX,dword ptr [EBP + -0x6c]
004dbaaf  MOV ECX,dword ptr [EAX + 0x4]
004dbab2  PUSH ECX
004dbab3  CALL 0x005dcb00
004dbab8  ADD ESP,0x4
004dbabb  MOV dword ptr [EBP + -0x5c],EAX
004dbabe  MOV EDX,dword ptr [EBP + -0x5c]
004dbac1  MOV EAX,dword ptr [EDX + 0x20]
004dbac4  MOV dword ptr [EBP + -0x60],EAX
004dbac7  MOV ECX,dword ptr [EBP + -0x60]
004dbaca  CALL 0x00646f80
004dbacf  MOV dword ptr [EBP + 0xffffff78],EAX
004dbad5  MOV ECX,dword ptr [EBP + 0xffffff78]
004dbadb  MOV EDX,dword ptr [ECX]
004dbadd  MOV ECX,dword ptr [EBP + 0xffffff78]
004dbae3  MOV EAX,dword ptr [EDX + 0x4c]
004dbae6  CALL EAX
004dbae8  MOV dword ptr [EBP + -0x18],EAX
004dbaeb  MOV ECX,dword ptr [EBP + -0x6c]
004dbaee  MOV EDX,dword ptr [ECX + 0x4]
004dbaf1  PUSH EDX
004dbaf2  CALL 0x005dcb00
004dbaf7  ADD ESP,0x4
004dbafa  MOV dword ptr [EBP + -0x64],EAX
004dbafd  MOV EAX,dword ptr [EBP + -0x64]
004dbb00  MOV ECX,dword ptr [EAX + 0x20]
004dbb03  MOV dword ptr [EBP + -0x68],ECX
004dbb06  MOV ECX,dword ptr [EBP + -0x68]
004dbb09  CALL 0x00646f80
004dbb0e  MOV dword ptr [EBP + 0xffffff74],EAX
004dbb14  MOV EDX,dword ptr [EBP + 0xffffff74]
004dbb1a  MOV EAX,dword ptr [EDX]
004dbb1c  MOV ECX,dword ptr [EBP + 0xffffff74]
004dbb22  MOV EDX,dword ptr [EAX + 0x54]
004dbb25  CALL EDX
004dbb27  SUB EAX,0x5
004dbb2a  MOV dword ptr [EBP + -0x10],EAX
004dbb2d  MOV EAX,dword ptr [EBP + -0x6c]
004dbb30  CMP dword ptr [EAX + 0x30],0x0
004dbb34  JNZ 0x004dbbf3
004dbb3a  PUSH 0x178
004dbb3f  CALL 0x00686d82
004dbb44  ADD ESP,0x4
004dbb47  MOV dword ptr [EBP + -0x38],EAX
004dbb4a  MOV dword ptr [EBP + -0x4],0x3
004dbb51  CMP dword ptr [EBP + -0x38],0x0
004dbb55  JZ 0x004dbb67
004dbb57  MOV ECX,dword ptr [EBP + -0x38]
004dbb5a  CALL 0x005eaaf0
004dbb5f  MOV dword ptr [EBP + 0xffffff70],EAX
004dbb65  JMP 0x004dbb71
004dbb67  MOV dword ptr [EBP + 0xffffff70],0x0
004dbb71  MOV ECX,dword ptr [EBP + 0xffffff70]
004dbb77  MOV dword ptr [EBP + -0x34],ECX
004dbb7a  MOV dword ptr [EBP + -0x4],0xffffffff
004dbb81  MOV EDX,dword ptr [EBP + -0x6c]
004dbb84  MOV EAX,dword ptr [EBP + -0x34]
004dbb87  MOV dword ptr [EDX + 0x30],EAX
004dbb8a  PUSH 0x186aa
004dbb8f  MOV ECX,dword ptr [EBP + -0x6c]
004dbb92  MOV ECX,dword ptr [ECX + 0x30]
004dbb95  CALL 0x005eaf00
004dbb9a  MOV EDX,dword ptr [EBP + -0x10]
004dbb9d  PUSH EDX
004dbb9e  MOV EAX,dword ptr [EBP + -0x18]
004dbba1  PUSH EAX
004dbba2  MOV ECX,dword ptr [EBP + -0x6c]
004dbba5  MOV EDX,dword ptr [ECX + 0x30]
004dbba8  MOV EAX,dword ptr [EBP + -0x6c]
004dbbab  MOV ECX,dword ptr [EAX + 0x30]
004dbbae  MOV EDX,dword ptr [EDX]
004dbbb0  MOV EAX,dword ptr [EDX + 0x44]
004dbbb3  CALL EAX
004dbbb5  MOV ECX,dword ptr [EBP + -0x6c]
004dbbb8  MOV EDX,dword ptr [ECX + 0x30]
004dbbbb  MOV EAX,dword ptr [EBP + -0x6c]
004dbbbe  MOV ECX,dword ptr [EAX + 0x30]
004dbbc1  MOV EDX,dword ptr [EDX]
004dbbc3  MOV EAX,dword ptr [EDX + 0x70]
004dbbc6  CALL EAX
004dbbc8  PUSH 0x1f4
004dbbcd  MOV ECX,dword ptr [EBP + -0x6c]
004dbbd0  MOV EDX,dword ptr [ECX + 0x30]
004dbbd3  MOV EAX,dword ptr [EBP + -0x6c]
004dbbd6  MOV ECX,dword ptr [EAX + 0x30]
004dbbd9  MOV EDX,dword ptr [EDX]
004dbbdb  MOV EAX,dword ptr [EDX + 0x6c]
004dbbde  CALL EAX
004dbbe0  MOV ECX,dword ptr [EBP + -0x6c]
004dbbe3  MOV EDX,dword ptr [ECX + 0x30]
004dbbe6  MOV EAX,dword ptr [EBP + -0x6c]
004dbbe9  MOV ECX,dword ptr [EAX + 0x30]
004dbbec  MOV EDX,dword ptr [EDX]
004dbbee  MOV EAX,dword ptr [EDX + 0x40]
004dbbf1  CALL EAX
004dbbf3  MOV ECX,dword ptr [EBP + -0x6c]
004dbbf6  CMP dword ptr [ECX + 0x34],0x0
004dbbfa  JNZ 0x004dbcca
004dbc00  PUSH 0x178
004dbc05  CALL 0x00686d82
004dbc0a  ADD ESP,0x4
004dbc0d  MOV dword ptr [EBP + -0x40],EAX
004dbc10  MOV dword ptr [EBP + -0x4],0x4
004dbc17  CMP dword ptr [EBP + -0x40],0x0
004dbc1b  JZ 0x004dbc2d
004dbc1d  MOV ECX,dword ptr [EBP + -0x40]
004dbc20  CALL 0x005eaaf0
004dbc25  MOV dword ptr [EBP + 0xffffff6c],EAX
004dbc2b  JMP 0x004dbc37
004dbc2d  MOV dword ptr [EBP + 0xffffff6c],0x0
004dbc37  MOV EDX,dword ptr [EBP + 0xffffff6c]
004dbc3d  MOV dword ptr [EBP + -0x3c],EDX
004dbc40  MOV dword ptr [EBP + -0x4],0xffffffff
004dbc47  MOV EAX,dword ptr [EBP + -0x6c]
004dbc4a  MOV ECX,dword ptr [EBP + -0x3c]
004dbc4d  MOV dword ptr [EAX + 0x34],ECX
004dbc50  PUSH 0x186a9
004dbc55  MOV EDX,dword ptr [EBP + -0x6c]
004dbc58  MOV ECX,dword ptr [EDX + 0x34]
004dbc5b  CALL 0x005eaf00
004dbc60  MOV EAX,dword ptr [EBP + -0x10]
004dbc63  ADD EAX,0x21
004dbc66  PUSH EAX
004dbc67  MOVZX ECX,byte ptr [EBP + -0x11]
004dbc6b  NEG ECX
004dbc6d  SBB ECX,ECX
004dbc6f  AND ECX,0xfffffffa
004dbc72  ADD ECX,0x4
004dbc75  ADD ECX,dword ptr [EBP + -0x18]
004dbc78  PUSH ECX
004dbc79  MOV EDX,dword ptr [EBP + -0x6c]
004dbc7c  MOV EAX,dword ptr [EDX + 0x34]
004dbc7f  MOV ECX,dword ptr [EBP + -0x6c]
004dbc82  MOV ECX,dword ptr [ECX + 0x34]
004dbc85  MOV EDX,dword ptr [EAX]
004dbc87  MOV EAX,dword ptr [EDX + 0x44]
004dbc8a  CALL EAX
004dbc8c  MOV ECX,dword ptr [EBP + -0x6c]
004dbc8f  MOV EDX,dword ptr [ECX + 0x34]
004dbc92  MOV EAX,dword ptr [EBP + -0x6c]
004dbc95  MOV ECX,dword ptr [EAX + 0x34]
004dbc98  MOV EDX,dword ptr [EDX]
004dbc9a  MOV EAX,dword ptr [EDX + 0x70]
004dbc9d  CALL EAX
004dbc9f  PUSH 0x1f4
004dbca4  MOV ECX,dword ptr [EBP + -0x6c]
004dbca7  MOV EDX,dword ptr [ECX + 0x34]
004dbcaa  MOV EAX,dword ptr [EBP + -0x6c]
004dbcad  MOV ECX,dword ptr [EAX + 0x34]
004dbcb0  MOV EDX,dword ptr [EDX]
004dbcb2  MOV EAX,dword ptr [EDX + 0x6c]
004dbcb5  CALL EAX
004dbcb7  MOV ECX,dword ptr [EBP + -0x6c]
004dbcba  MOV EDX,dword ptr [ECX + 0x34]
004dbcbd  MOV EAX,dword ptr [EBP + -0x6c]
004dbcc0  MOV ECX,dword ptr [EAX + 0x34]
004dbcc3  MOV EDX,dword ptr [EDX]
004dbcc5  MOV EAX,dword ptr [EDX + 0x40]
004dbcc8  CALL EAX
004dbcca  MOV ECX,dword ptr [EBP + -0x6c]
004dbccd  CMP dword ptr [ECX + 0x38],0x0
004dbcd1  JNZ 0x004dbda1
004dbcd7  PUSH 0x178
004dbcdc  CALL 0x00686d82
004dbce1  ADD ESP,0x4
004dbce4  MOV dword ptr [EBP + -0x48],EAX
004dbce7  MOV dword ptr [EBP + -0x4],0x5
004dbcee  CMP dword ptr [EBP + -0x48],0x0
004dbcf2  JZ 0x004dbd04
004dbcf4  MOV ECX,dword ptr [EBP + -0x48]
004dbcf7  CALL 0x005eaaf0
004dbcfc  MOV dword ptr [EBP + 0xffffff68],EAX
004dbd02  JMP 0x004dbd0e
004dbd04  MOV dword ptr [EBP + 0xffffff68],0x0
004dbd0e  MOV EDX,dword ptr [EBP + 0xffffff68]
004dbd14  MOV dword ptr [EBP + -0x44],EDX
004dbd17  MOV dword ptr [EBP + -0x4],0xffffffff
004dbd1e  MOV EAX,dword ptr [EBP + -0x6c]
004dbd21  MOV ECX,dword ptr [EBP + -0x44]
004dbd24  MOV dword ptr [EAX + 0x38],ECX
004dbd27  PUSH 0x186a8
004dbd2c  MOV EDX,dword ptr [EBP + -0x6c]
004dbd2f  MOV ECX,dword ptr [EDX + 0x38]
004dbd32  CALL 0x005eaf00
004dbd37  MOV EAX,dword ptr [EBP + -0x10]
004dbd3a  ADD EAX,0xe
004dbd3d  PUSH EAX
004dbd3e  MOVZX ECX,byte ptr [EBP + -0x11]
004dbd42  NEG ECX
004dbd44  SBB ECX,ECX
004dbd46  AND ECX,0xfffffffa
004dbd49  ADD ECX,0x4
004dbd4c  ADD ECX,dword ptr [EBP + -0x18]
004dbd4f  PUSH ECX
004dbd50  MOV EDX,dword ptr [EBP + -0x6c]
004dbd53  MOV EAX,dword ptr [EDX + 0x38]
004dbd56  MOV ECX,dword ptr [EBP + -0x6c]
004dbd59  MOV ECX,dword ptr [ECX + 0x38]
004dbd5c  MOV EDX,dword ptr [EAX]
004dbd5e  MOV EAX,dword ptr [EDX + 0x44]
004dbd61  CALL EAX
004dbd63  MOV ECX,dword ptr [EBP + -0x6c]
004dbd66  MOV EDX,dword ptr [ECX + 0x38]
004dbd69  MOV EAX,dword ptr [EBP + -0x6c]
004dbd6c  MOV ECX,dword ptr [EAX + 0x38]
004dbd6f  MOV EDX,dword ptr [EDX]
004dbd71  MOV EAX,dword ptr [EDX + 0x70]
004dbd74  CALL EAX
004dbd76  PUSH 0x1f4
004dbd7b  MOV ECX,dword ptr [EBP + -0x6c]
004dbd7e  MOV EDX,dword ptr [ECX + 0x38]
004dbd81  MOV EAX,dword ptr [EBP + -0x6c]
004dbd84  MOV ECX,dword ptr [EAX + 0x38]
004dbd87  MOV EDX,dword ptr [EDX]
004dbd89  MOV EAX,dword ptr [EDX + 0x6c]
004dbd8c  CALL EAX
004dbd8e  MOV ECX,dword ptr [EBP + -0x6c]
004dbd91  MOV EDX,dword ptr [ECX + 0x38]
004dbd94  MOV EAX,dword ptr [EBP + -0x6c]
004dbd97  MOV ECX,dword ptr [EAX + 0x38]
004dbd9a  MOV EDX,dword ptr [EDX]
004dbd9c  MOV EAX,dword ptr [EDX + 0x40]
004dbd9f  CALL EAX
004dbda1  MOV ECX,dword ptr [EBP + -0xc]
004dbda4  MOV dword ptr FS:[0x0],ECX
004dbdab  POP ECX
004dbdac  MOV ESP,EBP
004dbdae  POP EBP
004dbdaf  RET
