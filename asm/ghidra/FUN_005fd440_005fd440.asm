; FUN_005fd440  005fd440
005fd440  PUSH EBP
005fd441  MOV EBP,ESP
005fd443  PUSH -0x1
005fd445  PUSH 0x6aa63a
005fd44a  MOV EAX,FS:[0x0]
005fd450  PUSH EAX
005fd451  SUB ESP,0x10
005fd454  MOV EAX,[0x00781870]
005fd459  XOR EAX,EBP
005fd45b  PUSH EAX
005fd45c  LEA EAX,[EBP + -0xc]
005fd45f  MOV FS:[0x0],EAX
005fd465  MOV dword ptr [EBP + -0x18],ECX
005fd468  MOV EAX,dword ptr [EBP + -0x18]
005fd46b  CMP dword ptr [EAX + 0x1f8],0x0
005fd472  JNZ 0x005fd526
005fd478  PUSH 0x178
005fd47d  CALL 0x00686d82
005fd482  ADD ESP,0x4
005fd485  MOV dword ptr [EBP + -0x14],EAX
005fd488  MOV dword ptr [EBP + -0x4],0x0
005fd48f  CMP dword ptr [EBP + -0x14],0x0
005fd493  JZ 0x005fd4a2
005fd495  MOV ECX,dword ptr [EBP + -0x14]
005fd498  CALL 0x005eaaf0
005fd49d  MOV dword ptr [EBP + -0x1c],EAX
005fd4a0  JMP 0x005fd4a9
005fd4a2  MOV dword ptr [EBP + -0x1c],0x0
005fd4a9  MOV ECX,dword ptr [EBP + -0x1c]
005fd4ac  MOV dword ptr [EBP + -0x10],ECX
005fd4af  MOV dword ptr [EBP + -0x4],0xffffffff
005fd4b6  MOV EDX,dword ptr [EBP + -0x18]
005fd4b9  MOV EAX,dword ptr [EBP + -0x10]
005fd4bc  MOV dword ptr [EDX + 0x1f8],EAX
005fd4c2  MOV ECX,dword ptr [EBP + -0x18]
005fd4c5  MOV EDX,dword ptr [ECX + 0x1f8]
005fd4cb  MOV EAX,dword ptr [EBP + -0x18]
005fd4ce  MOV ECX,dword ptr [EAX + 0x4]
005fd4d1  MOV dword ptr [EDX + 0x4],ECX
005fd4d4  PUSH -0x1
005fd4d6  MOV ECX,dword ptr [EBP + -0x18]
005fd4d9  CALL 0x005f53c0
005fd4de  ADD EAX,0x1
005fd4e1  PUSH EAX
005fd4e2  MOV EDX,dword ptr [EBP + -0x18]
005fd4e5  MOV EAX,dword ptr [EDX]
005fd4e7  MOV ECX,dword ptr [EBP + -0x18]
005fd4ea  MOV EDX,dword ptr [EAX + 0x54]
005fd4ed  CALL EDX
005fd4ef  ADD EAX,0x5
005fd4f2  PUSH EAX
005fd4f3  MOV EAX,dword ptr [EBP + -0x18]
005fd4f6  MOV EDX,dword ptr [EAX]
005fd4f8  MOV ECX,dword ptr [EBP + -0x18]
005fd4fb  MOV EAX,dword ptr [EDX + 0x4c]
005fd4fe  CALL EAX
005fd500  ADD EAX,0x1
005fd503  PUSH EAX
005fd504  MOV ECX,dword ptr [0x015e55e8]
005fd50a  MOV EDX,dword ptr [ECX]
005fd50c  MOV ECX,dword ptr [0x015e55e8]
005fd512  MOV EAX,dword ptr [EDX + 0x64]
005fd515  CALL EAX
005fd517  PUSH EAX
005fd518  MOV ECX,dword ptr [EBP + -0x18]
005fd51b  MOV ECX,dword ptr [ECX + 0x1f8]
005fd521  CALL 0x005eae80
005fd526  MOV ECX,dword ptr [EBP + -0x18]
005fd529  CALL 0x005f54a0
005fd52e  MOVZX EDX,AL
005fd531  TEST EDX,EDX
005fd533  JZ 0x005fd550
005fd535  MOV EAX,dword ptr [EBP + -0x18]
005fd538  MOV ECX,dword ptr [EAX + 0x1f8]
005fd53e  MOV EDX,dword ptr [EBP + -0x18]
005fd541  MOV EAX,dword ptr [EDX + 0x1f8]
005fd547  MOV EDX,dword ptr [ECX]
005fd549  MOV ECX,EAX
005fd54b  MOV EAX,dword ptr [EDX + 0x74]
005fd54e  CALL EAX
005fd550  MOV ECX,dword ptr [EBP + -0xc]
005fd553  MOV dword ptr FS:[0x0],ECX
005fd55a  POP ECX
005fd55b  MOV ESP,EBP
005fd55d  POP EBP
005fd55e  RET
