; FUN_005b6c90  005b6c90
005b6c90  PUSH EBP
005b6c91  MOV EBP,ESP
005b6c93  SUB ESP,0xc
005b6c96  MOV dword ptr [EBP + -0x8],ECX
005b6c99  MOV EAX,dword ptr [EBP + 0x8]
005b6c9c  PUSH EAX
005b6c9d  MOV ECX,dword ptr [EBP + -0x8]
005b6ca0  CALL 0x005b4e50
005b6ca5  MOV dword ptr [EBP + -0x4],EAX
005b6ca8  MOV ECX,dword ptr [EBP + -0x8]
005b6cab  MOV EDX,dword ptr [ECX + 0x5bc]
005b6cb1  MOV dword ptr [EBP + -0xc],EDX
005b6cb4  CMP dword ptr [EBP + -0xc],0x4
005b6cb8  JA 0x005b6e01
005b6cbe  MOV EAX,dword ptr [EBP + -0xc]
005b6cc1  JMP dword ptr [EAX*0x4 + 0x5b6e14]
005b6cc8  MOV ECX,dword ptr [EBP + 0x8]
005b6ccb  PUSH ECX
005b6ccc  CALL 0x005dcb00
005b6cd1  ADD ESP,0x4
005b6cd4  MOV byte ptr [EAX + 0x4b0],0x1
005b6cdb  MOV EDX,dword ptr [EBP + 0x8]
005b6cde  PUSH EDX
005b6cdf  MOV ECX,dword ptr [EBP + -0x8]
005b6ce2  CALL 0x005b3f80
005b6ce7  JMP 0x005b6e01
005b6cec  PUSH -0x1
005b6cee  MOV EAX,dword ptr [EBP + 0x8]
005b6cf1  PUSH EAX
005b6cf2  MOV ECX,dword ptr [EBP + -0x8]
005b6cf5  CALL 0x005b3300
005b6cfa  MOVZX ECX,AL
005b6cfd  TEST ECX,ECX
005b6cff  JZ 0x005b6d4a
005b6d01  PUSH 0x1
005b6d03  PUSH 0x1
005b6d05  PUSH 0x0
005b6d07  MOV EDX,dword ptr [EBP + -0x4]
005b6d0a  PUSH EDX
005b6d0b  MOV EAX,dword ptr [EBP + 0x8]
005b6d0e  PUSH EAX
005b6d0f  MOV ECX,dword ptr [EBP + -0x8]
005b6d12  CALL 0x005b67d0
005b6d17  PUSH 0x6
005b6d19  MOV ECX,dword ptr [EBP + -0x4]
005b6d1c  PUSH ECX
005b6d1d  MOV EDX,dword ptr [EBP + 0x8]
005b6d20  PUSH EDX
005b6d21  MOV ECX,dword ptr [EBP + -0x8]
005b6d24  CALL 0x005b71a0
005b6d29  MOV EAX,dword ptr [EBP + 0x8]
005b6d2c  PUSH EAX
005b6d2d  MOV ECX,dword ptr [EBP + -0x8]
005b6d30  CALL 0x005b3f80
005b6d35  MOV ECX,dword ptr [EBP + 0x8]
005b6d38  PUSH ECX
005b6d39  CALL 0x005dcb00
005b6d3e  ADD ESP,0x4
005b6d41  MOV byte ptr [EAX + 0x4b0],0x1
005b6d48  JMP 0x005b6da3
005b6d4a  MOV EDX,dword ptr [EBP + -0x4]
005b6d4d  PUSH EDX
005b6d4e  MOV EAX,dword ptr [EBP + 0x8]
005b6d51  PUSH EAX
005b6d52  MOV ECX,dword ptr [EBP + -0x8]
005b6d55  CALL 0x005b4f50
005b6d5a  CMP EAX,0x15
005b6d5d  JNZ 0x005b6d6d
005b6d5f  MOV ECX,dword ptr [EBP + 0x8]
005b6d62  PUSH ECX
005b6d63  MOV ECX,dword ptr [EBP + -0x8]
005b6d66  CALL 0x005b3f80
005b6d6b  JMP 0x005b6da3
005b6d6d  MOV EDX,dword ptr [EBP + 0x8]
005b6d70  PUSH EDX
005b6d71  MOV ECX,dword ptr [EBP + -0x8]
005b6d74  CALL 0x005b6170
005b6d79  MOVZX EAX,AL
005b6d7c  TEST EAX,EAX
005b6d7e  JZ 0x005b6da3
005b6d80  MOV ECX,dword ptr [EBP + -0x4]
005b6d83  PUSH ECX
005b6d84  MOV EDX,dword ptr [EBP + 0x8]
005b6d87  PUSH EDX
005b6d88  MOV ECX,dword ptr [EBP + -0x8]
005b6d8b  CALL 0x005b3710
005b6d90  MOVZX EAX,AL
005b6d93  TEST EAX,EAX
005b6d95  JNZ 0x005b6da3
005b6d97  MOV ECX,dword ptr [EBP + 0x8]
005b6d9a  PUSH ECX
005b6d9b  MOV ECX,dword ptr [EBP + -0x8]
005b6d9e  CALL 0x005b3f80
005b6da3  JMP 0x005b6e01
005b6da5  PUSH -0x1
005b6da7  MOV EDX,dword ptr [EBP + 0x8]
005b6daa  PUSH EDX
005b6dab  MOV ECX,dword ptr [EBP + -0x8]
005b6dae  CALL 0x005b3300
005b6db3  MOVZX EAX,AL
005b6db6  TEST EAX,EAX
005b6db8  JZ 0x005b6df5
005b6dba  PUSH 0x1
005b6dbc  PUSH 0x1
005b6dbe  PUSH 0x0
005b6dc0  MOV ECX,dword ptr [EBP + -0x4]
005b6dc3  PUSH ECX
005b6dc4  MOV EDX,dword ptr [EBP + 0x8]
005b6dc7  PUSH EDX
005b6dc8  MOV ECX,dword ptr [EBP + -0x8]
005b6dcb  CALL 0x005b67d0
005b6dd0  PUSH 0x6
005b6dd2  MOV EAX,dword ptr [EBP + -0x4]
005b6dd5  PUSH EAX
005b6dd6  MOV ECX,dword ptr [EBP + 0x8]
005b6dd9  PUSH ECX
005b6dda  MOV ECX,dword ptr [EBP + -0x8]
005b6ddd  CALL 0x005b71a0
005b6de2  MOV EDX,dword ptr [EBP + 0x8]
005b6de5  PUSH EDX
005b6de6  CALL 0x005dcb00
005b6deb  ADD ESP,0x4
005b6dee  MOV byte ptr [EAX + 0x4b0],0x1
005b6df5  MOV EAX,dword ptr [EBP + 0x8]
005b6df8  PUSH EAX
005b6df9  MOV ECX,dword ptr [EBP + -0x8]
005b6dfc  CALL 0x005b3f80
005b6e01  MOV ECX,dword ptr [EBP + -0x8]
005b6e04  MOV dword ptr [ECX + 0x5bc],0xffffffff
005b6e0e  MOV ESP,EBP
005b6e10  POP EBP
005b6e11  RET 0x4
