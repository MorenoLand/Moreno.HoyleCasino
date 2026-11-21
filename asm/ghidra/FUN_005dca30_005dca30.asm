; FUN_005dca30  005dca30
005dca30  PUSH EBP
005dca31  MOV EBP,ESP
005dca33  PUSH ECX
005dca34  MOV dword ptr [EBP + -0x4],ECX
005dca37  MOV EAX,dword ptr [EBP + -0x4]
005dca3a  MOV dword ptr [EAX],0x6d458c
005dca40  MOV ECX,dword ptr [EBP + -0x4]
005dca43  CALL 0x005f5fa0
005dca48  MOV ECX,dword ptr [EBP + 0x8]
005dca4b  AND ECX,0x1
005dca4e  JZ 0x005dca5c
005dca50  MOV EDX,dword ptr [EBP + -0x4]
005dca53  PUSH EDX
005dca54  CALL 0x00686cae
005dca59  ADD ESP,0x4
005dca5c  MOV EAX,dword ptr [EBP + -0x4]
005dca5f  MOV ESP,EBP
005dca61  POP EBP
005dca62  RET 0x4
