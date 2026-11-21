; FUN_0045dd40  0045dd40
0045dd40  PUSH EBP
0045dd41  MOV EBP,ESP
0045dd43  SUB ESP,0x8
0045dd46  MOV dword ptr [EBP + -0x8],ECX
0045dd49  MOV EAX,dword ptr [EBP + -0x8]
0045dd4c  CMP dword ptr [EAX + 0x80],0x1
0045dd53  JZ 0x0045dd72
0045dd55  MOV ECX,dword ptr [EBP + -0x8]
0045dd58  MOV EDX,dword ptr [ECX]
0045dd5a  MOV ECX,dword ptr [EBP + -0x8]
0045dd5d  MOV EAX,dword ptr [EDX + 0x25c]
0045dd63  CALL EAX
0045dd65  MOV dword ptr [EBP + -0x4],EAX
0045dd68  MOV ECX,dword ptr [EBP + -0x4]
0045dd6b  MOV byte ptr [ECX + 0x4a0],0x1
0045dd72  MOV ECX,dword ptr [0x0079073c]
0045dd78  CALL 0x0045b300
0045dd7d  MOV ESP,EBP
0045dd7f  POP EBP
0045dd80  RET
