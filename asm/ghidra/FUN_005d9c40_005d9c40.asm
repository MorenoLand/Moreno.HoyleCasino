; FUN_005d9c40  005d9c40
005d9c40  PUSH EBP
005d9c41  MOV EBP,ESP
005d9c43  SUB ESP,0x2c
005d9c46  MOV dword ptr [EBP + -0x2c],ECX
005d9c49  MOV EAX,dword ptr [EBP + 0x8]
005d9c4c  MOV dword ptr [EBP + -0x10],EAX
005d9c4f  MOV ECX,dword ptr [EBP + 0xc]
005d9c52  MOV dword ptr [EBP + -0xc],ECX
005d9c55  MOV EDX,dword ptr [EBP + -0x10]
005d9c58  CMP dword ptr [EDX + 0x3a4],0x0
005d9c5f  JZ 0x005d9c86
005d9c61  MOV EAX,dword ptr [EBP + -0x10]
005d9c64  MOV ECX,dword ptr [EAX + 0x3a4]
005d9c6a  MOV dword ptr [EBP + -0x14],ECX
005d9c6d  MOV EDX,dword ptr [EBP + -0x14]
005d9c70  PUSH EDX
005d9c71  CALL 0x00686cae
005d9c76  ADD ESP,0x4
005d9c79  MOV EAX,dword ptr [EBP + -0x10]
005d9c7c  MOV dword ptr [EAX + 0x3a4],0x0
005d9c86  MOV ECX,dword ptr [EBP + -0x10]
005d9c89  CMP dword ptr [ECX + 0x3a8],0x0
005d9c90  JZ 0x005d9d2c
005d9c96  MOV dword ptr [EBP + -0x8],0x0
005d9c9d  JMP 0x005d9ca8
005d9c9f  MOV EDX,dword ptr [EBP + -0x8]
005d9ca2  ADD EDX,0x1
005d9ca5  MOV dword ptr [EBP + -0x8],EDX
005d9ca8  MOV EAX,[0x0162ee84]
005d9cad  MOV EDX,dword ptr [EAX]
005d9caf  MOV ECX,dword ptr [0x0162ee84]
005d9cb5  MOV EAX,dword ptr [EDX + 0xec]
005d9cbb  CALL EAX
005d9cbd  CMP dword ptr [EBP + -0x8],EAX
005d9cc0  JGE 0x005d9d07
005d9cc2  MOV ECX,dword ptr [EBP + -0x10]
005d9cc5  MOV EDX,dword ptr [ECX + 0x3a8]
005d9ccb  MOV EAX,dword ptr [EBP + -0x8]
005d9cce  CMP dword ptr [EDX + EAX*0x4],0x0
005d9cd2  JZ 0x005d9cf2
005d9cd4  MOV ECX,dword ptr [EBP + -0x10]
005d9cd7  MOV EDX,dword ptr [ECX + 0x3a8]
005d9cdd  MOV EAX,dword ptr [EBP + -0x8]
005d9ce0  MOV ECX,dword ptr [EDX + EAX*0x4]
005d9ce3  MOV dword ptr [EBP + -0x18],ECX
005d9ce6  MOV EDX,dword ptr [EBP + -0x18]
005d9ce9  PUSH EDX
005d9cea  CALL 0x00686cae
005d9cef  ADD ESP,0x4
005d9cf2  MOV EAX,dword ptr [EBP + -0x10]
005d9cf5  MOV ECX,dword ptr [EAX + 0x3a8]
005d9cfb  MOV EDX,dword ptr [EBP + -0x8]
005d9cfe  MOV dword ptr [ECX + EDX*0x4],0x0
005d9d05  JMP 0x005d9c9f
005d9d07  MOV EAX,dword ptr [EBP + -0x10]
005d9d0a  MOV ECX,dword ptr [EAX + 0x3a8]
005d9d10  MOV dword ptr [EBP + -0x1c],ECX
005d9d13  MOV EDX,dword ptr [EBP + -0x1c]
005d9d16  PUSH EDX
005d9d17  CALL 0x00686cae
005d9d1c  ADD ESP,0x4
005d9d1f  MOV EAX,dword ptr [EBP + -0x10]
005d9d22  MOV dword ptr [EAX + 0x3a8],0x0
005d9d2c  PUSH 0x4f4
005d9d31  MOV ECX,dword ptr [EBP + -0xc]
005d9d34  PUSH ECX
005d9d35  MOV EDX,dword ptr [EBP + -0x10]
005d9d38  PUSH EDX
005d9d39  CALL 0x00686fde
005d9d3e  ADD ESP,0xc
005d9d41  MOV EAX,[0x0162ee84]
005d9d46  MOV EDX,dword ptr [EAX]
005d9d48  MOV ECX,dword ptr [0x0162ee84]
005d9d4e  MOV EAX,dword ptr [EDX + 0xf0]
005d9d54  CALL EAX
005d9d56  MOV dword ptr [EBP + -0x4],EAX
005d9d59  MOV ECX,dword ptr [EBP + -0x4]
005d9d5c  PUSH ECX
005d9d5d  CALL 0x00686d82
005d9d62  ADD ESP,0x4
005d9d65  MOV dword ptr [EBP + -0x20],EAX
005d9d68  MOV EDX,dword ptr [EBP + -0x10]
005d9d6b  MOV EAX,dword ptr [EBP + -0x20]
005d9d6e  MOV dword ptr [EDX + 0x3a4],EAX
005d9d74  MOV ECX,dword ptr [EBP + -0x4]
005d9d77  PUSH ECX
005d9d78  MOV EDX,dword ptr [EBP + -0xc]
005d9d7b  MOV EAX,dword ptr [EDX + 0x3a4]
005d9d81  PUSH EAX
005d9d82  MOV ECX,dword ptr [EBP + -0x10]
005d9d85  MOV EDX,dword ptr [ECX + 0x3a4]
005d9d8b  PUSH EDX
005d9d8c  CALL 0x00686fde
005d9d91  ADD ESP,0xc
005d9d94  MOV EAX,[0x0162ee84]
005d9d99  MOV EDX,dword ptr [EAX]
005d9d9b  MOV ECX,dword ptr [0x0162ee84]
005d9da1  MOV EAX,dword ptr [EDX + 0xec]
005d9da7  CALL EAX
005d9da9  XOR ECX,ECX
005d9dab  MOV EDX,0x4
005d9db0  MUL EDX
005d9db2  SETO CL
005d9db5  NEG ECX
005d9db7  OR ECX,EAX
005d9db9  PUSH ECX
005d9dba  CALL 0x00686d82
005d9dbf  ADD ESP,0x4
005d9dc2  MOV dword ptr [EBP + -0x24],EAX
005d9dc5  MOV EAX,dword ptr [EBP + -0x10]
005d9dc8  MOV ECX,dword ptr [EBP + -0x24]
005d9dcb  MOV dword ptr [EAX + 0x3a8],ECX
005d9dd1  MOV dword ptr [EBP + -0x8],0x0
005d9dd8  JMP 0x005d9de3
005d9dda  MOV EDX,dword ptr [EBP + -0x8]
005d9ddd  ADD EDX,0x1
005d9de0  MOV dword ptr [EBP + -0x8],EDX
005d9de3  MOV EAX,[0x0162ee84]
005d9de8  MOV EDX,dword ptr [EAX]
005d9dea  MOV ECX,dword ptr [0x0162ee84]
005d9df0  MOV EAX,dword ptr [EDX + 0xec]
005d9df6  CALL EAX
005d9df8  CMP dword ptr [EBP + -0x8],EAX
005d9dfb  JGE 0x005d9e6c
005d9dfd  MOV ECX,dword ptr [EBP + -0x8]
005d9e00  PUSH ECX
005d9e01  MOV EDX,dword ptr [0x0162ee84]
005d9e07  MOV EAX,dword ptr [EDX]
005d9e09  MOV ECX,dword ptr [0x0162ee84]
005d9e0f  MOV EDX,dword ptr [EAX + 0x108]
005d9e15  CALL EDX
005d9e17  MOV dword ptr [EBP + -0x4],EAX
005d9e1a  MOV EAX,dword ptr [EBP + -0x4]
005d9e1d  PUSH EAX
005d9e1e  CALL 0x00686d82
005d9e23  ADD ESP,0x4
005d9e26  MOV dword ptr [EBP + -0x28],EAX
005d9e29  MOV ECX,dword ptr [EBP + -0x10]
005d9e2c  MOV EDX,dword ptr [ECX + 0x3a8]
005d9e32  MOV EAX,dword ptr [EBP + -0x8]
005d9e35  MOV ECX,dword ptr [EBP + -0x28]
005d9e38  MOV dword ptr [EDX + EAX*0x4],ECX
005d9e3b  MOV EDX,dword ptr [EBP + -0x4]
005d9e3e  PUSH EDX
005d9e3f  MOV EAX,dword ptr [EBP + -0xc]
005d9e42  MOV ECX,dword ptr [EAX + 0x3a8]
005d9e48  MOV EDX,dword ptr [EBP + -0x8]
005d9e4b  MOV EAX,dword ptr [ECX + EDX*0x4]
005d9e4e  PUSH EAX
005d9e4f  MOV ECX,dword ptr [EBP + -0x10]
005d9e52  MOV EDX,dword ptr [ECX + 0x3a8]
005d9e58  MOV EAX,dword ptr [EBP + -0x8]
005d9e5b  MOV ECX,dword ptr [EDX + EAX*0x4]
005d9e5e  PUSH ECX
005d9e5f  CALL 0x00686fde
005d9e64  ADD ESP,0xc
005d9e67  JMP 0x005d9dda
005d9e6c  MOV ESP,EBP
005d9e6e  POP EBP
005d9e6f  RET 0x8
