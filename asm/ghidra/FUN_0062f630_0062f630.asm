; FUN_0062f630  0062f630
0062f630  PUSH EBP
0062f631  MOV EBP,ESP
0062f633  PUSH ECX
0062f634  MOV dword ptr [EBP + -0x4],ECX
0062f637  CMP dword ptr [EBP + 0x8],0x0
0062f63b  JNZ 0x0062f644
0062f63d  XOR AL,AL
0062f63f  JMP 0x0062f707
0062f644  MOV EAX,dword ptr [EBP + -0x4]
0062f647  CMP dword ptr [EAX + 0x20],0x0
0062f64b  JZ 0x0062f664
0062f64d  PUSH 0x18c
0062f652  PUSH 0x6d9c18
0062f657  PUSH 0x6d9c0c
0062f65c  CALL 0x005e9f20
0062f661  ADD ESP,0xc
0062f664  MOV EDX,dword ptr [EBP + 0x8]
0062f667  PUSH EDX
0062f668  MOV EAX,dword ptr [EBP + -0x4]
0062f66b  MOV EDX,dword ptr [EAX]
0062f66d  MOV ECX,dword ptr [EBP + -0x4]
0062f670  MOV EAX,dword ptr [EDX + 0xc]
0062f673  CALL EAX
0062f675  MOV ECX,dword ptr [EBP + -0x4]
0062f678  MOV dword ptr [ECX + 0x20],EAX
0062f67b  MOV EDX,dword ptr [EBP + -0x4]
0062f67e  CMP dword ptr [EDX + 0x20],0x0
0062f682  JNZ 0x0062f699
0062f684  MOV EAX,dword ptr [EBP + 0x8]
0062f687  PUSH EAX
0062f688  MOV ECX,dword ptr [EBP + -0x4]
0062f68b  MOV EDX,dword ptr [ECX]
0062f68d  MOV ECX,dword ptr [EBP + -0x4]
0062f690  MOV EAX,dword ptr [EDX + 0x8]
0062f693  CALL EAX
0062f695  XOR AL,AL
0062f697  JMP 0x0062f707
0062f699  MOV ECX,dword ptr [EBP + -0x4]
0062f69c  MOV EDX,dword ptr [EBP + -0x4]
0062f69f  MOV EAX,dword ptr [EDX + 0x20]
0062f6a2  MOV dword ptr [ECX + 0x24],EAX
0062f6a5  MOV ECX,dword ptr [EBP + 0x8]
0062f6a8  PUSH ECX
0062f6a9  MOV EDX,dword ptr [EBP + -0x4]
0062f6ac  MOV EAX,dword ptr [EDX]
0062f6ae  MOV ECX,dword ptr [EBP + -0x4]
0062f6b1  MOV EDX,dword ptr [EAX + 0x10]
0062f6b4  CALL EDX
0062f6b6  MOV ECX,dword ptr [EBP + -0x4]
0062f6b9  MOV dword ptr [ECX + 0x28],EAX
0062f6bc  MOV EDX,dword ptr [EBP + -0x4]
0062f6bf  MOV EAX,dword ptr [EDX]
0062f6c1  MOV ECX,dword ptr [EBP + -0x4]
0062f6c4  MOV EDX,dword ptr [EAX + 0x44]
0062f6c7  CALL EDX
0062f6c9  MOV EAX,dword ptr [EBP + 0x8]
0062f6cc  PUSH EAX
0062f6cd  MOV ECX,dword ptr [EBP + -0x4]
0062f6d0  MOV EDX,dword ptr [ECX]
0062f6d2  MOV ECX,dword ptr [EBP + -0x4]
0062f6d5  MOV EAX,dword ptr [EDX + 0x8]
0062f6d8  CALL EAX
0062f6da  MOV ECX,dword ptr [EBP + -0x4]
0062f6dd  MOV EDX,dword ptr [ECX]
0062f6df  MOV ECX,dword ptr [EBP + -0x4]
0062f6e2  MOV EAX,dword ptr [EDX + 0x48]
0062f6e5  CALL EAX
0062f6e7  MOV ECX,dword ptr [EBP + -0x4]
0062f6ea  MOV dword ptr [ECX + 0x20],0x0
0062f6f1  MOV EDX,dword ptr [EBP + -0x4]
0062f6f4  MOV dword ptr [EDX + 0x24],0x0
0062f6fb  MOV EAX,dword ptr [EBP + -0x4]
0062f6fe  MOV dword ptr [EAX + 0x28],0x0
0062f705  MOV AL,0x1
0062f707  MOV ESP,EBP
0062f709  POP EBP
0062f70a  RET 0x4
