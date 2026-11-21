; FUN_005d2180  005d2180
005d2180  PUSH EBP
005d2181  MOV EBP,ESP
005d2183  SUB ESP,0x30
005d2186  MOV dword ptr [EBP + -0x28],ECX
005d2189  MOV dword ptr [EBP + -0x24],0x3
005d2190  MOV dword ptr [EBP + -0x20],0x7
005d2197  MOV dword ptr [EBP + -0x1c],0x5
005d219e  MOV dword ptr [EBP + -0x18],0x6
005d21a5  MOV dword ptr [EBP + -0x14],0x4
005d21ac  MOV dword ptr [EBP + -0x10],0x2
005d21b3  MOV dword ptr [EBP + -0xc],0x8
005d21ba  MOV dword ptr [EBP + -0x8],0x1
005d21c1  MOV dword ptr [EBP + -0x4],0x0
005d21c8  PUSH 0x3
005d21ca  MOV EAX,[0x0162ee84]
005d21cf  MOV ECX,dword ptr [EAX + 0x14]
005d21d2  CALL 0x005fb2b0
005d21d7  MOV dword ptr [EBP + -0x2c],EAX
005d21da  MOV ECX,dword ptr [EBP + 0x8]
005d21dd  MOV EDX,dword ptr [EBP + ECX*0x4 + -0x24]
005d21e1  PUSH EDX
005d21e2  MOV EAX,dword ptr [EBP + -0x2c]
005d21e5  MOV EDX,dword ptr [EAX]
005d21e7  MOV ECX,dword ptr [EBP + -0x2c]
005d21ea  MOV EAX,dword ptr [EDX + 0xb0]
005d21f0  CALL EAX
005d21f2  PUSH 0x3
005d21f4  MOV ECX,dword ptr [0x0162ee84]
005d21fa  MOV ECX,dword ptr [ECX + 0x14]
005d21fd  CALL 0x005fb2b0
005d2202  MOV dword ptr [EBP + -0x30],EAX
005d2205  MOV EDX,dword ptr [EBP + -0x30]
005d2208  MOV EAX,dword ptr [EDX]
005d220a  MOV ECX,dword ptr [EBP + -0x30]
005d220d  MOV EDX,dword ptr [EAX + 0x74]
005d2210  CALL EDX
005d2212  MOV ESP,EBP
005d2214  POP EBP
005d2215  RET 0x4
