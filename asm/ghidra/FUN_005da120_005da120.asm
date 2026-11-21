; FUN_005da120  005da120
005da120  PUSH EBP
005da121  MOV EBP,ESP
005da123  PUSH ECX
005da124  MOV dword ptr [EBP + -0x4],ECX
005da127  MOV EAX,dword ptr [EBP + 0xc]
005da12a  PUSH EAX
005da12b  MOV ECX,dword ptr [EBP + 0x8]
005da12e  PUSH ECX
005da12f  MOV ECX,dword ptr [EBP + -0x4]
005da132  CALL 0x0064fd20
005da137  MOV EDX,dword ptr [EBP + 0x8]
005da13a  MOV EAX,dword ptr [EDX]
005da13c  MOV ECX,dword ptr [EBP + 0x8]
005da13f  MOV EDX,dword ptr [EAX + 0x54]
005da142  CALL EDX
005da144  SUB EAX,0xa
005da147  PUSH EAX
005da148  MOV EAX,dword ptr [EBP + 0x8]
005da14b  MOV EDX,dword ptr [EAX]
005da14d  MOV ECX,dword ptr [EBP + 0x8]
005da150  MOV EAX,dword ptr [EDX + 0x4c]
005da153  CALL EAX
005da155  SUB EAX,0x11
005da158  PUSH EAX
005da159  MOV ECX,dword ptr [EBP + 0x8]
005da15c  MOV EDX,dword ptr [ECX]
005da15e  MOV ECX,dword ptr [EBP + 0x8]
005da161  MOV EAX,dword ptr [EDX + 0x44]
005da164  CALL EAX
005da166  MOV ESP,EBP
005da168  POP EBP
005da169  RET 0x8
