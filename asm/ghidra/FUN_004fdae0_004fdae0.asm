; FUN_004fdae0  004fdae0
004fdae0  PUSH EBP
004fdae1  MOV EBP,ESP
004fdae3  SUB ESP,0x18
004fdae6  MOV dword ptr [EBP + -0x18],ECX
004fdae9  PUSH 0xb
004fdaeb  MOV ECX,dword ptr [EBP + 0x8]
004fdaee  CALL 0x0063aae0
004fdaf3  MOV dword ptr [EBP + -0x4],EAX
004fdaf6  MOV EAX,dword ptr [EBP + -0x4]
004fdaf9  MOV ECX,dword ptr [EAX + 0x8]
004fdafc  MOV EDX,dword ptr [EBP + -0x4]
004fdaff  ADD ECX,dword ptr [EDX + 0x10]
004fdb02  MOV EAX,dword ptr [EBP + 0xc]
004fdb05  ADD ECX,dword ptr [EAX]
004fdb07  MOV EDX,dword ptr [EBP + 0xc]
004fdb0a  MOV dword ptr [EDX],ECX
004fdb0c  MOV EAX,dword ptr [EBP + 0xc]
004fdb0f  MOV ECX,dword ptr [EAX + 0x4]
004fdb12  MOV EDX,dword ptr [EBP + -0x4]
004fdb15  ADD ECX,dword ptr [EDX + 0xc]
004fdb18  MOV EAX,dword ptr [EBP + 0xc]
004fdb1b  MOV dword ptr [EAX + 0x4],ECX
004fdb1e  MOV ECX,dword ptr [EBP + 0x10]
004fdb21  MOV EDX,dword ptr [ECX]
004fdb23  MOV EAX,dword ptr [EBP + -0x4]
004fdb26  ADD EDX,dword ptr [EAX + 0x8]
004fdb29  MOV ECX,dword ptr [EBP + 0x10]
004fdb2c  MOV dword ptr [ECX],EDX
004fdb2e  MOV EDX,dword ptr [EBP + 0x10]
004fdb31  MOV EAX,dword ptr [EDX + 0x4]
004fdb34  MOV ECX,dword ptr [EBP + -0x4]
004fdb37  ADD EAX,dword ptr [ECX + 0xc]
004fdb3a  MOV EDX,dword ptr [EBP + 0x10]
004fdb3d  MOV dword ptr [EDX + 0x4],EAX
004fdb40  MOV EAX,dword ptr [EBP + 0x14]
004fdb43  MOV ECX,dword ptr [EAX]
004fdb45  MOV EDX,dword ptr [EBP + -0x4]
004fdb48  ADD ECX,dword ptr [EDX + 0x10]
004fdb4b  MOV EAX,dword ptr [EBP + 0x14]
004fdb4e  MOV dword ptr [EAX],ECX
004fdb50  MOV ECX,dword ptr [EBP + 0x14]
004fdb53  MOV EDX,dword ptr [ECX + 0x4]
004fdb56  MOV EAX,dword ptr [EBP + -0x4]
004fdb59  ADD EDX,dword ptr [EAX + 0x14]
004fdb5c  MOV ECX,dword ptr [EBP + 0x14]
004fdb5f  MOV dword ptr [ECX + 0x4],EDX
004fdb62  PUSH -0x1
004fdb64  MOV EDX,dword ptr [0x007947e0]
004fdb6a  MOV EAX,dword ptr [EDX]
004fdb6c  MOV ECX,dword ptr [0x007947e0]
004fdb72  MOV EDX,dword ptr [EAX + 0x33c]
004fdb78  CALL EDX
004fdb7a  MOVZX EAX,AL
004fdb7d  TEST EAX,EAX
004fdb7f  JZ 0x004fdbff
004fdb81  MOV ECX,dword ptr [0x0162ee84]
004fdb87  CALL 0x005f3bf0
004fdb8c  CMP EAX,0xb
004fdb8f  JNZ 0x004fdbff
004fdb91  LEA ECX,[EBP + -0xc]
004fdb94  PUSH ECX
004fdb95  LEA EDX,[EBP + -0x14]
004fdb98  PUSH EDX
004fdb99  MOV EAX,dword ptr [EBP + 0x8]
004fdb9c  PUSH EAX
004fdb9d  MOV ECX,dword ptr [0x007947e0]
004fdba3  CALL 0x005e0c40
004fdba8  MOV ECX,dword ptr [EBP + -0x14]
004fdbab  ADD ECX,dword ptr [EBP + -0xc]
004fdbae  MOV EDX,dword ptr [EBP + 0xc]
004fdbb1  ADD ECX,dword ptr [EDX]
004fdbb3  MOV EAX,dword ptr [EBP + 0xc]
004fdbb6  MOV dword ptr [EAX],ECX
004fdbb8  MOV ECX,dword ptr [EBP + 0xc]
004fdbbb  MOV EDX,dword ptr [ECX + 0x4]
004fdbbe  ADD EDX,dword ptr [EBP + -0x10]
004fdbc1  MOV EAX,dword ptr [EBP + 0xc]
004fdbc4  MOV dword ptr [EAX + 0x4],EDX
004fdbc7  MOV ECX,dword ptr [EBP + 0x10]
004fdbca  MOV EDX,dword ptr [ECX]
004fdbcc  ADD EDX,dword ptr [EBP + -0x14]
004fdbcf  MOV EAX,dword ptr [EBP + 0x10]
004fdbd2  MOV dword ptr [EAX],EDX
004fdbd4  MOV ECX,dword ptr [EBP + 0x10]
004fdbd7  MOV EDX,dword ptr [ECX + 0x4]
004fdbda  ADD EDX,dword ptr [EBP + -0x10]
004fdbdd  MOV EAX,dword ptr [EBP + 0x10]
004fdbe0  MOV dword ptr [EAX + 0x4],EDX
004fdbe3  MOV ECX,dword ptr [EBP + 0x14]
004fdbe6  MOV EDX,dword ptr [ECX]
004fdbe8  ADD EDX,dword ptr [EBP + -0xc]
004fdbeb  MOV EAX,dword ptr [EBP + 0x14]
004fdbee  MOV dword ptr [EAX],EDX
004fdbf0  MOV ECX,dword ptr [EBP + 0x14]
004fdbf3  MOV EDX,dword ptr [ECX + 0x4]
004fdbf6  ADD EDX,dword ptr [EBP + -0x8]
004fdbf9  MOV EAX,dword ptr [EBP + 0x14]
004fdbfc  MOV dword ptr [EAX + 0x4],EDX
004fdbff  MOV ESP,EBP
004fdc01  POP EBP
004fdc02  RET 0x10
