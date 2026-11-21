; FUN_004fb840  004fb840
004fb840  PUSH EBP
004fb841  MOV EBP,ESP
004fb843  PUSH ECX
004fb844  MOV dword ptr [EBP + -0x4],ECX
004fb847  MOV EAX,dword ptr [EBP + -0x4]
004fb84a  MOV ECX,dword ptr [EAX + 0x4]
004fb84d  CMP dword ptr [ECX + 0x4],0x0
004fb851  JZ 0x004fb860
004fb853  PUSH 0x0
004fb855  MOV EDX,dword ptr [EBP + -0x4]
004fb858  MOV ECX,dword ptr [EDX + 0x4]
004fb85b  CALL 0x005fc420
004fb860  MOV EAX,dword ptr [EBP + -0x4]
004fb863  MOV ECX,dword ptr [EAX + 0x4]
004fb866  MOV EDX,dword ptr [EBP + -0x4]
004fb869  MOV EAX,dword ptr [EDX + 0x4]
004fb86c  MOV EDX,dword ptr [ECX]
004fb86e  MOV ECX,EAX
004fb870  MOV EAX,dword ptr [EDX + 0x10]
004fb873  CALL EAX
004fb875  MOV ECX,dword ptr [0x0162ee84]
004fb87b  CALL 0x00636ee0
004fb880  MOV ESP,EBP
004fb882  POP EBP
004fb883  RET
