; FUN_00612b80  00612b80
00612b80  PUSH EBP
00612b81  MOV EBP,ESP
00612b83  SUB ESP,0x30
00612b86  XOR EAX,EAX
00612b88  MOV byte ptr [EBP + -0x1],AL
00612b8b  MOV CL,byte ptr [EBP + -0x4]
00612b8e  MOV byte ptr [EBP + -0x2],CL
00612b91  MOV EDX,dword ptr [EBP + 0xc]
00612b94  MOV dword ptr [EBP + -0xc],EDX
00612b97  MOV EAX,dword ptr [EBP + 0x8]
00612b9a  MOV dword ptr [EBP + -0x14],EAX
00612b9d  MOV CL,byte ptr [EBP + -0x1]
00612ba0  MOV byte ptr [EBP + -0x2e],CL
00612ba3  MOV DL,byte ptr [EBP + -0x3]
00612ba6  MOV byte ptr [EBP + -0x2d],DL
00612ba9  MOV EAX,dword ptr [EBP + 0x10]
00612bac  MOV dword ptr [EBP + -0x2c],EAX
00612baf  MOV EAX,dword ptr [EBP + -0xc]
00612bb2  SUB EAX,dword ptr [EBP + -0x14]
00612bb5  CDQ
00612bb6  MOV ECX,0x48
00612bbb  IDIV ECX
00612bbd  IMUL EAX,EAX,0x48
00612bc0  ADD EAX,dword ptr [EBP + -0x2c]
00612bc3  MOV dword ptr [EBP + -0x18],EAX
00612bc6  XOR EDX,EDX
00612bc8  MOV byte ptr [EBP + -0x19],DL
00612bcb  XOR EAX,EAX
00612bcd  MOV byte ptr [EBP + -0x1a],AL
00612bd0  MOV CL,byte ptr [EBP + -0x19]
00612bd3  MOV byte ptr [EBP + -0x26],CL
00612bd6  MOV DL,byte ptr [EBP + -0x1a]
00612bd9  MOV byte ptr [EBP + -0x25],DL
00612bdc  MOV EAX,dword ptr [EBP + -0x2c]
00612bdf  MOV dword ptr [EBP + -0x24],EAX
00612be2  MOV ECX,dword ptr [EBP + -0x14]
00612be5  MOV dword ptr [EBP + -0x20],ECX
00612be8  JMP 0x00612bfc
00612bea  MOV EDX,dword ptr [EBP + -0x24]
00612bed  ADD EDX,0x48
00612bf0  MOV dword ptr [EBP + -0x24],EDX
00612bf3  MOV EAX,dword ptr [EBP + -0x20]
00612bf6  ADD EAX,0x48
00612bf9  MOV dword ptr [EBP + -0x20],EAX
00612bfc  MOV ECX,dword ptr [EBP + -0x20]
00612bff  CMP ECX,dword ptr [EBP + -0xc]
00612c02  JZ 0x00612c12
00612c04  MOV EDX,dword ptr [EBP + -0x20]
00612c07  PUSH EDX
00612c08  MOV ECX,dword ptr [EBP + -0x24]
00612c0b  CALL 0x00610650
00612c10  JMP 0x00612bea
00612c12  MOV EAX,dword ptr [EBP + -0x18]
00612c15  MOV ESP,EBP
00612c17  POP EBP
00612c18  RET
