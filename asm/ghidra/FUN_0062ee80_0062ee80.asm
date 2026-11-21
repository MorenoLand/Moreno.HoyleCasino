; FUN_0062ee80  0062ee80
0062ee80  PUSH EBP
0062ee81  MOV EBP,ESP
0062ee83  SUB ESP,0x8
0062ee86  MOV dword ptr [EBP + -0x8],ECX
0062ee89  MOV EAX,dword ptr [EBP + -0x8]
0062ee8c  MOV ECX,dword ptr [EAX + 0x24]
0062ee8f  PUSH ECX
0062ee90  CALL dword ptr [0x006b2190]
0062ee96  ADD ESP,0x4
0062ee99  MOV dword ptr [EBP + -0x4],EAX
0062ee9c  MOV EDX,dword ptr [EBP + -0x8]
0062ee9f  MOV EAX,dword ptr [EDX + 0x24]
0062eea2  PUSH EAX
0062eea3  CALL dword ptr [0x006b2194]
0062eea9  ADD ESP,0x4
0062eeac  MOV ECX,dword ptr [EBP + -0x8]
0062eeaf  MOV dword ptr [ECX + 0x24],EAX
0062eeb2  MOV EDX,dword ptr [EBP + -0x8]
0062eeb5  MOV EAX,dword ptr [EDX + 0x34]
0062eeb8  ADD EAX,0x1
0062eebb  MOV ECX,dword ptr [EBP + -0x8]
0062eebe  MOV dword ptr [ECX + 0x34],EAX
0062eec1  CMP dword ptr [EBP + -0x4],0xa
0062eec5  JNZ 0x0062eee0
0062eec7  MOV EDX,dword ptr [EBP + -0x8]
0062eeca  MOV dword ptr [EDX + 0x34],0x0
0062eed1  MOV EAX,dword ptr [EBP + -0x8]
0062eed4  MOV ECX,dword ptr [EAX + 0x30]
0062eed7  ADD ECX,0x1
0062eeda  MOV EDX,dword ptr [EBP + -0x8]
0062eedd  MOV dword ptr [EDX + 0x30],ECX
0062eee0  MOV EAX,dword ptr [EBP + -0x4]
0062eee3  MOV ESP,EBP
0062eee5  POP EBP
0062eee6  RET
