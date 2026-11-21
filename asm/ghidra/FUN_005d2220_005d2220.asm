; FUN_005d2220  005d2220
005d2220  PUSH EBP
005d2221  MOV EBP,ESP
005d2223  SUB ESP,0x30
005d2226  MOV dword ptr [EBP + -0x28],ECX
005d2229  MOV dword ptr [EBP + -0x24],0x3
005d2230  MOV dword ptr [EBP + -0x20],0x7
005d2237  MOV dword ptr [EBP + -0x1c],0x5
005d223e  MOV dword ptr [EBP + -0x18],0x6
005d2245  MOV dword ptr [EBP + -0x14],0x4
005d224c  MOV dword ptr [EBP + -0x10],0x2
005d2253  MOV dword ptr [EBP + -0xc],0x8
005d225a  MOV dword ptr [EBP + -0x8],0x1
005d2261  MOV dword ptr [EBP + -0x4],0x0
005d2268  PUSH 0x2
005d226a  MOV EAX,[0x0162ee84]
005d226f  MOV ECX,dword ptr [EAX + 0x14]
005d2272  CALL 0x005fb2b0
005d2277  TEST EAX,EAX
005d2279  JZ 0x005d22cb
005d227b  PUSH 0x2
005d227d  MOV ECX,dword ptr [0x0162ee84]
005d2283  MOV ECX,dword ptr [ECX + 0x14]
005d2286  CALL 0x005fb2b0
005d228b  MOV dword ptr [EBP + -0x2c],EAX
005d228e  MOV EDX,dword ptr [EBP + -0x28]
005d2291  MOV EAX,dword ptr [EDX + 0x80]
005d2297  MOV ECX,dword ptr [EBP + EAX*0x4 + -0x24]
005d229b  PUSH ECX
005d229c  MOV EDX,dword ptr [EBP + -0x2c]
005d229f  MOV EAX,dword ptr [EDX]
005d22a1  MOV ECX,dword ptr [EBP + -0x2c]
005d22a4  MOV EDX,dword ptr [EAX + 0xb0]
005d22aa  CALL EDX
005d22ac  PUSH 0x2
005d22ae  MOV EAX,[0x0162ee84]
005d22b3  MOV ECX,dword ptr [EAX + 0x14]
005d22b6  CALL 0x005fb2b0
005d22bb  MOV dword ptr [EBP + -0x30],EAX
005d22be  MOV ECX,dword ptr [EBP + -0x30]
005d22c1  MOV EDX,dword ptr [ECX]
005d22c3  MOV ECX,dword ptr [EBP + -0x30]
005d22c6  MOV EAX,dword ptr [EDX + 0x74]
005d22c9  CALL EAX
005d22cb  MOV ESP,EBP
005d22cd  POP EBP
005d22ce  RET
