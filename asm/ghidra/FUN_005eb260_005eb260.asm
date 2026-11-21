; FUN_005eb260  005eb260
005eb260  PUSH EBP
005eb261  MOV EBP,ESP
005eb263  SUB ESP,0x8
005eb266  MOV dword ptr [EBP + -0x8],ECX
005eb269  MOV byte ptr [EBP + -0x1],0x0
005eb26d  MOV EAX,dword ptr [EBP + -0x8]
005eb270  MOV ECX,dword ptr [EAX + 0x154]
005eb276  CMP ECX,dword ptr [EBP + 0x8]
005eb279  JNZ 0x005eb289
005eb27b  MOV EDX,dword ptr [EBP + -0x8]
005eb27e  MOV EAX,dword ptr [EDX + 0x158]
005eb284  CMP EAX,dword ptr [EBP + 0xc]
005eb287  JZ 0x005eb28d
005eb289  MOV byte ptr [EBP + -0x1],0x1
005eb28d  MOVZX ECX,byte ptr [EBP + -0x1]
005eb291  TEST ECX,ECX
005eb293  JZ 0x005eb2a5
005eb295  MOV EDX,dword ptr [EBP + -0x8]
005eb298  MOV EAX,dword ptr [EDX]
005eb29a  MOV ECX,dword ptr [EBP + -0x8]
005eb29d  MOV EDX,dword ptr [EAX + 0xac]
005eb2a3  CALL EDX
005eb2a5  MOV EAX,dword ptr [EBP + -0x8]
005eb2a8  MOV ECX,dword ptr [EBP + 0x8]
005eb2ab  MOV dword ptr [EAX + 0x154],ECX
005eb2b1  MOV EDX,dword ptr [EBP + -0x8]
005eb2b4  MOV EAX,dword ptr [EBP + 0xc]
005eb2b7  MOV dword ptr [EDX + 0x158],EAX
005eb2bd  MOV ECX,dword ptr [EBP + -0x8]
005eb2c0  CMP dword ptr [ECX + 0x174],0x0
005eb2c7  JZ 0x005eb390
005eb2cd  MOV EDX,dword ptr [EBP + -0x8]
005eb2d0  MOV EAX,dword ptr [EDX + 0x15c]
005eb2d6  PUSH EAX
005eb2d7  MOV ECX,dword ptr [EBP + -0x8]
005eb2da  MOV EDX,dword ptr [ECX + 0x164]
005eb2e0  PUSH EDX
005eb2e1  MOV EAX,dword ptr [EBP + -0x8]
005eb2e4  MOV ECX,dword ptr [EAX + 0x174]
005eb2ea  CALL 0x00616450
005eb2ef  PUSH EAX
005eb2f0  MOV ECX,dword ptr [EBP + -0x8]
005eb2f3  MOV EDX,dword ptr [ECX + 0x15c]
005eb2f9  PUSH EDX
005eb2fa  MOV EAX,dword ptr [EBP + -0x8]
005eb2fd  MOV ECX,dword ptr [EAX + 0x164]
005eb303  PUSH ECX
005eb304  MOV EDX,dword ptr [EBP + -0x8]
005eb307  MOV ECX,dword ptr [EDX + 0x174]
005eb30d  CALL 0x00616410
005eb312  PUSH EAX
005eb313  MOV EAX,dword ptr [EBP + -0x8]
005eb316  MOV EDX,dword ptr [EAX]
005eb318  MOV ECX,dword ptr [EBP + -0x8]
005eb31b  MOV EAX,dword ptr [EDX + 0x78]
005eb31e  CALL EAX
005eb320  MOV ECX,dword ptr [EBP + -0x8]
005eb323  MOV EDX,dword ptr [ECX + 0x15c]
005eb329  PUSH EDX
005eb32a  MOV EAX,dword ptr [EBP + -0x8]
005eb32d  MOV ECX,dword ptr [EAX + 0x164]
005eb333  PUSH ECX
005eb334  MOV EDX,dword ptr [EBP + -0x8]
005eb337  MOV ECX,dword ptr [EDX + 0x174]
005eb33d  CALL 0x006164d0
005eb342  MOV ECX,dword ptr [EBP + -0x8]
005eb345  IMUL EAX,dword ptr [ECX + 0x40]
005eb349  MOV EDX,dword ptr [EBP + -0x8]
005eb34c  ADD EAX,dword ptr [EDX + 0x158]
005eb352  PUSH EAX
005eb353  MOV EAX,dword ptr [EBP + -0x8]
005eb356  MOV ECX,dword ptr [EAX + 0x15c]
005eb35c  PUSH ECX
005eb35d  MOV EDX,dword ptr [EBP + -0x8]
005eb360  MOV EAX,dword ptr [EDX + 0x164]
005eb366  PUSH EAX
005eb367  MOV ECX,dword ptr [EBP + -0x8]
005eb36a  MOV ECX,dword ptr [ECX + 0x174]
005eb370  CALL 0x00616490
005eb375  MOV EDX,dword ptr [EBP + -0x8]
005eb378  IMUL EAX,dword ptr [EDX + 0x40]
005eb37c  MOV ECX,dword ptr [EBP + -0x8]
005eb37f  ADD EAX,dword ptr [ECX + 0x154]
005eb385  PUSH EAX
005eb386  MOV ECX,dword ptr [EBP + -0x8]
005eb389  CALL 0x005f5110
005eb38e  JMP 0x005eb3ac
005eb390  MOV EDX,dword ptr [EBP + -0x8]
005eb393  MOV EAX,dword ptr [EDX + 0x158]
005eb399  PUSH EAX
005eb39a  MOV ECX,dword ptr [EBP + -0x8]
005eb39d  MOV EDX,dword ptr [ECX + 0x154]
005eb3a3  PUSH EDX
005eb3a4  MOV ECX,dword ptr [EBP + -0x8]
005eb3a7  CALL 0x005f5110
005eb3ac  MOVZX EAX,byte ptr [EBP + -0x1]
005eb3b0  TEST EAX,EAX
005eb3b2  JZ 0x005eb3c4
005eb3b4  MOV ECX,dword ptr [EBP + -0x8]
005eb3b7  MOV EDX,dword ptr [ECX]
005eb3b9  MOV ECX,dword ptr [EBP + -0x8]
005eb3bc  MOV EAX,dword ptr [EDX + 0xac]
005eb3c2  CALL EAX
005eb3c4  MOV ESP,EBP
005eb3c6  POP EBP
005eb3c7  RET 0x8
