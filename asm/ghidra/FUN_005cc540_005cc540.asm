; FUN_005cc540  005cc540
005cc540  PUSH EBP
005cc541  MOV EBP,ESP
005cc543  SUB ESP,0xb4
005cc549  PUSH ESI
005cc54a  PUSH EDI
005cc54b  MOV dword ptr [EBP + 0xffffff50],ECX
005cc551  MOV dword ptr [EBP + -0x6c],0x0
005cc558  MOV dword ptr [EBP + -0x68],0x5f5e100
005cc55f  MOV dword ptr [EBP + -0x64],0x989680
005cc566  MOV dword ptr [EBP + -0x60],0xf4240
005cc56d  MOV dword ptr [EBP + -0x5c],0x7a120
005cc574  MOV dword ptr [EBP + -0x58],0x186a0
005cc57b  MOV dword ptr [EBP + -0x54],0xc350
005cc582  MOV dword ptr [EBP + -0x50],0x61a8
005cc589  MOV dword ptr [EBP + -0x4c],0x2710
005cc590  MOV dword ptr [EBP + -0x48],0x1388
005cc597  MOV dword ptr [EBP + -0x44],0x3e8
005cc59e  MOV dword ptr [EBP + -0x40],0x1f4
005cc5a5  MOV dword ptr [EBP + -0x3c],0x64
005cc5ac  MOV dword ptr [EBP + -0x38],0x32
005cc5b3  MOV dword ptr [EBP + -0x34],0x19
005cc5ba  MOV dword ptr [EBP + -0x30],0xa
005cc5c1  MOV dword ptr [EBP + -0x2c],0x5
005cc5c8  MOV dword ptr [EBP + -0x28],0x1
005cc5cf  MOV dword ptr [EBP + -0x24],0x0
005cc5d6  MOV EAX,dword ptr [EBP + 0xc]
005cc5d9  PUSH EAX
005cc5da  MOV ECX,dword ptr [EBP + 0x8]
005cc5dd  PUSH ECX
005cc5de  LEA EDX,[EBP + -0x8]
005cc5e1  PUSH EDX
005cc5e2  MOV EAX,dword ptr [EBP + 0xffffff50]
005cc5e8  MOV EDX,dword ptr [EAX]
005cc5ea  MOV ECX,dword ptr [EBP + 0xffffff50]
005cc5f0  MOV EAX,dword ptr [EDX + 0xc8]
005cc5f6  CALL EAX
005cc5f8  MOV ECX,dword ptr [EBP + -0x8]
005cc5fb  MOV dword ptr [EBP + -0x14],ECX
005cc5fe  MOV DL,byte ptr [EBP + -0x4]
005cc601  MOV byte ptr [EBP + -0x15],DL
005cc604  MOV EAX,dword ptr [EBP + -0x6c]
005cc607  MOV ECX,dword ptr [EBP + EAX*0x4 + -0x68]
005cc60b  MOV dword ptr [EBP + -0x1c],ECX
005cc60e  MOV dword ptr [EBP + -0x70],0x0
005cc615  MOV dword ptr [EBP + -0x10],0x0
005cc61c  MOV EDX,dword ptr [EBP + 0xc]
005cc61f  PUSH EDX
005cc620  MOV EAX,dword ptr [EBP + 0x8]
005cc623  PUSH EAX
005cc624  MOV ECX,dword ptr [EBP + 0xffffff50]
005cc62a  MOV EDX,dword ptr [ECX]
005cc62c  MOV ECX,dword ptr [EBP + 0xffffff50]
005cc632  MOV EAX,dword ptr [EDX + 0xc0]
005cc638  CALL EAX
005cc63a  CMP dword ptr [EBP + -0x14],0x0
005cc63e  JNZ 0x005cc645
005cc640  JMP 0x005cca46
005cc645  MOV ECX,dword ptr [EBP + 0x8]
005cc648  PUSH ECX
005cc649  MOV EDX,dword ptr [0x007947e4]
005cc64f  MOV EAX,dword ptr [EDX]
005cc651  MOV ECX,dword ptr [0x007947e4]
005cc657  MOV EDX,dword ptr [EAX + 0x2c4]
005cc65d  CALL EDX
005cc65f  MOVZX EAX,AL
005cc662  TEST EAX,EAX
005cc664  JZ 0x005cc66b
005cc666  JMP 0x005cca46
005cc66b  CMP dword ptr [EBP + -0x1c],0x0
005cc66f  JLE 0x005cc6f7
005cc675  MOV EAX,dword ptr [EBP + -0x14]
005cc678  CDQ
005cc679  IDIV dword ptr [EBP + -0x1c]
005cc67c  MOV dword ptr [EBP + -0x70],EAX
005cc67f  MOV EAX,dword ptr [EBP + -0x14]
005cc682  CDQ
005cc683  IDIV dword ptr [EBP + -0x1c]
005cc686  MOV dword ptr [EBP + -0x14],EDX
005cc689  MOV dword ptr [EBP + -0xc],0x0
005cc690  JMP 0x005cc69b
005cc692  MOV ECX,dword ptr [EBP + -0xc]
005cc695  ADD ECX,0x1
005cc698  MOV dword ptr [EBP + -0xc],ECX
005cc69b  MOV EDX,dword ptr [EBP + -0xc]
005cc69e  CMP EDX,dword ptr [EBP + -0x70]
005cc6a1  JGE 0x005cc6df
005cc6a3  MOV EAX,dword ptr [EBP + -0x6c]
005cc6a6  PUSH EAX
005cc6a7  MOV ECX,dword ptr [EBP + -0x10]
005cc6aa  PUSH ECX
005cc6ab  MOV EDX,dword ptr [EBP + 0xc]
005cc6ae  PUSH EDX
005cc6af  MOV EAX,dword ptr [EBP + 0x8]
005cc6b2  PUSH EAX
005cc6b3  MOV ECX,dword ptr [EBP + 0xffffff50]
005cc6b9  MOV EDX,dword ptr [ECX]
005cc6bb  MOV ECX,dword ptr [EBP + 0xffffff50]
005cc6c1  MOV EAX,dword ptr [EDX + 0xbc]
005cc6c7  CALL EAX
005cc6c9  MOV ECX,dword ptr [EBP + -0x10]
005cc6cc  ADD ECX,0x1
005cc6cf  MOV dword ptr [EBP + -0x10],ECX
005cc6d2  CMP dword ptr [EBP + -0x10],0x1e
005cc6d6  JNZ 0x005cc6dd
005cc6d8  JMP 0x005cca46
005cc6dd  JMP 0x005cc692
005cc6df  MOV EDX,dword ptr [EBP + -0x6c]
005cc6e2  ADD EDX,0x1
005cc6e5  MOV dword ptr [EBP + -0x6c],EDX
005cc6e8  MOV EAX,dword ptr [EBP + -0x6c]
005cc6eb  MOV ECX,dword ptr [EBP + EAX*0x4 + -0x68]
005cc6ef  MOV dword ptr [EBP + -0x1c],ECX
005cc6f2  JMP 0x005cc66b
005cc6f7  CMP dword ptr [EBP + -0x10],0x2
005cc6fb  JNZ 0x005cca46
005cc701  MOV EDX,dword ptr [EBP + 0x8]
005cc704  IMUL EDX,EDX,0x1e0
005cc70a  MOV EAX,dword ptr [EBP + 0xffffff50]
005cc710  LEA ECX,[EAX + EDX*0x1 + 0x17c]
005cc717  MOV EDX,dword ptr [EBP + 0xc]
005cc71a  IMUL EDX,EDX,0x78
005cc71d  MOV EAX,dword ptr [ECX + EDX*0x1]
005cc720  MOV ECX,dword ptr [EBP + 0xc]
005cc723  IMUL ECX,ECX,0x78
005cc726  MOV EDX,dword ptr [EBP + 0x8]
005cc729  IMUL EDX,EDX,0x1e0
005cc72f  MOV ESI,dword ptr [EBP + 0xffffff50]
005cc735  LEA EDX,[ESI + EDX*0x1 + 0x17c]
005cc73c  MOV ECX,dword ptr [EDX + ECX*0x1]
005cc73f  MOV EAX,dword ptr [EAX]
005cc741  MOV EDX,dword ptr [EAX + 0x4c]
005cc744  CALL EDX
005cc746  MOV ESI,EAX
005cc748  MOV EAX,dword ptr [EBP + 0x8]
005cc74b  IMUL EAX,EAX,0x1e0
005cc751  MOV ECX,dword ptr [EBP + 0xffffff50]
005cc757  LEA EDX,[ECX + EAX*0x1 + 0x17c]
005cc75e  MOV EAX,dword ptr [EBP + 0xc]
005cc761  IMUL EAX,EAX,0x78
005cc764  MOV ECX,dword ptr [EDX + EAX*0x1 + 0x4]
005cc768  MOV EDX,dword ptr [EBP + 0xc]
005cc76b  IMUL EDX,EDX,0x78
005cc76e  MOV EAX,dword ptr [EBP + 0x8]
005cc771  IMUL EAX,EAX,0x1e0
005cc777  MOV EDI,dword ptr [EBP + 0xffffff50]
005cc77d  LEA EAX,[EDI + EAX*0x1 + 0x17c]
005cc784  MOV EDX,dword ptr [EAX + EDX*0x1 + 0x4]
005cc788  MOV EAX,dword ptr [ECX]
005cc78a  MOV ECX,EDX
005cc78c  MOV EDX,dword ptr [EAX + 0x4c]
005cc78f  CALL EDX
005cc791  CMP ESI,EAX
005cc793  JNZ 0x005cc83b
005cc799  MOV EAX,dword ptr [EBP + 0x8]
005cc79c  IMUL EAX,EAX,0x1e0
005cc7a2  MOV ECX,dword ptr [EBP + 0xffffff50]
005cc7a8  LEA EDX,[ECX + EAX*0x1 + 0x17c]
005cc7af  MOV EAX,dword ptr [EBP + 0xc]
005cc7b2  IMUL EAX,EAX,0x78
005cc7b5  MOV ECX,dword ptr [EDX + EAX*0x1]
005cc7b8  MOV EDX,dword ptr [EBP + 0xc]
005cc7bb  IMUL EDX,EDX,0x78
005cc7be  MOV EAX,dword ptr [EBP + 0x8]
005cc7c1  IMUL EAX,EAX,0x1e0
005cc7c7  MOV ESI,dword ptr [EBP + 0xffffff50]
005cc7cd  LEA EAX,[ESI + EAX*0x1 + 0x17c]
005cc7d4  MOV EDX,dword ptr [EAX + EDX*0x1]
005cc7d7  MOV EAX,dword ptr [ECX]
005cc7d9  MOV ECX,EDX
005cc7db  MOV EDX,dword ptr [EAX + 0x54]
005cc7de  CALL EDX
005cc7e0  MOV ESI,EAX
005cc7e2  MOV EAX,dword ptr [EBP + 0x8]
005cc7e5  IMUL EAX,EAX,0x1e0
005cc7eb  MOV ECX,dword ptr [EBP + 0xffffff50]
005cc7f1  LEA EDX,[ECX + EAX*0x1 + 0x17c]
005cc7f8  MOV EAX,dword ptr [EBP + 0xc]
005cc7fb  IMUL EAX,EAX,0x78
005cc7fe  MOV ECX,dword ptr [EDX + EAX*0x1 + 0x4]
005cc802  MOV EDX,dword ptr [EBP + 0xc]
005cc805  IMUL EDX,EDX,0x78
005cc808  MOV EAX,dword ptr [EBP + 0x8]
005cc80b  IMUL EAX,EAX,0x1e0
005cc811  MOV EDI,dword ptr [EBP + 0xffffff50]
005cc817  LEA EAX,[EDI + EAX*0x1 + 0x17c]
005cc81e  MOV EDX,dword ptr [EAX + EDX*0x1 + 0x4]
005cc822  MOV EAX,dword ptr [ECX]
005cc824  MOV ECX,EDX
005cc826  MOV EDX,dword ptr [EAX + 0x54]
005cc829  CALL EDX
005cc82b  CMP ESI,EAX
005cc82d  JNZ 0x005cc83b
005cc82f  MOV dword ptr [EBP + 0xffffff4c],0x1
005cc839  JMP 0x005cc845
005cc83b  MOV dword ptr [EBP + 0xffffff4c],0x0
005cc845  MOV AL,byte ptr [EBP + 0xffffff4c]
005cc84b  MOV byte ptr [EBP + -0x71],AL
005cc84e  MOVZX ECX,byte ptr [EBP + -0x71]
005cc852  TEST ECX,ECX
005cc854  JZ 0x005cca46
005cc85a  MOV EDX,dword ptr [EBP + 0x8]
005cc85d  IMUL EDX,EDX,0x1e0
005cc863  MOV EAX,dword ptr [EBP + 0xffffff50]
005cc869  LEA ECX,[EAX + EDX*0x1 + 0x17c]
005cc870  MOV EDX,dword ptr [EBP + 0xc]
005cc873  IMUL EDX,EDX,0x78
005cc876  MOV EAX,dword ptr [ECX + EDX*0x1]
005cc879  MOV ECX,dword ptr [EBP + 0xc]
005cc87c  IMUL ECX,ECX,0x78
005cc87f  MOV EDX,dword ptr [EBP + 0x8]
005cc882  IMUL EDX,EDX,0x1e0
005cc888  MOV ESI,dword ptr [EBP + 0xffffff50]
005cc88e  LEA EDX,[ESI + EDX*0x1 + 0x17c]
005cc895  MOV ECX,dword ptr [EDX + ECX*0x1]
005cc898  MOV EAX,dword ptr [EAX]
005cc89a  MOV EDX,dword ptr [EAX + 0x4c]
005cc89d  CALL EDX
005cc89f  MOV dword ptr [EBP + -0x80],EAX
005cc8a2  MOV EAX,dword ptr [EBP + 0x8]
005cc8a5  IMUL EAX,EAX,0x1e0
005cc8ab  MOV ECX,dword ptr [EBP + 0xffffff50]
005cc8b1  LEA EDX,[ECX + EAX*0x1 + 0x17c]
005cc8b8  MOV EAX,dword ptr [EBP + 0xc]
005cc8bb  IMUL EAX,EAX,0x78
005cc8be  MOV ECX,dword ptr [EDX + EAX*0x1]
005cc8c1  MOV EDX,dword ptr [EBP + 0xc]
005cc8c4  IMUL EDX,EDX,0x78
005cc8c7  MOV EAX,dword ptr [EBP + 0x8]
005cc8ca  IMUL EAX,EAX,0x1e0
005cc8d0  MOV ESI,dword ptr [EBP + 0xffffff50]
005cc8d6  LEA EAX,[ESI + EAX*0x1 + 0x17c]
005cc8dd  MOV EDX,dword ptr [EAX + EDX*0x1]
005cc8e0  MOV EAX,dword ptr [ECX]
005cc8e2  MOV ECX,EDX
005cc8e4  MOV EDX,dword ptr [EAX + 0x54]
005cc8e7  CALL EDX
005cc8e9  MOV dword ptr [EBP + -0x7c],EAX
005cc8ec  MOV dword ptr [EBP + 0xffffff54],0x0
005cc8f6  MOV dword ptr [EBP + 0xffffff58],0xfffffffc
005cc900  MOV dword ptr [EBP + 0xffffff5c],0x0
005cc90a  MOV dword ptr [EBP + 0xffffff60],0x4
005cc914  MOV dword ptr [EBP + 0xffffff64],0xfffffffc
005cc91e  MOV dword ptr [EBP + 0xffffff68],0x0
005cc928  MOV dword ptr [EBP + 0xffffff6c],0x4
005cc932  MOV dword ptr [EBP + 0xffffff70],0x0
005cc93c  PUSH 0x3
005cc93e  PUSH 0x0
005cc940  CALL 0x0062fc30
005cc945  ADD ESP,0x8
005cc948  MOV dword ptr [EBP + 0xffffff78],EAX
005cc94e  MOV EAX,dword ptr [EBP + 0xffffff78]
005cc954  MOV ECX,dword ptr [EBP + EAX*0x8 + 0xffffff54]
005cc95b  MOV dword ptr [EBP + 0xffffff74],ECX
005cc961  MOV EDX,dword ptr [EBP + 0xffffff78]
005cc967  MOV EAX,dword ptr [EBP + EDX*0x8 + 0xffffff58]
005cc96e  MOV dword ptr [EBP + -0x78],EAX
005cc971  PUSH 0x2
005cc973  CALL 0x0062fbf0
005cc978  ADD ESP,0x4
005cc97b  NEG EAX
005cc97d  SBB EAX,EAX
005cc97f  NEG EAX
005cc981  MOV dword ptr [EBP + 0xffffff7c],EAX
005cc987  MOV ECX,dword ptr [EBP + -0x80]
005cc98a  ADD ECX,dword ptr [EBP + 0xffffff74]
005cc990  PUSH ECX
005cc991  MOV EDX,dword ptr [EBP + 0x8]
005cc994  IMUL EDX,EDX,0x1e0
005cc99a  MOV EAX,dword ptr [EBP + 0xffffff50]
005cc9a0  LEA ECX,[EAX + EDX*0x1 + 0x17c]
005cc9a7  MOV EDX,dword ptr [EBP + 0xc]
005cc9aa  IMUL EDX,EDX,0x78
005cc9ad  ADD ECX,EDX
005cc9af  MOV EAX,dword ptr [EBP + 0xffffff7c]
005cc9b5  MOV ECX,dword ptr [ECX + EAX*0x4]
005cc9b8  MOV EDX,dword ptr [EBP + 0xc]
005cc9bb  IMUL EDX,EDX,0x78
005cc9be  MOV EAX,dword ptr [EBP + 0x8]
005cc9c1  IMUL EAX,EAX,0x1e0
005cc9c7  MOV ESI,dword ptr [EBP + 0xffffff50]
005cc9cd  LEA EAX,[ESI + EAX*0x1 + 0x17c]
005cc9d4  ADD EAX,EDX
005cc9d6  MOV EDX,dword ptr [EBP + 0xffffff7c]
005cc9dc  MOV EAX,dword ptr [EAX + EDX*0x4]
005cc9df  MOV EDX,dword ptr [ECX]
005cc9e1  MOV ECX,EAX
005cc9e3  MOV EAX,dword ptr [EDX + 0x48]
005cc9e6  CALL EAX
005cc9e8  MOV ECX,dword ptr [EBP + -0x7c]
005cc9eb  ADD ECX,dword ptr [EBP + -0x78]
005cc9ee  PUSH ECX
005cc9ef  MOV EDX,dword ptr [EBP + 0x8]
005cc9f2  IMUL EDX,EDX,0x1e0
005cc9f8  MOV EAX,dword ptr [EBP + 0xffffff50]
005cc9fe  LEA ECX,[EAX + EDX*0x1 + 0x17c]
005cca05  MOV EDX,dword ptr [EBP + 0xc]
005cca08  IMUL EDX,EDX,0x78
005cca0b  ADD ECX,EDX
005cca0d  MOV EAX,dword ptr [EBP + 0xffffff7c]
005cca13  MOV ECX,dword ptr [ECX + EAX*0x4]
005cca16  MOV EDX,dword ptr [EBP + 0xc]
005cca19  IMUL EDX,EDX,0x78
005cca1c  MOV EAX,dword ptr [EBP + 0x8]
005cca1f  IMUL EAX,EAX,0x1e0
005cca25  MOV ESI,dword ptr [EBP + 0xffffff50]
005cca2b  LEA EAX,[ESI + EAX*0x1 + 0x17c]
005cca32  ADD EAX,EDX
005cca34  MOV EDX,dword ptr [EBP + 0xffffff7c]
005cca3a  MOV EAX,dword ptr [EAX + EDX*0x4]
005cca3d  MOV EDX,dword ptr [ECX]
005cca3f  MOV ECX,EAX
005cca41  MOV EAX,dword ptr [EDX + 0x50]
005cca44  CALL EAX
005cca46  POP EDI
005cca47  POP ESI
005cca48  MOV ESP,EBP
005cca4a  POP EBP
005cca4b  RET 0x8
