; FUN_005fb930  005fb930
005fb930  PUSH EBP
005fb931  MOV EBP,ESP
005fb933  SUB ESP,0x18
005fb936  MOV dword ptr [EBP + -0x14],ECX
005fb939  MOV dword ptr [EBP + -0x4],0x0
005fb940  JMP 0x005fb94b
005fb942  MOV EAX,dword ptr [EBP + -0x4]
005fb945  ADD EAX,0x1
005fb948  MOV dword ptr [EBP + -0x4],EAX
005fb94b  MOV ECX,dword ptr [EBP + 0x10]
005fb94e  CALL 0x0060c9a0
005fb953  CMP dword ptr [EBP + -0x4],EAX
005fb956  JGE 0x005fb9d6
005fb958  MOV ECX,dword ptr [EBP + -0x4]
005fb95b  PUSH ECX
005fb95c  MOV ECX,dword ptr [EBP + 0x10]
005fb95f  CALL 0x0060ca40
005fb964  MOV dword ptr [EBP + -0x8],EAX
005fb967  MOV EDX,dword ptr [EBP + -0x8]
005fb96a  CMP EDX,dword ptr [EBP + 0x8]
005fb96d  JZ 0x005fb982
005fb96f  CMP dword ptr [EBP + 0xc],-0x1
005fb973  JZ 0x005fb9d1
005fb975  MOV ECX,dword ptr [EBP + -0x8]
005fb978  CALL 0x005f5400
005fb97d  CMP EAX,dword ptr [EBP + 0xc]
005fb980  JNZ 0x005fb9d1
005fb982  MOV EAX,dword ptr [EBP + -0x8]
005fb985  PUSH EAX
005fb986  MOV ECX,dword ptr [EBP + 0x10]
005fb989  CALL 0x0060c890
005fb98e  MOVZX ECX,byte ptr [EBP + 0x14]
005fb992  TEST ECX,ECX
005fb994  JZ 0x005fb9cf
005fb996  MOV EDX,dword ptr [EBP + -0x8]
005fb999  MOV EAX,dword ptr [EDX]
005fb99b  MOV ECX,dword ptr [EBP + -0x8]
005fb99e  MOV EDX,dword ptr [EAX + 0x70]
005fb9a1  CALL EDX
005fb9a3  MOV EAX,dword ptr [EBP + -0x8]
005fb9a6  MOV dword ptr [EBP + -0x10],EAX
005fb9a9  MOV ECX,dword ptr [EBP + -0x10]
005fb9ac  MOV dword ptr [EBP + -0xc],ECX
005fb9af  CMP dword ptr [EBP + -0xc],0x0
005fb9b3  JZ 0x005fb9c8
005fb9b5  PUSH 0x1
005fb9b7  MOV EDX,dword ptr [EBP + -0xc]
005fb9ba  MOV EAX,dword ptr [EDX]
005fb9bc  MOV ECX,dword ptr [EBP + -0xc]
005fb9bf  MOV EDX,dword ptr [EAX]
005fb9c1  CALL EDX
005fb9c3  MOV dword ptr [EBP + -0x18],EAX
005fb9c6  JMP 0x005fb9cf
005fb9c8  MOV dword ptr [EBP + -0x18],0x0
005fb9cf  JMP 0x005fb9d6
005fb9d1  JMP 0x005fb942
005fb9d6  MOV ESP,EBP
005fb9d8  POP EBP
005fb9d9  RET 0x10
