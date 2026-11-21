; FUN_005dd400  005dd400
005dd400  PUSH EBP
005dd401  MOV EBP,ESP
005dd403  PUSH ECX
005dd404  MOV dword ptr [EBP + -0x4],ECX
005dd407  MOV EAX,dword ptr [EBP + -0x4]
005dd40a  MOV CL,byte ptr [EBP + 0x8]
005dd40d  MOV byte ptr [EAX + 0x94],CL
005dd413  MOV EDX,dword ptr [EBP + -0x4]
005dd416  MOV EAX,dword ptr [EDX]
005dd418  MOV ECX,dword ptr [EBP + -0x4]
005dd41b  MOV EDX,dword ptr [EAX + 0x384]
005dd421  CALL EDX
005dd423  MOV ESP,EBP
005dd425  POP EBP
005dd426  RET 0x4
