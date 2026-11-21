; FUN_005ecc60  005ecc60
005ecc60  PUSH EBP
005ecc61  MOV EBP,ESP
005ecc63  PUSH ECX
005ecc64  MOV dword ptr [EBP + -0x4],ECX
005ecc67  MOV EAX,dword ptr [EBP + -0x4]
005ecc6a  MOV EDX,dword ptr [EAX]
005ecc6c  MOV ECX,dword ptr [EBP + -0x4]
005ecc6f  MOV EAX,dword ptr [EDX + 0xac]
005ecc75  CALL EAX
005ecc77  MOV ECX,dword ptr [EBP + -0x4]
005ecc7a  MOV EDX,dword ptr [EBP + 0x8]
005ecc7d  MOV dword ptr [ECX + 0x68],EDX
005ecc80  MOV EAX,dword ptr [EBP + -0x4]
005ecc83  MOV ECX,dword ptr [EAX + 0x68]
005ecc86  PUSH ECX
005ecc87  MOV ECX,dword ptr [EBP + -0x4]
005ecc8a  CALL 0x005f5530
005ecc8f  MOV EDX,dword ptr [EBP + -0x4]
005ecc92  MOV EAX,dword ptr [EDX]
005ecc94  MOV ECX,dword ptr [EBP + -0x4]
005ecc97  MOV EDX,dword ptr [EAX + 0xac]
005ecc9d  CALL EDX
005ecc9f  MOV ESP,EBP
005ecca1  POP EBP
005ecca2  RET 0x4
