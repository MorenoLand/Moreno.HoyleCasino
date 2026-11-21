; FUN_0056df20  0056df20
0056df20  PUSH EBP
0056df21  MOV EBP,ESP
0056df23  SUB ESP,0x8
0056df26  MOV dword ptr [EBP + -0x8],ECX
0056df29  MOV word ptr [EBP + -0x4],0x0
0056df2f  JMP 0x0056df3d
0056df31  MOV AX,word ptr [EBP + -0x4]
0056df35  ADD AX,0x1
0056df39  MOV word ptr [EBP + -0x4],AX
0056df3d  MOVSX ECX,word ptr [EBP + -0x4]
0056df41  CMP ECX,0x5
0056df44  JGE 0x0056df6a
0056df46  MOVSX EDX,word ptr [EBP + -0x4]
0056df4a  MOV EAX,dword ptr [EBP + -0x8]
0056df4d  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x8]
0056df51  MOVSX EDX,word ptr [EBP + -0x4]
0056df55  MOV EAX,dword ptr [EBP + -0x8]
0056df58  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x8]
0056df5c  MOV EAX,dword ptr [ECX]
0056df5e  MOV ECX,EDX
0056df60  MOV EDX,dword ptr [EAX + 0xd0]
0056df66  CALL EDX
0056df68  JMP 0x0056df31
0056df6a  MOV ESP,EBP
0056df6c  POP EBP
0056df6d  RET
