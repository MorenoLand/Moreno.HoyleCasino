; FUN_0045ffe0  0045ffe0
0045ffe0  PUSH EBP
0045ffe1  MOV EBP,ESP
0045ffe3  SUB ESP,0x18
0045ffe6  MOV dword ptr [EBP + -0x18],ECX
0045ffe9  PUSH 0x0
0045ffeb  PUSH -0x1
0045ffed  MOV ECX,dword ptr [EBP + -0x18]
0045fff0  CALL 0x00460420
0045fff5  MOV EAX,dword ptr [EBP + -0x18]
0045fff8  MOV dword ptr [EAX + 0x124],0xffffffff
00460002  MOV ECX,dword ptr [EBP + -0x18]
00460005  MOV dword ptr [ECX + 0x128],0xffffffff
0046000f  MOV ECX,dword ptr [EBP + -0x18]
00460012  CALL 0x00460470
00460017  MOV EDX,dword ptr [EBP + -0x18]
0046001a  MOV byte ptr [EDX + 0x115],0x0
00460021  MOV EAX,dword ptr [EBP + -0x18]
00460024  MOV byte ptr [EAX + 0x114],0x0
0046002b  MOV dword ptr [EBP + -0x4],0x0
00460032  JMP 0x0046003d
00460034  MOV ECX,dword ptr [EBP + -0x4]
00460037  ADD ECX,0x1
0046003a  MOV dword ptr [EBP + -0x4],ECX
0046003d  CMP dword ptr [EBP + -0x4],0x5
00460041  JGE 0x00460096
00460043  CMP dword ptr [EBP + -0x4],0x4
00460047  JGE 0x00460094
00460049  MOV EDX,dword ptr [EBP + -0x4]
0046004c  PUSH EDX
0046004d  CALL 0x005dcb00
00460052  ADD ESP,0x4
00460055  MOV dword ptr [EBP + -0xc],EAX
00460058  MOV EAX,dword ptr [EBP + -0xc]
0046005b  MOV byte ptr [EAX + 0x4a0],0x0
00460062  MOV ECX,dword ptr [EBP + -0x4]
00460065  PUSH ECX
00460066  CALL 0x005dcb00
0046006b  ADD ESP,0x4
0046006e  MOV dword ptr [EBP + -0x10],EAX
00460071  MOV EDX,dword ptr [EBP + -0x10]
00460074  MOV byte ptr [EDX + 0x4a1],0x0
0046007b  MOV EAX,dword ptr [EBP + -0x4]
0046007e  PUSH EAX
0046007f  CALL 0x005dcb00
00460084  ADD ESP,0x4
00460087  MOV dword ptr [EBP + -0x14],EAX
0046008a  MOV ECX,dword ptr [EBP + -0x14]
0046008d  MOV byte ptr [ECX + 0x4a2],0x0
00460094  JMP 0x00460034
00460096  MOV EDX,dword ptr [EBP + -0x18]
00460099  MOV ECX,dword ptr [EDX + 0x4]
0046009c  CALL 0x005cb9b0
004600a1  MOV dword ptr [EBP + -0x4],0x0
004600a8  JMP 0x004600b3
004600aa  MOV EAX,dword ptr [EBP + -0x4]
004600ad  ADD EAX,0x1
004600b0  MOV dword ptr [EBP + -0x4],EAX
004600b3  CMP dword ptr [EBP + -0x4],0x5
004600b7  JGE 0x00460164
004600bd  MOV dword ptr [EBP + -0x8],0x0
004600c4  JMP 0x004600cf
004600c6  MOV ECX,dword ptr [EBP + -0x8]
004600c9  ADD ECX,0x1
004600cc  MOV dword ptr [EBP + -0x8],ECX
004600cf  CMP dword ptr [EBP + -0x8],0x7
004600d3  JGE 0x004600e9
004600d5  PUSH 0x0
004600d7  MOV EDX,dword ptr [EBP + -0x8]
004600da  PUSH EDX
004600db  MOV EAX,dword ptr [EBP + -0x4]
004600de  PUSH EAX
004600df  MOV ECX,dword ptr [EBP + -0x18]
004600e2  CALL 0x004604a0
004600e7  JMP 0x004600c6
004600e9  MOV ECX,dword ptr [EBP + -0x4]
004600ec  MOV EDX,dword ptr [EBP + -0x18]
004600ef  MOV word ptr [EDX + ECX*0x2 + 0xa2],0x0
004600f9  MOV EAX,dword ptr [EBP + -0x4]
004600fc  MOV ECX,dword ptr [EBP + -0x18]
004600ff  MOV word ptr [ECX + EAX*0x2 + 0xac],0x0
00460109  MOV EDX,dword ptr [EBP + -0x4]
0046010c  MOV EAX,dword ptr [EBP + -0x18]
0046010f  MOV dword ptr [EAX + EDX*0x4 + 0xb8],0xffffffff
0046011a  MOV ECX,dword ptr [EBP + -0x4]
0046011d  MOV EDX,dword ptr [EBP + -0x18]
00460120  MOV dword ptr [EDX + ECX*0x4 + 0xcc],0xffffffff
0046012b  MOV EAX,dword ptr [EBP + -0x18]
0046012e  ADD EAX,dword ptr [EBP + -0x4]
00460131  MOV byte ptr [EAX + 0xe0],0x0
00460138  MOV ECX,dword ptr [EBP + -0x18]
0046013b  ADD ECX,dword ptr [EBP + -0x4]
0046013e  MOV byte ptr [ECX + 0xe5],0x0
00460145  MOV EDX,dword ptr [EBP + -0x18]
00460148  ADD EDX,dword ptr [EBP + -0x4]
0046014b  MOV byte ptr [EDX + 0xea],0x0
00460152  MOV EAX,dword ptr [EBP + -0x18]
00460155  ADD EAX,dword ptr [EBP + -0x4]
00460158  MOV byte ptr [EAX + 0xef],0x0
0046015f  JMP 0x004600aa
00460164  MOV dword ptr [EBP + -0x4],0x0
0046016b  JMP 0x00460176
0046016d  MOV ECX,dword ptr [EBP + -0x4]
00460170  ADD ECX,0x1
00460173  MOV dword ptr [EBP + -0x4],ECX
00460176  CMP dword ptr [EBP + -0x4],0x5
0046017a  JGE 0x004601a5
0046017c  MOV EDX,dword ptr [EBP + -0x18]
0046017f  ADD EDX,dword ptr [EBP + -0x4]
00460182  MOV byte ptr [EDX + 0xf4],0x0
00460189  MOV EAX,dword ptr [EBP + -0x18]
0046018c  ADD EAX,dword ptr [EBP + -0x4]
0046018f  MOV byte ptr [EAX + 0xfe],0x0
00460196  MOV ECX,dword ptr [EBP + -0x18]
00460199  ADD ECX,dword ptr [EBP + -0x4]
0046019c  MOV byte ptr [ECX + 0xf9],0x0
004601a3  JMP 0x0046016d
004601a5  MOV ESP,EBP
004601a7  POP EBP
004601a8  RET
