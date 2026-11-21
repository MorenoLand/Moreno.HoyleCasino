; FUN_005f5300  005f5300
005f5300  PUSH EBP
005f5301  MOV EBP,ESP
005f5303  SUB ESP,0x24
005f5306  MOV dword ptr [EBP + -0x24],ECX
005f5309  MOV EAX,dword ptr [EBP + -0x24]
005f530c  MOV ECX,dword ptr [EBP + 0x8]
005f530f  CMP ECX,dword ptr [EAX + 0x20]
005f5312  JNZ 0x005f5319
005f5314  JMP 0x005f53ae
005f5319  MOV EDX,dword ptr [EBP + -0x24]
005f531c  MOV EAX,dword ptr [EBP + 0x8]
005f531f  MOV dword ptr [EDX + 0x20],EAX
005f5322  MOV ECX,dword ptr [EBP + -0x24]
005f5325  CMP dword ptr [ECX + 0x4],0x0
005f5329  JNZ 0x005f5336
005f532b  MOV EDX,dword ptr [EBP + -0x24]
005f532e  CMP dword ptr [EDX + 0x28],0x0
005f5332  JNZ 0x005f5336
005f5334  JMP 0x005f53ae
005f5336  MOV EAX,dword ptr [EBP + -0x24]
005f5339  PUSH EAX
005f533a  MOV ECX,dword ptr [EBP + -0x24]
005f533d  MOV ECX,dword ptr [ECX + 0x4]
005f5340  CALL 0x005f8dd0
005f5345  MOV EDX,dword ptr [EBP + -0x24]
005f5348  CMP dword ptr [EDX + 0x4],0x0
005f534c  JZ 0x005f53ae
005f534e  MOV EAX,dword ptr [EBP + -0x24]
005f5351  CMP dword ptr [EAX + 0x28],0x0
005f5355  JZ 0x005f53ae
005f5357  MOV ECX,dword ptr [EBP + -0x24]
005f535a  CALL 0x005f54a0
005f535f  MOVZX ECX,AL
005f5362  TEST ECX,ECX
005f5364  JZ 0x005f53ae
005f5366  MOV EDX,dword ptr [EBP + -0x24]
005f5369  MOV EAX,dword ptr [EDX + 0x1c]
005f536c  MOV dword ptr [EBP + -0x20],EAX
005f536f  MOV ECX,dword ptr [EBP + -0x24]
005f5372  MOV EDX,dword ptr [ECX + 0x18]
005f5375  MOV dword ptr [EBP + -0x1c],EDX
005f5378  MOV EAX,dword ptr [EBP + -0x24]
005f537b  MOV ECX,dword ptr [EAX + 0x14]
005f537e  MOV dword ptr [EBP + -0x18],ECX
005f5381  MOV EDX,dword ptr [EBP + -0x24]
005f5384  MOV EAX,dword ptr [EDX + 0x10]
005f5387  MOV dword ptr [EBP + -0x14],EAX
005f538a  MOV ECX,dword ptr [EBP + -0x14]
005f538d  MOV dword ptr [EBP + -0x10],ECX
005f5390  MOV EDX,dword ptr [EBP + -0x18]
005f5393  MOV dword ptr [EBP + -0xc],EDX
005f5396  MOV EAX,dword ptr [EBP + -0x1c]
005f5399  MOV dword ptr [EBP + -0x8],EAX
005f539c  MOV ECX,dword ptr [EBP + -0x20]
005f539f  MOV dword ptr [EBP + -0x4],ECX
005f53a2  LEA EDX,[EBP + -0x10]
005f53a5  PUSH EDX
005f53a6  MOV ECX,dword ptr [EBP + -0x24]
005f53a9  CALL 0x005f5940
005f53ae  MOV ESP,EBP
005f53b0  POP EBP
005f53b1  RET 0x4
