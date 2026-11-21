; FUN_00646cb0  00646cb0
00646cb0  PUSH EBP
00646cb1  MOV EBP,ESP
00646cb3  SUB ESP,0x10
00646cb6  MOV dword ptr [EBP + -0xc],ECX
00646cb9  MOV EAX,dword ptr [EBP + -0xc]
00646cbc  MOV ECX,dword ptr [EAX + 0x4]
00646cbf  MOV dword ptr [EBP + -0x4],ECX
00646cc2  MOV ECX,dword ptr [EBP + -0x4]
00646cc5  CALL 0x0063aac0
00646cca  MOV EDX,dword ptr [EAX]
00646ccc  MOV dword ptr [EBP + -0x8],EDX
00646ccf  CMP dword ptr [EBP + -0x8],0x3
00646cd3  JNZ 0x00646cf7
00646cd5  MOV EAX,dword ptr [EBP + -0xc]
00646cd8  CMP dword ptr [EAX + 0x14],0x0
00646cdc  JZ 0x00646cee
00646cde  MOV ECX,dword ptr [EBP + -0xc]
00646ce1  MOV ECX,dword ptr [ECX + 0x14]
00646ce4  CALL 0x006646c0
00646ce9  MOV byte ptr [EBP + -0xd],AL
00646cec  JMP 0x00646cf2
00646cee  MOV byte ptr [EBP + -0xd],0x1
00646cf2  MOV AL,byte ptr [EBP + -0xd]
00646cf5  JMP 0x00646d02
00646cf7  MOV EDX,dword ptr [EBP + -0xc]
00646cfa  MOV ECX,dword ptr [EDX + 0xc]
00646cfd  CALL 0x005f54c0
00646d02  MOV ESP,EBP
00646d04  POP EBP
00646d05  RET
