; FUN_005dec90  005dec90
005dec90  PUSH EBP
005dec91  MOV EBP,ESP
005dec93  PUSH ECX
005dec94  MOV dword ptr [EBP + -0x4],ECX
005dec97  MOV EAX,dword ptr [EBP + -0x4]
005dec9a  MOV ECX,dword ptr [EBP + 0x8]
005dec9d  MOV dword ptr [EAX + 0x4f2c],ECX
005deca3  MOV EDX,dword ptr [EBP + -0x4]
005deca6  MOV EAX,dword ptr [EBP + 0xc]
005deca9  MOV dword ptr [EDX + 0x4f30],EAX
005decaf  MOV ECX,dword ptr [EBP + 0xc]
005decb2  PUSH ECX
005decb3  MOV EDX,dword ptr [EBP + 0x8]
005decb6  PUSH EDX
005decb7  MOV ECX,dword ptr [EBP + -0x4]
005decba  CALL 0x00635330
005decbf  MOV ESP,EBP
005decc1  POP EBP
005decc2  RET 0x8
