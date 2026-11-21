; FUN_00463aa0  00463aa0
00463aa0  PUSH EBP
00463aa1  MOV EBP,ESP
00463aa3  SUB ESP,0x14
00463aa6  MOV dword ptr [EBP + -0x10],0x1
00463aad  MOV dword ptr [EBP + -0x8],0x1
00463ab4  MOV dword ptr [EBP + -0x4],0x0
00463abb  JMP 0x00463ac6
00463abd  MOV EAX,dword ptr [EBP + -0x4]
00463ac0  ADD EAX,0x1
00463ac3  MOV dword ptr [EBP + -0x4],EAX
00463ac6  MOV ECX,dword ptr [EBP + -0x4]
00463ac9  CMP ECX,dword ptr [EBP + 0xc]
00463acc  JGE 0x00463b45
00463ace  MOV EDX,dword ptr [EBP + -0x4]
00463ad1  MOV EAX,dword ptr [EBP + 0x8]
00463ad4  MOV CX,word ptr [EAX + EDX*0x2]
00463ad8  PUSH ECX
00463ad9  CALL 0x00641280
00463ade  ADD ESP,0x4
00463ae1  MOV dword ptr [EBP + -0xc],EAX
00463ae4  MOV dword ptr [EBP + -0x14],0x0
00463aeb  JMP 0x00463af6
00463aed  MOV EDX,dword ptr [EBP + -0x14]
00463af0  ADD EDX,0x1
00463af3  MOV dword ptr [EBP + -0x14],EDX
00463af6  MOV EAX,dword ptr [EBP + -0x14]
00463af9  CMP EAX,dword ptr [EBP + 0xc]
00463afc  JGE 0x00463b2b
00463afe  MOV ECX,dword ptr [EBP + -0x4]
00463b01  CMP ECX,dword ptr [EBP + -0x14]
00463b04  JNZ 0x00463b08
00463b06  JMP 0x00463aed
00463b08  MOV EDX,dword ptr [EBP + -0x14]
00463b0b  MOV EAX,dword ptr [EBP + 0x8]
00463b0e  MOV CX,word ptr [EAX + EDX*0x2]
00463b12  PUSH ECX
00463b13  CALL 0x00641280
00463b18  ADD ESP,0x4
00463b1b  CMP dword ptr [EBP + -0xc],EAX
00463b1e  JNZ 0x00463b29
00463b20  MOV EDX,dword ptr [EBP + -0x10]
00463b23  ADD EDX,0x1
00463b26  MOV dword ptr [EBP + -0x10],EDX
00463b29  JMP 0x00463aed
00463b2b  MOV EAX,dword ptr [EBP + -0x10]
00463b2e  CMP EAX,dword ptr [EBP + -0x8]
00463b31  JLE 0x00463b39
00463b33  MOV ECX,dword ptr [EBP + -0x10]
00463b36  MOV dword ptr [EBP + -0x8],ECX
00463b39  MOV dword ptr [EBP + -0x10],0x1
00463b40  JMP 0x00463abd
00463b45  MOV EAX,dword ptr [EBP + -0x8]
00463b48  MOV ESP,EBP
00463b4a  POP EBP
00463b4b  RET
