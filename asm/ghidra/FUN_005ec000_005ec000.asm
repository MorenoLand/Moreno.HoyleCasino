; FUN_005ec000  005ec000
005ec000  PUSH EBP
005ec001  MOV EBP,ESP
005ec003  PUSH ECX
005ec004  MOV dword ptr [EBP + -0x4],ECX
005ec007  MOV EAX,dword ptr [EBP + 0x8]
005ec00a  PUSH EAX
005ec00b  MOV ECX,dword ptr [EBP + -0x4]
005ec00e  CALL 0x005f55b0
005ec013  MOV ECX,dword ptr [EBP + -0x4]
005ec016  MOV EDX,dword ptr [ECX]
005ec018  MOV ECX,dword ptr [EBP + -0x4]
005ec01b  MOV EAX,dword ptr [EDX + 0x54]
005ec01e  CALL EAX
005ec020  PUSH EAX
005ec021  MOV ECX,dword ptr [EBP + -0x4]
005ec024  MOV EDX,dword ptr [ECX]
005ec026  MOV ECX,dword ptr [EBP + -0x4]
005ec029  MOV EAX,dword ptr [EDX + 0x4c]
005ec02c  CALL EAX
005ec02e  PUSH EAX
005ec02f  MOV ECX,dword ptr [EBP + -0x4]
005ec032  MOV EDX,dword ptr [ECX]
005ec034  MOV ECX,dword ptr [EBP + -0x4]
005ec037  MOV EAX,dword ptr [EDX + 0x44]
005ec03a  CALL EAX
005ec03c  MOV ECX,dword ptr [EBP + -0x4]
005ec03f  MOV EDX,dword ptr [ECX]
005ec041  MOV ECX,dword ptr [EBP + -0x4]
005ec044  MOV EAX,dword ptr [EDX + 0xac]
005ec04a  CALL EAX
005ec04c  MOV ESP,EBP
005ec04e  POP EBP
005ec04f  RET 0x4
