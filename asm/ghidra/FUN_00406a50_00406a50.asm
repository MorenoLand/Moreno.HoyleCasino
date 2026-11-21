; FUN_00406a50  00406a50
00406a50  PUSH EBP
00406a51  MOV EBP,ESP
00406a53  PUSH ECX
00406a54  MOV dword ptr [EBP + -0x4],ECX
00406a57  CMP dword ptr [EBP + 0x8],0x0
00406a5b  JNZ 0x00406a61
00406a5d  XOR AL,AL
00406a5f  JMP 0x00406aa8
00406a61  MOV EAX,dword ptr [EBP + 0x8]
00406a64  MOV dword ptr [EAX],0x4
00406a6a  MOV ECX,dword ptr [EBP + 0x8]
00406a6d  MOV dword ptr [ECX + 0x4],0x1
00406a74  MOV EDX,dword ptr [EBP + 0x8]
00406a77  MOV dword ptr [EDX + 0x8],0x4
00406a7e  MOV EAX,dword ptr [EBP + 0x8]
00406a81  MOV dword ptr [EAX + 0xc],0x1
00406a88  MOV ECX,dword ptr [EBP + 0x8]
00406a8b  MOV dword ptr [ECX + 0x10],0x4
00406a92  MOV EDX,dword ptr [EBP + 0x8]
00406a95  MOV dword ptr [EDX + 0x14],0x0
00406a9c  MOV EAX,dword ptr [EBP + 0x8]
00406a9f  MOV dword ptr [EAX + 0x18],0x3
00406aa6  MOV AL,0x1
00406aa8  MOV ESP,EBP
00406aaa  POP EBP
00406aab  RET 0x8
