; FUN_00565a50  00565a50
00565a50  PUSH EBP
00565a51  MOV EBP,ESP
00565a53  SUB ESP,0x14
00565a56  MOV dword ptr [EBP + -0x10],ECX
00565a59  MOV dword ptr [EBP + -0x8],0x0
00565a60  XOR EAX,EAX
00565a62  MOV dword ptr [EBP + -0x4],EAX
00565a65  MOV ECX,dword ptr [EBP + -0x10]
00565a68  MOV EDX,dword ptr [EBP + 0x8]
00565a6b  MOV dword ptr [ECX + 0x28],EDX
00565a6e  MOV EAX,dword ptr [EBP + -0x10]
00565a71  MOV ECX,dword ptr [EAX + 0x28]
00565a74  MOV dword ptr [EBP + -0x14],ECX
00565a77  CMP dword ptr [EBP + -0x14],0x6
00565a7b  JA 0x00565b91
00565a81  MOV EDX,dword ptr [EBP + -0x14]
00565a84  JMP dword ptr [EDX*0x4 + 0x565c48]
00565a8b  MOV EAX,dword ptr [EBP + -0x10]
00565a8e  MOV dword ptr [EAX + 0x30],0x31224c
00565a95  MOV ECX,dword ptr [EBP + -0x10]
00565a98  MOV dword ptr [ECX + 0x34],0x0
00565a9f  MOV dword ptr [EBP + -0x8],0x5d
00565aa6  JMP 0x00565bbe
00565aab  MOV EDX,dword ptr [EBP + -0x10]
00565aae  MOV dword ptr [EDX + 0x30],0x31224c
00565ab5  MOV EAX,dword ptr [EBP + -0x10]
00565ab8  MOV dword ptr [EAX + 0x34],0x1
00565abf  JMP 0x00565bbe
00565ac4  MOV ECX,dword ptr [EBP + -0x10]
00565ac7  MOV dword ptr [ECX + 0x34],0x1
00565ace  MOV EDX,dword ptr [EBP + -0x10]
00565ad1  MOV dword ptr [EDX + 0x30],0x31224b
00565ad8  PUSH 0x15f
00565add  MOV ECX,dword ptr [EBP + -0x10]
00565ae0  CALL 0x00565cf0
00565ae5  JMP 0x00565bbe
00565aea  MOV EAX,dword ptr [EBP + -0x10]
00565aed  MOV dword ptr [EAX + 0x34],0x1
00565af4  MOV ECX,dword ptr [EBP + -0x10]
00565af7  MOV dword ptr [ECX + 0x30],0x31224d
00565afe  PUSH 0x15f
00565b03  MOV ECX,dword ptr [EBP + -0x10]
00565b06  CALL 0x00565cf0
00565b0b  JMP 0x00565bbe
00565b10  MOV EDX,dword ptr [EBP + -0x10]
00565b13  MOV dword ptr [EDX + 0x34],0x0
00565b1a  MOV EAX,dword ptr [EBP + -0x10]
00565b1d  MOV dword ptr [EAX + 0x30],0x31224b
00565b24  MOV dword ptr [EBP + -0x8],0x1a3
00565b2b  PUSH 0x15f
00565b30  MOV ECX,dword ptr [EBP + -0x10]
00565b33  CALL 0x00565cf0
00565b38  JMP 0x00565bbe
00565b3d  MOV ECX,dword ptr [EBP + -0x10]
00565b40  MOV dword ptr [ECX + 0x34],0x0
00565b47  MOV EDX,dword ptr [EBP + -0x10]
00565b4a  MOV dword ptr [EDX + 0x30],0x31224b
00565b51  MOV dword ptr [EBP + -0x8],0x149
00565b58  PUSH 0x125
00565b5d  MOV ECX,dword ptr [EBP + -0x10]
00565b60  CALL 0x00565cf0
00565b65  JMP 0x00565bbe
00565b67  MOV EAX,dword ptr [EBP + -0x10]
00565b6a  MOV dword ptr [EAX + 0x34],0x0
00565b71  MOV ECX,dword ptr [EBP + -0x10]
00565b74  MOV dword ptr [ECX + 0x30],0x31224b
00565b7b  MOV dword ptr [EBP + -0x8],0x149
00565b82  PUSH 0x141
00565b87  MOV ECX,dword ptr [EBP + -0x10]
00565b8a  CALL 0x00565cf0
00565b8f  JMP 0x00565bbe
00565b91  MOV EDX,dword ptr [EBP + -0x10]
00565b94  MOV dword ptr [EDX + 0x34],0x2
00565b9b  MOV EAX,dword ptr [EBP + -0x10]
00565b9e  MOV dword ptr [EAX + 0x30],0x31224c
00565ba5  MOV ECX,dword ptr [EBP + -0x10]
00565ba8  MOV EDX,dword ptr [ECX + 0x28]
00565bab  MOV EAX,dword ptr [EDX*0x8 + 0x7437f4]
00565bb2  ADD EAX,0x4
00565bb5  PUSH EAX
00565bb6  MOV ECX,dword ptr [EBP + -0x10]
00565bb9  CALL 0x00565cf0
00565bbe  MOV dword ptr [EBP + -0xc],0x0
00565bc5  JMP 0x00565bd0
00565bc7  MOV ECX,dword ptr [EBP + -0xc]
00565bca  ADD ECX,0x1
00565bcd  MOV dword ptr [EBP + -0xc],ECX
00565bd0  CMP dword ptr [EBP + -0xc],0x8
00565bd4  JGE 0x00565bed
00565bd6  MOV EDX,dword ptr [EBP + -0x10]
00565bd9  MOV EAX,dword ptr [EDX + 0x30]
00565bdc  PUSH EAX
00565bdd  MOV ECX,dword ptr [EBP + -0xc]
00565be0  MOV EDX,dword ptr [EBP + -0x10]
00565be3  MOV ECX,dword ptr [EDX + ECX*0x4]
00565be6  CALL 0x005eaf00
00565beb  JMP 0x00565bc7
00565bed  MOV dword ptr [EBP + -0xc],0x0
00565bf4  JMP 0x00565bff
00565bf6  MOV EAX,dword ptr [EBP + -0xc]
00565bf9  ADD EAX,0x1
00565bfc  MOV dword ptr [EBP + -0xc],EAX
00565bff  CMP dword ptr [EBP + -0xc],0x2
00565c03  JGE 0x00565c40
00565c05  MOV ECX,dword ptr [EBP + -0x10]
00565c08  MOV EDX,dword ptr [ECX + 0x30]
00565c0b  PUSH EDX
00565c0c  MOV EAX,dword ptr [EBP + -0xc]
00565c0f  MOV ECX,dword ptr [EBP + -0x10]
00565c12  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x20]
00565c16  CALL 0x005eaf00
00565c1b  MOV EDX,dword ptr [EBP + -0xc]
00565c1e  MOV EAX,dword ptr [EBP + EDX*0x4 + -0x8]
00565c22  PUSH EAX
00565c23  MOV ECX,dword ptr [EBP + -0xc]
00565c26  MOV EDX,dword ptr [EBP + -0x10]
00565c29  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x20]
00565c2d  MOV ECX,dword ptr [EBP + -0xc]
00565c30  MOV EDX,dword ptr [EBP + -0x10]
00565c33  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x20]
00565c37  MOV EAX,dword ptr [EAX]
00565c39  MOV EDX,dword ptr [EAX + 0x48]
00565c3c  CALL EDX
00565c3e  JMP 0x00565bf6
00565c40  MOV ESP,EBP
00565c42  POP EBP
00565c43  RET 0x4
