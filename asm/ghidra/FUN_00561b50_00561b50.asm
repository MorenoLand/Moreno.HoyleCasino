; FUN_00561b50  00561b50
00561b50  PUSH EBP
00561b51  MOV EBP,ESP
00561b53  SUB ESP,0x1c
00561b56  MOV dword ptr [EBP + -0x1c],ECX
00561b59  MOV EAX,dword ptr [EBP + -0x1c]
00561b5c  MOV ECX,dword ptr [EAX + 0xc8]
00561b62  MOV EDX,dword ptr [EBP + -0x1c]
00561b65  MOV EAX,dword ptr [EDX + 0xc8]
00561b6b  MOV EDX,dword ptr [ECX]
00561b6d  MOV ECX,EAX
00561b6f  MOV EAX,dword ptr [EDX + 0x74]
00561b72  CALL EAX
00561b74  MOV ECX,dword ptr [0x0079343c]
00561b7a  MOV EDX,dword ptr [ECX + 0x4]
00561b7d  MOV dword ptr [EBP + -0x8],EDX
00561b80  CMP dword ptr [EBP + -0x8],0xf423f
00561b87  JL 0x00561b99
00561b89  MOV EAX,dword ptr [EBP + -0x1c]
00561b8c  MOV ECX,dword ptr [EAX + 0xcc]
00561b92  CALL 0x00566410
00561b97  JMP 0x00561bc7
00561b99  PUSH 0x4
00561b9b  MOV ECX,dword ptr [EBP + -0x1c]
00561b9e  MOV ECX,dword ptr [ECX + 0xcc]
00561ba4  CALL 0x00565a50
00561ba9  MOV EDX,dword ptr [0x0079343c]
00561baf  MOV EAX,dword ptr [EDX + 0x4]
00561bb2  MOV dword ptr [EBP + -0xc],EAX
00561bb5  MOV ECX,dword ptr [EBP + -0xc]
00561bb8  PUSH ECX
00561bb9  MOV EDX,dword ptr [EBP + -0x1c]
00561bbc  MOV ECX,dword ptr [EDX + 0xcc]
00561bc2  CALL 0x005664c0
00561bc7  MOV EAX,dword ptr [EBP + -0x1c]
00561bca  MOV ECX,dword ptr [EAX + 0xcc]
00561bd0  CALL 0x00566210
00561bd5  MOV ECX,dword ptr [0x0079343c]
00561bdb  MOV EDX,dword ptr [ECX + 0x8]
00561bde  MOV dword ptr [EBP + -0x10],EDX
00561be1  MOV EAX,[0x0079343c]
00561be6  MOV ECX,dword ptr [EAX + 0x34]
00561be9  CALL 0x0056b910
00561bee  ADD EAX,0x1
00561bf1  IMUL EAX,dword ptr [EBP + -0x10]
00561bf5  PUSH EAX
00561bf6  MOV ECX,dword ptr [EBP + -0x1c]
00561bf9  MOV ECX,dword ptr [ECX + 0xd4]
00561bff  CALL 0x005664c0
00561c04  MOV EDX,dword ptr [EBP + -0x1c]
00561c07  MOV ECX,dword ptr [EDX + 0xd4]
00561c0d  CALL 0x00566210
00561c12  MOV EAX,dword ptr [EBP + -0x1c]
00561c15  MOV ECX,dword ptr [EAX + 0xd0]
00561c1b  MOV EDX,dword ptr [EBP + -0x1c]
00561c1e  MOV EAX,dword ptr [EDX + 0xd0]
00561c24  MOV EDX,dword ptr [ECX]
00561c26  MOV ECX,EAX
00561c28  MOV EAX,dword ptr [EDX + 0x74]
00561c2b  CALL EAX
00561c2d  MOV ECX,dword ptr [0x0079343c]
00561c33  MOV EDX,dword ptr [ECX + 0x8]
00561c36  MOV dword ptr [EBP + -0x14],EDX
00561c39  CMP dword ptr [EBP + -0x14],0x0
00561c3d  JZ 0x00561d04
00561c43  MOV ECX,dword ptr [EBP + -0x1c]
00561c46  CALL 0x005602a0
00561c4b  MOV EAX,dword ptr [EBP + -0x1c]
00561c4e  MOV ECX,dword ptr [EAX + 0xd8]
00561c54  MOV EDX,dword ptr [EBP + -0x1c]
00561c57  MOV EAX,dword ptr [EDX + 0xd8]
00561c5d  MOV EDX,dword ptr [ECX]
00561c5f  MOV ECX,EAX
00561c61  MOV EAX,dword ptr [EDX + 0x70]
00561c64  CALL EAX
00561c66  MOV ECX,dword ptr [EBP + -0x1c]
00561c69  MOV ECX,dword ptr [ECX + 0xdc]
00561c6f  CALL 0x00566310
00561c74  MOV EDX,dword ptr [EBP + -0x1c]
00561c77  MOV ECX,dword ptr [EDX + 0x4]
00561c7a  CALL 0x00566a20
00561c7f  PUSH 0x4
00561c81  MOV ECX,dword ptr [EBP + -0x1c]
00561c84  CALL 0x005601d0
00561c89  MOV dword ptr [EBP + -0x4],0x0
00561c90  JMP 0x00561c9b
00561c92  MOV EAX,dword ptr [EBP + -0x4]
00561c95  ADD EAX,0x1
00561c98  MOV dword ptr [EBP + -0x4],EAX
00561c9b  CMP dword ptr [EBP + -0x4],0x5
00561c9f  JGE 0x00561cc1
00561ca1  MOV ECX,dword ptr [EBP + -0x4]
00561ca4  MOV EDX,dword ptr [EBP + -0x1c]
00561ca7  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x60]
00561cab  MOV ECX,dword ptr [EBP + -0x4]
00561cae  MOV EDX,dword ptr [EBP + -0x1c]
00561cb1  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x60]
00561cb5  MOV EAX,dword ptr [EAX]
00561cb7  MOV EDX,dword ptr [EAX + 0xd0]
00561cbd  CALL EDX
00561cbf  JMP 0x00561c92
00561cc1  MOV EAX,[0x0079343c]
00561cc6  MOV ECX,dword ptr [EAX + 0x8]
00561cc9  MOV dword ptr [EBP + -0x18],ECX
00561ccc  CMP dword ptr [EBP + -0x18],0x5
00561cd0  JNZ 0x00561cde
00561cd2  PUSH 0x6
00561cd4  MOV ECX,dword ptr [EBP + -0x1c]
00561cd7  CALL 0x00560240
00561cdc  JMP 0x00561d04
00561cde  MOV ECX,dword ptr [0x0079343c]
00561ce4  CALL 0x0056a5d0
00561ce9  MOVZX EDX,AL
00561cec  TEST EDX,EDX
00561cee  JZ 0x00561d04
00561cf0  PUSH 0x1
00561cf2  MOV ECX,dword ptr [EBP + -0x1c]
00561cf5  CALL 0x005601d0
00561cfa  PUSH 0x0
00561cfc  MOV ECX,dword ptr [EBP + -0x1c]
00561cff  CALL 0x005601d0
00561d04  MOV ESP,EBP
00561d06  POP EBP
00561d07  RET
