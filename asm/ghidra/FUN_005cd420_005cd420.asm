; FUN_005cd420  005cd420
005cd420  PUSH EBP
005cd421  MOV EBP,ESP
005cd423  PUSH -0x1
005cd425  PUSH 0x6a8bc0
005cd42a  MOV EAX,FS:[0x0]
005cd430  PUSH EAX
005cd431  SUB ESP,0x14
005cd434  MOV EAX,[0x00781870]
005cd439  XOR EAX,EBP
005cd43b  PUSH EAX
005cd43c  LEA EAX,[EBP + -0xc]
005cd43f  MOV FS:[0x0],EAX
005cd445  MOV dword ptr [EBP + -0x1c],ECX
005cd448  MOV byte ptr [EBP + -0x10],0x0
005cd44c  MOV byte ptr [EBP + -0xf],0x0
005cd450  MOV byte ptr [EBP + -0xe],0x0
005cd454  MOV byte ptr [EBP + -0xd],0x0
005cd458  MOV ECX,dword ptr [EBP + -0x1c]
005cd45b  CALL 0x005f6270
005cd460  MOV EAX,dword ptr [EBP + -0x1c]
005cd463  CMP dword ptr [EAX + 0x1d0],0x0
005cd46a  JNZ 0x005cd4b3
005cd46c  PUSH 0x5c
005cd46e  CALL 0x00686d82
005cd473  ADD ESP,0x4
005cd476  MOV dword ptr [EBP + -0x18],EAX
005cd479  MOV dword ptr [EBP + -0x4],0x0
005cd480  CMP dword ptr [EBP + -0x18],0x0
005cd484  JZ 0x005cd493
005cd486  MOV ECX,dword ptr [EBP + -0x18]
005cd489  CALL 0x005f6130
005cd48e  MOV dword ptr [EBP + -0x20],EAX
005cd491  JMP 0x005cd49a
005cd493  MOV dword ptr [EBP + -0x20],0x0
005cd49a  MOV ECX,dword ptr [EBP + -0x20]
005cd49d  MOV dword ptr [EBP + -0x14],ECX
005cd4a0  MOV dword ptr [EBP + -0x4],0xffffffff
005cd4a7  MOV EDX,dword ptr [EBP + -0x1c]
005cd4aa  MOV EAX,dword ptr [EBP + -0x14]
005cd4ad  MOV dword ptr [EDX + 0x1d0],EAX
005cd4b3  PUSH -0x1
005cd4b5  MOV ECX,dword ptr [EBP + -0x1c]
005cd4b8  CALL 0x005f53c0
005cd4bd  SUB EAX,0x2
005cd4c0  PUSH EAX
005cd4c1  MOV ECX,dword ptr [EBP + -0x1c]
005cd4c4  MOV EDX,dword ptr [ECX]
005cd4c6  MOV ECX,dword ptr [EBP + -0x1c]
005cd4c9  MOV EAX,dword ptr [EDX + 0x54]
005cd4cc  CALL EAX
005cd4ce  ADD EAX,0x2
005cd4d1  PUSH EAX
005cd4d2  MOV ECX,dword ptr [EBP + -0x1c]
005cd4d5  MOV EDX,dword ptr [ECX]
005cd4d7  MOV ECX,dword ptr [EBP + -0x1c]
005cd4da  MOV EAX,dword ptr [EDX + 0x4c]
005cd4dd  CALL EAX
005cd4df  ADD EAX,0x2
005cd4e2  PUSH EAX
005cd4e3  MOV ECX,dword ptr [EBP + -0x1c]
005cd4e6  CALL 0x005f5590
005cd4eb  PUSH EAX
005cd4ec  MOV ECX,dword ptr [EBP + -0x1c]
005cd4ef  CALL 0x005f5550
005cd4f4  PUSH EAX
005cd4f5  MOV ECX,dword ptr [EBP + -0x1c]
005cd4f8  MOV ECX,dword ptr [ECX + 0x1d0]
005cd4fe  CALL 0x005f61d0
005cd503  PUSH 0x1
005cd505  PUSH 0x1
005cd507  PUSH 0x1
005cd509  MOV EDX,dword ptr [EBP + -0x1c]
005cd50c  MOV ECX,dword ptr [EDX + 0x1d0]
005cd512  CALL 0x005f6580
005cd517  PUSH 0x0
005cd519  PUSH 0x0
005cd51b  PUSH 0x0
005cd51d  MOV EAX,dword ptr [EBP + -0x1c]
005cd520  MOV ECX,dword ptr [EAX + 0x1d0]
005cd526  CALL 0x005f6490
005cd52b  MOV ECX,dword ptr [EBP + -0x1c]
005cd52e  MOVZX EDX,byte ptr [ECX + 0x9c]
005cd535  CMP EDX,0xff
005cd53b  JNZ 0x005cd558
005cd53d  MOV EAX,dword ptr [EBP + -0x1c]
005cd540  MOV ECX,dword ptr [EAX + 0x1d0]
005cd546  MOV EDX,dword ptr [EBP + -0x1c]
005cd549  MOV EAX,dword ptr [EDX + 0x1d0]
005cd54f  MOV EDX,dword ptr [ECX]
005cd551  MOV ECX,EAX
005cd553  MOV EAX,dword ptr [EDX + 0x74]
005cd556  CALL EAX
005cd558  MOV ECX,dword ptr [EBP + -0xc]
005cd55b  MOV dword ptr FS:[0x0],ECX
005cd562  POP ECX
005cd563  MOV ESP,EBP
005cd565  POP EBP
005cd566  RET
