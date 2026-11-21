; FUN_005da1c0  005da1c0
005da1c0  PUSH EBP
005da1c1  MOV EBP,ESP
005da1c3  PUSH ECX
005da1c4  MOV dword ptr [EBP + -0x4],ECX
005da1c7  MOV EAX,dword ptr [EBP + 0x8]
005da1ca  MOV EDX,dword ptr [EAX]
005da1cc  MOV ECX,dword ptr [EBP + 0x8]
005da1cf  MOV EAX,dword ptr [EDX + 0x54]
005da1d2  CALL EAX
005da1d4  ADD EAX,0x24
005da1d7  PUSH EAX
005da1d8  MOV ECX,dword ptr [EBP + 0x8]
005da1db  MOV EDX,dword ptr [ECX]
005da1dd  MOV ECX,dword ptr [EBP + 0x8]
005da1e0  MOV EAX,dword ptr [EDX + 0x4c]
005da1e3  CALL EAX
005da1e5  ADD EAX,0x14
005da1e8  PUSH EAX
005da1e9  MOV ECX,dword ptr [EBP + 0x8]
005da1ec  MOV EDX,dword ptr [ECX + 0x190]
005da1f2  MOV EAX,dword ptr [EBP + 0x8]
005da1f5  MOV ECX,dword ptr [EAX + 0x190]
005da1fb  MOV EDX,dword ptr [EDX]
005da1fd  MOV EAX,dword ptr [EDX + 0x44]
005da200  CALL EAX
005da202  MOV ESP,EBP
005da204  POP EBP
005da205  RET 0x8
