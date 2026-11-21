; FUN_004cca60  004cca60
004cca60  PUSH EBP
004cca61  MOV EBP,ESP
004cca63  PUSH ECX
004cca64  MOV dword ptr [EBP + -0x4],ECX
004cca67  CMP dword ptr [EBP + 0x8],0x0
004cca6b  JZ 0x004cca7c
004cca6d  PUSH 0x0
004cca6f  MOV EAX,dword ptr [EBP + 0x8]
004cca72  MOV EDX,dword ptr [EAX]
004cca74  MOV ECX,dword ptr [EBP + 0x8]
004cca77  MOV EAX,dword ptr [EDX + 0x1c]
004cca7a  CALL EAX
004cca7c  MOV ESP,EBP
004cca7e  POP EBP
004cca7f  RET 0x4
