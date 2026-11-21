; FUN_005b7d70  005b7d70
005b7d70  PUSH EBP
005b7d71  MOV EBP,ESP
005b7d73  SUB ESP,0x3c
005b7d76  MOV dword ptr [EBP + -0x38],ECX
005b7d79  MOV ECX,dword ptr [0x00793600]
005b7d7f  CALL 0x005da830
005b7d84  MOVZX EAX,AL
005b7d87  TEST EAX,EAX
005b7d89  JNZ 0x005b7da5
005b7d8b  MOV ECX,dword ptr [EBP + 0x8]
005b7d8e  PUSH ECX
005b7d8f  CALL 0x005dcb00
005b7d94  ADD ESP,0x4
005b7d97  MOV ECX,EAX
005b7d99  CALL 0x005d5840
005b7d9e  MOVZX EDX,AL
005b7da1  TEST EDX,EDX
005b7da3  JZ 0x005b7dac
005b7da5  XOR AL,AL
005b7da7  JMP 0x005b7ede
005b7dac  MOV dword ptr [EBP + -0x10],0x2
005b7db3  MOV dword ptr [EBP + -0xc],0x0
005b7dba  MOV dword ptr [EBP + -0x8],0x1
005b7dc1  MOV dword ptr [EBP + -0x4],0x3
005b7dc8  MOV dword ptr [EBP + -0x14],0x0
005b7dcf  JMP 0x005b7dda
005b7dd1  MOV EAX,dword ptr [EBP + -0x14]
005b7dd4  ADD EAX,0x1
005b7dd7  MOV dword ptr [EBP + -0x14],EAX
005b7dda  CMP dword ptr [EBP + -0x14],0x4
005b7dde  JGE 0x005b7edc
005b7de4  MOV ECX,dword ptr [EBP + -0x14]
005b7de7  MOV EDX,dword ptr [EBP + ECX*0x4 + -0x10]
005b7deb  CMP EDX,dword ptr [EBP + 0x8]
005b7dee  JNZ 0x005b7df5
005b7df0  JMP 0x005b7edc
005b7df5  MOV EAX,dword ptr [EBP + -0x14]
005b7df8  MOV ECX,dword ptr [EBP + EAX*0x4 + -0x10]
005b7dfc  PUSH ECX
005b7dfd  CALL 0x005dcb00
005b7e02  ADD ESP,0x4
005b7e05  MOV dword ptr [EBP + -0x20],EAX
005b7e08  MOV ECX,dword ptr [EBP + -0x20]
005b7e0b  CALL 0x0063aac0
005b7e10  MOV EDX,dword ptr [EAX]
005b7e12  MOV dword ptr [EBP + -0x18],EDX
005b7e15  CMP dword ptr [EBP + -0x18],0x2
005b7e19  JZ 0x005b7e37
005b7e1b  MOV ECX,dword ptr [EBP + -0x20]
005b7e1e  CALL 0x0063aac0
005b7e23  MOV EAX,dword ptr [EAX]
005b7e25  MOV dword ptr [EBP + -0x1c],EAX
005b7e28  CMP dword ptr [EBP + -0x1c],0x3
005b7e2c  JZ 0x005b7e37
005b7e2e  MOV dword ptr [EBP + -0x3c],0x0
005b7e35  JMP 0x005b7e3e
005b7e37  MOV dword ptr [EBP + -0x3c],0x1
005b7e3e  MOVZX ECX,byte ptr [EBP + -0x3c]
005b7e42  TEST ECX,ECX
005b7e44  JZ 0x005b7ed7
005b7e4a  MOV EDX,dword ptr [EBP + 0x8]
005b7e4d  PUSH EDX
005b7e4e  CALL 0x005dcb00
005b7e53  ADD ESP,0x4
005b7e56  MOV dword ptr [EBP + -0x24],EAX
005b7e59  MOV ECX,dword ptr [EBP + -0x24]
005b7e5c  CALL 0x0063aac0
005b7e61  ADD EAX,0x4
005b7e64  MOV dword ptr [EBP + -0x28],EAX
005b7e67  MOV EAX,dword ptr [EBP + -0x14]
005b7e6a  MOV ECX,dword ptr [EBP + EAX*0x4 + -0x10]
005b7e6e  PUSH ECX
005b7e6f  CALL 0x005dcb00
005b7e74  ADD ESP,0x4
005b7e77  MOV dword ptr [EBP + -0x2c],EAX
005b7e7a  MOV ECX,dword ptr [EBP + -0x2c]
005b7e7d  CALL 0x0063aac0
005b7e82  ADD EAX,0x4
005b7e85  MOV dword ptr [EBP + -0x30],EAX
005b7e88  MOV EDX,dword ptr [EBP + -0x28]
005b7e8b  PUSH EDX
005b7e8c  MOV EAX,dword ptr [EBP + -0x30]
005b7e8f  PUSH EAX
005b7e90  CALL 0x00686ec0
005b7e95  ADD ESP,0x8
005b7e98  TEST EAX,EAX
005b7e9a  JNZ 0x005b7ed7
005b7e9c  MOV ECX,dword ptr [EBP + 0x8]
005b7e9f  PUSH ECX
005b7ea0  CALL 0x005dcb00
005b7ea5  ADD ESP,0x4
005b7ea8  MOV dword ptr [EBP + -0x34],EAX
005b7eab  MOV EDX,dword ptr [EBP + -0x34]
005b7eae  MOV byte ptr [EDX + 0x4a1],0x1
005b7eb5  PUSH 0x0
005b7eb7  PUSH 0x1
005b7eb9  MOV EAX,[0x0162ee80]
005b7ebe  MOV ECX,dword ptr [EAX + 0x4]
005b7ec1  MOV EDX,dword ptr [0x0162ee80]
005b7ec7  MOV EAX,dword ptr [EDX + 0x4]
005b7eca  MOV EDX,dword ptr [ECX]
005b7ecc  MOV ECX,EAX
005b7ece  MOV EAX,dword ptr [EDX + 0x8]
005b7ed1  CALL EAX
005b7ed3  XOR AL,AL
005b7ed5  JMP 0x005b7ede
005b7ed7  JMP 0x005b7dd1
005b7edc  MOV AL,0x1
005b7ede  MOV ESP,EBP
005b7ee0  POP EBP
005b7ee1  RET 0x4
