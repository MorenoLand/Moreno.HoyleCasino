; CloseAllDocuments  00626b90
00626b90  PUSH EBP
00626b91  MOV EBP,ESP
00626b93  PUSH ECX
00626b94  MOV dword ptr [EBP + -0x4],ECX
00626b97  MOV EAX,dword ptr [EBP + -0x4]
00626b9a  CMP dword ptr [EAX + 0x5c],0x0
00626b9e  JZ 0x00626bb7
00626ba0  MOV ECX,dword ptr [EBP + 0x8]
00626ba3  PUSH ECX
00626ba4  MOV EDX,dword ptr [EBP + -0x4]
00626ba7  MOV EAX,dword ptr [EDX + 0x5c]
00626baa  MOV ECX,dword ptr [EBP + -0x4]
00626bad  MOV ECX,dword ptr [ECX + 0x5c]
00626bb0  MOV EDX,dword ptr [EAX]
00626bb2  MOV EAX,dword ptr [EDX + 0x6c]
00626bb5  CALL EAX
00626bb7  MOV ESP,EBP
00626bb9  POP EBP
00626bba  RET 0x4
