; FUN_005d5af0  005d5af0
005d5af0  PUSH EBP
005d5af1  MOV EBP,ESP
005d5af3  SUB ESP,0x44
005d5af6  MOV dword ptr [EBP + -0x38],ECX
005d5af9  MOV ECX,dword ptr [EBP + -0x38]
005d5afc  CALL 0x005d52e0
005d5b01  MOV ECX,dword ptr [EBP + 0x8]
005d5b04  MOV dword ptr [EAX],ECX
005d5b06  MOV EDX,dword ptr [EBP + 0xc]
005d5b09  MOV dword ptr [EAX + 0x4],EDX
005d5b0c  MOV EAX,dword ptr [EBP + -0x38]
005d5b0f  CMP dword ptr [EAX + 0x4],-0x1
005d5b13  JZ 0x005d5b27
005d5b15  MOV ECX,dword ptr [EBP + -0x38]
005d5b18  MOV EDX,dword ptr [ECX + 0x4]
005d5b1b  PUSH EDX
005d5b1c  MOV ECX,dword ptr [0x007947e0]
005d5b22  CALL 0x005de200
005d5b27  MOV ECX,dword ptr [EBP + -0x38]
005d5b2a  CALL 0x0063aac0
005d5b2f  MOV EAX,dword ptr [EAX]
005d5b31  MOV dword ptr [EBP + -0x1c],EAX
005d5b34  CMP dword ptr [EBP + -0x1c],0x2
005d5b38  JZ 0x005d5b56
005d5b3a  MOV ECX,dword ptr [EBP + -0x38]
005d5b3d  CALL 0x0063aac0
005d5b42  MOV ECX,dword ptr [EAX]
005d5b44  MOV dword ptr [EBP + -0x20],ECX
005d5b47  CMP dword ptr [EBP + -0x20],0x3
005d5b4b  JZ 0x005d5b56
005d5b4d  MOV dword ptr [EBP + -0x3c],0x0
005d5b54  JMP 0x005d5b5d
005d5b56  MOV dword ptr [EBP + -0x3c],0x1
005d5b5d  MOVZX EDX,byte ptr [EBP + -0x3c]
005d5b61  TEST EDX,EDX
005d5b63  JZ 0x005d5bec
005d5b69  MOV ECX,dword ptr [0x007947e4]
005d5b6f  CALL 0x005da830
005d5b74  MOVZX EAX,AL
005d5b77  TEST EAX,EAX
005d5b79  JNZ 0x005d5bec
005d5b7b  MOV ECX,dword ptr [EBP + -0x38]
005d5b7e  CALL 0x005d6c60
005d5b83  MOVZX ECX,AL
005d5b86  TEST ECX,ECX
005d5b88  JZ 0x005d5bec
005d5b8a  MOV EDX,dword ptr [EBP + -0x38]
005d5b8d  MOVZX EAX,byte ptr [EDX + 0x4b1]
005d5b94  TEST EAX,EAX
005d5b96  JNZ 0x005d5bce
005d5b98  MOV ECX,dword ptr [EBP + -0x38]
005d5b9b  CALL 0x005d6e70
005d5ba0  MOVZX ECX,AL
005d5ba3  TEST ECX,ECX
005d5ba5  JZ 0x005d5bce
005d5ba7  PUSH 0x0
005d5ba9  MOV ECX,dword ptr [EBP + -0x38]
005d5bac  CALL 0x005d6ee0
005d5bb1  MOV ECX,dword ptr [EBP + -0x38]
005d5bb4  CALL 0x0063aac0
005d5bb9  ADD EAX,0x4
005d5bbc  MOV dword ptr [EBP + -0x24],EAX
005d5bbf  MOV EDX,dword ptr [EBP + -0x24]
005d5bc2  PUSH EDX
005d5bc3  MOV ECX,dword ptr [0x007947e4]
005d5bc9  CALL 0x005dc520
005d5bce  MOV ECX,dword ptr [EBP + -0x38]
005d5bd1  CALL 0x005d6f90
005d5bd6  MOVZX EAX,AL
005d5bd9  TEST EAX,EAX
005d5bdb  JZ 0x005d5bec
005d5bdd  MOV ECX,dword ptr [EBP + -0x38]
005d5be0  PUSH ECX
005d5be1  MOV ECX,dword ptr [0x007947e4]
005d5be7  CALL 0x005dc3e0
005d5bec  MOV ECX,dword ptr [0x007947e4]
005d5bf2  CALL 0x005da7b0
005d5bf7  MOVZX EDX,AL
005d5bfa  TEST EDX,EDX
005d5bfc  JZ 0x005d5c9f
005d5c02  MOV ECX,dword ptr [EBP + -0x38]
005d5c05  CALL 0x0063aac0
005d5c0a  MOV EAX,dword ptr [EAX]
005d5c0c  MOV dword ptr [EBP + -0x28],EAX
005d5c0f  CMP dword ptr [EBP + -0x28],0x2
005d5c13  JZ 0x005d5c31
005d5c15  MOV ECX,dword ptr [EBP + -0x38]
005d5c18  CALL 0x0063aac0
005d5c1d  MOV ECX,dword ptr [EAX]
005d5c1f  MOV dword ptr [EBP + -0x2c],ECX
005d5c22  CMP dword ptr [EBP + -0x2c],0x3
005d5c26  JZ 0x005d5c31
005d5c28  MOV dword ptr [EBP + -0x40],0x0
005d5c2f  JMP 0x005d5c38
005d5c31  MOV dword ptr [EBP + -0x40],0x1
005d5c38  MOVZX EDX,byte ptr [EBP + -0x40]
005d5c3c  TEST EDX,EDX
005d5c3e  JZ 0x005d5c9f
005d5c40  MOV EAX,[0x007947e0]
005d5c45  MOVZX ECX,byte ptr [EAX + 0x4f05]
005d5c4c  TEST ECX,ECX
005d5c4e  JNZ 0x005d5c9f
005d5c50  PUSH 0x0
005d5c52  MOV ECX,dword ptr [0x007947e4]
005d5c58  CALL 0x005da880
005d5c5d  PUSH EAX
005d5c5e  CALL 0x0064c8a0
005d5c63  ADD ESP,0x8
005d5c66  MOV dword ptr [EBP + -0x10],EAX
005d5c69  MOV dword ptr [EBP + -0xc],EDX
005d5c6c  MOV EDX,dword ptr [EBP + -0xc]
005d5c6f  PUSH EDX
005d5c70  MOV EAX,dword ptr [EBP + -0x10]
005d5c73  PUSH EAX
005d5c74  LEA ECX,[EBP + -0x18]
005d5c77  PUSH ECX
005d5c78  LEA EDX,[EBP + -0x8]
005d5c7b  PUSH EDX
005d5c7c  MOV ECX,dword ptr [EBP + -0x38]
005d5c7f  CALL 0x005d5a90
005d5c84  MOV ECX,EAX
005d5c86  CALL 0x0064c630
005d5c8b  MOV ECX,dword ptr [EAX]
005d5c8d  MOV EDX,dword ptr [EAX + 0x4]
005d5c90  MOV EAX,dword ptr [EBP + -0x38]
005d5c93  MOV dword ptr [EAX + 0x4d4],ECX
005d5c99  MOV dword ptr [EAX + 0x4d8],EDX
005d5c9f  MOV ECX,dword ptr [EBP + -0x38]
005d5ca2  CALL 0x0063aac0
005d5ca7  MOV ECX,dword ptr [EAX]
005d5ca9  MOV dword ptr [EBP + -0x30],ECX
005d5cac  CMP dword ptr [EBP + -0x30],0x2
005d5cb0  JZ 0x005d5cce
005d5cb2  MOV ECX,dword ptr [EBP + -0x38]
005d5cb5  CALL 0x0063aac0
005d5cba  MOV EDX,dword ptr [EAX]
005d5cbc  MOV dword ptr [EBP + -0x34],EDX
005d5cbf  CMP dword ptr [EBP + -0x34],0x3
005d5cc3  JZ 0x005d5cce
005d5cc5  MOV dword ptr [EBP + -0x44],0x0
005d5ccc  JMP 0x005d5cd5
005d5cce  MOV dword ptr [EBP + -0x44],0x1
005d5cd5  MOVZX EAX,byte ptr [EBP + -0x44]
005d5cd9  TEST EAX,EAX
005d5cdb  JZ 0x005d5ce5
005d5cdd  MOV ECX,dword ptr [EBP + -0x38]
005d5ce0  CALL 0x0063b0a0
005d5ce5  MOV ESP,EBP
005d5ce7  POP EBP
005d5ce8  RET 0x8
