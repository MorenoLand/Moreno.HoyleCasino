; FUN_005fa3c0  005fa3c0
005fa3c0  PUSH EBP
005fa3c1  MOV EBP,ESP
005fa3c3  PUSH -0x1
005fa3c5  PUSH 0x6aa39a
005fa3ca  MOV EAX,FS:[0x0]
005fa3d0  PUSH EAX
005fa3d1  SUB ESP,0x20
005fa3d4  MOV EAX,[0x00781870]
005fa3d9  XOR EAX,EBP
005fa3db  PUSH EAX
005fa3dc  LEA EAX,[EBP + -0xc]
005fa3df  MOV FS:[0x0],EAX
005fa3e5  MOV dword ptr [EBP + -0x24],ECX
005fa3e8  CMP dword ptr [EBP + 0xc],0x0
005fa3ec  JNZ 0x005fa441
005fa3ee  MOV dword ptr [EBP + -0x10],0x0
005fa3f5  JMP 0x005fa400
005fa3f7  MOV EAX,dword ptr [EBP + -0x10]
005fa3fa  ADD EAX,0x1
005fa3fd  MOV dword ptr [EBP + -0x10],EAX
005fa400  MOV ECX,dword ptr [EBP + -0x24]
005fa403  ADD ECX,0x44
005fa406  CALL 0x0060c9a0
005fa40b  CMP dword ptr [EBP + -0x10],EAX
005fa40e  JGE 0x005fa441
005fa410  MOV ECX,dword ptr [EBP + -0x10]
005fa413  PUSH ECX
005fa414  MOV ECX,dword ptr [EBP + -0x24]
005fa417  ADD ECX,0x44
005fa41a  CALL 0x0060ca40
005fa41f  MOV ECX,EAX
005fa421  CALL 0x005f5400
005fa426  CMP EAX,dword ptr [EBP + 0x14]
005fa429  JNZ 0x005fa43f
005fa42b  MOV EDX,dword ptr [EBP + -0x10]
005fa42e  PUSH EDX
005fa42f  MOV ECX,dword ptr [EBP + -0x24]
005fa432  ADD ECX,0x44
005fa435  CALL 0x0060ca40
005fa43a  MOV dword ptr [EBP + 0xc],EAX
005fa43d  JMP 0x005fa441
005fa43f  JMP 0x005fa3f7
005fa441  MOV EAX,dword ptr [EBP + 0xc]
005fa444  PUSH EAX
005fa445  MOV ECX,dword ptr [EBP + -0x24]
005fa448  ADD ECX,0x44
005fa44b  CALL 0x0060c9e0
005fa450  MOVZX ECX,AL
005fa453  TEST ECX,ECX
005fa455  JNZ 0x005fa4f0
005fa45b  CMP dword ptr [EBP + 0xc],0x0
005fa45f  JNZ 0x005fa4ae
005fa461  PUSH 0x58
005fa463  CALL 0x00686d82
005fa468  ADD ESP,0x4
005fa46b  MOV dword ptr [EBP + -0x18],EAX
005fa46e  MOV dword ptr [EBP + -0x4],0x0
005fa475  CMP dword ptr [EBP + -0x18],0x0
005fa479  JZ 0x005fa494
005fa47b  MOV ECX,dword ptr [EBP + -0x18]
005fa47e  CALL 0x005ff8b0
005fa483  MOV EDX,dword ptr [EBP + -0x18]
005fa486  MOV dword ptr [EDX],0x6d6d54
005fa48c  MOV EAX,dword ptr [EBP + -0x18]
005fa48f  MOV dword ptr [EBP + -0x28],EAX
005fa492  JMP 0x005fa49b
005fa494  MOV dword ptr [EBP + -0x28],0x0
005fa49b  MOV ECX,dword ptr [EBP + -0x28]
005fa49e  MOV dword ptr [EBP + -0x14],ECX
005fa4a1  MOV dword ptr [EBP + -0x4],0xffffffff
005fa4a8  MOV EDX,dword ptr [EBP + -0x14]
005fa4ab  MOV dword ptr [EBP + 0xc],EDX
005fa4ae  MOV EAX,dword ptr [EBP + 0xc]
005fa4b1  PUSH EAX
005fa4b2  MOV ECX,dword ptr [EBP + -0x24]
005fa4b5  ADD ECX,0x44
005fa4b8  CALL 0x0060c840
005fa4bd  MOV ECX,dword ptr [EBP + 0xc]
005fa4c0  MOV EDX,dword ptr [EBP + -0x24]
005fa4c3  MOV dword ptr [ECX + 0x4],EDX
005fa4c6  MOV EAX,dword ptr [EBP + 0x14]
005fa4c9  PUSH EAX
005fa4ca  MOV ECX,dword ptr [EBP + 0xc]
005fa4cd  CALL 0x005f53e0
005fa4d2  MOV ECX,dword ptr [EBP + 0xc]
005fa4d5  MOV EDX,dword ptr [ECX]
005fa4d7  MOV ECX,dword ptr [EBP + 0xc]
005fa4da  MOV EAX,dword ptr [EDX + 0x40]
005fa4dd  CALL EAX
005fa4df  MOV ECX,dword ptr [EBP + 0x24]
005fa4e2  PUSH ECX
005fa4e3  MOV EDX,dword ptr [EBP + 0xc]
005fa4e6  MOV EAX,dword ptr [EDX]
005fa4e8  MOV ECX,dword ptr [EBP + 0xc]
005fa4eb  MOV EDX,dword ptr [EAX + 0x6c]
005fa4ee  CALL EDX
005fa4f0  CMP dword ptr [EBP + 0x8],0x0
005fa4f4  JNZ 0x005fa53a
005fa4f6  PUSH 0x220
005fa4fb  CALL 0x00686d82
005fa500  ADD ESP,0x4
005fa503  MOV dword ptr [EBP + -0x20],EAX
005fa506  MOV dword ptr [EBP + -0x4],0x1
005fa50d  CMP dword ptr [EBP + -0x20],0x0
005fa511  JZ 0x005fa520
005fa513  MOV ECX,dword ptr [EBP + -0x20]
005fa516  CALL 0x00625bf0
005fa51b  MOV dword ptr [EBP + -0x2c],EAX
005fa51e  JMP 0x005fa527
005fa520  MOV dword ptr [EBP + -0x2c],0x0
005fa527  MOV EAX,dword ptr [EBP + -0x2c]
005fa52a  MOV dword ptr [EBP + -0x1c],EAX
005fa52d  MOV dword ptr [EBP + -0x4],0xffffffff
005fa534  MOV ECX,dword ptr [EBP + -0x1c]
005fa537  MOV dword ptr [EBP + 0x8],ECX
005fa53a  MOV EDX,dword ptr [EBP + 0x8]
005fa53d  PUSH EDX
005fa53e  MOV ECX,dword ptr [EBP + 0xc]
005fa541  CALL 0x005ff8f0
005fa546  MOV EAX,dword ptr [EBP + 0x10]
005fa549  PUSH EAX
005fa54a  MOV ECX,dword ptr [EBP + 0x24]
005fa54d  PUSH ECX
005fa54e  MOV EDX,dword ptr [EBP + 0x20]
005fa551  PUSH EDX
005fa552  MOV EAX,dword ptr [EBP + 0x1c]
005fa555  PUSH EAX
005fa556  MOV ECX,dword ptr [EBP + 0x18]
005fa559  PUSH ECX
005fa55a  MOV ECX,dword ptr [EBP + 0x8]
005fa55d  CALL 0x005eae80
005fa562  CMP dword ptr [EBP + 0x28],0x0
005fa566  JZ 0x005fa584
005fa568  MOV EDX,dword ptr [EBP + 0x38]
005fa56b  PUSH EDX
005fa56c  MOV EAX,dword ptr [EBP + 0x34]
005fa56f  PUSH EAX
005fa570  MOV ECX,dword ptr [EBP + 0x30]
005fa573  PUSH ECX
005fa574  MOV EDX,dword ptr [EBP + 0x2c]
005fa577  PUSH EDX
005fa578  MOV EAX,dword ptr [EBP + 0x28]
005fa57b  PUSH EAX
005fa57c  MOV ECX,dword ptr [EBP + 0x8]
005fa57f  CALL 0x005ff4c0
005fa584  MOV ECX,dword ptr [EBP + 0x8]
005fa587  MOV EDX,dword ptr [ECX]
005fa589  MOV ECX,dword ptr [EBP + 0x8]
005fa58c  MOV EAX,dword ptr [EDX + 0x74]
005fa58f  CALL EAX
005fa591  MOV EAX,dword ptr [EBP + 0xc]
005fa594  MOV ECX,dword ptr [EBP + -0xc]
005fa597  MOV dword ptr FS:[0x0],ECX
005fa59e  POP ECX
005fa59f  MOV ESP,EBP
005fa5a1  POP EBP
005fa5a2  RET 0x34
