; FUN_00614fd0  00614fd0
00614fd0  PUSH EBP
00614fd1  MOV EBP,ESP
00614fd3  PUSH ECX
00614fd4  MOV dword ptr [EBP + -0x4],ECX
00614fd7  MOV ECX,dword ptr [EBP + -0x4]
00614fda  CALL 0x005f5420
00614fdf  MOV EAX,dword ptr [EBP + -0x4]
00614fe2  MOV ECX,dword ptr [EAX + 0x48]
00614fe5  MOV EDX,dword ptr [EBP + -0x4]
00614fe8  MOV EAX,dword ptr [EDX + 0x48]
00614feb  MOV EDX,dword ptr [ECX]
00614fed  MOV ECX,EAX
00614fef  MOV EAX,dword ptr [EDX + 0x70]
00614ff2  CALL EAX
00614ff4  MOV ECX,dword ptr [EBP + -0x4]
00614ff7  MOV EDX,dword ptr [ECX + 0x4c]
00614ffa  MOV EAX,dword ptr [EBP + -0x4]
00614ffd  MOV ECX,dword ptr [EAX + 0x4c]
00615000  MOV EDX,dword ptr [EDX]
00615002  MOV EAX,dword ptr [EDX + 0x70]
00615005  CALL EAX
00615007  MOV ECX,dword ptr [EBP + -0x4]
0061500a  MOV EDX,dword ptr [ECX + 0x50]
0061500d  MOV EAX,dword ptr [EBP + -0x4]
00615010  MOV ECX,dword ptr [EAX + 0x50]
00615013  MOV EDX,dword ptr [EDX]
00615015  MOV EAX,dword ptr [EDX + 0x70]
00615018  CALL EAX
0061501a  MOV ECX,dword ptr [EBP + -0x4]
0061501d  MOV EDX,dword ptr [ECX + 0x54]
00615020  MOV EAX,dword ptr [EBP + -0x4]
00615023  MOV ECX,dword ptr [EAX + 0x54]
00615026  MOV EDX,dword ptr [EDX]
00615028  MOV EAX,dword ptr [EDX + 0x70]
0061502b  CALL EAX
0061502d  MOV ECX,dword ptr [EBP + -0x4]
00615030  MOV EDX,dword ptr [ECX + 0x58]
00615033  MOV EAX,dword ptr [EBP + -0x4]
00615036  MOV ECX,dword ptr [EAX + 0x58]
00615039  MOV EDX,dword ptr [EDX]
0061503b  MOV EAX,dword ptr [EDX + 0x70]
0061503e  CALL EAX
00615040  MOV ESP,EBP
00615042  POP EBP
00615043  RET
