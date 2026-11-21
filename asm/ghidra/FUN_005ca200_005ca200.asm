; FUN_005ca200  005ca200
005ca200  PUSH EBP
005ca201  MOV EBP,ESP
005ca203  SUB ESP,0x2c
005ca206  MOV dword ptr [EBP + -0x24],ECX
005ca209  MOV EAX,dword ptr [EBP + -0x24]
005ca20c  CMP dword ptr [EAX + 0x20],0x0
005ca210  JZ 0x005ca225
005ca212  MOV ECX,dword ptr [EBP + -0x24]
005ca215  MOV EDX,dword ptr [ECX + 0x20]
005ca218  MOV EAX,dword ptr [EBP + -0x24]
005ca21b  MOV ECX,dword ptr [EAX + 0x20]
005ca21e  MOV EDX,dword ptr [EDX]
005ca220  MOV EAX,dword ptr [EDX + 0x74]
005ca223  CALL EAX
005ca225  MOV ECX,dword ptr [EBP + -0x24]
005ca228  CALL 0x005ca8b0
005ca22d  MOV dword ptr [EBP + -0x4],0x0
005ca234  JMP 0x005ca23f
005ca236  MOV ECX,dword ptr [EBP + -0x4]
005ca239  ADD ECX,0x1
005ca23c  MOV dword ptr [EBP + -0x4],ECX
005ca23f  CMP dword ptr [EBP + -0x4],0x4
005ca243  JGE 0x005ca272
005ca245  MOV EDX,dword ptr [EBP + -0x4]
005ca248  MOV EAX,dword ptr [EBP + -0x24]
005ca24b  CMP dword ptr [EAX + EDX*0x4 + 0x4],0x0
005ca250  JZ 0x005ca270
005ca252  MOV ECX,dword ptr [EBP + -0x4]
005ca255  MOV EDX,dword ptr [EBP + -0x24]
005ca258  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x4]
005ca25c  MOV ECX,dword ptr [EBP + -0x4]
005ca25f  MOV EDX,dword ptr [EBP + -0x24]
005ca262  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x4]
005ca266  MOV EAX,dword ptr [EAX]
005ca268  MOV EDX,dword ptr [EAX + 0xcc]
005ca26e  CALL EDX
005ca270  JMP 0x005ca236
005ca272  MOV EAX,dword ptr [EBP + -0x24]
005ca275  MOV ECX,dword ptr [EAX + 0x1c]
005ca278  MOV EDX,dword ptr [EBP + -0x24]
005ca27b  MOV EAX,dword ptr [EDX + 0x1c]
005ca27e  MOV EDX,dword ptr [ECX]
005ca280  MOV ECX,EAX
005ca282  MOV EAX,dword ptr [EDX + 0xcc]
005ca288  CALL EAX
005ca28a  MOV ECX,dword ptr [0x007947e4]
005ca290  MOV EDX,dword ptr [ECX]
005ca292  MOV ECX,dword ptr [0x007947e4]
005ca298  MOV EAX,dword ptr [EDX + 0x25c]
005ca29e  CALL EAX
005ca2a0  TEST EAX,EAX
005ca2a2  JZ 0x005ca3e0
005ca2a8  MOV ECX,dword ptr [0x007947e4]
005ca2ae  MOV EDX,dword ptr [ECX]
005ca2b0  MOV ECX,dword ptr [0x007947e4]
005ca2b6  MOV EAX,dword ptr [EDX + 0x25c]
005ca2bc  CALL EAX
005ca2be  MOV dword ptr [EBP + -0x20],EAX
005ca2c1  MOV ECX,dword ptr [EBP + -0x20]
005ca2c4  CALL 0x0063aac0
005ca2c9  MOV ECX,dword ptr [EAX]
005ca2cb  MOV dword ptr [EBP + -0x18],ECX
005ca2ce  CMP dword ptr [EBP + -0x18],0x2
005ca2d2  JZ 0x005ca2f0
005ca2d4  MOV ECX,dword ptr [EBP + -0x20]
005ca2d7  CALL 0x0063aac0
005ca2dc  MOV EDX,dword ptr [EAX]
005ca2de  MOV dword ptr [EBP + -0x1c],EDX
005ca2e1  CMP dword ptr [EBP + -0x1c],0x3
005ca2e5  JZ 0x005ca2f0
005ca2e7  MOV dword ptr [EBP + -0x28],0x0
005ca2ee  JMP 0x005ca2f7
005ca2f0  MOV dword ptr [EBP + -0x28],0x1
005ca2f7  MOVZX EAX,byte ptr [EBP + -0x28]
005ca2fb  TEST EAX,EAX
005ca2fd  JZ 0x005ca3e0
005ca303  MOV ECX,dword ptr [EBP + -0x24]
005ca306  CALL 0x005ca3f0
005ca30b  LEA ECX,[EBP + -0xc]
005ca30e  PUSH ECX
005ca30f  MOV EDX,dword ptr [0x007947e4]
005ca315  MOV EAX,dword ptr [EDX]
005ca317  MOV ECX,dword ptr [0x007947e4]
005ca31d  MOV EDX,dword ptr [EAX + 0x25c]
005ca323  CALL EDX
005ca325  MOV ECX,EAX
005ca327  CALL 0x005d5a90
005ca32c  MOV ECX,dword ptr [EAX + 0x4]
005ca32f  PUSH ECX
005ca330  MOV EDX,dword ptr [EAX]
005ca332  PUSH EDX
005ca333  MOV EAX,[0x007947e4]
005ca338  MOV EDX,dword ptr [EAX]
005ca33a  MOV ECX,dword ptr [0x007947e4]
005ca340  MOV EAX,dword ptr [EDX + 0x25c]
005ca346  CALL EAX
005ca348  ADD EAX,0x4bc
005ca34d  MOV ECX,EAX
005ca34f  CALL 0x0064c6e0
005ca354  MOVZX ECX,AL
005ca357  TEST ECX,ECX
005ca359  JZ 0x005ca395
005ca35b  PUSH 0x0
005ca35d  PUSH 0x0
005ca35f  CALL 0x0064c8a0
005ca364  ADD ESP,0x8
005ca367  MOV dword ptr [EBP + -0x14],EAX
005ca36a  MOV dword ptr [EBP + -0x10],EDX
005ca36d  MOV EDX,dword ptr [0x007947e4]
005ca373  MOV EAX,dword ptr [EDX]
005ca375  MOV ECX,dword ptr [0x007947e4]
005ca37b  MOV EDX,dword ptr [EAX + 0x25c]
005ca381  CALL EDX
005ca383  MOV ECX,dword ptr [EBP + -0x14]
005ca386  MOV dword ptr [EAX + 0x4bc],ECX
005ca38c  MOV EDX,dword ptr [EBP + -0x10]
005ca38f  MOV dword ptr [EAX + 0x4c0],EDX
005ca395  MOV EAX,[0x007947e4]
005ca39a  MOV EDX,dword ptr [EAX]
005ca39c  MOV ECX,dword ptr [0x007947e4]
005ca3a2  MOV EAX,dword ptr [EDX + 0x25c]
005ca3a8  CALL EAX
005ca3aa  MOV dword ptr [EBP + -0x2c],EAX
005ca3ad  PUSH 0x0
005ca3af  MOV ECX,dword ptr [0x007947e4]
005ca3b5  MOV EDX,dword ptr [ECX]
005ca3b7  MOV ECX,dword ptr [0x007947e4]
005ca3bd  MOV EAX,dword ptr [EDX + 0x25c]
005ca3c3  CALL EAX
005ca3c5  MOV ECX,dword ptr [EAX + 0x4c0]
005ca3cb  PUSH ECX
005ca3cc  MOV EDX,dword ptr [EAX + 0x4bc]
005ca3d2  PUSH EDX
005ca3d3  MOV EAX,dword ptr [EBP + -0x2c]
005ca3d6  MOV EDX,dword ptr [EAX]
005ca3d8  MOV ECX,dword ptr [EBP + -0x2c]
005ca3db  MOV EAX,dword ptr [EDX + 0xc]
005ca3de  CALL EAX
005ca3e0  MOV ESP,EBP
005ca3e2  POP EBP
005ca3e3  RET
