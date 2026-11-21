; FUN_005dbe50  005dbe50
005dbe50  PUSH EBP
005dbe51  MOV EBP,ESP
005dbe53  PUSH -0x1
005dbe55  PUSH 0x6a9381
005dbe5a  MOV EAX,FS:[0x0]
005dbe60  PUSH EAX
005dbe61  SUB ESP,0x10
005dbe64  MOV EAX,[0x00781870]
005dbe69  XOR EAX,EBP
005dbe6b  PUSH EAX
005dbe6c  LEA EAX,[EBP + -0xc]
005dbe6f  MOV FS:[0x0],EAX
005dbe75  MOV dword ptr [EBP + -0x18],ECX
005dbe78  CMP dword ptr [0x007947c0],0x0
005dbe7f  JNZ 0x005dbeea
005dbe81  PUSH 0x1bc
005dbe86  CALL 0x00686d82
005dbe8b  ADD ESP,0x4
005dbe8e  MOV dword ptr [EBP + -0x14],EAX
005dbe91  MOV dword ptr [EBP + -0x4],0x0
005dbe98  CMP dword ptr [EBP + -0x14],0x0
005dbe9c  JZ 0x005dbeab
005dbe9e  MOV ECX,dword ptr [EBP + -0x14]
005dbea1  CALL 0x005ceb60
005dbea6  MOV dword ptr [EBP + -0x1c],EAX
005dbea9  JMP 0x005dbeb2
005dbeab  MOV dword ptr [EBP + -0x1c],0x0
005dbeb2  MOV EAX,dword ptr [EBP + -0x1c]
005dbeb5  MOV dword ptr [EBP + -0x10],EAX
005dbeb8  MOV dword ptr [EBP + -0x4],0xffffffff
005dbebf  MOV ECX,dword ptr [EBP + -0x10]
005dbec2  MOV dword ptr [0x007947c0],ECX
005dbec8  MOV EDX,dword ptr [0x007947c0]
005dbece  MOV EAX,dword ptr [EDX]
005dbed0  MOV ECX,dword ptr [0x007947c0]
005dbed6  MOV EDX,dword ptr [EAX + 0x3c]
005dbed9  CALL EDX
005dbedb  PUSH 0x0
005dbedd  PUSH 0x0
005dbedf  MOV ECX,dword ptr [0x007947c0]
005dbee5  CALL 0x005f7320
005dbeea  MOV ECX,dword ptr [0x007947c0]
005dbef0  CALL 0x005cec40
005dbef5  MOV ECX,dword ptr [0x007947c0]
005dbefb  CALL 0x005f88f0
005dbf00  MOVZX EAX,AL
005dbf03  TEST EAX,EAX
005dbf05  JZ 0x005dbf12
005dbf07  MOV ECX,dword ptr [0x007947c0]
005dbf0d  CALL 0x005f85d0
005dbf12  MOV ECX,dword ptr [EBP + -0xc]
005dbf15  MOV dword ptr FS:[0x0],ECX
005dbf1c  POP ECX
005dbf1d  MOV ESP,EBP
005dbf1f  POP EBP
005dbf20  RET
