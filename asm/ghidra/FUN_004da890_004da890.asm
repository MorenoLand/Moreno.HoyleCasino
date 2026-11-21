; FUN_004da890  004da890
004da890  PUSH EBP
004da891  MOV EBP,ESP
004da893  PUSH ECX
004da894  MOV dword ptr [EBP + -0x4],ECX
004da897  MOV EAX,dword ptr [EBP + -0x4]
004da89a  MOV ECX,dword ptr [EAX + 0x24]
004da89d  MOV EDX,dword ptr [EBP + -0x4]
004da8a0  MOV EAX,dword ptr [EDX + 0x24]
004da8a3  MOV EDX,dword ptr [ECX]
004da8a5  MOV ECX,EAX
004da8a7  MOV EAX,dword ptr [EDX + 0x70]
004da8aa  CALL EAX
004da8ac  MOV ECX,dword ptr [EBP + -0x4]
004da8af  MOV EDX,dword ptr [ECX + 0x20]
004da8b2  MOV EAX,dword ptr [EBP + -0x4]
004da8b5  MOV ECX,dword ptr [EAX + 0x20]
004da8b8  MOV EDX,dword ptr [EDX]
004da8ba  MOV EAX,dword ptr [EDX + 0x70]
004da8bd  CALL EAX
004da8bf  MOV ESP,EBP
004da8c1  POP EBP
004da8c2  RET
