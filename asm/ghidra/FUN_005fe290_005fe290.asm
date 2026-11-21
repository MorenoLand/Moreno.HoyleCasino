; FUN_005fe290  005fe290
005fe290  PUSH EBP
005fe291  MOV EBP,ESP
005fe293  PUSH -0x1
005fe295  PUSH 0x6aa707
005fe29a  MOV EAX,FS:[0x0]
005fe2a0  PUSH EAX
005fe2a1  SUB ESP,0x74
005fe2a4  MOV EAX,[0x00781870]
005fe2a9  XOR EAX,EBP
005fe2ab  MOV dword ptr [EBP + -0x14],EAX
005fe2ae  PUSH EAX
005fe2af  LEA EAX,[EBP + -0xc]
005fe2b2  MOV FS:[0x0],EAX
005fe2b8  MOV dword ptr [EBP + -0x70],ECX
005fe2bb  MOV dword ptr [EBP + -0x10],0x0
005fe2c2  CMP dword ptr [EBP + 0x8],0x0
005fe2c6  JZ 0x005fe2d0
005fe2c8  MOV EAX,dword ptr [EBP + 0x8]
005fe2cb  CMP dword ptr [EAX],-0x1
005fe2ce  JNZ 0x005fe2d7
005fe2d0  XOR AL,AL
005fe2d2  JMP 0x005fe618
005fe2d7  CMP dword ptr [EBP + 0xc],-0x1
005fe2db  JNZ 0x005fe2e8
005fe2dd  MOV ECX,dword ptr [EBP + -0x70]
005fe2e0  CALL 0x005fe7f0
005fe2e5  MOV dword ptr [EBP + 0xc],EAX
005fe2e8  PUSH 0x204
005fe2ed  CALL 0x00686d82
005fe2f2  ADD ESP,0x4
005fe2f5  MOV dword ptr [EBP + -0x5c],EAX
005fe2f8  MOV dword ptr [EBP + -0x4],0x0
005fe2ff  CMP dword ptr [EBP + -0x5c],0x0
005fe303  JZ 0x005fe31c
005fe305  MOV ECX,dword ptr [EBP + -0x70]
005fe308  PUSH ECX
005fe309  MOV EDX,dword ptr [EBP + 0x8]
005fe30c  MOV EAX,dword ptr [EDX]
005fe30e  PUSH EAX
005fe30f  MOV ECX,dword ptr [EBP + -0x5c]
005fe312  CALL 0x005fc850
005fe317  MOV dword ptr [EBP + -0x74],EAX
005fe31a  JMP 0x005fe323
005fe31c  MOV dword ptr [EBP + -0x74],0x0
005fe323  MOV ECX,dword ptr [EBP + -0x74]
005fe326  MOV dword ptr [EBP + -0x58],ECX
005fe329  MOV dword ptr [EBP + -0x4],0xffffffff
005fe330  PUSH 0x0
005fe332  PUSH -0x1
005fe334  MOV EDX,dword ptr [0x015e55e8]
005fe33a  MOV EAX,dword ptr [EDX]
005fe33c  MOV ECX,dword ptr [0x015e55e8]
005fe342  MOV EDX,dword ptr [EAX + 0x5c]
005fe345  CALL EDX
005fe347  PUSH EAX
005fe348  MOV EAX,[0x015e55e8]
005fe34d  MOV EDX,dword ptr [EAX]
005fe34f  MOV ECX,dword ptr [0x015e55e8]
005fe355  MOV EAX,dword ptr [EDX + 0x58]
005fe358  CALL EAX
005fe35a  PUSH EAX
005fe35b  MOV ECX,dword ptr [0x015e55e8]
005fe361  MOV EDX,dword ptr [ECX]
005fe363  MOV ECX,dword ptr [0x015e55e8]
005fe369  MOV EAX,dword ptr [EDX + 0x54]
005fe36c  CALL EAX
005fe36e  PUSH EAX
005fe36f  MOV ECX,dword ptr [EBP + 0x8]
005fe372  MOV EDX,dword ptr [ECX + 0x4]
005fe375  PUSH EDX
005fe376  MOV EAX,[0x015e55e8]
005fe37b  MOV EDX,dword ptr [EAX]
005fe37d  MOV ECX,dword ptr [0x015e55e8]
005fe383  MOV EAX,dword ptr [EDX + 0x14]
005fe386  CALL EAX
005fe388  PUSH EAX
005fe389  PUSH 0x1
005fe38b  PUSH 0x0
005fe38d  PUSH 0x0
005fe38f  MOV ECX,dword ptr [EBP + 0xc]
005fe392  PUSH ECX
005fe393  MOV EDX,dword ptr [EBP + 0x8]
005fe396  MOV EAX,dword ptr [EDX]
005fe398  PUSH EAX
005fe399  MOV ECX,dword ptr [EBP + -0x58]
005fe39c  PUSH ECX
005fe39d  MOV ECX,dword ptr [EBP + -0x70]
005fe3a0  CALL 0x005f9de0
005fe3a5  MOV dword ptr [EBP + -0x4c],EAX
005fe3a8  MOV EDX,dword ptr [EBP + 0x8]
005fe3ab  CMP dword ptr [EDX],-0x2
005fe3ae  JNZ 0x005fe3c2
005fe3b0  PUSH 0x6
005fe3b2  MOV EAX,dword ptr [EBP + -0x4c]
005fe3b5  MOV EDX,dword ptr [EAX]
005fe3b7  MOV ECX,dword ptr [EBP + -0x4c]
005fe3ba  MOV EAX,dword ptr [EDX + 0xb0]
005fe3c0  CALL EAX
005fe3c2  MOVZX ECX,byte ptr [EBP + 0x14]
005fe3c6  TEST ECX,ECX
005fe3c8  JZ 0x005fe46e
005fe3ce  MOV EDX,dword ptr [EBP + 0x8]
005fe3d1  CMP dword ptr [EDX + 0x8],-0x1
005fe3d5  JZ 0x005fe45d
005fe3db  PUSH 0x178
005fe3e0  CALL 0x00686d82
005fe3e5  ADD ESP,0x4
005fe3e8  MOV dword ptr [EBP + -0x64],EAX
005fe3eb  MOV dword ptr [EBP + -0x4],0x1
005fe3f2  CMP dword ptr [EBP + -0x64],0x0
005fe3f6  JZ 0x005fe405
005fe3f8  MOV ECX,dword ptr [EBP + -0x64]
005fe3fb  CALL 0x005eaaf0
005fe400  MOV dword ptr [EBP + -0x78],EAX
005fe403  JMP 0x005fe40c
005fe405  MOV dword ptr [EBP + -0x78],0x0
005fe40c  MOV EAX,dword ptr [EBP + -0x78]
005fe40f  MOV dword ptr [EBP + -0x60],EAX
005fe412  MOV dword ptr [EBP + -0x4],0xffffffff
005fe419  MOV ECX,dword ptr [EBP + -0x4c]
005fe41c  MOV EDX,dword ptr [EBP + -0x60]
005fe41f  MOV dword ptr [ECX + 0x1f4],EDX
005fe425  MOV EAX,dword ptr [EBP + -0x4c]
005fe428  MOV ECX,dword ptr [EAX + 0x1f4]
005fe42e  MOV EDX,dword ptr [EBP + -0x70]
005fe431  MOV dword ptr [ECX + 0x4],EDX
005fe434  PUSH -0x1
005fe436  PUSH 0x2
005fe438  PUSH 0x0
005fe43a  PUSH 0x0
005fe43c  MOV EAX,[0x015e55e8]
005fe441  MOV EDX,dword ptr [EAX]
005fe443  MOV ECX,dword ptr [0x015e55e8]
005fe449  MOV EAX,dword ptr [EDX + 0x60]
005fe44c  CALL EAX
005fe44e  PUSH EAX
005fe44f  MOV ECX,dword ptr [EBP + -0x4c]
005fe452  MOV ECX,dword ptr [ECX + 0x1f4]
005fe458  CALL 0x005eae80
005fe45d  MOV EDX,dword ptr [EBP + -0x4c]
005fe460  MOV EAX,dword ptr [EBP + 0x8]
005fe463  MOV ECX,dword ptr [EAX + 0x8]
005fe466  MOV dword ptr [EDX + 0x1ec],ECX
005fe46c  JMP 0x005fe47b
005fe46e  MOV EDX,dword ptr [EBP + -0x4c]
005fe471  MOV dword ptr [EDX + 0x1ec],0xffffffff
005fe47b  PUSH 0x0
005fe47d  PUSH 0xa
005fe47f  MOV EAX,dword ptr [EBP + -0x4c]
005fe482  MOV ECX,dword ptr [EAX + 0x190]
005fe488  CALL 0x005ef340
005fe48d  PUSH 0x11
005fe48f  MOV ECX,dword ptr [EBP + -0x4c]
005fe492  MOV ECX,dword ptr [ECX + 0x190]
005fe498  CALL 0x005ef310
005fe49d  MOV EDX,dword ptr [EBP + 0x8]
005fe4a0  MOVSX EAX,byte ptr [EDX + 0xc]
005fe4a4  TEST EAX,EAX
005fe4a6  JZ 0x005fe4c7
005fe4a8  LEA ECX,[EBP + -0x48]
005fe4ab  PUSH ECX
005fe4ac  MOV EDX,dword ptr [EBP + 0x8]
005fe4af  MOV AL,byte ptr [EDX + 0xc]
005fe4b2  PUSH EAX
005fe4b3  MOV ECX,dword ptr [EBP + -0x70]
005fe4b6  CALL 0x005fe770
005fe4bb  LEA ECX,[EBP + -0x48]
005fe4be  PUSH ECX
005fe4bf  MOV ECX,dword ptr [EBP + -0x4c]
005fe4c2  CALL 0x005fd730
005fe4c7  MOV EDX,dword ptr [EBP + 0x10]
005fe4ca  MOV dword ptr [EBP + -0x7c],EDX
005fe4cd  CMP dword ptr [EBP + -0x7c],-0x2
005fe4d1  JZ 0x005fe4fe
005fe4d3  CMP dword ptr [EBP + -0x7c],-0x1
005fe4d7  JZ 0x005fe4db
005fe4d9  JMP 0x005fe503
005fe4db  MOV EAX,dword ptr [EBP + -0x4c]
005fe4de  PUSH EAX
005fe4df  MOV ECX,dword ptr [EBP + -0x70]
005fe4e2  ADD ECX,0x14
005fe4e5  CALL 0x0060c890
005fe4ea  MOV ECX,dword ptr [EBP + -0x4c]
005fe4ed  PUSH ECX
005fe4ee  MOV ECX,dword ptr [EBP + -0x70]
005fe4f1  ADD ECX,0x14
005fe4f4  CALL 0x0060c7d0
005fe4f9  JMP 0x005fe5e7
005fe4fe  JMP 0x005fe5e7
005fe503  MOV dword ptr [EBP + -0x50],0xfffffffe
005fe50a  MOV EDX,dword ptr [EBP + 0x10]
005fe50d  PUSH EDX
005fe50e  CALL 0x00686eba
005fe513  ADD ESP,0x4
005fe516  PUSH EAX
005fe517  MOV ECX,dword ptr [EBP + -0x70]
005fe51a  CALL 0x005ff060
005fe51f  MOV dword ptr [EBP + -0x54],EAX
005fe522  CMP dword ptr [EBP + -0x54],0x0
005fe526  JZ 0x005fe549
005fe528  MOV EAX,dword ptr [EBP + -0x54]
005fe52b  PUSH EAX
005fe52c  MOV ECX,dword ptr [EBP + -0x70]
005fe52f  ADD ECX,0x14
005fe532  CALL 0x0060cac0
005fe537  MOV dword ptr [EBP + -0x50],EAX
005fe53a  CMP dword ptr [EBP + 0x10],0x0
005fe53e  JGE 0x005fe549
005fe540  MOV ECX,dword ptr [EBP + -0x50]
005fe543  SUB ECX,0x1
005fe546  MOV dword ptr [EBP + -0x50],ECX
005fe549  CMP dword ptr [EBP + -0x50],-0x1
005fe54d  JGE 0x005fe593
005fe54f  MOV EDX,dword ptr [EBP + -0x4c]
005fe552  PUSH EDX
005fe553  MOV ECX,dword ptr [EBP + -0x70]
005fe556  ADD ECX,0x14
005fe559  CALL 0x0060c890
005fe55e  MOV EAX,dword ptr [EBP + -0x4c]
005fe561  MOV dword ptr [EBP + -0x6c],EAX
005fe564  MOV ECX,dword ptr [EBP + -0x6c]
005fe567  MOV dword ptr [EBP + -0x68],ECX
005fe56a  CMP dword ptr [EBP + -0x68],0x0
005fe56e  JZ 0x005fe583
005fe570  PUSH 0x1
005fe572  MOV EDX,dword ptr [EBP + -0x68]
005fe575  MOV EAX,dword ptr [EDX]
005fe577  MOV ECX,dword ptr [EBP + -0x68]
005fe57a  MOV EDX,dword ptr [EAX]
005fe57c  CALL EDX
005fe57e  MOV dword ptr [EBP + -0x80],EAX
005fe581  JMP 0x005fe58a
005fe583  MOV dword ptr [EBP + -0x80],0x0
005fe58a  XOR AL,AL
005fe58c  JMP 0x005fe618
005fe593  CMP dword ptr [EBP + -0x50],-0x1
005fe597  JNZ 0x005fe5b9
005fe599  MOV EAX,dword ptr [EBP + -0x4c]
005fe59c  PUSH EAX
005fe59d  MOV ECX,dword ptr [EBP + -0x70]
005fe5a0  ADD ECX,0x14
005fe5a3  CALL 0x0060c890
005fe5a8  MOV ECX,dword ptr [EBP + -0x4c]
005fe5ab  PUSH ECX
005fe5ac  MOV ECX,dword ptr [EBP + -0x70]
005fe5af  ADD ECX,0x14
005fe5b2  CALL 0x0060c7d0
005fe5b7  JMP 0x005fe5e7
005fe5b9  MOV EDX,dword ptr [EBP + -0x4c]
005fe5bc  PUSH EDX
005fe5bd  MOV ECX,dword ptr [EBP + -0x70]
005fe5c0  ADD ECX,0x14
005fe5c3  CALL 0x0060c890
005fe5c8  MOV EAX,dword ptr [EBP + -0x4c]
005fe5cb  PUSH EAX
005fe5cc  MOV ECX,dword ptr [EBP + -0x50]
005fe5cf  PUSH ECX
005fe5d0  MOV ECX,dword ptr [EBP + -0x70]
005fe5d3  ADD ECX,0x14
005fe5d6  CALL 0x0060ca40
005fe5db  PUSH EAX
005fe5dc  MOV ECX,dword ptr [EBP + -0x70]
005fe5df  ADD ECX,0x14
005fe5e2  CALL 0x0060cb20
005fe5e7  MOVZX EDX,byte ptr [EBP + 0x14]
005fe5eb  TEST EDX,EDX
005fe5ed  JZ 0x005fe60e
005fe5ef  MOV EAX,dword ptr [EBP + 0x8]
005fe5f2  CMP dword ptr [EAX + 0x8],-0x1
005fe5f6  JZ 0x005fe60e
005fe5f8  PUSH 0x1
005fe5fa  PUSH 0x0
005fe5fc  MOV ECX,dword ptr [EBP + 0x8]
005fe5ff  MOV EDX,dword ptr [ECX + 0x8]
005fe602  PUSH EDX
005fe603  MOV ECX,dword ptr [0x015e55e4]
005fe609  CALL 0x005f2370
005fe60e  MOV ECX,dword ptr [EBP + -0x70]
005fe611  CALL 0x005fdd10
005fe616  MOV AL,0x1
005fe618  MOV ECX,dword ptr [EBP + -0xc]
005fe61b  MOV dword ptr FS:[0x0],ECX
005fe622  POP ECX
005fe623  MOV ECX,dword ptr [EBP + -0x14]
005fe626  XOR ECX,EBP
005fe628  CALL 0x00686d72
005fe62d  MOV ESP,EBP
005fe62f  POP EBP
005fe630  RET 0x10
