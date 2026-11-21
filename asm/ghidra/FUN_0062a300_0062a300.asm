; FUN_0062a300  0062a300
0062a300  PUSH EBP
0062a301  MOV EBP,ESP
0062a303  PUSH ECX
0062a304  MOV dword ptr [EBP + -0x4],ECX
0062a307  MOV ECX,dword ptr [EBP + -0x4]
0062a30a  CALL 0x005f5420
0062a30f  MOV EAX,dword ptr [EBP + -0x4]
0062a312  CMP dword ptr [EAX + 0x48],0x0
0062a316  JZ 0x0062a32b
0062a318  MOV ECX,dword ptr [EBP + -0x4]
0062a31b  MOV EDX,dword ptr [ECX + 0x48]
0062a31e  MOV EAX,dword ptr [EBP + -0x4]
0062a321  MOV ECX,dword ptr [EAX + 0x48]
0062a324  MOV EDX,dword ptr [EDX]
0062a326  MOV EAX,dword ptr [EDX + 0x70]
0062a329  CALL EAX
0062a32b  MOV ECX,dword ptr [EBP + -0x4]
0062a32e  MOV EDX,dword ptr [ECX + 0x4c]
0062a331  MOV EAX,dword ptr [EBP + -0x4]
0062a334  MOV ECX,dword ptr [EAX + 0x4c]
0062a337  MOV EDX,dword ptr [EDX]
0062a339  MOV EAX,dword ptr [EDX + 0x70]
0062a33c  CALL EAX
0062a33e  MOV ECX,dword ptr [EBP + -0x4]
0062a341  MOV EDX,dword ptr [ECX + 0x50]
0062a344  MOV EAX,dword ptr [EBP + -0x4]
0062a347  MOV ECX,dword ptr [EAX + 0x50]
0062a34a  MOV EDX,dword ptr [EDX]
0062a34c  MOV EAX,dword ptr [EDX + 0x70]
0062a34f  CALL EAX
0062a351  MOV ECX,dword ptr [EBP + -0x4]
0062a354  CMP dword ptr [ECX + 0x54],0x0
0062a358  JZ 0x0062a36d
0062a35a  MOV EDX,dword ptr [EBP + -0x4]
0062a35d  MOV EAX,dword ptr [EDX + 0x54]
0062a360  MOV ECX,dword ptr [EBP + -0x4]
0062a363  MOV ECX,dword ptr [ECX + 0x54]
0062a366  MOV EDX,dword ptr [EAX]
0062a368  MOV EAX,dword ptr [EDX + 0x70]
0062a36b  CALL EAX
0062a36d  MOV ESP,EBP
0062a36f  POP EBP
0062a370  RET
